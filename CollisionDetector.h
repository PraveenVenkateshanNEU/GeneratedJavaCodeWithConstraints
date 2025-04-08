#ifndef COLLISIONDETECTOR_H
#define COLLISIONDETECTOR_H

class CollisionDetector {

private:
	Snake player;

public:
	void checkCollision(int entity);

	void checkFoodCollision(int snake, int food);
};

#endif
