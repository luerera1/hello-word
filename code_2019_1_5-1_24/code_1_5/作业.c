#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
//折半查找
//int binary_search(int arr[], int key, int left, int right)
//{
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid] > key)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < key)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 20 };
//	int key = 17;
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	int ret = binary_search(arr, key, left, right);
//	if (ret == -1)
//	{
//		printf("找不到");
//	}
//	else
//	{
//		printf("找到了：%d\n", ret);
//	}
//	return 0;
//}

// 1_6

//strcpy的调用✔

//int main()
//{
//	char a[] = "abc";
//	char c[] = "i am a teacher!";
//	strcpy(a, c);
//	printf("%s", a);//字符型打印%s
//	return 0;
//}

//strcpy的模拟实现✔

//char *my_strcpy(char *dest, const char*src)
//{
//	char *ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	while ((*dest++ = *src++))
//	{ ; }    
//	return ret;
//}
//
//int main()
//{
//	char arr[100] = { 0 };
//	char brr[]= "world";
//	char* ret=my_strcpy(arr,brr);
//	printf("%s\n", ret);//字符型打印%s
//}


//strcmp的模拟实现✔

//int my_strcmp(const char* s1, const char* s2)
//{
//	assert(s1 != NULL);
//	assert(s2 != NULL);
//	//1.相等为0
//	while (*s1 == *s2)
//	{
//		if (*s1 == '0')
//		{
//			return 0;
//		}
//		s1++;
//		s2++;
//	}
//	return *s1 - *s2;
//	//if(*s1>*s2)
//	//return 1;
//	//else 
//	//	return -1;
//}
//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "abc";
//	printf("%d", my_strcmp(p1, p2));
//	return 0;
//
//}

//strncpy✔

//int main()
//{
//	char arr[20] = "aaaaaaaa";
//	strncpy(arr, "bit",3);
//	printf("%s\n", arr);
//}

//strncat追加函数✔

//int main()
//{
//	char arr[20] = "hello\";
//	strncat(arr, "bit", 3);
//	printf("%s\n", arr);
//	return 0;
//}

//strchr函数✔

//int main()
//{
//	char arr[] = "abcdef";
//	char *ret;
//	ret=strchr(arr, 'd');
//	printf("%s\n",ret);
//	return 0;
//}

//strstr函数✔

//int main()
//{
//	char arr[] = "abcdefdef";
//	char arr1[] = "def";
//	char *ret;
//	ret = strstr(arr, arr1);
//	printf("%s\n", ret);
//}

//模拟实现strstr✔
//
//char *my_strstr(const char* dest, const char* src)
//{
//	char* tdest = (char*)dest;
//	char* tsrc = (char*)src;
//	while (*tdest)
//	{
//		char* flag = tdest;
//		while (*tdest == *tsrc &&*tdest != '0')
//		{
//			tdest++;
//			tsrc++;
//		}
//		if (!*tsrc)
//		{
//			return flag;
//		}
//		if (!*tdest)
//		{
//			return NULL;
//		}
//		tdest++;
//	}
//	return NULL;
//}
//char* my_strstr(const char* str1, const char* str2)◀
//{
//	char* s1 = (char*)str1;
//	char* s2 = (char*)str2;
//	char* cur = s1;
//	if (!*str2)
//	{
//		return NULL;
//	}
//	while (*cur)
//	{
//		char* cur = s1;
//		while (*s1&&*s2&&*s1 == *s2)
//		{
//			s1++;
//			s2++;
//		}
//		if (!*s2)
//		{
//			return cur;
//		}
//	
//		cur++;
//	}
//	return NULL;
//}
//int main()
//{
//	char arr[] = "abcdefdef";
//	char arr1[] = "def";
//	char *ret;
//	ret = my_strstr(arr, arr1);
//	printf("%s\n", ret);
//}

////1.实现strcpy √
//2.实现strcat√
//3.实现strstr√
//4.实现strchr√
//5.实现strcmp√
//6.实现memcpy√
//7.实现memmove

//strcat函数
//int main()
//{
//	char arr1[] = "hello ";
//	char arr2[] = "world";
//	char *ret = strcat(arr1, arr2);
//	printf("%s\n", ret);
//	return 0;
//}

//strcat函数的模拟实现

//char *my_strcat(char *dest, const char*src) 
//{ 
//	char *ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
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
//	char arr1[] = "hello ";
//	char arr2[] = "world";
//	char *ret = my_strcat(arr1, arr2);
//	printf("%s\n", ret);
//	return 0;
//}

//strchr函数的模拟实现✔
//
//char *my_strchr(char *str1, int* str2)
//{
//	char* ret = str1;
//	assert(str1);
//	assert(str2);
//	while (*str1)
//	{
//		str1++;
//	}
//	while ((char(*str1)++ == *(char*)str2++))
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char *ret = strchr(arr1,'d' );
//	printf("%s\n", ret);
//}

//memcpy函数的模拟实现
//
//void * my_memcpy(void * dst, const void * src, size_t count) 
//{
//	void * ret = dst;
//	while (count--) 
//	{
//		*(char *)dst = *(char *)src; 
//		dst = (char *)dst + 1; 
//		src = (char *)src + 1;
//	}
//	return(ret);
//}
//int main()
//{
//	char arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, };
//	char arr2[] = { 1, 2 };
//	my_memcpy(arr1, arr2, strlen(arr1));
//	printf("%s", arr1);
//	return 0;
//}