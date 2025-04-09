#include "struct.cpp"

void beliBarang();
void lihatKeranjang();
void keranjangPelanggan(string username);
void aksesAkun(string username);
void buatAkunOyenPay(string username);
int cekUsername(string username);

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

// cek username apakah sudah dipakai atau belum
bool cekUsernameFreeorNot(string username){
    for (int i = 0; i < jumlahAkun; i++)
    {
        if (username == akun[i].username)
        {
            return 1;
        }
    }
    return 0;
}
// cek username apakah sudah dipakai atau belum selsai

// Ini regristasi
void registrasi()
{
    bool ulang = true;
    char pilihanBenar;
    string nama, noHp, alamat, username, password;

    system("cls");
    cout << "----- Register Akun Baru -----" << endl;
    cout << "Masukkan Nama Anda: ";
    getline(cin, nama);
    cout << "Masukkan No Hp: ";
    getline(cin, noHp);
    cout << "Masukkan Alamat Dusun-Kelurahan-Kecamatan-Kabupaten-Pulau: ";
    getline(cin, alamat);
    
    while (ulang)
    {
        cout << "Masukkan Username Anda: ";
        getline(cin, username);
        if (cekUsernameFreeorNot(username))
        {
            cout << "Username sudah dipakai, gunakan username yang lain!\n";
            system("pause");
        }
        else
        {
            ulang = false;
        }
    }

    cout << "Masukkan Password Anda: ";
    getline(cin, password);
    cout << "Apakah Anda yakin sudah benar? ( y / n ): ";
    cin >> pilihanBenar;
    cin.ignore(); 

    if (pilihanBenar == 'y')
    {
        akun[akunPengguna].nama = nama;
        akun[akunPengguna].noHp = noHp;
        akun[akunPengguna].alamat = alamat;
        akun[akunPengguna].username = username;
        akun[akunPengguna].password = password;
        akunPengguna++;

        cout << "Akun berhasil dibuat!\n";
    }
    else
    {
        cout << "Registrasi dibatalkan. Silakan ulangi jika ingin mencoba lagi.\n";
    }
}
// Ini regristasi selesai

// Ini tampilkan Barang
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
// Ini tampilkan Barang Selesai

// Ini function cek bool login
bool cekLogin(string username, string password)
{
    for (int i = 0; i < akunPengguna; i++)
    {
        if (username == akun[i].username && password == akun[i].password)
        {
            return 1;
        }
    }
    return 0; 
}

// Ini function cek bool login selesai

// Ini Void Login
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
// Ini Void Login Selesai

// Ini Void Untuk Rekursif Lihat Barang
void lihatBrg(Barang barang[], int index, int jumlahBarang)
{
    if (index == jumlahBarang)
    {
        return;
    }
    cout << "No: " << barang[index].idBarang  << endl;
    cout << "Nama Barang: " << barang[index].namaBarang << endl;
    cout << "Kategori Barang: " << barang[index].kategoriBarang << endl;
    cout << "Deskripsi Barang: " << barang[index].deskripsiBarang << endl;
    cout << "Lokasi Barang: " << barang[index].lokasiBarang << endl;
    cout << "Harga Barang: " << barang[index].hargaBarang << endl;
    cout << "Rating Barang: " << barang[index].ratingBarang / barang[index].jumlahDibeliRating << endl;
    cout << "Jumlah Dibeli: " << barang[index].jumlahDibeliSemua << endl;
    cout << "Stok Barang: " << barang[index].stokBarang << endl;
    cout << endl;
    lihatBrg(barang, index + 1, jumlahBarang);
}
// Ini Void Untuk Rekursif Lihat Barang Selesai

// Ini Void Untuk Melihat Barang Dengan Rekursif
void lihatbarang()
{
    system("cls");
    lihatBrg(barang, 0, jumlahBarang);
    system("pause");
}
// Ini Void Untuk Melihat Barang Dengan Rekursif Selesai

// Ini Function Untuk Menampilkan Hasil Shorting
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
// Ini Function Untuk Menampilkan Hasil Shorting Selesai

