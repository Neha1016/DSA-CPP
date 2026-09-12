#include <iostream>
using namespace std;

int main()
{

    int n;

    cout << "Enter number :" << endl;
    cin >> n;

    // O(n) Time Complexity
    for (int i = 0; i < n; i++)
    {
        cout << i << " ";
    }
    return 0;
}

// O(N^2) Time Complexity 
// for (int i = 0; i < N; i++) {
//     for (int j = 0; j < N; j++) {
//         cout << i << " " << j;
//     }
// }

// O(log N) Time Complexity 
// for (int i = 1; i < N; i *= 2) {
//     cout << i;
// }

