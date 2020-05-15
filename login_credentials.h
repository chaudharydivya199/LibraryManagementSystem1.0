
// correct credentials
char* id = "k99sharma";
char* password = "enter";




/* Function for userID input */
int wrong_id_flag = 0;

int userId(void){

    // allocating memory to user_id variable
    char* user_id = (char*)malloc(20 * sizeof(char));

    system("cls");

    // checking the allocation of memory
    if(user_id == NULL){
        exit(1);
    }

    do{

        gotoxy(90, 5);
        printf("**************************************");
        gotoxy(90, 6);
        printf("*                                    *");
        gotoxy(90, 7);
        printf("*      LIBRARY MANAGEMENT SYSTEM     *");
        gotoxy(90, 8);
        printf("*                                    *");
        gotoxy(90, 9);
        printf("**************************************");


        gotoxy(95,20);

        if(wrong_id_flag == 1){
            printf("  INVALID INPUT !!! TRY AGAIN");
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\t ");
            wrong_id_flag = 0;
        }

        system("COLOR 90");

        printf("ENTER LOGIN ID: ");
        scanf("%s", user_id);

        if(strcmp(user_id,id) == 0){
            free(user_id);

            // calling password function
            userPassword();
        }

        else{
            wrong_id_flag = 1;
            userId();
        }

        break;
    }
    while(strcmp(user_id, id));


    return 0;
}





/* Function for user password input */
int wrong_password_flag = 0;

int userPassword(void){

    // allocating memory to user_id variable
    char* user_password = (char*)malloc(20 * sizeof(char));

    system("cls");

    // checking the allocation of memory
    if(user_password == NULL){
        exit(1);
    }

    do{

        gotoxy(90, 5);
        printf("**************************************");
        gotoxy(90, 6);
        printf("*                                    *");
        gotoxy(90, 7);
        printf("*      LIBRARY MANAGEMENT SYSTEM     *");
        gotoxy(90, 8);
        printf("*                                    *");
        gotoxy(90, 9);
        printf("**************************************");

        gotoxy(95,20);
        if(wrong_password_flag == 1){
            printf("  INVALID INPUT !!! TRY AGAIN");
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\t ");
            wrong_password_flag = 0;
        }

        printf("ENTER PASSWORD: ");
        scanf("%s", user_password);

        if(strcmp(user_password, password) == 0){
            system("cls");
            printf("working");
        }

        else{
            wrong_password_flag = 1;
            userPassword();
        }
        break;
    }
    while(strcmp(user_password, password));



    return 0;
}



