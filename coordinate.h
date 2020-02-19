#ifndef COORDINATE_H
#define COORDINATE_H

#include <string>
#include <iostream>

class Coordinate {
public:
    double x, y, z;
    Coordinate(double x=0, double y=0, double z=0): x{x}, y{y}, z{z} {}
    Coordinate(const std::string&);
    friend std::ostream& operator<<(std::ostream& os, const Coordinate& c);
}; 
#endif /* !COORDINATE_H */
