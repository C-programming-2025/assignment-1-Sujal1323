// Input a number representing days and print the equivalent number of weeks and days.
// Example: 
// Input = 10
// Output = "1 week and 3 days"
#include <stdio.h>

int main() {
    int totalDays, weeks, days;
    printf("Enter number of days: ");
    scanf("%d", &totalDays);
    weeks = totalDays / 7;
    days = totalDays % 
    printf("%d week%s and %d day%s\n", 
           weeks, (weeks == 1 ? "" : "s"), 
           days, (days == 1 ? "" : "s"));

    return 0;
}

