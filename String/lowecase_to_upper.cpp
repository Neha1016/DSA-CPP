#include <iostream>
using namespace std;
int main()
{

    string str;

    cout << "Enter a string : ";
    cin >> str;

    for (int i = 0; i < str.length(); i++)
    {

        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
    }

    cout << "Uppercase String = " << str;

    return 0;
}