#include <stdio.h>
#include <stdlib.h>


// Global variables
#define MAX 10 // Max process count
int process_count;
int process_id[MAX];
int priority[MAX];
int burst_time[MAX];
int wait_time[MAX];
int turn_around_time[MAX];

int order[100];
int order_count = 0;

/*
The things we take as input
1. Number of Processes
2. Burst Times
*/ 

void input(){
    int x;
    printf("Enter number of processes: ");
    scanf("%d", &process_count);

    if(x > MAX){
        printf("Too many processes");
        exit(0);
    }
    
    for(int i = 0; i < process_count; ++i){
        printf("\nEnter p[%d] burst time: ", i);
        scanf("%d", &burst_time[i]);
        printf("\nEnter p[%d] prority: ", i);
        scanf("%d", &priority[i]);
    }
}

// Perform Shortest Job First Scehduling
void schedule(){
    for(int i = 0; i < MAX; process_id[i] = i , ++i);
    // Sorting the burst time array and filling process id so as to keep track of pid's
    int min_index, min;
    for (int i = 0; i < process_count; ++i){
        min = priority[i];
        min_index = i;
        for (int j = i + 1; j < process_count; ++j){
            if (min > priority[j]){
                min_index = j;
                min = priority[j];
            }
        }

        // Swap
        int temp = priority[i];
        priority[i] = min;
        priority[min_index] = temp;

        // Maintain burst times
        temp = burst_time[i];
        burst_time[i] = burst_time[min_index];
        burst_time[min_index] = temp;

        // Maintain process_id 
        temp = process_id[i];
        process_id[i] = process_id[min_index];
        process_id[min_index] = temp;
    }
    printf("\n\tSorted....\n");
    for(int i = 0; i < process_count; ++i){
        printf("\t%d %d %d\n", priority[i], process_id[i], burst_time[i]);
    }

    
    int curr_time = 0;
    for (int i = 0; i < process_count; ++i){
        wait_time[i] = curr_time;

        curr_time += burst_time[i];
        turn_around_time[i] = curr_time;

        order[order_count++] = process_id[i];
    }
}

void display()
{
    printf("pid\t bt\t wt\ttat\n");
    for (int i = 0; i < process_count; ++i){
        printf("%03d\t%03d\t%03d\t%03d\n", i, burst_time[i], wait_time[i], turn_around_time[i]);
    }

    int average_wait_time = 0;
    for(int i = 0; i < process_count; average_wait_time += wait_time[i], ++i);
    printf("\nAverage Waiting Time = %.2f", (float)average_wait_time/process_count);

    int average_turn_around_time = 0;
    for(int i = 0; i < process_count;  average_turn_around_time += turn_around_time[i], ++i);
    printf("\nAverage Turn Around Time = %.2f", (float)average_turn_around_time/process_count);

    printf("\nOrder\n");
    for(int i = 0; i < order_count; ++i){
        printf("%d-->", order[i]);
    }
    printf("END");
}


void main()
{
    // Get process_count and burst times 
    input();
    // Scedule function schedules it and updates the waiting time and turn around time
    printf("\nScheduling.....\n");
    schedule();
    printf("\nDisplaying....\n");
    display();
}