#include <iostream>
#include <deque>
#include <algorithm>

int main() {
    // 定义并初始化一个 std::deque
    std::deque<int> deq = {10, 20, 30, 40};

    // 1. assign()
    // 重置 deque 的内容
    deq.assign({100, 200, 300});
    std::cout << "deq.assign(): ";
    for (auto &x : deq) std::cout << x << " ";
    std::cout << std::endl;

    // 2. at()
    // 通过索引访问元素，若索引越界会抛出异常
    std::cout << "deq.at(1): " << deq.at(1) << std::endl;

    // 3. back()
    // 返回 deque 的最后一个元素
    std::cout << "deq.back(): " << deq.back() << std::endl;

    // 4. begin()
    // 返回指向首个元素的迭代器
    auto it = deq.begin();
    std::cout << "deq.begin(): " << *it << std::endl;

    // 5. clear()
    // 清空 deque 中的所有元素
    deq.clear();
    std::cout << "deq.clear(): size = " << deq.size() << std::endl;

    // 6. emplace()
    // 在指定位置直接构造元素
    deq.emplace(deq.begin(), 500);
    std::cout << "deq.emplace(): " << deq.front() << std::endl;

    // 7. emplace_back()
    // 在 deque 的末尾直接构造元素
    deq.emplace_back(600);
    std::cout << "deq.emplace_back(): " << deq.back() << std::endl;

    // 8. emplace_front()
    // 在 deque 的开头直接构造元素
    deq.emplace_front(700);
    std::cout << "deq.emplace_front(): " << deq.front() << std::endl;

    // 9. empty()
    // 检查 deque 是否为空
    std::cout << "deq.empty(): " << deq.empty() << std::endl;

    // 10. end()
    // 返回指向 deque 末尾元素后位置的迭代器
    std::cout << "deq.end() - 1: " << *(deq.end() - 1) << std::endl;

    // 11. erase()
    // 删除指定位置的元素
    deq.erase(deq.begin());
    std::cout << "deq.erase(): ";
    for (auto &x : deq) std::cout << x << " ";
    std::cout << std::endl;

    // 12. front()
    // 返回 deque 的第一个元素
    std::cout << "deq.front(): " << deq.front() << std::endl;

    // 13. insert()
    // 在指定位置插入元素
    deq.insert(deq.begin(), 800);
    std::cout << "deq.insert(): " << deq.front() << std::endl;

    // 14. pop_back()
    // 移除 deque 的最后一个元素
    deq.pop_back();
    std::cout << "deq.pop_back(): ";
    for (auto &x : deq) std::cout << x << " ";
    std::cout << std::endl;

    // 15. pop_front()
    // 移除 deque 的第一个元素
    deq.pop_front();
    std::cout << "deq.pop_front(): ";
    for (auto &x : deq) std::cout << x << " ";
    std::cout << std::endl;

    // 16. push_back()
    // 在 deque 的末尾添加元素
    deq.push_back(900);
    std::cout << "deq.push_back(): " << deq.back() << std::endl;

    // 17. push_front()
    // 在 deque 的开头添加元素
    deq.push_front(1000);
    std::cout << "deq.push_front(): " << deq.front() << std::endl;

    // 18. resize()
    // 调整 deque 的大小，多出的元素用指定值填充
    deq.resize(5, 1100);
    std::cout << "deq.resize(): ";
    for (auto &x : deq) std::cout << x << " ";
    std::cout << std::endl;

    // 19. size()
    // 返回 deque 的元素数量
    std::cout << "deq.size(): " << deq.size() << std::endl;

    // 20. swap()
    // 交换两个 deque 的内容
    std::deque<int> temp = {1, 2, 3};
    deq.swap(temp);
    std::cout << "deq.swap(): ";
    for (auto &x : deq) std::cout << x << " ";
    std::cout << std::endl;

    return 0;
}
