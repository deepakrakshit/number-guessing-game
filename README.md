# 📌 Number Guessing Game (C Language)

A fun and beginner-friendly **Number Guessing Game** written in C.
The computer randomly picks a number between **1 and 100**, and your job is to guess it! After each guess, the program gives you helpful hints to guide you toward the correct number.

---

# 🎮 Overview

This simple project is perfect for beginners learning C. It demonstrates:

* Random number generation
* Loops
* Conditional logic
* Input handling
* Basic game mechanics

---

# 🧠 Features

* Fully interactive terminal game
* Random number generated using `rand()` and `srand()`
* Helpful hints:

  * **Higher Number Please!** → your guess is too low
  * **Lower Number Please!** → your guess is too high
* Counts total attempts
* Validates input to prevent out-of-range guesses
* Clean and readable code structure

---

# 📝 How the Game Works

1. The program secretly picks a number from **1 to 100**.
2. You keep guessing numbers.
3. After each guess, the program tells you if it's too high or too low.
4. When you guess correctly, it shows how many attempts you took.

---

# 🧪 Sample Gameplay

```
=== Number Guessing Game ===
I'm thinking of a number between 1 and 100.
Guess a number between 1 to 100: 50
Higher Number Please!
Guess a number between 1 to 100: 75
Lower Number Please!
Guess a number between 1 to 100: 63
Correct!
You guessed the number in 3 attempts.
```

---

# 🚀 How to Compile & Run

### **Windows (MinGW / TDM-GCC)**

```
gcc guess.c -o guess.exe
guess.exe
```

### **Linux / macOS**

```
gcc guess.c -o guess
./guess
```

---

# 📂 Files Included

* **guess.c** → Main source code of the project.

---

# 🎯 What You Learn

* Using `rand()` and `srand()` for randomness
* Loops (`do-while`)
* If-else conditional structures
* Handling user input
* Game design logic
* Improving code readability

---

# 👨‍💻 Author

**Deepak Rakshit**
This is one of my early C projects — more cool programs coming soon!
