// Copyright (c) 2012-2018 Intel Corporation
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.

#include "mfx_common.h"

#if defined(MFX_ENABLE_VPP) && defined(MFX_ENABLE_IMAGE_STABILIZATION_VPP)

#ifndef __MFX_IMAGE_STABILIZATION_VPP_H
#define __MFX_IMAGE_STABILIZATION_VPP_H

#include "mfxvideo++int.h"

#include "mfx_vpp_defs.h"
#include "mfx_vpp_base.h"
#include <vector>

#define VPP_IS_IN_NUM_FRAMES_REQUIRED  (6+1)
#define VPP_IS_OUT_NUM_FRAMES_REQUIRED (1)

class VideoVME;

class MFXVideoVPPImgStab : public FilterVPP
{
public:

    static mfxU8 GetInFramesCountExt( void ) { return VPP_IS_IN_NUM_FRAMES_REQUIRED; };
    static mfxU8 GetOutFramesCountExt(void) { return VPP_IS_OUT_NUM_FRAMES_REQUIRED; };

    // this function is used by VPP Pipeline Query to correct application request
    static mfxStatus Query( mfxExtBuffer* pHint );

};

#endif // __MFX_IMAGE_STABILIZATION_VPP_H

#endif // MFX_ENABLE_VPP
/* EOF */
