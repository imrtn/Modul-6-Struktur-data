#include <iostream>
#include "Doublylist.h"

using namespace std;

int main() {
    list L;
    address P, Q;
    infotype x;

    CreateList(L);

    for (int i = 1; i <= 4; i++) {
        cout << "masukkan nomor polisi: ";
        cin >> x.nopol;

        cout << "masukkan warna kendaraan: ";
        cin >> x.warna;

        cout << "masukkan tahun kendaraan: ";
        cin >> x.thnBuat;

        Q = findElm(L, x);

        if (Q != Nil) {
            cout << "nomor polisi sudah terdaftar" << endl;
        } else {
            P = alokasi(x);
            insertFirst(L, P);
        }

        cout << endl;
    }

    cout << "DATA LIST 1" << endl;
    printInfo(L);

    cout << endl;

    cout << "Masukkan Nomor Polisi yang dicari : ";
    cin >> x.nopol;

    Q = findElm(L, x);

    if (Q != Nil) {
        cout << endl;
        cout << "Nomor Polisi : " << Q->info.nopol << endl;
        cout << "Warna        : " << Q->info.warna << endl;
        cout << "Tahun        : " << Q->info.thnBuat << endl;
    } else {
        cout << "Data tidak ditemukan" << endl;
    }

    cout << endl;

    cout << "Masukkan Nomor Polisi yang akan dihapus : ";
    cin >> x.nopol;

    Q = findElm(L, x);

    if (Q != Nil) {
        if (Q == L.first) {
            deleteFirst(L, P);
        } else if (Q == L.last) {
            deleteLast(L, P);
        } else {
            deleteAfter(Q->prev, P);
        }

        dealokasi(P);

        cout << "Data dengan nomor polisi " << x.nopol
             << " berhasil dihapus." << endl;
    } else {
        cout << "Data tidak ditemukan." << endl;
    }

    cout << endl;

    cout << "DATA LIST 1" << endl;
    printInfo(L);

    return 0;
}