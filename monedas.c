#include <iostream>
using namespace std;

int main(){
	
	int canti, so;
	int m1=0,m2=0,m3=0,m4=0,c1=0, c2=0, c3=0, c4=0;
	int total=0;

	cin >> m1 >> m2 >> m3 >> m4; 
	cin >> canti;
	
	c4 = canti / m4;
	so = canti % m4;
	c3 = so / m3;
	so = so % m3;
	c2 = sobrante / m2;
	sobrante = so % m2;
	cantm1 = so;
	total = c1 + c2 + c3 + c4;
	cout << endl;
	cout << c4 << " x "<< m4 << endl;
	cout << c3 << " x "<< m3 << endl;
	cout << c2 << " x"<< m2 << endl;
	cout << c1 << " x"<< m1 << endl;
	cout << "Total de: " << total << endl;
}
