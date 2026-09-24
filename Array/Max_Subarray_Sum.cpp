#include <iostream>
using namespace std;
int main()
{

    int arr[7];

    cout << "Enter 7 element :";

    for (int i = 0; i < 7; i++)
    {
        cin >> arr[i];
    }

    int currentSum = arr[0];
    int maxSum = arr[0];

    for (int i = 1; i < 7; i++)
    {

        currentSum = max(arr[i], currentSum + arr[i]);

        if (currentSum > maxSum)
            maxSum = currentSum;
    }

    cout << "Maximum Subarray Sum = " << maxSum;

    return 0;
}