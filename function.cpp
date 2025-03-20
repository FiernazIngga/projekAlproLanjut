#include "struct.cpp"

void beliBarang();
void lihatKeranjang();
void keranjangPelanggan(string username);

void inisialisasiBarang()
{
    barang[0].inputBarang(1, "Kaos Polos", 100000, "Kaos", "Kaos warna putih", "Jakarta", 0, 0, 0, 100);
    barang[1].inputBarang(2, "Kemeja Formal", 150000, "Kemeja", "Kemeja lengan panjang", "Bandung", 0, 0, 0, 100);
    barang[2].inputBarang(3, "Jaket Denim", 250000, "Jaket", "Jaket bahan denim", "Surabaya", 0, 0, 0, 100);
    barang[3].inputBarang(4, "Sweater Rajut", 200000, "Sweater", "Sweater bahan rajut", "Yogyakarta", 0, 0, 0, 100);
    barang[4].inputBarang(5, "Kaos Bergaris", 120000, "Kaos", "Kaos motif garis-garis", "Semarang", 0, 0, 0, 100);
    barang[5].inputBarang(6, "Kemeja Batik", 180000, "Kemeja", "Kemeja motif batik", "Solo", 0, 0, 0, 100);
    barang[6].inputBarang(7, "Hoodie", 220000, "Jaket", "Hoodie warna hitam", "Malang", 0, 0, 0, 100);
    barang[7].inputBarang(8, "Cardigan", 190000, "Cardigan", "Cardigan warna abu-abu", "Bogor", 0, 0, 0, 100);
    barang[8].inputBarang(9, "Blazer", 300000, "Blazer", "Blazer formal", "Bekasi", 0, 0, 0, 100);
    barang[9].inputBarang(10, "Kaos Kaki", 50000, "Kaos", "Kaos kaki warna hitam", "Depok", 0, 0, 0, 100);
    barang[10].inputBarang(11, "T-Shirt", 105000, "Kaos", "T-Shirt warna biru", "Jakarta", 0, 0, 0, 100);
    barang[11].inputBarang(12, "Kemeja Casual", 140000, "Kemeja", "Kemeja lengan pendek", "Bandung", 0, 0, 0, 100);
    barang[12].inputBarang(13, "Jaket Kulit", 400000, "Jaket", "Jaket bahan kulit", "Surabaya", 0, 0, 0, 100);
    barang[13].inputBarang(14, "Sweater Wol", 210000, "Sweater", "Sweater bahan wol", "Yogyakarta", 0, 0, 0, 100);
    barang[14].inputBarang(15, "Kaos Lengan Panjang", 130000, "Kaos", "Kaos lengan panjang", "Semarang", 0, 0, 0, 100);
    barang[15].inputBarang(16, "Kemeja Flanel", 160000, "Kemeja", "Kemeja motif flanel", "Solo", 0, 0, 0, 100);
    barang[16].inputBarang(17, "Sweatshirt", 230000, "Jaket", "Sweatshirt warna abu-abu", "Malang", 0, 0, 0, 100);
    barang[17].inputBarang(18, "Vest", 190000, "Vest", "Vest warna hitam", "Bogor", 0, 0, 0, 100);
    barang[18].inputBarang(19, "Blazer Kasual", 320000, "Blazer", "Blazer untuk santai", "Bekasi", 0, 0, 0, 100);
    barang[19].inputBarang(20, "Jaket Parka", 350000, "Jaket", "Jaket model parka", "Depok", 0, 0, 0, 100);
    barang[20].inputBarang(21, "Kaos V-Neck", 115000, "Kaos", "Kaos model V-neck", "Jakarta", 0, 0, 0, 100);
    barang[21].inputBarang(22, "Kemeja Linen", 170000, "Kemeja", "Kemeja bahan linen", "Bandung", 0, 0, 0, 100);
    barang[22].inputBarang(23, "Jaket Kulit Sintetis", 380000, "Jaket", "Jaket kulit sintetis", "Surabaya", 0, 0, 0, 100);
    barang[23].inputBarang(24, "Sweater Katun", 220000, "Sweater", "Sweater bahan katun", "Yogyakarta", 0, 0, 0, 100);
    barang[24].inputBarang(25, "Kaos Raglan", 140000, "Kaos", "Kaos model raglan", "Semarang", 0, 0, 0, 100);
    barang[25].inputBarang(26, "Kemeja Slim Fit", 180000, "Kemeja", "Kemeja model slim fit", "Solo", 0, 0, 0, 100);
    barang[26].inputBarang(27, "Jaket Bomber", 270000, "Jaket", "Jaket model bomber", "Malang", 0, 0, 0, 100);
    barang[27].inputBarang(28, "Cardigan Rajut", 200000, "Cardigan", "Cardigan bahan rajut", "Bogor", 0, 0, 0, 100);
    barang[28].inputBarang(29, "Blazer Kancing Satu", 310000, "Blazer", "Blazer kancing satu", "Bekasi", 0, 0, 0, 100);
    barang[29].inputBarang(30, "Kaos Henley", 125000, "Kaos", "Kaos model henley", "Depok", 0, 0, 0, 100);
    barang[30].inputBarang(31, "Kaos Oversize", 110000, "Kaos", "Kaos model oversize", "Jakarta", 0, 0, 0, 100);
    barang[31].inputBarang(32, "Kemeja Oxford", 160000, "Kemeja", "Kemeja bahan oxford", "Bandung", 0, 0, 0, 100);
    barang[32].inputBarang(33, "Jaket Windbreaker", 260000, "Jaket", "Jaket model windbreaker", "Surabaya", 0, 0, 0, 100);
    barang[33].inputBarang(34, "Sweater Turtleneck", 230000, "Sweater", "Sweater model turtleneck", "Yogyakarta", 0, 0, 0, 100);
    barang[34].inputBarang(35, "Kaos Lengan Tiga Perempat", 140000, "Kaos", "Kaos lengan tiga perempat", "Semarang", 0, 0, 0, 100);
    barang[35].inputBarang(36, "Kemeja Denim", 170000, "Kemeja", "Kemeja bahan denim", "Solo", 0, 0, 0, 100);
    barang[36].inputBarang(37, "Hoodie Zip-Up", 240000, "Jaket", "Hoodie model zip-up", "Malang", 0, 0, 0, 100);
    barang[37].inputBarang(38, "Cardigan Lengan Pendek", 200000, "Cardigan", "Cardigan lengan pendek", "Bogor", 0, 0, 0, 100);
    barang[38].inputBarang(39, "Blazer Double-Breasted", 320000, "Blazer", "Blazer double-breasted", "Bekasi", 0, 0, 0, 100);
    barang[39].inputBarang(40, "Kaos Pocket", 115000, "Kaos", "Kaos dengan saku", "Depok", 0, 0, 0, 100);
    barang[40].inputBarang(41, "Kaos Basic", 100000, "Kaos", "Kaos warna solid", "Jakarta", 0, 0, 0, 100);
    barang[41].inputBarang(42, "Kemeja Kerah Mandarin", 150000, "Kemeja", "Kemeja dengan kerah mandarin", "Bandung", 0, 0, 0, 100);
    barang[42].inputBarang(43, "Jaket Harrington", 250000, "Jaket", "Jaket model Harrington", "Surabaya", 0, 0, 0, 100);
    barang[43].inputBarang(44, "Sweater Crewneck", 200000, "Sweater", "Sweater model crewneck", "Yogyakarta", 0, 0, 0, 100);
    barang[44].inputBarang(45, "Kaos Lengan Pendek Polos", 120000, "Kaos", "Kaos lengan pendek warna solid", "Semarang", 0, 0, 0, 100);
    barang[45].inputBarang(46, "Kemeja Chino", 180000, "Kemeja", "Kemeja bahan chino", "Solo", 0, 0, 0, 100);
    barang[46].inputBarang(47, "Jaket Varsity", 220000, "Jaket", "Jaket model varsity", "Malang", 0, 0, 0, 100);
    barang[47].inputBarang(48, "Cardigan Bulu", 190000, "Cardigan", "Cardigan bahan bulu", "Bogor", 0, 0, 0, 100);
    barang[48].inputBarang(49, "Blazer Casual", 300000, "Blazer", "Blazer untuk santai", "Bekasi", 0, 0, 0, 100);
    barang[49].inputBarang(50, "Kaos Polo", 130000, "Kaos", "Kaos berkerah", "Depok", 0, 0, 0, 100);
    barang[50].inputBarang(51, "T-Shirt Grafik", 105000, "Kaos", "T-Shirt dengan gambar", "Jakarta", 0, 0, 0, 100);
    barang[51].inputBarang(52, "Kemeja Flanel Kotak-Kotak", 140000, "Kemeja", "Kemeja flanel dengan motif kotak-kotak", "Bandung", 0, 0, 0, 100);
    barang[52].inputBarang(53, "Jaket Kulit Asli", 450000, "Jaket", "Jaket bahan kulit asli", "Surabaya", 0, 0, 0, 100);
}

