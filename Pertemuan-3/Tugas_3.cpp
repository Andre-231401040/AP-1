#include <iostream>

using namespace std;

int main(){
    float bmi, beratBadan, tinggiBadan;
    string kategori;

    cout << "Masukkan berat badan anda (kg): ";
    cin >> beratBadan;
    cout << "Masukkan tinggi anda (m): ";
    cin >> tinggiBadan;

    bmi = beratBadan / (tinggiBadan * tinggiBadan);

    if(bmi < 18.5){
        kategori = "kurang";
    }else if((bmi >= 18.5) && (bmi < 25)){
        kategori = "normal";
    }else if((bmi >= 25) && (bmi < 30)){
        kategori = "berlebih";
    }else{
        kategori = "obesitas";
    }

    cout << "Bmi anda : " << bmi << endl;
    cout << "Kategori berat badan : " << kategori << endl;
    return 0;
}