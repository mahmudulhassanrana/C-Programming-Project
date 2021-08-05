#include <stdio.h>
#include <string.h>
struct managment
{
    int Mobile;
    int room;
    int croom;
    int cMobile;
    int cfMobile;
    int age;
    char name[30];
    char cname[20];
    char cfname[20];
    char cfMail[30];
    char oname[20];
    char omail[20];
    char card[20];
    char onumber[100];
    char cMail[30];
    char Sex[30];
    char pcode[10];
    char Marital_Status[30];
    char place_of_birth[30];
    char Occupotion[30];
    char Address[30];
    char fname[100];
    char lname[100];
    char username[100];
    char password[100];
    char s1[100];
    char s2[200];

} m;

;
void manag()
{

    system("cls");

    system("color F1");
    printf("\n\n");
    printf("\t\t|*|*********************************************************************|*|\n");
    printf("\t\t|*|\t\t\t\t\t\t\t\t\t|*|\n");
    printf("\t\t|*|\t\t\tTOUR AND TRAVEL MANAGEMENT SYSTEM\t\t|*|\n");
    printf("\t\t|*|\t\t\t...***......=========......***...\t\t|*|\n");
    printf("\t\t|*|\t\t\t\t\t\t\t\t\t|*|\n");
    printf("\t\t|*|\t\t\t1-Enter.....1..Customer\t\t\t\t|*|\n");
    printf("\t\t|*|\t\t\t2-Enter.....2..Admin\t\t\t\t|*|\n");
    printf("\t\t|*|\t\t\t\t\t\t\t\t\t|*|\n");
    printf("\t\t***************************************************************************\n");
    int option;
    printf("\t\t \t\t#########Enter the choice option:");
    scanf("%d",&option);
    system("cls");
    switch(option)
    {
    case 1:
        login_fact();
        break;
    case 2:
        admin_login_fact();
        break;
    }

    getch();
}
void mainbar()
{


    system("color 8A");
    printf("\n\t\t\t\t AMRA ACI AMRA THAKBO\n");
    printf("\t\t\t\t\tJOTO DIN APNERA RAKBEN\n");
    printf("\n\n");
    printf("\t|*|*************************************************************************************|*|\n");
    printf("\t|*|\t\t\t\t\t\t\t\t\t\t\t|*|\n");
    printf("\t|*|\t\t\tTOUR AND TRAVEL MANAGEMENT SYSTEM\t\t\t\t|*|\n");
    printf("\t|*|\t\t\t...***......=========......***...\t\t\t\t|*|\n");
    printf("\t|*|\t\t\t\t\t\t\t\t\t\t\t|*|\n");
    printf("\t|*|\t\t\t-Enter 1....To View package \t\t\t\t\t|*|\n");
    printf("\t|*|\t\t\t-Enter 2....To Booking  \t\t\t\t\t|*|\n");
    printf("\t|*|\t\t\t-Enter 3....To Booking Cancellation   \t\t\t\t|*|\n");
    printf("\t|*|\t\t\t-Enter 4....To Give Feedback  \t\t\t\t\t|*|\n");
    printf("\t|*|\t\t\t-Enter 5....view hotel room boking  \t\t\t\t|*|\n");
    printf("\t|*|\t\t\t     '''press 6 to back'''    \t\t\t\t\t|*|\n");
    printf("\t|*|\t\t\t\t\t\t\t\t\t\t\t|*|\n");
    printf("\t|*|\t\t\t\t\t\t\t\t\t\t\t|*|\n");
    printf("\t*******************************************************************************************\n");
    printf("\t  \t \t **************** Enter the number ******************\n  \t \t \t \t \t \t ");
    int option;
    scanf("%d",&option);
    switch(option)
    {

    case 1:
        system ("cls");
        View_package();
        break;
    case 2:
        system ("cls");
        Booking();
        break;
    case 3:
        system ("cls");
        Booking_cancel();
        break;
    case 4:
        system ("cls");

        Feedback();
        break;
    case 5:
        system ("cls");
        hotel();
        break;
    case 6:

        system ("cls");
        manag();
        break;
    }

}


