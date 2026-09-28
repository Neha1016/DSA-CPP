#include <iostream>
using namespace std;
int main()
{

    string str;

    cout << "Enter a string : ";
    cin >> str;

    for (int i = 0; i < str.length(); i++)
    {

        int count = 1;
        bool alreadyCounted = false;

        for (int j = 0; j < i; j++)
        {

            if (str[i] == str[j])
            {
                alreadyCounted = true;
                break;
            }
        }

        if (alreadyCounted)
            continue;

        for (int j = i + 1; j < str.length(); j++)
        {

            if (str[i] == str[j])
            
                count++;
            }

            cout << str[i] << " = " << count << endl;
        }

        return 0;
    }