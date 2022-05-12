#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        unsigned long long int w,h,n;
        cin>>w>>h>>n;
        int k=1,result1=0;
        while(w%2!=1 || h%2!=1){
            if(w%2==0){k=k*2;w=w/2;}
            else if(h%2==0){k=k*2;h=h/2;}

        }
        if(k>=n)
            {cout<<"YES"<<endl;}
        else  {cout<<"NO"<<endl;}

    }
    return 0;
}
