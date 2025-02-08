#include <stdio.h>
#include <unistd.h>

void printSignature() {
    char *signature = "\n--- Code by K.Pranith | CVR CSC ---\n";
    for (int i = 0; signature[i] != '\0'; i++) {
        printf("%c", signature[i]);
        fflush(stdout);
        usleep(80000);
    }
    printf("\n");
}

void displayMenu() {
    printf("\n======================================\n");
    printf("           SIMPLE CALCULATOR \n");
    printf("======================================\n");
    printf("1. Addition  \n2. Subtraction  \n3. Multiplication  \n4. Division  \n5. Comparison  \n6. Percentage  \n7. Conversions  \n0. Exit\n");
    printf("======================================\n");
}

void displayConversionMenu(const char *title) {
    printf("\n======================================\n");
    printf("            %s \n", title);
    printf("======================================\n");
}

void performArithmetic(int choice) {
    float num1, num2, result;
    
    printf("Enter First Number: ");
    scanf("%f", &num1);
    printf("Enter Second Number: ");
    scanf("%f", &num2);

    switch (choice) {
        case 1: result = num1 + num2; printf("Sum: %.2f\n", result); break;
        case 2: result = num1 - num2; printf("Difference: %.2f\n", result); break;
        case 3: result = num1 * num2; printf("Product: %.2f\n", result); break;
        case 4: 
            if (num2 != 0)
                printf("Quotient: %.2f\n", num1 / num2);
            else
                printf("Error: Division by zero is not allowed.\n");
            break;
        case 5: 
            if (num1 > num2)
                printf("%.2f is greater than %.2f\n", num1, num2);
            else if (num1 < num2)
                printf("%.2f is greater than %.2f\n", num2, num1);
            else
                printf("Both numbers are equal.\n");
            break;
    }
}

void percentageCalculation() {
    float num, percent;
    
    printf("Enter the number: ");
    scanf("%f", &num);
    printf("Enter the percentage: ");
    scanf("%f", &percent);
    
    printf("%.2f is %.2f%% of %.2f\n", (num * percent / 100), percent, num);
}

