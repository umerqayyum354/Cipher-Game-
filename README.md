# C++ Cipher Challenge Game

A console-based puzzle game written in C++. Solve four cipher challenges, earn points for every level you pass, and try to reach the highest score.

---

## Requirements

- A C++ compiler or IDE such as `g++` (GCC), Code::Blocks or Visual Studio

---

## How to run

1. Download or clone this repository.
2. Compile the source file `Source3.cpp`.

If you use an IDE, open `Source3.cpp`, then build and run it.

---

## How to play

### Main menu

When the game starts you will see three options. Type the number and press **Enter**.

| Option | What it does |
| ------ | ------------ |
| `1` | Start the game and play all four levels |
| `2` | View your current score |
| `3` | End the game |

Any other input shows `invalid choice` and returns you to the menu. After each round you come back to the menu and can play again.

### The four levels

Each round runs the levels in order, 1 to 4. You play all four levels even if you fail one.

| Level | Challenge | What you do | Attempts |
| ----- | --------- | ----------- | -------- |
| 1 | Letter rearrangement | Rearrange the scrambled letters to make a word | 1 |
| 2 | Alphabet-to-number cipher | Convert each letter into its position in the alphabet (A = 1, B = 2, ...) | 2 |
| 3 | Mirror cipher | Decode the word using the reversed alphabet (A = Z, B = Y, ...). A reference table is shown on screen | 2 |
| 4 | Shifting cipher | Decode the word that was shifted forward through the alphabet | 2 |

### Entering answers

- **Levels 1, 3 and 4:** type your answer as one word with no spaces. Upper and lower case both work.
- **Level 2:** type the digits together with no spaces, for example `4821`.
- Press **Enter** to submit.

---

## Scoring

| Event | Points |
| ----- | ------ |
| Pass a level | **+10** |
| Wrong answer with a retry left (levels 2 to 4) | **-5**, and you get a hint |
| Fail a level (no attempts left) | **0** |

- The maximum score for one round is **40**.
- Your score can **never go below 0**.
- Your score carries over between rounds in the same run, so playing again adds to your total.
- The score is shown after every level, and the final score is shown at the end of the round.

---

## Tips

- Read the hint after a wrong answer carefully. It names the cipher you are dealing with.
- Level 1 has no retry, so take your time before you submit.
- Use option `2` on the menu at any time to check your total.

---

## Project files

| File | Description |
| ---- | ----------- |
| `Source3.cpp` | Complete game source code |
| `README.md` | Instructions on how to play (this file) |
