#include <iostream>
#include "pila.h"

using namespace std;

void mover(pila_int_array& A, pila_int_array& B, char a, char b)
{
    int d = A.pop();
    B.push(d);
    cout << "Mover disco de la torre " << a << " hacia la torre " << b << endl;
}

void play(int d, pila_int_array& o, pila_int_array& a, pila_int_array& dest, char ori, char aux, char des)
{
    if (d == 1)
    {
        mover(o, dest, ori, des);
    }
    else
    {
        play(d - 1, o, dest, a, ori, des, aux);
        mover(o, dest, ori, des);
        play(d - 1, a, o, dest, aux, ori, des);
    }
}

int main()
{
	int n, a;
	char b, c;
	cin >> n;
	pila_int_array x(n);
	pila_char_list y;
	pila_char_list z;
	for(int i = 0; i < n; i++)
	{
		std::cin >> a >> b >> c;
		x.push(a);
		y.push(b);
		y.push(c);
	}
	for(int i = 0; i < n * 2; i++)
	{
		b = y.pop();
		z.push(b);
	}
	cout<<endl;
	for(int i = 0; i < n; i++)
	{
	    int d;
	    d = x.stack[i];
	
	    pila_int_array A(d), B(d), C(d);
	
	    for (int j = d; j > 0; j--)
	    {
	        A.push(j);
	    }
	
	    char o, aux, des;
	    o = z.pop();
	    des = z.pop();
	    
		if(o == 'A' && des == 'B' || o == 'B' && des == 'A')
		{
			aux = 'C';
		}
		else if(o == 'A' && des == 'C' || o == 'C' && des == 'A')
		{
			aux = 'B';
		}
		else if(o == 'B' && des == 'C' || o == 'C' && des == 'B')
		{
			aux = 'A';
		}
	
		
	    play(d, A, B, C, o, aux, des);
	    cout << "Listo!\n";
	}
    return 0;
}