void insert()
{


    system("color F4");
    struct managment m;
    char another=1;
    FILE *fp;
    fp = fopen("customer.txt", "a+");
    printf("\n");
    printf("\tEnter the name:");
    scanf("%s",&m.name);
    printf("\n");
    printf("\tEnter your Package code:");
    scanf("%s",&m.pcode);
    printf("\n");
    printf("\tHow many room do you want:");
    scanf("%d",&m.room);
    printf("\n");
    printf("\tEnter the Sex:");
    scanf("%s",&m.Sex);
    printf("\n");
    printf("\tEnter the age:");
    scanf("%d",&m.age);
    printf("\n");
    printf("\tEnter the phone number:");
    scanf("%d",&m.Mobile);
    printf("\n");
    printf("\tEnter the place of birth:");
    scanf("%s",&m.place_of_birth);
    printf("\n");
    printf("\tEnter the  Occupation:");
    scanf("%s",&m.Occupotion);
    printf("\n");
    printf("\tEnter the  Address:");
    scanf("%s",&m.Address);
    printf("\n");
    printf("\tEnter the  Marital Status:");
    scanf("%s",&m.Marital_Status);
    fwrite(&m, sizeof(m), 1, fp);
    fclose(fp);
    printf(" .............* 1-1Yes, 2-2No *.................\n \t \t \t \t \t \t \t \t \t");
    scanf("%s",&another);
    system ("cls");
    if (another == '1')
    {
        system ("cls");
        payment();

    }

    if (another == '2')
    {
        system ("cls");
        mainbar();
    }

}
void payment()

{

    system ("cls");
    printf("\n\n\n");
    printf("\t\t|*|*********************************************************************|*|\n");
    printf("\t\t|*|\t\t\t\t\t\t\t\t\t|*|\n");
    printf("\t\t|*|\t\t\t\t\t\t\t\t\t|*|\n");
    printf("\t\t|*|\t\t\tBooking cancel press '1'\t\t\t|*|\n");
    printf("\t\t|*|\t\t\tGive Payment press '2'\t\t\t\t|*|\n");
    printf("\t\t|*|\t\t\tGo back '3'\t\t\t\t\t|*|\n");
    printf("\t\t|*|\t\t\t\t\t\t\t\t\t|*|\n");
    printf("\t\t***************************************************************************\n");
    int option;
    printf("Enter the option:");
    scanf("%d",&option);
    switch(option)
    {

    case 1:
        system ("cls");
        Cancel_from();
        break;
    case 2:
        system ("cls");
        gpayment();
        break;
    case 3:
        system ("cls");
        View_package();
        break;

    }

}
Cancel_from()
{
    int i;
    FILE *fp;
    fp = fopen("Cancel.txt", "a+");
    struct managment m;
    printf("\tEnter the name:");
    scanf("%s",&m.cname);
    printf("\n");
    printf("How many room you reserve:");
    scanf("%d",&m.croom);
    printf("\n");
    printf("\tEnter your Package code:");
    scanf("%s",&m.pcode);
    printf("\n");
    printf("\tEnter the phone number:");
    scanf("%d",&m.cMobile);
    printf("\n");
    printf("\tEnter mail:");
    scanf("%s",&m.cMail);
    fwrite(&m, sizeof(m), 1, fp);
    fclose(fp);
    printf("\n");
    printf("\tAre u sure to cancel this package.\nPress to '1' or Press '2' to go back");
    scanf("%d",&i);
    if(i==1)
    {
        system ("cls");
        printf("Successfully canceling booking.");
        mainbar();
    }
    if(i==2)
    {
        system ("cls");
        printf("You are not canceling booking.");
        mainbar();

    }
}
gpayment()
{

    system ("cls");
    printf("\n\n\n");
    printf("\t\t|*|*********************************************************************|*|\n");
    printf("\t\t|*|\t\t\t\t\t\t\t\t\t|*|\n");
    printf("\t\t|*|\t\t\t\t\t\t\t\t\t|*|\n");
    printf("\t\t|*|\t\t\tOnline press '1'\t\t\t\t|*|\n");
    printf("\t\t|*|\t\t\tPhysically press '2'\t\t\t\t|*|\n");
    printf("\t\t|*|\t\t\tGo back press '3'\t\t\t\t|*|\n");
    printf("\t\t|*|\t\t\t\t\t\t\t\t\t|*|\n");
    printf("\t\t***************************************************************************\n");

    printf("Enter the option:");
    int option;
    scanf("%d",&option);
    switch(option)
    {

    case 1:
        system ("cls");
        online();
        break;
    case 2:
        system ("cls");
        printf("tnx for choosing us.");
        mainbar();
        break;
    case 3:
        system ("cls");
        printf("Select one Package 1st.");
        View_package();
        break;

    }

}
online()
{
    int i;
    FILE *fp;
    fp = fopen("Card_number.txt", "a+");
    struct managment m;
    printf("\tEnter the name:");
    scanf("%s",&m.oname);
    printf("\n");
    printf("\tEnter your Package code:");
    scanf("%s",&m.pcode);
    printf("\n");
    printf("\tEnter your mail:");
    scanf("%S",&m.omail);
    printf("\n");
    printf("\tEnter your Card type:");
    scanf("%s",&m.card);
    printf("\n");
    printf("\tInput your Master Card/Visa Card Number: ");
    scanf("%s",&m.onumber);
    fwrite(&m, sizeof(m), 1, fp);
    fclose(fp);
    printf("\n\n\n");
    printf("Are you sure to Give payment press '1' or Go back press '2'.");
    scanf("%d",&i);
    if(i==1)
    {
        system ("cls");
        printf("Successfully Payment.");
        mainbar();
    }
    if(i==2)

    {
        system ("cls");
        gpayment();

    }

}

