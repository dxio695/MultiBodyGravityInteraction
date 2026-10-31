#include <iostream>
#include <vector>
#include "Body.h"
#include "Physics.h"

int main() {
    std::vector<Body> bodies;
    bodies.push_back({ {0.0, 0.0}, {0.0, 0.0}, 100.0 });
    bodies.push_back({ {10.0, 0.0}, {0.0, 1.0}, 1.0 });

    const double dt = 0.1;
    for (int i = 0; i < 5; ++i) {
        Physics::step(bodies, dt);
        std::cout << "Step " << i << ": body 1 at ("
            << bodies[1].position.x << ", "
            << bodies[1].position.y << ")\n";
    }
    return 0;
}