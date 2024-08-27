#include<iostream>
using namespace std;



class Vector
{
public:
	Vector()
	{
		vector = new int[size];
	};

	~Vector()
	{
		delete[] this->vector;
	}

	void push_back(int value)
	{
		this->size = size + 1;
		this->vector = new int[size + 1];
		
		if (size < 1)
		{
			for (int i = 0; i < size; i++)
			{
				this->vector[i] = vector[i];
			}
		}
		this->vector[size] = value;

	}

private:
	int* vector;
	int size = 0;
};



int main()
{
	Vector v;
	v.push_back(4);

}