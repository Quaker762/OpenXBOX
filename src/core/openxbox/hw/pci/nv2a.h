#pragma once

#include <cstdint>

#include "../defs.h"
#include "pci.h"

namespace openxbox {

class NV2ADevice : public PCIDevice {
public:
    // constructor
	NV2ADevice(uint16_t vendorID, uint16_t deviceID, uint8_t revisionID);

    // PCI Device functions
    void Init();
    void Reset();

    uint32_t IORead(int barIndex, uint32_t port, unsigned size);
    void IOWrite(int barIndex, uint32_t port, uint32_t value, unsigned size);
    uint32_t MMIORead(int barIndex, uint32_t addr, unsigned size);
    void MMIOWrite(int barIndex, uint32_t addr, uint32_t value, unsigned size);
};

}
