#include <string>
#include <iostream>

extern "C" __declspec(dllexport) void printMessage()
{
    std::cout << "Hello, World!" << std::endl;
    std::cout << "I'm a function!" << std::endl;
}

int main()
{
    printMessage();
    return 0;
}
