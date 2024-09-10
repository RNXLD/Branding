// TLS Caption Maker
// Made by Arnold Gavrael - TIF - 539797

#include <iostream>
#include <string>
using namespace std;

int main() {
    string prodi, nama, asal, cita, quotes, akun;
    char pilihan;
    int jumlah = 0;
    int TE = 0;
    int TI = 0;
    int TB = 0;

    do {cout << "Nama: ";
        getline(cin >> ws, nama);
        cout << "Prodi: ";
        getline(cin >> ws, prodi);

        while (prodi != "Teknik Elektro" && prodi != "Teknologi Informasi" && prodi != "Teknik Biomedis") {
            cout << "Invalid! Masukkan Prodi dalam DTETI: ";
            getline(cin >> ws, prodi);}

        cout << "Asal: ";
        getline(cin >> ws, asal);
        cout << "Cita-cita: ";
        getline(cin >> ws, cita);
        cout << "Quotes (dengan tanda petik): ";
        getline(cin >> ws, quotes);
        cout << "Akun IG (dengan @): ";
        getline(cin >> ws, akun);
        cout << endl;

        if (prodi == "Teknik Elektro") { TE++; }
        else if (prodi == "Teknologi Informasi") { TI++; }
        else if (prodi == "Teknik Biomedis") { TB++; }

        cout << "--------------------------------------------------\n";
        cout << "TEROBIETIANS, CHOOSE YOUR CHARACTER!\n";
        cout << endl;
        cout << "Halo, namaku " << nama << " dari prodi "
             << prodi << ". Aku berasal dari "
             << asal << " dan aku memiliki impian untuk menjadi "
             << cita << ". Kamu bisa kenal aku lebih lanjut di "
             << akun << " lho! Kutunggu kedatanganmu!\n";
        cout << endl;
        cout << quotes << endl;
        cout << endl;
        cout << "#TLS2024 #TETITB2024 #Terobietia #DayaDataMedika\n";
        cout << "--------------------------------------------------\n";
        cout << endl;

        jumlah++;
        cout << "Total siswa: " << jumlah << endl;
        cout << "Siswa TE: " << TE << endl;
        cout << "Siswa TI: " << TI << endl;
        cout << "Siswa TB: " << TB << endl;
        cout << endl;

        cout << "Masukkan data lagi? (Y/N): ";
        cin >> pilihan;

    } while (pilihan == 'Y' || pilihan == 'y');
    
    cout << "Pastikan jumlah siswa sudah sesuai!\n";
    return 0;
}
