#include <stdio.h>
#include <stdlib.h>
#include "sorting.h"
int main(int argc, char*argv[]) {
  int i,N,j=0;
  N = argc-1; // assign arguments count - 1 to N as Number to run
  //printf(">>N is %d\n",N);
  int *prime = (int*)malloc(sizeof(int)*N);
  int *a = (int*)malloc(sizeof(int)*N);
  for(i = 0; i < N; i++)
    {
      a[i] = atoi(argv[i+1]); // Change arguments to int
      if(IsPrime(a[i])==1) 
      {
        //printf(">>Result: %d\n",IsPrime(a[i]));
        prime[j++] = a[i];
      }
    }
        if(j==0) printf("No prime\n"); //if there is no prime
  display(prime, j);
  bubbleSort(prime, j);
  // insertion(a,N);
  
  // selectionSort(a,N);
  display(prime, j);
  return 0;
}
