// Copyright [2019] Luis

#include "gtest/gtest.h"
#include "pilha.hpp"

// Testa a criacao da pilha
TEST(Pilha_Encadeada, CreateStack){

    Pilha pilha;
    
    // verifica o tamanho 
    ASSERT_EQ(0, pilha.Size());

    // verifica se está vazia = true
    ASSERT_EQ(true, pilha.isEmpty());

    // insere item 
    pilha.Push(3);

    // verifica o tamanho
    ASSERT_EQ(1, pilha.Size());

    // verifica se está vazia = false
    ASSERT_EQ(false, pilha.isEmpty());

    pilha.DestroyStack();
}

// Testa a liberação em memória da pilha
TEST(Pilha_Encadeada, DestroyStack){

    Pilha pilha;

    // verifica o tamanho
    ASSERT_EQ(0, pilha.Size());

    pilha.Push(4);
    pilha.Push(5);
    pilha.Push(6);

    ASSERT_EQ(3, pilha.Size());

    pilha.DestroyStack();

}

// Testa push 
TEST(Pilha_Encadeada, Push){

    Pilha pilha;

    pilha.Push(3);
    
    ASSERT_EQ(1, pilha.Size());

    pilha.Push(4);
    pilha.Push(5);
    pilha.Push(6);

    ASSERT_EQ(4, pilha.Size());

    pilha.DestroyStack();
}

TEST(Pilha_Encadeada, Pop){
    Pilha pilha;

    // tenta dar um pop na pilha vazia: faz nada rs
    pilha.Pop();

    pilha.Push(3);
    pilha.Push(4);
    pilha.Push(5);

    pilha.Pop();
    ASSERT_EQ(2, pilha.Size());

    pilha.Pop();
    ASSERT_EQ(1, pilha.Size());

    // ao se dar pop no ultimo elemento, pilha eh destruida
    pilha.Pop();

    pilha.DestroyStack();

}

TEST(Pilha_Encadeada, Top) {
    Pilha pilha;

    pilha.Push(5);
    ASSERT_EQ(5, pilha.Top());

    pilha.Push(4);
    pilha.Push(3);
    pilha.Push(2);
    ASSERT_EQ(2, pilha.Top());

    pilha.DestroyStack();
}

TEST(Pilha_Encadeada, Size) {
    Pilha pilha;

    ASSERT_EQ(0, pilha.Size());

    pilha.Push(4);
    pilha.Push(3);
    pilha.Push(2);

    ASSERT_EQ(3, pilha.Size());
    
    pilha.DestroyStack();
}
/*
// Testa o print da pilha
TEST(Pilha_Encadeada, Imprime) {
    Pilha pilha;

    pilha.Imprime();

    pilha.Push(676);
    pilha.Push(2312);
    pilha.Push(000);

    pilha.Imprime();

    pilha.DestroyStack();
}
*/
int main(int argc, char** argv) {

    // Inicializa os testes
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();

    return 0;
}

