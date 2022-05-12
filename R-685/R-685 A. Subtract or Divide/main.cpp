#include <iostream>
#include <cmath>

using namespace std;

int is_prime(long long int a){
    long long int k=0;
    long long int l=0;
    for (long long int i=1;i<a;i++){
        if(a%i==0){k++;l=i;}
    }
    return k;
}
//If this gives value 1 then the number is prime
//other wise it is composite.

int largest_factor(long long int a){
    long long int k=0;
    long long int l=0;
    for (long long int i=1;i<a;i++){
        if(a%i==0){k++;l=i;}
    }
    return l;
}
//Just returns the largest factor of the input.

int main_prob(long long int a,long long int x){
    long long int k=is_prime(a);
    long long int l=largest_factor(a);

    if ((k!=1)||(a%2==1)){a=(a/l);x++;x=main_prob(a,x);}
    else if (a==1){a=0;}
    else if (k==1){
        a--;
        x++;
        if(a==1){a=1;}
        else{x=main_prob(a,x);}
        }
    return x;
}
//what is asked in the question.


//all these 3 functions are not required,I AM STUPID!!!
//i will keep trying.


//                       https://codeforces.com/contest/1451/problem/A
int main()
{
    cout<<"Enter an number :"<<endl;
    
    int t;
    cin>>t;
    while(t--){
        long long int n,a,b;
        cin>>n;
        if(n==1){a=0;}
        else if(n==2){a=1;}
        else if(n==3){a=2;}
        else if(n%2==0){a=2;}
        else if(n%2!=0){a=3;}
        cout<<a<<endl;
    }
    return 0;
}
