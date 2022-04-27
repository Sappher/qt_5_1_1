/*
 * Copyright (C) 2012 Apple Inc. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY APPLE INC. ``AS IS'' AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL APPLE INC. OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 * PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY
 * OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE. 
 */

#include "config.h"
#include "DFGValueSource.h"

#if ENABLE(DFG_JIT)

namespace JSC { namespace DFG {

void ValueSource::dump(FILE* out) const
{
    switch (kind()) {
    case SourceNotSet:
        fprintf(out, "NotSet");
        break;
    case SourceIsDead:
        fprintf(out, "IsDead");
        break;
    case ValueInJSStack:
        fprintf(out, "InStack");
        break;
    case Int32InJSStack:
        fprintf(out, "Int32");
        break;
    case CellInJSStack:
        fprintf(out, "Cell");
        break;
    case BooleanInJSStack:
        fprintf(out, "Bool");
        break;
    case DoubleInJSStack:
        fprintf(out, "Double");
        break;
    case ArgumentsSource:
        fprintf(out, "Arguments");
        break;
    case HaveNode:
        fprintf(out, "Node(%d)", m_nodeIndex);
        break;
    }
}

} } // namespace JSC::DFG

#endif // ENABLE(DFG_JIT)

