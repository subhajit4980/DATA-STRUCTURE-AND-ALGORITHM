import java.util.Scanner;
public class guess {
  public static void main(String[] args) {
    int randomNum = (int)(Math.random() * 11);  // 0 to 10
    System.out.println("++++++++++++++++++++++++wellcome++++++++++++++++++++++");
    System.out.println("enter your number:");
    Scanner ac= new Scanner(System.in);
    int guess=ac.nextInt();
    if(guess==randomNum )
    {
      System.out.println("your guess is right!");
    
    }
    else if( 0>guess || guess>10)
    {
      System.out.println("your guess should be from 0 to 10");
    }
    else
    {
      System.out.println("your guess is wrong");
      System.out.println("your guess number should be "+ randomNum); 
    }

    
  }
}
