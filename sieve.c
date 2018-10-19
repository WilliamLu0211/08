#include "sieve.h"

int sieve(int n){

  int size = (int)(n * log(n) * 1.15);
  int arr[size];
  int i;
  for (i = 0; i < size; i ++){
    arr[i] = 0;
  }

  for (i = 2; i < size; i ++){
    if (!arr[i]){
      //printf("%d\n", i);
      n --;
      if (!n)
	return i;
      for (int j = i; j < size; j += i)
	arr[j] = 1;
    }
  }
  return i;
}
