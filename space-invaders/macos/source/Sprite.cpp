// 
// macOS
// Space Invaders
// SchumakerTeam
// Hudson Schumaker
//

#include "Sprite.hpp"

Sprite::Sprite() {}
Sprite::Sprite(int x, int y) : x(x), y(y) {}
Sprite::Sprite(int x, int y, int w, int h) : x(x), y(y), w(w), h(h) {}

Collider2D Sprite::getBounds() {
	return Collider2D(this->x, this->y, this->w, this->h);
}

void Sprite::setTexture(SDL_Texture* spr) {
	SDL_Point size;
    SDL_QueryTexture(spr, NULL, NULL, &size.x, &size.y);
	sprite = spr; 
	w = size.x; 
	h = size.y;
}

int Sprite::getX() const { return x; };
void Sprite::setX(int x) { this->x = x; };

int Sprite::getY() const { return y; };
void Sprite::setY(int y) { this->y = y; };

int Sprite::getWidth() const { return w; };
void Sprite::setWidth(int w) { this->w = w; };

int Sprite::getHeight() const { return h; };
void Sprite::setHeight(int h) { this->h = h; };