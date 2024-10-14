#include <iostream>
#include <list>
#include <string>
#include <algorithm>

int main()
{
    using std::list;
    using std::string;

    // 初始化一个 list
    list<string> a = {"hello", "world"};

    // 1. assign()
    a.assign({"new", "values", "inserted"});
    std::cout << "a.assign(): ";
    for (auto &b : a) { std::cout << b << " "; }
    std::cout << std::endl;

    // 2. back()
    auto last = a.back();
    std::cout << "a.back(): " << last << std::endl;

    // 3. begin()
    auto first = a.begin();
    std::cout << "a.begin(): " << *first << std::endl;

    // 4. clear()
    a.clear();
    std::cout << "a.clear(): size = " << a.size() << std::endl;

    // 5. emplace() / emplace_back()
    a.emplace_back("emplaced_value");
    std::cout << "a.emplace_back(): " << a.back() << std::endl;

    // 6. empty()
    std::cout << "a.empty(): " << a.empty() << std::endl;

    // 7. erase()
    a.push_back("value1");
    a.push_back("value2");
    auto it = a.begin();
    a.erase(it);
    std::cout << "a.erase(): ";
    for (auto &b : a) { std::cout << b << " "; }
    std::cout << std::endl;

    // 8. front()
    auto front_val = a.front();
    std::cout << "a.front(): " << front_val << std::endl;

    // 9. insert()
    a.insert(a.begin(), "inserted");
    std::cout << "a.insert(): " << a.front() << std::endl;

    // 10. pop_back()
    a.pop_back();
    std::cout << "a.pop_back(): ";
    for (auto &b : a) { std::cout << b << " "; }
    std::cout << std::endl;

    // 11. push_back()
    a.push_back("pushed_value");
    std::cout << "a.push_back(): " << a.back() << std::endl;

    // 12. size()
    std::cout << "a.size(): " << a.size() << std::endl;

    // 13. sort()
    a.push_back("aaa");
    a.push_back("zzz");
    a.sort();
    std::cout << "a.sort(): ";
    for (auto &b : a) { std::cout << b << " "; }
    std::cout << std::endl;

    // 14. splice()
    list<string> b = {"new_list"};
    a.splice(a.end(), b);
    std::cout << "a.splice(): ";
    for (auto &val : a) { std::cout << val << " "; }
    std::cout << std::endl;

    // 15. swap()
    list<string> temp = {"temp1", "temp2"};
    a.swap(temp);
    std::cout << "a.swap(): ";
    for (auto &val : a) { std::cout << val << " "; }
    std::cout << std::endl;

    return 0;
}
