#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"SeqList.h"
#define MAXSIZE 10
typedef int DataType;
//��̬
//Struct SeqList
//{
//	int array[MAXSIZE];
//	int size;
//};

////��̬
//typedef struct SeqList
//{
//	DataType array[MAXSIZE];
//	int size;
//}SeqList, *pSeqList;
//int menu()
//{
//	printf("*****************************************");
//	printf("*****1.     ˳����ʼ��            *****");
//	printf("*****2.     ˳�������              *****");
//	printf("*****3.     ˳���ͷ��Ԫ��          *****");
//	printf("*****4.     ˳���β��Ԫ��          *****");
//	printf("*****5.     ˳���ͷɾ��Ԫ��        *****");
//	printf("*****6.     ˳���βɾ��Ԫ��        *****");
//	printf("*****7.     ˳���ָ��λ�ò���Ԫ��  *****");
//	printf("*****8.     ˳���ָ��λ��ɾ��Ԫ��  *****");
//	printf("*****9.     ����Ԫ��                *****");
//	printf("*****0.     �˳�����                *****");
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
//		printf("��ѡ��>");
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
//			printf("�˳���Ϸ��");
//			break;
//		default:
//			printf("ѡ�����!");
//		}
//	} while (input);
//
//	return 0;
//}

int main()
{
	SeqList SeqList;
	//��ʼ��˳���
	SeqInit(&SeqList);
	//�ڱ��в���Ԫ��
	printf("�����ڱ��в���Ԫ��(1,2,3,4,5)��\n");
	SeqPushBack(&SeqList,1);
	SeqPushBack(&SeqList,2);
	SeqPushBack(&SeqList,3);
	SeqPushBack(&SeqList,4);
	SeqPushBack(&SeqList,5);

	//��ӡ����Ԫ��
	printf("����Ԫ���У�\n");
	SeqPrint(&SeqList);
	//ͷ��
	printf("�ڱ�ͷ���β���Ԫ�أ�6,7:\n");
	SeqPushFront(&SeqList, 6);
	SeqPushFront(&SeqList, 7);
	//β��
	printf("�ڱ�β���β���Ԫ�أ�8,9:\n");
	SeqPushBack(&SeqList, 8);
	SeqPushBack(&SeqList, 9);
	printf("����Ԫ���У�\n");
	SeqPrint(&SeqList);
	//ͷɾ
	printf("ͷɾһ��Ԫ��:\n");
	SeqDelFront(&SeqList);
	//βɾ
	printf("βɾһ��Ԫ��:\n");
	SeqPopBack(&SeqList);
	//������е�4��Ԫ��ֵ
	SeqPrint(&SeqList);
	printf("���е�4��Ԫ��ֵΪ��\n%d\n", SeqFind(&SeqList, 4));
	//ɾ�����е�2��Ԫ�ض�Ӧ��ֵ
	printf("ɾ�����е�2��Ԫ�أ�%d\n", SeqErase(&SeqList, 2));
	printf("����Ԫ��Ϊ��\n");
	SeqPrint(&SeqList);
	//printf("ɾ����Ԫ��ֵΪ��%d\n", data);
	//���˳���
	SeqDestroy(&SeqList);
	SeqPrint(&SeqList);
	return 0;
}


