#include <stdio.h>
#include <stdlib.h>
#include "matriz.h"

//////////////////////////////////////////////////////////////////////////

int main (){
    Matriz* m, *m2;
    m = mat_cria();
    mat_preenche(m);
    mat_atribui (m, 2, 1, 3.54);
    mat_print(m);
    estrela(m->col*m->lin);
    m2 = mat_transp(m);
    mat_print(m2);
    mat_libera(m2);
}

//////////////////////////////////////////////////////////////////////////