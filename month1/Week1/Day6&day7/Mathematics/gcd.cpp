#include<iostream>
#include <cstring>
#include <cmath>
#include<algorithm>
#define ll long long
using namespace std;

//GCD or HCF is a highest common factor of two or more given no is the highest no which exactly divides all the number
 ll int naive(int a ,int b)
 {
 	int res=min(a,b);
 	while(res>0)
 	{
 		if(a%res==0 and b%res==0)
 		{
 			break;
		 }
		 res--;
 		
	 }
	 return res;
 }
//EFFICIENT APPROACH
int efficient_gcd(int a,int b)
{
	while(a!=b)
	{
		if(a>b)
		{
			a=a-b;
		}
		else
		{
			b=b-a;
		}
	}
	return a;
}
//optimized Implementation
int optimized_efficient_gcd(int a,int b)
{
	if(b==0)
	{
		return a;
	}
	else
	{
		return optimized_efficient_gcd(b,a%b);
	}
}


int main()
{
   int a,b;
   cin>>a>>b;
   
   cout<<"Naive: "<<naive(a,b)<<endl;
   cout<<"Efficient: "<<efficient_gcd(a,b)<<endl;
   cout<<"Optimized efficient: "<<optimized_efficient_gcd(a,b)<<endl;
   


	return 0;
}

