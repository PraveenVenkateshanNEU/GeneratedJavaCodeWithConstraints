#ifndef ENTITY_H
#define ENTITY_H

class Entity {

private:
	segment position;

public:
	void move();

	Segment getPosition();
};

#endif
