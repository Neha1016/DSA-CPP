#include <iostream>
using namespace std;

int main() {

    int arr[7];

    cout << "Enter 7 array element :"  ;

    for (int i = 0; i < 7; i++){
        cin >> arr[i];
    }

    int target;

    cout << "Enter element :";
    cin >> target;

    int count = 0;

    for (int i = 0; i < 7; i++){
        if (arr[i] == target)
            count++;
    }

    cout << "Count = " << count;

    return 0;
}