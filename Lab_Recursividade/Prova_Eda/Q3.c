// alocação dinâmica de memória
// resultado é certo
float Media(float *pV, int pn){
    float pM = 0;
    int pInd;
    for(pInd = 0; pInd < pn; pInd++){
        pM += pV[pInd];
    }
    return pM/pn;
}
// resultado é errado
// alocacao dinamica de memoria
float Media2(float *pV, int pn){

    float *pVaux = pV;
    float pM = 0 ;
    int pInd;

    for(pInd = 0; pInd < pn; pInd++){
        pVaux++;
    }
    return (pM/pn);

}