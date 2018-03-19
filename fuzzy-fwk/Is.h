#ifndef IS_H
#define IS_H

#include "UnaryExpression.h"

namespace core
{

	template <class T>
	class Is : public UnaryExpression<T>
	{
		virtual ~Is() = default;
		virtual T evaluate(Expression<T>*) const=0;
	};
}

#endif