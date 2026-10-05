#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> l;

    // Insert elements
    l.push_back(30);
    l.push_back(10);
    l.push_back(40);
    l.push_front(20);

    cout << "List elements: ";
    for (list<int>::iterator it = l.begin(); it != l.end(); ++it)
        cout << *it << " ";
    cout << endl;

    // Sort list
    l.sort();

    cout << "After sorting: ";
    for (list<int>::iterator it = l.begin(); it != l.end(); ++it)
        cout << *it << " ";
    cout << endl;

    // Reverse list
    l.reverse();

    cout << "After reversing: ";
    for (list<int>::iterator it = l.begin(); it != l.end(); ++it)
        cout << *it << " ";
    cout << endl;

    // Remove an element
    l.remove(20);

    cout << "After removing 20: ";
    for (list<int>::iterator it = l.begin(); it != l.end(); ++it)
        cout << *it << " ";
    cout << endl;

    cout << "List size: " << l.size() << endl;

    return 0;
}
