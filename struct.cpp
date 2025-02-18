#include <iostream>
#include <string>
#include <unistd.h> 
using namespace std;

const int jumlahBarang = 10;

struct Barang
{
    string namaBarang, kategoriBarang, deskripsiBarang, lokasiBarang;
    int hargaBarang;
    float ratingBarang;
    void inputBarang(string namaBarang = "kosong", int hargaBarang = 0,string kategoriBarang = "kosong", string deskripsiBarang = "kosong", string lokasiBarang = "kosong", float ratingBarang = 0){
        this->namaBarang = namaBarang;
        this->hargaBarang = hargaBarang;
        this->kategoriBarang = kategoriBarang;
        this->deskripsiBarang = deskripsiBarang;
        this->lokasiBarang = lokasiBarang;
        this->ratingBarang = ratingBarang;
    }
} barang[jumlahBarang];

const int jumlahAkun = 10; 

    struct Person{
        string nama[jumlahAkun];
        string noHp[jumlahAkun];
        string alamat[jumlahAkun];
    };
    struct User{
        string username[jumlahAkun];
        string password[jumlahAkun];
        Person prsn[jumlahAkun];
    }user[jumlahAkun];

    int i;

