#include <iostream>
#include <string>
using namespace std;

class Namapertama {
public:
    void Soalpertamadankedua() {
        string namapertama;
        string namakedua;

        cout << "Masukan nama pertama : ";
        getline(cin, namapertama);
        cout << "Masukan nama kedua : ";
        getline(cin, namakedua);


        cout << "Hai, " << namapertama << " Semangat pagi! \n";
        cout << "Hai, " << namakedua << " Semangat pagi! \n";
    }
};

class soalKedua {
public:
    void Soalkeduak() {
        double minimal, ratarata, maksimal, rumusminimal, rumusratarata, rumusmaksimal;

        cout << "Masukan nilai manimal : ";
        cin >> minimal;

        rumusminimal = (minimal * 9 / 5) + 32;

        cout << "Masukan nilai ratarata : ";
        cin >> ratarata;

        rumusratarata = (ratarata * 9 / 5) + 32;

        cout << "Masukan nilai maksimal : ";
        cin >> maksimal;

        rumusmaksimal = (maksimal * 9 / 5) + 32;

        cout << "Suhu minimal dalam farenhait : " << rumusminimal << endl;
        cout << "Suhu rata rata dalam farenhait : " << rumusratarata << endl;
        cout << "Suhu maksimal dalam farenhait : " << rumusmaksimal << endl;
    }
};

class soalketiga {
public:
    void Soalketiga() {
        string masukannilai;
        int masukannilaiInt;

        cout << "Masukan nilai masukan : ";
        cin >> masukannilai;

        if (masukannilai == "A") {
            masukannilaiInt = 1;
        } else if (masukannilai == "B") {
            masukannilaiInt = 2;
        } else if (masukannilai == "C") {
            masukannilaiInt = 3;
        } else if (masukannilai == "D") {
            masukannilaiInt = 4;
        } else {
            cout << "Failed number" << endl;
        }

        switch (masukannilaiInt) {
            case 1:
                cout << "Excenllent";
                break;
            case 2:
                cout << "Good";
                break;
            case 3:
                cout << "Average";
                break;
            case 4:
                cout << "Fail";
                break;
        }
    }
};

class solaKeempat {
public :
    void SolaKeempat() {
        int masukannilia;

        cout << "Masukan nilai : ";
        cin >> masukannilia;

        switch (masukannilia) {
            case 1:
                cout << "satu";
                break;
            case 2:
                cout << "dua";
                break;
            case 3:
                cout << "tiga";
                break;
            case 4:
                cout << "empat";
                break;
            case 5:
                cout << "lima";
                break;
            case 6:
                cout << "enam";
                break;
            case 7:
                cout << "tujuh";
                break;
            case 8:
                cout << "delapan";
                break;
            case 9:
                cout << "sembilan";
                break;
            case 10:
                cout << "sepuluh";
                break;
        };
    }
};

class soalkelima {
public:
    void Soelima() {
        int masukannilai;

        string kota1 = "jakarta";
        double jumlahpenumpang, harga, hargatotal;

        string kota2 = "bogor";
        double jumlahpenumpang2, harga2, hargatotal2, hargaDiskonKhusus;

        string kota3 = "garut";
        double jumlahpenumpang3, harga3, hargatotal3;

        string kota4 = "purwakarta";
        double jumlahpenumpang4, harga4, hargatotal4;

        cout << "1. jakarta \n2. bogor \n3. garut \n4. purwakarta \nMasukan nomor kota tujuan (1-4) : ";
        cin >> masukannilai;

        switch(masukannilai) {
            case 1:
                cout << "Masukan jumlah penumpang : ";
                cin >> jumlahpenumpang;

                harga = 145000;
                hargatotal = jumlahpenumpang * harga;

                cout << "tujuan : " << kota1 << endl;
                cout << "jumlah penumpang : " << jumlahpenumpang << endl;
                cout << "Harga tiket perorang : " << harga << endl;
                cout << "Total harga tiket : " << hargatotal << endl;
                break;
            case 2:
                cout << "Masukan jumlah penumpang : ";
                cin >> jumlahpenumpang2;

                harga2 = 200000;

                if (harga2 < 250000) {
                    hargatotal2 = jumlahpenumpang2 * harga2;
                    hargaDiskonKhusus = hargatotal2 - (hargatotal2 * 0.10);
                } else {
                    hargatotal2 = jumlahpenumpang2 * harga2;
                    hargaDiskonKhusus = hargatotal2;
                }

                cout << "tujuan : " << kota2 << endl;
                cout << "jumlah penumpang : " << jumlahpenumpang2 << endl;
                cout << "Harga tiket perorang : " << harga2 << endl;
                cout << "Total harga tiket : " << hargaDiskonKhusus << endl;
                break;
            case 3:
                cout << "Masukan jumlah penumpang : ";
                cin >> jumlahpenumpang3;

                harga3 = 75000;
                hargatotal3 = jumlahpenumpang3 * harga3;

                cout << "Tujuan : " << kota3 << endl;
                cout << "Jumlah orang : " << jumlahpenumpang3 << endl;
                cout << "Harga tiket perorang : " << harga3 << endl;
                cout << "Total harga tiket : " << hargatotal3 << endl;
                break;
            case 4:
                cout << "Masukan jumlah penumpang : ";
                cin >> jumlahpenumpang4;

                harga4 = 75000;
                hargatotal4 = jumlahpenumpang4 * harga4;

                cout << "Tujuan : " << kota4 << endl;
                cout << "Jumlah orang : " << jumlahpenumpang4 << endl;
                cout << "Harga tiket perorang : " << harga4 << endl;
                cout << "Total harga tiket : " << hargatotal4 << endl;
        }
      }
    };

class soalKeename {
public:
    void soalKeenamek() {
        double inputanmasukan;

        cout << "Masukan nilai nya : ";
        cin >> inputanmasukan;

        if (inputanmasukan < 0 ) {
            cout << "Ini bilangan negatif";
        } else {
            cout << "Ini bilangan positif";
            return;
        }
    }
};

class soalKetujuh {
public:
    void soalanketujuh() {
        int inputanmasukan;

        cout << "Masukan nilai nya : ";
        cin >> inputanmasukan;

        if (inputanmasukan % 2 == 0) {
            cout << "Ini bilangan genap";
        } else {
            cout << "Ini bilangan ganjil";
        }
    }
};

class soalkedelapan {
public:
    void soalKedelapan() {
        double inputanmasukan, pembagiannya, konversi, konversi2;

        cout << "Masukan nilai nya : ";
        cin >> inputanmasukan;

        konversi = int (inputanmasukan);

        pembagiannya = inputanmasukan - konversi;

        if (pembagiannya == 0.5) {
            konversi2 = int (inputanmasukan);
            cout << konversi2 << endl;
        } else {
            konversi2 = int (inputanmasukan);
            cout << konversi2 << endl;
        }
    }
};

    int main () {

        // Namapertama namapertama;
        // namapertama.Soalpertamadankedua();

        // soalKedua soal_kedua;
        // soal_kedua.Soalkeduak();

        // soalketiga soalketiga;
        // soalketiga.Soalketiga();

        // solaKeempat sola_keempat;
        // sola_keempat.SolaKeempat();

        // soalkelima masukan;
        // masukan.Soelima();

        // soalKeename soalKeenamei;
        // soalKeenamei.soalKeenamek();

        // soalKetujuh soalKeename;
        // soalKeename.soalanketujuh();

        soalkedelapan soalkedelapana;
        soalkedelapana.soalKedelapan();


    }