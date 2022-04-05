// 
// macOS
// Space Invaders
// SchumakerTeam
// Hudson Schumaker
//

#include "Invader.hpp"

void Invaders::moveX(int dx) {
    this->x += speed * dx;
}

void Invaders::moveY(int dy) {
    this->y += speed * dy;
}

void Invaders::move(int dx, int dy) {
    this->x += speed * dx;
    this->y += speed * dy;
}

void Invaders::setPos(int px, int py) {
    this->x = px;
    this->y = py;
}

void Invaders::setSpeed(int s) {
    this->speed = s;
}

void Invaders::draw(SDL_Renderer* renderer) {
    SDL_Rect rect = { x, y, w, h };
    SDL_RenderCopy(renderer, sprite, NULL, &rect);
}

bool Invaders::isDestroyed() const { return destroyed; };
void Invaders::setDestroyed(bool d) { this->destroyed = d; };