#include "stdafx.h"

#include "ExpressionNodeFactory.h"


namespace NativeJIT
{
    ExpressionNodeFactory::ExpressionNodeFactory(Allocators::IAllocator& allocator,
                                                 FunctionBuffer& code)
        : ExpressionTree(allocator, code)
    {
    }
}
