#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
////1.
////дһ���������ز����������� 1 �ĸ���
////���磺 15 0000 1111 4 �� 1
//
////ģn��n
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
//	// ���� 1��λ�� 
//}
//
////��λ��
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
////��������
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
////2.��ȡһ�������������������е�ż��λ������λ��
////�ֱ�������������С�
//void printf_num(unsigned n)
//{
//	int i=0;
//	//�������
//	printf("����λ��\n");
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d", (n >> i) & 1);
//	}
//	//���ż��
//	printf("\n");
//	printf("ż��λΪ��\n");
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
////3. ���һ��������ÿһλ�� 
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
 
//5λ�˶�Ա�μ���10��̨��ˮ����������������Ԥ��������
//Aѡ��˵��B�ڶ����ҵ�����
//Bѡ��˵���ҵڶ���E���ģ�
//Cѡ��˵���ҵ�һ��D�ڶ���
//Dѡ��˵��C����ҵ�����
//Eѡ��˵���ҵ��ģ�A��һ��
//����������ÿλѡ�ֶ�˵����һ�룬����ȷ�����������Ρ�
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
//										{//�����ֵ������ͬ���ж�
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
//�ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4��
//���ɷ���һ��������Ϊ4�����ɷ��Ĺ��ʡ�
//A˵�������ҡ�
//B˵����C��
//C˵����D��
//D˵��C�ں�˵
//��֪3����˵���滰��1����˵���Ǽٻ���
//
//
//Murder()//ıɱ��
//
//{
//	char k;//��������
//	for (k = 'A'; k <= 'D'; k++)//���������˷ֱ�ȥ��֤if���������������߾�������
//	{
//		if (3 == ((k != 'A') + (k == 'C') + (k == 'D') + (k != 'D')))//ֻ������������˵�滰��һ���ٻ�������֮��Ϊ3�������������ȷ������������
//		{
//			printf("�����ǣ�%c\n", k);
//		}
//	}
//
//}
//int main()
//{
//	Muder();//ıɱ��
//	return 0;
//}
//
//3.����Ļ�ϴ�ӡ������ǡ�
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
////��д������
////unsigned int reverse_bit(unsigned int value);
////��������ķ���ֵvalue�Ķ�����λģʽ�����ҷ�ת���ֵ��
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
////2.��ʹ�ã�a+b��/2���ַ�ʽ������������ƽ��ֵ�� 
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
//////3.���ʵ�֣�
//////һ��������ֻ��һ�����ֳ�����һ�Ρ������������ֶ��ǳɶԳ��ֵġ�
//////���ҳ�������֡���ʹ��λ���㣩
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
//��һ���ַ����������Ϊ:"student a am i",
//			���㽫��������ݸ�Ϊ"i am a student".
//			Ҫ��
//			����ʹ�ÿ⺯����
//			ֻ�ܿ������޸��ռ䣨�ռ�������ַ����ĳ����޹أ�*/
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
//	//���������ַ���
//	reverse_str(str, str + len - 1);
//	//���򵥴�
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








