#include <stdio.h>
#include <stdlib.h>


// Global variables
#define MAX 10 // Max process count
int process_count;
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
    }
}

// Perform First Come First Serve Scehduling
void schedule(){
    int curr_time = 0;
    for(int i = 0; i < process_count; ++i){
        printf("test");
        // Wait time is the time for which this process was made to wait 
        wait_time[i] = curr_time;
        // The current process is being executed
        curr_time += burst_time[i];
        //The tat is being noted (time at which the process finished)
        turn_around_time[i] = curr_time;
        
        printf("%d\t%d\t%d\t%d\n", i, burst_time[i], wait_time[i], turn_around_time[i]);
        
        order[order_count++] = i;
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