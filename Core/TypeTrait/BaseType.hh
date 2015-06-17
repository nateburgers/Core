// BaseType.hh
#ifndef INCLUDED_CORE_TYPETRAIT_BASETYPE
#define INCLUDED_CORE_TYPETRAIT_BASETYPE

// =======================================================================<DC>=
// @PURPOSE:
// @CLASSES:
// @MACROS:
// @SEE_ALSO:
// @DESCRIPTION:
// ============================================================================

namespace
{
  template <typename ElementType>
  struct BaseTypeImp;
}

namespace Core
{
  namespace TypeTrait
  {
    // ===================================================================<CL>=
    // Type Trait BaseType
    // ========================================================================
    template <typename ElementType>
    using BaseType = typename BaseTypeImp<ElementType>::Type;
  }
}

// IMPLEMENTATION --------------------------------------------------------<IM>-
#include <Core/TypeTrait/BaseType.mm>

#endif /* INCLUDED_CORE_TYPETRAIT_BASETYPE */

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
