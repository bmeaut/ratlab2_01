#ifndef SPHERE_H
#define SPHERE_H

#include "coordinate.h"

class Sphere {
protected:
    Coordinate coordinate;
    std::string name;
public:
    Sphere(const std::string& name, double x, double y, double z): name{name}, coordinate{x, y, z} {}
    Sphere(const Sphere&) = default;
    Sphere() = default;
    std::string getName() const { return name; }
    Coordinate getCoordinate() const { return coordinate; }
};

#endif /* !SPHERE_H */
