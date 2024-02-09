#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Select the type of call:\n");
    printf("1. Landline Call (minute rate: 200 pesos)\n");
    printf("2. International Call (minute rate: 500 pesos)\n");
    printf("3. Cellphone Call (minute rate: 300 pesos)\n");

    int option_call_type;
    printf("Enter the number corresponding to the type of call: ");
    scanf("%d", &option_call_type);

    char* call_type = "";
    int cost_per_minute = 0;

    if (option_call_type == 1) {
        call_type = "Landline";
        cost_per_minute = 200;
    } else if (option_call_type == 2) {
        call_type = "International";
        cost_per_minute = 500;
    } else if (option_call_type == 3) {
        call_type = "Cellphone";
        cost_per_minute = 300;
    } else {
        // Invalid option
        printf("Invalid option. Terminating the program.\n");
        exit(EXIT_FAILURE);
    }

    int call_duration_in_minutes;
    printf("Enter the call duration in minutes: ");
    scanf("%d", &call_duration_in_minutes);

    int total_cost = call_duration_in_minutes * cost_per_minute;

    printf("Call type: %s\n", call_type);
    printf("Call duration: %d minutes\n", call_duration_in_minutes);
    printf("Total cost of the call: %d pesos\n", total_cost);

    return 0;
}
