#pragma once
#include<iostream>
using namespace std;


class Vector {
public:
	Vector();
	~Vector();
	void PushBack(int value);
private:
	int size = 0;
	int* vector;
};