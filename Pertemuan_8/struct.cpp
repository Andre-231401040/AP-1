#include <iostream>
#include <vector>

using namespace std;

// Struct Declaration
// struct Mahasiswa {
//     string nama, nim;
//     float nilai;
// };

typedef struct {
    string nama, nim;
    float nilai;
} Mahasiswa; // struct Mahasiswa 

int main() {
    system("cls");

    // Struct Initialization
    Mahasiswa mhs;
    vector<Mahasiswa> mahasiswa; // mendeklarasikan vector mahasiswa dengan tipe data struct Mahasiswa
    int n;

    cout << "Masukkan banyak mahasiswa : ";
    cin >> n;

    for(int i = 0; i < n; i++) {
        cout << "Mahasiswa " << i + 1 << endl;
        
        cin.get();
        cout << "Masukkan nama : ";
        getline(cin, mhs.nama);

        cout << "Masukkan NIM : ";
        cin >> mhs.nim;

        cout << "Masukkan nilai : ";
        cin >> mhs.nilai;

        mahasiswa.push_back(mhs); // memasukkan data mhs ke belakang vector mahasiswa
    }

    for(int i = 0; i < n; i++) {
        cout << "Mahasiswa " << i + 1 << endl;
        cout << "Nama : " << mahasiswa[i].nama << endl; // memasukkan nama mahasiswa ke-i
        cout << "NIM : " << mahasiswa[i].nim << endl; // memasukkan nim mahasiswa ke-i
        cout << "Nilai : " << mahasiswa[i].nilai << endl; // memasukkan nilai mahasiswa ke-i
    }

    return 0;
}
