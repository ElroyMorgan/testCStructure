#pragma once
#include <string>
#include <unordered_map>
#include <vector>
constexpr int MAX_SIZE =10;
typedef struct Stack{
    char  data[10];
    int top;
}Stack;

void InitStack(Stack& S);
bool StackEmpty(Stack& S);
bool Push(Stack& S,char x);
bool Pop(Stack& S,char& x);
bool Peek(Stack& S,char& c);
int length(Stack& S);
bool brackCheck(char str[],int length);
std::string inifx_to_postifix(std::string infix);