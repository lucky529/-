#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
*{
	int main()
{
    int a[5] = { 1, 2, 3, 4, 5 };
    int *ptr = (int *)(&a + 1);
    printf( "%d,%d", *(a + 1), *(ptr - 1));
    return 0;
}*/   //����Ľ��Ϊ2��5��(int *)(&a + 1)���ｫ&a+1ǿ������ת��Ϊint*��
	//����������һ������Ȼ��--�պ�ָ��Ԫ��5��*(a + 1)ָ��ָ��ڶ���Ԫ�ؽ�����
    struct Test
{
    int Num;
    char *pcName;
    short sDate;
    char cha[2];
    short sBa[4];
}
	*p;
    ���� p ��ֵΪ 0x100000�� ���±���ʽ��ֵ�ֱ�Ϊ���٣�
    p + 0x1 = 0x___ ?
    (unsigned long)p + 0x1 = 0x___?
    (unsigned int*)p + 0x1 = 0x___?

	//����ĵ�һ����Ϊ0x1000014 ��Ϊһ���ṹ��Ĵ�СΪ20�ֽڣ�����p+1�൱�ڼ���20�ֽ�
    //�ڶ�����Ϊ0x1000001,���ｫpת�������Σ����Խ��ֱ�Ӽ�1
	//��������Ϊ0x1000004,ת��Ϊint*��p�����һ��int*��ָ�룬����Ӧ�ü���4���ֽ�

	int main()
{
    int a[4]={1,2,3,4};
    int *ptr1=(int *)(&a+1);
    int *ptr2=(int *)((int)a+1);
    printf("%x,%x",ptr1[-1],*ptr2);
    return 0;
}
	//ptr1����&a+1 ��ֵǿ��ת���� int*���ͣ���ֵ�� int* ���͵ı��� ptr��ptr1 �϶�ָ����
    //�� a ����һ�� int ���������ˡ�ptr1[-1]��������*(ptr1-1)���� ptr1 ������ 4 �� byte��������
    //ֵΪ 0x4��
    //ptr2����������Ľ��⣬(int)a+1 ��ֵ��Ԫ�� a[0]�ĵڶ����ֽڵĵ�ַ��Ȼ��������ַ
    //ǿ��ת���� int*���͵�ֵ���� ptr2��Ҳ����˵*ptr2 ��ֵӦ��ΪԪ�� a[0]�ĵڶ����ֽڿ�ʼ��
    //���� 4 �� byte �����ݡ�
	//���ο��ڴ淢�ֽ��Ϊ2��0x02000000.


     int main(int argc,char * argv[])
{
     int a [3][2]={(0,1),(2,3),(4,5)};
     int *p;
     p=a [0];
     printf("%d",p[0]);
	 //����������Ƕ�׵���С���ţ���
     //���ǻ����ţ������ǻ���������Ƕ���˶��ű��ʽ����ʵ�����ֵ���൱�� int a [3][2]={ 1, 3,
     //5};
	 //�������Ĵ�Ӧ����1
}

	 int main()
{
     int a[5][5];
     int (*p)[4];
     p = a;
     printf("a_ptr=%#p,p_ptr=%#p\n",&a[4][2],&p[4][2]);
     printf("%p,%d\n",&p[4][2] - &a[4][2],&p[4][2] - &a[4][2]);
     return 0;
}
	 //�����Ľ��Ϊ-4��Ϊʲô�أ�
	 //������� a Ϊ��
     ά���飬���ǰ����� a �����ǰ��� 5 �� int ����Ԫ�ص�һά����,�����ٴ洢��һ��һά���顣
     ��ˣ��� a ������������ a[0]���׵�ַ��a+1 ��ʾ����һά���� a �ĵڶ���Ԫ�ء�a[4]��
     ʾ����һά���� a �ĵ� 5 ��Ԫ�أ������Ԫ�����ִ���һ��һά���顣����&a[4][2]��ʾ��
     ��&a[0][0]+4*5*sizeof(int) + 2*sizeof(int)��
     ���ݶ��壬p ��ָ��һ������ 4 ��Ԫ�ص������ָ�롣Ҳ����˵ p+1 ��ʾ����ָ�� p ��
     ���ƶ���һ�������� 4 �� int ����Ԫ�ص����顱������ 1 �ĵ�λ�� p ��ָ��Ŀռ䣬��
     4*sizeof(int)�����ԣ�p[4]����� p[0]��˵������ƶ��� 4 �������� 4 �� int ����Ԫ�ص����顱��
     ��&p[4]��ʾ����&p[0]+4*4*sizeof(int)������ p ����ʼ��Ϊ&a[0]����ô&p[4][2]��ʾ����
     &a[0][0]+4*4*sizeof(int)+2* sizeof(int)�����ھͲ������Ϊɶ���ǵõ��Ľ��Ϊ-4



	return 0;
}
#include<stdio.h>
int main()
{
	int aa[2][5] = {1,2,3,4,5,6,7,8,9,10};
    int* ptr1 = (int* )(&aa+1);
	int* ptr2 = (int*)(aa+1);
	printf("%d %d",*(ptr1-1),*(ptr2-1));
	return 0;
}

