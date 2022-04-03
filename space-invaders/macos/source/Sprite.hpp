// 
// macOS
// Space Invaders
// SchumakerTeam
// Hudson Schumaker
//


#pragma once

#include <SDL2/SDL.h>
//#include "Rectangle.hpp"

class Sprite {
protected:
    int x, y, w, h;
		
public:
	SDL_Texture* sprite;
	
	Sprite();
	Sprite(int x, int y);
    Sprite(int x, int y, int w, int h);
//	Rectangle getBounds();
	virtual void draw(SDL_Renderer* renderer) = 0;
	void setTexture(SDL_Texture* spr);
				
	const int getX();
	void setX(int x);

    int getY() const;
    void setY(int y);

    int getWidth() const;
    void setWidth(int w);

	int getHeight() const;
   	void setHeight(int h);
};
