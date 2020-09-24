---------------------------------------------------
------------------README---------------------------
---------------------------------------------------
Pilha de dados implementada com:
(de inteiros inicialmente)

1)Vetor 
2)Lista Encadeada

A pasta include contem arquivo Header de ambos: 
- pilha.hpp

A pasta source contem as 2 pastas com Arquivos fonte: 

- vetor
- lista

.Arquivos fonte: pilha.cpp e testa_pilha.cpp
.Pastas objeto: obj(vetor) e obj2(lista)

---------------------------------------------------
---Instruções para compilar e executar os testes---
---------------------------------------------------

->Va para o diretorio da pasta source
->Abra o terminal neste diretorio
 
->Digite o comando: make testa_vetor
->Digite o comando: make testa_lista

Serão criados os executáveis:

testa_vetor: executará todos testes da pilha vetor
testa_lista: executará todos testes da pilha lista

->Para executar os testes:

->Digite: ./testa_vetor ou ./testa_lista

*OBS:Para usar cpplint nos arquivos-fonte:

->Va para o diretorio da pasta vetor ou lista
->Abra o terminal neste diretorio

->Digite no terminal: cpplint testa_pilha.cpp pilha.cpp 

->CASO não compile corretamente, 
->tente o comando: make clean

