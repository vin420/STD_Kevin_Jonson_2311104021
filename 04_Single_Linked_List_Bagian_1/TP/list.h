#ifndef LIST_H
#define LIST_H

#include <iostream>

using namespace std;

#define first(L) (L).first
#define info(P) (P)->info
#define next(P) (P)->next

typedef int infotype;
typedef struct element *address;

struct element {
    infotype info;
    address next;
};

struct List {
    address first;
};

void createList(List &L);
address allocate(infotype x);
void insertFirst(List &L, address P);
void printInfo(List L);
void insertLast(List &L, address P);
void insertAfter(address Prec, address P);
void deleteLast(List &L, address &P);
void deleteAfter(address Prec, address &P);

address searchInfo(List L, infotype x);


#endif