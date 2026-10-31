//------------------------------------------------------------------------------
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the value of a and then b"<<endl;
    cin>>a>>b;  // 2 inputs aise liye jate hai...
    cout<<"The value of a and b is "<<a<<" and "<<b<<" respectively."<<endl; //read how it's written. :-}
}
//------------------------------------------------------------------------------
#include<iostream>
using namespace std;
int main(){
    float a;
    cout<<"Enter the value of a "<<endl;
    cin>>a;
    int displayednumber;
    float fractionalpart = a - int(a);
    if(a>=0){
        if(fractionalpart<0.5){
            displayednumber = int(a);
        }
        else{
            displayednumber = int(a) +1;
        }
    }
    else{
        if(fractionalpart>-0.5){
            displayednumber = int(a);
        }
        else{
            displayednumber = int(a)-1;
        }
    }
    if(displayednumber>0){
        cout<<displayednumber<<" is a +ve number";
    }
    else if(displayednumber<0){
        cout<<displayednumber<<" is a -ve number";
    }
    else{
        cout<<displayednumber<<" is Zero";
    }
    return 0;
}
//------------------------------------------------------------------------------
#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Give your input"<<endl;
    cin>>ch;
    if(97<=ch<=122){
        cout<<ch<<" is a lower case";
    }
    else if(65<=ch<=90){
        cout<<ch<<" is an upper case";
    }
    else{
        cout<<"Invalid input";
    }
}
//------------------------------------------------------------------------------
#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the value of a "<<endl;
    a=cin.get();//cin.get() reads a single character and returns its ASCII value
    cout<<"value of a is: "<<a<<endl;
}
//------------------------------------------------------------------------------
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Give Input"<<endl;
    cin>>n;
    if(n<=1){
        cout<<n<<" is not a prime number"<<endl;
        return 0;
    }
    int i=2;
    while(i<=n/2){
        if(n%i==0){
            cout<<n<<" is not a prime number"<<endl;
            return 0;
        }
        i++;
    }
    cout<<n<<" is a Prime number"<<endl;
    return 0;
}
//------------------------------------------------------------------------------
// Simple Star Square Pattern
// * * *
// * * *
// * * *
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n for the pattern : "<<endl;
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){ 
            cout<<" *";
        }
        cout<<endl;
    }
}

//------------------------------------------------------------------------------

// User Defined Matrix Input & Output
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the order of A x A matrix you want to print."<<endl;
    cin>>n;
    int matrix[100][100];

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout<<"Enter the element at "<<i<<", "<<j<<" -> ";
            cin>>matrix[i][j];
        }
        cout<<endl;
    }

    cout<<"matrix:"<<endl;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}