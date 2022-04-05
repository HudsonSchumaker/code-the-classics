//
// macOS
// Space Invaders
// SchumakerTeam
// Hudson Schumaker
//

#pragma once

#include "Sprite.hpp"

class Invaders final : public Sprite {
    
    private:
        bool destroyed;
        int speed;

    public:
        Invaders(int x, int y, int w, int h) : Sprite(x, y, w, h), destroyed(false) {};
        void moveX(int dx);
        void moveY(int dy);
        void move(int dx, int dy);
        void draw(SDL_Renderer* renderer) override;
        void setPos(int px, int py);
        void setSpeed(int s);

        bool isDestroyed() const;
        void setDestroyed(bool d);

};