#include<bits/stdc++.h>
using namespace std;

int main(void)
{
	int t, i, j, n;
	cin >> t;
	while(t--){
	    cin >> n;
	    int a[n];
	    for(i=0; i<n; i++)
	        cin>>a[i];
	    for(i=n-1; i>-1; i--)
	        if(i-1>-1 && a[i-1]<a[i]){
	            for(j=n-1; j>i && a[i-1]>=a[j]; j--);
	            swap(a[i-1], a[j]);
	            sort(a+i, a+n);
	            break;
	        }
	    if(i==-1)
	        for(i=n-1; i>-1; i--)
	            cout << a[i] <<" ";
	    else
	        for(i=0; i<n; i++)
	            cout << a[i] <<" ";
	    cout << endl;
	}
	return 0;
}