# EMB01

# Number Guessing Game (CLI in C)

## 🎯 Project Goal

This project is a beginner-level C program designed to help you
practice:

-   Control flow (loops and conditions)
-   Basic input/output handling
-   Random number generation
-   Managing program state (not just run-once programs)

Although simple, this is a foundational project for learning C properly.

------------------------------------------------------------------------

## 1. Core Requirements

### 1.1 Basic Functionality

-   The program generates a random number within a predefined range (for
    example: 1--100).
-   The player repeatedly enters guesses.
-   After each guess, the program prints one of:
    -   "Too high"
    -   "Too low"
    -   "Correct!"
-   The game ends only when the correct number is guessed.

------------------------------------------------------------------------

### 1.2 Program Flow

-   Display instructions when the game starts.
-   Keep asking for guesses until the player is correct.
-   Count how many valid guesses were made.
-   When the game finishes, display the total number of guesses.

------------------------------------------------------------------------

### 1.3 Constraints

-   Must run in the terminal / console.
-   Use only the C standard library.
-   Do NOT hard-code the target number.

------------------------------------------------------------------------

## 2. Implementation Hints (No Code)

### 2.1 Random Number Generation

-   C uses pseudo-random numbers.
-   You need:
    -   A random number generator
    -   A proper seed so each run is different

Hint: Think about using the current time and modulo.

------------------------------------------------------------------------

### 2.2 Main Game Loop

-   The game must run repeatedly.
-   Exit only when the correct number is guessed.

Hint: Consider whether `while` or `do-while` fits better. Decide
clearly: - When should the loop stop? - When should you skip the rest of
the loop?

------------------------------------------------------------------------

### 2.3 Input Handling

Users may enter: - Letters instead of numbers - Numbers outside the
allowed range

Hint: Never trust user input. Always validate: - Is it really a
number? - Is it inside the valid range?

------------------------------------------------------------------------

### 2.4 Player Feedback

-   After every valid guess, provide feedback.
-   The feedback must always be accurate.
-   Never end the game on an incorrect guess.

------------------------------------------------------------------------

### 2.5 Guess Counter

-   Increase the counter only for valid guesses.
-   Invalid input should NOT increase the count.

------------------------------------------------------------------------

## 3. Code Quality Expectations

Even for a beginner project:

-   Separate logic into clear parts (initialization, gameplay, ending).
-   Use meaningful variable names.
-   Avoid magic numbers.
-   Avoid duplicated logic.

------------------------------------------------------------------------

## 4. Extension Requirements (Optional but Highly Recommended)

### Level 1 -- User Experience

-   Allow the player to:
    -   Play again
    -   Quit at any time
-   Display the current guess count.

------------------------------------------------------------------------

### Level 2 -- Difficulty Modes

Provide difficulty selection:

-   Easy: 1--50
-   Medium: 1--100
-   Hard: 1--1000

Each difficulty should also define a maximum number of attempts.

------------------------------------------------------------------------

### Level 3 -- High Score

-   Save the best score (fewest guesses) to a file.
-   On startup:
    -   Load the high score
    -   Display it to the player

Hint: A simple text file is enough.

------------------------------------------------------------------------

### Level 4 -- Hint System

After N failed attempts, provide hints such as:

-   Even / odd
-   Close / far

------------------------------------------------------------------------

### Level 5 -- Anti-Cheat Logic

If the player enters the same number repeatedly:

-   Show a warning
-   Do not increase the guess counter

------------------------------------------------------------------------

## 5. Completion Checklist

-   Game runs reliably
-   No crashes on invalid input
-   Logic works for all cases
-   Code is readable
-   README explains how to play

------------------------------------------------------------------------

## 🧠 Thinking Exercises (Before Coding)

1.  What happens if the user types letters?
2.  How do you ensure the random number changes every run?
3.  Should invalid input increase the guess count?
4.  When replaying, are all states properly reset?



#Seen by Tuan Hung