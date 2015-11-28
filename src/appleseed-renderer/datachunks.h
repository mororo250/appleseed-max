
//
// This source file is part of appleseed.
// Visit http://appleseedhq.net/ for additional information and resources.
//
// This software is released under the MIT license.
//
// Copyright (c) 2015 Francois Beaune, The appleseedhq Organization
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//

#pragma once

// appleseed.foundation headers.
#include "foundation/platform/windows.h"

const USHORT CHUNK_FILE_FORMAT_VERSION                      = 0x0001;

const USHORT CHUNK_SETTINGS                                 = 0x1000;

const USHORT CHUNK_SETTINGS_IMAGESAMPLING                   = 0x1100;
const USHORT CHUNK_SETTINGS_IMAGESAMPLING_PIXEL_SAMPLES     = 0x1110;
const USHORT CHUNK_SETTINGS_IMAGESAMPLING_PASSES            = 0x1120;

const USHORT CHUNK_SETTINGS_LIGHTING                        = 0x1200;
const USHORT CHUNK_SETTINGS_LIGHTING_GI                     = 0x1210;
const USHORT CHUNK_SETTINGS_LIGHTING_BOUNCES                = 0x1220;

const USHORT CHUNK_SETTINGS_OUTPUT                          = 0x1300;
const USHORT CHUNK_SETTINGS_OUTPUT_MODE                     = 0x1310;
const USHORT CHUNK_SETTINGS_OUTPUT_PROJECT_FILE_PATH        = 0x1320;

const USHORT CHUNK_SETTINGS_SYSTEM                          = 0x1400;
const USHORT CHUNK_SETTINGS_SYSTEM_RENDERING_THREADS        = 0x1410;
