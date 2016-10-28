#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;
const int N = 1000005;

int a, b, n, l;

void init(){
	int T;
	scanf("%d",&T);
	for(int t=1; t<=T; t++){
		scanf("%d%d%d",&a,&b,&n);
		if(n > 30){
			printf("Case %d: 0\n",t);
			continue;
		}
		int l = 1 << n;
		if(a) a--;
		int res = b / l - a / l;
		printf("Case %d: %d\n",t,res);
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
