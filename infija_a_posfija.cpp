#include<iostream>

using namespace std;

int precedencia(char x)
{
	if(x == '^') return 3;
	if(x == '*' || x == '/') return 2;
	if(x == '+' || x == '-') return 1;
	return 0;
}

struct nodo_s
{
	char key;
	nodo_s *prev;
};

class stack_list
{
	public:
		nodo_s *top;
	public:
		stack_list()
		{
			top = NULL;
		}
		void push(char x);
		char pop();
		bool empty();
		int precedence_top();
		void print();
};

void stack_list::print()
{
	nodo_s *x = top;
	cout<<"stack"<<endl;
	while(x != NULL)
	{
		cout<<x->key<<endl;
		x = x->prev;
	}
	cout<<"-----"<<endl;
}

void stack_list::push(char x)
{
	nodo_s *p = new nodo_s;
	p->key = x;
	p->prev = top;
	top = p;
}

char stack_list::pop()
{
	if(top == NULL)
		raise(SIGSEGV);
	else
	{
		char value = top->key;
		nodo_s *x = top;
		top = top->prev;
		delete x;
		return value;
	}
}

bool stack_list::empty()
{
	if(top == NULL)
		return 1;
	else
		return 0;
}

int stack_list::precedence_top()
{
	return precedencia(top->key);
}

int main()
{
	stack_list pila;
	char infija[100], posfija[100], token, aux;
	cin>>infija;
	int i=0;
	int j=0;
	while(infija[i] != '\0')
	{
		token = infija[i];
		if(token >= 'a' && token <= 'z') //es un operando
		{
			posfija[j++] = token;
		}
		else if(token == '(')
			pila.push(token);
		else if(token == ')')
		{
			aux = pila.pop();
			while(aux != '(')
			{
				posfija[j++] = aux;
				aux = pila.pop();
			}
		}
		else //es un operador
		{
			while(!pila.empty() && precedencia(token) <= pila.precedence_top())
			{
				if(token == '^' && pila.precedence_top() == 3)
					break;
				posfija[j++] = pila.pop();
			}
			pila.push(token);
		}
		//pila.print();
		i++;
	}
	while(!pila.empty())
	{
		posfija[j++] = pila.pop();
	}
	posfija[j] = '\0';
	
	cout<<posfija;
}
