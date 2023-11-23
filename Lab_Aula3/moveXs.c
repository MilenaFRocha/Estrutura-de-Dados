#include <stdio.h>
#include <string.h>

char *nome(char* palavraRuim){
    char *p ;

    if(palavraRuim[0] = 'x'){
        int temp =0;
        p++;
        p[strlen(palavraRuim)] = 'x';

    }
        
    return palavraRuim;
}
int main(void){

    char palavra1[] ={ 'x','a','x','a','x','\0'};
    char *p = nome(palavra1);
    puts(p);
    
    return 0;
}
