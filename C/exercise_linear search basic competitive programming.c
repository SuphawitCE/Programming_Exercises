// A Sample C program for beginners with Competitive Programming 
#include<stdio.h> 
// This function returns index of element x in arr[] 
int search(int arr[], int n, int x) 
{ 
    int i; 
    for (i = 0; i < n; i++) 
    {
       // Return the index of the element if the element 
       // is found 
       if (arr[i] == x) 
         return i; 
    } 
  
    //return -1 if the element is not found 
    return -1; //a[i]=-1,n=-1,x=-1; 
}  
  
int main() 
{ 
    // Note that size of arr[] is considered 100 according to 
    // the constraints mentioned in problem statement. 
    int arr[100], x, t, n, i; 
  
    // Input the number of test cases you want to run 
    scanf("%d", &t);  
  
    // One by one run for all input test cases 
    while (t--) 
    { 
        // Input the size of the array = 2 becausee one for T and second for N
        scanf("%d", &n);  
  
        // Input the array 
        for (i=0; i<n; i++){
        	scanf("%d ", &arr[i]);
		}
  
        // Input the element to be searched 
        scanf("%d", &x); 
  
        // Compute and print result 
        printf("%d\n", search(arr, n, x)); 
    } 
    return 0; 
} 
