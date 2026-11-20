// #include<iostream>
// using namespace std;
// int main(){
//     int array[5]={0};
//     //This method of printing 0 in every index is valid for 0 only,
//     //for printing any other value, use fill_n(__ , __ , __);
//     for(int i=0; i<=4; i++){
//         cout<<array[i]<<endl;
//     }
//     return 0;
// }
//--------------------------------------------------------------------------------------------------
// #include<iostream>
// using namespace std;
// int main(){
//     int array[5];
//     fill_n(array, 5, 1);
//     //fill_n(start pointer, no. of elements to fill, value to be filled);
//     for(int i=0; i<=4; i++){
//         cout<<array[i]<<endl;
//     }
//     return 0;
// }
//--------------------------------------------------------------------------------------------------
// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main(){
//     int array[14];
//     fill_n(array, 4, 3);
//     fill_n(array+4, 3, 7);
//     fill_n(array+7, 3, 9);
//     fill_n(array+10, 4, 11);
//     for(int i=0; i<=13; i++){
//         cout<<array[i]<<endl;
//     }
//     return 0;
// }
//--------------------------------------------------------------------------------------------------
//Use of Functions in Array! 
// #include<iostream>
// using namespace std;
// int printarray(int array[], int size){
//     for(int i=0; i<size; i++){
//         cout<<array[i]<<" | ";
//     }
//     cout<<endl;
//     return 0;
// }
// int main(){
//     int first[5];
//     int second[8]={2,7};
//     int third[9];
//     int fourth[10]={0};
//     int fifth[14]={1};
//     int sixth[21];
//     fill_n(sixth, 21, -24);
//     printarray(first, 5);
//     printarray(second, 8);
//     printarray(second, 9);//Undefined Behaviour, will print a garbage value for that index(Accessed memory beyond the array)
//     printarray(third, 9);
//     printarray(fourth, 10);
//     printarray(fifth, 14);
//     printarray(sixth, 21);
//     return 0;
// }
//--------------------------------------------------------------------------------------------------
// #include<iostream>
// using namespace std;
// int main(){
//     int array[]={4,6,2,8,9,2,1,4,6,7,8,4,3,2,1,4,6,6,4,2,1,2,4,7,8,9,5,3,2,1,3,4,5,5,6,7,887,7,788,2};
//     int sizearray= sizeof(array)/sizeof(int);
//     cout<<sizearray;
//     return 0;
// }
//--------------------------------------------------------------------------------------------------
//Max. & Min. in the array-
// #include<iostream>
// using namespace std;
// #include<climits>
// int getmaximum(int array[], int size){
//     int maximum = INT_MIN;
//     for(int i=0; i<size; i++){
//         maximum = max(maximum, array[i]);
//         // OR ->
//         // if(array[i]>maximum){
//         //     maximum=array[i];
//         // }
//     }
//     return maximum;
// }
// int getminimum(int array[], int size){
//     int minimum = INT_MAX;
//     for(int i=0; i<size; i++){
//         minimum = min(minimum, array[i]);
//         // OR ->
//         // if(array[i]<minimum){
//         //     minimum = array[i];
//         // }
//     }
//     return minimum;
// }
// int main(){
//     int size;
//     cout<<"Enter the size of the array: ";
//     cin>>size;
//     int num[100]; // int num[size]; //Bahut Ghatiya Practice
//     //base case ->
//     if(size<=0||size>100){
//         cout<<"Inavlid input!";
//         return 1;
//     }
//     for(int i=0; i<size; i++){
//         cout<<"Enter the element at index "<<i<<": ";
//         cin>>num[i];
//     }
//     cout<<"The Maximum value is: "<<getmaximum(num, size)<<endl;
//     cout<<"The Minimum value is: "<<getminimum(num, size)<<endl;
//     return 0;
// }
//--------------------------------------------------------------------------------------------------
//updating elements of array ->
// #include<iostream>
// using namespace std;
// void update(int array[], int size){
//     array[1]=120;
//     array[2]=134;
//     for(int i=0; i<size; i++){
//         cout<<array[i]<<" ";
//     }
//     cout<<endl;
// }
// int main(){
//     int arr[3]={1,3,4};
//     for(int i=0; i<3; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     update(arr, 3); // passing the address of arr to update function
//     //array acts like a pointer when passed to a function.
//     return 0;
// }
//--------------------------------------------------------------------------------------------------
//Linear Search ->
// #include<iostream>
// using namespace std;
// bool linearsearch(int array[], int size, int key){
//     for(int i=0; i<size; i++){
//         if(array[i] == key){
//             return 1;
//         }
//     }
//     return 0;
// }
// int main(){
//     int size;
//     cout<<"Enter the size of array: "<<endl;
//     cin>>size;
//     int array[100];
//     if(size<=0 || size>100){
//         cout<<"Inavlid Input";
//         return 1;
//     }
//     for(int i=0; i<size; i++){
//         cout<<"Enter the element at index "<<i<<": ";
//         cin>>array[i];
//     }
//     int key;
//     cout<<"Enter the key u want to search: ";
//     cin>>key;
//     bool ans = linearsearch(array, size, key);
//     if(ans){
//         cout<<"Key is present.";
//     }
//     else{
//         cout<<"Key is absent.";
//     }
//     return 0;
// }
//--------------------------------------------------------------------------------------------------
// Reverse an Array ->
// #include <iostream>
// using namespace std;
// void reverse(int array[], int size) {
//     for (int i = 0; i < size / 2; i++) {
//         int temp = array[i];
//         array[i] = array[size - i - 1];
//         array[size - i - 1] = temp;
//     }
// }
// void printarray(int array[], int size) {
//     for (int i = 0; i < size; i++) {
//         cout << array[i] << ", ";
//     }
//     cout << endl;
// }
// int main() {
//     int size;
//     cout << "Enter the size of array: ";
//     cin >> size;
//     if (size <= 0 || size > 100) {
//         cout << "Invalid Input";
//         return 1;
//     }
//     int array[100];
//     for (int i = 0; i < size; i++) {
//         cout << "Enter the element at index " << i << ": ";
//         cin >> array[i];
//     }
//     cout << "\nOriginal array: ";
//     printarray(array, size);
//     reverse(array, size);
//     cout << "Reversed array: ";
//     printarray(array, size);
//     return 0;
// }

