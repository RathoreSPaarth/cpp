#include<bits/stdc++.h>
using namespace std;
void swap(int arr[], int i, int j){
    if(i == j) return;
    
    int temp = arr[j];
    arr[j] = arr[i];
    arr[i] = temp;
}
int getPivot(int arr[], int left, int right){
    int pivot = arr[right];
    int i = left - 1;
    for(int j = left; j<right; j++){
        if(arr[j]<pivot){
            i++;
            swap(arr,i,j);
        }
    }
    
    swap(arr, i+1, right);
    
    return i+1;
}

void quickSort(int arr[], int left, int right){
    if(left<right){
        int pivot = getPivot(arr, left, right);
        
        quickSort(arr, left, pivot-1);
        quickSort(arr, pivot+1, right);
    }
}
int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i = 0; i<n ; i++){
            cin>>arr[i];
        }
        
        quickSort(arr, 0, n-1);
        
        for(int i = 0; i<n ; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
