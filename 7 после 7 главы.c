#include <stdio.h> 
#define N 150
int main ()
{ 
  unsigned int a[N]; 
  int i; //заполним все ячейки числами по порядку: 0,1,2,3... 
  for( i=0; i<N; i++){ 
    a[i] = i; 
  } 
  //поскольку 1 не простое число, обнулим ячейку с этим числом 
  a[1]=0; 
  for(int s=2; s<N; s++){ 
    if(a[s]!=0){ 
      for(int j=s*2; j<N; j+=s){ 
        a[j]=0; 
      } 
    } 
  } 
  for(i=0; i<N; i++){ 
    if(a[i]!=0){ 
      printf("%d\n", a[i]); 
    } 
  } 
}