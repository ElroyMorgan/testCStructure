#include "../include/test.h"


void testLinkQueue(){
    LinkQueue Q;
    InitQueue(Q);
    EnQueue(Q,12);
    std::cout << Q.front->next->data <<"\n";
    std::cout << Q.rear->data << "\n";
    EnQueue(Q,30);
    std::cout << "第二次入队\n";
    std::cout << Q.front->next->data <<"\n";
    std::cout << Q.rear->data << "\n";
     EnQueue(Q,40);
    std::cout << "第三次入队\n";
    std::cout << Q.front->next->data <<"\n";
    std::cout << Q.rear->data << "\n";

    std::cout << "第一次出队\n";
    ElemType e;
    DeQueue(Q,e);
    std::cout << e <<"\n";
    std::cout << "第二次出队\n";
    DeQueue(Q,e);
    std::cout << e <<"\n";
}



void testStack(){
    Stack S;
    InitStack(S);
    Push(S,'c');
    std::cout <<S.data[0]<<"\n";
    std::cout << S.top <<"\n";
    Push(S,'M');
    std::cout << S.data[1] <<"\n";
    std::cout << S.top <<"\n";
    char x;
    Pop(S,x);
    std::cout << S.top <<"\n";
    std::cout<< x <<"\n";
}

void testBrackCheck(){
    auto val=brackCheck("(({)))",6);
    if(val)
        std::cout << "匹配成功" <<"\n";
    else
        std::cout << "匹配失败" << "\n";
}