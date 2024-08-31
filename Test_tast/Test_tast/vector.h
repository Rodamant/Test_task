#pragma once



class Vector {
public:
	Vector();
	~Vector();
	void PushBack(int value);
	void PushFront(int value);
	void Insert(int index, int value);
	void PopBack();
	int Size() const;
	int& operator [](int index); 
	const int& operator [](int index) const; 
	void Clear();
private:
	int size = 0;
	int* vector = nullptr;
};