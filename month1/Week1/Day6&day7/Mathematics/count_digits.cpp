#include<iostream>
#include <cstring>
#include <cmath>
#include<algorithm>
using namespace std;

//Count_digits
int naive(int n)
{
	int c=0,x=n;
	while(x>0)
	{
		x=x/10;
		c++;
	}
	return c;
}

int efficient(int n)
{
	return floor (log10(n)+1);
}





int main()
{
	int n;
	cin>>n;
	
	cout<<"Naive Approach  theta(c): "<<naive(n)<<endl;
    cout<<"Efficient Approach theta(1): "<<efficient(n)<<endl;
	



	return 0;
}

