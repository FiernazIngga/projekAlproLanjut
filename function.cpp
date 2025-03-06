#include "struct.cpp" 

int cariBarang(){

}

void inisialisasiBarang(){
    barang[0].inputBarang("Kaos Polos", 100000, "Kaos", "Kaos warna putih", "Jakarta", 0);
    barang[1].inputBarang("Kemeja Formal", 150000, "Kemeja", "Kemeja lengan panjang", "Bandung", 0);
    barang[2].inputBarang("Jaket Denim", 250000, "Jaket", "Jaket bahan denim", "Surabaya", 0);
    barang[3].inputBarang("Sweater Rajut", 200000, "Sweater", "Sweater bahan rajut", "Yogyakarta", 0);
    barang[4].inputBarang("Kaos Bergaris", 120000, "Kaos", "Kaos motif garis-garis", "Semarang", 0);
    barang[5].inputBarang("Kemeja Batik", 180000, "Kemeja", "Kemeja motif batik", "Solo", 0);
    barang[6].inputBarang("Hoodie", 220000, "Jaket", "Hoodie warna hitam", "Malang", 0);
    barang[7].inputBarang("Cardigan", 190000, "Cardigan", "Cardigan warna abu-abu", "Bogor", 0);
    barang[8].inputBarang("Blazer", 300000, "Blazer", "Blazer formal", "Bekasi", 0);
    barang[9].inputBarang("Kaos Kaki", 50000, "Kaos", "Kaos kaki warna hitam", "Depok", 0);
    barang[10].inputBarang("T-Shirt", 105000, "Kaos", "T-Shirt warna biru", "Jakarta", 0);
    barang[11].inputBarang("Kemeja Casual", 140000, "Kemeja", "Kemeja lengan pendek", "Bandung", 0);
    barang[12].inputBarang("Jaket Kulit", 400000, "Jaket", "Jaket bahan kulit", "Surabaya", 0);
    barang[13].inputBarang("Sweater Wol", 210000, "Sweater", "Sweater bahan wol", "Yogyakarta", 0);
    barang[14].inputBarang("Kaos Lengan Panjang", 130000, "Kaos", "Kaos lengan panjang", "Semarang", 0);
    barang[15].inputBarang("Kemeja Flanel", 160000, "Kemeja", "Kemeja motif flanel", "Solo", 0);
    barang[16].inputBarang("Sweatshirt", 230000, "Jaket", "Sweatshirt warna abu-abu", "Malang", 0);
    barang[17].inputBarang("Vest", 190000, "Vest", "Vest warna hitam", "Bogor", 0);
    barang[18].inputBarang("Blazer Kasual", 320000, "Blazer", "Blazer untuk santai", "Bekasi", 0);
    barang[19].inputBarang("Jaket Parka", 350000, "Jaket", "Jaket model parka", "Depok", 0);
    barang[20].inputBarang("Kaos V-Neck", 115000, "Kaos", "Kaos model V-neck", "Jakarta", 0);
    barang[21].inputBarang("Kemeja Linen", 170000, "Kemeja", "Kemeja bahan linen", "Bandung", 0);
    barang[22].inputBarang("Jaket Kulit Sintetis", 380000, "Jaket", "Jaket kulit sintetis", "Surabaya", 0);
    barang[23].inputBarang("Sweater Katun", 220000, "Sweater", "Sweater bahan katun", "Yogyakarta", 0);
    barang[24].inputBarang("Kaos Raglan", 140000, "Kaos", "Kaos model raglan", "Semarang", 0);
    barang[25].inputBarang("Kemeja Slim Fit", 180000, "Kemeja", "Kemeja model slim fit", "Solo", 0);
    barang[26].inputBarang("Jaket Bomber", 270000, "Jaket", "Jaket model bomber", "Malang", 0);
    barang[27].inputBarang("Cardigan Rajut", 200000, "Cardigan", "Cardigan bahan rajut", "Bogor", 0);
    barang[28].inputBarang("Blazer Kancing Satu", 310000, "Blazer", "Blazer kancing satu", "Bekasi", 0);
    barang[29].inputBarang("Kaos Henley", 125000, "Kaos", "Kaos model henley", "Depok", 0);
    barang[30].inputBarang("Kaos Oversize", 110000, "Kaos", "Kaos model oversize", "Jakarta", 0);
    barang[31].inputBarang("Kemeja Oxford", 160000, "Kemeja", "Kemeja bahan oxford", "Bandung", 0);
    barang[32].inputBarang("Jaket Windbreaker", 260000, "Jaket", "Jaket model windbreaker", "Surabaya", 0);
    barang[33].inputBarang("Sweater Turtleneck", 230000, "Sweater", "Sweater model turtleneck", "Yogyakarta", 0);
    barang[34].inputBarang("Kaos Lengan Tiga Perempat", 140000, "Kaos", "Kaos lengan tiga perempat", "Semarang", 0);
    barang[35].inputBarang("Kemeja Denim", 170000, "Kemeja", "Kemeja bahan denim", "Solo", 0);
    barang[36].inputBarang("Hoodie Zip-Up", 240000, "Jaket", "Hoodie model zip-up", "Malang", 0);
    barang[37].inputBarang("Cardigan Lengan Pendek", 200000, "Cardigan", "Cardigan lengan pendek", "Bogor", 0);
    barang[38].inputBarang("Blazer Double-Breasted", 320000, "Blazer", "Blazer double-breasted", "Bekasi", 0);
    barang[39].inputBarang("Kaos Pocket", 115000, "Kaos", "Kaos dengan saku", "Depok", 0);
    barang[40].inputBarang("Kaos Basic", 100000, "Kaos", "Kaos warna solid", "Jakarta", 0);
    barang[41].inputBarang("Kemeja Kerah Mandarin", 150000, "Kemeja", "Kemeja dengan kerah mandarin", "Bandung", 0);
    barang[42].inputBarang("Jaket Harrington", 250000, "Jaket", "Jaket model Harrington", "Surabaya", 0);
    barang[43].inputBarang("Sweater Crewneck", 200000, "Sweater", "Sweater model crewneck", "Yogyakarta", 0);
    barang[44].inputBarang("Kaos Lengan Pendek Polos", 120000, "Kaos", "Kaos lengan pendek warna solid", "Semarang", 0);
    barang[45].inputBarang("Kemeja Chino", 180000, "Kemeja", "Kemeja bahan chino", "Solo", 0);
    barang[46].inputBarang("Jaket Varsity", 220000, "Jaket", "Jaket model varsity", "Malang", 0);
    barang[47].inputBarang("Cardigan Bulu", 190000, "Cardigan", "Cardigan bahan bulu", "Bogor", 0);
    barang[48].inputBarang("Blazer Casual", 300000, "Blazer", "Blazer untuk santai", "Bekasi", 0);
    barang[49].inputBarang("Kaos Polo", 130000, "Kaos", "Kaos berkerah", "Depok", 0);
    barang[50].inputBarang("T-Shirt Grafik", 105000, "Kaos", "T-Shirt dengan gambar", "Jakarta", 0);
    barang[51].inputBarang("Kemeja Flanel Kotak-Kotak", 140000, "Kemeja", "Kemeja flanel dengan motif kotak-kotak", "Bandung", 0);
    barang[52].inputBarang("Jaket Kulit Asli", 450000, "Jaket", "Jaket bahan kulit asli", "Surabaya", 0);
    barang[53].inputBarang("Sweater Polos", 210000, "Sweater", "Sweater tanpa motif", "Yogyakarta", 0);
}

