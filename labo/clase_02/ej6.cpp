#include <iostream>

void swap(int &a, int &b)
{
    int aux = b;
    b = a;
    a = aux;
}

int main()
{
    int a = 0;
    int b = 0;

    std::cout << "Ingrese a" << std::endl;
    std::cin >> a;
    std::cout << "Ingrese b" << std::endl;
    std::cin >> b;

    swap(a, b);

    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;

    return 0;
}