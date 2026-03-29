# Challenge 06: Java Flag Reconstruction

There are two ways to find the flag:

## Method 1: Static Analysis (if the java is given )

1. Open the given Java file (`Challenge06.java`).
2. Observe the flag string array present in the code.
3. Based on the program's workflow, note that the strings are being combined, and the letters **(E, A, I)** are replaced by **(3, 4, 1)** (leet speak).
4. To get the flag, reverse the process: replace the numbers back to letters in the combined string.

## Method 2: Dynamic Execution(if the class file is given )

1. Compile the Java file: `javac Challenge06.java`
2. Run the compiled class file: `java Challenge06`
3. The program will output the flag directly.