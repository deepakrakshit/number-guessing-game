# 🔢 Number Guessing Game – C Project

A simple and enjoyable **Number Guessing Game** written in C. The computer secretly picks a random number between **1 and 100**, and your task is to guess it! After every guess, the program gives you a helpful hint.

---

# ⭐ Features

* 🎲 Random number generation
* 💬 Helpful hints after each guess
* 🔢 Validates out-of-range inputs
* 🔁 Repeats until you guess correctly
* 🧮 Shows number of attempts
* 🧩 Beginner-friendly C program

---

# 🧠 How the Game Works

1. The program chooses a number from **1–100** 🎯
2. You enter guesses 🔢
3. It responds with:

   * ⬆️ **Higher Number Please!** (guess is low)
   * ⬇️ **Lower Number Please!** (guess is high)
4. You continue until you guess it right ✔️
5. The program tells you how many attempts you used 🧮

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

# 🚀 Compile & Run

### Windows

```
gcc guess.c -o guess.exe
guess.exe
```

### Linux / macOS

```
gcc guess.c -o guess
./guess
```

---

# 📂 File Included

* `guess.c`

---

# 👨‍💻 Author

Made by **Deepak Rakshit** as part of learning C programming.