void registrasi()
{
    bool pilihan = true;
    char pilihanBenar;

    system("cls");
    cout << "-----Register-----" << endl;
    cout << "Masukkan Nama Anda: ";
    getline(cin, akun[akunPengguna].nama);
    cout << "Masukkan No Hp: ";
    getline(cin, akun[akunPengguna].noHp);
    cout << "Masukkan Alamat Dusun-Kelurahan-Kecamatan-Kabupaten-Pulau: ";
    getline(cin, akun[akunPengguna].alamat);
    cout << "Masukkan Username Anda: ";
    getline(cin, akun[akunPengguna].username);
    cout << "Masukkan Password Anda: ";
    getline(cin, akun[akunPengguna].password);
    cout << "Masukkan jumlah Saldo Dana Anda: ";
    cin >> akun[akunPengguna].saldo; cin.ignore();
    cout << "Apakah anda yakin sudah benar? ( y / n ): ";
    cin >> pilihanBenar;
    if (pilihanBenar == 'y')
    {
        akunPengguna++;
    }
    else
    {
        registrasi();
    }
}

void tampilkanBarang(int index = 0)
{
    if (index >= jumlahBarang)
    {
        cout << "Silahkan dibeli bajunyaaaa" << endl;
    }
    else
    {
        cout << "No " << barang[index].idBarang << " | Nama Barang: " << barang[index].namaBarang << " | Harga: Rp. " << barang[index].hargaBarang << " | Kategori: " << barang[index].kategoriBarang << endl;
        tampilkanBarang(index + 1);   
    }
}

