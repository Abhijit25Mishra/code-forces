#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k=0;
        cin>>n;
        int twos=0,ones=0;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==1){ones++;}
            else{twos++;}
            k+=a[i];
        }
        if(((twos%2==1 && ones%2==0)||(twos%2==0 && ones%2==0))&&(ones!=0&&twos!=1)){cout<<"YES"<<endl;}
        else {cout<<"NO"<<endl;}
    }
    return 0;
}
