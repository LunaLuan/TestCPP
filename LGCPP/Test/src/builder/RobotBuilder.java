package builder;

public interface RobotBuilder {
	
	public void addStart();
	public void addParts();
	
	public Robot createRobot();
}
