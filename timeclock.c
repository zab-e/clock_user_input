#include <stdio.h>

// Functions
double total_seconds(int h, int m, int s)
{
    return (h * 3600) + (m * 60) + s;
}

double total_minutes(int h, int m, int s)
{
    return total_seconds(h, m, s) / 60.0;
}

void print_12_hour(int h, int m, int s)
{
    int hour12 = h % 12;
    if (hour12 == 0)
        hour12 = 12;
    char *ampm = (h < 12) ? "AM" : "PM";
    printf("12-hour format: %02d:%02d:%02d %s\n", hour12, m, s, ampm);
}

// Main logic
void run_code()
{
    int hours;
    int minutes;
    int seconds;

    printf("Welcome to mini-time checker\n");

    printf("Enter the hours:\n");
    scanf("%d", &hours);
    if (hours < 0 || hours > 23)
    {
        printf("Invalid time\n");
        return;
    }

    printf("Enter the minutes:\n");
    scanf("%d", &minutes);
    if (minutes < 0 || minutes > 59)
    {
        printf("Invalid time\n");
        return;
    }

    printf("Enter the seconds:\n");
    scanf("%d", &seconds);
    if (seconds < 0 || seconds > 59)
    {
        printf("Invalid time\n");
        return;
    }

    printf("Total seconds: %.0f\n", total_seconds(hours, minutes, seconds));
    printf("Total minutes: %.2f\n", total_minutes(hours, minutes, seconds));
    print_12_hour(hours, minutes, seconds);
    printf("24-hour format: %02d:%02d:%02d\n", hours, minutes, seconds);
}

int main()
{
    run_code();
    return 0;
}
