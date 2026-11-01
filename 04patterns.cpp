// Total Patterns: 32    <=>   Difficulty Level: Simple to Complex

// 1. Simple Number Square
// 1 2 3
// 1 2 3
// 1 2 3
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n: "<<endl;
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

//------------------------------------------------------------------

// 2. Reverse Row Number Square
// 3 3 3
// 2 2 2
// 1 1 1
#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"enter n: "<<endl;
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout<<n-i+1<<" ";
        }
        cout<<endl;
    }
}

//------------------------------------------------------------------

// 3. Reverse Column Number Square
// 3 2 1
// 3 2 1
// 3 2 1
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n: "<<endl;
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout<<n-j+1<<" ";
        }
        cout<<endl;
    }
}

//-------------------------------------------------------------------

// 4. Counting Square (Floyd's Square)
// 1 2 3
// 4 5 6
// 7 8 9
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n: "<<endl;
    cin>>n;
    int t=1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout<<t<<" ";
            t++;
        }
        cout<<endl;
    }
}

//-------------------------------------------------------------------

// 5. Alphabet Square (Rows)
// A A A
// B B B
// C C C
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n: "<<endl;
    cin>>n;
    char t='A';
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout<<t<<" ";
        }
        cout<<endl;
        t++;
    }
}

//----OR (Using Formula 'A'+i-1)----

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n: "<<endl;
    cin>>n;
    for(int i=1; i<=n; i++){
        char ch='A'+i-1;
        for(int j=1; j<=n; j++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

//------------------------------------------------------------------

// 6. Alphabet Square (Columns)
// A B C
// A B C
// A B C
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n: "<<endl;
    cin>>n;
    for(int i=1; i<=n; i++){
        char t='A';
        for(int j=1; j<=n; j++){
            cout<<t<<" ";
            t++;
        }
        cout<<endl;
    }
}

//----OR (Using Formula 'A'+j-1)----

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n: "<<endl;
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            char ch='A'+j-1;
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

//---------------------------------------------------------------------

// 7. Alphabet Counting Square
// A B C
// D E F
// G H I
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n: "<<endl;
    cin>>n;
    char t='A';
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout<<t<<" ";
            t++;
        }
        cout<<endl;
    }
}

//------------------------------------------------------------------

// 8. Star Triangle
// *
// * *
// * * *
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n: "<<endl;
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

//------------------------------------------------------------------

// 9. Row Number Triangle
// 1
// 2 2
// 3 3 3
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n: "<<endl;
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}

//------------------------------------------------------------------

// 10. Counting Triangle (Floyd's Triangle)
// 1
// 2 3
// 4 5 6
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n: "<<endl;
    cin>>n;
    int t=1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<t<<" ";
            t++;
        }
        cout<<endl;
    }
}

//----OR (Using Formula i*(i-1)/2 + j)----

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n: "<<endl;
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<< (i*(i-1))/2 + j <<" ";
        }
        cout<<endl;
    }
}

//------------------------------------------------------------------

// 11. Sequential Triangle
// 1
// 2 3
// 3 4 5
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n: "<<endl;
    cin>>n;
    for(int i=1; i<=n; i++){
        int t=i;
        for(int j=1; j<=i; j++){
            cout<<" "<<t;
            t++;
        }
        cout<<endl;
    }
}

//----OR (Using formula i+j)----

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n: "<<endl;
    cin>>n;
    for(int i=1; i<=n; i++){
        // j starts from 0 to make the math work
        for(int j=0; j<i; j++){
            cout<<" "<<i+j;
        }
        cout<<endl;
    }
}

//----OR (Using loop range j = i to 2*i)----

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n: "<<endl;
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=i; j<2*i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

//------------------------------------------------------------------

// 12. Reverse Triangle
// 1
// 2 1
// 3 2 1
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n: "<<endl;
    cin>>n;
    for(int i=1; i<=n; i++){
        int value=i;
        for(int j=1; j<=i; j++){
            cout<<value<<" ";
            value--;
        }
        cout<<endl;
    }
}

//----OR (Using formula i-j)----

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n: "<<endl;
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=0; j<i; j++){
            cout<<i-j<<" ";
        }
        cout<<endl;
    }
}

//----OR (Using formula i-j+1)----

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n: "<<endl;
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<i-j+1<<" ";
        }
        cout<<endl;
    }
}

