#include <iostream>
#include <stack>

int main() {
    // 定义并初始化一个 std::stack
    std::stack<int> stk;

    // 1. empty()
    // 检查栈是否为空，返回布尔值
    std::cout << "stk.empty(): " << std::boolalpha << stk.empty() << std::endl;

    // 2. emplace()
    // 在栈顶原位构造一个元素
    stk.emplace(100);
    std::cout << "stk.emplace(100): " << stk.top() << std::endl;

    // 3. pop()
    // 移除栈顶的元素
    stk.pop();
    std::cout << "stk.pop(): size after pop = " << stk.size() << std::endl;

    // 4. push()
    // 向栈顶插入一个元素
    stk.push(200);
    std::cout << "stk.push(200): top = " << stk.top() << std::endl;

    // 5. size()
    // 返回栈中的元素个数
    std::cout << "stk.size(): " << stk.size() << std::endl;

    // 6. swap()
    // 交换两个栈的内容
    std::stack<int> temp;
    temp.push(300);
    stk.swap(temp);
    std::cout << "stk.swap(): top = " << stk.top() << std::endl;

    // 7. top()
    // 返回栈顶的元素
    std::cout << "stk.top(): " << stk.top() << std::endl;

    return 0;
}
