#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
//int main()
//{
//	int line = 0;
//	int i = 0;
//	scanf("%d", &line);	//上半部分	
//	for(i=0; i<line; i++)
//	{		
//		int j = 0;
//		for(j=0; j<line-1-i; j++)
//		{			
//			printf(" ");
//		}
//		for(j=0; j<2*i+1; j++)
//		{			
//			printf("*");
//		}
//		printf("\n");
//	}	
//	//下半部分	
//	for(i=0; i<line-1; i++)
//	{		
//		int j = 0;
//		for(j=0; j<=i; j++)
//		{			
//			printf(" ");
//		}		
//		for(j=0; j<2*(line-1-i)-1; j++)
//		{			
//			printf("*");
//		}
//		printf("\n");
//	}	
//	system("pause");
//	return 0;
//}
//
////strcpy的模拟实现

//char* my_strcpy(char *dest, const char *src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	while ((*dest++ = *src++))
//	{  ; }
//	return ret;
//}
//
//int main()
//{
//	char arr[100] = { 0 };
//	char brr[] = "world";
//	char* ret = my_strcpy(arr, brr);
//	printf("%s\n", ret);
//	return 0;
//}
//
////strcmp的模拟实现
//
//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1!=NULL);
//	assert(str2!=NULL);
//	while ((*str1 == *str2))
//	{
//		if (*str1 == '0')
//		{
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//	return *str1 - *str2;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcq";
//	printf("%d\n", my_strcmp(arr1,arr2));
//
//	return 0;
//}
//
////模拟实现strstr✔
//
//char *my_strstr(char *str1, const char *str2)
//{
//	char* s1 = str1;
//	char* s2 = str2;
//	char* cur = str1;
//	while (*cur)
//	{
//		s1 = cur;
//		s2 = str2;
//		while (*s1 && *s2 && (*s1 == *s2))
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return cur;
//		}
//		/*if (*s1 == '0')
//		{
//			return NULL;
//		}*/
//		cur++;
//	}
//	return NULL;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	char brr[] = "bc";
//	char *ret = my_strstr(arr, brr);
//	printf("%s\n", ret);
//	return 0;
//}
////strcat的模拟实现
//
//char *my_strcat(char *dest, const char *src)
//{
//	char *ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//
//	while (*dest)
//	{
//		dest++;
//	}
//	while ((*dest++ = *src++))
//	{
//		;
//	}
//	return ret;
//}
//
//char *my_strcat(char *dest, const char *src)
//{
//	char *ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//
//	while (*dest)
//	{
//		dest++;
//	}
//	while ((*dest++ = *src++))
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[] = {0};
//	char arr2[] = "world";
//	char *ret = my_strcat(arr1, arr2);
//	printf("%s\n", ret);
//	return 0;
//}
//
//int main()
//{
//	char arr1[] = "hello ";
//	char arr2[] = "world";
//	char *ret = my_strcat(arr1, arr2);
//	printf("%s\n", ret);
//	return 0;
//}
//
////strchr
//
//char *MyStrchr(const char *dest, const char c)
//{
//	assert(dest);
//
//	while (*dest)
//	{
//		if (*dest == c)
//		{
//			return dest;
//		}
//		dest++;
//	}
//	return NULL;
//}
//
//int main()
//{
//	char arr1[] = "abcdef";
//	char *ret = strchr(arr1, 'd');
//	printf("%s\n", ret);
//}
//
//void * memcpy(void * dst, const void * src, size_t count)
//{
//	void * ret = dst;
//	/* copy from lower addresses to higher addresses*/
//	while (count--)
//	{
//		*(char *)dst = *(char *)src;
//		dst = (char *)dst + 1;
//		src = (char *)src + 1;
//	}
//	return (ret);
//}
//int main()
//{
//	char arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, };
//	char arr2[] = { 1, 2 };
//	my_memcpy(arr1, arr2, strlen(arr1));
//	printf("%s", arr1);
//	return 0;
//}
//
////strlen的模拟实现
//
//int strlen(const char *s1 )
//{
//	assert(s1);
//	int count = 0;
//	while (*s1)
//	{
//		count++;
//		s1++;
//	}
//	return count;
//}
//
//int main()
//{
//	char *p = "hello";
//	int ret = my_strlen(p);
//	printf("%d\n", ret);
//	return 0;
//}

//1.
//写一个函数返回参数二进制中 1 的个数
//比如： 15 0000 1111 4 个 1
//程序原型：
//int count_one_bits(unsigned int value)
//
//按位与
int count_one_bits(unsigned int n)
{
	int count = 0;
	while (n)
	{
		n = n&(n - 1);
		count++;
	}
	return count;
}
//模2除2
int count_one_bits(unsigned int n)
{
	int count = 0;
	//1101-13
	//0110-13/2=6
	//0011-3/2=3
	//0001-3/2=1
	while (n)
	{
		if (n % 2 == 1)
		{
			count++;
		}
		n = n / 2;
	}
	return count;
}
int main()
{
	int a = 13;
	//1101
	//1100
	//1100

	//1100
	//1011
	//1000

	//1000
	//0111
	//0000
	int ret = count_one_bits(a);
	printf("%d\n", ret);
	return 0;
}

