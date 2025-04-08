#ifndef BOARD_H
#define BOARD_H

class Board : Drawable {

private:
	Game controller;
	int width;
	int height;

public:
	void initializeBoard();

	void drawBoard();

	void resetBoard();

	void setGamePosition(int snake, int food);
};

#endif
