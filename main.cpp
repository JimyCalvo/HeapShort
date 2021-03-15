#include <iostream>
#include "HeapSort.h"
using namespace std;
void Funcion_Imprimir(int Arreglo_1I[],int tam,int n);
int main() {
   int Tam;
  int *Arreglo,*Arreglo2;
  cout << "Ingrese el tamaño del arreglo: ";
  cin>>Tam;
   for(int i=0;i<Tam;i++)
  {
    cout <<"Ingrese en dato numerico Nº "<<i+1<<": ";
    cin>>Arreglo[i];
  }
  Funcion_Imprimir(Arreglo,Tam,0);
  Heapsort(Arreglo,Tam);
  Funcion_Imprimir(Arreglo,Tam,1);
  
}
void Funcion_Imprimir(int Arreglo_1I[],int tam,int n)
{
  if(n==0) cout<<"\n\nArreglo Original:\n\n";
  else cout<<"\n\nArreglo Ordenado por Quicksort:\n\n";
  cout<<"\t| ";
  for(int i=0;i<tam;i++)
  {
    cout<<Arreglo_1I[i]<<" | ";
  }
}