#include "function.cpp"

int main(){
    inisialisasiBarang();
    bool ulang = true;
    int pilihan;
    while (ulang)
    {
        system("cls");
        cout << "-----Menu-----" << endl;
        cout << "1. Registrasi" << endl;
        cout << "2. Login" << endl;
        cout << "3. Lihat Barang" << endl;
        cout << "4. Keluar" << endl;
        cout << "Pilih menu: ";
        cin >> pilihan;
        
        switch (pilihan) {
            case 1:
                registrasi();
                break;   
            case 2:
                beliBarang();
                break;                
            case 3:
                system("cls");
                tampilkanBarang();
                char pilihKembali;
                cout << "Kembali ke menu utama? (y/n): ";
                cin >> pilihKembali;
                
                if (pilihKembali == 'y' || pilihKembali == 'Y') {
                    break;  
                } else {
                    system("cls");
                    ulang = 0;  
                    cout << "Terima kasih telah menggunakan aplikasi ini!" << endl;
                    system("pause");
                }
                break;
            case 4:
                cout << "Terima kasih telah menggunakan aplikasi ini!" << endl;
                system("pause");
                ulang = 0;
                break;
            default:
                ulang = 1;
                break;
        }
    }
    
}
