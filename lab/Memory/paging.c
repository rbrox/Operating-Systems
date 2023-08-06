#include <stdio.h>

// Global Variables
#define MAX 10
int page_count;
int page_size;
int frame_count;
int frame[MAX];

// Prototypes
void input();
void query();

// Main
int main(){

    input();
    query();
    return 0;
}



void input(){
    printf("\nEnter the number of pages in memory: ");
    scanf("%d", &page_count);
    printf("\nEnter page size: ");
    scanf("%d", &page_size);
    printf("\nEnter number of frames: ");
    scanf("%d", &frame_count);

    printf("Enter the page table\n(Enter frame no as -1 if that page is not present in any frame)\n\n");
    printf("PageNo FrameNo\n------ ------\n");

    for (int i = 0; i < page_count; ++i){
        printf("%d\t", i);
        scanf("%d", &frame[i]);
    }
}

void query(){
    int page_num, offset;
    printf("\nEnter the logical address (i.e., page no & offset): ");
    scanf("%d %d", &page_num, &offset); 
    if (frame[page_num] == -1 || page_num > page_count || page_num < 0){
        printf("\nThe required page is not available in any of the frames.");
    }
    else{
        printf("\nPhysical address (i.e., frame no & offset): %d %d\n", frame[page_num], offset);
    }
    int swt = 0;
    printf("\nDo you want to continue (1/0)?: ");
    scanf("%d", &swt);
    if (swt == 1){
        query();
    }
    else{
        return;
    }
}