void View_package()

{

    system ("cls");
    printf("\n\n");
    printf("\t*********************************************************\n");
    printf("\t*\t\t\t\t\t\t\t*\n");
    printf("\t*\t\tWELCOME TO VIEW PACKAGE\t\t\t*\n");
    printf("\t*\t\t1-Enter 1.Special package.\t\t*\n");
    printf("\t*\t\t2-Enter 2.Bundle package.\t\t*\n");
    printf("\t*\t\t3-Enter 3.Exclusive package.\t\t*\n");
    printf("\t*\t\tGo back '4'\t\t\t\t*\n");
    printf("\t*\t\t\t\t\t\t\t*\n");
    printf("\t*********************************************************\n");
    printf("\n\n");
    printf("\t\t#######Enter the option:");
    int option;
    scanf("%d",&option);
    switch(option)
    {

    case 1:
        system ("cls");
        packagea();
        break;
    case 2:
        system ("cls");
        packageb();
        break;
    case 3:
        system ("cls");
        packagec();
        break;
    case 4:
        system ("cls");
        mainbar();
        break;

    }

}
packagea()
{
    int i;
    printf("Package 1:\n2 days & 1 night\nDhaka-Cox's Bazar-Dhaka\n1-6(persons)\n\nPress 1 to booking.\npress 2 to Go back *View package*.\n\n-");
    scanf("%d",&i);
    if(i==1)
    {
        system ("cls");
        printf("Package Code:566");
        insert();

    }
    if(i==2)
    {
        system ("cls");
        View_package();
    }
}
packageb()
{
    int i;
    printf("Package 1:\n3 days & 2 night\nDhaka-India-Dhaka\n1-10(persons)\n\nPress 1 to booking.\npress 2 to Go back *View package*.\n\n-");
    scanf("%d",&i);
    if(i==1)
    {
        system ("cls");
        printf("Package Code:124");
        insert();

    }
    if(i==2)
    {
        system ("cls");
        View_package();
    }
}
packagec()
{
    int i;
    printf("Package 1:\n4 days & 3 night\nDhaka-Bangkok-Dhaka\n1-4(persons)\n\nPress 1 to booking.\npress 2 to Go back *View package*.\n\n-");
    scanf("%d",&i);
    if(i==1)
    {
        system ("cls");
        printf("Package Code:152");
        insert();

    }
    if(i==2)
    {
        system ("cls");
        View_package();
    }
}
void Booking()
{
    int i=566;
    int j=124;
    int k=152;
    int a;
    printf("Input your Package code:\n");
    scanf("%d",&a);
    if(a==i)
    {
        system ("cls");
        printf("Package Code:566\n");
        insert();
    }
    if(a==j)
    {
        system ("cls");
        printf("Package Code:124\n");
        insert();
    }
    if(a==k)
    {
        system ("cls");
        printf("Package Code:152\n");
        insert();
    }
    else
    {
        system ("cls");
        printf("Wrong code. Please input the right Package Code. \n\n");
        mainbar();
    }


}
void Booking_cancel()
{
    int i=566;
    int j=124;
    int k=152;
    int a;
    system ("cls");
    printf("Input your Package code:\n");
    scanf("%d",&a);
    if(a==i)
    {
        Cancel_from();
    }
    if(a==j)
    {
        Cancel_from();
    }
    if(a==k)
    {
        Cancel_from();
    }
    else
    {
        system ("cls");
        printf("Wrong code. Please input the right Package Code. \n\n");
        mainbar();
    }


}

