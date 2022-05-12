#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k=0;
        cin>>n;
        char a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            if (a[i]==')'){k++;}
            else {k=0;}
        }
        if(k>(n/2)){cout<<"Yes"<<endl;}
        else{cout<<"No"<<endl;}
    }
    return 0;
}
