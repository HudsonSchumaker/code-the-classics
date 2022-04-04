// 
// macOS
// Space Invaders
// SchumakerTeam
// Hudson Schumaker
//

#include "Player.hpp"

void Player::moveX(int dx) {
    this->x += speed * dx;
}

void Player::moveY(int dy) {
    this->y += speed * dy;
}

void Player::move(int dx, int dy) {
    this->x += speed * dx;
    this->y += speed * dy;
}

void Player::setPos(int dx, int dy) {
    this->x = dx;
    this->y = dy;
}

void Player::setSpeed(int s) {
    this->speed = s;
}

void Player::draw(SDL_Renderer* renderer) {
    SDL_Rect rect = {x, y, w, h };
    SDL_RenderCopy(renderer, sprite, NULL, &rect);
}