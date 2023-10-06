#include <stdio.h>//十进制 Decimal 二进制 Binary 进制 Base 
#include <math.h>//开个库用pow() 
int main(){
	printf("本程序提供十进制整数与二进制整数之间的转换\n");
	printf("如果您希望把该十进制数转换为二进制，请键入“D”(不含引号)\n");
	printf("如果您希望把该二进制数转换为十进制，请键入“B”(不含引号)\n");
a:	char base;
	scanf("%c",&base);
	if ((base!='B')&&(base!='D')){
		printf("您的输入有误，请重试\n");
		goto a; 
	}//防刁民喂炒饭 
	printf("请输入您要转化的数:\n"); 
	long long num,ans=0;//输入和输出 
	scanf("%lld",&num);
	if (base=='D'){//十进制转二进制，考虑到只是个简单的程序，就不用常用的函数甚至递归了，直接写进if 
		int a,b=1;//a为余数，b为位数
		while (num!=0){
			a=num%2;
			ans+=a*b;
			b*=10;
			num/=2;
		}
	}else{//二进制转十进制 
		int i,j=0;
		while (num!=0){
        	j=num%10;
        	num/=10;
        	ans+=j*pow(2,i);
        	i++;
		}
	}
	printf("转换结束，结果为：%lld\n",ans);
	return 0;
} 
