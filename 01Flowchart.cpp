//Just draw flowchart for below programs, Code not required.

//------------------------------------------------------------------------------
#include <iostream>
using namespace std;
int main()
{
    int N, sum = 0, number;
    cout << "Give Input" << endl;
    cin >> N;
    for (number = 1; number <= N; number++)
    {
        sum = sum + number;
    }
    cout << sum;
}
//-----------------------------------------------------------------------------
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;
    int i=2;
    if(n==0||n==1){
        cout<<"Not a prime number"<<endl;
        return 0;
    }
    while(i<n){
        if(n%i==0){
            cout<<"Not a prime number"<<endl;        
            return 0;
        }
        i++;
    }
    cout<<"Prime number"<<endl;
    return 0;
}
//------------------------------------------------------------------------------