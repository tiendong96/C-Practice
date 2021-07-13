#include <iostream>

int main()
{
    int a = 5;
    int *b = &a;

    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << *b << std::endl;
}