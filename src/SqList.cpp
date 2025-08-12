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

    void Reverse(SqList& L){
        ElemType temp{};
        for(int i{0};i<L.length/2;i++){
            temp=L.data[i];
            L.data[i]=L.data[L.length-i-1];
            L.data[L.length-i-1]=temp;
        }
    }

    bool Del_allX_method1(SqList& L,ElemType x){
        if (L.length==0)
            return false;
        int count_x{0};
        for(int i{0};i<L.length;i++){
            if (L.data[i] == x){
                count_x++;
            }else{
                L.data[i-count_x]=L.data[i];
            }
        }
        L.length -=count_x;
        return true;
    }

    bool Del_allX_method2(SqList& L,ElemType x){
        if(L.length == 0)
            return false;
        int count_NoX{0};
        for(int i{0};i<L.length;i++){
            if (L.data[i] != x){
                L.data[count_NoX]=L.data[i];
                count_NoX++;
            }
        }
        L.length = count_NoX;
        return true;
    }

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
