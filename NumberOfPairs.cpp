#include <iostream>
using namespace std;

int main() {
	int t, m, n, i, j, c;
	cin >> t;
	while(t--){
	    cin >> m >> n;
	    int x[m], y[n];
	    for(i=0; i<m; i++)
	        cin >> x[i];
	    for(i=0; i<n; i++)
	        cin >> y[i];
	    c = 0;
	    for(i=0; i<m; i++){
	        for(j=0; j<n; j++){
	           if(x[i]!=y[j]){
	                //x[i]^y[j] > y[j]^x[i]
	                if(y[j]==1) c++;
	                else if(x[i]==2 && y[j]>4) c++;
	                else if(x[i]==3 && y[j]==2) c++;
	                else if(x[i]>=3 && y[j]>x[i]) c++;
	           }
	        }
	    }
	    cout << c << endl;
	}
	return 0;
}