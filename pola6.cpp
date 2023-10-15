#include <iostream>
using namespace std;

int main() {
    int n; cin >> n; // n genap ya bro, n terkecil adalah 10, 14, 18, 22
    int m = n / 2; 
    int mid = (m + 1)/2;
    for(int i = 1; i <= m; i++){
        for(int j = 1; j <= n; j++){
            if((i==1|i==m) && (j >= 3 && j <= 8) || i + j == mid + 1 || i + j == mid + n || i == j - (n - mid) || i == j + (m - mid)) cout << "*";
            else cout << " ";
        }
        cout << endl; 
    }
}