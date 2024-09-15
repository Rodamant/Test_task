#pragma once
template<typename T>
class List
{
public:
	List();
	~List();
	void PushBack(T data);
	void PushFront(T data);
	void Insert(T data, int index);
	T& operator[](const int index);
	void PopFront();
	void RemoveAt(int index);
	void PopBack();
	int GetSize() { return size; };
	void Clear();


private:
	template<typename T>
	class Node
	{
	public:
		Node* pNext;
		T data;
		Node(T data = T(), Node* pNext = nullptr)
		{
			this->data = data;
			this->pNext = pNext;
		}
	};


	Node<T> *head;
	int size;

};


template<typename T>
inline List<T>::List()
{
	size = 0;
	head = nullptr;
}

template<typename T>
inline List<T>::~List()
{
	Clear();
}

template<typename T>
inline void List<T>::PushBack(T data)
{
	if (head == nullptr)
	{
		head = new Node<T>(data);
	}
	else
	{
		Node<T>* current = this->head;
		while (current->pNext != nullptr)
		{
			current = current->pNext;
		}
		current->pNext = new Node<T>(data);
	}
	size++;
}

template<typename T>
inline void List<T>::PushFront(T data)
{
	head = new Node<T>(data, head);
	size++;
}

template<typename T>
inline void List<T>::Insert(T data, int index)
{
	if (index==0)
	{
		PushFront();
	}
	else
	{
		Node<T>* previous = this->head;
		for (int i = 0; i < index; i++)
		{
			previous = previous->pNext;
		}
		Node<T>* newNode = new Node<T>(data, previous->pNext);
		previous->pNext = newNode;
		size++;
	}
}

template<typename T>
inline T& List<T>::operator[](const int index)
{
	int counter = 0;
	Node<T>* current = this->head;
	while (current != nullptr)
	{
		if (counter == index)
		{
			return current->data;
		}
		current = current->pNext;
		counter++;
	}
	
}

template<typename T>
inline void List<T>::PopFront()
{
	Node<T>* temp = head;
	head = head->pNext;
	delete temp;
	size--;
}

template<typename T>
inline void List<T>::RemoveAt(int index)
{
	if (index==0)
	{
		PopFront();
	}
	else {
		Node<T>* previous = this->head;
		for (int i = 0; i < index; i++)
		{
			previous = previous->pNext;
		}
		Node<T>* toDelete = previous->pNext;
		previous->pNext = toDelete->pNext;
		delete toDelete;
		size--;
	}
}

template<typename T>
inline void List<T>::PopBack()
{
	RemoveAt(size - 1);
}

template<typename T>
inline void List<T>::Clear()
{
	while (size)
	{
		PopFront();
	}
}