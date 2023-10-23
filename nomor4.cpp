// UTS Nomor 4 Alprog
#include <iostream>
using namespace std;

int main(){
    int a = 6; 
    for(int i = 1; i <= 5; i++){
        int b = i; 
        for(int j = 1; j<= 9; j++){
            if(i+j>=6 && i+j <= a) {
                if(j<=5) {
                    cout << b << " "; 
                    b++;
                } else if(j>5) {
                    if (j==6) b-=2; 
                    else b--; 
                    cout << b << " "; 
                }
            } else cout << "  ";
        }
        a+=2; cout << endl; 
    }
    return 0; 
}

/*
1. Decomposition - divide 
- lihat bentuk pola 
- lihat apa yang dituliskan dalam pola
1. Tahu bagaimana pola diwrite
2. Terapkan CT
2a. Pattern Recognitiom
- menggambar grid untuk bantuan (ada elemen baris dan kolomnya)
- lihat pola
*/