void regester()
{
    system("color F1");


    printf("\n");
    printf("\t\t#################################################################\n");
    printf("\t\t#\t\t\t\t\t\t\t\t#\n");
    printf("\t\t#\t\t-Enter...01-view User booking data\t\t#\n");
    printf("\t\t#\t\t-Enter...02-View feedback\t\t\t#\n");
    printf("\t\t#\t\t-Enter...03-Manage Payment\t\t\t#\n");
    printf("\t\t#\t\t-Enter...04-View Cancellation\t\t\t#\n");
    printf("\t\t#\t\t    Enter...5-Back to back\t\t\t#\n");
    printf("\t\t#\t\t\t\t\t\t\t\t#\n");
    printf("\t\t#################################################################\n");
    int i;
    printf("\t\t#=#=#=#=#=#=#=#=#=#=#=#=Enter the option#=#=#=#=#=#=#=#=#=#=#=#=#\n\t\t\t\t\t\t");
    scanf("%d",&i);
    switch(i)
    {

    case 1:
        User_booking_data();
        break;
    case 2:
        view_feedback();
        break;
    case 3:
        view_payment();
        break;
    case 4:
        view_cbooking();
        break;
    case 5:
        system("cls");
        manag();
        break;

    }
    getch();
}
registe()

{
    system("color b4");

    FILE*log;
    log=fopen("Customer_login.txt","a");
    struct managment m;
    printf("Please enter your First name:\n");
    scanf("%s",m.fname);
    printf("Please enter your Last name:\n");
    scanf("%s",&m.lname);
    printf("Please enter your Username:\n");
    scanf("%s",&m.username);
    printf("Please enter your Password:\n");
    scanf("%s",&m.password);
    fwrite(&m,sizeof(m),1,log);
    fclose(log);
    system("CLS");
    printf("Now Login.\n");
    login();


}
login()
{
    char username[100];
    char password[100];
    FILE*log;
    log=fopen("Customer_login.txt","r");
    struct managment m ;
    printf("Please enter your username:\n");
    scanf("%s",&username);
    printf("Please enter your password:\n");
    scanf("%s",&password);
    while(fread(&m,sizeof(m),1,log))
    {
        if(strcmp(username,m.username)==0 && strcmp(password,m.password)==0)
        {
            system("cls");
            printf("Successfully Login.\n");
            mainbar();
        }
        else
        {
            system("cls");
            printf("Please Enter correct Username And Password\n");
            login_fact();

        }
    }
    fclose(log);

}


