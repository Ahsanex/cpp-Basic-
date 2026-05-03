C++ Programs Data

## File List

- **calculator.cpp**: A simple calculator program that takes the user's name, two numbers, asks for the desired operation, and outputs the result.
  - input of User's name 
  - takes input of 2 numbers 
  - asks the operation to be made
  - gives the output 


- Bank System.cpp:This program acts like a simple bank menu that keeps running until the user chooses Exit.

It first asks for your name, then shows options repeatedly: deposit, withdraw, check balance, or exit.  
The balance starts at `0` and is stored in `total_bal`, so every new operation uses the updated balance from previous steps.

- If you deposit, the entered amount is added to `total_bal`.
- If you withdraw and your balance is enough, the amount is subtracted.
- If you withdraw more than your balance, it shows that you owe money and also shows the owed amount after adding 16% interest.
- If you choose show balance, it prints current `total_bal`.
- If you choose exit, the loop stops and program ends.

So overall, it is a loop-based menu system where the switch handles user choice each time, and the program only stops when Exit is selected.