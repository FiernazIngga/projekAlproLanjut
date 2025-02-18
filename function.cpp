#include "struct.cpp"

void inisialisasiBarang(){
    barang[0].inputBarang("Kaos Polos", 100000, "Pakaian", "Kaos warna putih", "Jakarta", 0);
    barang[1].inputBarang("Kemeja Formal", 150000, "Pakaian", "Kemeja lengan panjang", "Bandung", 0);
    barang[2].inputBarang("Jaket Denim", 250000, "Pakaian", "Jaket bahan denim", "Surabaya", 0);
    barang[3].inputBarang("Sweater Rajut", 200000, "Pakaian", "Sweater bahan rajut", "Yogyakarta", 0);
    barang[4].inputBarang("Kaos Bergaris", 120000, "Pakaian", "Kaos motif garis-garis", "Semarang", 0);
    barang[5].inputBarang("Kemeja Batik", 180000, "Pakaian", "Kemeja motif batik", "Solo", 0);
    barang[6].inputBarang("Hoodie", 220000, "Pakaian", "Hoodie warna hitam", "Malang", 0);
    barang[7].inputBarang("Cardigan", 190000, "Pakaian", "Cardigan warna abu-abu", "Bogor", 0);
    barang[8].inputBarang("Blazer", 300000, "Pakaian", "Blazer formal", "Bekasi", 0);
    barang[9].inputBarang("Kaos Kaki", 50000, "Pakaian", "Kaos kaki warna hitam", "Depok", 0);
}

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