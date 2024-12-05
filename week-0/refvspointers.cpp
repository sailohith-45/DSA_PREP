#include <iostream>
#include <utility>
using namespace std;

int main() {
    pair<int, string> p = {42, "hello"};
    pair<int, string>& ref = p; // ref is a reference to p

    pair<int, string> p2 = {24, "world"};
    ref = p2; // This does NOT rebind ref to p2. Instead, it copies the values of p2 into p.

    // Check results
    cout << "p.first: " << p.first << ", p.second: " << p.second << endl; // p is now {24, "world"}
    cout << "p2.first: " << p2.first << ", p2.second: " << p2.second << endl; // p2 is unchanged

    return 0;
}
#include <iostream>
#include <utility>
using namespace std;

int main() {
    pair<int, string> p = {42, "hello"};
    pair<int, string>* ptr = &p; // ptr is a pointer to p

    pair<int, string> p2 = {24, "world"};
    ptr = &p2; // Now ptr points to p2 instead of p

    // Check results
    cout << "ptr->first: " << ptr->first << ", ptr->second: " << ptr->second << endl; // Points to p2
    cout << "p.first: " << p.first << ", p.second: " << p.second << endl; // p is unchanged
    cout << "p2.first: " << p2.first << ", p2.second: " << p2.second << endl; // p2 remains unchanged

    return 0;
}



