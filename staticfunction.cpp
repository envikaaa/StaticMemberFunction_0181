#include <iostream>
#include <string>
using namespace std;

class Mahasiswa {

private:
    static int nim;
public:
    int id;
    string nama;

    void setID();
    voidprintAll();

    //pembuatan static function
    static void setNim(int pnim) {
        
    }
}