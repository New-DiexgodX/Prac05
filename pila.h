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

class pila_int_array 
{
    public:
        int *stack;
        int top; 
        int max; 

        pila_int_array(int m) 
        {
            this->stack=new int[m]; 
            this->max=m; 
            this->top=-1; 
        }
 
        bool empty(); 
		bool full(); 
		void push(int k);
        int pop(); 
        
};

bool pila_int_array::empty()
{
	return (top == -1) ? 1 : 0;
}

bool pila_int_array::full()
{
	return (top == max-1) ? 1 : 0;		
}

void pila_int_array::push(int k)
{
	if(!this->full())
	{
		top++;
		this->stack[top] = k; 
	}
}

int pila_int_array::pop()
{
	if(!this->empty())
	{
		top--;
		return stack[top+1];
	}
	
}

class dos_pilas_int_array 
{
	public:
        int *stack; 
        int top1; 
        int top2; 
        int max; 

        dos_pilas_int_array(int m) 
        {
            this->stack=new int[m]; 
            this->max=m; 
            this->top1=-1; 
            this->top2=max; 
        }
 
        bool empty1(); 
        bool empty2(); 
		bool full1(); 
		bool full2(); 
		void push1(int k); 
		void push2(int k);
        int pop1(); 
		int pop2(); 
};
bool dos_pilas_int_array::empty1()
{
	return (top1 == -1) ? 1 : 0;
}
bool dos_pilas_int_array::empty2()
{
	return (top2 == max) ? 1 : 0;
}
bool dos_pilas_int_array::full1()
{
	return (top1 == top2-1) ? 1 : 0;
}
bool dos_pilas_int_array::full2()
{
	return (top2 == top1+1) ? 1 : 0;
}
void dos_pilas_int_array::push1(int k)
{
	if(!this->full1())
	{
		top1++;
		stack[top1] = k;
	}
}
void dos_pilas_int_array::push2(int k)
{
	if(!this->full2())
	{
		top2--;
		stack[top2] = k;
	}
}
int dos_pilas_int_array::pop1()
{
	if(!this->empty1())
	{
		top1--;
		return stack[top1+1];
	}
}
int dos_pilas_int_array::pop2()
{
	if(!this->empty2())
	{
		top2++;
		return stack[top2-1];
	}
}

class pila_char_list 
{
    public:
        nodo_char_pila *top; 

        pila_char_list()
        {
            this->top=nullptr; 
        }
 
        bool empty(); 
		void push(char k); 
        char pop(); 
};
bool pila_char_list::empty()
{
	return (top == nullptr) ? 1 : 0;
}
void pila_char_list::push(char k)
{
	nodo_char_pila *x = new nodo_char_pila(k);
	x->prev = top;
	top = x;
}
char pila_char_list::pop()
{
	if(!this->empty())
	{
		nodo_char_pila *x = top;
		char p = top->key;
		top = top->prev;
		delete x;
		return p;
	}
}
