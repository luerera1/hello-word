#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"SeqList.h"
#define MAXSIZE 10
typedef int DataType;
//静态
//Struct SeqList
//{
//	int array[MAXSIZE];
//	int size;
//};

////动态
//typedef struct SeqList
//{
//	DataType array[MAXSIZE];
//	int size;
//}SeqList, *pSeqList;
//int menu()
//{
//	printf("*****************************************");
//	printf("*****1.     顺序表初始化            *****");
//	printf("*****2.     顺序表销毁              *****");
//	printf("*****3.     顺序表头插元素          *****");
//	printf("*****4.     顺序表尾插元素          *****");
//	printf("*****5.     顺序表头删除元素        *****");
//	printf("*****6.     顺序表尾删除元素        *****");
//	printf("*****7.     顺序表指定位置插入元素  *****");
//	printf("*****8.     顺序表指定位置删除元素  *****");
//	printf("*****9.     查找元素                *****");
//	printf("*****0.     退出程序                *****");
//	printf("*****************************************");
//
//}
//
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择：>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			void SeqListInit(pSeqList ps);
//			break;
//		case 2:
//			void SeqListDestroy(pSeqList ps);
//			break;
//		case 3:
//			void SeqListPushFront(pSeqList ps);
//			break;
//		case 4:
//			void SeqListPushBack(pSeqList ps);
//			break;
//		case 5:
//			void SeqListDelFront(pSeqList ps);
//			break;
//		case 6:
//			void SeqListPopBack(pSeqList ps);
//			break;
//		case 7:
//			void SeqInsert(pSeqList ps, size_t pos, DataType x);
//			break;
//		case 8:
//			void SeqErase(pSeqList ps, size_t pos);
//			break;
//		case 9:
//			void SeqFind(pSeqList ps, DataType x);
//			break;
//		case 0:
//			printf("退出游戏！");
//			break;
//		default:
//			printf("选择错误!");
//		}
//	} while (input);
//
//	return 0;
//}

int main()
{
	SeqList SeqList;
	//初始化顺序表
	SeqInit(&SeqList);
	//在表中插入元素
	printf("依次在表中插入元素(1,2,3,4,5)：\n");
	SeqPushBack(&SeqList,1);
	SeqPushBack(&SeqList,2);
	SeqPushBack(&SeqList,3);
	SeqPushBack(&SeqList,4);
	SeqPushBack(&SeqList,5);

	//打印表中元素
	printf("表中元素有：\n");
	SeqPrint(&SeqList);
	//头插
	printf("在表头依次插入元素，6,7:\n");
	SeqPushFront(&SeqList, 6);
	SeqPushFront(&SeqList, 7);
	//尾插
	printf("在表尾依次插入元素，8,9:\n");
	SeqPushBack(&SeqList, 8);
	SeqPushBack(&SeqList, 9);
	printf("表中元素有：\n");
	SeqPrint(&SeqList);
	//头删
	printf("头删一个元素:\n");
	SeqDelFront(&SeqList);
	//尾删
	printf("尾删一个元素:\n");
	SeqPopBack(&SeqList);
	//输出表中第4个元素值
	SeqPrint(&SeqList);
	printf("表中第4个元素值为：\n%d\n", SeqFind(&SeqList, 4));
	//删除表中第2个元素对应的值
	printf("删除表中第2个元素：%d\n", SeqErase(&SeqList, 2));
	printf("表中元素为：\n");
	SeqPrint(&SeqList);
	//printf("删除的元素值为：%d\n", data);
	//清空顺序表
	SeqDestroy(&SeqList);
	SeqPrint(&SeqList);
	return 0;
}


