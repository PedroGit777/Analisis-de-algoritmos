#include<iostream>
using namespace std;
typedef long long ll;
ll n, a[1000000], t;
ll m=0;
 
int main(){
	cin>>n;
 
	
	for(int i=0;i<n; i++){
		cin>>a[i];
		t+=a[i];
		m=max(m, a[i]);
	}
	if(t%2||m>t-m){
		cout<<"no\n";}
	else{
		cout<<"yes\n";
	}
}
