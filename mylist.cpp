//
// Ariq Heritsa Maalik - 1305213031 - DS-45-01
//

#include "mylist.h"

using namespace std;

void createList(list &L) {
  first(L) = nil;
}

infotype newMahasiswa(string nama, string nim, float ipk) {
  infotype mhs;

  mhs.nama = nama;
  mhs.nim = nim;
  mhs.ipk = ipk;

  return mhs;
}

address newElement(infotype dataBaru) {
  address P = new elmList;

  info(P) = dataBaru;
  next(P) = nil;

  return P;
}

void insertFirst(list &L, address P) {
  if (first(L) == nil) {
    first(L) = P;
  } else {
    next(P) = first(L);
    first(L) = P;
  }
}

void insertLast(list &L, address P) {
  if (first(L) == nil) {
    first(L) = P;
  } else {
    address current = first(L);

    while (next(current) != nil) {
      current = next(current);
    }

    next(current) = P;
  }
}

void deleteFirst(list &L, address &P) {
  P = first(L);

  if (next(first(L)) == nil) {
    first(L) = nil;
  } else {
    first(L) = next(P);
    next(P) = nil;
  }
}

void deleteLast(list &L, address &P) {
  address Q;

  P = first(L);
  Q = first(L);

  if (next(first(L)) == nil) {
    first(L) = nil;
  } else {
    while (next(P) != nil) {
      Q = P;
      P = next(P);
    }
  }

  next(Q) = nil;
}

void printList(list L) {
  if (first(L) == nil) {
    cout << "List kosong!" << endl;
    cout << endl;
  } else {
    int i = 1;
    address P = first(L);

    while (P != nil) {
      cout << "[" << i << "]" << endl;
      cout << "Nama: " << info(P).nama << endl;
      cout << "NIM : " << info(P).nim << endl;
      cout << "IPK : " << info(P).ipk << endl;

      P = next(P);
      i++;
    }

    cout << "List selesai ditampilkan!" << endl;
    cout << endl;
  }
}
