#ifndef COORDINATE_H
#define COORDINATE_H

class Coordinate {
public:
    double x, y, z;
    Coordinate(double x=0, double y=0, double z=0): x{x}, y{y}, z{z} {}
    Coordinate(const std::string& line);
    double distance(const Coordinate& other) const;
    friend std::ostream& operator<<(std::ostream& os, const Coordinate& c);
    friend double distance(const Coordinate& c1, const Coordinate& c2);
}; 
#endif /* !COORDINATE_H */
