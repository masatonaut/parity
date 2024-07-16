# ParityArray Implementation

This project involves implementing a special type of array, named `ParityArray`, which stores integers such that all even numbers are positioned at the beginning of the array, and all odd numbers are positioned at the end. This README provides an overview of the implementation, including the base tasks, heap usage, modularization, and I/O handling.

## Project Structure

- **ParityArray Struct**: Contains a dynamically allocated array, `even_idx`, and `odd_idx`.
- **Functions**:
  - `init()`: Initializes the ParityArray.
  - `insert()`: Inserts integers into the array in the correct position.
  - `print()`: Prints the contents of the array.
  - `destruct()`: Deallocates the underlying array.
  - `dump()`: Writes the array elements to a text file.

## Base Task

1. **ParityArray Struct**:

   - Contains a fixed-size array (initially defined by `ARRAY_SIZE` macro, value 10).
   - Contains two integers: `even_idx` and `odd_idx`.

2. **Functions**:
   - `init()`: Initializes the ParityArray, setting `even_idx` to 0 and `odd_idx` to `ARRAY_SIZE-1`.
   - `insert()`: Inserts integers into their respective positions based on parity.
   - `print()`: Prints only the inserted elements of the array.

## Heap Usage

- Modify `ParityArray` to contain a pointer to a dynamically allocated array.
- Modify `init()` to allocate this array on the heap, with the size provided as a parameter.
- Implement `destruct()` to deallocate the array.

## Modularization

- Separate the functions into different source files.
- Create corresponding header files with the struct definition and function declarations.
- Implement header guards in the header files.

## I/O Handling

- Read a number from the keyboard to determine the size of the `ParityArray`.
- Read that many integers from the user and insert them into the `ParityArray`.
- Implement `dump()` to write the array elements to a text file.

## Usage

1. Initialize a `ParityArray`.
2. Insert integers based on their parity.
3. Print the array.
4. Dump the array contents to a file.
5. Deallocate the array when done.
