//Dono cases me Control fall through horaha h!
// #include<iostream>
// using namespace std;
// int main(){
//     int num = 1;
//     char ch ='a';
//     switch(num){
//         case 1: cout << "It's a two."<<endl;
//                 // break;
//         case '1': cout <<"It's a one."<<endl;
//                 // break;
//         default: cout<<"Get lost"<<endl;
//     }
// }
//|||||||||||||||||||||||||||||OR|||||||||||||||||||||||||||||
// #include<iostream>
// using namespace std;
// int main(){
//     int num = 1;
//     char ch ='a';
//     switch(num){
//         case '1': cout <<"It's a one."<<endl;
//                 // break;
//         case 1: cout << "It's a two."<<endl;
//                 // break;
//         default: cout<<"Get lost"<<endl;
//     }
// }
//------------------------------------------------------------------------------------
//use of continue in switch is invalid
//------------------------------------------------------------------------------------
// #include<iostream>
// using namespace std;
// int main(){
//     int num = 1;
//     switch(num*2){ //Switch ke andrr expression
//         case 1: cout <<"Hi";
//         break;
//         case 2: cout<<"Hey";
//         break;
//         default:cout<<"Invalid";
//     }
// }
//-------------------------------------------------------------------------
// #include <iostream>
// using namespace std;
// int main() {
//     int choice;
//     while (true) {  // infinite loop
//         cout << "\nMenu:\n";
//         cout << "1. Say Hello\n";
//         cout << "2. Say Bye\n";
//         cout << "3. Exit\n";
//         cout << "Enter your choice: ";
//         cin >> choice;
//         switch (choice) {
//             case 1:
//                 cout << "Hello!\n";
//                 break;  // breaks out of switch
//             case 2:
//                 cout << "Bye!\n";
//                 break;  // breaks out of switch
//             case 3:
//                 cout << "Exiting loop...\n";
//                 // exit from the infinite loop
//                 return 0;//breaks out of infinite loop #terminates whole program.
//                 // or use break from loop if needed
//             default:
//                 cout << "Invalid choice!\n";
//         }
//     }
//     return 0;
// }
//||||||||||||||||||||||||||||||||||||OR||||||||||||||||||||||||||||||||||||||
// #include <iostream>
// #include <cstdlib>  // for exit()
// using namespace std;
// int main() {
//     int choice;
//     while (true) {  // infinite loop
//         cout << "\nMenu:\n";
//         cout << "1. Say Hello\n";
//         cout << "2. Say Bye\n";
//         cout << "3. Exit Program\n";
//         cout << "Enter your choice: ";
//         cin >> choice;
//         switch (choice) {
//             case 1:
//                 cout << "Hello!\n";
//                 break;
//             case 2:
//                 cout << "Bye!\n";
//                 break;
//             case 3:
//                 cout << "Exiting the program using exit()...\n";
//                 exit(0);  // terminates the entire program
//             default:
//                 cout << "Invalid choice!\n";
//         }
//     }
//     return 0;  // this will never be reached if exit() is called
// }
//--------------------------------------------------------------------------
//Calculator
// #include<iostream>
// using namespace std;
// int main(){
//     int a, b;
//     char op;
//     cout<<"Enter two integers a and b: ";
//     cin>>a>>b;
//     cout<<"Enter the operation u want to perform: ";
//     cin>>op;
//     switch(op){
//         case '+': 
//                 cout<<"ANS: "<<a+b<<endl;
//                 break;
//         case '-': 
//                 cout<<"ANS: "<<a-b<<endl;
//                 break;
//         case '*': 
//                 cout<<"ANS: "<<a*b<<endl;
//                 break;
//         case '/': 
//                 if(b==0){
//                         cout<<"Error: Division by zero!"<<endl;
//                 }
//                 else{
//                     cout<<"ANS: "<<a/b<<endl;
//                 }
//                 break;
//         case '%': 
//                 if(b==0){
//                         cout<<"Error: Modulo by zero!"<<endl;
//                 }
//                 else{
//                     cout<<"ANS: "<<a%b<<endl;
//                 }
//                 break;
//         default: 
//                 cout<<"Invalid Input";
//     }
//     return 0;
// }
//-------------------------------------------------------------------------
//how many notes of ₹100, ₹50, ₹20, and ₹1 you need to make up a total of any given amount!
// #include <iostream>
// using namespace std;
// int main() {
//     int amount;
//     cout << "Enter the total amount: ";
//     cin >> amount;
//     int note100 = 0, note50 = 0, note20 = 0, note1 = 0;
//     int i=1;
//     while (i<=4) {
//         switch (i){
//             case 1:
//                 note100 = amount/100;
//                 amount = amount%100;
//                 break;
//             case 2:
//                 note50 = amount/50;
//                 amount = amount%50;
//                 break;
//             case 3:
//                 note20 = amount/20;
//                 amount = amount%20;
//                 break;
//             case 4:
//                 note1 = amount;
//                 break;
//             default:
//                 cout << "Invalid case" << endl;
//         }
//         i++;
//     }
//     cout<<note100<<endl;
//     cout<<note50<<endl;
//     cout<<note20<<endl;
//     cout<<note1<<endl;
//     return 0;
// }
//||||||||||||||||||||||||||||||||||||||||||||OR||||||||||||||||||||||||||||||||||||
//if don't want to use loop!   =>
// #include <iostream>
// using namespace std;
// int main() {
//     int amount;
//     cout << "Enter the total amount: ";
//     cin >> amount;
//     int note100 = 0, note50 = 0, note20 = 0, note1 = 0;
//     //Use a single switch with intentional fall-through
// //Ye fall through concept prr dhyan dena
//     switch (1) {
//         case 1:
//             note100 = amount / 100;
//             amount = amount % 100;
//         case 2:
//             note50 = amount / 50;
//             amount = amount % 50;
//         case 3:
//             note20 = amount / 20;
//             amount = amount % 20;
//         case 4:
//             note1 = amount;
//             amount = 0;
//             break;
//         default:
//             cout << "Invalid" << endl;
//     }
//     cout << "100 : " << note100 << endl;
//     cout << "50  : " << note50 << endl;
//     cout << "20  : " << note20 << endl;
//     cout << "1   : " << note1 << endl;
//     return 0;
// }
//||||||||||||||||||||||||||||||||||||||||||||OR|||||||||||||||||||||||||||||||||||||||||||
//Best Case -->>
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     int note100 =0, note50=0, note20=0, note1=0;
//     note100=n/100;
//     n=n%100;

