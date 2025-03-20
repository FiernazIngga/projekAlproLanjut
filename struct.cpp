#include <iostream>
#include <string>
#include <iomanip>
#include <ctime>
using namespace std;

const int jumlahBarang = 53;
const int jumlahAkun = 10; 
const int keranjangFull = 6;
const int jumlahMaksBeli = 100;
int jumlahKeranjang= 0, akunPengguna = 0;

tm* waktuLocal(){
    time_t waktu_sekarang;
    time(&waktu_sekarang);
    tm* waktu_lokal = localtime(&waktu_sekarang);
    return waktu_lokal;
}

struct Barang
{
    string namaBarang, kategoriBarang, deskripsiBarang, lokasiBarang;
    int hargaBarang, idBarang, jumlahDibeliSemua, jumlahDibeliRating, stokBarang;
    float ratingBarang;
    void inputBarang(int idBarang, string namaBarang = "kosong", int hargaBarang = 0,string kategoriBarang = "kosong", string deskripsiBarang = "kosong", string lokasiBarang = "kosong", float ratingBarang = 0, int jumlahDibeliSemua = 0, int jumlahDibeliRating = 0, int stok = 0){
        this->idBarang = idBarang;
        this->namaBarang = namaBarang;
        this->hargaBarang = hargaBarang;
        this->kategoriBarang = kategoriBarang;
        this->deskripsiBarang = deskripsiBarang;
        this->lokasiBarang = lokasiBarang;
        this->ratingBarang = ratingBarang;
        this->jumlahDibeliSemua = jumlahDibeliSemua;
        this->jumlahDibeliRating = jumlahDibeliRating;
        this->stokBarang = stok;
    }
} barang[jumlahBarang];


struct Akun{
    string nama;
    string noHp;
    string alamat;
    string username;
    string password;
    int saldo;
} akun[jumlahAkun];

struct Keranjang{
    int idBarang;
    string namaBarang;
    int hargaBarang, waktuMasuk[6];
    tm* waktu_lokal = waktuLocal();
    void eksekusiWaktuMasuk(){
        this->waktuMasuk[0] = waktu_lokal->tm_sec;
        this->waktuMasuk[1] = waktu_lokal->tm_min;
        this->waktuMasuk[2] = waktu_lokal->tm_hour;
        this->waktuMasuk[3] = waktu_lokal->tm_mday;
        this->waktuMasuk[4] = (waktu_lokal->tm_mon)+1;
        this->waktuMasuk[5] = (waktu_lokal->tm_year)+1900;
    }
    void lihatWaktu(){
        string bulan[12] = {
            "Januari", 
            "Februari", 
            "Maret", 
            "April", 
            "Mei", 
            "Juni", 
            "Juli", 
            "Agustus", 
            "September", 
            "Oktober", 
            "November", 
            "Desember"
        };        
        cout << this->waktuMasuk[3] << "-" << bulan[(this->waktuMasuk[4]) - 1]  << "-" << this->waktuMasuk[5] << endl;
    }
} keranjang[keranjangFull-1];

struct RiwayatBeli
{
    string namaBarang;
    int hargaBarang, waktuBeli[6];
    tm* waktu_lokal = waktuLocal();
    void eksekusiWaktuMasuk(){
        this->waktuBeli[0] = waktu_lokal->tm_sec;
        this->waktuBeli[1] = waktu_lokal->tm_min;
        this->waktuBeli[2] = waktu_lokal->tm_hour;
        this->waktuBeli[3] = waktu_lokal->tm_mday;
        this->waktuBeli[4] = (waktu_lokal->tm_mon)+1;
        this->waktuBeli[5] = (waktu_lokal->tm_year)+1900;
    }
    void lihatWaktu(){
        string bulan[12] = {
            "Januari", 
            "Februari", 
            "Maret", 
            "April", 
            "Mei", 
            "Juni", 
            "Juli", 
            "Agustus", 
            "September", 
            "Oktober", 
            "November", 
            "Desember"
        };        
        cout << this->waktuBeli[3] << "-" << bulan[(this->waktuBeli[4]) - 1]  << "-" << this->waktuBeli[5] << endl;
    }
} riwayatPembelian[jumlahMaksBeli];