void login_fact()
{
    system("CLS");
    system("color 3f");
    int cho;
    printf("\n\n");
    printf("\t\t|*|*********************************************************************|*|\n");
    printf("\t\t|*|\t\t\t\t\t\t\t\t\t|*|\n");
    printf("\t\t|*|\t\t\t       Press '1' for Register    \t\t|*|\n");
    printf("\t\t|*|\t\t\t       Press '2' for Login       \t\t|*|\n");
    printf("\t\t|*|\t\t\t         Back to Press 3         \t\t|*|\n");
    printf("\t\t|*|\t\t\t                    \t\t\t\t|*|\n");
    printf("\t\t***************************************************************************\n");
    scanf("%d",&cho);
    if(cho==1)
    {
        system("CLS");
        registe();
    }
    else if(cho==2)
    {
        system("CLS");
        login();
    }
    else if(cho==3)
    {
        system("CLS");
        main();
    }
}
void admin_login_fact()
{
    system("CLS");
    system("color 3f");
    int cho;
    printf("\n\n");
    printf("\t\t|*|*********************************************************************|*|\n");
    printf("\t\t|*|\t\t\t\t\t\t\t\t\t|*|\n");
    printf("\t\t|*|\t\t\t       Press '1' for Login       \t\t|*|\n");
    printf("\t\t|*|\t\t\t         Back to Press 2         \t\t|*|\n");
    printf("\t\t|*|\t\t\t                    \t\t\t\t|*|\n");
    printf("\t\t***************************************************************************\n");
    scanf("%d",&cho);

    if(cho==1)
    {
        system("CLS");
        admin_login();
    }
    else if(cho==2)
    {
        system("CLS");
        main();
    }

}
admin_login()
{
    int i=1234;
    int j;

    printf("Please enter your password:\n");
    scanf("%d",&j);
    {
        if(j==i)
        {
            system("cls");
            printf("Successfully Login.\n");
            regester();
        }
        else
        {
            system("cls");
            printf("Please Enter correct Username And Password.\n");
            admin_login_fact();

        }
    }

}

void Feedback()
{
    FILE *fptr;
    fptr=fopen("feedback.txt","a");
    printf("Enter your name:\n");
    scanf("%s",&m.s1);
    printf("\nFeedback type: Bad,Good,Better,Excellent.\n\n");
    printf("Enter the your feedback:\n");
    scanf ("%s",&m.s2);
    fwrite(&m, sizeof(m), 1, fptr);
    fclose(fptr);
    int i;
    printf("\n \t \t \t \t \t \t \xB2 *Do you want to Search another (Yes or No)?  *\xB2 \n\t \t \t \t \t \t");
    printf(" \xB2..............* 1-Yes, 2-No *.................\xB2\n \t \t \t \t \t \t \t \t");
    scanf("%d",&i);
    if (i== 1)
    {
        system("cls");
        printf("Tnx for giving feedback\n\n");
        mainbar();
    }

    else
    {
        system("cls");
        printf("Sorry you can't give any feedback\n\n");
        mainbar();
    }
}

