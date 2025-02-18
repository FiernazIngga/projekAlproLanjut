yoi

#include "struct.cpp"



void register(){
    cout<<"-----Register-----";
    cout<<"Masukkan username: "; cin >> user[].username;
    cout<<"Masukkan Password: "; cin >> user[].password;
    cout << "Masukkan Nama: ";
    cin >> user[].prsn.nama;

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

void login(){
    cout<<"-----Silahkan login-----";
    cout<<"Masukkan username: "; cin >> user[jumlahAkun].username;
    cout<<"Masukkan Password: "; cin >> user[jumlahAkun].password;

}

void Menu(){
    
}