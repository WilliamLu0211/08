#include "sieve.h"

int sieve(int n){

  int size = n * log(n) * 1.15;
  char *p = calloc(size, 1);

  // for (int i = 2; i < size; i += 2)
  //   *(p + i) = 1;
  //
  // n --;

  for (int i = 2; i < size; i ++){
    if (!*(p + i)){
      // printf("%d\n", i);
      n --;
      // printf("%d\n", n);
      if (!n){
        free(p);
	      return i;
      }
      for (int j = i; j < size; j += i)
        if (!*(p + j))
	        *(p + j) = 1;
    }
  }
  free(p);
  return -1;
}

// int sieve(int n){
//
//   int size = n * log(n) * 1.15;
//   char arr[size];
//
//   for (int i = 0; i < size; i ++)
//     arr[i] = 0;
//
//   for (int i = 2; i < size; i ++){
//     if (!arr[i]){
//       // printf("%d\n", i);
//       n --;
//       // printf("%d\n", n);
//       if (!n){
// 	      return i;
//       }
//       for (int j = i; j < size; j += i)
//         if (!arr[j])
// 	        arr[j] = 1;
//     }
//   }
//   return -1;
// }
