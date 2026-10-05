#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v;

    // Insert elements
    v.push_back(10);
    v.push_back(20);
    v.push_back(5);
    v.push_back(15);

    cout << "Vector elements: ";
    for (vector<int>::iterator it = v.begin(); it != v.end(); ++it)
        cout << *it << " ";
    cout << endl;

    // Sort vector
    sort(v.begin(), v.end());

    cout << "After sorting: ";
    for (vector<int>::iterator it = v.begin(); it != v.end(); ++it)
        cout << *it << " ";
    cout << endl;

    // Reverse vector
    reverse(v.begin(), v.end());

    cout << "After reversing: ";
    for (vector<int>::iterator it = v.begin(); it != v.end(); ++it)
        cout << *it << " ";
    cout << endl;

    // Delete last element
    v.pop_back();

    cout << "After pop_back(): ";
    for (vector<int>::iterator it = v.begin(); it != v.end(); ++it)
        cout << *it << " ";
    cout << endl;

    cout << "Vector size: " << v.size() << endl;

    return 0;
}
