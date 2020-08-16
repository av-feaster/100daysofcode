#include<iostream>
using namespace std;

bool CanPlaceCows(int a[],int n,int c,int min_sep)
{
	int last_cow= a[0];
	//placing the first cow int the first stall
	
	int cnt=1;
	
	for(int i=1;i<n;i++)
	{
		if(a[i]-last_cow >=min_sep)
		{
			cnt++;
			last_cow=a[i];
			if(cnt==c)
			{
				return true;
			}
		}
	}
	return false;
}

int main()
{
	int t;
	int n,c;
	int a[100000];
	
	cin>>t;
	
	while(t--)
	{
	
		cin>>n>>c;
		
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		
		//binarysearch_algorithm
		
		int s=a[0];
		int e=a[n-1];
		int ans=0;
		
		while(s<=e)
		{ 
		    int mid=(s+e)/2;
			bool check =CanPlaceCows(a,n,c,mid);
			
			if(check)
			{
				ans=mid;
				s=mid+1;
			}
			else{
				e=mid-1;
			}
		}
		cout<<ans<<endl;
    }
    
}
