
#include <stdio.h>
#include <string.h>

int isa(char a){
        if (a == 'A' || a == 'a')
            return 1;
        else 
            return 0;
    }
int ise(char a){
        if (a == 'E' || a == 'e')
            return 1;
        else 
            return 0;
    }    
 int isi(char a){
        if (a == 'I' || a == 'i' )
            return 1;
        else 
            return 0;
    }   
int iso(char a){
        if (a == 'O' || a == 'o')
            return 1;
        else 
            return 0;
    }
 int isu(char a){
        if (a == 'U' || a == 'u')
            return 1;
        else 
            return 0;
    }


int main (){
    int a, e, i, o, u, j;
    a = e = i = o = u = 0;
    char string[50];
    gets(string);
    for (j = 0; j < strlen(string); j++){
        if (isa(string[j]))
            a++;
        if (ise(string[j]))
            e++;
        if (isi(string[j]))
            i++;
        if (iso(string[j]))
            o++;
        if (isu(string[j]))
            u++;
    }
    printf("Numero de A(s):%d\n", a);
    printf("Numero de E(s):%d\n", e);
    printf("Numero de I(s):%d\n", i);
    printf("Numero de O(s):%d\n", o);
    printf("Numero de U(s):%d\n", u);

}