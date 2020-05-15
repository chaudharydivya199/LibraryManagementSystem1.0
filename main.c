#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include <stdlib.h>

#include "helper_functions.h"
#include "login_credentials.h"


/* First screen of the program */
int wrong_menu_flag = 0;

int main_menu(){

    char enter;

    system("cls");


    do{

        gotoxy(95, 10);
        printf("**************************************");
        gotoxy(95, 11);
        printf("*                                    *");
        gotoxy(95, 12);
        printf("*      LIBRARY MANAGEMENT SYSTEM     *");
        gotoxy(95, 13);
        printf("*                                    *");
        gotoxy(95, 14);
        printf("**************************************");

        gotoxy(95, 30);

        if(wrong_menu_flag == 1){
            printf("  INVALID INPUT !!! TRY AGAIN");
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\t ");
            wrong_id_flag = 0;
        }

        // taking user input
        printf("Do you want to continue to login window?(y/n)");
        scanf("%c", &enter);

        if(enter == 'Y' || enter == 'y'){
            userId();
            break;
        }

        else if(enter == 'N' || enter == 'n'){
            exit(0);

        }

        else{
            wrong_menu_flag = 1;
            main_menu();


        }

        break;
    }
    while(enter != 'Y' || enter != 'y' || enter != 'n' || enter != 'N');

    return 0;
}




int main()
{
    // waiting screen
    printf("WAIT! Make sure the screen is full ");
    Sleep(1000);
    printf("!");
    Sleep(1000);
    printf("!");
    Sleep(1000);
    printf("!");

    main_menu();

    return 0;
}
