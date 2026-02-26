/* Aqui é onde vamos implementar nossas funções da pilha */
#include<iostream>
#include "pilha.h" // incluindo o arquivo de cabeçalho da pilha
using namespace std;

    stack::stack(){
        size = 0; // inicializando o tamanho da pilha como 0
        struture = new TipoItem[max_itens]; // alocando memória para a estrutura da

    } 

    stack::~stack(){
        delete [] struture; // liberando a memória alocada para a estrutura da pilha    

    }

    bool stack::isfull(){
        return (size == max_itens); // retorna true se a pilha estiver cheia, caso contrário retorna false

    }

    bool stack::isempty(){
        return (size ==0 ); // se a pilha não estiver cheia, insere o item e incrementa o tamanho da pilha
    }

    void stack::push(TipoItem item){
        if(isfull()){
            cout << "A pilha está cheia. Não é possível inserir o item." << endl;
        } else{
            struture [size] = item;
            size++;
        }
        
    }

    TipoItem stack::pop(){
        if(isempty()){
            cout << " A pilha está vazia. não há itens para remover." << endl;
            return -1; // retornando um valor inválido para indicar que a pilha está vazia
        } else{
            size--;
            return struture[size];
        }
    }

        void stack::print(){
            cout << "Itens na pilha: [";
            for(int i = size - 1; i >= 0; i--){
                cout << struture[i] << " ";
            }
            cout << "]" << endl;
        }

    int stack::getsize(){
        return size;
    }

