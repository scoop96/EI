#include <iostream> 
#include <string>
#include <list> 
#include "tokenizadorClase.h"
#include "tokenizador.h"

using namespace std;

void imprimirListaSTL(const list<string>& cadena)
{
        list<string>::const_iterator itCadena;
        for(itCadena=cadena.begin();itCadena!=cadena.end();itCadena++)
        {
                cout << (*itCadena) << ", ";
        }
        cout << endl;
}

int
main(void)
{
list<string> lt1, lt2;
TokenizadorClase a(" ");
a.Tokenizar("MS DOS OS 2 high low", lt1);

imprimirListaSTL(lt1);

Tokenizador b(" ", false, false);
b.Tokenizar("MS DOS OS 2 high low", lt2);

imprimirListaSTL(lt2);

}
