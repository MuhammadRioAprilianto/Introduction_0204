#include <iostream>
using namespace std;

//numeric panjang, lebar, luas
double panjang;
double lebar;
double luas;

void inputdata(){
    cout << "masukkan panjangnya = ";
    cin >> panjang;
    cout << "masukkan lebarnya = ";
    cin >> lebar;
}

double hitungluas(){
    return panjang * lebar;
}

void tampilluas(){
    cout << "luas persegi panjang = " << hitungluas();
}

int main() {
    inputdata();
    tampilluas();
}