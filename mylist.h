//
// Ariq Heritsa Maalik - 1305213031 - DS-45-01
//

#ifndef STD_MOD4_DS4501_1305213031_ARN_MYLIST_H
#define STD_MOD4_DS4501_1305213031_ARN_MYLIST_H

#include <iostream>

using namespace std;

#define nil NULL
#define next(P) P->next
#define info(P) P->info
#define first(L) L.first

typedef struct mahasiswa infotype;
typedef struct elmList *address;

struct mahasiswa {
  string nama, nim;
  float ipk;
};

struct elmList {
  infotype info;
  address next;
};

struct list {
  address first;
};

void createList(list &L);

infotype newMahasiswa(string nama, string nim, float ipk);

address newElement(infotype dataBaru);

void insertFirst(list &L, address P);

void insertLast(list &L, address P);

void deleteFirst(list &L, address &P);

void deleteLast(list &L, address &P);

void printList(list L);

#endif //STD_MOD4_DS4501_1305213031_ARN_MYLIST_H
