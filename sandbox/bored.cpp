#include <iostream>
#include <string>

using namespace std;
int main()
{

    string input_1 = "hello your answer is : ";
    int a = 5;
    int b = 10;
    int c = a + b;
    if (c >= 10)
    {
        /* code */
        cout << input_1 << c << endl;
    }
    else
    {
        cout << "The sum of a and b is " << c << endl;
    }
    return 0;
}