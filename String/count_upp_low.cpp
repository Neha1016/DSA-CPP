#include <iostream>
using namespace std;
int main()
{
    string str;
    int upper = 0, lower = 0;

    cout << "Enter a string : ";
    getline(cin, str);

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            upper++;
        }
        else if (str[i] >= 'a' && str[i] <= 'z')
        {
            lower++;
        }
    }

    cout << "Uppercase = " << upper << endl;
    cout << "Lowercase = " << lower << endl;

    return 0;
}