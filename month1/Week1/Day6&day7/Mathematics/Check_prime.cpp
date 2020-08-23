#include<iostream>
#include <cstring>
#include <cmath>
#include<algorithm>
#define ll long long
using namespace std;

bool isPrime_Naive(int n)
{
	if(n==1)
	{
		return false;
	}
	for(int i=2;i<n;i++)
	{
		if(n%i==0)
		{return false;
		}
	}
	return true;
	//Big0(n) time complexity
	// for i=2 it works because it doesn't goes in for loop
	//same as for n=3
}
//EFFICIENT APPROACH
bool isPrime_Eff(int n)
{
	if (n==1)
	{ return false;
	}
	for(int i=2;i*i<=n;i++)
	{
		if(n%i==0)
		{
			return false;
		}
	}
	return true;
}

bool isPrime_Eff_optimized(int n)
{
	if (n==1)
	{ return false;
	}
	if(n==2 || n==3)
	{
		return true;
	}
	if(n%2==0 || n%3==0)
	{
		return false;
	}
	for(int i=5;i*i<=n;i=i+6)
	{
		if(n%i==0 || n%(i+2)==0)
		{
			return false;
		}
	}
	return true;
}

int main()
{
   int n;
   cin>>n;
   
   cout<<(isPrime_Naive(n)?"True":"False")<<endl;
   cout<<(isPrime_Eff(n)?"True":"False")<<endl;
   cout<<(isPrime_Eff_optimized(n)?"True":"False")<<endl;
   


	return 0;
}

