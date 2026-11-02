//----------------------------------------------------------------
#include<iostream>
using namespace std;
int main(){
    int a=2;
    int b =3;
    cout<<(a&b)<<endl;// & -> bitwise AND operator, && -> logical AND operator
    cout<<(a|b)<<endl;// | -> bitwise OR operator, || -> logical OR operator
    cout<<~a<<" "<<~b<<endl;// ~ -> bitwise NOT operator
    cout<<(a^b)<<endl;// ^ -> bitwise XOR operator
    cout<<(19>>2)<<endl;// >> -> right shift operator
    cout<<(19>>1)<<endl;
    cout<<(21<<1)<<endl;// << -> left shift operator
    cout<<(21<<2)<<endl;
}

//----------------------------------------------------------------

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;
    int a;
    int sum =0;
    cout<<"The sum of the first "<<n<<" numbers is : "<<endl;
    for(a=1; a<=n; a++){
        sum = sum + a;
        cout<<a;
        if(a!=n){
            cout<<"+";
        }
        else{
            cout<<"=";
        }
    }
    cout<<sum;
}

//-----------------------------------------------------------------

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    int a=0;
    int b=1;
    //cout<<"Fibonacii series: "<<a<<" "<<b<<" ";
    for(int i=1; i<=n; i++){
        int c = a+b;
        cout<<a;
        a=b;
        b=c;
        cout<<", ";
    }
}

//-----------------------------------------------------------------

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n "<<endl;
    cin>>n;
    int i=2;
    if(n==0 || n==1){
        cout<<n<<" is not a prime number";
    }
    for(;i<n;i++){
        if(n%i==0){
            cout<<n<<" is not a prime number";
            goto end;
        }
    }
    cout<<n<<" is a prime number";
    end:
    return 0;
}

//-----------OTHERWISE------------

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    int i=2;
    bool isPrime=1;
    if(n==0 || n==1){
        cout<<"Not a prime number";
        return 0;
    }
    for(i; i<n;i++){
        if(n%i==0){
            isPrime =0;
            break;//befaltu me check krega nahi tooo, isiliye lagaya h break;
        }
    }
    if(isPrime==1){
        cout<<n<<" is a prime number";
    }
    else{
        cout<<n<<" is not a prime number";
    }
}

//-----------------------------------------------------------------

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int a=0; a<=n; a++){
        cout<<"Hello"<<endl;
        cout<<"Hi"<<endl;
        continue;
        cout<<"Reply tooo krde"<<endl;
    }
}

//-----------------------------------------------------------------

#include<iostream>
using namespace std;
int main(){
    for(int i=0; i<=15; i+=2){
        cout<<i<<" ";
        if(i&1){
            continue;
        }
        i++;
    }
}

//-----------------------------------------------------------------

#include<iostream>
using namespace std;
int main(){
    for(int i=0; i<5;i++){
        for(int j=i; j<=5;j++){
            cout<<i<<" "<< j <<endl;
        }
    }
}

//-----------------------------------------------------------------

//Variables and their scopes------
#include<iostream>
using namespace std;
int main(){
    int a=2;
    cout<<a<<endl;
    if(true){
        int a=3;
        cout<<a<<endl;
    }
    cout<<a;
    int a=4;
    cout<<a;//redeclaration nahi kar sakte C++ me
}

//Operator Precedence ---------
//no need to learn, just use brackets :)