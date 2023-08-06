#include <stdio.h>
#include <stdlib.h>


// Global variables
#define MAX 10 // Max process count
int process_count;
int process_id[MAX];
int burst_time[MAX];
int remaining_burst_time[MAX];
int wait_time[MAX];
int turn_around_time[MAX];

int order[100];
int order_count = 0;

int time_slice = 4;

/*
The things we take as input
1. Number of Processes
2. Burst Times
*/ 

int swt(){
    int sum = 0;
    for (int i = 0; i < process_count; sum += remaining_burst_time[i], ++i);

    if (sum == 0){
        return 1;
    }
    else{
        return 0;
    }
}

void input(){
    
    printf("Enter number of processes: ");
    scanf("%d", &process_count);

    if(process_count > MAX){
        printf("Too many processes");
        exit(0);
    }
    printf("Enter Time-Slice: ");
    scanf("%d", &time_slice);
    

    for(int i = 0; i < process_count; ++i){
        printf("\nEnter p[%d] burst time: ", i);
        scanf("%d", &burst_time[i]);
        remaining_burst_time[i] = burst_time[i];
    }
}

// Perform Shortest Job First Scehduling
void schedule(){
    for (int i = 0; i < process_count; wait_time[i] = 0, ++i);
    int curr_time = 0;
    int curr_job = 0;
    while(1){
        wait_time[curr_job] += curr_time;

        if(remaining_burst_time[curr_job] > time_slice){
            remaining_burst_time[curr_job] -= time_slice;
            curr_time += time_slice;
            order[order_count++] = curr_job;
        }
        else if (remaining_burst_time > 0){
            curr_time += remaining_burst_time[curr_job];
            remaining_burst_time[curr_job] = 0;
            turn_around_time[curr_job] = curr_time;
            order[order_count++] = curr_job;
        }
        if (swt){
            break;
        }
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