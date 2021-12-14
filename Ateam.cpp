#include<iostream>
using namespace std;
 //codeforces A.TEAM
 
int main(){
	int i,n,j= 0, s;
	cin>>n;
	int a[3];
		for(i=0; i < n; i++){
		cin>>a[0]>>a[1]>>a[2];
			s =a[0]+a[1]+a[2];
			if(s >1){
				j+=1;
			}
		}
		
		cout<<j;}