void unitConversions() {
    int subChoice;
    
    displayConversionMenu("UNIT CONVERSIONS");
    printf("1. Temperature\n2. Length\n3. Time\n4. Mass\n");
    printf("0. Back to Main Menu\n");
    printf("======================================\n");

    printf("Enter your choice: ");
    scanf("%d", &subChoice);

    float value, convertedValue;
    
    switch (subChoice) {
        case 1:
            displayConversionMenu("TEMPERATURE CONVERSIONS");
            printf("1. Celsius to Fahrenheit\n2. Celsius to Kelvin\n3. Fahrenheit to Celsius\n4. Kelvin to Celsius\n");
            printf("Enter your choice: ");
            scanf("%d", &subChoice);


            switch (subChoice) {
                case 1: 
                    printf("Enter temperature: ");
                    scanf("%f", &value);
                    convertedValue = 1.8 * value + 32; 
                    printf("%.2f°C = %.2f°F\n", value, convertedValue); 
                    break;
                    
                case 2: 
                    printf("Enter temperature: ");
                    scanf("%f", &value);
                    convertedValue = value + 273.15; 
                    printf("%.2f°C = %.2fK\n", value, convertedValue); 
                    break;
                    
                case 3: 
                    printf("Enter temperature: ");
                    scanf("%f", &value);
                    convertedValue = (value - 32) * 5 / 9; 
                    printf("%.2f°F = %.2f°C\n", value, convertedValue);
                    break;
                    
                case 4: 
                    printf("Enter temperature: ");
                    scanf("%f", &value);
                    convertedValue = value - 273.15; 
                    printf("%.2fK = %.2f°C\n", value, convertedValue); 
                    break;
                    
                default: printf("Invalid choice!\n");
            }
            break;

        case 2:
            displayConversionMenu("LENGTH CONVERSIONS");
            printf("1. Meters to Centimeters\n2. Centimeters to Millimeters\n3. Millimeters to Centimeters\n4. Centimeters to Meters\n");
            printf("Enter your choice: ");
            scanf("%d", &subChoice);

            switch (subChoice) {
                case 1: 
                    printf("Enter length: ");
                    scanf("%f", &value);
                    convertedValue = value * 100; 
                    printf("%.2f meters = %.2f centimeters\n", value, convertedValue); 
                    break;
                    
                case 2: 
                    printf("Enter length: ");
                    scanf("%f", &value);
                    convertedValue = value * 10; 
                    printf("%.2f cm = %.2f mm\n", value, convertedValue); 
                    break;
                    
                case 3: 
                    printf("Enter length: ");
                    scanf("%f", &value);
                    convertedValue = value / 10; 
                    printf("%.2f mm = %.2f cm\n", value, convertedValue); 
                    break;
                    
                case 4: 
                    printf("Enter length: ");
                    scanf("%f", &value);
                    convertedValue = value / 100; 
                    printf("%.2f cm = %.2f meters\n", value, convertedValue); 
                    break;
                    
                default: printf("Invalid choice!\n");
            }
            break;

        case 3:
            displayConversionMenu("TIME CONVERSIONS");
            printf("1. Hours to Minutes\n2. Minutes to Seconds\n3. Seconds to Minutes\n4. Minutes to Hours\n");
            printf("Enter your choice: ");
            scanf("%d", &subChoice);

            
            switch (subChoice) {
                case 1: 
                    printf("Enter time: ");
                    scanf("%f", &value);
                    convertedValue = value * 60; 
                    printf("%.2f hours = %.2f minutes\n", value, convertedValue); 
                    break;
                    
                case 2: 
                    printf("Enter time: ");
                    scanf("%f", &value);
                    convertedValue = value * 60; 
                    printf("%.2f minutes = %.2f seconds\n", value, convertedValue); 
                    break;
                    
                case 3: 
                    printf("Enter time: ");
                    scanf("%f", &value);
                    convertedValue = value / 60; 
                    printf("%.2f seconds = %.2f minutes\n", value, convertedValue); 
                    break;
                    
                case 4: 
                    printf("Enter time: ");
                    scanf("%f", &value);
                    convertedValue = value / 60; 
                    printf("%.2f minutes = %.2f hours\n", value, convertedValue); 
                    break;
                    
                default: printf("Invalid choice!\n");
            }
            break;

        case 4:
            displayConversionMenu("MASS CONVERSIONS");
            printf("1. Kilograms to Grams\n2. Grams to Milligrams\n3. Grams to Kilograms\n4. Milligrams to Grams\n");
            printf("Enter your choice: ");
            scanf("%d", &subChoice);

            
            switch (subChoice) {
                case 1: 
                    printf("Enter weight: ");
                    scanf("%f", &value);
                    convertedValue = value * 1000; 
                    printf("%.2f kg = %.2f g\n", value, convertedValue); 
                    break;
                    
                case 2: 
                    printf("Enter weight: ");
                    scanf("%f", &value);
                    convertedValue = value * 1000; 
                    printf("%.2f g = %.2f mg\n", value, convertedValue); 
                    break;
                    
                case 3: 
                    printf("Enter weight: ");
                    scanf("%f", &value);
                    convertedValue = value / 1000; 
                    printf("%.2f g = %.2f kg\n", value, convertedValue); 
                    break;
                    
                case 4: 
                    printf("Enter weight: ");
                    scanf("%f", &value);
                    convertedValue = value / 1000; 
                    printf("%.2f mg = %.2f g\n", value, convertedValue); 
                    break;
                    
                default: printf("Invalid choice!\n");
            }
            break;

        default:
            printf("Returning to main menu...\n");
    }
}

int main() {
    int choice;
    
    while (1) {
        displayMenu();
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 0) {
            printSignature();
            break;
        } else if (choice >= 1 && choice <= 5) {
            performArithmetic(choice);
        } else if (choice == 6) {
            percentageCalculation();
        } else if (choice == 7) {
            unitConversions();
        } else {
            printf("Invalid choice! Try again.\n");
        }
    }
    
    return 0;
}