void aksesAkun(string username)
{
    int pilihan;
    bool menu = true;
    while (menu)
    {
        system("cls");
        cout << "Selamat datang " << username << "! Selamat berbelanjaa~" << endl;
        cout << "Menu\n1. Tampilkan Barang\n2. Keranjang\n3. Profil\n4. Riwayat Pembelian \n5. Keluar\nIsikan pilian anda: ";
        cin >> pilihan;
        cin.ignore();
        switch (pilihan)
        {
        case 1:
            system("cls");
            beliBarang();
            break;
        case 2:
            system("cls");
            keranjangPelanggan(username);
            break;
        case 5:
            system("cls");
            cout << "Keluar....." << endl;
            menu = 0;
            break;
        default:
            menu = 1;
            break;
        }
    }
}

bool cekLogin(string username, string password)
{
    bool cek = 0;
    for (int i = 0; i < akunPengguna; i++)
    {
        if (username == akun[i].username && password == akun[i].password)
        {
            cek = 1;
            break;
        }
        else
        {
            cek = 0;
            break;
        }
    }
    return cek;
}

void login()
{
    string username, password;
    bool loginSukses = false;
    int userIndex;
    cout << "Masukkan Username Anda: ";
    cin >> username;
    cout << "Masukkan Password Anda: ";
    cin >> password;
    if (cekLogin(username, password))
    {
        aksesAkun(username);
    }
    else
    {
        cout << "Username atau password anda salah" << endl;
        system("pause");
    }
}

void lihatBrg(Barang barang[], int index, int jumlahBarang)
{
    if (index == jumlahBarang)
    {
        return;
    }
    cout << "No: " << barang[index].idBarang << "|";
    cout << "Nama Barang: " << barang[index].namaBarang << "|";
    cout << "Kategori Barang: " << barang[index].kategoriBarang << endl;
    cout << "Deskripsi Barang: " << barang[index].deskripsiBarang << endl;
    cout << "Lokasi Barang: " << barang[index].lokasiBarang << endl;
    cout << "Harga Barang: " << barang[index].hargaBarang << endl;
    cout << "Rating Barang: " << barang[index].ratingBarang << endl;
    cout << "Jumlah Dibeli: " << barang[index].jumlahDibeliSemua << endl;
    cout << "Stok Barang: " << barang[index].stokBarang << endl;
    cout << endl;
    lihatBrg(barang, index + 1, jumlahBarang);
}

