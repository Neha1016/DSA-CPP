#include <iostream>
using namespace std;
int main () {

    int arr[5];

    cout << "Enter 5 element :";

    for (int i = 0; i < 5; i ++){
        cin >> arr[i];
    }

    int smallest = arr[0];
    int second = arr[0];

    for (int i = 1; i < 5; i ++){

        if(arr[i] < smallest) {
            second = smallest;
            smallest = arr[i];
        }
        else if (arr[i] < second && arr[i] != smallest){
            second = arr[i];
        }
    }

    cout << "Second Smallest = " << second;

    return 0;
}