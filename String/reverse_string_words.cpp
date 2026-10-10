#include <iostream>
#include <sstream>
using namespace std;
int main () 
{
    string str, word;
    string result = "";

    cout << "Enter a sentence :";
    getline(cin, str);

    stringstream ss(str);

    while(ss >> word) 
    {
        result = word + " " + result;
    }

    cout << "Reversed Words: " << result;

    return 0;
}