void lihatbarang()
{
    system("cls");
    lihatBrg(barang, 0, jumlahBarang);
    system("pause");
}

void tampilkanBarangSorting()
{
    system("cls");
    cout << "Daftar Barang (Termurah ke Termahal):\n";
    for (int i = 0; i < jumlahBarang; i++)
    {
        cout << "ID: " << barang[i].idBarang << endl;
        cout << "Nama Barang: " << barang[i].namaBarang << endl;
        cout << "Kategori Barang: " << barang[i].kategoriBarang << endl;
        cout << "Deskripsi Barang: " << barang[i].deskripsiBarang << endl;
        cout << "Lokasi Barang: " << barang[i].lokasiBarang << endl;
        cout << "Harga Barang: " << barang[i].hargaBarang << endl;
        cout << "Rating Barang: " << barang[i].ratingBarang / barang[i].jumlahDibeliRating << endl;
        cout << "Jumlah Dibeli: " << barang[i].jumlahDibeliSemua << endl;
        cout << "Stok Barang: " << barang[i].stokBarang << endl;
        cout << endl;
    }
}

void insertionSort(Barang barang[], int n, string identifikasi)
{
    if (identifikasi == "tinggi")
    {
        for (int i = 1; i < n; i++)
        {
            Barang key = barang[i];
            int j = i - 1;
            while (j >= 0 && barang[j].hargaBarang < key.hargaBarang)
            {
                barang[j + 1] = barang[j];
                j--;
            }
            barang[j + 1] = key;
        }
    } else if (identifikasi == "rendah") {
        for (int i = 1; i < n; i++)
        {
            Barang key = barang[i];
            int j = i - 1;
            while (j >= 0 && barang[j].hargaBarang > key.hargaBarang)
            {
                barang[j + 1] = barang[j];
                j--;
            }
            barang[j + 1] = key;
        }
    }
    tampilkanBarangSorting();
}


void beliBarang()
{
    int index, pilihan;
    char pil;
    tampilkanBarang();

    cout << "Mau sorting harga? ( y / n ) : ";
    cin >> pil; 
    if (pil == 'y' || pil == 'Y')
    {
        cout << "1. Sorting harga termurah" << endl;
        cout << "2. Sorting harga termahal" << endl;
        cout << "Masukkan pilihan anda: ";
        cin >> pilihan;
        switch (pilihan)
        {
        case 1:
            insertionSort(barang, jumlahBarang, "rendah");
            break;
        case 2:
            insertionSort(barang, jumlahBarang, "tinggi");
            break;
        }
    }

    cout << "Ingin memilih barang? ( y / n ) : ";
    cin >> pil;
    while (pil == 'y' || pil == 'Y')
    {
        if (jumlahKeranjang > keranjangFull)
        {
            cout << "Keranjang penuh! Tidak bisa menambahkan barang lagi. \nKeranjang terisi anda berjumlah: " << jumlahKeranjang << endl;
            break;
        }

        int pilihan;
        bool found = false;

        cout << "Pilih nomor barang yang ingin dibeli: ";
        cin >> pilihan;

        for (int i = 0; i < jumlahBarang; i++)
        {
            if (barang[i].idBarang == pilihan)
            {
                keranjang[jumlahKeranjang] = {barang[i].idBarang, barang[i].namaBarang, barang[i].hargaBarang};
                keranjang[jumlahKeranjang].eksekusiWaktuMasuk();
                jumlahKeranjang++;
                cout << barang[i].namaBarang << " berhasil ditambahkan ke keranjang!\n";
                found = true;
                break;
            }
        }

        if (!found)
        {
            cout << "Barang tidak ditemukan.\n";
        }

        cout << "Ingin membeli barang lain? ( y / n ) : ";
        cin >> pil;
    }
}

