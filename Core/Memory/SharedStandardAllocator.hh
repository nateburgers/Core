// SharedStandardAllocator.hh
#ifndef INCLUDED_CORE_MEMORY_SHAREDSTANDARDALLOCATOR
#define INCLUDED_CORE_MEMORY_SHAREDSTANDARDALLOCATOR

#ifndef INCLUDED_CORE_MEMORY_SHAREDPTR
#include <Core/Memory/SharedPtr.hh>
#endif /* INCLUDED_CORE_MEMORY_SHAREDPTR */

#ifndef INCLUDED_CORE_MEMORY_STANDARDALLOCATOR
#include <Core/Memory/StandardAllocator.hh>
#endif /* INCLUDED_CORE_MEMORY_STANDARDALLOCATOR */

// =======================================================================<DC>=
// @PURPOSE:
// @CLASSES:
// @MACROS:
// @SEE_ALSO:
// @DESCRIPTION:
// ============================================================================

namespace Core
{
  namespace Memory
  {
    auto PushSharedAllocator(const AllocatorProtocol &Allocator) -> Void;

    auto PushSharedAllocator(AllocatorProtocol &&Allocator) -> Void;

    auto GetSharedAllocator() -> SharedPtr<AllocatorProtocol>;

    auto PopSharedAllocator() -> SharedPtr<AllocatorProtocol>;
  }
}
// ============================================================================
// IMPLEMENTATION
// ============================================================================

namespace Core
{
  namespace Memory
  {
    // USING NAMESPACES --------------------------------------------------<UN>-
    // USING TYPES -------------------------------------------------------<UT>-
    // CREATORS ----------------------------------------------------------<CR>-
    // DESTRUCTORS -------------------------------------------------------<DS>-
    // ACCESSORS ---------------------------------------------------------<AC>-
    // MANIPULATORS ------------------------------------------------------<MA>-
    // OPERATORS ---------------------------------------------------------<OP>-
  }
}


#endif /* INCLUDED_CORE_MEMORY_SHAREDSTANDARDALLOCATOR */

// =======================================================================<CP>=
// COPYRIGHT NOTICE:
// Copyright (c) 2015. Nathan Burgers.
//
// Permission is hereby granted, free of charge, to any person obtaining a 
// copy of this software and associated documentation files (the "Software"),
// to deal in the Software without restriction, including without limitation
// the rights to use, copy, modify, merge, publish, distribute, sublicense,
// and/or sell copies of the Software, and to permit persons to whom the
// Software is furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
// OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
// FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
// DEALINGS IN THE SOFTWARE.
// ============================================================================
