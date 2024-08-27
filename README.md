# Activity Selection Problem in Turbo C++

This program solves the Activity Selection Problem using a greedy algorithm approach. The goal is to select the maximum number of activities that do not overlap, given their start and finish times.

## Features

- **Input**: The user inputs the number of activities and their respective start and finish times.
- **Output**: The program outputs the optimal set of activities that can be performed without overlap, along with the total count of these activities.

## How to Compile and Run

### Requirements

- Turbo C++ compiler or any C compiler compatible with Turbo C++ code.

### Compilation Steps

1. Open Turbo C++ or any compatible compiler.
2. Create a new file and copy-paste the code into the file.
3. Save the file with a `.cpp` or `.c` extension.
4. Compile the code by navigating to **Compile** > **Compile** or pressing `Alt + F9`.

### Running the Program

1. Run the program by navigating to **Run** > **Run** or pressing `Ctrl + F9`.
2. Enter the number of activities.
3. Enter the name, start time, and finish time for each activity.
4. The program will display the selected activities that maximize the number of non-overlapping activities.

## Code Structure

The program consists of several key functions:

- **bubble_sort**: Sorts the activities by their finish times in ascending order to facilitate the greedy selection.
- **show_soln**: Displays the selected activities and the count of non-overlapping activities.
- **select_activity**: Selects the maximum number of non-overlapping activities based on their start and finish times.

## Example Usage

### Input

Below is an example of how to input the data:

```bach
Enter Number of Activities: 4

Enter 4 Activities: Enter Activity 1 name, start, and finish time: A1 1 2 Enter Activity 2 name, start, and finish time: A2 3 4 Enter Activity 3 name, start, and finish time: A3 0 6 Enter Activity 4 name, start, and finish time: A4 5 7
```

### Output

After running the program and entering the input as shown above, the program will display:


**Explanation**:

- **Sorted Activities**: The program sorts the activities by their finish times to prioritize those that end the earliest.
- **Selected Activities**: Based on the greedy approach, the program selects activities that do not overlap, resulting in the maximum number of activities being performed.

## Notes

- **Turbo C++ Specifics**: The program uses functions like `clrscr()` and `getch()` for screen management, which are specific to Turbo C++.
- **Greedy Algorithm**: This solution employs a greedy algorithm, making local optimal choices (choosing the earliest finishing activity that is compatible with the current set) to reach a global optimum.