void lihatKeranjang()
{
    int idBarang;
    cout << "Keranjang Anda" << endl;
    for (int i = 0; i < jumlahKeranjang; i++)
    {
        cout << "No barang             : " << keranjang[i].idBarang << endl;
        cout << "Nama barang           : " << keranjang[i].namaBarang << endl;
        cout << "Harga barang          : " << keranjang[i].hargaBarang << endl;
        cout << "Waktu Masuk Keranjang : ";
        keranjang[i].lihatWaktu();
        cout << endl;
    }
}

int cekIsiRiwayat(){
    int cek = 0;
    for (int i = 0; i < jumlahMaksBeli; i++)
    {
        if (riwayatPembelian[i].namaBarang != "")
        {
            cek += 1;
        }
    }
    return cek;
}

int cekUsername(string username){
    for (int i = 0; i < jumlahAkun; i++)
    {
        if (akun[i].username == username)
        {
            return i;
        }
    }
}

void beliSemua(string username){
    int indeks = cekIsiRiwayat(), rating, hargaTotal;
    char pilihBeli;
    char pilih;
    bool ratingUlang;
    for (int i = 0; i < jumlahKeranjang; i++)
    {
        hargaTotal += keranjang[i].hargaBarang;
    }
    cout << "Barang yang dibeli: " << endl;
    for (int i = 0; i < jumlahKeranjang; i++)
    {
        if (keranjang[i].namaBarang != "")
        {
            cout << i + 1 << ". " << keranjang[i].namaBarang << " | " << keranjang[i].hargaBarang << endl;
        }
    }
    cout << "Harga total seluruh barang: " << hargaTotal << endl;
    cout << "Apakah anda yakin ingin membeli seluruh barang?(y/n)"; cin >> pilihBeli; cin.ignore();
    if (pilihBeli == 'y')
    {
        if (hargaTotal > akun[cekUsername(username)].saldo)
        {
            cout << "Saldo anda tidak mencukupi untuk membeli barang." << endl;
        } else {
            for (int intBarang = 0; intBarang < jumlahBarang; intBarang++)
            {
                for (int i = 0; i < jumlahKeranjang; i++)
                {
                    if (barang[intBarang].idBarang == keranjang[i].idBarang)
                    {
                        barang[intBarang].stokBarang -= 1;
                        keranjang[i] = keranjang[i+1];
                        jumlahKeranjang -= 1;
                        cout << "Apakah anda ingin memberi rating?: "; cin >> pilih; cin.ignore();
                        if (pilih == 'y' || 'Y')
                        {
                            cout << "Berapa rating yang ingin anda beri (1 - 5)?: "; cin >> rating; cin.ignore();
                            if (rating > 5 || rating < 1)
                            {
                                cout << "Rating antara 1 sampai 5" << endl;
                                system("pause");
                                ratingUlang = 1;
                            } else {
                                barang[intBarang].ratingBarang += rating;
                                barang[intBarang].jumlahDibeliRating += 1;
                            }
                        } else {
                            cout << "Terima Kasih Telah Berbelanja" << endl;
                            barang[intBarang].jumlahDibeliSemua += 1;
                            system("pause");
                        }
                    }
                    riwayatPembelian[indeks].namaBarang = keranjang[i].namaBarang;
                    riwayatPembelian[indeks].hargaBarang = keranjang[i].hargaBarang;
                    riwayatPembelian[indeks].eksekusiWaktuMasuk();
                }
            }
            akun[cekUsername(username)].saldo -= hargaTotal;
            cout << "Barang berhasil dibeli.\nSisa saldo anda adalah Rp. " << akun[cekUsername(username)].saldo << endl;
        }
    }
}

void keranjangPelanggan(string username){
    int pilihan;
    bool ulangiPilihan = 1;
    while (ulangiPilihan)
    {
        lihatKeranjang();
        cout << endl;
        cout << "Menu Keranjang: " << endl;
        cout << "1. Beli Semua\n2. Beli Beberapa\n3. Hapus Barang dari Keranjang\n4. Keluar\nMasukkan Pilihan Anda: ";
        cin >> pilihan;
        cin.ignore();
        switch (pilihan)
        {
        case 1:
            beliSemua(username);
            break;
        case 4:
            ulangiPilihan = 0;
            break;
        default:
            ulangiPilihan = 1;
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