set(DIR_SOURCES ${DIR_SOURCES}
    ${CMAKE_CURRENT_SOURCE_DIR}/cpu.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/gdbserver.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/dev.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/log.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/mem.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/alloc.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/sched.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/timer.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/util.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xbe.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xbox.cpp
    )

if (USE_CPU_UNICORN)
set(DIR_SOURCES ${DIR_SOURCES}
    ${CMAKE_CURRENT_SOURCE_DIR}/cpu_uc.cpp
    )
endif (USE_CPU_UNICORN)

add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/kernel")
add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/video")

set(SOURCES ${SOURCES}
    ${DIR_SOURCES}
    PARENT_SCOPE
    )
