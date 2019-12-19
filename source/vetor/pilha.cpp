#include "pilha.hpp"

// Definicoes de metodos da Classe Pilha Vetor

// Constructor to initialize stack
stack::stack(int size)
{
	arr = new ItemType[size];
	capacity = size;
	top = -1;
}

// Destructor to free memory allocated to the stack
stack::~stack()
{// erro de contexto segundo valgrind
    for(int i = 0; i <= size(); i++)
    {
        delete (&arr[i]);
    }
	//delete (arr);         
}

// Utility function to add an element x in the stack
void stack::push(ItemType x)
{
	if (isFull())
	{
		cout << "OverFlow\nProgram Terminated\n";
		exit(EXIT_FAILURE);
	}

	cout << "Inserting " << x << endl;
	arr[++top] = x;
}

// Utility function to pop top element from the stack
ItemType stack::pop()
{
	// check for stack underflow
	if (isEmpty())
	{
		cout << "UnderFlow\nProgram Terminated\n";
		exit(EXIT_FAILURE);
	}

	cout << "Removing " << peek() << endl;

	// decrease stack size by 1 and (optionally) return the popped element
	return arr[top--];
}

// Utility function to return top element in a stack
ItemType stack::peek()
{
	if (!isEmpty())
		return arr[top];
	else
		exit(EXIT_FAILURE);
}

// Utility function to return the size of the stack
int stack::size()
{
	return top + 1;
}

// Utility function to check if the stack is empty or not
bool stack::isEmpty()
{
	return top == -1;	// or return size() == 0;
}

// Utility function to check if the stack is full or not
bool stack::isFull()
{
	return top == capacity - 1;	// or return size() == capacity;
}
