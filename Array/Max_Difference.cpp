#include <iostream>
using namespace std;
int main()
{

    int arr[6];

    cout << "Enter 6 elements : ";

    for (int i = 0; i < 6; i++)
    {
        cin >> arr[i];
    }

    int minElement = arr[0];
    int maxDifference = 0;

    for (int i = 1; i < 6; i++)
    {

        int difference = arr[i] - minElement;

        if (difference > maxDifference)
            maxDifference = difference;

        if (arr[i] < minElement)
            minElement = arr[i];
    }

    cout << "Maximum Difference = " << maxDifference;

    return 0;
}