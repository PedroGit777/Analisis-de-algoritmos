//Subsecuencia común más larga
#inclde<iostream>

using namespace std;

int main(void){
	char b[100][100];
	int c[101][101];
	char X[100], Y[100];
    int i, j;
	int m, n;
	
	cout<<"\nIngrese la longitud de X: ";
	cin>>m;
	cout<<"Ingrese la longitud de Y: ";
	
	
	cout<<"\nIngrese la cadena X: ";
	for(i=1; i<=m; i++){
		cin>>X[i];
	}
	
	cout<<"\nIngrese la cadena Y: ";
	for(j=1; j<=n; j++){
		cin>>Y[j];
	}
	
	for(i=1; i<=m; i++){
		c[i][0]=0;
	}
	
	for(j=0; j<=n; j++){
		c[0][j]=0;
	}
	
	for(i=1; i<=m; i++){
		for(j=1; j<=n; j++){
		if(X[i]==Y[j]){
			c[i][j]=c[i-1][j-1]+1;
			b[i][j]="←↑";
			}
		else if(c[i-1][j]>=c[i][j-1]){
			c[i][j]=c[i-1][j];
			b[i][j]="↑";
			}
		else {
			c[i][j]=c[i][j-1];
			b[i][j]="←";
			}
		}
	}
	
	for(i=1; i<=m; i++){
		for(j=1; j<=n; j++){
		cout<< c[i][j];
		}
	}
	
	for(i=0; i<=m; i++){
		for(j=0; j<=n; j++){
		cout<< b[i][j]);
		}
      cin<<endl;
	}
}
