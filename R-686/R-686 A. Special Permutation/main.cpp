#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--){
        int k;
        cin>>k;
        if(k<3){cout<<2<<" "<<1<<endl;}
        else {
            for(int i=2;i<=k;i++){
                cout<<i<<" ";
            }
            cout<<1<<endl;
        }
    }
    return 0;
}
//see the question at this link
//                                                  https://codeforces.com/contest/1454/problem/A
