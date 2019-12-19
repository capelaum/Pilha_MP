IDIR =../include
CC = g++ 
CFLAGS= -Wall -Werror -g -I$(IDIR)

# diretorios de objetos e librarys
ODIR = obj
LDIR =../lib

# diretorio da pilha vetor
VDIR = vetor

# define as librarys a serem usadas (Gtest)
LIBS = -lm -lgtest -lpthread -lgtest_main

# headers
_DEPS = pilha.hpp
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

# objetos
_OBJ = testa_pilha.o pilha.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

# Regra de compilacao
$(ODIR)/%.o: $(VDIR)/%.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

# Alvo
testa_vetor: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)	
#cppcheck --enable=warning .
#cpplint pilha.cpp testa_pilha.cpp
#Checkers

#========================================
ODIR2 = obj2

# diretorio da pilha lista
LISTDIR = lista

# objetos2
_OBJ2 = testa_pilha.o pilha.o
OBJ2 = $(patsubst %,$(ODIR2)/%,$(_OBJ2))

# Regra de compilacao
$(ODIR2)/%.o: $(LISTDIR)/%.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

# Alvo
testa_lista: $(OBJ2)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)	
#cppcheck --enable=warning .
#cpplint pilha.cpp testa_pilha.cpp
#Checkers

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~ 
	rm -f $(ODIR2)/*.o *~ core $(INCDIR)/*~ 