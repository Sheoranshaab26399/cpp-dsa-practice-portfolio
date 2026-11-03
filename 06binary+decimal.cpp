//decimal to binary conversion of +ve numbers

//approach  & 1 + >> 1

#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    float ans=0;
    int i=0;
    while(n!=0){
        int bit = n&1;
        ans = (bit * pow(10,i))+ans;
        n=n>>1;
        i++;
    }
    cout<<ans;
}

//approach % 2 + / 2

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;
    float ans = 0;
    int i = 0;
    while (n != 0)
    {
        int bit = n % 2;
        ans = (bit * pow(10, i))+ans;
        n = n / 2;
        i++;
    }
    cout << ans;
}

//isme ek dikkat h - float bade number prr jakrr less precise hojayega
//jaise ki n=1023 , so do this ->

#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the Decimal value: ";
    cin >> n;
    int ans = 0;
    int place = 1;  // start from units place
    while(n != 0) {
        int bit = n % 2;
        ans = (bit*place) + ans;
        n = n / 2;
        place = place*10;
    }
    cout << "Binary is: " << ans;
}


//decimal to binary conversion of -ve numbers

//There are multiple ways to do it-
//"& 1 + >> 1" ------- only for +ve
//"% 2 + / 2"  ------- only for +ve
//Loop from 31 to 0 ------- -ve and +ve #Manual way
//bitset<> ----------- -ve and +ve #Best way to see stored binary
//Cast to unsigned and use loop (String) ------ -ve and +ve #Shows 2’s complement

// negative decimal to binary (32 bits)
#include<bits/stdc++.h> // for including all standard libraries
using namespace std;
int main(){
    int n;
    cout<<"enter n: "<<endl;
    cin>>n;
    int i = 31;
    while(i >= 0){
        int bit = (n >> i) & 1;
        cout << bit;
        i--;
    }
    cout << endl;
    return 0;
}

// negative decimal to binary (8 bits)
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter n: "<<endl;
    cin>>n;
    int i = 7;
    while(i >= 0){
        int bit = (n >> i) & 1;
        cout << bit;
        i--;
    }
    cout << endl;
    return 0;
}

//bitset
#include <iostream>
#include <bitset>
using namespace std;
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    // Show 8-bit, 16-bit, 32-bit representations
    cout << "8-bit Binary   : " << bitset<8>(n) << endl;
    cout << "16-bit Binary  : " << bitset<16>(n) << endl;
    cout << "32-bit Binary  : " << bitset<32>(n) << endl;
}

//String
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    unsigned int num = (unsigned int)n; // Convert to unsigned to preserve bit pattern
    string binary = "";
    for (int i = 31; i >= 0; i--) {
        int bit = (num >> i) & 1;
        binary += to_string(bit);
    }
    cout << "Binary (32-bit): " << binary << endl;
}



//binary to decimal conversion of +ve numbers

//approach & 1 + >> 1 ------  can't use 

#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Binary value: ";
    cin>>n;
    int i=0;
    int ans=0;
    while(n!=0){
        int digit = n&1; 
        //yaha bit kyu nahi nikali , kunki bhai hame bit nahi nikalni, input too ek decimal number hi h 
        //tooo hume iski digits check krni h
        //iska matlab hum binary to decimal me n&1 and n>>1 ka use kar hi nahi sakte.
        if(digit==1){
            ans = ans + (digit*pow(2, i));
        }
        n=n>>1;
        i++;
    }
    cout<<"Decimal value is: "<<ans;
}
//So, use this->
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the binary value: ";
    cin>>n;
    int ans=0;
    int i=0;
    while(n!=0){
        int digit = n%10;
        if(digit==1){
            ans = ans+(digit*pow(2, i));
        }
        n=n/10;
        i++;
    }
    cout<<"Decimal: "<<ans;
}

//approach % 10 + / 10

#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter a binary number: ";
    cin>>n;
    float ans=0;
    int i=0;
    while(n!=0){
        int bit = n%10;
        ans = (bit * pow(2,i))+ans;
        n=n/10;
        i++;
        //for big numbers float will loose precision
    }
    cout<<"Decimal is: "<<ans;
}
// //instead use this ->
#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a binary number: ";
    cin >> n;
    int ans = 0;
    int base = 1;  // Tracks powers of 2
    while(n != 0) {
        int bit = n % 10;
        ans = bit*base + ans;
        base = base*2;
        n = n/10;
    }
    cout << "Decimal is: " << ans << endl;
}


//binary to decimal conversion of -ve numbers
//To learn yet!