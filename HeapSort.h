#include <iostream>
using namespace std;
void Heapsort(int Arreglo_O[], int tam);
void monton(int Arreglo_O[], int tam, int medio);
void Heapsort(int Arreglo_O[], int tam)
{ 
  for (int i = tam / 2 - 1; i >= 0; i--) 
    monton(Arreglo_O, tam, i); 
  for (int i = tam - 1; i >= 0; i--) 
  { 
    swap(Arreglo_O[0], Arreglo_O[i]); 
    monton(Arreglo_O, i, 0); 
  } 
}

void monton(int Arreglo_O[], int tam, int medio)
{ 
  int altoV = medio;
  int l = 2 * medio + 1;
  int r = 2 * medio + 2; 
  if (l < tam && Arreglo_O[l] > Arreglo_O[altoV]) 
    altoV = l; 
  if (r < tam && Arreglo_O[r] > Arreglo_O[altoV]) 
    altoV = r; 
  if (altoV != medio) { 
    swap(Arreglo_O[medio], Arreglo_O[altoV]); 
    monton(Arreglo_O, tam, altoV); 
  } 
} 
