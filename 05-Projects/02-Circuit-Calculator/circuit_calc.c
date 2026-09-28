#include <stdio.h>

float reciprocal(float x) {
    return 1.0f / x;
}

float series(int n) {
    float r[10];
    float sum = 0;
    int k;
    for( k = 0; k < n; k++){
        scanf("%f",&r[k]);
        sum = sum + r[k];
    }
    return sum;
}

int main() {
    int choice;
    float v, i, r;
    int n, k;
    float resistors[10];
    float total;

    printf("What to calculate?\n");
    printf("1 = Voltage (V = I * R)\n");
    printf("2 = Current (I = V / R)\n");
    printf("3 = Series resistance (sum of R)\n");
    printf("4 = Parallel resistance (reciprocal sum)\n");
    printf("Enter 1, 2, 3 or 4: ");
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
    } else if (choice == 3) {
        printf("How many resistors? ");
        scanf("%d", &n);

        printf("Series total R = %.2f ohm\n", series(n));
    } else if (choice == 4) {
        printf("How many resistors? ");
        scanf("%d", &n);

        total = 0;

        for (k = 0; k < n; k++) {
            scanf("%f",&resistors[k]);
            if(resistors[k] == 0){
                printf("error");
                return 1;
            }
            total = total + reciprocal(resistors[k]);

        }
        printf("parallel total R = %.2f ohm\n",1.0f/total);

    } else {
        printf("Invalid choice!\n");
    }

    return 0;
}
