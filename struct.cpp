#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

const int jumlahBarang = 53;
int akunPengguna = 0;

struct Barang
{
    string namaBarang, kategoriBarang, deskripsiBarang, lokasiBarang;
    int hargaBarang, idBarang;
    float ratingBarang;
    void inputBarang(int idBarang, string namaBarang = "kosong", int hargaBarang = 0,string kategoriBarang = "kosong", string deskripsiBarang = "kosong", string lokasiBarang = "kosong", float ratingBarang = 0){
        this->idBarang = idBarang;
        this->namaBarang = namaBarang;
        this->hargaBarang = hargaBarang;
        this->kategoriBarang = kategoriBarang;
        this->deskripsiBarang = deskripsiBarang;
        this->lokasiBarang = lokasiBarang;
        this->ratingBarang = ratingBarang;
    }
} barang[jumlahBarang];

const int jumlahAkun = 10; 

struct Akun{
    string nama;
    string noHp;
    string alamat;
    string username;
    string password;
} akun[jumlahAkun];



