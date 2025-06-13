#include <stdio.h>
#include <stdbool.h>

// Use constants for the valid year range
#define MIN_YEAR 1800
#define MAX_YEAR 10000

// Declare data arrays as const to prevent modification
const int DAYS_IN_MONTH[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

// Leap year logic
bool is_leap_year(int year) {
    return (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
}

// Helper function to get a month's name
const char* get_month_name(int month) {
    switch (month) {
        case 1: return "Jan";
        case 2: return "Feb";
        case 3: return "Mar";
        case 4: return "Apr";
        case 5: return "May";
        case 6: return "Jun";
        case 7: return "Jul";
        case 8: return "Aug";
        case 9: return "Sep";
        case 10: return "Oct";
        case 11: return "Nov";
        case 12: return "Dec";
        default: return "Invalid Month";
    }
}

// New function to validate date input
bool is_valid_date(int mm, int dd, int yy) {
    if (yy < MIN_YEAR || yy > MAX_YEAR) return false;
    if (mm < 1 || mm > 12) return false;
    if (dd < 1) return false;

    int max_days = DAYS_IN_MONTH[mm];
    if (mm == 2 && is_leap_year(yy)) {
        max_days = 29;
    }

    if (dd > max_days) return false;

    return true;
}

void add_days_to_date(int *p_month, int *p_day, int *p_year, int days_to_add) {
    while (days_to_add > 0) {
        int days_in_current_month = DAYS_IN_MONTH[*p_month];
        if (*p_month == 2 && is_leap_year(*p_year)) {
            days_in_current_month = 29;
        }

        int days_left_in_month = days_in_current_month - *p_day;

        if (days_to_add > days_left_in_month) {
            // Move to the first day of the next month
            days_to_add -= (days_left_in_month + 1);
            *p_day = 1;
            if (*p_month == 12) {
                *p_month = 1;
                (*p_year)++;
            } else {
                (*p_month)++;
            }
        } else {
            // Add remaining days within the same month
            *p_day += days_to_add;
            days_to_add = 0;
        }
    }
}

int main() {
    int selection;
    printf("Select an option:\n");
    printf("  1. Check for a leap year\n");
    printf("  2. Add days to a date\n");
    printf("Enter selection: ");

    if (scanf("%d", &selection) != 1) {
        printf("Invalid input. Please enter a number.\n");
        return 1;
    }

    if (selection == 1) {
        int year;
        printf("Enter a year between %d and %d: ", MIN_YEAR, MAX_YEAR);
        if (scanf("%d", &year) != 1) {
            printf("Invalid input.\n");
            return 1;
        }

        if (year < MIN_YEAR || year > MAX_YEAR) {
            printf("Year is out of the valid range.\n");
        } else if (is_leap_year(year)) {
            printf("%d is a Leap Year.\n", year);
        } else {
            printf("%d is not a Leap Year.\n", year);
        }

    } else if (selection == 2) {
        int month, day, year, days_to_add;
        printf("Enter a date (mm dd yyyy) and days to add: ");
        
        // Check if 4 items were successfully read
        if (scanf("%d %d %d %d", &month, &day, &year, &days_to_add) != 4) {
            printf("Invalid input format. Please use mm dd yyyy and a number of days.\n");
            return 1;
        }

        // Validate the initial date
        if (!is_valid_date(month, day, year)) {
            printf("The date %d/%d/%d is invalid.\n", month, day, year);
            return 1;
        }

        add_days_to_date(&month, &day, &year, days_to_add);
        printf("New date: %s %d, %d\n", get_month_name(month), day, year);

    } else {
        printf("Invalid selection. Please run again and choose 1 or 2.\n");
    }

    return 0;
}