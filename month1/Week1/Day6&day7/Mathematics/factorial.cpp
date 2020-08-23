#include<iostream>
#include <cstring>
#include <cmath>
#include<algorithm>
#define ll long long 
using namespace std;

//Factorial of a number

long int iterative(long long int n)
{
	ll int res=1;
	//Efficient Approach
	for(ll  int i=2;i<=n;i++)
	{
		res=res*i;
	}
	return res;
}

int recursive( ll int n)
{
	if(n==0)
	{
		return 1;
	}
	return n * recursive(n-1);
	
	// it takes time complexity theta(n) and space complexity theta(n)
}
int main()
{
	//program to find factorial of a number
	ll int n;
	cin>>n;
	cout<<"Result iterative approach "<<iterative(n)<<endl;
	cout<<"Result recursive approach "<<recursive(n);
	return 0;
}

