#include<stdio.h> 
int main()
{
   int c, a, z, m, n, search, array[100];
   printf("Enter number of elements:\n");
   scanf("%d",&n); 
   printf("Enter %d integers:\n", n);
   for (c = 0; c < n; c++)
      scanf("%d",&array[c]); 
   printf("Enter the value to find:\n");
   scanf("%d", &search);
   a = 0;
   z = n - 1;
   m = (a+z)/2;
   while (a <= z) {
      if (array[m] < search)
         a = m + 1;    
      else if (array[m] == search) {
         printf("%d is present at index %d.\n", search, m+1);
         break;
      }
      else
         z = m - 1;
      m = (a + z)/2;
   }
   if (a > z)
      printf("%d is not present in the list.\n", search);
   return 0;  
}