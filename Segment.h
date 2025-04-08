#ifndef SEGMENT_H
#define SEGMENT_H

class Segment : Entity {

private:
	int x;
	int y;

public:
	void getPosition();

	boolean equals(int obj);
};

#endif
