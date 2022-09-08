#include <iostream>
using namespace std;

int main()
{
        
    int a = 5; 
    int b = 10;
    int c = a + b; 
    cout << "Hello World" << endl;
    cout << "The sum of a and b is " << c << endl;
    while (a <= b)
    {
        cout << "a is " << a << endl;
        a++;
        if (a == 7)
        {
            cout << "a is 5 and you have reached the middle ground" << endl;
        }
        if ( a == b){
            cout << "a is 10 and you have reached the end of this while loop" << endl;
        }
    }
}