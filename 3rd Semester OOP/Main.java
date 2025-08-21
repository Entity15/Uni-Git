import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a temperature in Celsius to convert to Fahrenheit:");
        int celsius = sc.nextInt();
        RandomFuncs.ctof(celsius);
        System.out.println("Enter the base and height of a triangle to calculate its area:");
        int base = sc.nextInt();
        int height = sc.nextInt();
        System.out.print("Area of the triangle: ");
        RandomFuncs.areaoftriangle(base, height);
        System.out.println("Enter a number to check if it is prime:");
        RandomFuncs.primechecker(sc.nextInt());
        System.out.println("Enter a number to calculate the sum of its digits:");  
        RandomFuncs.sumofdigits(sc.nextInt());
        System.out.println("Enter a number to generate Fibonacci series up to that number:");
        RandomFuncs.fibonacci(sc.nextInt());
        sc.close();
    }
}
