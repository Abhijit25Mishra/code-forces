#include <iostream>

using namespace std;

int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        unsigned long long int a,b,c;
        cin>>a>>b>>c;
        long long int k=((a+b+c)/9);
        if(((a+b+c)%9==0)&&(a+b+c>8)&&(a>=k&&b>=k&&c>=k)){cout<<"YES"<<endl;}
        else {cout<<"NO"<<endl;}
    }
    return 0;
}
