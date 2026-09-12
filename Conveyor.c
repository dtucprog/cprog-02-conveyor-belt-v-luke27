#include <stdio.h>

int main() { 
    int motor_capacity = 12; 
    printf("Enter the number of motors:\n");
    int motor_count, package_weight;
    scanf("%d", &motor_count);


    printf("how many Kg of packages do we expect:\n");
    scanf("%d", &package_weight);


    if (package_weight > motor_count * motor_capacity) {
        printf("No. The conveyor belt cannot carry the packages.\n");
    } else {
        printf("Yes! The conveyor belt can carry the packages.\n");
    }
    return 0;

}
