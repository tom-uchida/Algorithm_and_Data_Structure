// 2019/06/17

#include <iostream>
#include <queue>
#include <string>
// using namespace std;

int main() {
    std::queue<std::string> Q;

    Q.push("red");
    Q.push("yellow");
    Q.push("yellow");
    Q.push("blue");

    std::cout << Q.front() << " "; // red
    Q.pop();

    std::cout << Q.front() << " "; // yellow
    Q.pop();

    std::cout << Q.front() << " "; // yellow
    Q.pop();

    Q.push("green");

    std::cout << Q.front() << " "; // blue
    Q.pop();

    std::cout << Q.front() << " "; // green

    return 0;
}