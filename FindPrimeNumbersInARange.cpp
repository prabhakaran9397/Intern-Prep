#include<bits/stdc++.h>
#define SIZE 1000000001
using namespace std;

bitset<SIZE> prime;

void fill(long long m, long long n)
{
    if(m<3) m=3;
    if(!(m%2)) m++;
    prime[2]=1;
    bool f;
    long long i, j;
    for(i=m; i<=n; i+=2){
        f = 1;
        for(j=3; j*j<=i && f; j+=2)
            if(!(i%j)) f=0;
        prime[i] = f;
    }
        
}

int main(void)
{
    int t;
    long long m, n, i, tnt=0, tmt=0;
    scanf("%d",&t);
    while(t--){
        scanf("%lld %lld",&m, &n);
        fill(m, n);
        for(i=m; i<=n; i++)
            if(prime[i])
                printf("%lld ",i);
        printf("\n");
    }
	return 0;
}