void registrasi(){
    bool pilihan = true;
    char pilihanBenar;
   
        system("cls");
        cout << "-----Register-----" << endl;
        cin.ignore();
        cout << "Masukkan Nama Anda: "; getline(cin, akun[akunPengguna].nama);
        cout << "Masukkan No Hp: "; getline(cin, akun[akunPengguna].nama);
        cout << "Masukkan Alamat Dusun-Kelurahan-Kecamatan-Kabupaten-Pulau: "; getline(cin, akun[akunPengguna].nama);
        cout << "Masukkan Username Anda: "; getline(cin, akun[akunPengguna].username);
        cout << "Masukkan Password Anda: "; getline(cin, akun[akunPengguna].password);
        cout << "Apakah anda yakin sudah benar? ( y / n ): ";
        cin >> pilihanBenar;
        if (pilihanBenar == 'y') {
            akunPengguna++;
        } else {
            // Jika tidak yakin, lakukan registrasi lagi secara rekursif
            registrasi();
        }
    }


void tampilkanBarang(int index = 0) {
    if (index >= jumlahBarang){
        cout << "Silahkan dibeli bajunyaaaa" << endl;
    } else {
        cout << "Nama Barang: " << barang[index].namaBarang << endl;
        cout << "Harga: Rp. " << barang[index].hargaBarang << endl;
        cout << "Kategori: " << barang[index].kategoriBarang << endl;
        cout << "Deskripsi: " << barang[index].deskripsiBarang << endl;
        cout << "Lokasi: " << barang[index].lokasiBarang << endl;
        cout << "Rating: " << barang[index].ratingBarang << endl;
        cout << "-------------------------" << endl;
        tampilkanBarang(index + 1);
    } 
    
}

void beliBarang();

