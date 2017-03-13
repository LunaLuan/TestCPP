package builder;

public class CookieRobot extends Robot {
	
	private CookieRobot() {
		
	}
	
	
	public static class CookieRobotBuilder implements RobotBuilder {

		@Override
		public void addStart() {
			// TODO Auto-generated method stub
			
		}

		@Override
		public void addParts() {
			// TODO Auto-generated method stub
			
		}

		@Override
		public Robot createRobot() {
			// TODO Auto-generated method stub
			return new CookieRobot();
		}
		
	}

}
