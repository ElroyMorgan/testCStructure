#pragma once
#include <string>
constexpr int MAX_SIZE =10;
typedef struct Stack{
    char  data[10];
    int top;
}Stack;

void InitStack(Stack& S);
bool StackEmpty(Stack& S);
bool Push(Stack& S,char x);
bool Pop(Stack& S,char& x);

bool brackCheck(char str[],int length);