// 2022_11_15_015_MCD
// Daniel Callejas Rayón
//Programa de maximo comun divisor con recursividad

#include <iostream>
int MCD(int num1, int num2)
{
    if (num1 < num2)
    {
        return MCD(num2, num1);
    }
    else {
        if (num2 == 0) {
            return num1;
        }
        else {
            MCD(num2, int(num1 % num2));
        }
    }
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

int main()
{
    int num1, num2, num3;
    //Pedir los numeros para descubrir el Maximo Comun Divisor
    std::cout << "Dame un numero entero para realizar la operacion: \n";
    std::cin >> num1;
    std::cout << "Dame otro numero entero para realizar la operacion: \n";
    std::cin >> num2; 
    std::cout << MCD(num1,num2);
    std::cout << "\n\n";
}
