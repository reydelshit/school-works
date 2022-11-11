import java.util.Scanner; 

public class App {
    public static void main(String[] args){


        
        // switch statement 

         Scanner obj = new Scanner(System.in);
         System.out.println("Enter name: ");

         String name = obj.nextLine();

        switch(name){
            case "Ben":
            System.out.println("Hello " + name);  
            break;
            case "Alex":
            System.out.println("Hello " + name);  
            break;
            case "Reydel":
            System.out.println("Hello " + name);  
            break;
            default: 
            System.out.println("Hello " + name);  
            
        }

        // if statement 
        // int  christmasDay = 25;

        // if(christmasDay != 25){
        //     System.out.println("Today is not a christmas day ");  
        // } else {
        //     System.out.println("Merry Christmas!!!!! ");          
        // }



        // else if 
        // Scanner obj = new Scanner(System.in);

        // System.out.println("Which generation do you belong? \n\n");
        // System.out.println("Enter your birth year: ");

        // int birthYear = obj.nextInt();

        // if(birthYear >= 1981 && birthYear <= 1986){
        //     System.out.println("You are from the generation of Millenial ");
        // } else if(birthYear >= 1977 && birthYear <= 1983) {
        //     System.out.println("You are from the generation of Xennial ");
        // } else if (birthYear >= 1997 && birthYear <= 2009) {
        //     System.out.println("You are from the generation of Gen Z ");
        // } else if (birthYear >= 2010){
        //     System.out.println("You are from the generation of Gen Alpha ");
        // } else {
        //     System.out.println("Wala ko kabalo sa inyong generation hahaha");
        // }

    }
}
