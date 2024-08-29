#pragma once



class Vector {
public:
	Vector();
	~Vector();
	void PushBack(int value);
private:
	int size = 0;
	int* vector;
};