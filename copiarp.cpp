#include <iostream>

using namespace std;
void copy_char(char *, char *);

int main(){
    char cad_a [255] = "cadena";
    char cad_b[255] = "Segunda cadena";
    cout << "cadena_b antes de copy_char: " << cad_b << endl;
    cout << "cadena_b despues de llamar a copy_char: ";
    copy_char(cad_a, cad_b);
    
    return 0;
}

void copy_char(char *n , char *m){
    char *aux_ptr = m; 
    char *aux_ptr2 = n;
    for (; *aux_ptr2 != '\0'; aux_ptr2++)
    {
        *aux_ptr = *aux_ptr2;
    }    
    *aux_ptr = '\0';
    cout << m << endl;
}