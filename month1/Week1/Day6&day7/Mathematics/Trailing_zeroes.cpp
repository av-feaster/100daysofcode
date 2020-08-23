#include<iostream>
#include <cstring>
#include <cmath>
#include<algorithm>
#define ll long long int
using namespace std;

//Trailing zeroes
/*
 Idea is to count  no of 5's and 2's as prime factorization starts
 N0:of 5's will always be less than no of 2's
 
 there will be atleast floor(n/5) zeroes and 5's  as a factor
 
 trailing zeroes= floor(n/5)+floor(n/25)+floor(n/125)+.......................................

*/

int naive(int n)
{
	ll fact=1;
	for(ll i=2;i<=n;i++)
	{
		fact=fact*i;
	}
	int c=0;
	while(fact%10 == 0)
	{
		c++;
		fact=fact/10;
	}
	return c;
}

 int efficient_trailing_zeroes(int n)
{
	int res=0;
	for(int i=5;i<=n;i=i*5)
	{
		res=res+(n/i);
	}
	return res;
	
}



int main()
{
	int n;
	cin>>n;
	cout<<"Naive Approach  theta(c): "<<naive(n)<<endl;
    cout<<"Efficient Approach theta(1): "<<efficient_trailing_zeroes(n)<<endl;

   


	return 0;
}

