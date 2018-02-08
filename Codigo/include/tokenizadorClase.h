#include <iostream>

using namespace std;

class TokenizadorClase{
    friend ostream& operator << (ostream& ,const TokenizadorClase&)
    //cout << "DELIMITADORES: " <<delimiters;

    private:

        string delimiters;
        //delimitadores de terminos. Aunque se modifique la forma de almacenamiento interna para mejorar la eficiencia, este campo debe permanecer para indicar el orden en que se introdujeron los delimitadores

        //version del tokenizador visto en clase
        void Tokenizar (const string& str, list <string>& tokens)
    
    public:

        TokenizadorClase(const TokenizadorClase&);

        TokenizadorClase(const string& DelimitadoresPalabra);
        //Inicializa variable privada delimiters a delimitadoresPalabra

        TokenizadorClase();
        //Inicializa delimiters=",;:.-/+*\\ '\"[]{}()<>¡!¿?&#=\t\n\r@"
        ~TokenizadorClase()//pone delimiters=""

        TokenizadorClase& operator= (const TokenizadorClase&);

        void Tokenizar (const string& str, list <string>& tokens) const;
        //Tokeniza str devolviendo el resultado en tokens. La lista tokens se vaciara antes de almacenar el resultado de la tokenizacion
        //El codigo de esta funcion tal y como se ha visto en clase se muestra en este enunciado a continuacion del prototipo de la clase TokenizadorClase
        
        bool Tokenizar (const string& i, const string& f) const;
        //Tokeniza el fichero i guardando la salida en el fichero f (una palabra en cada linea del fichero). Devolvera true si se realiza la tokenizacion de forma correcta enviando a cerr el mensaje correspondiente (p.ej. que no exista el archivo i)

        bool Tokenizar (const string & i) const;
        //Tokeniza el fichero guardando la salida en un fichero de nombre iañadiéndole extensión .tk (sin eliminar previamente la extensión de ipor ejemplo, del archivo pp.txt se generaría el resultado en pp.txt.tk),y que contendrá una palabra en cada línea del fichero. Devolverá true sise realiza la tokenización de forma correcta enviando a cerr el mensajecorrespondiente (p.ej. que no exista el archivo i)

        bool TokenizarListaFicheros (const string& i) const;
        //Tokeniza el fichero i que contiene un nombre de fichero por líneaguardando la salida en ficheros (uno por cada línea de i) cuyo nombreserá el leído en i añadiéndole extensión .tk, y que contendrá unapalabra en cada línea del fichero leído en i. Devolverá true si se realiza la tokenización de forma correcta de todos los archivos quecontiene i; devolverá false en caso contrario enviando a cerr el mensajecorrespondiente (p.ej. que no exista el archivo i, o bien enviando a“cerr” los archivos de i que no existan, luego no se ha de interrumpirla ejecución si hay algún archivo en i que no exista)

        bool TokenizarDirectorio (const string& i) const;
        // Tokeniza todos los archivos que contenga el directorio i, incluyendolos de los subdirectorios, guardando la salida en ficheros cuyo nombreserá el de entrada añadiéndole extensión .tk, y que contendrá unapalabra en cada línea del fichero. Devolverá true si se realiza latokenización de forma correcta de todos los archivos; devolverá false encaso contrario enviando a cerr el mensaje correspondiente (p.ej. que noexista el directorio i, o los ficheros que no se hayan podido tokenizar)

        void DelimitadoresPalabra (const string& nuevoDelimiters);
        //cambia "delimiters" por "nuevoDelimiters"

        void AnyadirDelimitadoresPalabra(const string& nuevoDelimiters);
        //Añade al final de “delimiters” los nuevos delimitadores que aparezcanen “nuevoDelimiters” (no se almacenarán caracteres repetidos)

        string DelimitadoresPalabra() const;
        //devuelve "delimiters"
        



};