#include <iostream>
#include <string>

std::string greeting(const std::string& name) {
    return "Hello, " + name + "!";
}

int main() {
    std::cout << greeting("Git user") << '\n';
    return 0;
}
