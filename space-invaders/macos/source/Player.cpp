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

void Player::setPos(int px, int py) {
    this->x = px;
    this->y = py;
}

void Player::setSpeed(int s) {
    this->speed = s;
}

void Player::draw(SDL_Renderer* renderer) {
    SDL_Rect rect = { x, y, w, h };
    SDL_RenderCopy(renderer, sprite, NULL, &rect);
}

bool Player::isDestroyed() const { return destroyed; }
void Player::setDestroyed(bool d) { this->destroyed = d; }
