#include<bits/stdc++.h>  
#include<iostream>
using namespace std;
//write code here
//g++ 8_counting_sort.cpp
int main()
{

    int n;
    cin>>n;
    
    int output[n]={0}, a[n];
    cin>>a[0];
    int m=a[0];

    for (int i = 1; i < n; i++)
    {
        cin>>a[i];
        m= max(m,a[i]);
        
    }
    

    int count[m+1]={0}; 

    // Store count of each character  
    for(int i = 0; i <n; i++)
      count[a[i]]++;     //increase number count in count array.

   for(int i = 1; i<=m; i++)
      count[i] += count[i-1];     //find cumulative frequency


   for(int i = n-1; i>=0; i--) {
      output[--count[a[i]]] = a[i];
      //count[a[i]] -= 1; //decrease count for same numbers
   }

   for(int i = 0; i<n; i++) {
      a[i] = output[i]; //store output array to main array
   }

    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
        
    }
    
    

return 0;
}