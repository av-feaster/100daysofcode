#include<iostream>
#include <cstring>
#include <cmath>
#include<algorithm>
#define ll long long
using namespace std;


//NAIVE APPROACH
int lcm_naive(int a ,int b)
{
	int res= max(a,  b);
	while(true)
	{
		if(res%a==0 and res%b==0 )
		{
			return res;
		}
		res++;
	}
	return res;
	// 0(a*b - min(a,b))
}


//EFFICIENT APPPROACH

int gcd(int a,int b)
{
	if(b==0)
	{
		return a;
	}
	else
	{
		return gcd(b,a%b);
	}
}

int lcm_eff(int a,int b)
{
	return ((a*b)/gcd(a,b));
	//time-Complexity Big0(log min(a,b))
}

int main()
{
	int a,b;
   cin>>a>>b;
   
   cout<<"Naive: "<<lcm_naive(a,b)<<endl;
   cout<<"Efficient: "<<lcm_eff(a,b)<<endl;
 
	



	return 0;
}

