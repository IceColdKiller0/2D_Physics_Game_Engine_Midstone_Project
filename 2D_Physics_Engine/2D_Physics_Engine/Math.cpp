#include "Math.h"
using namespace std;


//math to test if two circles are intersecting also anything edited out is because it does not work fully yet
float Distance(Vec2 a, Vec2 b)
{
    //return sqrt((a.x - b.x) ^ 2 + (a.y - b.y) ^ 2);
}

bool UnoptimizedCircle(Circle a, Circle b)
{
    float r = a.radius + b.radius;
    return r < Distance(a.position, b.position);
}

bool OptimizedCircle(Circle a, Circle b)
{
    float r = a.radius + b.radius;
    r *= r;
   // return r < (a.x + b.x) ^ 2 + (a.y + b.y) ^ 2;
}

void ResolveCollision(Circle a, Circle b)
{
   // Vec2 RelativeVelocity = velocity.b - velocity.a;
}
