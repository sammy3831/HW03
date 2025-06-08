#pragma once

#include <iostream>
#include <algorithm>

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
	SimpleVector(const SimpleVector& other) : 
		currentSize{other.currentSize},
		currentCapacity{other.currentCapacity}
	{
		data = new T[currentCapacity];
		for (int i = 0; i < currentSize; i++)
		{
			data[i] = other.data[i];
		}
		std::cout << "복사생성자 사용" << std::endl;
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
		else
		{
			resize(currentCapacity + 5);
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
	void resize(int newCapacity)
	{
		if (newCapacity > currentCapacity)
		{
			T* newData = new T[newCapacity];
			for (int i = 0; i < currentSize; i++)
			{
				newData[i] = data[i];
			}
			delete[] data;
			data = newData;
			currentCapacity = newCapacity;
		}
	}
	void sortData()
	{
		std::sort(data, data + currentSize);
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