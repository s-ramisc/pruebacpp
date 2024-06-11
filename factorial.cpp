#include <iostream>

int main()
{
    long int num = 1;

    for (int i = 1; i <= 19; i++)
    {
        num *= i;
    }
    std::cout << "El factorial de 19 es: " << num << std::endl;
}