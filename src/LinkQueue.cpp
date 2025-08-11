#include "LinkQueue.h"
void InitQueue(LinkQueue& Q){
    Q.front=Q.rear=new LinkNode;
    Q.front->next=nullptr;
}
bool IsEmpty(LinkQueue& Q){
    if(Q.front==Q.rear) return true;
    else return false;
}
bool EnQueue(LinkQueue& Q,ElemType e){
    auto node = new(std::nothrow) LinkNode;
    if(!node){
        return false;
    }
    node->data=e;
    node->next=nullptr;
    Q.rear->next=node;
    Q.rear=node;
    return true;
}
bool DeQueue(LinkQueue& Q,ElemType& e){
    if (IsEmpty(Q))
        return false;
    auto del =Q.front->next;
    e =del->data;
    Q.front->next=Q.front->next->next;
    delete del;
    return true;
}