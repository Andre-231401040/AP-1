#include <iostream>

using namespace std;

int main(){
    int a, b;
    a = 3;
    b = 5;

    // int tambah = a + b;
    // int kurang = a - b;
    // int kali = a * b;
    // // float bagi = a / b;
    // float bagi = (float) a / (float) b;
    // int modulo = a % b;

    // cout << "Hasil penjumlahan = " << tambah << endl;
    // cout << "Hasil pengurangan = " << kurang << endl;
    // cout << "Hasil perkalian = " << kali << endl;
    // cout << "Hasil pembagian = " << bagi << endl;
    // cout << "Hasil sisa bagi = " << modulo << endl;

    // //relational operator
    // cout << (a == b) << endl;
    // cout << (a > b) << endl;
    // cout << (a >= b) << endl;
    // cout << (a < b) << endl;
    // cout << (a <= b) << endl;
    // cout << (a != b) << endl;

    // //logical operator (&&, ||, !)
    // cout << (true && true) << endl;
    // cout << (true && false) << endl;
    // cout << (false && true) << endl;
    // cout << (false && false) << endl;

    // cout << (true|| true) << endl;
    // cout << (true|| false) << endl;
    // cout << (false|| true) << endl;
    // cout << (false|| false) << endl;

    // cout << (!true) << endl;
    // cout << (!false) << endl;

    // cout << ~7 << endl;
    // b %= a;
    // cout << (b %= a) << endl;

    // pre increment
    cout << a << endl;
    cout << ++a << endl;
    cout << b << endl;
    cout << ++b << endl;
    // post increment
    cout << a++ << endl;
    cout << a << endl;
    cout << b++ << endl;
    cout << b << endl;
    // pre decrement
    cout << a << endl;
    cout << --a << endl;
    cout << b << endl;
    cout << --b << endl;
    // post decrement
    cout << a-- << endl;
    cout << a << endl;
    cout << b-- << endl;
    cout << b << endl;

    return 0;
}