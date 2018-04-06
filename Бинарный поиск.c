#include <stdio.h>
int main()
{
int array[8] = {2, 4, 8, 11, 25, 45, 59, 84};
int searchValue = 4;
int mid;
int size = sizeof(array)/4;
int low = 0;
int high = size;
while(low <= high) 
{
    mid = (low + high)/2;
    if(searchValue == array[mid]) 
    {
        printf("Номер элемента, который ты искал: %i\n", mid + 1);
        break;
        
    }
    else if(searchValue > array[mid]) 
    {
        low = mid + 1;
    }
    else
  {
  high = mid - 1;
      
  }
    
}
return 0;
    
}