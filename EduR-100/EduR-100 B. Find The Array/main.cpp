#include <iostream>

using namespace std;

int mod(int a){
    if(a>0){return a;}
    else {return -a;}
}


int main()
{
    int t;
    cin>>t;
    int n;
    while(t--){
        cin>>n;
        unsigned long long int sum_a=0;
        unsigned long long int a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum_a+=a[i];
        }
        unsigned long long int avg_a=(sum_a/n);
        for(int i=0;i<n;i++){
            b[i]=avg_a;
            cout<<b[i]<<" ";
        }
/*        int k;
          for(int i=0;i<n;i++){
            k+=mod(a[i]-b[i]);
            }

           if((2*k)>sum_a){cout<<"hell yeah"<<endl;}
*/
    }
    return 0;
}
