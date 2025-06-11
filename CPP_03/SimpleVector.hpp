#pragma once

template <typename T>
class SimpleVector
{
private:
	T* data;
	int capacity;
	int count;
public:
	int size() const { return count; }
	int capacity() const { return capacity; }
	void resize(int newSize);


	SimpleVector(int initialSize = 10) : capacity(initialSize)
	{
		data = new T[capacity];
	}

	~SimpleVector()
	{
		delete[] data;
	}

	void push_back(const T& value);

	void pop_back();
};
