//------------------------------------------------------------------------------
#include<iostream>
using namespace std;
int main(){
    cout <<"Namaste Duniya"<<endl;
}
//------------------------------------------------------------------------------
#include<iostream>
using namespace std;
int main(){
    int a = 324;
    cout<<a<<endl;
    char a ='e';
    cout<<a<<endl; // Will give error - redefinition of 'a'
}
//------------------------------------------------------------------------------
#include<iostream>
using namespace std;
int main(){
    bool b1 = 1; // True ka T capital hone prr it gives error
    int a =23;
    int size_of_bool=sizeof(b1);
    int size_of_int = sizeof(a);
    cout<<"Size of bool is "<< size_of_bool <<" byte"<<endl;
    cout<<"Size of int is "<<size_of_int <<" byte"<<endl;
}
//------------------------------------------------------------------------------
#include<iostream>
using namespace std;
int main(){
    char ch=123456;
    cout<<ch<<'\n'; //will take 1 byte(char) and will print "@"(ASCII -> 64) with a warning of "overflow"
}
//------------------------------------------------------------------------------
#include<iostream>
using namespace std;
int main(){
    unsigned int a = 112;
    cout<<a<<endl;
    unsigned int b = -112;
    cout <<b<<endl;// will give a large number which is its decimal form ....WHY...FIND OUT??
}
//------------------------------------------------------------------------------
#include<iostream>
using namespace std;
int main(){
    int a =2,b =3;            //using bool data type...
    bool first = (a==b);
    bool second = (a>=b);
    bool third = (a<=b);
    bool fourth = (a!=b);
    cout<< first<<endl;   //output : 0
    cout<< second<<endl;  //output : 0
    cout<< third<<endl;   //output : 1
    cout<< fourth<<endl;  //output : 1
}
//-------------------------------------------------------------------------------