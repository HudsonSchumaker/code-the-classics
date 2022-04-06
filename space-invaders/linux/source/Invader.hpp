//
// macOS
// Space Invaders
// SchumakerTeam
// Hudson Schumaker
//

#pragma once

#include "Sprite.hpp"

class Invaders final : public Sprite {
    
    public:
        enum class Type {
            SMALL = 100,
            BIG = 150,
            BOSS = 200
        };

    private:
        bool destroyed;
        int speed;
        Invaders::Type t;

    public:
        Invaders(int x, int y, int w, int h, Invaders::Type t) : Sprite(x, y, w, h), destroyed(false), t(t) {};
        void moveX(int dx);
        void moveY(int dy);
        void move(int dx, int dy);
        void draw(SDL_Renderer* renderer) override;
        void setPos(int px, int py);
        void setSpeed(int s);

        bool isDestroyed() const;
        void setDestroyed(bool d);
        int getScore() const;
};