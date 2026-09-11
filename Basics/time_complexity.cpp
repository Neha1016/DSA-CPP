#include <iostream>
using namespace std;
int main () {
    int n;
    cout << "Enter a number:" << endl;
    cin >> n;

    // O(n) Time complexity 
    for (int i = 0; i < n; i++) {
    cout << i << " ";
}

return 0;
}

// O(n^2) Time complexity

// for (int i = 0; i < n; i++) {
//     for (int j = 0; j < n; j++) {
//         cout << i << " " << j;
//     }
// }

// O(Log n) Time Complexity 

// for (int i = 1; i < n; i *= 2) {
//     cout << i;
// }
