#include "Physics.h"

namespace Physics {
    void step(std::vector<Body>& bodies, double dt) {
        // TODO: next lesson: compute gravitational forces here
        for (Body& b : bodies) {
            b.position.x += b.velocity.x * dt;
            b.position.y += b.velocity.y * dt;
        }
    }
}