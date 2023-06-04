#include <bits/stdc++.h>
#include "pila.hpp"
#include "aplicaciones_pilas.hpp" // ejecucion de metodos de este archivo.h

using namespace std;

int main()
{
pila_int_array x(8);
	x.push(64);
	x.push(8);
	x.push(4);
	x.push(3);
	x.push(2);
	x.push(4);
	x.push(3);
	x.push(2);

	dosmil48(x);

 
	cout<<palindromo("radar");
	cout<<endl;
	cout<<palindromo("radadr");
	cout<<endl;
	cout<<palindromo("rsadad");
	cout<<endl;
	cout<<maximo(x);
	cout<<endl;
	cout<<eval_posfija("44+3*");
	cout<<endl;
	cout<<eval_posfija("64^7*");
	cout<<endl;
	cout<<eval_posfija("84/6*");
	cout<<endl;
	cout<<eval_posfija("45-3*");
	cout<<endl;
	cout<<eval_posfija("64+3*4-");
	cout<<endl;
	cout<<eval_posfija("43/3-");
	cout<<endl;
	cout<<balanceado("[{}]}");
	cout<<endl;
	cout<<balanceado("[{}]");
	cout<<endl;
	cout<<balanceado("[{}][][]{}[]");
	cout<<endl;
	cout<<balanceado("(12321dasd");
	cout<<endl;
	cout<<balanceado("");
	cout<<endl;
	cout<<balanceado("[{}][][]{}[]");
		
		
	return 0;
}
