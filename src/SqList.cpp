#include "../include/SqList.h"

namespace sqlist{
    void InitSqList(SqList& L){
        L.length = 0;
    }
    bool Del_Min(SqList& L,ElemType& del){
        if (L.length==0){
            return false;
        }
        ElemType min=L.data[0];
        int index{0};
        for (int i = 1; i < L.length; i++){
            if (min>L.data[i]){
                min=L.data[i];
                index=i;
            }
        }
        del = min;
        L.data[index]=L.data[L.length-1];
        L.length--;
        return true;
    }

    // 在命名空间外定义运算符重载
    std::ostream& operator<<(std::ostream& os, const sqlist::SqList& L) {
        os << "[";
        for (int i = 0; i < L.length; ++i) {
            os << L.data[i];
            if (i < L.length - 1) {
                os << ", ";
            }
        }
        os << "]";
        return os;
    }
}
