#include<iostream>
#include<cmath>
using namespace std;
//write code here
//
bool chkroot(long long int ans,long long int  k,long long int  n)
{
    
    if(pow(ans,k)<=n)
    {
    return true;
    }
    return false;
    
}

//1000000000000000 10
long long int kthroot(long long int n,int k)
{
    long long int s=0;
    long long int e=n;
    long long int mid=0;
    long long int ans=0;
    while(s<=e)
    {
        mid=(s+e)/2;
       

        if(chkroot(mid,k,n))
        {
            ans=mid;
            s=mid+1;
        }
        else
        {
            e=mid-1;

            }
   }
        cout<<ans<<endl;
}

int main()
{   int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        int k;
    
        cin>>n>>k;
        kthroot( n, k);
    }
    
return 0;
}