#include<stdio.h>
int main()
{
    char *a[] = { "work", "at", "alibaba" };
    char **pa = a;
    pa++;
    printf("%s\n", *pa);
    system("pause");
    return 0;
	//����pa++��paָ��a[1]������ŵ���char *���͵�ָ�룬
	//����ָ��ָ����������ַ��� ��at�������Խ����ӡ��at��
}

#include<stdio.h>
  int main()
{
     char *c[] = {"ENTER","NEW","POINT","FIRST"};
     char**cp[] = {c+3,c+2,c+1,c};
     char***cpp = cp;
     printf("%s\n", **++cpp);//p
     printf("%s\n", *--*++cpp+3);//er
     printf("%s\n", *cpp[-2]+3);//st
     printf("%s\n", cpp[-1][-1]+1);//ew
  return 0;
}  #include <stdio.h>





enum Option

{

	EXIT,//0

	ADD,//1

	SUB,//2

	MUL,//3

	DIV//4

};



void menu()

{

	printf("*************************\n");

	printf("*** 1. add     2. sub ***\n");

	printf("*** 3. mul     4. div ***\n");

	printf("***     0. exit       ***\n");

	printf("*************************\n");

}



int Add(int x, int y)

{

	return x+y;

}

int Sub(int x, int y)

{

	return x-y;

}

int Mul(int x, int y)

{

	return x*y;

}

int Div(int x, int y)

{

	return x/y;

}





void Calc(int(*pfun)(int, int))

{

	int x = 0, y = 0;

	int ret = 0;

	printf("����������������:>");

	scanf("%d%d", &x, &y);

	ret = pfun(x, y);

	printf("ret = %d\n", ret);

}



int main()

{

	int input = 0;

	int x = 0;

	int y = 0;

	int ret = 0;

	do

	{

		menu();

		printf("��ѡ��:>");

		scanf("%d", &input);



		switch(input)

		{

		case ADD:

			Calc(Add);

			break;

		case SUB:

			Calc(Sub);

			break;

		case MUL:

			Calc(Mul);

			break;

		case DIV:

			Calc(Div);

			break;

		case 0:

			printf("�˳�\n");

			break;

		default:

			printf("ѡ�����\n");

			break;

		}

	}while(input);

	return 0;

}



//

//int main()

//{

//	int input = 0;

//	int x = 0;

//	int y = 0;

//	int ret = 0;

//

//	//ת�Ʊ�

//	int (*pfun[5])(int , int) = {0, Add, Sub, Mul, Div};

//	do

//	{

//		menu();

//		printf("��ѡ��:>");

//		scanf("%d", &input);

//		if(input>=1 && input<=4)

//		{

//			printf("����������������:>");

//			scanf("%d%d", &x, &y);

//			ret = pfun[input](x ,y);

//			printf("ret = %d\n", ret);

//		}

//	}while(input);

//	return 0;

//}
