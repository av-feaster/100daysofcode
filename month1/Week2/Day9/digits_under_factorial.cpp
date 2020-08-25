// { Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends


//User function Template for C++

//You need to complete this function
long long int digitsInFactorial(int N)
{
    //Your code here
     long long int i;double dig=0;
     for ( i=2;i<=N;i++)
     {
         dig=dig+log10(i);
     }
     double digits= floor(dig)+1;
     return digits;
}

// { Driver Code Starts.

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        cout<<digitsInFactorial(N)<<endl;
    }
    return 0;
}
  // } Driver Code Ends
