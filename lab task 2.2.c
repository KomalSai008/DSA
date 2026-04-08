//Design a structure named "Car" to store details like car ID, model,and rental rate per day. Write a C program to input data for three cars, calculate the total rental cost for a pecified number of days, and display the results
#include <stdio.h>

struct Car {
    int carID;
    char model[50];
    float ratePerDay;
};
int main() {
    struct Car cars[3];
    int days;
    int i;
    for (i = 0; i < 3; i++) {
        printf("\nEnter details for Car %d\n", i + 1);
        printf("Car ID: ");
        scanf("%d", &cars[i].carID);
        printf("Car Model: ");
        scanf("%s", cars[i].model);
        printf("Rental Rate per Day: ");
        scanf("%f", &cars[i].ratePerDay);
    }
    printf("\nEnter number of rental days: ");
    scanf("%d", &days);
    printf("\n--- Rental Cost Details ---\n");
    for (i = 0; i < 3; i++) {
        float totalCost = cars[i].ratePerDay * days;
        printf("\nCar ID: %d", cars[i].carID);
        printf("\nModel: %s", cars[i].model);
        printf("\nTotal Rental Cost for %d days: %.2f\n", days, totalCost);
    }
    return 0;

