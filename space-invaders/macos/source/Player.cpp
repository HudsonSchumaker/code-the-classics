// 
// macOS
// Space Invaders
// SchumakerTeam
// Hudson Schumaker
//

#include "Player.hpp"

void Player::moveX(int dx) {
    this->x += dx;
}

void Player::moveY(int dy) {
    this->y += dy;
}

void Player::move(int dx, int dy) {
    this->x += dx;
    this->y += dy;
}

void Player::setPos(int dx, int dy) {
    this->x = dx;
    this->y = dy;
}

void Player::draw() {

}