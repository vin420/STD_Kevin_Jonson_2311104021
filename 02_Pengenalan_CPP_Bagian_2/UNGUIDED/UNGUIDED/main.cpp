/*#include <iostream>

using namespace std;

int main() {
    const int MAX_ANGKA = 100;
    int angka[MAX_ANGKA];
    int genap[MAX_ANGKA];
    int ganjil[MAX_ANGKA];
    int jumlah_angka = 0;
    int jumlah_genap = 0;
    int jumlah_ganjil = 0;
    int input;

    cout << "Masukkan angka : ";

    while (true) {
        cin >> input;
        if (input < 0) {
            break;
        }
        angka[jumlah_angka] = input;
        jumlah_angka++;
    }

    for (int i = 0; i < jumlah_angka; i++) {
        if (angka[i] % 2 == 0) {
            genap[jumlah_genap] = angka[i];
            jumlah_genap++;
        } else {
            ganjil[jumlah_ganjil] = angka[i];
            jumlah_ganjil++;
        }
    }

    cout << "Data Array: ";
    for (int i = 0; i < jumlah_angka; i++) {
        cout << angka[i] << " ";
    }
    cout << endl;

    cout << "Nomor Genap: ";
    for (int i = 0; i < jumlah_genap; i++) {
        cout << genap[i] << " ";
    }
    cout << endl;

    cout << "Nomor Ganjil: ";
    for (int i = 0; i < jumlah_ganjil; i++) {
        cout << ganjil[i] << " ";
    }
    cout << endl;

    return 0;
}*/

/*#include <iostream>

using namespace std;

int main() {
    int x, y, z;

    cout << "Masukkan ukuran pertama : ";
    cin >> x;
    cout << "Masukkan ukuran kedua : ";
    cin >> y;
    cout << "Masukkan ukuran ketiga : ";
    cin >> z;

    int arr[x][y][z];

    cout << "Masukkan elemen array:\n";
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < z; k++) {
                cout << "Elemen [" << i << "][" << j << "][" << k << "]: ";
                cin >> arr[i][j][k];
            }
        }
    }

    cout << "\nElemen array yang diinput:\n";
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < z; k++) {
                cout << "Elemen [" << i << "][" << j << "][" << k << "]: " << arr[i][j][k] << endl;
            }
        }
    }

    return 0;
}*/

#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Masukkan jumlah elemen array: ";
    cin >> n;

    int arr[n];

    cout << "Masukkan elemen array: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int maxVal = arr[0];
    int minVal = arr[0];
    int sum = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > maxVal) maxVal = arr[i];
        if (arr[i] < minVal) minVal = arr[i];
        sum += arr[i];
    }

    double average = (double)sum / n;

    cout << "Nilai Maksimum: " << maxVal << endl;
    cout << "Nilai Minimum: " << minVal << endl;
    cout << "Nilai Rata-Rata: " << average << endl;

    return 0;
}


