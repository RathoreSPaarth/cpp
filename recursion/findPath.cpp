#include <iostream>
using namespace std;

int paths(int n, int m){
    if(n==1 || m==1)
        return 1;
        
        return paths(n,m-1)+paths(m,n-1);
    
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    cin>>n>>m;
	    cout<<paths(n,m)<<endl;
	    
	}
	return 0;
}
