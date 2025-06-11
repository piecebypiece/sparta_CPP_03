#include "SimpleVector.hpp"


template<typename T>
void SimpleVector<T>::resize(int newSize)
{
	if (newSize < 0)
		return;

	T* newData = new T[newSize];

	int copyCnt = (newSize < count ? newSize : count)

	for (int i = 0; i < copyCnt; ++i)
		newData[i] = data[i];
	delete[] data;
	data = newData;
	capacity = newSize;
	return 0;
}



template<typename T>
void SimpleVector<T>::push_back(const T& value)
{
	if (count >= capacity)
	{
		return;
	}
	data[count++] = value;
}

template<typename T>
void SimpleVector<T>::pop_back()
{
	if (count < 1)
	{
		return;
	}
	data[--count] = T::default;
}