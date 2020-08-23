#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


// Function to count number of Ones
// arr: input array 
// N: size of input array
int countOnes(int a[], int n)
{
    int s=0;
    int e=n-1;
   while(s<=e)
   {
       int mid=(s+e)/2;
       if(a[mid]==1 && a[mid+1]==0)
       {
           return mid+1;
           
       }
       else if(a[mid]==0)
       {
           e=mid-1;
       }
       
       else
       {
           //ans=mid;
           s=mid+1;
       }
       
   }
    

    
}

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n;
        cin>>n;
        int *arr = new int[n]; 
        for(int i = 0; i < n; i++)
            cin>>arr[i];
        
        cout <<countOnes(arr, n)<<endl;
    }
    return 0;
}  // } Driver Code Ends
