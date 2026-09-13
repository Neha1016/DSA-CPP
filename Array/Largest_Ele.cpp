#include <iostream>
using namespace std;

int main() {

    int arr[5];

    cout << "Enter 5 array element :"  ;

    for (int i = 0; i < 5; i++){
        cin >> arr[i];
    }

    int largest = arr[0];

    for (int i = 0; i < 5; i++){
        if(arr[i] > largest)
            largest = arr[i];

    }

    cout << largest;

    return 0;
}