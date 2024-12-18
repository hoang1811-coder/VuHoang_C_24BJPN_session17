#include <stdio.h>

void inputArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", (arr + i));
    }
}

void displayArray(int *arr, int size) {
    printf("C�c phan tu trong mang l�: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int arrayLength(int *arr) {
    return sizeof(arr) / sizeof(arr[0]);
}

int sumArray(int *arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += *(arr + i);
    }
    return sum;
}

int findMax(int *arr, int size) {
    int max = *arr;
    for (int i = 1; i < size; i++) {
        if (*(arr + i) > max) {
            max = *(arr + i);}
        }
    }
    return max;
}

int main() {
    int size;
    printf("Nhap vao so phan tu trong mang: ");
    scanf("%d", &size);

    int choice;
    do {
        printf("\nMENU\n");
        printf("1. Nh?p v�o s? ph?n t? v� t?ng ph?n t?\n");
        printf("2. Hi?n th? c�c ph?n t? trong m?ng\n");
        printf("3. T�nh d? d�i m?ng\n");
        printf("4. T�nh t?ng c�c ph?n t? trong m?ng\n");
        printf("5. Hi?n th? ph?n t? l?n nh?t\n");
        printf("6. Tho�t\n");
        printf("Ch?n ch?c nang (1-6): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                inputArray(arr, size);
                break;
            case 2:
                displayArray(arr, size);
                break;
            case 3:
                printf("�? d�i m?ng l�: %d\n", size);
                break;
            case 4:
                printf("T?ng c�c ph?n t? trong m?ng l�: %d\n", sumArray(arr, size));
                break;
            case 5:
                printf("Ph?n t? l?n nh?t trong m?ng l�: %d\n", findMax(arr, size));
                break;
            case 6:
                printf("Tho�t chuong tr�nh.\n");
                break;
            default:
                printf("Ch?n ch?c nang kh�ng h?p l?. Vui l�ng ch?n l?i.\n");
        }
    } while (choice != 6);

    free(arr);
    return 0;
}
