#include <iostream>
#include "lib.h"
using namespace std;


int main() {

    char elenco [10][20];
    char nome [20];

    for (int i=0; i<10; i++) {
        cin >> elenco[i];
    }

    cin >> nome;

    int a = funzione(elenco, nome);
    if (a <= 10) {
        cout << a;
    }
    else {
        cout << "non presente";
    }

    return 0;
}
