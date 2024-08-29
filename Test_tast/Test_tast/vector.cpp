#include"vector.h"

Vector::Vector()
{
	vector = new int[size];
}
void Vector::PushBack(int value)
{
	this->vector = new int[size + 1];
	if (size > 0)
	{
		for (int i = 0; i < size; i++)
		{
			this->vector[i] = vector[i];
		}
	}
	this->vector[size] = value;

}
Vector::~Vector()
{
	delete[] this->vector;
}