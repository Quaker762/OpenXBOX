**If you're looking for a functional Xbox emulator, the best Xbox emulation platform to date is [XQEMU](http://xqemu.com/)!**

What is this then? Just some proof of concept stuff I'm toying around with. The
goal is to make Xbox emulation a little easier to get started with by not
requiring any disk images or flash dumps. How? High-level emulation of the
Xbox Kernel and low-level emulation of the graphics/sound/networking
controllers (required because the Xbox games, or "titles" in MS parlance,
actually control those things directly and not via the Kernel).

---

# OpenXBOX
Open-Source (Original) Xbox Emulation Project

The current state of this thing is just a tad bit more tangible than vaporware.
Essentially right now it just initializes a basic x86 system (courtesy of
[Unicorn](http://www.unicorn-engine.org/)), loads an XBE, handles a couple of
the Kernel functions, and renders the framebuffer. No networking, no audio, no
3D graphics, no real Kernel support... yet ;).

How to Build
------------
You'll need CMake, SDL, GLEW, and Unicorn. This should work anywhere with a
bit of work.

```
$ brew install cmake sdl2 glew unicorn
$ mkdir build; cd build
$ cmake .. && make
$ ./openxbox executable.xbe
```

On Windows, you'll need [CMake](https://cmake.org/download/). This method has
been confirmed to work with [Visual Studio Community 2017](https://www.visualstudio.com/downloads/).
All necessary dependencies are included in the extern folder.
```
> mkdir build
> cd build
> cmake -G "Visual Studio 15 2017 Win64" ..
```
Then open the .sln file created in the build folder and build the openxbox
project. Remember to set it as the startup project before running.

TODO: for now, you need to copy the following required DLLs to the output
folder in order to run/debug the application:
- extern/glew-2.1.0/win64/bin/glew32.dll
- extern/SDL2-2.0.7/lib/x64/SDL2.dll
- extern/unicorn-1.0.1/win64/unicorn.dll
- extern/unicorn-1.0.1/win64/libgcc_s_seh-1.dll
- extern/unicorn-1.0.1/win64/libwinpthread-1.dll

Design Concept
--------------
- High-Level Emulation (HLE) for Kernel API
  - When game tries to call into kernel, trap and emulate it with our own code
  - Sidesteps need for firmware images (BIOS/MCPX) and keys
  - Faster/easier to integrate into system (access filesystem directly)
  - Eliminate need for most legacy PC emulation
- Hardware Accelerated Virtualization of Game Code
  - [KVM](https://www.kernel.org/doc/Documentation/virtual/kvm/api.txt) on Linux
  - [HAXM](https://github.com/intel/haxm) or [Hypervisor Framework](https://developer.apple.com/documentation/hypervisor) on macOS
  - [HAXM](https://github.com/intel/haxm) on Windows?
  - CPU emulation fallback when hardware acceleration not available
    - Potentially:
      - [libx86emu](https://github.com/wfeldt/libx86emu)
      - [libcpu](https://github.com/libcpu/libcpu)
      - [bochs](http://bochs.sourceforge.net/)
      - [unicorn](http://www.unicorn-engine.org/)
- LLE for code that touches hardware (nv2a, nvnet)
  - Xbox game code will interface with parts of the hardware directly (for instance, graphics and networking)
  - We can trap on MMIO accesses directly from virtualized game code, handle the event, then return
 
Debugging Guest Code
--------------------
The XBE that is running can be debugged using the GDB debugger. Once enabled,
the emulator will open a TCP socket upon startup and wait for the GDB debugger
to connect. Once connected, you can examine the CPU state, set breakpoints, 
single-step instructions, etc. A sample .gdbinit file is provided with useful
GDB default settings to be loaded when you start GDB in this directory.