//|||||||||||||||||||||||||||||||||||||||||||||||OR||||||||||||||||||||||||||||||||||||||||||||||||

// #include<iostream>
// using namespace std;
// int reverse(int array[], int size){
//     int start =0;
//     int  end = size-1;
//     while(start<=end){
//         swap(array[start], array[end]);
//         start++;
//         end--;
//     }
// }
// void printarray(int array[], int size){
//     for(int i=0; i<size; i++){
//         cout<<array[i]<<", ";
//     }
// }
// int main(){
//     int size;
//     cout<<"Enter the size of array: "<<endl;
//     cin>>size;
//     int array[100];
//     if(size<=0 || size>100){
//         cout<<"Inavlid Input";
//         return 1;
//     }
//     for(int i=0; i<size; i++){
//         cout<<"Enter the element at index "<<i<<": ";
//         cin>>array[i];
//     }
//     for(int i=0; i<size; i++){
//         cout<<array[i]<<", ";
//     }
//     cout<<endl;
//     cout<<"Reversed"<<endl;
//     printarray(array, size);    
//     reverse(array, size);    
//     printarray(array, size);
//     return 0;
// }
//--------------------------------------------------------------------------------------------------
//---------------------------------------------Homework---------------------------------------------
// Q1. Reverse Alternate 
// Input - 1, 2, 3, 4, 5, 6 
// output - 2, 1, 4, 3, 6, 5
// #include<iostream>
// using namespace std;
// void alternate_reverse(int array[], int size){
//     for(int i = 0; i<size-1; i+=2){
//         int temp = array[i];
//         array[i] = array[i+1];
//         array[i+1] = temp;
//         //ye temp vagera: Swap function ka breakdown hi h
//     }
// }
// void printarray(int array[],int size){
//     for(int i = 0; i<size;i++){
//         cout<<array[i]<<", ";
//     }
//     cout<<endl;

