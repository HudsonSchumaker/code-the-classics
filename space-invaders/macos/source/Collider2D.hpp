// 
// macOS
// Space Invaders
// SchumakerTeam
// Hudson Schumaker
//

#pragma once

class Collider2D final {

    private:
        int x, y, w, h;

    public:
        Collider2D();
        Collider2D(int w, int h);
        Collider2D(int x, int y, int w, int h);


        void setX(int x);
	    int getX() const;

	    void setY(int y);
	    int getY() const;

	    void setWidth(int w);
	    int getWidth() const;

	    void setHeight(int h);
	    int getHeight() const;
};