#include <stdio.h>

enum F1Team {
        ALPINE,
        ASTONMARTIN,
        FERRARI,
        HAAS,
        KICKSAUBER,
        MCLAREN,
        MERCEDES,
        VCARB,
        RBR,
        WILLIAMS
    };

int main(int argv, char* argc[]) {
    enum F1Team myTeam = FERRARI;

    switch (myTeam) {
        case 0:
            printf("Alpine");
            break;
        case 1:
            printf("Aston Martin");
            break;
        case 2:
            printf("Ferrari");
            break;
        case 3:
            printf("Haas");
            break;
        case 4:
            printf("Kick Sauber");
            break;
        case 5:
            printf("McLaren");
            break;
        case 6:
            printf("Mercedes");
            break;
        case 7:
            printf("Visa Cash App Red Bull");
            break;
        case 8:
            printf("Red Bull Racing");
            break;
        case 9:
            printf("Williams");
            break;
    }

    return 0;
}