#include <iostream>
#include <queue>

int main() {
    // 定义并初始化一个 std::queue
    std::queue<int> q;

    // 1. empty()
    // 检查队列是否为空，返回布尔值
    std::cout << "q.empty(): " << std::boolalpha << q.empty() << std::endl;

    // 2. emplace()
    // 在队列的末尾原位构造一个元素
    q.emplace(100);
    std::cout << "q.emplace(100): " << q.back() << std::endl;

    // 3. front()
    // 返回队列的第一个元素
    std::cout << "q.front(): " << q.front() << std::endl;

    // 4. back()
    // 返回队列的最后一个元素
    std::cout << "q.back(): " << q.back() << std::endl;

    // 5. pop()
    // 移除队列的第一个元素
    q.pop();
    std::cout << "q.pop(), size after pop: " << q.size() << std::endl;

    // 6. push()
    // 在队列末尾插入一个元素
    q.push(200);
    std::cout << "q.push(200): front = " << q.front() << ", back = " << q.back() << std::endl;

    // 7. size()
    // 返回队列中元素的个数
    std::cout << "q.size(): " << q.size() << std::endl;

    // 8. swap()
    // 交换两个队列的内容
    std::queue<int> temp;
    temp.push(300);
    q.swap(temp);
    std::cout << "q.swap(): front = " << q.front() << ", back = " << q.back() << std::endl;

    return 0;
}
