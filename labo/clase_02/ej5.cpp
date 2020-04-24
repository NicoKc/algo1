#include <iostream>

void prueba(int &x, int &y)
{
    std::cout << "x: " << x << std::endl;
    std::cout << "y: " << y << std::endl;
    x = x + y;
    std::cout << "x: " << x << std::endl;
    std::cout << "y: " << y << std::endl;
    y = x - y;
    std::cout << "x: " << x << std::endl;
    std::cout << "y: " << y << std::endl;
    x = 1 / y;
    std::cout << "x: " << x << std::endl;
    std::cout << "y: " << y << std::endl;
}

int main()
{
    int a = 10;
    prueba(a, a);

    std::cout << "a: " << a << std::endl;

    return 0;
}