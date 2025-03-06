#include <iostream>
using namespace std;

//numeric panjang, lebar, luas
double panjang;
double lebar;
double luas;

//accept data
void inputdata() {
    //display
    cout << "masukkan panjangnya = ";
    //input
    cin >> panjang;
    //display
    cout << "masukkan lebarnya = ";
    //input
    cin >> lebar;
}

//compute luas
double hitungluas() {
    return panjang * lebar;
}

//display luas
void tampilluas() {
    cout << "luas persegi panjang = " << hitungluas;
}

int main() {
    inputdata();
    displayluas();
}