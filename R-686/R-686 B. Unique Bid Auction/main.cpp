#include <iostream>

using namespace std;

int main()
{
    int a;
    cin>>a;
    while(a--){
        int k;
        cin>>k;
        int a[k],b;
        for(int i=0;i<k;i++){
            cin>>a[i];
        }

        for(int x=0;x<k;x++){
            for(int y=0;y<k;y++){
                if(a[x]==a[y]){}
            }
        }
    }
    return 0;
}
