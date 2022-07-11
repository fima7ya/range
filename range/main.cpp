#include <iostream>
#include <vector>
#include <set>

using namespace std;

template <typename Iterator>
void PrintRange(Iterator begin, Iterator end) {
    for (auto it = begin; it != end; ++it) {
        if (it != begin) {
            std::cout << " ";
        }
        std::cout << *it;
    }
    std::cout << std::endl;
}

/*
template <typename It>
void PrintRange(It range_begin, It range_end) {
    for (auto it = range_begin; it != range_end; ++it) {
        cout << *it << " "s;
    }
    cout << endl;
}
*/


int main() {
    cout << "Test1"s << endl;
    set<int> test1 = { 1, 1, 1, 2, 3, 4, 5, 5 };
    PrintRange(test1.begin(), test1.end());
    cout << "Test2"s << endl;
    vector<int> test2 = {}; // пустой контейнер
    PrintRange(test2.begin(), test2.end());
    cout << "End of tests"s << endl;
}