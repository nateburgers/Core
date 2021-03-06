// Forward.hh
#ifndef INCLUDED_CORE_MEMORY_FORWARD
#define INCLUDED_CORE_MEMORY_FORWARD

#ifndef INCLUDED_CORE_METAFUNCTION
#include <Core/MetaFunction.hh>
#endif /* INCLUDED_CORE_METAFUNCTION */

namespace Core
{
  namespace Memory
  {
    // USING NAMESPACES --------------------------------------------------<UN>-
    using namespace Core::MetaFunction;

    // MANIPULATORS ------------------------------------------------------<MA>-
    template <typename ElementType>
    auto constexpr Forward (BaseType<ElementType> &Element) -> ElementType &&;

    template <typename ElementType>
    auto constexpr Forward (BaseType<ElementType> &&Element) -> ElementType &&;

    // ACCESSORS ---------------------------------------------------------<AC>-
    template <typename ElementType>
    auto constexpr Forward (const BaseType<ElementType> &Element)
      -> const ElementType &&;

    template <typename ElementType>
    auto constexpr Forward (const BaseType<ElementType> &&Element)
      -> const ElementType &&;
  }
}

// =======================================================================<IM>=
// IMPLEMENTATION
// ============================================================================

namespace Core
{
  namespace Memory
  {
    // MANIPULATORS ------------------------------------------------------<MA>-
    template <typename ElementType>
    auto constexpr Forward (BaseType<ElementType> &Element) -> ElementType &&
    {
      return static_cast<BaseType<ElementType> &&> (Element);
    }

    template <typename ElementType>
    auto constexpr Forward (BaseType<ElementType> &&Element) -> ElementType &&
    {
      return static_cast<BaseType<ElementType> &&> (Element);
    }

    // ACCESSORS ---------------------------------------------------------<AC>-
    template <typename ElementType>
    auto constexpr Forward (const BaseType<ElementType> &Element)
      -> const ElementType &&
    {
      return static_cast<const BaseType<ElementType> &&> (Element);
    }

    template <typename ElementType>
    auto constexpr Forward (const BaseType<ElementType> &&Element)
      -> const ElementType &&
    {
      return static_cast<const BaseType<ElementType> &&> (Element);
    }
  }
};

#endif /* INCLUDED_CORE_MEMORY_FORWARD */

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
