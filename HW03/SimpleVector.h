#pragma once

template <typename T>
class SimpleVector
{
private:
	T* data;
	int currentSize;
	int currentCapacity;

public:
	SimpleVector(int capacity = 10) : 
		currentSize{},
		currentCapacity{}
	{
		data = new T[capacity];
		currentSize = 0;
		currentCapacity = capacity;
	}
	~SimpleVector()
	{
		delete[] data;
	}
	void push_back(const T& value)
	{
		if (currentSize < currentCapacity)
		{
			data[currentSize] = value;
			currentSize++;
		}
	}
	void pop_back()
	{
		if (currentSize > 0)
		{
			data[currentSize - 1] = T();
			currentSize--;
		}
	}
	int size()
	{
		return currentSize;
	}
	int capacity()
	{
		return currentCapacity;
	}
	void printData()
	{
		for (int i = 0; i < currentSize; i++)
		{
			std::cout << data[i] << " ";
		}
		std::cout << std::endl;
	}
};