#include <stdio.h>

int main(void){

    FILE * fp ;
    fp = fopen('POEM.TXT.txt','r');
    int cont =0;

    char ch = fget(fp);

    while(ch != EOF){
        cont ++;
    }
    printf("o numero de caracter %d",cont);

    fclose(fp);

    return 0;
}
// #include<stdio.h>
// main( )
// {
//   FILE *fp;
//   char ch;
//   int pqtdecar = 0;
//   fp = fopen ( "Arquivo1.txt", "r" );
//   while ( 1 )
//   {
//     ch = fgetc(fp);
//     if(ch==EOF)
//       break;
//     pqtdecar++;
//   }
//   fclose ( fp );
//   printf("Quantidade de Caracteres: %d",pqtdecar);
//   return 0;
// }