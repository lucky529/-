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
}*/   //输出的结果为2，5。(int *)(&a + 1)这里将&a+1强制类型转换为int*型
	//首先跳过了一个数组然后--刚好指向元素5，*(a + 1)指针指向第二个元素解引用
    struct Test
{
    int Num;
    char *pcName;
    short sDate;
    char cha[2];
    short sBa[4];
}
	*p;
    假设 p 的值为 0x100000。 如下表表达式的值分别为多少？
    p + 0x1 = 0x___ ?
    (unsigned long)p + 0x1 = 0x___?
    (unsigned int*)p + 0x1 = 0x___?

	//这里的第一个答案为0x1000014 因为一个结构体的大小为20字节，所以p+1相当于加了20字节
    //第二个答案为0x1000001,这里将p转换成整形，所以结果直接加1
	//第三个答案为0x1000004,转换为int*后p变成了一个int*的指针，所以应该加上4个字节

	int main()
{
    int a[4]={1,2,3,4};
    int *ptr1=(int *)(&a+1);
    int *ptr2=(int *)((int)a+1);
    printf("%x,%x",ptr1[-1],*ptr2);
    return 0;
}
	//ptr1：将&a+1 的值强制转换成 int*类型，赋值给 int* 类型的变量 ptr，ptr1 肯定指到数
    //组 a 的下一个 int 类型数据了。ptr1[-1]被解析成*(ptr1-1)，即 ptr1 往后退 4 个 byte。所以其
    //值为 0x4。
    //ptr2：按照上面的讲解，(int)a+1 的值是元素 a[0]的第二个字节的地址。然后把这个地址
    //强制转换成 int*类型的值赋给 ptr2，也就是说*ptr2 的值应该为元素 a[0]的第二个字节开始的
    //连续 4 个 byte 的内容。
	//最后参考内存发现结果为2，0x02000000.


     int main(int argc,char * argv[])
{
     int a [3][2]={(0,1),(2,3),(4,5)};
     int *p;
     p=a [0];
     printf("%d",p[0]);
	 //花括号里面嵌套的是小括号，而
     //不是花括号！这里是花括号里面嵌套了逗号表达式！其实这个赋值就相当于 int a [3][2]={ 1, 3,
     //5};
	 //所以最后的答案应该是1
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
	 //这道题的结果为-4，为什么呢？
	 //。这里的 a 为二
     维数组，我们把数组 a 看作是包含 5 个 int 类型元素的一维数组,里面再存储了一个一维数组。
     如此，则 a 在这里代表的是 a[0]的首地址。a+1 表示的是一维数组 a 的第二个元素。a[4]表
     示的是一维数组 a 的第 5 个元素，而这个元素里又存了一个一维数组。所以&a[4][2]表示的
     是&a[0][0]+4*5*sizeof(int) + 2*sizeof(int)。
     根据定义，p 是指向一个包含 4 个元素的数组的指针。也就是说 p+1 表示的是指针 p 向
     后移动了一个“包含 4 个 int 类型元素的数组”。这里 1 的单位是 p 所指向的空间，即
     4*sizeof(int)。所以，p[4]相对于 p[0]来说是向后移动了 4 个“包含 4 个 int 类型元素的数组”，
     即&p[4]表示的是&p[0]+4*4*sizeof(int)。由于 p 被初始化为&a[0]，那么&p[4][2]表示的是
     &a[0][0]+4*4*sizeof(int)+2* sizeof(int)。现在就不难理解为啥我们得到的结果为-4



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
	//经过pa++后pa指向a[1]，里面放的是char *类型的指针，
	//而此指针指向的内容是字符串 “at”，所以结果打印出at。
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

	printf("请输入两个操作数:>");

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

		printf("请选择:>");

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

			printf("退出\n");

			break;

		default:

			printf("选择错误\n");

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

//	//转移表

//	int (*pfun[5])(int , int) = {0, Add, Sub, Mul, Div};

//	do

//	{

//		menu();

//		printf("请选择:>");

//		scanf("%d", &input);

//		if(input>=1 && input<=4)

//		{

//			printf("请输入两个操作数:>");

//			scanf("%d%d", &x, &y);

//			ret = pfun[input](x ,y);

//			printf("ret = %d\n", ret);

//		}

//	}while(input);

//	return 0;

//}
