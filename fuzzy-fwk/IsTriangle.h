#ifndef ISTRIANGLE_H
#define ISTRIANGLE_H

#include "Is.h"

namespace fuzzy
{
	template <typename T>
	class IsTriangle : public Is<T>
	{
	public:
		IsTriangle(T min, T mid, T max): min(min), mid(mid), max(max){} ;
		virtual ~IsTriangle() {};
		virtual T evaluate(Expression<T>*) const;
	private:
	T min,mid,max;
	};
	
	template <class T>
	T IsTriangle<T>::Evaluate (Expression<T>* e) const
	{
		T val = e->evaluate();
		if(val<=min || val>=max) return 0;
		return val<=mid ? (val-min)/(mid-min) : (max-val)/(max-mid);
	}
	
	
}

#endif