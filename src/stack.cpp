#include "../include/stack.h"


void InitStack(Stack& S){
    S.top=0;
}
bool StackEmpty(Stack& S){
    return S.top==0;
}
bool Push(Stack& S,char x){
    if(S.top==MAX_SIZE)
        return false;
    S.data[S.top++]=x;
    return true;
}
bool Pop(Stack& S,char& x){
    if(StackEmpty(S))
        return false;
    //S.top--;
    x=S.data[--S.top];
    return true;
}


bool brackCheck(char str[],int length){
    Stack s;
    InitStack(s);
    std::string new_str(str);
    for(auto c:new_str){
        if ( c=='(' || c=='{' || c=='[' ){
            Push(s,c);
        }else{
            if (StackEmpty(s))
                return false;
            char topElem;
            Pop(s,topElem);
            if (c==']' && topElem != '[')
                return false;
            if (c==')' && topElem != '(')
                return false;
            if (c=='}' && topElem != '{')
                return false;    
        }
    }
    return StackEmpty(s);
}