#include<iostream>
using namespace std;
int main(){
	int T,x,y,len;
	string s;
	scanf("%d",&T);
	while(T--){
		scanf("%d %d %d",&x,&y,&len);
		cin>>s;
		int ans=-1,i;
		int cntU=0,cntD=0,cntL=0,cntR=0;
		if(x>0) cntR=x;
		else cntL=-x;
		if(y>0) cntU=y;
		else cntD=-y;
		for(i=0;i<len;i++){
			if(cntU==0&&cntD==0&&cntL==0&&cntR==0){
				ans=i;
				break;
			}
			if(s[i]=='U'&&cntU>0) cntU--;
			if(s[i]=='D'&&cntD>0) cntD--;
			if(s[i]=='L'&&cntL>0) cntL--;
			if(s[i]=='R'&&cntR>0) cntR--;	
		}
		printf("%d\n",ans);
	}
	return 0;
} 

