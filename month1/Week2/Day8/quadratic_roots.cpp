// { Driver Code Starts
//Initial Template for C++
/* C++ program to find roots of a quadratic equation */
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


//User function Template for C++

//You need to complete this function

void quadraticRoots(int a,int b, int c)
{
   
  if(a == 0) //it's linear, not quadratic
    return;
    
    int d = b*b - 4*a*c; //d for discriminant
    double sqrt_d = sqrt(abs(d));
    
    if(d > 0){
        int rootone = floor((-b + sqrt_d) / (2* a));
        int roottwo = floor((-b - sqrt_d) / (2 * a));
        rootone<roottwo?cout<<roottwo<<" "<<rootone:cout<< rootone<<" "<<roottwo;
    }
    else if(d==0)
    {
      double rootone=(-b/(2*a));
      cout<<rootone<<" "<<rootone;
    }
   else
   {
       cout<<"Imaginary";
   }
   
   
   
   // Your don't need to printline
   // It will automatically be 
   // handled by driver code
}



// { Driver Code Starts.

int main() {
	int T; 
	//input number of testcases
	cin>>T; 
	
	while(T--)
	{
	    int a, b, c; 
	    //Input a, b, and c
	    cin>>a>>b>>c; 
	    
	    quadraticRoots(a,b,c);
	    cout<<endl;
	    
	}
	return 0;
}  // } Driver Code Ends
