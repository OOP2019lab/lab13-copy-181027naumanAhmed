
#pragma once
#include<iostream>
using namespace std;

template<typename T>
class Pair
{
	T values[2];

public:
	Pair(T x, T y)
	{
		this->values[0] = x;
		this->values[1] = y;
	}

	T getmax() const
	{
		if (this->values[0] > this->values[1]) {
			return this->values[0];
		}
		else
			return this->values[1];
	}

	T getmin() const;

	friend ostream& operator << (ostream& out, const Pair& d)
	{
		out << d.values[0] << " " << d.values[1] << endl;

		return out;
	}
};

template<typename T>
T Pair<T>::getmin() const
{
	if (values[0] < values[1]) {
		return values[0];
	}
	else
		return values[1];
}