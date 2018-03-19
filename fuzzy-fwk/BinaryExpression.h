#ifndef BINARYEXPRESSION_H
#define BINARYEXPRESSION_H

#include "Expression.h"

namespace core 
{
    template <typename T>
      class BinaryExpression
      {
      public : 
      virtual ~BinaryExpression() = default;
      virtual T evaluate(Expression<T>*, Expression<T>*) const = 0;
      }
}

#endif
