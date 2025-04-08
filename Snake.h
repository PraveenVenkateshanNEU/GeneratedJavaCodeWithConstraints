#ifndef SNAKE_H
#define SNAKE_H

class Snake : Entity {

private:
	Game controller;
	Direction navigator;
	CollisionDetector detector;
	int length;
	Direction direction;
	List<Segment> body;
	Segment position;

public:
	void move();

	void grow();

	void changeDirection(int newDirection);

	Segment getPosition();

	void serialize();
};

#endif
