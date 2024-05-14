#include <iostream>
#include <vector> // library untuk vector

using namespace std;

int main() {
    system("cls");

    // Vector Declaration and Initialization
    vector<string> nama_karyawan = {"Andi", "Budi", "Santi", "Doni", "Yanto"}; // membuat vektor dengan tipe data string

    // Accessing Elements of Vector
    for (int i = 0; i < nama_karyawan.size(); i++) { // nama_karyawan.size() = ukuran vektor nama_karyawan
        cout << nama_karyawan[i] << endl;
    }

    // setiap data di vektor nama_karyawan diidentifikasikan sebagai karyawan
    for (string karyawan : nama_karyawan) {     //* For Each Loop
        cout << karyawan << endl;
    } 

    // Add Data to Vector
    nama_karyawan.push_back("Wawan"); // menambah data Wawan ke belakang vektor nama_karyawan

    // Delete Data from Vector
    nama_karyawan.pop_back();       //* Menghapus data vector paling akhir
    nama_karyawan.erase(nama_karyawan.begin() + 3);     //* begin() untuk mendapatkan data paling awal, erase() untuk menghapus data
}