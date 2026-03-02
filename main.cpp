/* Aqui é a nossa função principal para testar a pilha */
#include<iostream>
#include "pilha.h" // incluindo o arquivo de cabeçalho da pilha
using namespace std;        


int main() {

    // criando uma instância da pilha(objeto da classe stack)
    stack pilha1;
    TipoItem item; // variavel para armazenar o item a ser inserido na pilha

    int option; // variavel para armazenar a opção escolhida pelo usuário
    cout << "Bem-vindo ao programa de pilha!" << endl;

    do{
        cout << "informe a opção desejada: " << endl;
        cout << "Digite 0 para sair do programa." << endl;
        cout << "Digite 1 para inserir um item na pilha." << endl;
        cout << "Digite 2 para remover um item da pilha." << endl;
        cout << "Digite 3 para imprimir a pilha." << endl;
        cout << "Digite 4 para obter o tamanho atual da pilha." << endl;
        cin >> option; // lendo a opção escolhida pelo usuário
    switch (option)
        {    case 1:
            cout << "Digite o item a ser inserido na pilha: ";
            cin >> item; // lendo o item a ser inserido na pilha
            pilha1.push(item); // chamando a função push para inserir o item na pilha
            break;
             case 2:
            item = pilha1.pop(); // chamando a função pop para remover um item da pilha e 
            cout << "Item removido: " << item << endl;
            break;

             case 3:
            pilha1.print(); // chamando a função print para imprimir os itens da pilha
            break;

            case 4:
            cout << "Tamanho atual da pilha: " << pilha1.getsize() << endl; // chamando a função getsize para obter o tamanho atual da pilha
            break;
        }

    } while (option != 0); // o loop continua até que o usuário escolha a opção 0 para sair do programa
    
    

return 0;

}