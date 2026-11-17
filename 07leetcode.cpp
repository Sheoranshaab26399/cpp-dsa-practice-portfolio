//Q 1281. Subtract the Product and Sum of Digits of an Integer.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n "<<endl;
    cin>>n;
    int product=1;
    int sum =0;
    while(n!=0){
        int digit = n%10;
        product = product*digit;
        sum = sum + digit;
        n=n/10;
    }
    cout<<(product-sum)<<endl;
}

//Q 191. Number of 1 Bits (Hamming weight)
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    int count = 0;
    while(n!=0){
        count = count + (n&1);
        n = n>>1;
    }
    cout<<count<<endl;
}

//-----------------OR---------------------

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    int count = 0;
    while(n!=0){
        if(n&1){
            count++;
        }
        n=n>>1;
    }
    cout<<count<<endl;
}

//Q 7. Reverse Integer
//123 -> 321 twist -> 23456789 -> 98765432 , but limit is "-2^32 to 2^31-1" 
#include<iostream>
#include<climits>
using namespace std;
int main (){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int ans =0;
    while(n!=0){
        int digit = n%10;
        if(ans>INT_MAX/10 || ans<INT_MIN/10){
            return 0;
        }
        ans = (ans*10) + digit;
        n=n/10;
    }
    cout<<ans;
    return 0;
}

//Q 1009. Compliment of base 1-=0 integer
//5 as input i.e, 101 , will give 2 as output i.e, 010
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int m=n;
    int mask=0;
    if(n==0){
        cout<<1;
        return 0; //this is an edge case, Must consider!
    }
    while(m!=0){
        mask = (mask << 1) | 1;
        m=m>>1;
    }
    int ans = (~n)&mask;
    cout<<ans;
}


//Q 231. Power of two
//Given an integer n, return true if it is power of 2, otherwise return false
#include<iostream>
using namespace std;
bool isPowerOfTwo(int n){
        return n > 0 && (n & (n - 1))==0;
    }
int main(){
    int n;
    cout << "Enter the value of n: " << endl;
    cin >> n;
    if (isPowerOfTwo(n)) {
        cout << n << " Yes it is" << endl;
    } 
    else {
        cout << n << "No it is not" << endl;
    }
}

// Note : In C++, we can't create nested functions!

//---------OR-----------

//if no. of set bits is equal to 1 then it is a power of 2!!! #do youself

//---------OR-----------
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    for(int i=0; i<=30; i++){
        int ans = pow(2,i);
        if(ans==n){
            cout<<"Yes it is";
            return true;
        }
    }
    cout<<"No it is not";
    return false;
}
//---------OR------------
#include<iostream>
#include<climits>
using namespace std;
bool isPowerOfTwo(int n){
        int ans=1;
        for(int i=0; i<=30; i++){
            if(ans==n){
                return true;
            }
            if(ans<(INT_MAX/2)){
                ans = ans*2;
            }
        }
        return false;
    }
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    isPowerOfTwo(n);
}