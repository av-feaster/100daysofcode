#include<iostream>
using namespace std;


int main()
{
	int n;
	cin>>n;
	double ans,p=3;
    int s=0;
    int e=n-1;
    
    while(s<=e)
    {
    	int mid=(s+e)/2;
    	
    	if(mid*mid<=n)
    	{
    		 ans=mid;
    		s=mid+1;
		}
		else 
		{
			e=mid-1;
		}
	}
	cout<<ans<<endl; //real part of squareoot.
	/* Decimal part of square root */
	
	float inc=0.1;
	
	for(int times=1;times<=p;times++)
	{
		while (ans*ans<=n)
		{
			ans=ans+inc;
		}//overshoot the value
		
		ans=ans-inc;
		inc=inc/10;
	}
	cout<<ans<<endl;
}

