import java.util.Scanner;

public class Stringex2 {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Please enter a sentence: ");
        String sentence = scanner.nextLine();

         if (!sentence.matches("[a-zA-Z ]+")) {
            System.out.println("Error.");
            return;
        }

        // Split the sentence into words
        String[] words = sentence.split(" ");

        // Iterate over each word and process it
        for (String word : words)
         {
            if (word.length() % 2 == 0) 
            {
                    String lowerWord = word.toLowerCase();
                    String vowels = "aeiou";
                    int count = 0;
                    for (int i = 0; i < vowels.length(); i++)
                     {
                        char ch = vowels.charAt(i);
                        if (lowerWord.indexOf(ch) != -1) 
                        {
                            // Check if the vowel exists in the word and count it
                            count++;
                        }
                    }
                System.out.println("Word: " + word + " - Unique vowels: " + count);
         }
          else {
                 String lowerWord = word.toLowerCase();
                String ch = "bcdfghjklmnpqrstvwxyz";
                int count = 0;
                for (int i = 0; i < ch.length(); i++) 
                {
                    char ch1 = ch.charAt(i);
                    if (lowerWord.indexOf(ch1) != -1)
                     {
                        // Check if the consonant exists in the word and count it
                        count++;
                     }
                 }
               System.out.println("Word: " + word + " - Unique consonants: " + count);
            }
        }
    }

    // Method to count unique vowels in a word
    // public static int countUniqueVowels(String word) {
    //     String lowerWord = word.toLowerCase();
    //     String vowels = "aeiou";
    //     int count = 0;
    //     for (int i = 0; i < vowels.length(); i++) {
    //         char vowel = vowels.charAt(i);
    //         if (lowerWord.indexOf(vowel) != -1) {
    //             // Check if the vowel exists in the word and count it
    //             count++;
    //         }
    //     }
    //     return count;
    // }

    // // Method to count unique consonants in a word
    // public static int countUniqueConsonants(String word) {
    //     String lowerWord = word.toLowerCase();
    //     String consonants = "bcdfghjklmnpqrstvwxyz";
    //     int count = 0;
    //     for (int i = 0; i < consonants.length(); i++) {
    //         char consonant = consonants.charAt(i);
    //         if (lowerWord.indexOf(consonant) != -1) {
    //             // Check if the consonant exists in the word and count it
    //             count++;
    //         }
    //     }
    //     return count;
    }
