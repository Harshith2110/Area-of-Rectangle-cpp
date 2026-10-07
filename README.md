# Area of a Rectangle (C++)

A simple C++ program that asks for the length and width of a rectangle and prints its area.

## Features

- Takes length and width as decimal numbers
- Rejects zero and negative values
- Stops with an error message on bad input

## How to run

You need a C++ compiler like g++.

```bash
g++ rectangle_area.cpp -o rectangle_area
./rectangle_area
```

On Windows PowerShell, run it with `.\rectangle_area.exe`.

## Example

```
Enter length of rectangle: 5
Enter width of rectangle: 3
Area of rectangle is: 15
```

Bad input:

```
Enter length of rectangle: -2
Invalid length. It must be a positive number, not letters, zero, or negative.
```

## Known limitation

Input like `5abc` is read as `5`, and the leftover `abc` can break the next input. 

## Author

Harshith
