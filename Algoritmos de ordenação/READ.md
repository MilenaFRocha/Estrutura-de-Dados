# Principais algoritmos de ordenação

1.(Bubble)[https://github.com/MilenaFRocha/Estrutura-de-Dados/blob/main/Algoritmos%20de%20ordena%C3%A7%C3%A3o/Bubble.c]
  - Esse método compara de dois em dois e faz um **swap** nos pares,de modo que o maior elemento esteja sempre na última posicão e quando não houver trocas ele para o algoritmo (borbulha)
  - Melhor caso quando o vetor já está ordenado ou quase ordenado O(n)
  - Pior caso O(n^2)

2.(Isertion)[https://github.com/MilenaFRocha/Estrutura-de-Dados/blob/main/Algoritmos%20de%20ordena%C3%A7%C3%A3o/Bubble.c]
  - Esse método compara de dois em dois e troca , **mas diferente do bubble ele volta e compara até o menor elemento estar na primeira posição**e quando o elemnto anterior for menor ele volta para comparar de onde parou (baralho)
  - Melhor caso quando o vetor já está ordenado ou quase ordenado O(n)
  - Pior caso O(n^2)

3.(Merge)[https://github.com/MilenaFRocha/Estrutura-de-Dados/blob/main/Algoritmos%20de%20ordena%C3%A7%C3%A3o/Merge.c]
  - Esse método diivide o vetor em vários até que sobre apenas vetores de 2 posições, ele ordena eles e depois compara a primeira posição de um com a primeira e a segunda posição de outro e **mescla com a função merge** tudo no final e usa **recursividade**
  - Melhor caso O(n.log(n))
  - Pior caso O(n.log(n))

4.(Quick)[https://github.com/MilenaFRocha/Estrutura-de-Dados/blob/main/Algoritmos%20de%20ordena%C3%A7%C3%A3o/QuickSort.c]
  - Esse método define um pivô onde todos elementos menores estarão a esquerda e todos os maiores a direita **o pivô sempre o ultimo elemento e percorre com a linha roxa e coloca na amarela (swap)**, ele faz isso **recursivamente** até ordenar
  - Melhor caso O(n.log(n))
  - Pior caso O(n^2), quando o vetor estiver quase ordenado

5.(Selection)[https://github.com/MilenaFRocha/Estrutura-de-Dados/blob/main/Algoritmos%20de%20ordena%C3%A7%C3%A3o/Selection.c]
  - Esse método pega a posição do menor elemento e troca ele com o primeiro e assim sucetivamente , **funcao par aachar o index**
  - Melhor caso O(n^2)
  - Pior caso O(n^2)
