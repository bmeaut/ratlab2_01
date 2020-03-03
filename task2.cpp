#include <iostream>
#include <vector>
#include <fstream>
#include "coordinate.h"


void printCoordinates(const std::vector<Coordinate>& coordinates) {
    // TODO replace for with range-based for. Use auto type
    for (auto it=coordinates.begin(); it!=coordinates.end(); it++)
        std::cout << *it << std::endl;
}

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cerr << "Usage: " << argv[0] << " [coordinates file]\n";
        return -1;
    }
    std::vector<Coordinate> coordinates;
    std::ifstream f(argv[1]);
    std::string line;
    while (std::getline(f, line))
        coordinates.push_back(Coordinate(line));
    printCoordinates(coordinates);
    Coordinate origo{0, 0, 0};
    std::cout << "\nDistances from origo:\n";
    for (auto c: coordinates) {
        std::cout << c << ": " << c.distance(origo) << std::endl;
    }
    std::cout << "distance(c1, c1) must be zero: " << coordinates[0].distance(coordinates[0]) << std::endl;
}


