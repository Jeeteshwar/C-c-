#include<stdio.h>
int main()
{
int main() {
   int arr[] = {10, 20, 30, 40, 50};
   int *p = &arr[0]; 

   
   printf("Using pointer arithmetic:\n");
   for(int i = 0; i < 5; i++) {
      printf("%d ", *(p+i)); // 
   }

   
   printf("\nUsing array subscripting:\n");
   for(int i = 0; i < 5; i++) {
      printf("%d ", arr[i]); // printing the value at arr[i]
   }
}
return 0;
}