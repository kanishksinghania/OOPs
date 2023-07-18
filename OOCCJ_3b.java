import java.util.Scanner;

interface Motorbike {
	int s=50;//speed
	public void TD(int time);//Total Distance
	}
	
interface Cycle {
	int d=300;//distance
	public void speed(int time);
	}
	
class TwoWheeler implements Motorbike,Cycle {
	public void TD(int time) {
		
		/*Scanner scan = new Scanner(System.in);
		System.out.println("Enter the speed: ");
		s=scan.nextInt();*/
		int a;
		a=s*time;
		System.out.println("Total Distance travelled is: "+a);
		}
		
	public void speed(int time) {
		
		/*Scanner scan = new Scanner(System.in);
		System.out.println("Enter the Distance travelled: ");
		d=scan.nextInt();*/
		int b;
		b=d/time;
		System.out.println("Speed is: "+b);
		}
	}
	
class OOCCJ_3b {
	public static void main(String[] args) {
		TwoWheeler myobj= new TwoWheeler();
		int t;
		Scanner scan = new Scanner(System.in);
		System.out.println("Enter the time: ");
		t=scan.nextInt();
		myobj.TD(t);
		myobj.speed(t);
		}
	}