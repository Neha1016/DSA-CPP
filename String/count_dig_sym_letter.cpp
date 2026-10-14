#include <iostream>
using namespace std;
int main()
{
    string str;
    int letters = 0, digits = 0, special = 0;

    cout << "Enter a string:";
    getline(cin, str);

    for (int i = 0; i < str.length(); i++)
    {
        if ((str[i] >= 'A' && str[i] <= 'Z') ||
            (str[i] >= 'a' && str[i] <= 'z'))
        {
            letters++;
        }
        else if (str[i] > -'0' && str[i] <= '9')
        {
            digits++;
        }
        else
        {
            special++;
        }
    }

    cout << "Letters = " << letters << endl;
    cout << "Digits = " << digits << endl;
    cout << "Special characters = " << special << endl;

    return 0;
}