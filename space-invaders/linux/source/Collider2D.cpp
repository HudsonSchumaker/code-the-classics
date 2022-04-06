// 
// macOS
// Space Invaders
// SchumakerTeam
// Hudson Schumaker
//

#include "Collider2D.hpp"

Collider2D::Collider2D() : x(0), y(0), w(0), h(0) {}
Collider2D::Collider2D(int w, int h) : x(0), y(0), w(w), h(h) {} 
Collider2D::Collider2D(int x, int y, int w, int h) : x(x), y(y), w(w), h(h) {}

bool Collider2D::collide(const Collider2D& a, const Collider2D& b) {
    int pwA = a.getX() + a.getWidth();
    int pwB = b.getX() + b.getWidth();

    int phA = a.getY() + a.getHeight();
    int phB = b.getY() + b.getHeight();

    if (pwA > b.getX() && a.getX() < pwB && phA > b.getY() && a.getY() < phB) {
        return true;
    }
    return false;
}

void Collider2D::setX(int x) { this->x = x; };
int Collider2D::getX() const { return x; };

void Collider2D::setY(int y) { this->y = y; };
int Collider2D::getY() const { return y; };

void Collider2D::setWidth(int w) { this->w = w; };
int Collider2D::getWidth() const { return w; };

void Collider2D::setHeight(int h) { this->h = h; };
int Collider2D::getHeight() const { return h; };