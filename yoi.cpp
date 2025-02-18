#include "function.cpp"

int main(){
    inisialisasiBarang();
    bool ulang = true;
    int pilihan;
    while (ulang)
    {
        cout << "-----Menu-----" << endl;
        cout << "1. Login" << endl;
        cout << "2. Registrasi" << endl;
        cout << "3. Lihat Barang" << endl;
        cout << "4. Keluar" << endl;
        cout << "Pilih menu: ";
        cin >> pilihan;
        
        switch (pilihan) {
            case 1:
                login();
                break;
            case 2:
                registrasi();
                break;
            case 3:
                checkout();
                break;
            case 4:
                cout << "Terima kasih telah menggunakan aplikasi ini!" << endl;
                sleep(3);
                ulang = 0;
                break;
            default:
                ulang = 1;
                break;
        }
    }
    
}
