public class Snake extends Entity {

	Game controller;
	Direction navigator;
	CollisionDetector detector;
	private int length;
	private Direction direction;
	private List<Segment> body;
	private Segment position;

	public void move() {
		// TODO - implement Snake.move
		throw new UnsupportedOperationException();
	}

	public void grow() {
		// TODO - implement Snake.grow
		throw new UnsupportedOperationException();
	}

	/**
	 * 
	 * @param newDirection
	 */
	public void changeDirection(int newDirection) {
		// TODO - implement Snake.changeDirection
		throw new UnsupportedOperationException();
	}

	public Segment getPosition() {
		return this.position;
	}

	public void serialize() {
		// TODO - implement Snake.serialize
		throw new UnsupportedOperationException();
	}

}