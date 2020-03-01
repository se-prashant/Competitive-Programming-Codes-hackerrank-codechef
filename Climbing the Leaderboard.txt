#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
long removeDuplicates(long arr[], long n) {
  if (n == 0 || n == 1)
    return n;

  // To store index of next unique element
  int j = 0;

  // Doing same as done in Method 1
  // Just maintaining another updated index i.e. j
  for (int i = 0; i < n - 1; i++)
    if (arr[i] != arr[i + 1])
      arr[j++] = arr[i];

  arr[j++] = arr[n - 1];
  return j;
}
int binarySearch(long arr[], long l, long r, long x) 
{ 
    if (r > l) { 
        int mid = l + (r - l) / 2; 
  
        // If the element is present at the middle 
        // itself 
        if (arr[mid] == x) 
            return mid+1; 
  
        // If element is smaller than mid, then 
        // it can only be present in left subarray 
        if (arr[mid] > x) 
            return binarySearch(arr, mid + 1, r, x); 
  
        // Else the element can only be present 
        // in right subarray 
        return binarySearch(arr, l, mid - 1, x); 
    }
    else{
        if(r>=0){
        if(x==arr[r])
        return r+1;
        if(x>arr[r])
        return r+1;
        else
        return r+2;}
        else{
            if(x==arr[0])
        return 1;
        if(x>arr[0])
        return 1;
        else
        return 2;
        }
    } 
    // We reach here when element is not 
    // present in array 
    
} 
long climbingLeaderboard(long n,long a[],long m,long max) {

return binarySearch(a,0, n-1, max); 
}

int main(void)
{   
long n,m;
long scores[1000002], alice[1000002], a[1000002];

scanf("%ld",&n);

for(long i=0;i<n;i++)
scanf("%ld", &scores[i]);

scanf("%ld",&m);
for(long j=0;j<m;j++)
scanf("%ld", &alice[j]);

n = removeDuplicates(scores, n);
for(long j=0;j<m;j++)
a[j]=climbingLeaderboard(n,scores,m,alice[j]);

for(long j=0;j<m;j++)
printf("%ld\n",a[j]);
}
