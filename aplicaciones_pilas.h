using namespace std;

int maximo(pila_int_array x)
{
	if(!x.empty())
	{
		int m_valor = x.pop();
		int aux;
		while(!x.empty())
		{
			aux = x.pop();
			if(aux > m_valor)
				m_valor = aux;
		}
		return m_valor;
	}
	else
		return 0;
}

void dosmil48(pila_int_array &x)
{
    pila_int_array T(x.max);
    while (!x.empty())
    {
        int aux1 = x.pop();
        
        if(T.stack[T.top] != aux1)
		{
            T.push(aux1);
        }
		else
		{
            int aux2 = aux1 + T.pop();
            T.push(aux2);
        }
    }
    while (!T.empty())
    {
        x.push(T.pop());
    }
}

    
bool palindromo(string x)
{
    if (!x.empty())
    {
        int tam = x.size();
        if (tam > 1)
        {
            int i = 0;
            int g = tam / 2;
            pila_char_list y;
            pila_char_list z;
            for (i = 0; i < g; i++)
            {
                y.push(x[i]);
                z.push(x[tam - 1 - i]);
            }
            for (i = 0; i < g; i++)
            {
                if (y.pop() != z.pop())
                {
                    return 0;
                }
            }
        }
        return 1;
    }
    return 1; 
}


bool balanceado(string x)
{
    pila_char_list y;
    for (char carac : x)
    {
        if (carac == '(' || carac == '[' || carac == '{')
        {
            y.push(carac);
        }
        else if (carac == ')' || carac == ']' || carac == '}')
        {
            if (y.empty())
            {
                return false;
            }
            char aux;
			aux = y.pop();
            if ((carac == ')' && aux != '(') || (carac == ']' && aux != '[') || (carac == '}' && aux != '{'))
            {
                return false;
            }
        }
    }
    return y.empty();
}


int eval_posfija(string x)
{
    pila_int_array s(100);

    for (char c : x)
    {
        if (isdigit(c))
        {
            s.push(c - '0');
        }
        else
        {
            int operand2 = s.pop();
            int operand1 = s.pop();
            int resultado;

            if (c == '+')
            {
                resultado = operand1 + operand2;
            }
            else if (c == '-')
            {
                resultado = operand1 - operand2;
            }
            else if (c == '*')
            {
                resultado = operand1 * operand2;
            }
            else if (c == '/')
            {
                resultado = operand1 / operand2;
            }
            else if (c == '^')
            {
                resultado = pow(operand1, operand2);
            }
            else
            {
                return 0;
            }

            s.push(resultado);
        }
    }

    return s.stack[0];
}

