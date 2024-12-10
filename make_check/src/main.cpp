#include "utils.h"
#include "config.h"
#include <iostream>

int main() {
    std::cout << "Welcome to " << PROJECT_NAME << " (version: " << VERSION << ")" << std::endl;
    greet("Developer");
    return 0;
}
