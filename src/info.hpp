#pragma once

#include <pluginterfaces/base/fplatform.h>
#include <pluginterfaces/base/funknown.h>
#include <pluginterfaces/vst/vsttypes.h>

#define NAME "SidechainExample"

#define VENDOR "Sidechain Inc."

#define WEBSITE "https://github.com/getsidechain/sidechain"

#define EMAIL "mailto:hello@sidechain.com"

#define CATEGORY "Fx"

static const Steinberg::FUID ProcessorUID(0x7C41BB75, 0xB5565273, 0x92439BEA, 0xDC67B477);

static const Steinberg::FUID ControllerUID(0x078FC5FA, 0xC5355F1F, 0x8A0C32A7, 0xEAB1BC9E);
