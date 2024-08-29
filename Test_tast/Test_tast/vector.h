#pragma once



class Vector {
public:
	Vector();
	~Vector();
	void PushBack(int value);
	int Size() const;
	int& operator [](int index); 
	const int& operator [](int index) const; 
private:
	int size = 0;
	int* vector = nullptr;
};