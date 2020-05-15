

/*Main Menu of Library Management System*/

int user_choice=0;



void main_menu(void)
{

    gotoxy(70,10);
    system("COLOR C0");
    printf("\t\t*---------------------------*");
    printf("\n\t\t\t\t\t\t\t\t\t\t\t  MAIN MENU");
    printf("\n\t\t\t\t\t\t\t\t\t\t*---------------------------*");

    printf("\n\n\n\t\t\t\t\t\t\t\t\t\t1.Issue Books");
    printf("\n\n\n\t\t\t\t\t\t\t\t\t\t2.Receive Books");
    printf("\n\n\n\t\t\t\t\t\t\t\t\t\t3.Books's Record");
    printf("\n\n\n\t\t\t\t\t\t\t\t\t\t4.Book System");
    printf("\n\n\n\t\t\t\t\t\t\t\t\t\t5.Go Back");
    printf("\n\n\n-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------");

    printf("\n\n\n\t\t\t\t\t\t\t\t\tENTER YOUR CHOICE:");  //user input to choose options in main menu
    scanf("%d",&user_choice);

    menu_options();
}




    void menu_options(void)                             //options in main menu
    {

    switch(user_choice)
    {
   case 1:
       system("cls");
       system("COLOR E0");

       printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\tBook Issue Function Is Working");
       break;


   case 2:
       system("cls");
       system("COLOR 20");

    printf("\n\n\n\n\n\n\n\n\t\t\t\t   Book Receive Function Is Working");
    break;

   case 3:
       system("cls");
       system("COLOR 50");


    printf("\n\n\n\n\n\n\n\n\t\t\t\t\t  Book Record Function Is Working");
    break;

   case 4:
       system("cls");
       system("COLOR 10");

   printf("\n\n\n\n\n\n\n\n\t\t\t\t\t  Book System Function Is Working");
   break;

   case 5:
       system("cls");
        system("COLOR 70");
    printf("\n\n\n\n\n\n\n\n\t\t\t\t\t  Press Q to quit");
    exit(0);
    break;


   default:
    printf("\n\n\t\t\t\t\t\t\t\t\tINVALID CHOICE,CHOOSE AGAIN");      //for invalid choice
    printf("\n\t\t\t\t\t\t\t\t\tENTER YOUR CHOICE:");
    scanf("%d",&user_choice);
    getchar();
    menu_options();
    break;
    }





    }



