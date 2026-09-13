#include <iostream>
using namespace std;

int main()
{

    int arr[7];

    cout << "Enter 7 array element :";

    for (int i = 0; i < 7; i++)
    {
        cin >> arr[i];
    }

    cout << "Reverse Array :" ;

    for (int i = 6; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }

    return 0;
}