#include "SimpleVector.hpp"


template<typename T>
void SimpleVector<T>::resize(int newSize)
{
	if (newSize < 0)
		return;

	T* newData = new T[newSize];

	int copyCnt = (newSize < count ? newSize : count);

	for (int i = 0; i < copyCnt; ++i)
		newData[i] = data[i];
	delete[] data;
	data = newData;
	_capacity = newSize;
	return 0;
}