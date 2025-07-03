import java.util.Scanner;

public class StaticArray {
    public static void main(String[] args) {
        String[] words = new String[10];

        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter 10 words:");
        for (int i = 0; i < words.length; i++) {
            System.out.print("Enter word " + (i + 1) + ": ");
            words[i] = scanner.nextLine();
        }

        System.out.println("\nYou entered:");
        for (int i = 0; i < words.length; i++) {
            System.out.println("Input " + i + ": " + words[i]);
        }

        scanner.close();
    }
}
