# C Penalty Shootout Simulator

A lightweight command-line program written in C that simulates a football (soccer) penalty shootout between two teams. 

## Features
* **Interactive Input:** Prompts the user to input the result of each penalty kick step-by-step.
* **Control Flow:** Utilizes structured `while` loops alongside targeted `goto` jumps to manage sudden-death scenarios and game resets.
* **Score Tracking:** Tracks goals, misses, and score differences in real-time across standard and extended shootout rounds.

## How to Play
1. Run the compiled executable file.
2. For each round, enter the result for Team A and Team B when prompted:
   * Type `G` to log a **Goal**.
   * Type `M` to log a **Miss**.
3. The program dynamically calculates the score difference to determine if a team wins early or if the shootout enters a sudden-death phase.

## Technical Details
This project serves as a practical implementation exercise for:
* Standard C input/output buffering (`scanf` manipulation).
* Conditional logic structures (`if-else` branches).
* Bypassing deeply nested code using the unconditional `goto` statement in C.
