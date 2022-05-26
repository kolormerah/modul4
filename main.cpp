//
// Ariq Heritsa Maalik - 1305213031 - DS-45-01
//

#include <iostream>
#include "mylist.h"

using namespace std;

int main() {
  // [A]
  list L;
  address P, temp;
  infotype Mhs;

  // [B]
  string nama, nim;
  float ipk;

  // A. Terbimbing
  createList(L);
  printList(L);

  Mhs = newMahasiswa("Alice", "1301190202", 3.5);
  P = newElement(Mhs);
  insertFirst(L, P);

  Mhs = newMahasiswa("Bob", "1301190203", 4);
  P = newElement(Mhs);
  insertFirst(L, P);

  printList(L);

  Mhs = newMahasiswa("Chihaya", "1301190204", 3.6);
  P = newElement(Mhs);
  insertLast(L, P);

  Mhs = newMahasiswa("Delta", "1301190205", 2.7);
  P = newElement(Mhs);
  insertLast(L, P);

  Mhs = newMahasiswa("Euniche", "1301190201", 3.9);
  P = newElement(Mhs);
  insertFirst(L, P);

  printList(L);

  deleteFirst(L, temp);
  deleteLast(L, temp);

  printList(L);

  // B. Mandiri

  createList(L);

  // Melakukan input data
  cout << "Masukkan Nama: ";
  cin >> nama;
  cout << "Masukkan NIM: ";
  cin >> nim;
  cout << "Masukkan IPK: ";
  cin >> ipk;

  while (nim != "-") {
    Mhs = newMahasiswa(nama, nim, ipk);
    P = newElement(Mhs);
    insertLast(L, P);

    cout << "Masukkan Nama: ";
    cin >> nama;
    cout << "Masukkan NIM : ";
    cin >> nim;
    cout << "Masukkan IPK : ";
    cin >> ipk;
  }

  printList(L);

  // Menghapus data
  while (first(L) != nil) {
    deleteLast(L, temp);

    cout << "Data yang dihapus: " << endl;
    cout << "Nama: " << info(temp).nama << endl;
    cout << "NIM : " << info(temp).nim << endl;
    cout << "IPK : " << info(temp).ipk << endl;
    cout << endl;
  }

  return 0;
}
