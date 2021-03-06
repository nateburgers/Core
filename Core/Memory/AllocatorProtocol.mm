// AllocatorProtocol.mm

namespace Core
{
  namespace Memory
  {
    // FREE MANIPULATORS -------------------------------------------------<FM>-
    template <typename ElementType>
    inline ElementType *
    Allocate (AllocatorProtocol &Allocator)
    {
      return Allocator.Allocate (sizeof (ElementType));
    }

    inline Void *
    Allocate (AllocatorProtocol &Allocator, Size NumberOfBytesToAllocate)
    {
      return Allocator.Allocate (NumberOfBytesToAllocate);
    }

    template <typename ElementType>
    inline Void
    Deallocate (AllocatorProtocol &Allocator, ElementType *Element)
    {
      Allocator.Deallocate (Element);
    }

    inline Void
    Deallocate (AllocatorProtocol &Allocator, Void *Element)
    {
      Allocator.Deallocate (Element);
    }
  }
}

// MANIPULATORS ----------------------------------------------------------<MA>-
inline Core::Literal::Void *
operator new(Core::Literal::Size NumberOfBytesToAllocate,
             Core::Memory::AllocatorProtocol &Allocator)
{
  return Allocator.Allocate (NumberOfBytesToAllocate);
}

inline Core::Literal::Void
operator delete(Core::Literal::Void *Object,
                Core::Memory::AllocatorProtocol &Allocator)
{
  Allocator.Deallocate (Object);
}

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
