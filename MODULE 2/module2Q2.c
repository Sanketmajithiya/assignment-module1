//2.Write a program to find the simple Interest & Compound Interest

#include <stdio.h>
#include <math.h>

float simpleInterest(float principal, float rate, float time) {
    // Simple Interest formula: SI = P * R * T / 100
    return (principal * rate * time) / 100;
}

float compoundInterest(float principal, float rate, float time) {
    // Compound Interest formula: CI = P * (1 + R/100)^T - P
    return principal * (pow(1 + rate / 100, time)) - principal;
}

int main() {
    float principal_amount, interest_rate, time_period, simple, compound;

    // Taking user input
    printf("Enter the principal amount: ");
    scanf("%f", &principal_amount);
    printf("Enter the interest rate: ");
    scanf("%f", &interest_rate);
    printf("Enter the time period (in years): ");
    scanf("%f", &time_period);

    // Calculating both Simple Interest and Compound Interest
    simple = simpleInterest(principal_amount, interest_rate, time_period);
    compound = compoundInterest(principal_amount, interest_rate, time_period);

    // Displaying the results
    printf("Simple Interest: %.2f\n", simple);
    printf("Compound Interest: %.2f\n", compound);

    return 0;


}


