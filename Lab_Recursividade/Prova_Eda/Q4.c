#include <stdio.h>
int Repete1(int pnumero , int pdigito){
    int pdiv,pdig,pcont =0;

    if(pnumero<10){
        return 1 ;
    }
    else{
        return 0;
    }
    pdiv = pnumero/10;
    pdig = (pnumero - pdiv*10);
    if(pdig == pdigito){
        pcont++;
    }
    return pcont + Repete1(pdiv,pdigito);
}
int Repete2(int pnumero , int pdigito){
    int pdiv,pdig,pcont =0;

    if(pnumero<10){
        return 1 ;
    }
    else{
        return 0;
    }
    pdiv = pnumero/10;
    pdig = (pnumero - pdiv*10);
    if(pdig == pdigito){
        return Repete2(pdiv,pdigito+1);
    }
    else{

    return Repete2(pdiv,pdigito);
    }
}
int Repete3(int pnumero , int pdigito,int pqtde){
    int pdiv,pdig,pcont =0;

    if(pnumero<10){
        return 1 ;
    }
    else{
        return 0;
    }
    pdiv = pnumero/10;
    pdig = (pnumero - pdiv*10);
    if(pdig == pdigito){
        return Repete3(pdiv,pdigito,pqtde+1);
    }
    return pcont + Repete3(pdiv,pdigito,pqtde);
}
int Repete4(int pnumero , int pdigito,int pqtde){
    int pdiv,pdig,pcont =0;

    if(pnumero<10){
        return 1 ;
    }
    else{
        return 0;
    }
    pdiv = pnumero/10;
    pdig = (pnumero - pdiv*10);
    if(pdig == pdigito){
        return Repete4(pdiv,pdigito,pqtde+1);
    }
    return pcont + Repete4(pdiv,pdigito,pqtde);
}
int main(void)

{

    int pnumero = 9;
    int pdigito = 9;
    int pcont = Repete1(pnumero,pdigito);
    printf("%d\n",pcont);
    return 0 ;
}