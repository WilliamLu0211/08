#include "sieve.h"

long sieve(int n){

  long size = (long)(n * log(n) * 1.5);
  // char *p = calloc(size, sizeof(char));
  char arr[size];// = *p;
  long i;
  for (i = 0; i < size; i ++){
    arr[i] = 0;
  }

  for (i = 2; i < size; i ++){
    if (!arr[i]){
      //printf("%d\n", i);
      n --;
      if (!n)
	      return i;
      for (long j = i; j < size; j += i)
	      arr[j] = 1;
    }
  }
  return i;
}
