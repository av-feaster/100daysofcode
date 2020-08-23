#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


// Function to count number of Ones
// arr: input array 
// N: size of input array
bool search(long long int a[], long long int n, long  long int i ,long long int e)
{
	for(int j=i+1;j<n;j++)
	{
		if(a[j]==e)
		{
			return true;
		}
	}
	return false;    
}

// { Driver Code Starts.

int main()
{
    
    long long int n,d,c=0,i,j;
    cin>>n>>d;
    long long int a[n];
    for(i=0;i<n;i++)
    {
       cin>>a[i];
    }
    
     long long  int cur,t2,t3;
    
    for(i=0;i<n;i++)
    {
    	cur=a[i];
    	t2=cur+d;
    	t3=cur+(2*d);
    	if((search(a,n,i,t2)) && (search(a,n,i,t3)))
    	{
    		c++;
		}
	}
    cout<<c<<endl;
    
    
    return 0;
}  // } Driver Code Ends
