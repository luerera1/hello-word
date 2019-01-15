#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
////1.
////写一个函数返回参数二进制中 1 的个数
////比如： 15 0000 1111 4 个 1
//
////模n除n
//int count_one_bits(unsigned int n)
//{
//	int count=0;
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n = n / 2;
//	}
//	return count;
//	//4
//	//0100
//	//0100
//	// 返回 1的位数 
//}
//
////按位与
//int count_one_bits(unsigned int n)
//{
//	int count = 0;
//	while (n)
//	{
//			count++;
//			n = n&(n - 1);
//		
//	}
//	return count;
//}
//
////右移运算
//int count_one_bits(unsigned int n)
//{
//	int count = 0;
//	int i = 32;
//	while (i)
//	{
//		if (n & 1 == 1)
//		{
//			count++;
//		}
//		n =n>> 1;
//		i--;
//	}
//	return count;
//}
//int main()
//{
//	unsigned int a = 15;
//	int ret = count_one_bits(a);
//	printf("%d\n", ret);
//	return 0;
//}
//
////2.获取一个数二进制序列中所有的偶数位和奇数位，
////分别输出二进制序列。
//void printf_num(unsigned n)
//{
//	int i=0;
//	//输出奇数
//	printf("奇数位：\n");
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d", (n >> i) & 1);
//	}
//	//输出偶数
//	printf("\n");
//	printf("偶数位为：\n");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d", (n >> i) & 1);
//	}
//	
//}
//int main()
//{
//	int a = 11;
//	printf_num(a);
//	return 0;
//}
//
////3. 输出一个整数的每一位。 
//int main()
//{
//	int a = 235;
//	int tmp = 0;
//	while (a)
//	{
//		tmp = a % 10;
//		printf("%d ", tmp);
//		a = a / 10;
//	}
//	return 0;
//}
 
//5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果
//A选手说：B第二，我第三；
//B选手说：我第二，E第四；
//C选手说：我第一，D第二；
//D选手说：C最后，我第三；
//E选手说：我第四，A第一；
//比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。
//
//#include<stdio.h>
//int main()
//{
//	int a = 0, b = 0, c = 0, d = 0, e = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if ((2 == b && 3 != a) || (2 != b && 3 == a) == 1)
//						{
//							if ((2 == b && 4 != e) || (2 != b && 4 == e) == 1)
//							{
//								if ((1 == c && 2 != d) || (1 != c && 2 == d) == 1)
//								{
//									if ((5 == c && 3 != d) || (5 != c && 3 == d) == 1)
//									{
//										if ((4 == e && 1 != a) || (4 != e && 1 == a) == 1)
//										{//对五个值均不相同的判断
//											if (((a != b) && (a != c) && (a != d) && (a != e))
//												&& ((b != c) && (b != d) && (b != e))
//												&& ((c != d) && (c != e))
//												&& ((d != e)))
//											{
//												printf("a= %d, b= %d,c= %d,d= %d,e= %d\n", a, b, c, d, e);
//											}
//										}
//									}
//								}
//							}
//						}
//					}
//				}
//			}
//		}
//	}
//
//	return 0;
//}
//
//日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个
//嫌疑犯的一个。以下为4个嫌疑犯的供词。
//A说：不是我。
//B说：是C。
//C说：是D。
//D说：C在胡说
//已知3个人说了真话，1个人说的是假话。
//
//
//Murder()//谋杀案
//
//{
//	char k;//代表凶手
//	for (k = 'A'; k <= 'D'; k++)//让凶手四人分别去验证if条件，满足条件者就是凶手
//	{
//		if (3 == ((k != 'A') + (k == 'C') + (k == 'D') + (k != 'D')))//只有满足三个人说真话，一个假话，他们之和为3这个条件，就能确定此人是凶手
//		{
//			printf("凶手是：%c\n", k);
//		}
//	}
//
//}
//int main()
//{
//	Muder();//谋杀案
//	return 0;
//}
//
//3.在屏幕上打印杨辉三角。
//   1
//  1 1
// 1 2 1
//1 3 3 1
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int arr[10][10] = { 0 };
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j < 10; j++)
//		{
//			if (j == 0)
//				arr[i][j] = 1;
//			if (i == j)
//				arr[i][j] = 1;
//			if (i >= 2 && j >= 1)
//				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j < i; j++)
//		{
//			printf("%d", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//
////编写函数：
////unsigned int reverse_bit(unsigned int value);
////这个函数的返回值value的二进制位模式从左到右翻转后的值。
////00000001
////00000100
//
//
//#include <math.h>
//
//
//unsigned int reverse_bit(unsigned int value)
//{
//	int i = 0;
//	unsigned int sum = 0;
//	for(i=0; i<32; i++)
//	{
//		sum <<= 1;
//		sum |= ((value>>i)&1);
//	}
//	return sum;
//}
//
//int main()
//{
//	int num = 25;
//	unsigned int ret = reverse_bit(num);
//	printf("%u\n", ret);
//	system("pause");
//	return 0;
//
////2.不使用（a+b）/2这种方式，求两个数的平均值。 
//
//int main()
//{
//	int a = -8;
//	int b = 20;
//	//int ret = (b + (a - b) / 2);
//	int ret = ((a&b) + (a^b) >> 1);
//	printf("%d\n", ret);
//	return 0;
//}
//
//////3.编程实现：
//////一组数据中只有一个数字出现了一次。其他所有数字都是成对出现的。
//////请找出这个数字。（使用位运算）
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 1, 2, 3, 4 };
//	int num = 0;
//	int i = 0;
//	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		num ^= arr[i];
//	}
//	printf("%d\n", num);
//
//	return 0;
//}

///*4.
//有一个字符数组的内容为:"student a am i",
//			请你将数组的内容改为"i am a student".
//			要求：
//			不能使用库函数。
//			只能开辟有限个空间（空间个数和字符串的长度无关）*/
//
//int Strlen(const char* str)
//{
//	int count = 0;
//	assert(str);
//	while (*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//void reverse_str(char *left, char *right)
//{
//	assert(left);
//	assert(right);
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//void reverse(char *str, int len)
//{
//	assert(str);
//	//逆序整个字符串
//	reverse_str(str, str + len - 1);
//	//逆序单词
//	while (*str)
//	{
//		char *start = str;
//		while ((*str !=' ') && (*str != '\0'))
//		{
//			str++;
//		}
//		reverse_str(start, str - 1);
//		if (*str != '\0')
//			str++;
//	}
//
//}
//int main()
//{
//	char arr[] = "student a am i";
//	int len = Strlen(arr);
//	reverse(arr, len);
//	printf("%s\n", arr);
//	return 0;
//}








