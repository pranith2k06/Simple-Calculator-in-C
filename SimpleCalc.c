#include <stdio.h>
#include <unistd.h>

void printSignature() {
    char *signature = "\n--- Code by K.Pranith | CVR CSC ---\n";
    for (int i = 0; signature[i] != '\0'; i++) {
        printf("%c", signature[i]);
        fflush(stdout);
        usleep(50000);
    }
    printf("\n");
}

int main() {
    int choice, subChoice;
    float num1, num2;

    while (1) {
        printf("\nSimple Calculator\n====================\n");
        printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Comparison\n6. Percentage Calculation\n7. Unit Conversions\n");
        printf("====================\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter First Number: ");
                scanf("%f", &num1);
                printf("Enter Second Number: ");
                scanf("%f", &num2);
                printf("Sum: %.2f\n", num1 + num2);
                break;

            case 2:
                printf("Enter First Number: ");
                scanf("%f", &num1);
                printf("Enter Second Number: ");
                scanf("%f", &num2);
                printf("Difference: %.2f\n", num1 - num2);
                break;

            case 3:
                printf("Enter First Number: ");
                scanf("%f", &num1);
                printf("Enter Second Number: ");
                scanf("%f", &num2);
                printf("Product: %.2f\n", num1 * num2);
                break;

            case 4:
                printf("Enter First Number: ");
                scanf("%f", &num1);
                printf("Enter Second Number: ");
                scanf("%f", &num2);
                if (num2 != 0)
                    printf("Quotient: %.2f\n", num1 / num2);
                else
                    printf("Error: Division by zero is not allowed.\n");
                break;

            case 5:
                printf("Enter First Number: ");
                scanf("%f", &num1);
                printf("Enter Second Number: ");
                scanf("%f", &num2);
                if (num1 > num2)
                    printf("%.2f is greater than %.2f\n", num1, num2);
                else if (num1 < num2)
                    printf("%.2f is greater than %.2f\n", num2, num1);
                else
                    printf("Both numbers are equal.\n");
                break;

            case 6:
                printf("Enter the number: ");
                scanf("%f", &num1);
                printf("Enter the percentage: ");
                scanf("%f", &num2);
                printf("%.2f is %.2f%% of %.2f\n", (num1 * num2 / 100), num2, num1);
                break;

            case 7:
                printf("\nUnit Conversions\n====================\n");
                printf("1. Temperature\n2. Length\n3. Time\n4. Mass\n");
                printf("====================\nEnter your choice: ");
                scanf("%d", &subChoice);

                switch (subChoice) {
                    case 1:
                        printf("\nTemperature Conversion Options:\n");
                        printf("1. Celsius to Fahrenheit\n2. Celsius to Kelvin\n3. Fahrenheit to Celsius\n4. Kelvin to Celsius\n");
                        printf("Enter your choice: ");
                        scanf("%d", &choice);
                        switch (choice) {
                            case 1:
                                printf("Enter the temperature: ");
                                scanf("%f", &num1);
                                printf("%.2f°C is equal to %.2f°F\n", num1, (1.8 * num1 + 32));
                                break;
                            case 2:
                                printf("Enter the temperature: ");
                                scanf("%f", &num1);
                                printf("%.2f°C is equal to %.2fK\n", num1, (num1 + 273.15));
                                break;
                            case 3:
                                printf("Enter the temperature: ");
                                scanf("%f", &num1);
                                printf("%.2f°F is equal to %.2f°C\n", num1, (0.5555 * (num1 - 32)));
                                break;
                            case 4:
                                printf("Enter the temperature: ");
                                scanf("%f", &num1);    
                                printf("%.2fK is equal to %.2f°C\n", num1, (num1 - 273.15));
                                break;
                            default:
                                printf("Invalid choice!\n");
                        }
                        break;

                    case 2:
                        printf("\nLength Conversion Options:\n");
                        printf("1. Meters to Centimeters\n2. Centimeters to Millimeters\n3. Millimeters to Centimeters\n4. Centimeters to Meters\n");
                        printf("Enter your choice: ");
                        scanf("%d", &choice);
                        switch (choice) {
                            case 1:
                                printf("Enter the length: ");
                                scanf("%f", &num1);
                                printf("%.2f meters is equal to %.2f centimeters\n", num1, num1 * 100);
                                break;
                            case 2:
                                printf("Enter the length: ");
                                scanf("%f", &num1);
                                printf("%.2f centimeters is equal to %.2f millimeters\n", num1, num1 * 10);
                                break;
                            case 3:
                                printf("Enter the length: ");
                                scanf("%f", &num1);
                                printf("%.2f millimeters is equal to %.2f centimeters\n", num1, num1 / 10);
                                break;
                            case 4:
                                printf("Enter the length: ");
                                scanf("%f", &num1);
                                printf("%.2f centimeters is equal to %.2f meters\n", num1, num1 / 100);
                                break;
                            default:
                                printf("Invalid choice!\n");
                        }
                        break;

                    case 3:
                        printf("\nTime Conversion Options:\n");
                        printf("1. Hours to Minutes\n2. Minutes to Seconds\n3. Seconds to Minutes\n4. Minutes to Hours\n");
                        printf("Enter your choice: ");
                        scanf("%d", &choice);
                        switch (choice) {
                            case 1:
                                printf("Enter the time: ");
                                scanf("%f", &num1);
                                printf("%.2f hours is equal to %.2f minutes\n", num1, num1 * 60);
                                break;
                            case 2:
                                printf("Enter the time: ");
                                scanf("%f", &num1);
                                printf("%.2f minutes is equal to %.2f seconds\n", num1, num1 * 60);
                                break;
                            case 3:
                                printf("Enter the time: ");
                                scanf("%f", &num1);
                                printf("%.2f seconds is equal to %.2f minutes\n", num1, num1 / 60);
                                break;
                            case 4:
                                printf("Enter the time: ");
                                scanf("%f", &num1);
                                printf("%.2f minutes is equal to %.2f hours\n", num1, num1 / 60);
                                break;
                            default:
                                printf("Invalid choice!\n");
                        }
                        break;

                    case 4:
                        printf("\nMass Conversion Options:\n");
                        printf("1. Kilograms to Grams\n2. Grams to Milligrams\n3. Grams to Kilograms\n4. Milligrams to Grams\n");
                        printf("Enter your choice: ");
                        scanf("%d", &choice);
                        switch (choice) {
                            case 1:
                                printf("Enter the weight: ");
                                scanf("%f", &num1);
                                printf("%.2f kilograms is equal to %.2f grams\n", num1, num1 * 1000);
                                break;
                            case 2:
                                printf("Enter the weight: ");
                                scanf("%f", &num1);
                                printf("%.2f grams is equal to %.2f milligrams\n", num1, num1 * 1000);
                                break;
                            case 3:
                                printf("Enter the weight: ");
                                scanf("%f", &num1);
                                printf("%.2f grams is equal to %.2f kilograms\n", num1, num1 / 1000);
                                break;
                            case 4:         
                                printf("Enter the weight: ");
                                scanf("%f", &num1);
                                printf("%.2f milligrams is equal to %.2f grams\n", num1, num1 / 1000);
                                break;
                            default:
                                printf("Invalid choice!\n");
                        }
                        break;

                    default:
                        printf("Invalid option!\n");
                }
                break;

            default:
                printf("Invalid option!\n");
                break;
        }

        printf("\nPress 1 to continue \nAny other key to exit: ");
        int continueChoice;
        scanf("%d", &continueChoice);
        if (continueChoice != 1) {
            printSignature();
            break;
        }
    }
    return 0;
}