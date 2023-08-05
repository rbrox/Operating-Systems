👨‍💻 Emojised Readme.md for CPU Scheduling Algorithm Simulations 👩‍💻

## 1. FCFS CPU Scheduling Algorithm Simulation 🏁

📜 **Description**: This program simulates the First-Come-First-Serve (FCFS) CPU Scheduling algorithm. FCFS is a non-preemptive scheduling algorithm where processes are executed in the order they arrive.

💡 **Hints**:
- You can represent a process as a struct with attributes like arrival time and burst time.
- Implement a function to calculate the waiting time and turnaround time for each process.
- The waiting time for the first process is always 0. Calculate waiting time for subsequent processes by summing up their burst times.
- The turnaround time for a process is the sum of its burst time and waiting time.
- Print the waiting time and turnaround time for each process and calculate the average waiting time and turnaround time.

## 2. SJF CPU Scheduling Algorithm Simulation ⏱️

📜 **Description**: This program simulates the Shortest Job First (SJF) CPU Scheduling algorithm. SJF is a non-preemptive scheduling algorithm where the process with the shortest burst time gets executed first.

💡 **Hints**:
- You can represent a process as a struct with attributes like arrival time and burst time.
- Implement a function to sort the processes based on their burst time in ascending order.
- Calculate the waiting time for each process, similar to FCFS, but in SJF, the processes with shorter burst times get priority.
- Calculate the turnaround time for each process, which is the sum of burst time and waiting time.
- Print the waiting time and turnaround time for each process and calculate the average waiting time and turnaround time.

## 3. Priority CPU Scheduling Algorithm Simulation 🌟

📜 **Description**: This program simulates the Priority CPU Scheduling algorithm. Priority scheduling is a non-preemptive or preemptive scheduling algorithm where the process with the highest priority gets executed first.

💡 **Hints**:
- You can represent a process as a struct with attributes like arrival time, burst time, and priority.
- Implement a function to sort the processes based on their priority in ascending or descending order, depending on the scheduling policy.
- Calculate the waiting time for each process based on the priority. Lower priority numbers might mean higher priority in some systems.
- Calculate the turnaround time for each process, which is the sum of burst time and waiting time.
- Print the waiting time and turnaround time for each process and calculate the average waiting time and turnaround time.

## 4. Round Robin CPU Scheduling Algorithm Simulation 🔁

📜 **Description**: This program simulates the Round Robin CPU Scheduling algorithm. Round Robin is a preemptive scheduling algorithm that assigns a fixed time slice to each process in a cyclic manner.

💡 **Hints**:
- You can represent a process as a struct with attributes like arrival time, burst time, and remaining time.
- Implement a queue or a circular linked list to manage the processes' order.
- The processes will be executed in a round-robin fashion with a fixed time quantum (time slice).
- Execute processes one by one, and if a process does not complete within the time quantum, put it back in the queue.
- Calculate the waiting time and turnaround time for each process based on the time it spends in the queue and the time it executes.
- Print the waiting time and turnaround time for each process and calculate the average waiting time and turnaround time.

Remember to handle edge cases and validate your inputs appropriately in all programs. Happy coding! 🚀