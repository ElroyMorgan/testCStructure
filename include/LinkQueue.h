#pragma once
#include <new>
using ElemType = int;
typedef struct  LinkNode{
    ElemType data;
    struct LinkNode* next;
}LinkNode;
//带头节点
typedef struct{
    LinkNode* front,* rear;
}LinkQueue;

void InitQueue(LinkQueue& Q);
bool IsEmpty(LinkQueue& Q);
bool EnQueue(LinkQueue& Q,ElemType e);
bool DeQueue(LinkQueue& Q,ElemType& e);