#include <iostream>
#include <set>

int main() {
    // 定义并初始化一个 std::set
    std::set<int> s = {30, 10, 20, 40};

    // 1. begin()
    // 返回指向第一个元素的迭代器
    std::cout << "s.begin(): " << *s.begin() << std::endl;

    // 2. clear()
    // 清空 set 中的所有元素
    s.clear();
    std::cout << "s.clear(): size = " << s.size() << std::endl;

    // 3. count()
    // 返回集合中是否包含某个元素
    s.insert(50);
    std::cout << "s.count(50): " << s.count(50) << std::endl;

    // 4. emplace()
    // 在 set 中直接构造一个元素
    s.emplace(60);
    std::cout << "s.emplace(60): ";
    for (auto &x : s) std::cout << x << " ";
    std::cout << std::endl;

    // 5. empty()
    // 检查 set 是否为空
    std::cout << "s.empty(): " << s.empty() << std::endl;

    // 6. end()
    // 返回指向 set 尾后元素的迭代器
    auto it_end = s.end();
    --it_end; // 指向最后一个元素
    std::cout << "s.end() - 1: " << *it_end << std::endl;

    // 7. erase()
    // 移除指定元素或范围的元素
    s.erase(50);
    std::cout << "s.erase(50): ";
    for (auto &x : s) std::cout << x << " ";
    std::cout << std::endl;

    // 8. find()
    // 查找集合中的某个元素，返回指向该元素的迭代器
    auto it = s.find(60);
    if (it != s.end()) {
        std::cout << "s.find(60): found " << *it << std::endl;
    }

    // 9. insert()
    // 在集合中插入元素
    s.insert(70);
    std::cout << "s.insert(70): ";
    for (auto &x : s) std::cout << x << " ";
    std::cout << std::endl;

    // 10. size()
    // 返回 set 中的元素数量
    std::cout << "s.size(): " << s.size() << std::endl;

    // 11. swap()
    // 交换两个 set 的内容
    std::set<int> temp = {80, 90};
    s.swap(temp);
    std::cout << "s.swap(): ";
    for (auto &x : s) std::cout << x << " ";
    std::cout << std::endl;

    return 0;
}
