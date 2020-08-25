//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends








//User function Template for C++

//Complete this function
int exactly3Divisors(int n)
{
    //Your code here
        bool a[n+1];
    memset(a, true, sizeof(a));
    
    a[0] = a[1] = false;
    
    for(int i=2;i<=sqrt(n);i++)
	{
        if(a[i] == true)
		{
            for(int j=i*i;j<=n;j+=i)
			{
                a[j] = false;
            }
        }
    }
    
    int c = 0;
    for(int i=1;i<=sqrt(n);i++)
	{
        if(a[i])
            c++;
    }
    
    return count;

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
        cout<<exactly3Divisors(N)<<endl;
    }
	return 0;
}  // } Driver Code Ends
