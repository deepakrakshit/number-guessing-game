# 📌 NUMBER GUESSING GAME IN C

A simple C mini project where the computer randomly selects a number between 1 and 100, and the player must guess it.
After each guess, the program gives helpful hints:

🔼 "Higher Number Please!" → your guess is too low
🔽 "Lower Number Please!" → your guess is too high

When you finally get the number right, the program shows how many attempts you took.

This is my first C project, created while learning C programming.

# 🧠 FEATURES
- Random number generation
- User input with validation
- Helpful clues after each guess
- Counts total number of attempts
- Uses loops, conditions, variables, RNG → great for beginners
- Clean and simple code

# 📝 HOW THE GAME WORKS
1. The program picks a random number between 1 and 100.
2. You guess a number.
3. The program tells you:
   - “Higher Number Please!” if your guess is too low
   - “Lower Number Please!” if your guess is too high
4. You keep guessing until you get it right.
5. The program shows the total attempts you used.

# 🧪 SAMPLE OUTPUT
=== Number Guessing Game ===
I'm thinking of a number between 1 and 100.
Guess a number between 1 to 100: 50
Higher Number Please!
Guess a number between 1 to 100: 75
Lower Number Please!
Guess a number between 1 to 100: 63
Correct!
You guessed the number in 3 times

# 🚀 HOW TO COMPILE & RUN
Windows (MinGW / TDM-GCC):
gcc guess.c -o guess.exe
guess.exe

Linux / macOS:
gcc guess.c -o guess
./guess

# 📂 FILES INCLUDED
- guess.c (Main source code)

# 🎯 WHAT I LEARNED
- Loops (do-while)
- Random numbers using rand() and srand()
- Conditions (if-else)
- User input handling
- Game logic
- Writing readable C code

👨‍💻 AUTHOR
Deepak Rakshit
This is my very first C project — more coming soon!
