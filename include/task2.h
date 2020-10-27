#ifndef TASK2_H
#define TASK2_H

#include <iostream>
using namespace std;

template<typename T>
T averageArr(T* arr, int size)
{
	int sum = 0;
	for (unsigned int i = 0; i < size; i++)
		sum += arr[i];
	return sum / size;
}
#endif