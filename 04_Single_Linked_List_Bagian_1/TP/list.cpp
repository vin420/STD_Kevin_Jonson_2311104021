#include "list.h"

void createList(List &L) {
    first(L) = nullptr;
}

address allocate(infotype x) {
    address P = new element;
    info(P) = x;
    next(P) = nullptr;
    return P;
}

void insertFirst(List &L, address P) {
    next(P) = first(L);
    first(L) = P;
}

void printInfo(List L) {
    address P = first(L);
    while (P != nullptr) {
        std::cout << info(P) << " ";
        P = next(P);
    }
    std::cout << std::endl;
}

void insertLast(List &L, address P) {
    if (first(L) == nullptr) {
        first(L) = P;
    } else {
        address Q = first(L);
        while (next(Q) != nullptr) {
            Q = next(Q);
        }
        next(Q) = P;
    }
}

void insertAfter(address Prec, address P) {
    if (Prec != nullptr) {
        next(P) = next(Prec);
        next(Prec) = P;
    }
}

void deleteLast(List &L, address &P) {
    if (first(L) == nullptr) {
        P = nullptr;
    } else if (next(first(L)) == nullptr) {
        P = first(L);
        first(L) = nullptr;
    } else {
        address Q = first(L);
        while (next(next(Q)) != nullptr) {
            Q = next(Q);
        }
        P = next(Q);
        next(Q) = nullptr;
    }
}

void deleteAfter(address Prec, address &P) {
    if (Prec != nullptr && next(Prec) != nullptr) {
        P = next(Prec);
        next(Prec) = next(P);
        next(P) = nullptr;
    }
}

address searchInfo(List L, infotype x) {
    address P = first(L);
    while (P != nullptr && info(P) != x) {
        P = next(P);
    }
    return P;
}
