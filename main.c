#include <stdio.h>
#include "include/lab1.h"
#include "include/lab2.h"
#include "include/lab3.h"
#include "include/lab4.h"
#include "include/lab5.h"

void show_menu() {
    printf("\n===== LAB SELECTOR =====\n");
    printf("1. Lab 1 (Basic)\n");
    printf("2. Lab 1 (Additional)\n");
    printf("3. Lab 2 (Basic)\n");
    printf("4. Lab 2 (Additional)\n");
    printf("5. Lab 3 (Basic)\n");
    printf("6. Lab 3 (Additional)\n");
    printf("7. Lab 4 (Basic)\n");
    printf("8. Lab 4 (Additional)\n");
    printf("9. Lab 5 (Basic)\n");
    printf("10. Lab 5 (Additional)\n");
    printf("0. Exit\n");
    printf("Choose: ");
}

int main() { //ьлс
    int choice;
    do {
        show_menu();
        scanf("%d", &choice);
        while (getchar() != '\n'); // очистка буфера
        switch(choice) {
            case 1: lab1_basic(); break;
            case 2: lab1_additional(); break;
            case 3: lab2_basic(); break;
            case 4: lab2_additional(); break;
            case 5: lab3_basic(); break;
            case 6: lab3_additional(); break;
            case 7: lab4_basic(); break;
            case 8: lab4_additional(); break;
            case 9: lab5_basic(); break;
            case 10: lab5_additional(); break;
            case 0: printf("Exiting...\n"); break;
            default: printf("Invalid choice.\n");
        }
    } while(choice != 0);
    return 0;
}