// }
// int main(){
//     int size ;
//     cout<<"Enter the size of array: ";
//     cin>>size;
//     int array[100];
//     if(size <= 0 || size > 100){
//         cout<<"invalid input";
//         return 1;
//     }
//     for(int i = 0; i< size; i++){
//         cout<<"Enter the element at index "<<i<<": ";
//         cin>>array[i];
//     }
//     printarray(array, size);
//     alternate_reverse(array, size);
//     printarray(array, size);
//     return 0;
// }
//|||||||||||||||||||||||||||||||||||||||||||||||OR||||||||||||||||||||||||||||||||||||||||||||||||
// #include <iostream>
// using namespace std;
// void alternate_reverse(int array[], int size) {
//     int i = 0;
//     while (i < size - 1) {
//         swap(array[i], array[i + 1]);
//         i += 2;
//     }
// }
// void printarray(int array[], int size) {
//     for (int i = 0; i < size; i++) {
//         cout << array[i];
//         if(i != size - 1) cout << ", ";
//     }
//     cout << endl;
// }
// int main() {
//     int size;
//     cout << "Enter the size of array: ";
//     cin >> size;
//     if (size <= 0 || size > 100) {
//         cout << "Invalid Input";
//         return 1;
//     }
//     int array[100];
//     for (int i = 0; i < size; i++) {
//         cout << "Enter the element at index " << i << ": ";
//         cin >> array[i];
//     }
//     printarray(array, size);
//     alternate_reverse(array, size);
//     printarray(array, size);
//     return 0;
// }
//--------------------------------------------------------------------------------------------------
// Q2. Find Unique Element in an Array 
// Input: 1, 2, 3, 2, 1
// Output: 3
// (Using Frequency Count)
// #include <iostream>
// using namespace std;
// int findUniqueCount(int array[], int size) {
//     for (int i = 0; i < size; i++) {
//         int count = 0;
//         for (int j = 0; j < size; j++) {
//             if (array[i] == array[j]) {
//                 count++;
//             }
//         }
//         if (count == 1) {
//             return array[i];
//         }
//     }
//     return -1;
// }
// void printArray(int array[], int size) {
//     for (int i = 0; i < size; i++) {
//         cout << array[i];
//         if (i != size - 1){
//             cout << ", "; // to remove the last comma.
//         }
//     }
//     cout << endl;
// }
// int main() {
//     int size;
//     cout << "Enter the size of array: ";
//     cin >> size;

//     if (size <= 0 || size > 100) {
//         cout << "Invalid input";
//         return 1;
//     }
//     int array[100];
//     for (int i = 0; i < size; i++) {
//         cout << "Enter the element at index " << i << ": ";
//         cin >> array[i];
//     }
//     printArray(array, size);
//     int unique = findUniqueCount(array, size);
//     if (unique != -1)
//         cout << "Unique element using Frequency Count method: " << unique << endl;
//     else
//         cout << "No unique element found." << endl;

