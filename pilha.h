/* Aqui é onde vamos definir nossas classe */

// Para evitar múltiplas inclusões  e troca de tipo de dados no codigo vou ttpedef int tipoitem;

// se no futuro quisermos mudar o tipo de item da pilha, basta mudar aqui e não em todo o código.
typedef int TipoItem;
// stack = pilha em pt-br
// criando nossa classe stack


class stack{
    // declarando as variáveis privadas da classe
    private:
    int size; // para armazenar o tamanho da pilha
    TipoItem* struture;
    const int max_itens = 100; // para definir o tamanho máximo da pilha



    public:
    // as funções públicas da classe
    stack(); // construtor da pilha
    ~stack(); // destrutor da pilha
    bool isfull(); //função ver se a pilha está cheia
    bool isempty(); //função ver se a pilha está vazia
    void push(TipoItem item); // função para inserir um item na pilha
    TipoItem pop(); // função para remover um item da pilha
    void print(); // função para imprimir os itens da pilha 
    int 
};