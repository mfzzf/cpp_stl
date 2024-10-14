#include <iostream>
#include <forward_list>
#include <algorithm>

int main() {
    // 定义并初始化一个 std::forward_list
    std::forward_list<int> flist = {10, 20, 30, 40};

    // 1. assign()
    // 用指定的值重置列表内容
    flist.assign({100, 200, 300});
    std::cout << "flist.assign(): ";
    for (auto &x : flist) std::cout << x << " ";
    std::cout << std::endl;

    // 2. before_begin()
    // 返回指向第一个元素前的位置的迭代器
    auto bb = flist.before_begin();
    flist.insert_after(bb, 50); // 在第一个元素前插入
    std::cout << "flist.before_begin() insert 50: ";
    for (auto &x : flist) std::cout << x << " ";
    std::cout << std::endl;

    // 3. begin()
    // 返回指向第一个元素的迭代器
    auto it = flist.begin();
    std::cout << "flist.begin(): " << *it << std::endl;

    // 4. clear()
    // 清空链表
    flist.clear();
    std::cout << "flist.clear(): size after clear = " << std::distance(flist.begin(), flist.end()) << std::endl;

    // 5. emplace_after()
    // 在指定位置后构造元素
    flist.emplace_after(flist.before_begin(), 100);
    std::cout << "flist.emplace_after(): ";
    for (auto &x : flist) std::cout << x << " ";
    std::cout << std::endl;

    // 6. empty()
    // 检查列表是否为空
    std::cout << "flist.empty(): " << flist.empty() << std::endl;

    // 7. end()
    // 返回指向末尾后的迭代器
    std::cout << "flist.end() != flist.begin(): " << (flist.end() != flist.begin()) << std::endl;

    // 8. erase_after()
    // 删除指定位置后的元素
    flist.insert_after(flist.before_begin(), {200, 300});
    flist.erase_after(flist.before_begin());
    std::cout << "flist.erase_after(): ";
    for (auto &x : flist) std::cout << x << " ";
    std::cout << std::endl;

    // 9. front()
    // 返回第一个元素
    std::cout << "flist.front(): " << flist.front() << std::endl;

    // 10. insert_after()
    // 在指定位置后插入元素
    flist.insert_after(flist.before_begin(), 400);
    std::cout << "flist.insert_after(): ";
    for (auto &x : flist) std::cout << x << " ";
    std::cout << std::endl;

    // 11. max_size()
    // 返回列表可容纳的最大元素数量
    std::cout << "flist.max_size(): " << flist.max_size() << std::endl;

    // 12. pop_front()
    // 移除首元素
    flist.pop_front();
    std::cout << "flist.pop_front(): ";
    for (auto &x : flist) std::cout << x << " ";
    std::cout << std::endl;

    // 13. push_front()
    // 在首部插入元素
    flist.push_front(500);
    std::cout << "flist.push_front(): ";
    for (auto &x : flist) std::cout << x << " ";
    std::cout << std::endl;

    // 14. remove()
    // 删除指定值的元素
    flist.push_front(500); // 插入重复元素
    flist.remove(500);
    std::cout << "flist.remove(500): ";
    for (auto &x : flist) std::cout << x << " ";
    std::cout << std::endl;

    // 15. remove_if()
    // 根据条件删除元素
    flist.remove_if([](int n){ return n > 300; });
    std::cout << "flist.remove_if(): ";
    for (auto &x : flist) std::cout << x << " ";
    std::cout << std::endl;

    // 16. reverse()
    // 反转列表元素
    flist.push_front(100);
    flist.push_front(200);
    flist.reverse();
    std::cout << "flist.reverse(): ";
    for (auto &x : flist) std::cout << x << " ";
    std::cout << std::endl;

    // 17. sort()
    // 对列表元素排序
    flist.sort();
    std::cout << "flist.sort(): ";
    for (auto &x : flist) std::cout << x << " ";
    std::cout << std::endl;

    // 18. splice_after()
    // 将另一个列表的元素拼接到当前列表中
    std::forward_list<int> flist2 = {600, 700};
    flist.splice_after(flist.begin(), flist2);
    std::cout << "flist.splice_after(): ";
    for (auto &x : flist) std::cout << x << " ";
    std::cout << std::endl;

    // 19. swap()
    // 交换两个列表的内容
    std::forward_list<int> temp = {800, 900};
    flist.swap(temp);
    std::cout << "flist.swap(): ";
    for (auto &x : flist) std::cout << x << " ";
    std::cout << std::endl;

    return 0;
}
