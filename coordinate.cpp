#include <sstream>
#include <fstream>

#include "coordinate.h"

Coordinate::Coordinate(const std::string& line) {
    std::istringstream is(line);
    // TODO extract x, y, z from input stream
    // expected format: x y z
    
}

std::ostream& operator<<(std::ostream& os, const Coordinate& c) {
    // TODO insert (print) coordinate to os
    // format: {x, y, z}
    
    return os;
}
