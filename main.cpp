#include <iostream>
#include <string>
using namespace std;

// Fungsi untuk menampilkan menu
void tampilMenu() {
    cout << endl;
    cout << "=== MENU ===" << endl;
    cout << "Makanan" << endl;
    cout << "1. Soto  : Rp 15000" << endl;
    cout << "2. Rawon : Rp 20000" << endl;
    cout << "3. Pecel : Rp 10000" << endl;
    cout << "Minuman" << endl;
    cout << "4. Teh   : Rp 3000" << endl;
    cout << "5. Kopi  : Rp 5000" << endl;
}

// Fungsi untuk mengambil harga sesuai pilihan (0 jika tidak ada)
int ambilHarga(int pilihan) {
    if (pilihan == 1) {
        return 15000;
    } else if (pilihan == 2) {
        return 20000;
    } else if (pilihan == 3) {
        return 10000;
    } else if (pilihan == 4) {
        return 3000;
    } else if (pilihan == 5) {
        return 5000;
    } else {
        return 0;
    }
}

// Fungsi untuk mengambil nama menu sesuai pilihan
string ambilNama(int pilihan) {
    if (pilihan == 1) {
        return "Soto";
    } else if (pilihan == 2) {
        return "Rawon";
    } else if (pilihan == 3) {
        return "Pecel";
    } else if (pilihan == 4) {
        return "Teh";
    } else {
        return "Kopi";
    }
}

int main() {
    int pilihan, jumlah, harga, subtotal;
    int total = 0;
    char lagi;

    cout << "=== MINI KASIR (LANJUTAN) ===" << endl;

    do {
        tampilMenu();
        cout << "Pilih menu (1-5): ";
        cin >> pilihan;

        harga = ambilHarga(pilihan);

        if (harga == 0) {
            cout << "Menu tidak tersedia!" << endl;
        } else {
            cout << "Jumlah: ";
            cin >> jumlah;

            subtotal = harga * jumlah;
            total = total + subtotal;

            cout << ambilNama(pilihan) << " x " << jumlah
                 << " = Rp " << subtotal << endl;
        }

        cout << "Pesan lagi? (y/n): ";
        cin >> lagi;

    } while (lagi == 'y' || lagi == 'Y');

    cout << endl;
    cout << "=============================" << endl;
    cout << "TOTAL BAYAR : Rp " << total << endl;
    cout << "=============================" << endl;

    cout << "Tekan Enter untuk keluar...";
    cin.ignore();
    cin.get();

    return 0;
}
