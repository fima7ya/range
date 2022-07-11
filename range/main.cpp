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

template <typename Container, typename Item>
void FindAndPrint(Container container, const Item& item) {
    auto found = find(container.begin(), container.end(), item);
    PrintRange(container.begin(), found);
    PrintRange(found, container.end());
}

/*
template <typename Container, typename Element>
void FindAndPrint(const Container& container, const Element& element_to_find) {
    auto it_begin = begin(container);
    auto it_end = end(container);
    auto it = find(it_begin, it_end, element_to_find);
    PrintRange(it_begin, it);
    PrintRange(it, it_end);
}
*/

int main() {

    { // Print
        cout << "Test1"s << endl;
        set<int> test1 = { 1, 1, 1, 2, 3, 4, 5, 5 };
        PrintRange(test1.begin(), test1.end());
        cout << "Test2"s << endl;
        vector<int> test2 = {}; // пустой контейнер
        PrintRange(test2.begin(), test2.end());
        cout << "End of tests"s << endl;
    }


    { // Find and print
        set<int> test = { 1, 1, 1, 2, 3, 4, 5, 5 };
        cout << "Test1"s << endl;
        FindAndPrint(test, 3);
        cout << "Test2"s << endl;
        FindAndPrint(test, 0); // элемента 0 нет в контейнере
        cout << "End of tests"s << endl;
    }

}