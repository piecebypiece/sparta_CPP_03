#pragma once

template <typename T>
class SimpleVector
{
private:
	T* data;
	int _capacity;
	int count;
public:
	int size() const { return this->count; }
	int capacity() const { return this->_capacity; }
	void resize(int newSize)
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


	SimpleVector(int initialSize = 10) : _capacity(initialSize)
	{
		data = new T[_capacity];
	}

	~SimpleVector()
	{
		delete[] data;
	}

	void push_back(const T& value)
	{
		if (count >= _capacity)
		{
			return;
		}
		data[count++] = value;
	}

	void pop_back()
	{
		if (count < 1)
		{
			return;
		}
		data[--count] = T();
	}
};
