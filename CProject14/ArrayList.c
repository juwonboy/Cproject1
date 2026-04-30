#include <stdio.h>
#include "ArrayList.h"

void ListInit(List* plist)
{
    plist->numOfData = 0;
    plist->curPosition = -1;
}

void LInsert(List* plist, LData data)
{
    if (plist->numOfData >= LIST_LEN)
    {
        printf("저장 불가\n");
        return;
    }

    plist->arr[plist->numOfData++] = data;
}

int LFirst(List* plist, LData* pdata)
{
    if (plist->numOfData == 0)
        return FALSE;

    plist->curPosition = 0;          // 첫 번째 데이터 위치로 커서 이동
    *pdata = plist->arr[0];          // 첫 번째 데이터 반환
    return TRUE;
}

int LNext(List* plist, LData* pdata)
{
    if (plist->curPosition >= (plist->numOfData - 1))
        return FALSE;

    plist->curPosition++;            // 커서를 다음 위치로 이동
    *pdata = plist->arr[plist->curPosition];  // 해당 위치 데이터 반환
    return TRUE;
}

LData LRemove(List* plist)
{
    int rpos = plist->curPosition;
    int num = plist->numOfData;
    LData rdata = plist->arr[rpos];

    for (int i = rpos; i < num - 1; i++)
        plist->arr[i] = plist->arr[i + 1];

    plist->numOfData--;
    plist->curPosition--;

    return rdata;
}

int Lcount(List* plist)
{
    return plist->numOfData;
}