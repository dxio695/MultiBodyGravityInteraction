#pragma once
#include <vector>
#include "Body.h"

namespace Physics {
    // Advance the simulation by dt seconds.
    void step(std::vector<Body>& bodies, double dt);
}