#include <stdio.h>

int main() { 
    int motor_capacity = 12; 
    printf("Enter the number of motors:\n");
    int motor_count, package_weight;
    scanf("%d", &motor_count);


    printf("how many Kg of packages do we expect:\n");
    scanf("%d", &package_weight);


    if (package_weight > motor_count * motor_capacity) {
        printf("NO the conveyor can't handle it\nBecause:\n");
        printf("The weight is %d Kg\n", package_weight);
        printf("The Motor Capacity total is %d Kg\n", motor_capacity * motor_count);
    } else {
        printf("Yes the conveyor can handle it\nBecause:\n");
        printf("The weight is %d Kg\n", package_weight);
        printf("The Motor Capacity total is %d Kg\n", motor_capacity * motor_count);
    }
    return 0;

}