#include<stdio.h>
int main()
/*{
	int n, sum=0;
	printf("This program sums a series of integers.\nEnter integers(0 to terminal:)");
	scanf("%d",&n);
	while(n != 0){
	  sum += n;	
	  scanf("%d",&n);
	}	
	printf("The sum is:%d",sum);		
		
}*/
/*{
	int n,sum=0;
	printf("");
	scanf("%d",&n);
	for (int i=1;i<=n;i++){
	  sum += 2*i - 1;
	  printf("%d	%d\n", i,sum);
	}*/
/*{
	int n=0,num,sum=0;
	printf("Enter three un-one number:");
	do{
	  scanf("%d",&num);
	  if (num == 1)
	    continue;
	  sum +=num;
	  n++;
	}while(n<3);
	printf("Sum equal to %d",sum);

} */
/*{
	int cmd;
	float a=0.0,b,c;
	printf("Command: 0=clear, 1=credit, 2=debit, 3=balance, 4=exit\n");
	for(;;){
	  printf("Enter command:");
	  scanf("%d",&cmd);
	  switch(cmd){
	    case 0 :
		  a = 0.0;
		  break;
		case 1 :
		  printf("请输入存钱金额：");
		  scanf("%f",&b); 
		  a += b;
		  break;
		case 2 :
		  printf("您的账户余额为：%.2f\n",a);
		  break;
		case 3 :
		  printf("请输入取钱金额；");
		  scanf("%f",&c);
		  a -= c;
		  break;
		case 4 :
		  return 0;
		default :
		  break; 
	  }
	}
}*/
/*#include<stdio.h>
int main(){
	float n,max=0;
	for(;;){
	  printf("Enter a number:");
	  scanf("%f",&n);
	  if (n>0){
	    if (n>max)
	      max = n;
	  }
	  else {
	  	printf("The largest number entered was %.2f\n",max);
	  	return 0;
	  }
	}
	
}*/
/*{
	int m,n,i;
	printf("Enter two integers:");
	scanf("%d%d",&m,&n);
	for(;;){
	  if (n != 0){
	    i = m; 
	    m = n;
	    n = i%n;
	  } 
	  else{
	    printf("Greatest common divisor:%d",m);
	    return 0; 
	  }
	}
}*/ 
/*{
	int a,b,i,dividend,divisor;
	scanf("%d/%d", &dividend,&divisor);
	a = dividend;
	b = divisor;
	while(b != 0){
	  i = a;
	  a = b;
	  b = i%b; 
	}
	printf("%d/%d", dividend/a,divisor/a);
	
}*/
/*{
	int num,a;
	float fnum;
	scanf("%d",&num);
	do {
	  fnum = num;
	  num = num/10;
	  fnum = fnum/10;
	  a = (fnum-num)*10;
	  printf("%d",a);
	}while(num !=0);
}*/ 
/*{
	int num,n=2,x;
	scanf("%d",&num);
	if (num>=4){
	  do {
	    x = n*n;
	    printf("%d\n",x);
	    n = n+2;
	   }while(x<num&&num>=n*n);
	}*/ 
/*{
	int day,firday,weekday;
	printf("Enter number of days in month:");
	scanf("%d",&day);
	printf("Enter starting day of the week (1=Sun,7=Sat):");
	scanf("%d",&firday);
	weekday = firday + 1;
	switch (firday){
	  case 1:
	    printf("%2d ",1);break;
	  case 2:
	    printf("%5d ",1);break;
	  case 3:
	    printf("%8d ",1);break;
	  case 4:
	    printf("%11d ",1);break;
	  case 5:
	    printf("%14d ",1);break;
	  case 6:
	    printf("%17d ",1);break;
	  case 7:
	    printf("%20d\n",1);break;
	}
	for (int i=2;i<=day;i++){
	  if (weekday<7){ 
	    printf("%2d ",i);
	    weekday++;
	  } 
	  else if(weekday==7){
	    printf("%2d\n",i);
	    weekday = 1;
	  }
	  else if (weekday==8){
	    printf("%2d ",i);
	    weekday = 2;
	  }
	} 
} */
/*{	
	int n,s=1,m=1;  //sn是阶乘的值 
	float sum = 1,sn=1;
	scanf("%d",&n);
	for (int i=1;i<=n;i++){
	  do {
	  	sn = sn*s;
	    s++; 
	  }while(s<=m);
	  s = 1;
	  m++;
	  sum = sum + 1/sn;
	  sn = 1;
	}
	printf("e = %f",sum);
}*/ 
{	
	int i,sum=0;
	printf("Enter integers (0 to terminate):");
	while (i != 0){
	  scanf("%d",&i);
	  sum = sum + i;
	}
	printf("%d",sum);
} 







