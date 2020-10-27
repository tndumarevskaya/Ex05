#ifndef TASK3_H
#define TASK3_H

#include <iostream>
using namespace std;

template<typename T, int size>
T minArr(T (&arr)[size])
{
	T min = arr[0];
	for (auto now : arr)
	{
		if (min > arr[i])
			min = arr[i];
	}
	return min;
}
#endif // !TASK3_H
