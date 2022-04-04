// 
// macOS
// Space Invaders
// SchumakerTeam
// Hudson Schumaker
//

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
    GRRLIB_DrawImg(x, y, sprite, 0, 1, 1, Color::getWhite());
}