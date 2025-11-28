

#include <iostream>
using namespace std;


struct Contacto {
    string nombre, tel, correo;
};

Contacto contactos[50];
int total = 0;

// Lista enlazada (eliminados)
struct NodoLista {
    Contacto c;
    NodoLista* sig;
};
NodoLista* eliminados = NULL;

int main()
{
    std::cout << "Hello World!\n";
}

