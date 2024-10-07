#include <iostream>
using namespace std;

/*int main(NO 1) {
    float bil1, bil2;

    cout << "Masukkan bil pertama: ";
    cin >> bil1;
    cout << "Masukkan bil kedua: ";
    cin >> bil2;

    float penjumlahan = bil1 + bil2;
    float pengurangan = bil1 - bil2;
    float perkalian = bil1 * bil2;
    float pembagian;

    if (bil2 != 0) {
        pembagian = bil1 / bil2;
        cout << "Hasil pembagian: " << pembagian << endl;
    } else {
        cout << "Pembagian error." << endl;
    }

    cout << "Penjumlahan: " << penjumlahan << endl;
    cout << "Pengurangan: " << pengurangan << endl;
    cout << "Perkalian: " << perkalian << endl;

    return 0;
}*/

/*#include <string>


int main() {
    int angka;
    string tulisan;

    cout << "Masukkan angka (0-100): ";
    cin >> angka;

    if (angka < 0 || angka > 100) {
        cout << "Angka harus antara 0 sampai 100." << endl;
        return 1;
    }

    string angkaTulisan[] = {"nol", "satu", "dua", "tiga", "empat", "lima", "enam", "tujuh", "delapan", "sembilan", "sepuluh",
                            "sebelas", "dua belas", "tiga belas", "empat belas", "lima belas", "enam belas", "tujuh belas", "delapan belas", "sembilan belas"};

    string puluhan[] = {"", "", "dua puluh", "tiga puluh", "empat puluh", "lima puluh", "enam puluh", "tujuh puluh", "delapan puluh", "sembilan puluh"};

    if (angka < 20) {
        tulisan = angkaTulisan[angka];
    } else {
        tulisan = puluhan[angka / 10] + " ";
        if (angka % 10 != 0) {
            tulisan += angkaTulisan[angka % 10];
        }
    }

    cout << angka << " : " << tulisan << endl;

    return 0;
}*/

int main() {
    int n;

    cout << "Input angka: ";
    cin >> n;
    for (int i = n; i >= 1; i--) {
        for (int j = i; j >= 1; j--) {
            cout << j << " ";
        }
        cout << "* ";
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << "*" << endl;

    return 0;
}
