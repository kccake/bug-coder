#include<stdio.h>
int main(){
	unsigned long ulsum = 0;
	long ulcount = 5;//unsigned long������whileѭ����䣬-1�����һ���ܴ���� 
	while(0 <= ulcount){
		ulsum += ulcount;
		ulcount--;
	}
	printf("%lu\n",ulsum);
	return 0;
}
