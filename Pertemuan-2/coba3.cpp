#include <iostream>

using namespace std;

int main(){
    float p, l, luas;
    cout << "Masukkan panjang: ";
    cin >> p;

    cout << "Masukkan lebar: ";
    cin >> l;

    luas = p * l;
    
    cout << "Luas: " << luas << endl;
    return 0;
}