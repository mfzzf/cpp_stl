#include <iostream>
#include <map>

int main() {
    // 定义并初始化一个 std::map
    std::map<int, std::string> m;

    // 1. at()
    // 返回指定键的元素值，若键不存在则抛出异常
    m[1] = "One";
    m[2] = "Two";
    std::cout << "m.at(1): " << m.at(1) << std::endl;

    // 2. begin()
    // 返回指向 map 第一个元素的迭代器
    std::cout << "m.begin()->first: " << m.begin()->first << ", value: " << m.begin()->second << std::endl;

    // 3. clear()
    // 清空 map 中的所有元素
    m.clear();
    std::cout << "m.clear(): size = " << m.size() << std::endl;

    // 4. count()
    // 返回某个键是否存在
    m[1] = "One";
    std::cout << "m.count(1): " << m.count(1) << std::endl;

    // 5. emplace()
    // 插入一个新元素（直接构造）
    m.emplace(3, "Three");
    std::cout << "m.emplace(3, \"Three\"): " << m[3] << std::endl;

    // 6. empty()
    // 检查 map 是否为空
    std::cout << "m.empty(): " << std::boolalpha << m.empty() << std::endl;

    // 7. end()
    // 返回指向 map 尾后元素的迭代器
    auto it_end = m.end();
    --it_end; // 指向最后一个元素
    std::cout << "m.end() - 1: " << it_end->first << ", value: " << it_end->second << std::endl;

    // 8. erase()
    // 移除指定键的元素
    m.erase(1);
    std::cout << "m.erase(1): size = " << m.size() << std::endl;

    // 9. find()
    // 查找 map 中是否存在指定键，返回指向该键的迭代器
    auto it = m.find(3);
    if (it != m.end()) {
        std::cout << "m.find(3): " << it->first << ", value: " << it->second << std::endl;
    }

    // 10. insert()
    // 插入一个新元素
    m.insert({4, "Four"});
    std::cout << "m.insert({4, \"Four\"}): " << m[4] << std::endl;

    // 11. size()
    // 返回 map 中的元素数量
    std::cout << "m.size(): " << m.size() << std::endl;

    // 12. swap()
    // 交换两个 map 的内容
    std::map<int, std::string> temp = {{5, "Five"}};
    m.swap(temp);
    std::cout << "m.swap(temp): first element = " << m.begin()->first << ", value: " << m.begin()->second << std::endl;

    return 0;
}
