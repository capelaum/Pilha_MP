// Copyright [2019] Luis

#include "../../include/gtest/gtest.h"
#include "../../include/pilha.hpp"

// Testes da pilha Vetor
// Utilizando Gtest

// CreateStack e SetSize: tamanho da pilha definida ao se criar
TEST(TestaPilha_vetor, Create_SetSize) {
    cout << "=======================================";
    cout << "\n-->TESTES DA PILHA COM VETOR:\n";
    cout << "=======================================\n";

    stack pilha(1);              // cria pilha de tamanho 1
    ASSERT_EQ(0, pilha.size());  // pilha ainda vazia
    pilha.push(2);
    ASSERT_EQ(1, pilha.size());  // pilha apos 1 push
    ASSERT_EQ(2, pilha.peek());   // verifica topo
}

// Push
TEST(TestaPilha_vetor, Push) {
    stack pilha(4);
    pilha.push(5);
    ASSERT_EQ(5, pilha.peek());
}

// Pop
TEST(TestaPilha_vetor, Pop) {
    stack pilha(4);
    pilha.push(2);
    // checa elemento retornado de pop
    ASSERT_EQ(2, pilha.pop());

    // caso de retirar elemento de pilha vazia
    ASSERT_FALSE(pilha.pop());

    // checa tamanho apos tentativa de underflow
    ASSERT_EQ(0, pilha.size());
}

// Top
TEST(TestaPilha_vetor, Top) {
    stack pilha(4);
    pilha.push(5);
    ASSERT_EQ(5, pilha.peek());
}

// Size
TEST(TestaPilha_vetor, size) {
    stack pilha(10);
    ASSERT_EQ(0, pilha.size());  // pilha ainda vazia

    // testa ao inserir um item
    pilha.push(0);
    ASSERT_EQ(1, pilha.size());
}

// isFull
TEST(TestaPilha_vetor, isFull) {
    stack pilha(3);
    pilha.push(4);
    pilha.push(7);
    pilha.push(6);
    // testa quando pilha esta cheia
    ASSERT_TRUE(pilha.isFull());   // testa quando pilha esta cheia

    pilha.pop();

    // testa quando pilha nao estiver cheia cheia
    ASSERT_FALSE(pilha.isFull());

    pilha.pop();
    ASSERT_FALSE(pilha.isFull());
}

// isEmpty
TEST(TestaPilha_vetor, isEmpty) {
    stack pilha(3);
    ASSERT_EQ(true, pilha.isEmpty());
}

int main(int argc, char** argv) {
    // Inicializa os testes
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}


// main function
/* int main()
{
	stack pt(3);

	pt.push(1);
	pt.push(2);

	pt.pop();
	pt.pop();

	pt.push(999);

	cout << "Top element is: " << pt.peek() << endl;
	cout << "Stack size is " << pt.size() << endl;

	pt.pop();

	if (pt.isEmpty())
		cout << "Stack Is Empty\n";
	else
		cout << "Stack Is Not Empty\n";

	return 0;
} */

