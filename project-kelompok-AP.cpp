#include <iostream>
#include <vector>
#include <string>
using namespace std;

//PROJECK CRUD DATA BUKU KELOMPOK 1 (GACORRRR!!!)
//1. IBNU HADJAR MUNTHE
//2. JAGRATARA ALI
//3. NATA ANUGRAH SUSANTOOOOO
//3. ARI YOGA ADMAJA
//4. FRANKY NEBUALA ZEBUA


struct Buku {
    string kode, judul, penulis, isibuku, penerbit, kotaTerbit;
    int tahunTerbit, jumlah;
    double hargaBeli;
};

// Fungsi untuk menambah buku
void tambahBuku(vector<Buku> &dataBuku) {
    Buku bukuBaru;
    cout << "\nMasukkan Kode Buku: ";
    cin >> bukuBaru.kode;
    cin.ignore();
    cout << "Masukkan Judul Buku: ";
    getline(cin, bukuBaru.judul);
    cout << "masukkan isi buku: ";
    getline(cin, bukuBaru.isibuku);
    cout << "Masukkan Penulis: ";
    getline(cin, bukuBaru.penulis);
    cout << "Masukkan Penerbit: ";
    getline(cin, bukuBaru.penerbit);
    cout << "Masukkan Kota Terbit: ";
    getline(cin, bukuBaru.kotaTerbit);
    cout << "Masukkan Tahun Terbit: ";
    cin >> bukuBaru.tahunTerbit;
    cout << "Masukkan Harga Beli: ";
    cin >> bukuBaru.hargaBeli;
    cout << "Masukkan Jumlah Buku: ";
    cin >> bukuBaru.jumlah;

    dataBuku.push_back(bukuBaru);
    cout << "\nBuku berhasil ditambahkan!" << endl;
}

void lihatBuku(const vector<Buku> &dataBuku) {
    if (dataBuku.empty()) {
        cout << "\nTidak ada buku yang tersedia." <<endl ;
        return;
    }

    cout << "\nDaftar Buku:" << endl;
    for (size_t i = 0; i < dataBuku.size(); ++i) {
        cout << "- Kode: " << dataBuku[i].kode << endl;
        cout << "- Judul: " << dataBuku[i].judul << endl;
        
        cout << "\n=====================================================================================================================" << endl;        
		cout << "- isi buku: " << dataBuku[i].isibuku << endl; 
		
		
		
		
		cout << "\n======================================================================================================================" <<endl;
        
		cout << "- Penerbit: " << dataBuku[i].penerbit << endl; 
        cout << "- Tahun: " << dataBuku[i].tahunTerbit << endl;
        cout << "- Kota: " << dataBuku[i].kotaTerbit << endl;
        cout << "- Harga: " << dataBuku[i].hargaBeli << endl;
        cout << "- Jumlah: " << dataBuku[i].jumlah << endl;   
		}
    }

void isiBuku(const vector<Buku> &dataBuku) {
    if (dataBuku.empty()) {
        cout << "\nTidak ada isi buku yang tersedia." <<endl ;
        return;
    }

    cout << "\nDaftar Buku:" << endl;
    for (size_t i = 0; i < dataBuku.size(); ++i) {
        cout << "- Kode: " << dataBuku[i].kode << endl;
        cout << "- Judul: " << dataBuku[i].judul << endl;
		cout << "- isi buku: " << dataBuku[i].isibuku << endl; 
        cout << "- Penerbit: " << dataBuku[i].penerbit << endl; 
        cout << "- Tahun: " << dataBuku[i].tahunTerbit << endl;
        cout << "- Kota: " << dataBuku[i].kotaTerbit << endl;
        cout << "- Harga: " << dataBuku[i].hargaBeli << endl;
        cout << "- Jumlah: " << dataBuku[i].jumlah << endl;   
		}
    }


// Fungsi untuk mengedit buku
void editBuku(vector<Buku> &dataBuku) {
    if (dataBuku.empty()) {
        cout << "\nTidak ada buku yang tersedia untuk diedit." << endl;
        return;
    }

    string kode;
    cout << "\nMasukkan Kode Buku yang ingin diedit: ";
    cin >> kode;

    for (size_t i = 0; i < dataBuku.size(); ++i) {
        if (dataBuku[i].kode == kode) {
            cout << "Masukkan data baru:" << endl;
            cin.ignore();
            cout << "Judul: ";
            getline(cin, dataBuku[i].judul);
            cout << "Penulis: ";
            getline(cin, dataBuku[i].penulis);
            cout << "isi buku: ";
            getline(cin, dataBuku[i].isibuku);
            cout << "Penerbit: ";
            getline(cin, dataBuku[i].penerbit);
            cout << "Kota Terbit: ";
            getline(cin, dataBuku[i].kotaTerbit);
            cout << "Tahun Terbit: ";
            cin >> dataBuku[i].tahunTerbit;
            cout << "Harga Beli: ";
            cin >> dataBuku[i].hargaBeli;
            cout << "Jumlah Buku: ";
            cin >> dataBuku[i].jumlah;

            cout << "\nBuku berhasil diedit!" << endl;
            return;
        }
    }

    cout << "\nBuku dengan kode " << kode << " tidak ditemukan!" << endl;
}

// Fungsi untuk menghapus buku
void hapusBuku(vector<Buku> &dataBuku) {
    if (dataBuku.empty()) {
        cout << "\nTidak ada buku yang tersedia untuk dihapus." << endl;
        return;
    }

    string kode;
    cout << "\nMasukkan Kode Buku yang ingin dihapus: ";
    cin >> kode;

    for (size_t i = 0; i < dataBuku.size(); ++i) {
        if (dataBuku[i].kode == kode) {
            dataBuku.erase(dataBuku.begin() + i);
            cout << "\nBuku berhasil dihapus!" << endl;
            return;
        }
    }

    cout << "\nBuku dengan kode " << kode << " tidak ditemukan!" << endl;
}

// Fungsi utama
int main() {
    vector<Buku> dataBuku;
    int pilihan;

    do {
        cout << "\nI==========================================I" << endl;
        cout << "[            APLIKASI DATA BUKU            ]" << endl;
        cout << "I==========================================I" << endl;
        cout << "[             1. Tambah Buku               ]" << endl;
        cout << "[             2. Lihat Buku                ]" << endl;
        cout << "[             3. isi buku                  ]" << endl;
        cout << "[             4. Edit Buku                 ]" << endl;
        cout << "[             5. Hapus Buku                ]" << endl;
        cout << "[             6. Keluar                    ]" << endl;
        cout << "|==========================================|" << endl;
        cout << "Pilih menu (1-6): ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                tambahBuku(dataBuku);
                break;
            case 2:
                lihatBuku(dataBuku);
                break;
            case 3:
            	isiBuku(dataBuku);
            	break;
            case 4:
                editBuku(dataBuku);
                break;
            case 5:
                hapusBuku(dataBuku);
                break;
            case 6:
                cout << "Keluar dari program. Terima kasih!" << endl;
                break;
            default:
                cout << "Pilihan tidak valid. Coba lagi!" << endl;
        }
    } while (pilihan != 6);

    return 0;
}
