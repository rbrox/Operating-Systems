🔄 Introduction to MFT and MVT Programs 🔄

This repository contains two C programs that simulate Multiprogramming with Fixed Number of Tasks (MFT) and Variable Number of Tasks (MVT). Each program focuses on memory management techniques in multiprogramming systems. Below, you'll find a brief overview of each program, including its aim, algorithm, functionality, and answers to VIVA questions. Let's dive in! 🚀

### Program 1: Multiprogramming with Fixed Number of Tasks (MFT) 🧱

🎯 Aim:
The aim of this program is to demonstrate Multiprogramming with a Fixed Number of Tasks (MFT) using the Memory Partitioning method. It allocates memory partitions to tasks based on their sizes and calculates the internal fragmentation.

🔍 Algorithm:
1. Input the total memory size and the number of partitions to be divided.
2. Allocate memory for the operating system (OS).
3. Calculate the available memory by subtracting the memory of the OS from the total memory.
4. Calculate the size of each partition by dividing available memory by the number of partitions.
5. Input the number of processes and their sizes.
6. If the size of a process is less than or equal to the size of a partition, allocate memory to that process.
7. Display the allocation status for each process and calculate the total internal fragmentation.

### Program 2: Multiprogramming with Variable Number of Tasks (MVT) ↔️

🎯 Aim:
The aim of this program is to demonstrate Multiprogramming with a Variable Number of Tasks (MVT) using Dynamic Memory Allocation. It allocates memory to tasks with variable sizes and calculates external fragmentation.

🔍 Algorithm:
1. Input the total memory size and the number of processes to be executed.
2. Allocate memory for the operating system (OS).
3. For each process, read its size and check if available memory is greater than or equal to the process size.
4. If the available memory is sufficient, allocate memory to that process and update available memory.
5. Display whether a process is allocated or blocked based on memory availability.
6. Calculate and display the external fragmentation, which is the remaining memory after allocation.

### VIVA Questions and Answers: 📝

1. **Explain MFT (Multiprogramming with Fixed Number of Tasks).**
   - Multiprogramming with Fixed Number of Tasks (MFT) is a memory management technique used in operating systems. In MFT, the available memory is divided into fixed-sized partitions, and each partition is assigned to a single task or process. The number of partitions is fixed and does not change during execution. This approach ensures that each process gets a fixed amount of memory, reducing external fragmentation but potentially leading to inefficient memory utilization.

2. **Full form of MFT:**
   - MFT stands for Multiprogramming with Fixed Number of Tasks.

3. **Full form of MVT:**
   - MVT stands for Multiprogramming with Variable Number of Tasks.

4. **Differentiate MFT and MVT:**
   - MFT (Multiprogramming with Fixed Number of Tasks) allocates fixed-sized memory partitions to processes, and the number of partitions remains constant throughout execution. MVT (Multiprogramming with Variable Number of Tasks), on the other hand, uses dynamic memory allocation to allocate varying memory sizes to processes, and the number of tasks can change dynamically during execution.
   - In MFT, memory partitions are predefined, leading to less external fragmentation but potentially inefficient memory utilization. In MVT, memory is allocated dynamically, resulting in more external fragmentation but better memory utilization.

5. **The ____ Memory is called a hole.**
   - The unoccupied memory space between allocated partitions is called a hole. This space cannot be utilized by processes and results in external fragmentation.

6. **OS/MVT uses ____ concept to load programs into Main memory.**
   - OS/MVT (Multiprogramming with Variable Number of Tasks) uses dynamic memory allocation concept to load programs into the main memory. This means that memory is allocated to processes as they request it during runtime, resulting in variable-sized partitions.

7. **OS/MFT uses ____ concept to load programs into Main memory.**
   - OS/MFT (Multiprogramming with Fixed Number of Tasks) uses fixed memory partitioning concept to load programs into the main memory. The total memory is divided into fixed-sized partitions, and each process is allocated a single partition during execution.
