#include <stdio.h>

// me pede um vetor de char e retorna um ponteiro para char
char * acheSobrenome(char nome []){

    int i =0;
    while (nome [i] != ' '){
        
        i++;
    }
    // acha a posicao da primeira letra do sobrenome
    i++;
    // retorna o endereco da primeira letra do sobrenome  
    nome = &nome[i];
    return nome;
}
   
int main(void){

    char nome[] ={'m','i','c','h','e','l',' ','s','o','u','z','a','\0'};
    char *p = acheSobrenome(nome);
    puts(p);
    return 0 ;
}
    
    