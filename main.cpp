#include <stdlib.h>
#include <iostream>

using std::cout;
using std::cin;

int main(int argc, char **argv)
{
	int cont,num,par,impar;
    
    par = 0;
    impar = 0;
     
	for (cont = 1; cont < 11; cont++)
    {
		num = (rand() % 100);
        cout << "Valor aleatorio (" << cont << ") : " << num << "\n";
        if (num==0)
            par++;
            else if (num%2==0)
                par++;
                else impar++;
    }

    cout << "\n";
    cout << par << " pares. \n \n";
    cout << impar << " impares. \n";
	
    cout << "\n";
    return 0;
}