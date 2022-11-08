#include<stdio.h>
int main(){
	unsigned long ulsum = 0;
	long ulcount = 5;//unsigned long跳不出while循环语句，-1变成了一个很大的数 
	while(0 <= ulcount){
		ulsum += ulcount;
		ulcount--;
	}
	printf("%lu\n",ulsum);
	return 0;
}
