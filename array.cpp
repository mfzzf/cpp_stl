#include <iostream>
#include <array>
#include <algorithm>

int main() {
    // 定义并初始化一个 std::array
    std::array<int, 5> arr = {5, 3, 2, 4, 1};

    // 1. at()
    // 通过索引访问元素，如果越界会抛出异常
    std::cout << "arr.at(1): " << arr.at(1) << std::endl; // 返回第 1 个元素

    // 2. back()
    // 返回数组的最后一个元素
    std::cout << "arr.back(): " << arr.back() << std::endl;

    // 3. begin()
    // 返回指向数组首个元素的迭代器
    auto it = arr.begin();
    std::cout << "arr.begin(): " << *it << std::endl;

    // 4. end()
    // 返回指向数组尾后元素的迭代器（不包含最后的元素）
    auto it_end = arr.end();
    std::cout << "arr.end() - 1: " << *(it_end - 1) << std::endl;

    // 5. empty()
    // 判断数组是否为空
    std::cout << "arr.empty(): " << arr.empty() << std::endl;

    // 6. fill()
    // 用指定的值填充整个数组
    arr.fill(0);
    std::cout << "arr.fill(0): ";
    for (auto& x : arr) std::cout << x << " ";
    std::cout << std::endl;

    // 7. front()
    // 返回数组的第一个元素
    std::cout << "arr.front(): " << arr.front() << std::endl;

    // 8. max_size()
    // 返回数组的最大容量，等于模板参数指定的大小
    std::cout << "arr.max_size(): " << arr.max_size() << std::endl;

    // 9. size()
    // 返回数组的元素个数
    std::cout << "arr.size(): " << arr.size() << std::endl;

    // 10. swap()
    // 交换两个数组的内容
    std::array<int, 5> arr2 = {1, 2, 3, 4, 5};
    arr.swap(arr2);
    std::cout << "arr.swap(arr2): ";
    for (auto& x : arr) std::cout << x << " ";
    std::cout << std::endl;

    // 11. data()
    // 返回指向数组首个元素的指针
    int* ptr = arr.data();
    std::cout << "arr.data(): " << *ptr << std::endl;

    // 12. sort() (使用 std::sort)
    // 对数组进行排序
    std::sort(arr.begin(), arr.end());
    std::cout << "std::sort(): ";
    for (auto& x : arr) std::cout << x << " ";
    std::cout << std::endl;

    return 0;
}
