#include <stdio.h>

// Function to convert Fahrenheit to Celsius
double convertFahrenheitToCelsius(double fahrenheit) {
    // Conversion formula: (F - 32) * 5/9
    return (fahrenheit - 32.0) * 5.0 / 9.0;
}

int main() {
    double fahrenheit, celsius;

    // Input
    printf("Enter temperature in Fahrenheit: ");
    scanf("%lf", &fahrenheit);

    // Convert Fahrenheit to Celsius using the function
    celsius = convertFahrenheitToCelsius(fahrenheit);

    // Output
    printf("%.2lf Fahrenheit is equal to %.2lf Celsius\n", fahrenheit, celsius);

     return 0;
}

