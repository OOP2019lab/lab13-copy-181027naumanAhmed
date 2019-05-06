#include "Pair.h"

template<typename T>
T getmax(T x, T y)
{
	if (x > y) {
		return x;
	}
	return y;
}

template<typename T>
T getmin(T x, T y)
{
	if (x < y) {
		return x;
	}
	return y;
}

template<typename T1, typename T2>
T1 getmax(T1 x, T2 y)
{
	if (x > y) {
		return x;
	}
	return y;
}

template<typename T1, typename T2>
T1 getmin(T1 x, T2 y)
{
	if (x < y) {
		return true;
	}
	return false;
}

int main()
{
	//// Task 1
	//int i = 5, j = 6, k;
	//long l = 10, m = 5, n;
	//k = getmax<int>(i, j);
	//n = getmin<long>(l, m);
	//cout << k << endl;
	//cout << n << endl;

	//// Task 2
	//int i = 5, j = 6, k;
	//long l = 10, m = 5, n;
	//k = getmax(i, j);
	//n = getmin(l, m);
	//cout << k << endl;
	//cout << n << endl;

	// Task 3

	/*char i = 'Z';
	int  j = 6, k;
	long l = 10, m = 5, n;
	k = getmax<int, long>(i, m);
	n = getmin<int, char>(j, l);
	cout << k << endl;
	cout << n << endl;*/

	// Task 4
	/*char i = 'Z';
	int  j = 6, k;
	long l = 10, m = 5, n;
	k = getmax(i, m);
	n = getmin(j, l);
	cout << k << endl;
	cout << n << endl;*/


	// Task 5
	Pair<double> myobject(1.012, 1.01234);
	cout << myobject.getmax() << endl;
	cout << myobject.getmin() << endl;
	cout << myobject << endl; // << operator in pairs should be overloaded (inline)

}
