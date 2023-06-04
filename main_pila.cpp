#include <bits/stdc++.h>
#include "pila.hpp"
using namespace std;

int main()
{
	pila_int_array x(10);
	cout<<x.pop();
	x.push(5);
	x.push(4);
	x.push(3);
	x.push(2);
	x.push(1);
	cout<<x.empty();
	cout<<x.full();
	cout<<x.pop();
	cout<<x.pop();
	cout<<x.pop();
	cout<<x.pop();
	cout<<x.pop();
	cout<<x.pop();
	cout<<x.pop();
	cout<<x.empty();
	cout<<x.full();
	x.push(5);
	x.push(4);
	x.push(3);
	x.push(2);
	x.push(1);
	x.push(5);
	x.push(4);
	x.push(3);
	x.push(2);
	x.push(1);
	cout<<x.empty();
	cout<<x.full(); 
	
	cout<<endl;
	dos_pilas_int_array y(10);
	for(int i=0; i < 10; i++)
	{
		cout<<y.empty1(); 
        cout<<y.empty2(); 
		cout<<y.full1(); 
		cout<<y.full2(); 
		y.push1(i); 
		y.push2(i);
		cout<<y.empty1(); 
        cout<<y.empty2(); 
		cout<<y.full1(); 
		cout<<y.full2(); 
        cout<<y.pop1(); 
		cout<<y.pop2();
		y.push1(i); 
		y.push2(i);
		y.push1(i); 
		y.push2(i);
		y.push1(i); 
		y.push2(i);
		cout<<y.empty1(); 
        cout<<y.empty2(); 
		cout<<y.full1(); 
		cout<<y.full2(); 
        cout<<y.pop1(); 
		cout<<y.pop2();
		cout<<endl;
	} 
	
	cout<<endl;
	
	pila_char_list z;
	cout<<z.empty(); 
	z.push('a');
  std::cout << z.pop();
  std::cout << z.empty();

  z.push('b');
  std::cout << z.pop();
  std::cout << z.empty();

  z.push('c');
  std::cout << z.pop();
  std::cout << z.empty();

  z.push('d');
  z.push('e');
  z.push('f');
  z.push('g');
  z.push('h');
  z.push('i');
  std::cout << z.empty();

  z.push('j');
  std::cout << z.pop();
  std::cout << z.empty();

  z.push('k');
  std::cout << z.pop();
  std::cout << z.empty();

  z.push('l');
  std::cout << z.pop();
	
	
	return 0;
}
