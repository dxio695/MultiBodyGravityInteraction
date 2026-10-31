#pragma once

struct Vec2 {
    double x = 0.0;
    double y = 0.0;
};

struct Body {
    Vec2   position;
    Vec2   velocity;
    double mass = 1.0;
};