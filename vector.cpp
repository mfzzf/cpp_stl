#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    using std::vector;

    // 初始化一个 vector
    vector<int> vec = {10, 20, 30, 40};

    // 1. assign()
    vec.assign({100, 200, 300});
    std::cout << "vec.assign(): ";
    for (auto &x : vec) std::cout << x << " ";
    std::cout << std::endl;

    // 2. at()
    std::cout << "vec.at(1): " << vec.at(1) << std::endl;

    // 3. back()
    std::cout << "vec.back(): " << vec.back() << std::endl;

    // 4. begin()
    std::cout << "vec.begin(): " << *vec.begin() << std::endl;

    // 5. capacity()
    std::cout << "vec.capacity(): " << vec.capacity() << std::endl;

    // 6. clear()
    vec.clear();
    std::cout << "vec.clear(): size = " << vec.size() << std::endl;

    // 7. emplace() / emplace_back()
    vec.emplace_back(400);
    vec.emplace(vec.begin(), 500);
    std::cout << "vec.emplace(): ";
    for (auto &x : vec) std::cout << x << " ";
    std::cout << std::endl;

    // 8. empty()
    std::cout << "vec.empty(): " << vec.empty() << std::endl;

    // 9. end()
    vec.push_back(600);
    std::cout << "vec.end(): " << *(vec.end() - 1) << std::endl;

    // 10. erase()
    vec.erase(vec.begin());
    std::cout << "vec.erase(): ";
    for (auto &x : vec) std::cout << x << " ";
    std::cout << std::endl;

    // 11. front()
    std::cout << "vec.front(): " << vec.front() << std::endl;

    // 12. insert()
    vec.insert(vec.begin(), 700);
    std::cout << "vec.insert(): " << vec.front() << std::endl;

    // 13. pop_back()
    vec.pop_back();
    std::cout << "vec.pop_back(): ";
    for (auto &x : vec) std::cout << x << " ";
    std::cout << std::endl;

    // 14. push_back()
    vec.push_back(800);
    std::cout << "vec.push_back(): " << vec.back() << std::endl;

    // 15. reserve()
    vec.reserve(20);
    std::cout << "vec.reserve(): capacity = " << vec.capacity() << std::endl;

    // 16. resize()
    vec.resize(5, 900);
    std::cout << "vec.resize(): ";
    for (auto &x : vec) std::cout << x << " ";
    std::cout << std::endl;

    // 17. shrink_to_fit()
    vec.shrink_to_fit();
    std::cout << "vec.shrink_to_fit(): capacity = " << vec.capacity() << std::endl;

    // 18. size()
    std::cout << "vec.size(): " << vec.size() << std::endl;

    // 19. sort() (using algorithm header)
    std::sort(vec.begin(), vec.end());
    std::cout << "std::sort(): ";
    for (auto &x : vec) std::cout << x << " ";
    std::cout << std::endl;

    // 20. swap()
    vector<int> temp = {1, 2, 3};
    vec.swap(temp);
    std::cout << "vec.swap(): ";
    for (auto &x : vec) std::cout << x << " ";
    std::cout << std::endl;

    return 0;
}
