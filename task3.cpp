#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>
#include <memory>
#include "star.h"


int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cerr << "Please provide a star resource file\n";
        return -1;
    }
    std::vector<std::shared_ptr<Star>> stars;
    std::ifstream f(argv[1]);
    std::string line;
    while (std::getline(f, line))
        stars.push_back(std::make_shared<Star>(line));
    for (auto& s: stars) {
        std::cout << s << std::endl;
    }
    std::cout << "Stars in alphabetical order\n";
    // TODO add sorting capabilities to the Star class so that 
    // this line works the same way as the one with the lambda function
    // std::sort(stars.begin(), stars.end()
    std::sort(stars.begin(), stars.end(),
            [](const Star& l, const Star& r) {
            return l.getName() < r.getName();
            });
    for (auto& s: stars) {
        std::cout << s << std::endl;
    }
    std::cout << "Stars sorted by the length of their name\n";
    // TODO add sorting by length of name

    std::cout << "Stars sorted by type (primary) and by name (secondary)\n";
    // TODO 
    //
    std::cout << "Stars sorted by their distance from the Sun\n";
    Star Sun("Sun", 100, -100, 0);
    // TODO 
}
