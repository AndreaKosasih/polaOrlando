#include <iostream>
using namespace std;

int main() {
    int n; cin >> n; // n ganjil, n = 1, 3, 5, dst 
    int mid = (n + 1) / 2; 
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(j <= i && j + i <= n + 1) cout << "*";
            else cout << " ";
        }
        cout << endl; 
    }
    return 0; 
}