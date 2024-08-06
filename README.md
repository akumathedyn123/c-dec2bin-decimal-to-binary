# c-dec2bin-decimal-to-binary: Decimal to Binary Conversion**

This C project converts a decimal number entered by the user into its binary equivalent.

**How to Use**

1. **Cloning from GitHub:**

   - If you don't have Git installed, visit [https://git-scm.com/downloads](https://git-scm.com/downloads) to download and install it.
   - Open a terminal window and navigate to your desired project directory.
   - Clone this repository using the following command:

     ```bash
     git clone https://github.com/akumathedyn123/c-dec2bin-decimal-to-binary.git
     ```

   This will create a new directory named `c-dec2bin-decimal-to-binary` in your current location.

2. **Compiling and Running:**

   - **Linux/macOS:**

     Open a terminal window, navigate to the project directory (`c-dec2bin-decimal-to-binary`), and compile the code using a C compiler like GCC:

     ```bash
     gcc main.c -o dec2bin
     ```

     This creates an executable file named `dec2bin` (dec2bin.exe). Run the program by typing:

     ```bash
     ./dec2bin
     ```

   - **Windows:**

     - Install a C compiler like MinGW ([https://www.mingw-w64.org/](https://www.mingw-w64.org/)).
     - Open a command prompt or terminal window and navigate to the project directory.
     - Compile the code using the following command (adjust the path to your MinGW compiler if necessary):

       ```bash
       mingw32-gcc main.c -o dec2bin.exe
       ```

     - Run the program by typing:

       ```bash
       dec2bin.exe
       ```

**Usage:**

The program will prompt you to enter a decimal number. After you enter the number and press Enter, it will display the equivalent binary representation.

**Example:**

```
Enter a decimal number: 15
The Binary equivalent: 1111
```

**How the Code Works**

- The `dec2bin` function takes an integer `n` as input.
- It initializes `binary` to store the binary equivalent, `tracker` to keep track of the place value in the binary number, and `neg` to check if the input is negative.
- If `n` is negative, it's converted to its positive absolute value using `n = -n`.
- A `while` loop iterates as long as `n` is greater than 0.
  - Inside the loop:
    - The remainder (`n % 2`) gives the last digit of the binary number. This is multiplied by `tracker` and added to `binary`.
    - `n` is divided by 2 to remove the last digit for the next iteration.
    - `tracker` is multiplied by 10 to represent the next place value in the binary number.
- If `n` was originally negative, two's complement is calculated using bitwise inversion (`~binary`) and adding 1 to get the correct binary representation for negative numbers.
- The `main` function prompts the user for a decimal number, calls `dec2bin` to convert it, and prints the result.

**License:**

This project is licensed under the Unlicense License. Refer to the LICENSE file for details.

**Contributions**

Feel free to submit pull requests for improvements or bug fixes.
