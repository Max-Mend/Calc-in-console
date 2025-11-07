# Calc-in-console

A simple and convenient calculator for performing basic mathematical operations through the console.

## Features

-  Addition
-  Subtraction
-  Multiplication
-  Division
-  Exponentiation
-  Continuous operation mode
-  Error handling (division by zero, invalid input)

## Requirements

- C compiler (GCC, Clang, or other)
- Standard C library with `math.h` support

## Compilation

### Linux/macOS
```bash
gcc main.c -o calculator -lm
```

### Windows (MinGW)
```bash
gcc main.c -o calculator.exe -lm
```

## Usage

Run the program:
```bash
./calculator
```

Enter expression in format: `number operator number`

### Examples

```
5 + 3
Result: 8.00

10 / 2
Result: 5.00

2 x 8
Result: 256.00

15 - 7
Result: 8.00

6 * 4
Result: 24.00
```

### Operators

| Symbol | Operation |
|--------|-----------|
| `+` | Addition |
| `-` | Subtraction |
| `*` | Multiplication |
| `/` | Division |
| `x` | Exponentiation (a^b) |

### Exit Program

Enter: `0 q 0`

## Error Handling

The program correctly handles:
-  Division by zero
-  Invalid input format
-  Unknown operators

## Project Structure

```
.
├── main.c          # Main program file
└── README.md       # Documentation
```

## License

This project is licensed under the [MIT License](LICENSE).

## Author

**Max-Mend**

Created as an educational project to demonstrate basic C capabilities.
