#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int nth_prime(int n){

  int size = n * log(n) * 1.5;
  char arr[size];
  int i;
  for (i = 2; i < size; i ++){
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

int main(){
  printf("%d\n", nth_prime(26));
  return 0;
}
