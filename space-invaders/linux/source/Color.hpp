// 
// macOS
// Space Invaders
// SchumakerTeam
// Hudson Schumaker
//

#pragma once
#include <SDL2/SDL.h>

class Color final {
    
    public:
        Color();
        ~Color();

        static SDL_Color getRed();
        static SDL_Color getGreen();
        static SDL_Color getBlue();
        static SDL_Color getWhite();
        static SDL_Color getBlack();
        static SDL_Color getGray();
        static SDL_Color getOrange();
        static SDL_Color getYellow();
        static SDL_Color getPink();
};