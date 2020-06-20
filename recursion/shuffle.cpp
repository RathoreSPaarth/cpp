// Given an array of n elements in the following format { a1, a2, a3, a4, ….., an/2, b1, b2, b3, b4, …., bn/2 }. The task is shuffle the array to {a1, b1, a2, b2, a3, b3, ……, an/2, bn/2 } without using extra space.

// Input:
// The first line of input contains an integer T denoting the number of test cases. Then T test cases follow, Each test case contains an integer n denoting the size of the array. The next line contains n space separated integers forming the array.

// Output:
// Print the shuffled array without using extra space.

// Constraints:
// 1<=T<=10^5
// 1<=n<=10^5
// 1<=a[i]<=10^5

// Example:
// Input:
// 2
// 4
// 1 2 9 15
// 6
// 1 2 3 4 5 6

// Output:
// 1 9 2 15 
// 1 4 2 5 3 6
#include <iostream>
using namespace std;
int i = 0;
void shuffle(int arr[],int size){
   
    if(size%2==0){
      if(i == size/2)
    return;
    
    cout<<arr[i]<<" ";
    cout<<arr[i+size/2]<<" ";
    i++;
    shuffle(arr,size);   
    }
    
    if(size%2!=0){
        if(i == (size-1)/2){
            cout<<arr[size-1];
            return;
        }
         cout<<arr[i]<<" ";
    cout<<arr[i+size/2]<<" ";
    i++;
    shuffle(arr,size);   
    }
   
    
    
}
int main() {
    
    int t;
    cin>>t;
    while(t--){
    int size;
	cin>>size;
	int arr[size];
	for(int j = 0; j<size; j++){
	    cin>>arr[j];
	}
	i = 0;
	shuffle(arr,size);
	cout<<endl;
    }

	return 0;
}
