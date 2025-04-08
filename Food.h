#ifndef FOOD_H
#define FOOD_H

class Food : Entity {

private:
	Game controller;
	Segment position;

public:
	void spawnFood();

	Segment getPosition();
};

#endif
