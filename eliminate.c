// ***
// *** You MUST modify this file
// ***

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h> 
#include <string.h> 

void eliminate(int n, int k)
{
  // allocate an arry of n elements
  int * arr = malloc(sizeof(* arr) * n);
  // check whether memory allocation succeeds.
  // if allocation fails, stop
  if (arr == NULL)
    {
      fprintf(stderr, "malloc fail\n");
      return;
    }
  // initialize all elements
  // You may initialize the elements to a number of your choice (e.g., 0)
  for (int i = 0; i < n; i++)
    {
      arr[i] = 0;
    }

  // counting to k,
  int elements = n; //number of elements
  int currentIndex = 0; //current index initialized to 0
  int count = 0; //count value to count to k
  
  // repeat until only one element is unmarked
  while (elements > 1)
    {
      if (arr[currentIndex == 0)
      {
        count++;
        if (count == k)
        {
          arr[currentIndex] = 1; // mark the eliminated element; you choose the mark (e.g., 1)
          printf("Index of Marked Element: %d\n", currentIndex);  // print the index of the marked element
          elements--; 
          count = 0;
        }
      }
      currentIndex = (currentIndex + 1) % n;
    }
  
  // print the last remaining index
  for (int i = 0; i < n; i++)
    {
      if (arr[i] == 0)
      {
        printf("Last Remaining Index: %d\n", i);
        break;
      }
    }

  // release the memory of the array
  free (arr);
}
