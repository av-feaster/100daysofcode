#include<iostream>
#include <cstring>
#include <cmath>
#include<algorithm>
using namespace std;

int find_peak(int a[],int n)
{
	int s=0;
	int e=n-1;
	while (s<=e)
	{
		int mid = (e+s)/2;
		if((mid==0 || a[mid-1]<=a[mid])&& (mid==n-1 || a[mid]>=a[mid+1]))
		{
			
			//cout<<mid<<endl;
			return mid;
		}
	    
		if(mid>0 &&a[mid-1]>=a[mid])
		{
			e=mid-1;
		}
		else
		{
			s=mid+1;
		}
   }
	
	return -1;
}


int main()
{
	//find a peak element
	
	int n;
	int a[100000];
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	cout<<"Peak_element_place"<<find_peak(a,n)<<endl;
}

