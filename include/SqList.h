#ifndef SQLIST_H
#define SQLIST_H

#include <iostream> // 添加iostream头文件用于ostream

namespace sqlist{
    #define MaxSize 50
    using ElemType = int ;
    typedef struct SqList{
        ElemType data[MaxSize];
        int length;
        
        // 重载<<运算符声明
        friend std::ostream& operator<<(std::ostream& os, const SqList& L);
    }SqList;
    void InitSqList(SqList& L);
    bool Del_Min(SqList& L,ElemType& del);
    void Reverse(SqList& L);
    bool Del_allX_method1(SqList& L,ElemType x);
    bool Del_allX_method2(SqList& L,ElemType x);
}

#endif