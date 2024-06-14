#include <stdio.h>

void print_calendar(int start_day, int total_days) {
    int day = 1;
    int i, j;
    
    printf("\tSun\tMon\tTue\tWed\tThu\tFri\tSat\n");
    
    // Print the leading spaces for the first row
    for (i = 0; i < start_day; i++) {
        printf("\t");
    }

    // Print all days of the month
    for (i = start_day; day <= total_days; i++) {
        printf("\t%d", day);
        
        // New line after Saturday
        if (i % 7 == 6) {
            printf("\n");
        }
        
        day++;
    }
    printf("\n");
}

int main() {
    int start_day, total_days;

    // Example values
    start_day = 4;  // 0 = Sunday, 1 = Monday, ..., 6 = Saturday
    total_days = 30;

    print_calendar(start_day, total_days);

    return 0;
}

