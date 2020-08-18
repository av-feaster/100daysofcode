#include<iostream>
#include<algorithm>
using namespace std;
//write code here
//g++ painter.cpp

int paintable(int a[],int n, int k, int mid)
{
    int boards_painted=0;
    int worker_req=1;
    for(int i=0;i<n;i++)
    {
        
        boards_painted+=a[i];
        if(boards_painted>mid)
        {
            boards_painted=a[i];
            worker_req++;
        }
    }




    return worker_req;
}



int main()
{
    int k;
    int n;
    cin>>k>>n; //k-denotes no of painters and n no of boards
    int a[1000],sum=0;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        sum+=a[i];
    }

    int s=*max_element(a,a+n);
    int ans=0, e=sum;
    //sort(a,a+n);

    while(s<=e)
    {
       int  mid=(s+e)/2;

        int worker = paintable(a,n,k,mid);
        if(worker<=k)
        {
            ans=mid;
            e=mid-1;
        }
        else
        {
           s=mid+1;
        }
        
    }
    

    cout<<ans<<endl;




return 0;
}
