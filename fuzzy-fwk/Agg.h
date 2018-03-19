#ifndef AGG_H
#define AGG_H

#include "BinaryExpression.h"

namespace core
{
	template <typename T>
	class Agg : public BinaryExpression<T>
	{
		public : 
		virtual ~Agg() = default ; 
		virtual T evaluate(Expression<T>*, Expression<T>*) const = 0;
	}
}

#endif