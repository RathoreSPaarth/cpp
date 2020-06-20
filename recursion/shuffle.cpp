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
