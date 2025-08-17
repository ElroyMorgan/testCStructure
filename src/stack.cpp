#include "../include/stack.h"
int getPrecedence(char op){
    if(op == '+' || op == '-')
        return 1;
    if(op == '*' || op == '/')
        return 2;
    return 0;
}

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

bool Peek(Stack& S,char& c){
     if(StackEmpty(S))
        return false;
    auto temp=S.top-1;
    c=S.data[temp];
    return true;
}

int length(Stack& S){
    return S.top;
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

std::string inifx_to_postifix(std::string infix){
    Stack ops ;
    std::vector<char> postfix;
    char temp;
    InitStack(ops);
    for (auto c:infix){
        if((c>='0'&&c<='9') || (c>='A'&& c<='Z'))
            postfix.push_back(c);
        else if (c=='(')
            Push(ops,c);
        else if(c==')'){
            Peek(ops,temp);
            while (!StackEmpty(ops) && temp != '('){
                postfix.push_back(temp);
                Pop(ops,temp);
                Peek(ops,temp);
            }
            if(!StackEmpty(ops))
                Pop(ops,temp);
        }else{
            Peek(ops,temp);
            while(!StackEmpty(ops) && getPrecedence(temp) >= getPrecedence(c)){
                postfix.push_back(temp);
                Pop(ops,temp);
                Peek(ops,temp);
            }
            Push(ops,c);
        }
    }

    while(!StackEmpty(ops)){
        Pop(ops,temp);
        postfix.push_back(temp);
    }
    std::string result{postfix.begin(),postfix.end()};
    return result;
}