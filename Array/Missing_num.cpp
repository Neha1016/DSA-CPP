#include <iostream>
using namespace std;
int main()
{

    int arr[4];
    int n = 5;

    cout << "Enter 4 element :";

    for (int i = 0; i < 4; i++)
    {
        cin >> arr[i];
    }

    int total = n * (n + 1) / 2;
    int sum = 0;

    for (int i = 0; i < 4; i++)
    {
        sum += arr[i];
    }

    cout << "Missing Number = " << total - sum;

    return 0;
}