
//
// This source file is part of appleseed.
// Visit https://appleseedhq.net/ for additional information and resources.
//
// This software is released under the MIT license.
//
// Copyright (c) 2019 Francois Beaune, The appleseedhq Organization
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

// Build options header.
#include "foundation/core/buildoptions.h"

// appleseed.foundation headers.
#include "foundation/memory/autoreleaseptr.h"

// 3ds Max headers.
#include "appleseed-max-common/_beginmaxheaders.h"
#include <baseinterface.h>
#include <maxtypes.h>
#include "appleseed-max-common/_endmaxheaders.h"

// Forward declarations.
namespace renderer  { class Assembly; }
namespace renderer  { class Object; }
namespace renderer  { class Project; }

//
// Interface of an appleseed geometric object plugin.
//

class IAppleseedGeometricObject
  : public BaseInterface
{
  public:
    static Interface_ID interface_id();

    // BaseInterface methods.
    Interface_ID GetID() override;

    enum Flags
    {
        // When the IgnoreTransform flag is set, the object will always be exported with an identity transform.
        // This is useful for "linked objects", i.e. objects that define themselves in relation to an instance
        // of another object, in which case they naturally inherit the transform of that other object instance.
        IgnoreTransform = 1UL << 0
    };

    // Retrieve the flags of this object.
    virtual int get_flags() const = 0;

    // Create an appleseed geometric object.
    virtual foundation::auto_release_ptr<renderer::Object> create_object(
        renderer::Project&  project,
        renderer::Assembly& assembly,
        const char*         name,
        const TimeValue     time) = 0;
};


//
// IAppleseedGeometricObject class implementation.
//

inline Interface_ID IAppleseedGeometricObject::interface_id()
{
    return Interface_ID(0x5c481697, 0x8d67948);
}

inline Interface_ID IAppleseedGeometricObject::GetID()
{
    return interface_id();
}
