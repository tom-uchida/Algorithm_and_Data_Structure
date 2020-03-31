// 2019/06/17

// listではvectorのように[]演算子を使って各要素へアクセスすることはできない
// 一方，listはvectorと異なり要素の挿入と削除をO(1)で高速に行うことができる特徴を持つ

#include <iostream>
#include <list>
// using namespace std;

int main() {
    std::list<char> L;

    L.push_front('b');  // [b]
    L.push_back('c');   // [bc]
    L.push_front('a');  // [abc]

    std::cout << L.front(); // a
    std::cout << L.back();  // c

    L.pop_front();      // [bc]
    L.push_back('d');   // [bcd]

    std::cout << L.front(); // [b]
    std::cout << L.back() << std::endl; // [d]

    return 0;
}