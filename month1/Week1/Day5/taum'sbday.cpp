//hackerrank

#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    long long t,b,w,bc,wc,z,ans;
    cin >>t;
    while(t--){
        cin>>b>>w;
        cin>>bc>>wc>>z;
        ans =(w*min(wc,bc+z))+(b* min(bc,wc+z));
        
        cout<<ans<<"\n";
    }
    return 0;
}
