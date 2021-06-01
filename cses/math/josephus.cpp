#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void game(vector<int> v,int k,int nextPosition, int n){
    
    if(v.size() == 1){
        cout<<v.at(0);
        return;
    }
    
    if(v.size() == n){
        nextPosition = k;
    }
    
    nextPosition = nextPosition%v.size();
    
    v.erase(v.begin()+nextPosition);
    nextPosition +=k;
   
    game(v,k,nextPosition,n);
}


int main()
{
    int n,k;
    cin>>n>>k;
    k--;
    int next;
    vector<int>people;
    for(int i = 0; i<n; i++){
        people.push_back(i+1);
    }
    
    game(people,k,next,n);
    
    
   return 0;
}
