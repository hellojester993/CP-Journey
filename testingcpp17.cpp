#include <iostream>
#include <string>
#include <tuple>

int main() {
    // A C++17 'Tuple' - basically a container for different types of data
    auto user = std::make_tuple(1, "Noob", "C++17");

    // STRUCTURED BINDING (The cool C++17 part):
    // We unpack all 3 values into individual variables instantly.
    auto [id, name, version] = user;

    std::cout << "User " << name << " (ID: " << id << ") is learning " << version << "!" << std::endl;

    return 0;
}