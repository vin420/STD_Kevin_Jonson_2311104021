#include "list.h"

int main() {
    List L;
    createList(L);

    infotype nim_digit;
    address P;

    for (int i = 1; i <= 10; i++) {
        cout << "Masukkan digit NIM ke-" << i << ": ";
        cin >> nim_digit;
        P = allocate(nim_digit);
        insertLast(L, P);
    }
    cout << "Isi List: ";
    printInfo(L);

    return 0;
}