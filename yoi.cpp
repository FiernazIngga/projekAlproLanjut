#include <iostream>
using namespace std;

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

void Register(){
    inisialisasiBarang();
    cout<<"-----Register-----";
    cout<<"Masukkan username: "; cin >> user[jumlahAkun].username;
    cout<<"Masukkan Password: "; cin >> user[jumlahAkun].password;
    cout << "Masukkan Nama: ";
    cin >> user[jumlahAkun].prsn.nama;

    for(int i = 0; i < 5; ++i) {
        cout << "Masukkan nomor telepon ke-" << (i+1) << ": ";
        cin >> user.prsn.noHp[i];
    }

    cout << "Masukkan Alamat: ";
    cin >> user.prsn.alamat;

    cout << "\nData yang telah dimasukkan:\n";
    cout << "Username: " << user.username << endl;
    cout << "Nama: " << user.prsn.nama << endl;
    cout << "Nomor Telepon: ";
    for(int i = 0; i < 5; ++i) {
        cout << user.prsn.noHp[i] << " ";
    }
    cout << "\nAlamat: " << user.prsn.alamat << endl;
} 

void Login(){
    cout<<"-----Silahkan login-----";
    cout<<"Masukkan username: "; cin >> user[jumlahAkun].username;
    cout<<"Masukkan Password: "; cin >> user[jumlahAkun].password;

}

void Menu(){
    
}

int main(){
    cout<<"Selamat datang di HAENEM";
    cout<<"Silahkan pilih menu";
    
    
    

    return 0; 
}
