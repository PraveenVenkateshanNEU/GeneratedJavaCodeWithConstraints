#ifndef TIMER_H
#define TIMER_H

class Timer {

private:
	Game controller;
	int countdown;

public:
	void startCountdown();

	void reset();

	boolean isRunning();
};

#endif
