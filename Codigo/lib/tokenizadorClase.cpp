#include tokenizadorClase.h
#include <sys/type.h>
#include <sys/stat.h>
#include <cstdlib>
using namespace tokenizadorClase;


bool TokenizarDirectorio (const string& dirAIndexar) const{
    struct stat dir;
    //compruebo la existencia del directorio
    int err = stat (dirAIndexar.c_str(), &dir);
    
    if(err==-1 || !S_ISDIR(dir.st_mode))
        return false;
    else{
        //hago una lista en un fichero con find>fich
        string cmd="find " +dirAIndexar+" -follow |sort > .lista_fich";
        system(cmd.c_str());
        return TokenizarListaFicheros(".lista_fich");
    }
        
}
