#include <iostream>

int main()
{
    int x = 10;
    int a, b, c;

    a = 3;
    b = 4;
    c = 5;

    if (x > 5)
    {
        std::cout << "x is greater than 5" << std::endl;
        int d = a + b + c;
        std::cout << "d is: " << d << std::endl;
    }
    else
    {
        std::cout << "x is not greater than 5" << std::endl;
    }
    return 0;
}