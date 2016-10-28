#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;
const int N = 1000005;

long long q,p,d,a,s;

bool ok(){
	scanf("%lld%lld%lld%lld%lld",&q,&p,&d,&a,&s);
	long long mini = -d * a;
	long long maxi = p * a;
	if(s < mini or s > maxi) return 0;
	if((maxi - s) % (p + d) == 0) return 1;
	return 0;
}

void init(){
	int T;
	scanf("%d",&T);
	for(int t=1; t<=T; t++){
		if(ok()) printf("Case %d: It may happen\n",t);
		else printf("Case %d: Review needed\n",t);
	}
}

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	init();
	return 0;
}