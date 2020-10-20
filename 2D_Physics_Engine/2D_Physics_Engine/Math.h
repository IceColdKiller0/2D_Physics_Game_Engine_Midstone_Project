#ifndef MATH_H
#define MATH_H
#include <cmath> 
#include <cassert> 
#include <algorithm> 
#include "BeforeCompiled.h"


// what the circle needs in order to detect collision
struct Circle
{
    float radius;
    Vec2 position;
    float mass;
};


#endif

