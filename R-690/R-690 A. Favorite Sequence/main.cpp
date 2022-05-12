#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
            cout<<endl;
        int n;
        cin>>n;
        unsigned long long int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        if (n%2==0){
            for(int i=0;i<(n/2);i++){
                cout<<a[i]<<" "<<a[n-1-i]<<" ";
            }
        }
        else if(n==1){cout<<a[0];}
        else if(n%2!=0){
            for(int i=0;i<((n-1)/2);i++){
                cout<<a[i]<<" "<<a[n-1-i]<<" ";
                if(i==(((n-1)/2)-1)){cout<<a[((n+1)/2)-1];}
            }
        }
    }
    return 0;
}