//.获取一个数二进制序列中所有的偶数位和奇数位， 
//分别输出二进制序列。

void printf_num(unsigned n)
{
	int i = 32;
	//输出奇数
	for (i = 31; i >= 0; i -= 2)
	{
		printf("%d", (n >> i)&1);
	}
	printf("\n");
	//输出偶数
	for (i = 30; i >= 0; i -= 2)
	{
		printf("%d", (n >> i)&1);
	}
	return NULL;
}
int main()
{
	int a =11;
	printf_num(a);
	return 0;
}

//输出一个整数的每一位。 

int main()
{
	int n = 235;
	int tmp = 0;
	while (n)
	{
		tmp = n % 10;
		printf("%d", tmp);
		n = n / 10;
	}
	return 0;
}

//5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果
//A选手说：B第二，我第三；
//B选手说：我第二，E第四；
//C选手说：我第一，D第二；
//D选手说：C最后，我第三；
//E选手说：我第四，A第一；
//比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。

int main()
{
	int a = 0, b = 0, c = 0, d = 0, e = 0;
	for (a = 1; a <= 5; a++)
	{
		for (b = 1; b <= 5; b++)
		{
			for (c = 1; c <= 5; c++)
			{
				for (d = 1; d <= 5; d++)
				{
					for (e = 1; e <= 5; e++)
					{

							if ((2 == b && 3 != a) || (2 != b && 3 == a) == 1)
						{
								if ((2 == b && 4 != e) || (2 != b && 4 == e) == 1)
								{
									if ((1 == c && 2 != d) || (1 != c && 2 == d) == 1)
										{
											if ((5 == c && 3 != d) || (5 != c && 3 == d) == 1)
										{
												if ((4 == e && 1 != a) || (4 != e && 1 == a) == 1)
										{
											if (((a != b) && (a != c) && (a != d) && (a != e))
												&& (b != c) && (b != d) && (b != e)
												&& (c != d) && (c != d)
												&& (d != e))
												printf("a=%d b=%d c=%d d=%d ", a, b, c, d);
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

//日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个 
//嫌疑犯的一个。以下为4个嫌疑犯的供词。
//A说：不是我。
//B说：是C。
//C说：是D。
//D说：C在胡说
//已知3个人说了真话，1个人说的是假话。
//现在请根据这些信息，写一个程序来确定到底谁是凶手。

int main()
{
	char k = 0;
	for (k = 'a'; k <= 'd'; k++)
	{
		if (3 == ((k != 'a') + (k == 'c') + (k == 'd') + (k != 'd')))
			printf("凶手是：%c\n", k);
	}
	return 0;
}

//在屏幕上打印杨辉三角。 
//1
//1 1
//1 2 1
//1 3 3 1

int main()
{
	int i = 0;
	int j = 0;
	int arr[10][10] = { 0 };
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (j == 0)
				arr[i][j] = 1;
			if (i == j)
				arr[i][j] = 1;
			if (i >= 2 && j >= 1)
				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
		}
	}
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < i; j++)
		{
			printf("%d", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}

//编写函数：
//unsigned int reverse_bit(unsigned int value);
//这个函数的返回值value的二进制位模式从左到右翻转后的值。

#include <math.h>


unsigned int reverse_bit(unsigned int value)
{
	int i = 0;
	unsigned int sum = 0;
	for(i=0; i<32; i++)
	{
		sum <<= 1;
		sum |= ((value>>i)&1);
	}
	return sum;
}

int main()
{
	int num = 25;
	unsigned int ret = reverse_bit(num);
	printf("%u\n", ret);

	return 0;
}

int main()
{
	int a = 13;
	int b = 3;
	//int ret = (b + (a - b) / 2);
	int ret = ((a&b) + (a^b) >> 1);
	printf("%d\n", ret);
	return 0;
}

int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 1, 2, 3, 4 };
	int num = 0;
	int i = 0;
	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		num ^= arr[i];
	}
	printf("%d\n", num);

	return 0;
}

int Strlen(const char* str)
{
	int count = 0;
	assert(str);
	while (*str)
	{
		count++;
		str++;
	}
	return count;
}
void reverse_str(char *left, char *left)
{
	assert(left);
	assert(right);
	while (left < right)
	{
		char *tmp = left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
void reverse(const char *str, int len)
{
	assert(str);
	//逆序整个字符串
	reverse_str(str, str + len - 1);
	//逆序单词
	while (*str)
	{
		char *start = str;
		while ((*str == ' ') && (*str != '0'))
		{
			str++;
		}
		reverse_str(start, str - 1);
		if (*str != '\0')
				str++;
	}
}
int main()
{
	char arr[] = "student a am i";
	int len = Strlen(arr);
	reverse(arr, len);
	printf("%s\n", arr);
	return 0;
}

int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 1, 2, 3, 4 };
	int num = 0;
	int i = 0;
	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		num ^= arr[i];
	}
	printf("%d\n", num);

	return 0;
}



