#include "json.hpp"
#include <iostream>
using namespace std;


using json = nlohmann::json;

int main() {
    json level = {
        {"width", 10},
        {"height", 8},
        {"player", {{"x", 2}, {"y", 3}}}
    };
    cout << level.dump(4);
    return 0;
}