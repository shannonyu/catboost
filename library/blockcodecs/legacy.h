#pragma once

#include "codecs.h"
#include "common.h"

#include <util/generic/ptr.h>

namespace NBlockCodecs {
    TCodecPtr LegacyZStdCodec();
    TVector<TCodecPtr> LegacyZStd06Codec();
}
