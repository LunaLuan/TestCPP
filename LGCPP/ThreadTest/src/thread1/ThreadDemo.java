package thread1;

class Thread1 extends Thread {
	@Override
	public void run() {
		try {
			System.out.println("Thread: " + Thread.currentThread().getId());
		} catch(Exception e) {
			System.out.println(e.getMessage());
		}
	}
}

public class ThreadDemo {

	
	
	public static void main(String[] args) {
		for(int i = 0 ; i < 8 ; i++) {
			Thread1 t = new Thread1();
			t.start();
		}
	}
}
