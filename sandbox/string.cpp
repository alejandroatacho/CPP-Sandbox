// my first string
#include <iostream>
// #include <string>
using namespace std;

int main()
{
    string phrase = "Giraffe Academy";
    cout << phrase.length() << endl;
    cout << phrase[0] << endl;
    phrase[0] = 'B';
    cout << phrase << endl;
    cout << phrase.find("Academy", 0) << endl;
    cout << phrase.substr(8, 3) << endl;
    return 0;
}