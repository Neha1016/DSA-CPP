#include <iostream>
using namespace std;
int main () 
{
    string str, sub;

    cout << "Enter main string:";
    cin >> str;

    cout << "Enter substring :";
    cin >> sub;

    if(str.find(sub) != string::npos)
    {
        cout << "Substring Found At Index:" << str.find(sub) << endl;
    }
    else
    {
        cout << "Substring Not Found";
    }

    return 0;
}