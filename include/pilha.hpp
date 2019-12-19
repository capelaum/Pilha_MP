#ifndef PILHA_H
#define PILHA_H

#include <iostream>
#include <cstdlib>

// capacidade max da stack
#define SIZE 30 

using namespace std;

// Permite que o tipo de dado seja mudado facilmente
typedef int ItemType;

//========================================================
// Classe pilha utilizando lista encadeada
class Pilha { 

private:

    struct Item {
        ItemType *arr = NULL;   // vetor de ItemType
        
        ItemType item;   // dado guardado
        Item* anterior;  // ptr de struct item 
        
        int qtd;         // qtd de itens
        int index;       // indice -> primeiro[0],1,2,...,ultimo[n]
    }*top;

public:

	// Construtor de pilha
    Pilha();

    void CreateStack();
    void DestroyStack();

    void Push(ItemType);
    void Pop();
    ItemType Top();

    int Size();
    void SetSize(int size);

    bool isFull();
    bool isEmpty();

    void Imprime();

    void CreateVectorStack(int size);

};

// Class for stack vector
class stack
{
	ItemType *arr;
	ItemType top;
	int capacity;

public:
	stack(int size = SIZE); 	// constructor
	~stack();   				// destructor

	void push(ItemType);
	ItemType pop();
	ItemType peek();

	int size();
	bool isEmpty();
	bool isFull();
};

#endif // end PILHA_H
