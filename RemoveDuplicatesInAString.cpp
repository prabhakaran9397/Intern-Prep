#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int t, i, n;
	bool c[256];
	char s[1001];
	scanf("%d", &t);
	cin.getline(s, sizeof(s));
	while(t--){
	    cin.getline(s, sizeof(s));
	    //cout << s << ";" << endl;
	    memset(c, 0, sizeof(c));
	    n = strlen(s);
	    
	    for(i=0; i<n; i++){
	        if(!c[s[i]]){
	            printf("%c",s[i]);
	            c[s[i]]=1;
	        }
	    }
	    printf("\n");
	}
	return 0;
}