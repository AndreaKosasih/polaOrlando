#include <iostream>
using namespace std;

int main() {
    int n; cin >> n; // n ganil n = 1, 3, 5, dst
    int mid = (n + 1) / 2;  
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (mid >= abs(mid - i) + abs(mid - j) + 1) cout << "*";
            else cout << " ";
        }
        cout << endl;
    }
    return 0;
}
