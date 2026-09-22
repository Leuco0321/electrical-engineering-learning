#include <stdio.h>

int main() {
    int choice;
    float v, i, r;

    printf("What to calculate?\n");
    printf("1 = Voltage (V = I * R)\n");
    printf("2 = Current (I = V / R)\n");
    printf("Enter 1 or 2: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter current I (A): ");
        scanf("%f", &i);
        printf("Enter resistance R (ohm): ");
        scanf("%f", &r);
        v = i * r;
        printf("Voltage V = %.2f V\n", v);
    } else if (choice == 2) {
        printf("Enter voltage V (V): ");
        scanf("%f", &v);
        printf("Enter resistance R (ohm): ");
        scanf("%f", &r);
        if (r == 0) {
            printf("Error: R cannot be zero!\n");
        } else {
            i = v / r;
            printf("Current I = %.2f A\n", i);
        }
    } else {
        printf("Invalid choice!\n");
    }

    return 0;
}
