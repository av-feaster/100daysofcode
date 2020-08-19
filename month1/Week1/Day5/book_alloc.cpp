#include<iostream>
#include<climits>
using namespace std;

//write code here
//g++ 3_book_alloc.cpp

bool is_possible(int a[],int n,int mid,int m)
{
    int student=1;
    int p=0;
    for(int i=0;i<n;i++)
    {
        if(p+a[i]>mid)
        {
            student++;
            p=a[i];
            if (student>m)
            {
                return false;
            }
        }
        else{
               p=p+a[i];
        }
    }
    return true;
}

int binary(int a[],int n, int m, int sum)
{
    int s= a[n-1];
    int e= sum;
    int mid=0,ans=INT_MAX;
    while(s<=e)
    {   
        int mid=(s+e)/2;
        if(is_possible(a,n,mid,m))
        {
            int curr=mid;
            ans=min(ans,curr);
            e=mid-1;
        }
        else
        {
          s=mid+1;  
        }
    }
    return ans;

}

int main()
{
 int t;
 cin>>t;
 while(t--)
 {
  int n;
  cin>>n;
   int m;
  cin>>m;
  int a[n];
  int sum=0;
  for(int i=0;i<n;i++)
  {
      cin>>a[i];
      sum=sum+a[i];
  }
 
  cout<< binary(a,n,m ,sum)<<endl;
 }


return 0;
}