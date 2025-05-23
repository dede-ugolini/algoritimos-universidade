#include <stdio.h>
#include <stdlib.h>

int i, j , tmp;

void bubblesort(int arr[], int size) {

   for (i = 0; i < size - 1; i++) {
    for(j = 0; j < size - i - 1; j++) {
      if(arr[j] > arr[j + 1]) {
      printf("i = %d j = %d [j:%d] = %d [i:%d] = %d\n", i, j, j ,arr[j], i,  arr[i]); /*Linha para debugar, se existe outra forma preciso aprender :( */
      tmp = arr[j];
      arr[j] = arr[j + 1];
      arr[j + 1] = tmp;
      }
     }
   } 
}

int main() {

  int arr[] = {3,2,5,4,1};
  int size = sizeof(arr) / sizeof(arr[0]);

  bubblesort(arr,size);

  for (i = 0; i < size; i++)
  printf("%d\n", arr[i]);
  return 0;
}