void User_booking_data()
{
    system("cls");
    system("color 17");

    printf("\t \t \t \t \.............. User  Booking Data        .....  \n");
    FILE *fp;

    fp = fopen("customer.txt", "r");


    printf("\n\tName \tpackage code \tsex \tage \tNumber \tplace of birth  \tOccupation \taddress \troom  \t    \n");

    while (fread(&m, sizeof(m), 1, fp))
    {
        printf("\t%s    \t%d  \ %s      \t%d     \t%d  \t%s  \t%s \t%s \t%d \n",m.name,m.pcode,m.Sex,m.age,m.Mobile,m.place_of_birth ,m.Occupotion,m.Address,m.room);
    }





    printf("\n \t \t \t \t \t \t \xB2 *Do you want to go back main bar (Yes or No)?  *\xB2 \n\t \t \t \t \t \t");
    printf(" \xB2...............*  1-Yes,   2-No *..................\xB2\n \t \t \t \t \t \t \t \t");
    int i;

    scanf("%d",&i);
    fclose(fp);
    if (i==1)
    {
        system("cls");
        regester();
    }

    else
    {
        system("cls");
        User_booking_data();
    }

}
void view_feedback()
{
    system("cls");
    system("color 17");

    printf("\t \t \t \t.............. User  Feedback Data        .....  \n");
    FILE *fptr;

    fptr=fopen("feedback.txt","r");


    printf("\n\t\tName  \tfeedback    \n");

    while (fread(&m, sizeof(m), 1, fptr))



        printf("\t\t%s    %s \n",m.s1,m.s2);


    printf("\n \t \t \t \t \xB2 *Do you want to go back main bar (Yes or No)?  *\xB2 \n\t \t \t \t \t \t");
    printf(" ...............*  1-Yes,   2-No *..................\n \t \t \t \t \t \t \t \t");
    int i;

    scanf("%d",&i);
    fclose(fptr);
    if (i==1)
    {
        system("cls");
        regester();
    }

    else
    {
        system("cls");
        view_feedback();
    }

}
void view_payment()
{
    system("cls");
    system("color 17");

    printf("\t \t \t \t.............. User  payment Data        .....  \n");
    FILE *fp;
    fp = fopen("Card_number.txt", "r");


    printf("\n\t\tName  \tPackage code \tMail \tCard type \tCard number    \n");

    while (fread(&m, sizeof(m), 1, fp))



        printf("\t\t%s      \t%s \t%s \t%s \t%s \n",m.oname,m.pcode,m.omail,m.card,m.onumber);


    printf("\n \t \t \t \t \t \t  *Do you want to go back main bar (Yes or No)?  * \n\t \t \t \t \t \t");
    printf(" ...............*  1-Yes,   2-No *..................\n \t \t \t \t \t \t \t \t");
    int i;

    scanf("%d",&i);
    fclose(fp);
    if (i==1)
    {
        system("cls");
        regester();
    }

    else
    {
        system("cls");
        view_payment();
    }

}
void view_cbooking()
{
    system("cls");
    system("color 17");

    printf("\t \t \t \t.............. User  cancle booling  Data        .....  \n");
    FILE *fp;
    fp = fopen("Cancel.txt", "r");


    printf("\n\t\tName  \tPackage code \tMobile number \tMail   \tRoom\n");

    while (fread(&m, sizeof(m), 1, fp))
        printf("\t\t%s      \t%d \t%d \t%d \t%d   \n",m.cname,m.pcode,m.cMobile,m.cMail,m.croom);
    printf("\n \t \t \t \t \t \t  *Do you want to go back main bar (Yes or No)?  * \n\t \t \t \t \t \t");
    printf(" ...............*  1-Yes,   2-No *..................\n \t \t \t \t \t \t \t \t");
    int i;
    fclose(fp);
    scanf("%d",&i);

    if (i==1)
    {
        system("cls");
        regester();
    }

    else
    {
        system("cls");
        view_cbooking();
    }

}
void hotel()
{
    int sum=0,j,r=0,p,q,y;
    printf("total rooms=50\n");
   FILE *fptr;
    fptr = fopen("customer.txt", "r");
    while (fread(&m, sizeof(m), 1, fptr))

        sum=sum+m.room;
    fclose(fptr);
    FILE*fp;
    fp=fopen("Cancel.txt", "r");
     while (fread(&m, sizeof(m), 1, fp))
       r=r+m.croom;
    q=50-sum;
    j=sum-r;
    y=q+r;
    printf("hotel total room booking:%d\n",j);
    printf("hotel total room free:%d\n",y);
    fclose(fp);
    printf("\n \t \t \t \t \t \t  *Do you want to go back main bar (Yes or No)?  * \n\t \t \t \t \t \t");
    printf(" ...............*  1-Yes,   2-No *..................\n \t \t \t \t \t \t \t \t");
    int i;
    scanf("%d",&i);

    if (i==1)
    {
        system("cls");
        mainbar();
    }

    else
    {
        system("cls");
        hotel();
    }

}


int main()
{
    manag();
    regester();
    admin_login_fact();
    login_fact();
    payment();
    mainbar();
    User_booking_data();
    view_payment();
    view_cbooking();
    hotel();

}