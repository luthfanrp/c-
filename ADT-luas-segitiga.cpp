#include <iostream>
using namespace std;

struct bangunruang
{
    int segitiga;
};

bangunruang luas[10];
float alas,tinggi;
int i;

int main()
{
    cout << "Menghitung luas segitiga" << endl;
    cout << "Masukkan panjang alas : ";
    cin >> alas;
    cout << "Masukkan tinggi segitiga : " ;
    cin >> tinggi;


    luas[i].segitiga = alas * tinggi * 0.5;
    cout << "Total Luas Segitiga : " << luas[i].segitiga<< endl;
}


----------OUTPUT----------
Menghitung luas segitiga
Masukkan panjang alas : 50
Masukkan tinggi segitiga : 50
Total Luas Segitiga : 1250
