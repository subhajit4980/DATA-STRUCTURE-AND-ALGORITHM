import java.util.*; // import the Scanner class 
 class intro {
  public static void main(String[] args) {
    Scanner ac = new Scanner(System.in);
    String userName;
    String password;
    // Enter username and press Enter
    System.out.println("Enter username"); 
    userName = ac.nextLine();   
    System.out.println("Enter your password");
    password= ac.nextLine();
    System.out.println("Username is: " + userName); 
    System.out.println("password is: " + password);
  }
}
