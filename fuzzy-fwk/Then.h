#ifndef THEN_H
#define THEN_H

#include "BinaryExpression.h"

namespace core
{
	template <typename T>
	class Then : public BinaryExpression<T>
	{
		public : 
		virtual ~Then() const = default;
		virtual T evaluate(Expression<T>*, Expression<T>*) const;
	}
}

#endif
