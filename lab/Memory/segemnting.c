#include <stdio.h>

// Global
#define MAX 10
int segment_count;
int limit[MAX];
int base[MAX];

// Prototypes
void input();
void query();

int main(){
    input();
    query();

    return 0;
}

void input(){
    printf("\nEnter the number of Segments of process: ");
    scanf("%d", &segment_count);

    for(int i = 0; i < segment_count; ++i){
        printf("\nEnter the Size(Limit value) and BaseAddress of the segment[%d]: ", i);
        scanf("%d %d", &limit[i], &base[i]);
    }

    printf("\nSegNo Limit_value Base_Address\n");
    for (int i = 0; i < segment_count; ++i){
        printf("%d\t%d\t\t%d\n", i, limit[i], base[i]);
    }
}

void query(){
    int seg_no, offset;
    printf("\nEnter the Logical Address : (Segment No and Offset value) :");
    scanf("%d %d", &seg_no, &offset);

    printf("\nBase Address for the given Segment Number is: %d", base[seg_no]);

    if (offset > limit[seg_no]){
        printf("\noffset value is greater than the limit so Address binding not possible");
    }
    else{
        printf("\nPhysical address for the give Logical Adress is: %d", base[seg_no] + offset);
    }

    int swt;
    printf("\nDo you want to continue (1/0)?: ");
    scanf("%d", &swt);
    if (swt == 1){
        query();
    }
    else{
        return;
    }
}