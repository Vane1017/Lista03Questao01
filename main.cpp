#include <iostream>

using namespace std;

void insertionSort(int *lista, int n){
    int ii,jj,valor_atual;
    for(ii=1;ii<n;ii++){
        valor_atual = lista[ii];
        jj=ii-1;
        while((jj>=0)&&(lista[jj]>valor_atual)){
            lista[jj+1]=lista[jj];
            jj--;
        }
        lista[jj+1] = valor_atual;
    }
}

int main()
{
    int lista1[100] = {101,10,20,55,30,1,9,10,99,35};
    int tamanho_lista1 = 10,ii;
    cout << "1 - Implementar o algoritmo Insertion Sort!" << endl;
    insertionSort(lista1,tamanho_lista1);
    cout << "Lista ordenada:" << endl;
    for (ii = 0; ii < tamanho_lista1; ii++) {
        cout << lista1[ii] << endl;
    }
    return 0;
}
