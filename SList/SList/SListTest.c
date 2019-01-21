#define _CRT_SECURE_NO_WARNINGS 1
#include"SList.h"
#include<stdio.h>
void Test()
{
	pNode _pHead;
	SListInit(&_pHead);
	SListPushBack(&_pHead, 1);
	PrintSList(&_pHead);
	SListPushBack(&_pHead, 2);
	PrintSList(&_pHead);
	SListPushBack(&_pHead, 3);
	PrintSList(&_pHead);
	SListPushBack(&_pHead, 3);
	PrintSList(&_pHead);

	/*SListPopBack(&_pHead);
	PrintSList(&_pHead);
	SListPopBack(&_pHead);
	PrintSList(&_pHead);
	SListPopBack(&_pHead);
	PrintSList(&_pHead); 
	SListPopBack(&_pHead);
	PrintSList(&_pHead);
	SListPopBack(&_pHead);
	PrintSList(&_pHead);*/

	/*SListPushFront(&_pHead, 5);
	PrintSList(&_pHead);
	SListPushFront(&_pHead, 6);
	PrintSList(&_pHead);
	SListPushFront(&_pHead, 5);
	PrintSList(&_pHead);
	SListPushFront(&_pHead, 8);
	PrintSList(&_pHead);
*/
	SListPopFront(&_pHead);
	PrintSList(&_pHead);
	SListPopFront(&_pHead);
	PrintSList(&_pHead);

	/*SListInsertAfter(&_pHead, 5, 8);
	PrintSList(&_pHead);*/

	/*SListRemoveAll(&_pHead,3 );
	PrintSList(&_pHead);
*/
	SListSize(&_pHead);
	SListDestroy(&_pHead);
	PrintSList(&_pHead);

}
int main()
{
	Test();

	return 0;
}