#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa {
    string nama;
    int umur;
    float nilai;
};

int main() {
    Mahasiswa mhs;
    mhs.nama = "Jose";
    mhs.umur = 15;
    mhs.nilai = 1000;

    cout << "Data Mahasiswa:" << endl;
    cout << "Nama  : " << mhs.nama << endl;
    cout << "Umur  : " << mhs.umur << " tahun" << endl;
    cout << "Nilai : " << mhs.nilai << endl;

    return 0;
}



#include <iostream>
#include <string>
using namespace std;

struct Mobil {
    string merk;
    int tahun;
    string warna;
};

int main() {

    Mobil mobil1, mobil2;

    mobil1.merk = "Toyota Avanza";
    mobil1.tahun = 2020;
    mobil1.warna = "Putih";

    mobil2.merk = "Honda Civic";
    mobil2.tahun = 2018;
    mobil2.warna = "hytam";


    cout << "Data Mobil 1:" << endl;
    cout << "Merk  : " << mobil1.merk << endl;
    cout << "Tahun : " << mobil1.tahun << endl;
    cout << "Warna : " << mobil1.warna << endl << endl;


    cout << "Data Mobil 2:" << endl;
    cout << "Merk  : " << mobil2.merk << endl;
    cout << "Tahun : " << mobil2.tahun << endl;
    cout << "Warna : " << mobil2.warna << endl;;

    return 0;
}

#include <iostream>
#include <string>
using namespace std;

struct buku {
    char judul[100];
    char pengarang[50];
    float harga;
};

void tampilkanBuku(struct buku data) {
    printf("Judul      : %s\n", data.judul);
    printf("Pengarang  : %s\n", data.pengarang);
    printf("Harga      : Rp%.2f\n", data.harga);
}

int main() {
   
    struct buku buku1 = {"BudiLuhur", "Kepala Sekolah", 75000.0};

 
    tampilkanBuku(buku1);

    return 0;
}



#include <iostream>
#include <string>
using namespace std;

struct Siswa {
    string nama;
    string kelas;
    string nis;
};

int main() {
    Siswa siswa[3];
    
    siswa[0].nama = "Andi";
    siswa[0].kelas = "10 IPA 1";
    siswa[0].nis = "1001";
    
    siswa[1].nama = "Budi";
    siswa[1].kelas = "10 IPA 2";
    siswa[1].nis = "1002";
    
    siswa[2].nama = "Citra";
    siswa[2].kelas = "10 IPA 3";
    siswa[2].nis = "1003";
    
    cout << "DATA SISWA" << endl;
    cout << "====================" << endl;
    
    for(int i = 0; i < 3; i++) {
        cout << "Siswa ke-" << i+1 << ":" << endl;
        cout << "Nama  : " << siswa[i].nama << endl;
        cout << "Kelas : " << siswa[i].kelas << endl;
        cout << "NIS   : " << siswa[i].nis << endl;
        cout << "---------------------" << endl;
    }
    
    return 0;
}