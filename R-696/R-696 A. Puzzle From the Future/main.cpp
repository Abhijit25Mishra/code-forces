#include <iostream>
#include <sstream>

using namespace std;
/*
int give_n(int x){
    int res=0;
    for(int i=0;i<x;i++){
        if(i%2==0){res+=1;}
    }
}
*/

int NumDigits(int x)
{
    x = abs(x);
    return (x < 10 ? 1 :
        (x < 100 ? 2 :
        (x < 1000 ? 3 :
        (x < 10000 ? 4 :
        (x < 100000 ? 5 :
        (x < 1000000 ? 6 :
        (x < 10000000 ? 7 :
        (x < 100000000 ? 8 :
        (x < 1000000000 ? 9 :
        10)))))))));
}
int noice(int number,int n)
{
	int result = 0;

	if ( 0 == number)
		{
		 cout << "0";
		}

	number = number / pow(10,(n-1.0));
	result = number % 10;


	cout << "\nThe value of this digit is: " << result << endl;
	system("Pause");

}


int main()
{
    int t;
    cin>>t;
    while(t--){
        int x=0,y=0,z=0;
        string a,b;
        cin>>x;              //length
        cin>>y;             // b as in the question



      /*  cin>>a>>b;

        stringstream num1(a);
        stringstream num2(b);
        int x,y;
        num1>>x;
        num2>>y;
        cout<<a+b<<endl;
        cout<<x+y<<endl;        */
    }
    return 0;
}
