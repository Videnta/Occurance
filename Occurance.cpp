#include <iostream> 
  
 int Occurrences(int arr[], int n, int x) 
 { 
         int s = 0; 
         for (int i = 0; i < n; i++) 
                 if (x == arr[i]) 
                         s++; 
         return s; 
 } 
  
 int main() 
 { 
         int arr[] = {0,1,1,0,2,3,4}; 
         int n = sizeof(arr) / sizeof(arr[0]); 
         int x = 1; 
         printf("%d", Occurrences(arr, n, x)); 
         return 0; 
 }