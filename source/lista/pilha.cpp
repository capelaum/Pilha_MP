
// Copyright [2019] <Luís V. Capelletto>

#include "pilha.hpp"

// Definicoes de Metodos da Pilha Encadeada alocada dinamicamente em memoria

// Construtor 
Pilha::Pilha() {
    CreateStack();
}

// Cria uma pilha encadeada vazia inicialmente e retorna ponteiro para topo
void Pilha::CreateStack() {
    
    // aloca ponteiro de struct Item
    Item* ptr_item = new Item;

    ptr_item->arr = NULL;               // array nao sera utilizado
    ptr_item->anterior = NULL;          // anterior nulo

    ptr_item->qtd = 0;                  // vazio 
    ptr_item->index = 0;                // comeca do zero

    top = ptr_item;                     // top aponta para novo Item

    ptr_item = NULL;                    // libera o ptr alocado

}

// destroi a pilha inteiramente, previne vazamento de memoria
void Pilha::DestroyStack() {
        
    if(top == NULL){
        cout << "Tentativa de destruir Pilha inexistente!\n";
    }else{
        // cout << "Destruindo Pilha!" << endl;
            
        Item* aux = top;
        
        while (aux != NULL) {
            // cout << "deletando: " << aux->item << endl;
                
            aux = aux->anterior;  // aponta o ponteiro auxiliar p/ anterior
            delete top;           // deleta o topo  
            top = aux;            // anterior eh o novo topo  
        }
    }

}  // end DestroyStack

// verifica se pilha esta vazia
bool Pilha::isEmpty() {
    
        // se qtd for nula, esta vazia!
        if(top->qtd == 0){
            // cout << "Ta vazia!" << endl;
            return true;
        }
        else{
            // cout << "Não ta vazia!" << endl;
            return false;
        }
    
}  // end isEmpty

// insere novo item na pilha
void Pilha::Push(ItemType NovoItem) {

    // primeiro item da pilha
    if(top->qtd == 0){
        top->item = NovoItem;
        top->qtd++;
    }else{
        Item* ptr_item = new Item; //  aloca nova struct item

        ptr_item->item = NovoItem;
        ptr_item->anterior = top; // aponta anterior para topo antigo

        ptr_item->qtd = top->qtd+1;
        ptr_item->index = top->index+1;

        top = ptr_item; // novo item eh o novo topo

        ptr_item = NULL; // ponteiro aponta para nulo para n causar problema
    }

}

// deleta topo da pilha
void Pilha::Pop() {

    if(top->qtd != 0){
        // Ponteiro auxiliar p/topo q sera deletado
        Item* auxTop = top;

        top = top->anterior;  // novo topo recebe topo anterior
        
        delete auxTop;  // libera o antigo topo
        auxTop = NULL;
    }else{
        cout << "Ta vazia!" << endl;
        return; // retorna se estiver vazia
    }

}  // end pop

// Retorna sem deletar o topo da pilha
ItemType Pilha::Top() {

    if(top->qtd != 0){

        // Guarda conteudo do topo
        ItemType aux = top->item;

        return aux;  // retorna conteudo -> pop!
    }else{
        cout << "Ta vazia!" << endl;
        return false; // retorna -1 se estiver vazia
    }

}  // end pop

// imprime todos itens da pilha e seus conteudos
void Pilha::Imprime() {

    if (isEmpty()) {
        cout << "Pilha vazia!" << endl;
    }else{

        cout << "Itens da pilha:" << endl;
        Item* aux = top;

        // enquanto n chegar ao primeiro item inserido (ultimo)
        while (aux != NULL) {
            cout << "[" << aux->index << "] " << aux->item <<  endl;
            aux = aux->anterior;
        }

        cout << "qtd: " << top->qtd << endl;
    }
}  // end Imprime

int Pilha::Size() {
        return top->qtd;
}  // end Size
