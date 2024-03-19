#include <iostream>

using namespace std;

int main(){
    const float PHI = 3.14;
    float r, volume, luasPermukaan;

    cout << "Masukkan jari-jari bola: ";
    cin >> r;

    volume = 4 / 3 * PHI * r * r * r;
    luasPermukaan = 4 * PHI * r * r;

    cout << "Volume = " << volume << endl;
    cout << "Luas Permukaan = " << luasPermukaan << endl;

    return 0;
}