#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    int b = {10};
    int c = 3;
    int result;
    a = a - b;
    result = a * c;
    cout << result << endl;
    return 0;
}