
#include <iostream>
#include "SimpleVector.h"

using namespace std;

int main()
{
	SimpleVector<int> vec(8);
	vec.push_back(10);
	vec.push_back(25);
	vec.push_back(36);
	vec.push_back(12);
	vec.push_back(8);
	vec.push_back(63);
	vec.push_back(99);
	vec.push_back(33);
	vec.push_back(77);

	vec.printData();

	vec.sortData();
	vec.printData();

	cout << vec.size() << endl;
	cout << vec.capacity() << endl;

	vec.pop_back();
	vec.pop_back();
	vec.pop_back();
	vec.pop_back();
	vec.pop_back();

	vec.printData();
	cout << vec.size() << endl;
	cout << vec.capacity() << endl;

	vec.resize(15);
	cout << vec.size() << endl;
	cout << vec.capacity() << endl;

	SimpleVector<int> vec2{vec};
	vec2.printData();

}

