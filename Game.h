#ifndef GAME_H
#define GAME_H

class Game {

private:
	Timer countdown;
	Board gameboard;
	Snake player;
	GameState state;
	Food intake;
	int score;
	int highscore;
	boolean gameOver;
	GameState currentState;
	Snake snake;
	Food food;
	Board board;
	Timer timer;

public:
	void startNewGame();

	void pauseGame();

	void resumeGame();

	void exitGame();

	void updateScore(int points);

	void showCountDown();
};

#endif
