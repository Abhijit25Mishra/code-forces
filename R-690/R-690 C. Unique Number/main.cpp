#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        if(n<=9){cout<<n<<endl;}
        else if(n>=10&&n<=17){int k=n-9;cout<<k<<9<<endl;}
        else if(n>=18&&n<=24){int k=n-9-8;cout<<k<<8<<9<<endl;}
        else if(n>=24&&n<=30){int k=n-9-8-7;cout<<k<<7<<8<<9<<endl;}
        else if(n>=31&&n<=35){int k=n-9-8-7-6;cout<<k<<6<<7<<8<<9<<endl;}
        else if(n>=36&&n<=39){int k=n-9-8-7-6-5;cout<<k<<5<<6<<7<<8<<9<<endl;}
        else if(n>=40&&n<=42){int k=n-9-8-7-6-5-4;cout<<k<<4<<5<<6<<7<<8<<9<<endl;}
        else if(n>=43&&n<=44){int k=n-9-8-7-6-5-4-3;cout<<k<<3<<4<<5<<6<<7<<8<<9<<endl;}
        else if(n>=45&&n<=45){int k=n-9-8-7-6-5-4-3-2;cout<<k<<2<<3<<4<<5<<6<<7<<8<<9<<endl;}
        else {cout<<-1<<endl;}
    }
    return 0;
}
