#include <iostream>
using namespace std;
int main()
{

    string str;
    int vowels = 0;
    int consonants = 0;

    cout << "Enter a string : ";
    cin >> str;

    for (int i = 0; i < str.length(); i++)
    {

        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
            str[i] == 'o' || str[i] == 'u')
        {
            vowels++;
        }
        else
        {
            consonants++;
        }
    }

    cout << "Vowels = " << vowels << endl;
    cout << "Consonants = " << consonants << endl;

    return 0;
}
