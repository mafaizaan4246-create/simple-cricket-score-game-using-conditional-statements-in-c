# simple-cricket-score-game-using-conditional-statements-in-c
I've made a simple cricket score game using conditional statements using c language and where you can give the input to get to know about how many runs you've scored in a single ball
# Cricket Runs Analyzer (C Program)

This is a simple C program that simulates scoring in a cricket match for a single ball. The program asks the user whether the delivery included extras (Wide/No Ball) and the number of runs scored (0–6). Based on the input, it displays the appropriate cricket scoring message.

## Features

* Detects **dot balls**
* Identifies **normal runs (1–6)**
* Handles **boundary (4 runs)** and **six**
* Supports **extras like Wide or No Ball**
* Displays combined results such as *Wide/No Ball + runs scored*
* Handles **invalid inputs**

## How It Works

1. The program asks if the ball had **extras (y/n)**.
2. The user enters the **number of runs scored (0–6)**.
3. The program uses conditional statements (`if-else`) to determine the result and prints the appropriate message.

## Example Output

```
Did the ball have any extras? (y/n): y
Enter the number of runs scored in a single ball (0-6): 2
Wide/No Ball!! plus 2 runs
```

## Technologies Used

* C Programming Language
* Standard Input/Output (`stdio.h`)

## Learning Purpose

This project demonstrates:

* Use of **if-else conditional statements**
* **User input handling** with `scanf`
* Basic **logic building in C**

## Author

Created as a beginner C programming practice project.