//     return 0;
// }
//|||||||||||||||||||||||||||||||||||||||||||||||OR||||||||||||||||||||||||||||||||||||||||||||||||
// (Using XOR) - Only when there is only 1 unique elements and others occurence is only 2
// #include <iostream>
// using namespace std;
// int findUniqueXOR(int array[], int size) {
//     int result = 0;
//     for (int i = 0; i < size; i++) {
//         result = result^array[i];
//     }
//     return result;
// }
// void printArray(int array[], int size) {
//     for (int i = 0; i < size; i++) {
//         cout << array[i];
//         if (i != size - 1) cout << ", ";
//     }
//     cout << endl;
// }
// int main() {
//     int size;
//     cout << "Enter the size of array: ";
//     cin >> size;
//     if (size <= 0 || size > 100) {
//         cout << "Invalid input";
//         return 1;
//     }
//     int array[100];
//     for (int i = 0; i < size; i++) {
//         cout << "Enter the element at index " << i << ": ";
//         cin >> array[i];
//     }
//     printArray(array, size);
//     int unique = findUniqueXOR(array, size);
//     cout << "Unique element using XOR method: " << unique << endl;
//     return 0;
// }
//--------------------------------------------------------------------------------------------------
// Q3. Find Duplicate Elements of an array.
// (Using Frequency Count)
// #include <iostream>
// using namespace std;
// void findDuplicateCount(int array[], int size) {
//     for (int i = 0; i < size; i++) {
//         int count = 0;
//         for (int j = 0; j < size; j++) {
//             if (array[i] == array[j]) {
//                 count++;
//             }
//         }
//         if (count > 1) {
//             bool alreadyPrinted = false;
//             for (int k = 0; k < i; k++) {
//                 if (array[i] == array[k]) {
//                     alreadyPrinted = true;
//                     break;
//                 }
//             }
//             if (!alreadyPrinted) {
//                 cout << array[i] << " ";
//             }
//         }
//     }
// }
// void printArray(int array[], int size) {
//     for (int i = 0; i < size; i++) {
//         cout << array[i];
//         if (i != size - 1) {
//             cout << ", "; // to remove the last comma.
//         }
//     }
//     cout << endl;
// }
// int main() {
//     int size;
//     cout << "Enter the size of array: ";
//     cin >> size;
//     if (size <= 0 || size > 100) {
//         cout << "Invalid input";
//         return 1;
//     }
//     int array[100];
//     for (int i = 0; i < size; i++) {
//         cout << "Enter the element at index " << i << ": ";
//         cin >> array[i];
//     }
//     printArray(array, size);
//     cout << "Duplicate elements: ";
//     findDuplicateCount(array, size);
//     cout << endl;
//     return 0;
// }
//--------------------------------------------------------------------------------------------------
// Q4. Find Intersection of Two Arrays (when sorted arrays are given. If not, take user input and then sort it)
// (brute approach - frequency count)... Another approach #two pointer ->
// #include <iostream>
// #include <vector>
// #include <climits>
// using namespace std;
// vector<int> intersection(int array[], int arr[], int size1, int size2){
//     // //O(N^2) ->
//     // vector<int> ans;
//     // for(int i=0;i<size1;i++){
//     //     int element=array[i];
//     //     for(int j=0;j<size2;j++){
//     //         if(array[i]<arr[j]){
//     //             break;
//     //         }
//     //         if(array[i]==arr[j]){
//     //             ans.push_back(element);
//     //             arr[j]=INT_MIN;
//     //             break;
//     //         }
//     //     }
//     // }
//     // //using single loop ->
//     int i=0,j=0;
//     vector<int> ans;
//     while(i<size1 && j<size2){
//         if(array[i]==arr[j]){
//             ans.push_back(array[i]);
//             i++;
//             j++;
//         }
//         else if(array[i]<arr[j]){
//             i++;
//         }
//         else{
//             j++;
//         }
//     }
//     return ans;
// }
// void printArray(int array[], int size){
//     for(int i=0;i<size;i++){
//         cout<<array[i];
//         if(i!=size-1){
//             cout<<", ";
//         }
//     }
//     cout<<endl;
// }
// int main(){
//     int size1,size2;
//     cout<<"Enter size of first array: ";
//     cin>>size1;
//     cout<<"Enter size of second array: ";
//     cin>>size2;
//     if(size1<=0 || size1>100 || size2<=0 || size2>100){
//         cout<<"Invalid input";
//         return 1;
//     }
//     int arr[100];
//     int arra[100];
//     cout<<"Enter elements of first array: ";
//     for(int i=0;i<size1;i++){
//         cin>>arr[i];
//     }
//     cout<<"Enter elements of second array: ";
//     for(int i=0;i<size2;i++){
//         cin>>arra[i];
//     }
//     cout<<"First Array: ";
//     printArray(arr,size1);
//     cout<<"Second Array: ";
//     printArray(arra,size2);
//     vector<int> ans=intersection(arr,arra,size1,size2);
//     cout<<"Intersection: ";
//     for(int i=0;i<ans.size();i++){
//         cout<<ans[i]<<" ";
//     }
//     return 0;
// }
//--------------------------------------------------------------------------------------------------
// Q5. Sort 0's & 1's (#2 pointer problem)
// #include<iostream>
// using namespace std;
// void sort01(int array[], int size){
//     int i=0, j=size-1;
//     while(i<j){
//         while(i<j && array[i]==0){
//             i++;
//         }
//         while(i<j && array[j]==1){
//             j--;
//         }
//         if(i<j){
//             swap(array[i], array[j]);
//             i++;
//             j--;
//         }
//     }
// }
// void printarray(int array[], int size){
//     for(int i=0; i<size; i++){
//         cout<<array[i]<<" ";
//     }
//     cout<<endl;
// }
// int main(){
//     int array[15]={1,1,0,0,1,0,1,0,1,1,0,0,0,1,0};
//     sort01(array, 15);
//     printarray(array, 15);
// }
//--------------------------------------------------------------------------------------------------
// Q6. Sort 0's, 1's & 2's (#3 pointer problem)
// #include<iostream>
// using namespace std;
// int sort01(int array[], int size){
//     int low=0;
//     int mid=0;
//     int high=size-1;
//     while(mid<=high){
//         if(array[mid]==0){
//             swap(array[low], array[mid]);
//             low++;
//             mid++;
//         }
//         else if(array[mid]==1){
//             mid++;
//         }
//         else if(array[mid]==2){
//             swap(array[mid], array[high]);
//             high--;
//         }
//     }
// }
// void printarray(int array[], int size){
//     for(int i=0; i<size; i++){
//         cout<<array[i]<<" ";
//     }
//     cout<<endl;
// }
// int main(){
//     int array[15]={1,2,1,0,1,0,2,2,0,1,1,0,0,2,1};
//     sort01(array, 15);
//     printarray(array, 15);
// }