//------------------------------------------------------------------

// 13. Binary Triangle
// 1
// 0 1
// 1 0 1
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n: "<<endl;
    cin>>n;
    for(int i=1; i<=n; i++){
        int start = (i%2 != 0) ? 1 : 0;
        for(int j=1; j<=i; j++){
            cout<<start<<" ";
            start = 1 - start;
        }
        cout<<endl;
    }
}

//----------------------------------------------------------------------

// 14. Alphabet Row Triangle
// A
// B B
// C C C
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n: "<<endl;
    cin>>n;
    for(int i=1; i<=n; i++){
        char ch='A'+i-1;
        for(int j=1; j<=i; j++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

//----------------------------------------------------------------------

// 15. Alphabet Sequential Triangle
// A
// B C
// C D E
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n: "<<endl;
    cin>>n;
    char t='A';
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
             cout<<t<<" ";
             t++;
        }
        cout<<endl;
        t = t-i+1; // Logic to reset/adjust t for next row
    }
}

//----OR (Using Formula 'A'+i+j-2)----

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n: "<<endl;
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            char ch='A'+i+j-2;
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

//----OR (Using temporary variable ch)----

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n: "<<endl;
    cin>>n;
    for(int i=1; i<=n; i++){
        char ch='A'+i-1;
        for(int j=1; j<=i; j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
}

//----------------------------------------------------------------------

// 16. Inverted Star Triangle
// * * *
// * *
// *
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n: "<<endl;
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i+1; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

//----------------------------------------------------------------------

// 17. Reverse Alphabet Triangle
// C
// B C
// A B C
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n: "<<endl;
    cin>>n;
    for(int i=1; i<=n; i++){
        char ch='A'+n-i;
        for(int j=1; j<=i; j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
}

//----------------------------------------------------------------------

// 18. Inverted Alphabet Triangle
// A B C D E
// A B C D
// A B C
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n: "<<endl;
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i+1; j++){
            char ch = 'A'+j-1;
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

//-----------------------------------------------------------------

// 19. Mirrored Star Triangle
//     *
//   * *
// * * *
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n: "<<endl;
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int space=n-i; space>0; space--){
            cout<<" ";
        }
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

//----OR (Alternative variable names)----

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n: "<<endl;
    cin>>n;
    for(int i=1; i<=n; i++){
        int space=n-i;
        for(; space>0; space--){
            cout<<" ";
        }
        int star=i;
        for(; star>0; star--){
            cout<<"*";
        }
        cout<<endl;
    }
}

//-----------------------------------------------------------------

// 20. Full Star Pyramid (Centered)
//    *
//   ***
//  *****
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n: "<<endl;
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int space=1; space<=n-i; space++){
            cout<<" ";
        }
        for(int j=1; j<=2*i-1; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

//-----------------------------------------------------------------

// 21. Inverted Full Star Pyramid
// *****
//  ***
//   *
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n: "<<endl;
    cin>>n;
    for(int i=1; i<=n; i++){ 
        for(int space=1; space<i; space++){
            cout<<" ";
        }
        for(int j=1; j<=2*(n-i)+1; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

//-----------------------------------------------------------------

// 22. Hollow Pyramid
//    *
//   * *
//  * *
// *******
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n: "<<endl;
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int space=1; space<=n-i; space++){
            cout<<" ";
        }
        for(int j=1; j<=2*i-1; j++){
            if(j==1 || j==2*i-1 || i==n){
                cout<<"*";
            } else {
                cout<<" ";
            }
        }
        cout<<endl;
    }
}

//-----------------------------------------------------------------

// 23. Palindrome Number Pyramid
//     1
//   1 2 1
// 1 2 3 2 1
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n: "<<endl;
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int space=1; space<=n-i; space++){
            cout<<" ";
        }
        for(int j=1; j<=i; j++){
            cout<<j;
        }
        for(int k=i-1; k>=1; k--){
            cout<<k;
        }
        cout<<endl;
    }
}

//-----------------------------------------------------------------

// 24. Alphabet Pyramid (Full)
//    A
//   ABA
//  ABCBA
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n: "<<endl;
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int space=1; space<=n-i; space++){
            cout<<" ";
        }
        for(int j=1; j<=i; j++){
             cout<<char('A'+j-1);
        }
        for(int k=i-1; k>=1; k--){
             cout<<char('A'+k-1);
        }
        cout<<endl;
    }
}

