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

void registrasi(){
    bool pilihan = true;
    char pilihanBenar;
    while (pilihan)
    {
        pilihanBenar = 'n';
        system("cls");
        cout << "-----Register-----" << endl;
        cout << "Masukkan Nama Anda: "; getline(cin, akun[akunPengguna].nama);
        cout << "Masukkan No Hp: "; getline(cin, akun[akunPengguna].nama);
        cout << "Masukkan Alamat Dusun-Kelurahan-Kecamatan-Kabupaten-Pulau: "; getline(cin, akun[akunPengguna].nama);
        cout << "Masukkan Username Anda: "; getline(cin, akun[akunPengguna].username);
        cout << "Masukkan Password Anda: "; getline(cin, akun[akunPengguna].password);
        cout << "Apakah anda yakin sudah benar? ( y / n ): ";
        cin >> pilihanBenar;
        if (pilihanBenar == 'y')
        {
            akunPengguna++;
            pilihan = 0;
        } else {
            pilihan = 1;
        }
    }
}

void aksesAkun(string username){
    int pilihan;
    bool menu = true;
    while (menu)
    {
        system("cls");
        cout << "Selamat datang " << username << " selamat berbelanjaa" << endl;
        cout << "Menu\n1. Lihat Barang dan Beli\n2. Keranjang\n3. Lihat Data\n4. Keluar\nIsikan pilian anda: ";
        cin >> pilihan;
        cin.ignore();
        switch (pilihan)
        {
        case 1:
            system("cls");
            break;
        default:
            menu = 1;
            break;
        }
    }
}

void login(){
    string username, password;
    bool loginSukses = false;
    int userIndex;
    cout<<"Masukkan Username Anda: "; cin>>username;
    cout<<"Masukkan Password Anda: "; cin>>password;

    for(int i=0; i < akunPengguna; i++){
        if(username == akun[i].username && password == akun[i].password ){
            loginSukses = true;
            cout<<"Login Berhasil!";
            system("pause");
            aksesAkun(username);
            break;
        }else{
            cout<<"Login gagal";
            system("pause");
        }
    }
}

void lihatBrg(Barang barang[], int index, int jumlahBarang){
    if (index == jumlahBarang) {
        return;
    }
    cout << "Nama Barang: " << barang[index].namaBarang << endl;
    cout << "Kategori Barang: " << barang[index].kategoriBarang << endl;
    cout << "Deskripsi Barang: " << barang[index].deskripsiBarang << endl;
    cout << "Lokasi Barang: " << barang[index].lokasiBarang << endl;
    cout << "Harga Barang: " << barang[index].hargaBarang << endl;
    cout << "Rating Barang: " << barang[index].ratingBarang << endl;
    cout << endl;
    lihatBrg(barang, index + 1, jumlahBarang);
}

void lihatbarang(){
    system("cls");
    lihatBrg(barang, 0, jumlahBarang);
    system("pause");
}

void lihatBrgUser(Barang barang[], int index, int jumlahBarang) {
    if (index == jumlahBarang) {
        return;
    }

    if (index == 0) {
        cout << left << setw(20) << "Nama Barang"
            << setw(20) << "Kategori Barang"
            << setw(25) << "Deskripsi Barang"
            << setw(15) << "Lokasi Barang"
            << setw(15) << "Harga Barang"
            << setw(15) << "Rating Barang" << endl;
        cout << "-------------------------------------------------------------" << endl;
    }

    cout << left << setw(20) << barang[index].namaBarang
        << setw(20) << barang[index].kategoriBarang
        << setw(25) << barang[index].deskripsiBarang
        << setw(15) << barang[index].lokasiBarang
        << setw(15) << barang[index].hargaBarang
        << setw(15) << barang[index].ratingBarang << endl;

    lihatBrgUser(barang, index + 1, jumlahBarang);
}

void lihatBrgFilter(int filter){
    system("cls");
    string namaBarang = "";
    while (filter >= 1 && filter <= 4)
    {
        switch (filter)
        {
        case 1:
            cout << "Masukkan nama barang : "; getline(cin, namaBarang);
            for (int i = 0; i < jumlahBarang; i++)
            {
                if (barang[i].namaBarang == namaBarang)
                {
                    cout << "Nama Barang: " << barang[i].namaBarang << endl;
                }
            }
            break;
        case 2:

            break;
        }
    }
    
}

void lihatBarangUser(){
    int menu;
    bool ulang = true;
    while (ulang)
    {
        system("cls");
        cout << "Menu \n1. Lihat Semua Barang\n2. Kategori\n3. Keluar\nMasukkan Pilihan Anda: ";
        cin >> menu;
        cin.ignore();
        switch (menu)
        {
        case 1:
            lihatBarangUser();
            break;
        case 2:
            system("cls");
            int pilihanFilter;
            cout << "Pilih kategori: \n1. Nama Barang\n2. Kategori Barang\n3. Harga Barang\n4. Rating Barang\n5. Keluar";
            cin >> pilihanFilter;
            cin.ignore();
            lihatBrgFilter(pilihanFilter);
            break;
        case 3:
            ulang = 0;
            break;
        default:
            ulang = 1;
            break;
        }
    }
}