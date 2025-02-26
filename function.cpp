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
    if (index >= jumlahBarang) return; 

    cout << "Nama Barang: " << barang[index].namaBarang << endl;
    cout << "Harga: Rp" << barang[index].hargaBarang << endl;
    cout << "Kategori: " << barang[index].kategoriBarang << endl;
    cout << "Deskripsi: " << barang[index].deskripsiBarang << endl;
    cout << "Lokasi: " << barang[index].lokasiBarang << endl;
    cout << "Rating: " << barang[index].ratingBarang << endl;
    cout << "-------------------------" << endl;

    // Rekursif ke barang berikutnya
    tampilkanBarang(index + 1);
}
