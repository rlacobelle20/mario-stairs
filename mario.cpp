#include <iostream>
#include <string>

int main() {
    unsigned int steps = 1;
    std::cin >> steps >> "How many steps? ";

    output_steps(steps);

    return 0;
}

void output_steps(unsigned int steps) {
    for (unsigned int i = 0; i < steps; i++) {
        // must print step - i amount of spaces
        // print i amount of #

        std::string spaces(' ', steps - i);
        std::string hashtag('#', i);

        std::cout << spaces << hashtag << std::endl;
    }
}
