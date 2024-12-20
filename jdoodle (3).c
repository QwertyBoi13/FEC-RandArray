#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARRAY_SIZE 10
#define MAX_RAND_VALUE 100

int main(void) {
  printf("Random Array\n");
  printf("Code by Levi Leichtfuss\n");

  int rand_array[ARRAY_SIZE] = { 0 };

  // Fill array with random numbers
  srand(time(NULL));
  for (int i = 0; i < ARRAY_SIZE; i++) {
    rand_array[i] = rand() % MAX_RAND_VALUE + 1;
  }

  // Find the smallest number. in the array
  int smallest = rand_array[0];
  int smallest_index = 0;
  int index = 1;
  
  while (index < ARRAY_SIZE) {
    if (rand_array[index] < smallest) {
      smallest = rand_array[index];
      smallest_index = index;
    }
    index++;
  }

  // Display Array
  index = 0;
  do {
    printf("%i: %d", index, rand_array[index]);
    if (index == smallest_index) {
      printf(" <== Smallest Value");
    }
    printf("\n");
    index++;
  } while (index < ARRAY_SIZE);

  return 0;
}