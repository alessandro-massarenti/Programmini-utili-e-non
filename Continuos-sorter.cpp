#include<iostream>

using namespace std;

struct nodo {
    int info;
    nodo *next;

    nodo(int a = 0, nodo *b = 0) {
        info = a;
        next = b;
    }
};


void stampaL(nodo *L) {
    if (L) {
        cout << L->info << ' ';
        stampaL(L->next);
    } else
        cout << endl;
}

nodo *insric(nodo *ord, nodo *list) {
    if (!ord) {
        list->next = 0;
        return list;
    }
    if (list->info < ord->info) {
        list->next = ord;
        return list;
    }
    ord->next = insric(ord->next, list);
    return ord;
}

void ordric(nodo *&list, nodo *&ord) {
    if (!list)
        return;
    ordric(list->next, ord);
    ord = insric(ord, list);
}

void insert(nodo *&list, int input) {
    if (!list)
        list = new nodo(input);
    else
        insert(list->next, input);
}

void buildlist(nodo *&list) {
    int input;
    cin >> input;
    if (input != -1) {
        nodo *newlist = 0;
        nodo *oldlist = list;
        stampaL(list);
        insert(list, input);
        ordric(list, newlist);
        stampaL(oldlist);
        buildlist(list);
    }
    return;
}

int main() {
    cout << "start" << endl;
    nodo *L = 0;
    buildlist(L);

    cout << endl;
    nodo *L2 = 0;
    ordric(L, L2);
    stampaL(L2);
    cout << "end" << endl;
    return 0;
}

