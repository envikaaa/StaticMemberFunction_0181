#include <iostream>
#include <string>
using namespace std;

class Mahasiswa {
public:
    mahasiswa(int nim, string nama); //constructor dengam parameter
};

//definisi constructor dengan parameter
Mahasiswa::mahasiswa(int nim, string nama); {
    cout << "Constructor Dengan Parameter Terpanggil" << endl;
    cout << "NIM : " << nim << endl;
    cout << "Nama : " << nama << endl;
}

int main(){
    mahasiswa mhs(12345, "Pascal"); //memanggil constructor dengan parameter
    return 0;
}
