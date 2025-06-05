
#include <iostream>
#include "SimpleVector.h"

using namespace std;

int main()
{
	SimpleVector<int> vec(8);
	vec.push_back(10);
	vec.push_back(20);
	vec.push_back(30);
	vec.push_back(40);
	vec.push_back(50);

	vec.push_back(60);

	vec.printData();

	cout << vec.size() << endl;
	cout << vec.capacity() << endl;

	vec.pop_back();
	vec.pop_back();
	vec.pop_back();

	vec.printData();
	cout << vec.size() << endl;
	cout << vec.capacity() << endl;
}

