#include <stdio.h>//ʮ���� Decimal ������ Binary ���� Base 
#include <math.h>//��������pow() 
int main(){
	printf("�������ṩʮ�������������������֮���ת��\n");
	printf("�����ϣ���Ѹ�ʮ������ת��Ϊ�����ƣ�����롰D��(��������)\n");
	printf("�����ϣ���Ѹö�������ת��Ϊʮ���ƣ�����롰B��(��������)\n");
a:	char base;
	scanf("%c",&base);
	if ((base!='B')&&(base!='D')){
		printf("������������������\n");
		goto a; 
	}//������ι���� 
	printf("��������Ҫת������:\n"); 
	long long num,ans=0;//�������� 
	scanf("%lld",&num);
	if (base=='D'){//ʮ����ת�����ƣ����ǵ�ֻ�Ǹ��򵥵ĳ��򣬾Ͳ��ó��õĺ��������ݹ��ˣ�ֱ��д��if 
		int a,b=1;//aΪ������bΪλ��
		while (num!=0){
			a=num%2;
			ans+=a*b;
			b*=10;
			num/=2;
		}
	}else{//������תʮ���� 
		int i,j=0;
		while (num!=0){
        	j=num%10;
        	num/=10;
        	ans+=j*pow(2,i);
        	i++;
		}
	}
	printf("ת�����������Ϊ��%lld\n",ans);
	return 0;
} 
