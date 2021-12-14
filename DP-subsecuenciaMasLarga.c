//Subsecuencia común más larga
#inclde<iostream>

using namespace std;

int main(){
	char b[100][100], X[100], Y[100];
	int c[101][101];
	int i,j,m, n;
	
	cout<<"\na longitud de X y Y: ";
	cin>>m>>n;
	cout<<"Ingrese la cadena X: ";
	for(i=1; i<=m; i++){
		scanf("%a",&X[i]);
	}
	
	cout<<"\nIngrese la cadena Y: ";
	for(j=1; j<=n; j++){
		scanf("%a",&Y[j])
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
		}
	}
	
	for(i=1; i<=m; i++){
		for(j=1; j<=n; j++){
		cout<< c[i][j];
		}
	}
	
}
