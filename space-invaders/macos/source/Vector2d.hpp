// 
// macOS
// Space Invaders
// SchumakerTeam
// Hudson Schumaker
//

#pragma once

template <typename T> struct Vector2d {
    T x = 0;
    T y = 0;
    
    Vector2d() {}
    Vector2d(T x, T y) : x(x), y(y) {}
    
    static Vector2d foward(){
        T x = 1;
        T y = 0;
        return Vector2d(x, y);
    }

    
};

using Vector2di = Vector2d<int>;
using Vector2df = Vector2d<float>;