#include <iostream>
using namespace std;
int main()
{//begin
    //numeric panjang, lebar, luas
    double panjang;
    double lebar;
    double luas;
    //accapt data panjang, lebar, luas
    cout << "masukkan panjangnya = ";
    cin >> panjang;
    cout << "masukkan lebarnya = ";
    cin >> lebar;
    //compute luas
    luas = panjang * lebar;
    //display luas
    cout << "luasnya adalah " << luas;

}//end