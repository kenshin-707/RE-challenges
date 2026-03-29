public class Challenge06 {
    public static void main(String[] args) {
        // Shuffled separate strings
        String[] parts = {"SUHUFFLED", "_IS", "_CAPTURED"};
        
        // Unscramble by replacing leet speak
        StringBuilder flagContent = new StringBuilder();
        for (String part : parts) {
            String unleet = part.replace("E", "3").replace("I", "1").replace("A", "4");
            flagContent.append(unleet);
        }
        
        // Print the flag
        System.out.println("BETA{" + flagContent.toString() + "}");
    }
}
