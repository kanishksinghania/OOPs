import java.util.Scanner;

class  Balance extends Exception {
    public Balance(String message) {
        super(message);
    }
}

class CustomerId extends Exception {
    public CustomerId(String message) {
        super(message);
    }
}

class Amount extends Exception {
    public Amount(String message) {
        super(message);
    }
}

class Negative extends Exception {
	public Negative(String message) {
		super(message);
	}
}

class Account {
    private int cid;
    private String ename;
    private float amount;

    public Account(int cid, String ename, float amount) throws Amount {
        if (amount < 1000) {
            throw new Amount("Minimum amount to create an account is Rs. 1000.");
        }
        this.cid = cid;
        this.ename = ename;
        this.amount = amount;
    }

    public void withdraw(float wth) throws Balance,Negative {
    	if(wth<0) {
    		throw new Negative("Entered amount should be positive.");
    		}
        if (wth > amount) {
            throw new Balance("Insufficient balance.");
        }
        amount -= wth;
    }

    public String toString() {
        return "Customer ID: " + cid + ", Name: " + ename + ", Balance: Rs. " + amount;
    }
}

public class OOCCJ_4b_2 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        Account[] accounts = new Account[20];

        while (true) {
            System.out.println("1. Create an account");
            System.out.println("2. Withdraw money");
            System.out.println("3. Display account details");
            System.out.println("4. Exit");
            System.out.print("Enter your choice: ");
            int choice = scanner.nextInt();

            switch (choice) {
                case 1:
                    System.out.print("Enter customer ID (1-20): ");
                    int cid = scanner.nextInt();
                    if (cid < 1 || cid > 20) {
                        System.out.println("Invalid customer ID.");
                        break;
                    }
                    scanner.nextLine();
                    System.out.print("Enter customer name: ");
                    String ename = scanner.nextLine();
                    System.out.print("Enter initial amount (minimum Rs. 1000): ");
                    float amount = scanner.nextFloat();
                    try {
                        accounts[cid - 1] = new Account(cid, ename, amount);
                        System.out.println("Account created successfully.");
                    } catch (Amount e) {
                        System.out.println(e.getMessage());
                    }
                    break;
                case 2:
                    System.out.print("Enter customer ID (1-20): ");
                    cid = scanner.nextInt();
                    if (cid < 1 || cid > 20) {
                        System.out.println("Invalid customer ID.");
                        break;
                    }
                    System.out.print("Enter withdrawal amount: ");
                    float wth = scanner.nextFloat();
                    try {
                        accounts[cid - 1].withdraw(wth);
                        System.out.println("Amount withdrawn successfully.");
                    }	
                    	catch (Negative e){
                    	System.out.println(e.getMessage());
                    	}
           		 
                   	catch (Balance e) {
                        System.out.println(e.getMessage());
                    }
                    break;
                case 3:
                    System.out.print("Enter customer ID (1-20): ");
                    cid = scanner.nextInt();
                    if (cid < 1 || cid > 20) {
                        System.out.println("Invalid customer ID.");
                        break;
                    }
                    System.out.println(accounts[cid - 1]);
                    break;
                case 4:
                    System.exit(0);
                default:
                    System.out.println("Invalid choice.");
            }
        }
    }
}