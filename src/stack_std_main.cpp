#include <iostream>
#include <stack>
#include <string>

// 函数声明
void demonstrate_std_stack();
void demonstrate_string_stack();
void demonstrate_stack_comparison();

int main() {
    std::cout << "C++ 标准库 std::stack 使用示例" << std::endl;
    std::cout << "================================" << std::endl << std::endl;
    
    demonstrate_std_stack();
    demonstrate_string_stack();
    demonstrate_stack_comparison();
    
    return 0;
}

// 演示 std::stack 基本用法的示例
void demonstrate_std_stack() {
    std::cout << "=== std::stack 基本用法演示 ===" << std::endl;
    
    // 创建一个空栈
    std::stack<int> intStack;
    
    // 检查栈是否为空
    std::cout << "栈是否为空: " << (intStack.empty() ? "是" : "否") << std::endl;
    
    // 向栈中添加元素 (push 操作)
    std::cout << "向栈中添加元素: 10, 20, 30" << std::endl;
    intStack.push(10);
    intStack.push(20);
    intStack.push(30);
    
    // 检查栈的大小
    std::cout << "栈的大小: " << intStack.size() << std::endl;
    
    // 查看栈顶元素 (top 操作)
    std::cout << "栈顶元素: " << intStack.top() << std::endl;
    
    // 修改栈顶元素
    std::cout << "将栈顶元素修改为 35" << std::endl;
    intStack.top() = 35;
    std::cout << "新的栈顶元素: " << intStack.top() << std::endl;
    
    // 依次弹出所有元素 (pop 操作)
    std::cout << "依次弹出所有元素: ";
    while (!intStack.empty()) {
        std::cout << intStack.top() << " ";
        intStack.pop();
    }
    std::cout << std::endl;
    
    // 再次检查栈是否为空
    std::cout << "栈是否为空: " << (intStack.empty() ? "是" : "否") << std::endl;
    std::cout << "栈的大小: " << intStack.size() << std::endl;
    std::cout << std::endl;
}

// 演示字符串栈的使用
void demonstrate_string_stack() {
    std::cout << "=== 字符串栈演示 ===" << std::endl;
    
    std::stack<std::string> stringStack;
    
    // 添加一些字符串
    stringStack.push("第一个");
    stringStack.push("第二个");
    stringStack.push("第三个");
    
    std::cout << "栈中的元素 (从顶部到底部): ";
    while (!stringStack.empty()) {
        std::cout << "\"" << stringStack.top() << "\" ";
        stringStack.pop();
    }
    std::cout << std::endl << std::endl;
}

// 演示栈的比较操作
void demonstrate_stack_comparison() {
    std::cout << "=== 栈比较操作演示 ===" << std::endl;
    
    std::stack<int> stack1, stack2, stack3;
    
    // 填充栈
    for (int i = 1; i <= 3; i++) {
        stack1.push(i);
        stack2.push(i);
    }
    
    stack3.push(1);
    stack3.push(2);
    stack3.push(4);
    
    // 比较栈
    std::cout << "stack1 == stack2: " << (stack1 == stack2 ? "true" : "false") << std::endl;
    std::cout << "stack1 != stack3: " << (stack1 != stack3 ? "true" : "false") << std::endl;
    std::cout << "stack1 < stack3: " << (stack1 < stack3 ? "true" : "false") << std::endl;
    std::cout << std::endl;
}