#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric> // for iota (生成序列)

int main() {
    std::vector<int> v = {1, 2, 3, 4, 5};

    // 1. all_of()
    // 判断范围内的所有元素是否满足某个条件
    bool allPositive = std::all_of(v.begin(), v.end(), [](int i) { return i > 0; });
    std::cout << "all_of: " << std::boolalpha << allPositive << std::endl;

    // 2. any_of()
    // 判断范围内是否存在至少一个元素满足某个条件
    bool anyGreaterThan3 = std::any_of(v.begin(), v.end(), [](int i) { return i > 3; });
    std::cout << "any_of: " << anyGreaterThan3 << std::endl;

    // 3. binary_search()
    // 在有序范围内查找某个值是否存在
    std::sort(v.begin(), v.end()); // 需要排序
    bool found = std::binary_search(v.begin(), v.end(), 3);
    std::cout << "binary_search: " << found << std::endl;

    // 4. copy()
    // 将一个范围内的元素复制到另一个范围
    std::vector<int> v_copy(5);
    std::copy(v.begin(), v.end(), v_copy.begin());
    std::cout << "copy: ";
    for (int i : v_copy) std::cout << i << " ";
    std::cout << std::endl;

    // 5. count()
    // 统计某个元素在范围中出现的次数
    int count3 = std::count(v.begin(), v.end(), 3);
    std::cout << "count of 3: " << count3 << std::endl;

    // 6. equal()
    // 判断两个范围内的元素是否相等
    bool isEqual = std::equal(v.begin(), v.end(), v_copy.begin());
    std::cout << "equal: " << isEqual << std::endl;

    // 7. fill()
    // 将范围内的所有元素填充为指定的值
    std::fill(v.begin(), v.end(), 0);
    std::cout << "fill: ";
    for (int i : v) std::cout << i << " ";
    std::cout << std::endl;

    // 8. find()
    // 在范围内查找第一个等于指定值的元素
    auto it = std::find(v_copy.begin(), v_copy.end(), 3);
    if (it != v_copy.end()) {
        std::cout << "find: found " << *it << std::endl;
    }

    // 9. for_each()
    // 对范围内的每个元素执行操作
    std::for_each(v_copy.begin(), v_copy.end(), [](int &n) { n += 10; });
    std::cout << "for_each (add 10): ";
    for (int i : v_copy) std::cout << i << " ";
    std::cout << std::endl;

    // 10. iota()
    // 生成序列，填充范围内的元素为连续递增值
    std::iota(v.begin(), v.end(), 1);
    std::cout << "iota: ";
    for (int i : v) std::cout << i << " ";
    std::cout << std::endl;

    // 11. max_element()
    // 返回范围内的最大元素的迭代器
    auto maxIt = std::max_element(v.begin(), v.end());
    std::cout << "max_element: " << *maxIt << std::endl;

    // 12. min_element()
    // 返回范围内的最小元素的迭代器
    auto minIt = std::min_element(v.begin(), v.end());
    std::cout << "min_element: " << *minIt << std::endl;

    // 13. none_of()
    // 判断范围内没有任何元素满足某个条件
    bool noneGreaterThan10 = std::none_of(v.begin(), v.end(), [](int i) { return i > 10; });
    std::cout << "none_of: " << noneGreaterThan10 << std::endl;

    // 14. reverse()
    // 反转范围内元素的顺序
    std::reverse(v.begin(), v.end());
    std::cout << "reverse: ";
    for (int i : v) std::cout << i << " ";
    std::cout << std::endl;

    // 15. sort()
    // 对范围内的元素进行排序
    std::sort(v.begin(), v.end());
    std::cout << "sort: ";
    for (int i : v) std::cout << i << " ";
    std::cout << std::endl;

    // 16. transform()
    // 对范围内的每个元素应用一个函数，并将结果写入另一范围
    std::vector<int> v_transformed(5);
    std::transform(v.begin(), v.end(), v_transformed.begin(), [](int i) { return i * 2; });
    std::cout << "transform (multiply by 2): ";
    for (int i : v_transformed) std::cout << i << " ";
    std::cout << std::endl;

    // 17. unique()
    // 移除范围内连续相同的元素，使其唯一
    auto unique_end = std::unique(v.begin(), v.end());
    v.erase(unique_end, v.end());
    std::cout << "unique: ";
    for (int i : v) std::cout << i << " ";
    std::cout << std::endl;

    return 0;
}
