using namespace std;

struct nodo_char_pila
{
	char key;
	nodo_char_pila *prev;
	nodo_char_pila(char k)
	{
		key=k;
	}
};

class pila_int_array //pila de enteros implementada en un arreglo
{
    public:
        int *stack; //arreglo donde se almacenaran los elementos
        int top; //indice de el ultimo elemento ingresado
        int max; //tamanho del arreglo stack

        pila_int_array(int m) //constructor
        {
            this->stack=new int[m]; //arreglo dinamico tamanho m
            this->max=m; //guardamos el maximo (usar en overflow)
            this->top=-1; //sin elementos (usar en underflow)
        }
 
        bool empty(); //1 si vacio, O/W 0
		bool full(); //1 si lleno, O/W 0
		void push(int k); //a?ade k a la pila, verifica overflow con full()
        int pop(); //remueve un elemento de la pila, verifica underflow con empty()
        
};

class dos_pilas_int_array //dos pilas de enteros implementada en UN SOLO arreglo
{
	public:
        int *stack; //arreglo donde se almacenaran los elementos de AMBAS pilas
        int top1; //indice de el ultimo elemento ingresado en la PILA1
        int top2; //indice de el ultimo elemento ingresado en la PILA2
        int max; //tamanho del arreglo stack

        dos_pilas_int_array(int m) //constructor
        {
            this->stack=new int[m]; //arreglo dinamico tamanho m
            this->max=m; //guardamos el maximo
            this->top1=-1; //sin elementos en PILA1
            this->top2=max; //sin elementos en PILA2
        }
 
        bool empty1(); //1 si vacio PILA1, O/W 0
        bool empty2(); //1 si vacio PILA2, O/W 0
		bool full1(); //1 si lleno PILA1, O/W 0,
		bool full2(); //1 si lleno PILA2, O/W 0, 
		void push1(int k); //a?ade k a la PILA1, verifica overflow con full1()
		void push2(int k); //a?ade k a la PILA2, verifica overflow con full2()
        int pop1(); //remueve un elemento de la PILA1, verifica underflow con empty1()
		int pop2(); //remueve un elemento de la PILA2, verifica underflow con empty2()
};

class pila_char_list //pila de caracteres implementada en una lista
{
    public:
        nodo_char_pila *top; //puntero al ultimo nodo de la lista

        pila_char_list() //constructor
        {
            this->top=nullptr; //nullptr = NULL en C++11
        }
 
        bool empty(); //1 si vacio, O/W 0
		void push(char k); //a?ade k a la pila
        char pop(); //remueve un elemento de la pila, verifica underflow con empty()
};
