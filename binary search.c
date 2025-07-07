#include <stdio.h> 

int main() 
{ 
  int num, mid, i; 
  int A[7] = {15, 25, 37, 43, 51, 67, 79}; 

  printf("Enter the number to search: "); 
  scanf("%d", &num); 

  int low = 0; 
  int high = 6; 
  int found = 0; 

  for (i = 0; i < 4; i++) 
  { 
    mid = (low + high) / 2; 

    if (num == A[mid]) 
    { 
      found = 1; 
      break; 
    } 
    else  
    { 
      if (num < A[mid]) 
      { 
        high = mid - 1; 
      } 
      else 
      { 
        low = mid + 1; 
      } 
    } 
  } 

  if (found == 1) 
  { 
    printf("Found at index %d\n", mid); 
  } 
  else 
  { 
    printf("Not found!!\n"); 
  } 

  return 0; 
}