//     note50=n/50;
//     n=n%50;

//     note20=n/20;
//     n=n%20;

//     note1=n;

//     cout<<note100<<endl;
//     cout<<note50<<endl;
//     cout<<note20<<endl;
//     cout<<note1<<endl;
//     return 0;
// }
//---------------------------------------------------------------------

//FUNCTIONS -->>

// #include<iostream>
// using namespace std;
// int power(int a, int b){
//     int ans=1;
//     for(int i=1; i<=b; i++){
//         ans = ans*a;
//     }
//     return ans; //Ye krna kyu zaruri hota h , Check !
// }
// int main(){
//     int a,b;
//     cout<<"Enter the value of a and b: ";
//     cin>>a>>b;
//     int ans=power(a,b);
//     cout<<ans;
//     return 0;
// }
//-----------------------------------------------------------------------------------
//Check Even Odd
// #include<iostream>
// using namespace std;
// bool isEven(int a){
//     if(a&1){
//         return 0;
//     }
//     else{
//         return 1;
//     }
// }
// int main(){
//     int num;
//     cout<<"Enter the number to check"<<endl;
//     cin>>num;
//     if(isEven(num)){
//         cout<<"Even";
//     }
//     else{
//         cout<<"Odd";
//     }
// }
//--------------------------------------------------------------------------------------------
//Find nCr
// #include<iostream>
// using namespace std;
// int factorial(int n){
//     int fact =1;
//     for(int i = 1; i<=n; i++){
//         fact =fact*i;
//     }
//     return fact;
// }
// int nCr(int n, int r){
//     int numer= factorial(n);
//     int denom = factorial(r)*factorial(n-r);
//     int ans = numer/denom;
//     return ans;
// }
// int main(){
//     int n, r;
//     cout<<"Enter the value of n and r"<<endl;
//     cin>>n>>r;
//     int sol=nCr(n, r);
//     cout<<sol;
// }
//-------------------------------------------------------------------------------------------
//Print Counting
// #include<iostream>
// using namespace std;
// void printcounting(int n){
//     for(int i=0; i<=n; i++){
//         cout<<i<<endl;
//     }
// }
// int main(){
//     int n;
//     cout<<"Enter value: ";
//     cin>>n;
//     printcounting(n);
//     return 0;
// }
//---------------------------------------------------------------------------------------------
//Checking Prime number
// #include<iostream>
// using namespace std;
// bool isPrime(int n){
//     if(n==0 || n==1){
//         return false;
//     }
//     for(int i=2; i<=n/2; i++){
//         if(n%i==0){
//             return 0;
//         }
//     }
//     return 1;
// }
// int main(){
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     if(isPrime(n)){
//         cout<<"is Prime";
//     }
//     else{
//         cout<<"Not prime";
//     }
// }
//--------------------------------------------------------------------------------------------
//Function Call Stack - The function call stack (often just called "call stack") is a fundamental concept in programming — 
//it's how your program keeps track of which functions are currently running and where to return after a function finishes.
//--------------------------------------------------------------------------------------------
//Homework
//a and b given , o/p = total no. of set bits in a and b
// #include<iostream>
// using namespace std;
// int setbitcount(int n){
//     int count = 0;
//     while(n>0){
//         if(n&1){
//             count++;
//         }
//         n=n>>1;
//     }
//     return count;
// }
// int main(){
//     int a, b;
//     cout<<"Enter the value of a and b: ";
//     cin>>a>>b;
//     int ans = setbitcount(a)+setbitcount(b);
//     cout<<"The total set bit in a and b combined is: "<<ans;
// }
//---------------------------------------------------------------------------------------
//find fibonacci number , i/p = n, o/p = nth fibonacci number
// #include<iostream>
// using namespace std;
// int fibonacci(int n){
//     int first =0;
//     int second =1;
//     int nextterm;
//     for(int i=1; i<n; i++){
//         nextterm=first+second;
//         first=second;
//         second=nextterm;
//     }
//     return first;
// }
// int main(){
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     cout<<n<<"th number of Fibonacci series is: "<<fibonacci(n)<<endl;
//     return 0;
// }
//---------------------------------------------------------------------------------------