//-----------------------------------------------------------------

// 25. Solid Diamond
//   *
//  ***
//   *
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n (half height): "<<endl;
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int space=1; space<=n-i; space++){
            cout<<" ";
        }
        for(int j=1; j<=2*i-1; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=1; i<=n-1; i++){
        for(int space=1; space<=i; space++){
            cout<<" ";
        }
        for(int j=1; j<=2*(n-i)-1; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

//-----------------------------------------------------------------

// 26. Hollow Diamond
//   *
//  * *
//   *
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n: "<<endl;
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int space=1; space<=n-i; space++){
            cout<<" ";
        }
        for(int j=1; j<=2*i-1; j++){
            if(j==1 || j==2*i-1) cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
    for(int i=1; i<=n-1; i++){
        for(int space=1; space<=i; space++){
            cout<<" ";
        }
        for(int j=1; j<=2*(n-i)-1; j++){
            if(j==1 || j==2*(n-i)-1) cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
}

//-----------------------------------------------------------------

// 27. Hourglass Pattern
// ***********
//  *********
//    ***
//  *********
// ***********
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n: "<<endl;
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int space=1; space<i; space++){
            cout<<" ";
        }
        for(int j=1; j<=2*(n-i)+1; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=2; i<=n; i++){
        for(int space=1; space<=n-i; space++){
            cout<<" ";
        }
        for(int j=1; j<=2*i-1; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

//-----------------------------------------------------------------

// 28. Butterfly Pattern
// * *
// ** **
// *** ***
// ** **
// * *
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n: "<<endl;
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        for(int space=1; space<=2*(n-i); space++){
            cout<<" ";
        }
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=1; i<=n-1; i++){
        int stars = n-i;
        int spaces = 2*i;
        for(int j=1; j<=stars; j++){
            cout<<"*";
        }
        for(int j=1; j<=spaces; j++){
            cout<<" ";
        }
        for(int j=1; j<=stars; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

//-----------------------------------------------------------------

// 29. Zig-Zag Star Pattern
//   * *
//  * * * *
// * * *
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n (number of stars): "<<endl;
    cin>>n;
    for(int i=1; i<=3; i++){
        for(int j=1; j<=n; j++){
            if(((i+j)%4==0) || (i==2 && j%4==0)){
                cout<<"* ";
            } else {
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}

//-----------------------------------------------------------------

// 30. Concentric Number Square
// 4 4 4 4 4 4 4
// 4 3 3 3 3 3 4
// 4 3 2 2 2 3 4
// 4 3 2 1 2 3 4
// ...
#include<iostream>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cout<<"enter n: "<<endl;
    cin>>n;
    int size = 2*n-1;
    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            int top = i;
            int left = j;
            int bottom = (size-1)-i;
            int right = (size-1)-j;
            int val = n - min(min(top, bottom), min(left, right));
            cout<<val<<" ";
        }
        cout<<endl;
    }
}

//-----------------------------------------------------------------

// 31. Basic Dabangg Pattern (Double Peak)
// 1 2 3 4 4 3 2 1
// 1 2 3 * * 3 2 1
// 1 2 * * * * 2 1
// 1 * * * * * * 1
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter value of n"<<endl;
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i+1; j++){
            cout<<j;
        }
        for(int stars=1; stars<=i-1; stars++){
            cout<<"*";
        }
        for(int stars=1; stars<=i-1; stars++){
            cout<<"*";
        }
        for(int m=n-i+1; m>=1; m--){
            cout<<m;
        }
        cout<<endl;
    }
}

//-----------------------------------------------------------------

// 32. Single Peak Dabangg (Solid Middle)
// 1 2 3 4 5 4 3 2 1
// 1 2 3 4 * 4 3 2 1
// 1 2 3 * * * 3 2 1
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter value of n: "<<endl;
    cin>>n;
    for(int i=1; i<=2*n-1; i++){
        if(i<=n) cout<<i;
        else cout<<2*n-i;
    }
    cout<<endl;
    for(int i=1; i<=n-1; i++){
        for(int j=1; j<=n-i; j++){
            cout<<j;
        }
        for(int j=1; j<=2*i-1; j++){
            cout<<"*";
        }
        for(int j=n-i; j>=1; j--){
            cout<<j;
        }
        cout<<endl;
    }
}