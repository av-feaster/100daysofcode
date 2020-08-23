#include<iostream>
#include <cstring>
#include <cmath>
#include<algorithm>
using namespace std;
//PALINDROME NO

bool isPal(int n)
{
	int rev=0;
	int temp=n;
	while(temp!=0)
	{
		int last_digit=temp%10;
		rev=rev*10+last_digit;
		temp=temp/10;
	}
	return (n==rev);
}

int main()
{ 
   int n;
   cin>>n;
   cout<<"N is Palindrome: "<<(isPal(n)?"true":"false")<<endl;
	



	return 0;
}