void aksesAkun(string username){
    int pilihan;
    bool menu = true;
    while (menu)
    {
        system("cls");
        cout << "Selamat datang " << username << "! Selamat berbelanjaa~" << endl;
        cout << "Menu\n1. Beli\n2. Keranjang\n3. Profil\n 4. Riwayat Pembelian \n 5. Keluar\nIsikan pilian anda: ";
        cin >> pilihan;
        cin.ignore();
        switch (pilihan)
        {
        case 1:
            system("cls");
            beliBarang();
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
            cout<<"Login Berhasil!"<<endl;
            system("pause");
            aksesAkun(username);
            break;
        }else{
            cout<<"Login gagal"<<endl;
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


void beliBarang(){
    int j = 0;
    int pilihanPelanggan;
    int pilihanAksi;
    bool ulang = 1;
    string namabarang;
    cout << "List barang : " << endl;
    tampilkanBarang();
    while (ulang)
    {
        // system("cls");
        cout << "Pilih menu: \n1. Cari Nama Barang \nMasukkan pilihan anda: ";
        cin >> pilihanPelanggan;
        cin.ignore();
        switch (pilihanPelanggan)
        {
        case 1:
            cout << "Masukkan nama barang: "; getline(cin, namabarang);
            barang[jumlahBarang+1].namaBarang = namabarang;
            for (int i = 0; i < jumlahBarang - 1; i++)
            {
                if (barang[i].namaBarang == namabarang)
                {
                    j++;
                }
            }
            if (j > jumlahBarang)
            {
                cout << "Barang tidak ditemukan" << endl;
            } else {
                system("cls");
                cout << "Nama Barang: " << barang[j].namaBarang << endl;
                cout << "Kategori Barang: " << barang[j].kategoriBarang << endl;
                cout << "Deskripsi Barang: " << barang[j].deskripsiBarang << endl;
                cout << "Lokasi Barang: " << barang[j].lokasiBarang << endl;
                cout << "Harga Barang: " << barang[j].hargaBarang << endl;
                cout << "Rating Barang: " << barang[j].ratingBarang << endl;
                cout << endl;
            }
            cout << "Aksi: \n1. Beli Barang\n2. Masukkan Keranjang\n3. Keluar\nMasukkan Pilihan Anda: ";
            cin >> pilihanAksi;
            cin.ignore();
            switch (pilihanAksi)
            {
            case 1:
                cout << "Anda membli barang" << endl;
                system("pause");
                break;
            case 2:
                cout << "Anda memasukkan keranjang barang" << endl;
                system("pause");
                break;
            case 3:
                ulang = 0;
                break;
            
            default:
            ulang = 0;
                break;
            }
            break;
        
        default:
            break;
        }
    }
    
}

// void lihatBrgUser(Barang barang[], int index) {
//     if (index == jumlahBarang) {
//         return;
//     }

//     if (index == 0) {
//         cout << left << setw(20) << "Nama Barang"
//             << setw(20) << "Kategori Barang"
//             << setw(25) << "Deskripsi Barang"
//             << setw(15) << "Lokasi Barang"
//             << setw(15) << "Harga Barang"
//             << setw(15) << "Rating Barang" << endl;
//         cout << "-------------------------------------------------------------" << endl;
//     }

//     cout << left << setw(20) << barang[index].namaBarang
//         << setw(20) << barang[index].kategoriBarang
//         << setw(25) << barang[index].deskripsiBarang
//         << setw(15) << barang[index].lokasiBarang
//         << setw(15) << barang[index].hargaBarang
//         << setw(15) << barang[index].ratingBarang << endl;

//     lihatBrgUser(barang, index + 1, jumlahBarang);
// }

// void lihatBrgFilter(int filter){
//     system("cls");
//     string namaBarang = "";
//     while (filter >= 1 && filter <= 4)
//     {
//         switch (filter)
//         {
//         case 1:
//             cout << "Masukkan nama barang : "; getline(cin, namaBarang);
//             for (int i = 0; i < jumlahBarang; i++)
//             {
//                 if (barang[i].namaBarang == namaBarang)
//                 {
//                     cout << "Nama Barang: " << barang[i].namaBarang << endl;
//                 }
//             }
//             break;
//         case 2:

//             break;
//         }
//     }
    
// }

// void lihatBarangUser(){
//     int menu;
//     bool ulang = true;
//     while (ulang)
//     {
//         system("cls");
//         cout << "Menu \n1. Lihat Semua Barang\n2. Kategori\n3. Keluar\nMasukkan Pilihan Anda: ";
//         cin >> menu;
//         cin.ignore();
//         switch (menu)
//         {
//         case 1:
//             lihatBrgUser();
//             break;
//         case 2:
//             system("cls");
//             int pilihanFilter;
//             cout << "Pilih kategori: \n1. Nama Barang\n2. Kategori Barang\n3. Harga Barang\n4. Rating Barang\n5. Keluar";
//             cin >> pilihanFilter;
//             cin.ignore();
//             lihatBrgFilter(pilihanFilter);
//             break;
//         case 3:
//             ulang = 0;
//             break;
//         default:
//             ulang = 1;
//             break;
//         }
//     }
// }