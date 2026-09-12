#include <stdio.h>

int motor_Capacity = 12;

int main() {
    int motorCount, totalPackageWeight;
printf("\n");
printf("How many motors are carrying the packages?\n");
scanf("%d", &motorCount);
printf("Userprompt: %d\n", motorCount);
printf("\n");

printf("How many kg of packages do we expect?\n");
scanf("%d", &totalPackageWeight);
printf("Userprompt: %d\n", totalPackageWeight);  
printf("\n");

int totalCapacity=motorCount*motor_Capacity;

if (totalPackageWeight <= totalCapacity) {
printf("Yes! The conveyor belt can carry the packages\n");
} else {
printf("No. The conveyor belt cannot carry the packages\n");
} }
