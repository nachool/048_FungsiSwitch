#include <iostream>
using namespace std;

int bilA, bilB;

void input()
{
    cout << "Masukkan bilangan pertama = ";
    cin >> bilA;
    cout << "Masukkan bilangan kedua = ";
    cin >> bilB;
}


int penjumlahan(int a, int b)
{
    return a + b;
}

int pengurangan(int a, int b)
{
    return a - b;
}

int perkalian(int a, int b)
{
    return a * b;
}

float pembagian(float a, float b)
{
    return a / b;
}


int main()
{
    int pilihan;
    do
    {
        cout << "Kalkulator sederhana" << endl;
        cout << "====================" << endl;
        cout << "1. Penjumlahan" << endl;
        cout << "2. Pengurangan" << endl;
        cout << "3. Perkalian" << endl;
        cout << "4. Pembagian" << endl;
        cout << "5. Keluar" << endl;
        cout << "====================" << endl;
        cout << "Masukkan menu pilihan : " << endl;
        cin >> pilihan;

        switch (pilihan)
        {
        case 1:
            input;
            cout << "Hasil penjumlahan = " << penjumlahan(bilA, bilB) << endl;
            break;

        case 2:
            input;
            cout << "Hasil pengurangan = " << pengurangan(bilA, bilB) << endl;
            break;

        case 3:
            input;
            cout << "Hasil perkalian = " << perkalian(bilA, bilB) << endl;
            break;

        case 4:
            input;
            cout << "Hasil pembagian = " << pembagian(bilA, bilB) << endl;
            break;
        }
    } 
} 

