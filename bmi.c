//WAP to compute the BMI Index of the person and print the BMI values as per the following ranges.

#include <stdio.h>

int main() {
    float weight, height, bmi;
    printf("Enter weight in kg: ");
    scanf("%f", &weight);
    printf("Enter height in meters: ");
    scanf("%f", &height);
    bmi = weight / (height * height);
    printf("Your BMI is: %.2f\n", bmi);
    if (bmi < 15) {
        printf("Starvation.\n");
    }
    else if (bmi >= 15 && bmi < 17.5) {
        printf("Anorexic.\n");
    }
    else if (bmi >= 17.5 && bmi < 18.5) {
        printf("Underweight.\n");
    }
    else if (bmi >= 18.5 && bmi < 24.9) {
        printf("ideal.\n");
    }
    else if (bmi >= 25 && bmi < 29.9) {
        printf("Overweight.\n");
    }
    else if  (bmi >= 30 && bmi < 39.9) {
        printf("Obese.\n");
    }
    else if  (bmi >= 40) {
        printf("Morbidly Obese.\n");
    }
    else {
        printf("Error in input.\n");
    }

    return 0;
}
