#include <iostream>
using namespace std; 

int main() {
    int n; cin >> n; // n >= 5, disarankan n ganjil 
    int mid = (n+1)/2; 
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(i == mid || j == mid || i + j == mid + 1 || i + j ==  mid + n || i == j + (mid - 1) || i == j - (mid - 1)) cout << "*";
            else cout << " ";
        }
        cout << endl; 
    }
    return 0; 
}

