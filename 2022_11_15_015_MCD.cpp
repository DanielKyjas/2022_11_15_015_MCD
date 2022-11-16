// 2022_11_15_015_MCD
// Daniel Callejas Rayón
//Programa de maximo comun divisor con recursividad

#include <iostream>
void MCD(int num1, int num2)
{
    if (num1 == 0 || num2 == 0)
    {
        std::cout << 0;
    }
    else
    {
        int i = 0;
        i++;
        MCD(int(num1/i),int(num2/i));
        std::cout << num1; 
    }
    /*
    int j = 0;

    for (int i = 1; i <= num1 && i <= num2; i++)
    {
        if (num1 / i >= 1 && num2 / i >= 1)
        {
            j++;
        }
        else {
            std::cout << num1
        }
    }
std::cout << j;
}
*/
}

int main()
{
    int num1, num2;
    //Pedir los numeros para descubrir el Maximo Comun Divisor
    std::cout << "Dame un numero entero para realizar la operacion: \n";
    std::cin >> num1;
    std::cout << "Dame otro numero entero para realizar la operacion: \n";
    std::cin >> num2; 
    MCD(num1,num2);
    std::cout << "\n\n";
}