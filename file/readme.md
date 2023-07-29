📂 Introduction to File Programs 📂

This repository contains three C programs related to file handling. Each program focuses on a different aspect of file operations. Below, you'll find a brief overview of each program, including its aim, algorithm, and functionality. Let's get started! 🚀

### Program 1: Sequential File Allocation 📁

🎯 Aim:
The aim of this program is to demonstrate the Sequential File Allocation method. It allocates memory blocks sequentially to files as they are requested without considering any optimization techniques. The program allows the user to input details of multiple files, including the number of blocks occupied by each file and the starting block of each file. It then displays the allocated blocks for each file.

🔍 Algorithm:
1. Input the number of files and their details (starting block and size) from the user.
2. Allocate blocks to each file sequentially, starting from the specified starting block.
3. Store the allocated blocks for each file in a 2D array.
4. Display the details of all files, including filename, starting block, length, and blocks occupied.

### Program 2: Memory Partitioning and Internal Fragmentation 🧱

🎯 Aim:
This program illustrates the concept of memory partitioning and internal fragmentation. It takes the total memory size, memory for the operating system, and the number of partitions as input. Then, it allocates memory to processes and calculates internal fragmentation (unused memory within partitions).

🔍 Algorithm:
1. Input the total memory size, memory for the operating system, and the number of processes.
2. Calculate the available memory for processes (total memory - memory for OS).
3. Divide the available memory equally among the specified number of partitions.
4. For each process, check if its size is less than or equal to the partition size.
5. If yes, allocate memory to the process and deduct it from the available memory.
6. Display whether the process is allocated or blocked based on memory availability.
7. Calculate and display the total internal fragmentation.

### Program 3: File Handling with Dynamic Memory Allocation 📝

🎯 Aim:
This program showcases file handling using dynamic memory allocation. It allows the user to create a text file, read its contents, and count the occurrences of a specific character in the file.

🔍 Algorithm:
1. Create a new text file and prompt the user to enter text data.
2. Save the input data in the file and close it.
3. Open the file again and read its contents character by character.
4. Ask the user to enter a character to search for its occurrences in the file.
5. Count and display the number of occurrences of the specified character.