// Ini Shorting Dengan Insertion Short
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
// Ini Shorting Dengan Insertion Short Selesai


// Ini Void Untuk Beli Barang
void beliBarang(string username)
{
    int index, pilihan;
    char pil;
    tampilkanBarang();
    int indeks = cekUsername(username);

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

    int pilihan1;
    bool found = false;
    cout << "Ingin memilih barang? ( y / n ) : ";
    cin >> pil;
    while (pil == 'y' || pil == 'Y')
    {
        found = 0;
        if (akun[indeks].jumlahKeranjang == keranjangFull-1)
        {
            cout << "Keranjang penuh! Tidak bisa menambahkan barang lagi. \nKeranjang terisi anda berjumlah: " << akun[indeks].jumlahKeranjang << endl;
            system("pause");
            break;
        } else {
            cout << "Pilih nomor barang yang ingin dibeli: ";
            cin >> pilihan1;
    
            for (int i = 0; i < jumlahBarang; i++)
            {
                if (barang[i].idBarang == pilihan1)
                {
                    akun[cekUsername(username)].keranjang[akun[indeks].jumlahKeranjang] = {barang[i].idBarang, barang[i].namaBarang, barang[i].hargaBarang};
                    akun[indeks].jumlahKeranjang += 1;
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
}
// Ini Void Untuk Beli Barang Selesai

// Ini Void Untuk Melihat Isi Keranjang
void lihatKeranjang(string username)
{
    int indeksUsername = cekUsername(username);
    int idBarang;
    if (akun[indeksUsername].jumlahKeranjang == 0)
    {
        cout << "Keranjang anda kosong!!" << endl;
    } else {
        cout << "Keranjang Anda" << endl;
        for (int i = 0; i < akun[indeksUsername].jumlahKeranjang; i++)
        {
            cout << "No barang             : " << akun[indeksUsername].keranjang[i].idBarang << endl;
            cout << "Nama barang           : " << akun[indeksUsername].keranjang[i].namaBarang << endl;
            cout << "Harga barang          : " << akun[indeksUsername].keranjang[i].hargaBarang << endl;
            cout << endl;
        }
    }
    
}
// Ini Void Untuk Melihat Isi Keranjang Selesai

// Ini Function Cek Isi Riwayat
int cekIsiRiwayat(string username){
    int cek = 0;
    for (int i = 0; i < jumlahMaksBeli; i++)
    {
        if (akun[cekUsername(username)].riwayatPembelian[i].namaBarang != "")
        {
            cek += 1;
        }
    }
    return cek;
}
// Ini Function Cek Isi Riwayat Selesai

// Ini Function Cek Username
int cekUsername(string username){
    for (int i = 0; i < jumlahAkun; i++)
    {
        if (akun[i].username == username)
        {
            return i;
        }
    }
}
// Ini Function Cek Username Selesai

// Ini Void Ketika Pelanggan Memilih Beli Semua Barang Dikeranjang
void beliSemua(string username){
    int indeksUsername = cekUsername(username);
    int indeks = cekIsiRiwayat(username), rating, hargaTotal = 0;
    string pinOyen;
    char pilihBeli, buatAkun = 'n';
    char pilih;
    bool ratingUlang, ulangiPin = 1;
    for (int i = 0; i < akun[indeksUsername].jumlahKeranjang; i++)
    {
        hargaTotal += akun[indeksUsername].keranjang[i].hargaBarang;
    }
    system("cls");
    cout << "Barang yang dibeli: " << endl;
    for (int i = 0; i < akun[indeksUsername].jumlahKeranjang; i++)
    {
        if (akun[indeksUsername].keranjang[i].namaBarang != "")
        {
            cout << i + 1 << ". " << akun[indeksUsername].keranjang[i].namaBarang << " | " << akun[indeksUsername].keranjang[i].hargaBarang << endl;
        }
    }
    cout << "Harga total seluruh barang: " << hargaTotal << endl;
    cout << "Apakah anda yakin ingin membeli seluruh barang?(y/n): "; cin >> pilihBeli; cin.ignore();
    if (pilihBeli == 'y')
    {
        if (akun[indeksUsername].oyenSaldo[indeksUsername].idOyen == "")
        {
            system("cls");
            cout << "Waduh sepertinya anda belum membuat akun OyenPay untuk pembayaran.\nBuat akun OyenPay yukk untuk pembayaran barang anda." << endl;
            cout << "Apakah anda ingin membuat akun OyenPay? y/n: "; cin >> buatAkun;
            if (buatAkun == 'y')
            {
                buatAkunOyenPay(username);
            }
        } else {
            if (hargaTotal > akun[indeksUsername].oyenSaldo[indeksUsername].saldo)
            {
                cout << "Saldo anda tidak mencukupi untuk membeli barang." << endl;
            } else {
                while (ulangiPin)
                {
                    system("cls");
                    cout << "Masukkan pin OyenPay anda: "; cin >> pinOyen;
                    if (pinOyen != akun[indeksUsername].oyenSaldo[indeksUsername].pin)
                    {
                        cout << "Pin yang anda masukkan salah tuh, ulangi dong!!!" << endl;
                        system("pause");
                        ulangiPin = 1;
                    }
                    else
                    {
                        ulangiPin = 0;
                        for (int i = akun[indeksUsername].jumlahKeranjang; i >= 0; i--)
                        {
                            for (int intBarang = 0; intBarang < jumlahBarang; intBarang++)
                            {
                                if (barang[intBarang].idBarang == akun[indeksUsername].keranjang[i].idBarang)
                                {
                                    barang[intBarang].stokBarang -= 1;

                                    cout << "Apakah anda ingin memberi rating pada " << barang[intBarang].namaBarang << "? (y/n): ";
                                    cin >> pilih; cin.ignore();

                                    if (pilih == 'y' || pilih == 'Y')
                                    {
                                        do {
                                            cout << "Berapa rating yang ingin anda beri (1 - 5)?: ";
                                            cin >> rating;
                                            if (rating >= 1 && rating <= 5)
                                            {
                                                barang[intBarang].ratingBarang += rating;
                                                barang[intBarang].jumlahDibeliRating += 1;
                                                barang[intBarang].jumlahDibeliSemua += 1;
                                                ratingUlang = false;
                                            }
                                            else
                                            {
                                                cout << "Rating harus antara 1 sampai 5!\n";
                                                system("pause");
                                                ratingUlang = true;
                                            }
                                        } while (ratingUlang);
                                    }
                                    else
                                    {
                                        cout << "Terima Kasih Telah Berbelanja" << endl;
                                        barang[intBarang].jumlahDibeliSemua += 1;
                                    }
                                    akun[indeksUsername].riwayatPembelian[akun[indeksUsername].riwayatBeli].namaBarang = akun[indeksUsername].keranjang[i].namaBarang;
                                    akun[indeksUsername].riwayatPembelian[akun[indeksUsername].riwayatBeli].hargaBarang = akun[indeksUsername].keranjang[i].hargaBarang;
                                    akun[indeksUsername].riwayatPembelian[akun[indeksUsername].riwayatBeli].eksekusiWaktuMasuk();
                                    akun[indeksUsername].riwayatBeli+=1;
                                    for (int j = i; j < akun[indeksUsername].jumlahKeranjang - 1; j++)
                                    {
                                        akun[indeksUsername].keranjang[j] = akun[indeksUsername].keranjang[j + 1];
                                    }
                                    akun[indeksUsername].jumlahKeranjang--;
                                }
                            }
                        }
                        akun[indeksUsername].oyenSaldo[indeksUsername].saldo -= hargaTotal;
                        system("cls");
                        cout << "Barang berhasil dibeli.\nSisa saldo anda adalah Rp. " << akun[indeksUsername].oyenSaldo[indeksUsername].saldo << endl;
                        system("pause");
                    }
                }

            }
        }
    }
}
// Ini Void Ketika Pelanggan Memilih Beli Semua Barang Dikeranjang Selesai

// Ini Keranjang Pelanggan
void keranjangPelanggan(string username){
    int pilihan;
    bool ulangiPilihan = 1;
    while (ulangiPilihan)
    {
        system("cls");
        lihatKeranjang(username);
        cout << endl;
        cout << "Menu Keranjang: " << endl;
        cout << "1. Beli Semua\n2. Beli Beberapa\n3. Hapus Barang dari Keranjang\n4. Keluar\nMasukkan Pilihan Anda: ";
        cin >> pilihan;
        cin.ignore();
        switch (pilihan)
        {
        case 1:
            if (akun[cekUsername(username)].jumlahKeranjang == 0)
            {
                cout << "Keranjang anda kosong" << endl;
                system("pause");
            } else {
                beliSemua(username);
            }
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
// Ini Keranjang Pelanggan Selesai

// Ini isi saldo
void isiSaldo(string username){
    int saldo;
    int indeksUsername = cekUsername(username);
    char pilihan;
    cout << "Berapa nominal yang ingin anda masukkan: Rp. "; cin >> saldo; cin.ignore();
    cout << "Apakah anda yakin sudah memasukkan nominal yang benar? y / n: "; cin >> pilihan; cin.ignore();
    if (pilihan == 'y')
    {
        akun[indeksUsername].oyenSaldo[indeksUsername].saldo += saldo;
    } else {
        akun[indeksUsername].oyenSaldo[indeksUsername].saldo += 0;
    }
}
// Ini isi saldo selesai

// Ini OyenPayy saldo
void oyenPay(string username){
    int pilihanOyen;
    bool ulangiOyen = 1;
    while (ulangiOyen)
    {
        system("cls");
        cout << "Halo selamat datang di OyenPay" << endl;
        cout << "Saldo anda adalah Rp. " << akun[cekUsername(username)].oyenSaldo[cekUsername(username)].saldo << endl;
        cout << "1. Isi Saldo\n2. Keluar\nMasukkan Pilihan Anda: "; cin >> pilihanOyen; cin.ignore();
        switch (pilihanOyen)
        {
        case 1:
            system("cls");
            isiSaldo(username);
            ulangiOyen = 1;
            break;
        case 2:
            ulangiOyen = 0;
            break;
        default:
            ulangiOyen = 1;
            break;
        }
    }
    
}
// Ini OyenPayy saldo selesai

// Ini buat akun oyenpay
void buatAkunOyenPay(string username){
    char pilihan1;
    bool ulangiPin1 = 1, cekKarakter = 0, ulangiPin2 = 1;
    string pin1, pin2;
    system("cls");
    cout << "Apakah anda ingin mengaktifkan OyenPay? y/n: "; cin >> pilihan1; cin.ignore();
    if (pilihan1 == 'y' || pilihan1 == 'Y')
    {
        while (ulangiPin1)
        {
            cekKarakter = 0;
            system("cls");
            cout << "Buat pin. Dengan syarat:\n1. Harus 6 angka\n2. Tidak boleh ada huruf, hanya boleh menggunakan angka\n3. Harus anda ingat!!\nIsikan pin anda: "; cin >> pin1; cin.ignore();
            if (pin1.length() != 6)
            {
                cout << "Pin harus berisi 6 buah angka!!!!" << endl;
                system("pause");
                ulangiPin1 = 1;
                continue;
            } else {
                for (int i = 0; i < pin1.length(); i++)
                {
                    if (!isdigit(pin1[i]))
                    {
                        cekKarakter = 1;
                        break;
                    }
                }
                if (cekKarakter)
                {
                    system("cls");
                    cout << "Pin hanya boleh berisikan angka saja. Tidak boleh ada yang lain oke?!!!!" << endl;
                    system("pause");
                    ulangiPin1 = 1;
                } else {
                    ulangiPin1 = 0;
                    while (ulangiPin2)
                    {
                        system("cls");
                        cout << "Konfirmasi ulang pin. Masukkan pin lagi: "; cin >> pin2; cin.ignore();
                        if (pin1 == pin2)
                        {
                            akun[cekUsername(username)].oyenSaldo[cekUsername(username)].idOyen = username;
                            akun[cekUsername(username)].oyenSaldo[cekUsername(username)].pin = pin2;
                            ulangiPin2 = 0;
                            oyenPay(username);
                        } else {
                            cout << "Pin 1 dan 2 tidak sama ulangi!!!" << endl;
                            system("pause");
                            ulangiPin2 = 1;
                        }
                    }
                }
            }
        }
    }
}
// Ini buat akun oyenpay selesai

// Ini riwayat pembelian
void riwayatPembelian(string username) {
    int indeks = cekUsername(username);
    cout << "\n========== Riwayat Pembelian ==========\n";
    bool adaRiwayat = false;

    for (int i = 0; i < jumlahMaksBeli; i++) {
        if (akun[indeks].riwayatPembelian[i].namaBarang != "") {
            adaRiwayat = true;
            cout << i + 1 << ". Nama Barang  : " << akun[indeks].riwayatPembelian[i].namaBarang << endl;
            cout << "   Harga        : Rp" << akun[indeks].riwayatPembelian[i].hargaBarang << endl;
            cout << "   Waktu Beli   : ";
            akun[indeks].riwayatPembelian[i].lihatWaktu();
            cout << "----------------------------------------\n";
        }
    }

    if (!adaRiwayat) {
        cout << "Belum ada riwayat pembelian.\n";
    }
    cout << "========================================\n";
}
// Ini riwayat pembelian selesai

//ini profile
void profile(string username){
    char pil;
    int pilihanNo;
    int ulangpil = 1;
    cout << "\n========== Profile Pelanggan ==========\n";
    cout << "Halo, "<< akun[cekUsername(username)].username << endl;
    cout<< "Nama  : "<< akun[cekUsername(username)].nama <<endl;
    cout<< "No Hp : "<< akun[cekUsername(username)].noHp <<endl;
    cout<< "Alamat: "<< akun[cekUsername(username)].alamat <<endl;

    cout<<"Apakah Anda ingin mengedit profile? (y / n): ";cin>> pil;
    if(pil=='y' || pil =='Y'){
        while(ulangpil){
            cout << "Masukkan pilihan yang ingin anda edit: " << endl;
            cout << "1. Nama" << endl;
            cout << "2. No HP" << endl;
            cout << "3. Alamat" << endl;
            cout << "4. Keluar" << endl;
            cout << "Masukkan Pilihan: ";cin>>pilihanNo;
            switch(pilihanNo){
                case 1:
                    cout << "Masukkan nama baru : "; cin >> akun[cekUsername(username)].nama;
                break;
                case 2:
                    cout << "Masukkan no HP baru : "; cin >> akun[cekUsername(username)].noHp;
                break;
                case 3:
                    cout << "Masukkan alamat baru"; cin >> akun[cekUsername(username)].alamat;
                break;
                case 4:
                    ulangpil = 0;
                break;
                default:
                    ulangpil = 1;
                break;
            }
        }
    }


        
}
//ini profile selesai

// Ini Menu Setelah Login
void aksesAkun(string username)
{
    int pilihan;
    bool menu = true;
    while (menu)
    {
        system("cls");
        cout << "Selamat datang " << username << "! Selamat berbelanjaa~" << endl;
        cout << "Menu\n1. Tampilkan Barang\n2. Keranjang\n3. Profil\n4. Riwayat Pembelian\n5. Isi Saldo \n6. Keluar\nIsikan pilian anda: ";
        cin >> pilihan;
        cin.ignore();
        switch (pilihan)
        {
        case 1:
            system("cls");
            beliBarang(username);
            break;
        case 2:
            system("cls");
            keranjangPelanggan(username);
            break;
        case 3:
            system("cls");
            profile(username);
            system("pause");
            break;
        case 4:
            system("cls");
            riwayatPembelian(username);
            system("pause");
            break;
        case 5:
            system("cls");
            if (akun[cekUsername(username)].oyenSaldo[cekUsername(username)].idOyen == "")
            {
                buatAkunOyenPay(username);
            } else {
                oyenPay(username);
            }
            break;
        case 6:
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
// Ini Menu Setelah Login Selesai

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