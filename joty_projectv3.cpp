#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<time.h>
void wellcome();
int timefunc();
void design();
void back_1();

 void roller_coaster();
 void carnival();
void Water_slide();
 void Skyscreamer();
 void Bumper_car();
 void Amusement_train_ride();
 void Air_jump();
 void Magic_carpet();
 void Bumper_boat();
 void  Giant_splash();
 void Mary_go_round();
 void back_2();
 void bill();
 void back_3();

void main_menu();




    main()
{  int s;
    system("color 3f");
    wellcome();
    main_menu();

}

void main_menu()
{ int s;
    system("cls");
    printf("\n\t\t******** NIL SHOPONO PURI PARK ********");
    printf("\n\n\t\t\t1.Buy Ticket\n\t\t\t2.Total Ticket Sells & Total Amount\n\t\t\t3.Exit");
    printf("\n\t\t\tChoose Option:");
    scanf("%d",&s);
    if(s==1)
    {
        design() ;
    }
    else if(s==2)
    {
        bill();
    }
else if(s==3)
{

  printf("\n\t\tThank You ");
  exit(0);

}
}

void wellcome()
{
    int i, a;
  system("cls");
    printf("\n\n\n\n\t\t\t\tW");
     Sleep(300);
     printf("E");
     Sleep(300);
      printf("L");
     Sleep(300);
     printf("L");
     Sleep(300);
      printf("C");
     Sleep(300);
     printf("O");
     Sleep(300);
     printf("M");
     Sleep(300);
      printf("E");
     Sleep(300);
     printf("  To");
     Sleep(300);
      printf(" N");
     Sleep(300);
     printf("I");
     Sleep(300);
      printf("L");
     Sleep(300);
     printf(" S");
     Sleep(300);
      printf("H");
     Sleep(300);
     printf("P")
     ;Sleep(300);
      printf("O");
     Sleep(300);
     printf("N");
     Sleep(300);
      printf("O");
      Sleep(300);
      printf(" P");
     Sleep(300);
     printf("U");
      Sleep(300);
      printf("R");
     Sleep(300);
     printf("I");
     Sleep(300);
      printf(" P");
     Sleep(300);
     printf("A");
     Sleep(300);
      printf("R");
     Sleep(300);
     printf("K");



     Sleep(500);

     printf("");
}


void design()
{ int s;
system("cls");
printf("\n\t******** NIL SHOPONO PURI PARK ********");
printf("\n\n\t\t   Ride Name\n");
  printf("\n\t\t1.Roller coaster\n\t\t2.Carnival ride\n\t\t3.Water slide\n\t\t4.Skyscreamer\n\t\t5.Bumper car\n\t\t6.Amusement train ride\n\t\t7.Air jump\n\t\t8.Magic carpet\n\t\t9.Bumper boat\n\t\t10.Giant splash\n\t\t11.Mary-go-round\n")  ;
printf("\n\n\t\tChoose Your Option: ");
scanf("%d",&s);

switch(s)
{
case 1:
    {
      roller_coaster();
      break;
    }

case 2:
    {
      carnival();
      break;
    }

case 3:
    {
      Water_slide();
      break;
    }
case 4:
    {
       Skyscreamer();
       break;

    }
case 5:
    {
       Bumper_car();
       break;
    }
case 6:
    {
       Amusement_train_ride();
       break;
    }
case 7:
    {
       Air_jump();
       break;
    }
case 8:
    {
       Magic_carpet();
       break;
    }
case 9:
    {
      Bumper_boat();
      break;
    }
case 10:
    {
        Giant_splash();
        break;
    }
case 11:
    {
     Mary_go_round();
     break;
    }


default:
    {
        printf("\n\n\t\t You Choose Wrong Option");
        design();
    }
}

}


int timefunc(){
    time_t t;
    time(&t);

    printf("\n\n\tTicket Purchase Time :%s\n",ctime(&t));
    return 0;
}
void back_1()
 { int s;
     printf("\n\t\tAre you Sure Buy This Ticket\n\t\t\t1> Yes\n\t\t\t2> No\n\t\tChoose Option: ");

    scanf("%d",&s);
    if(s==1)
    {
       printf("\n\t\tBuy Successfully ");
       timefunc();

        back_2();
    }
    else if(s==2)
    {
        main();
    }

 }
 void roller_coaster()
 {
     system("cls");
    int no=1,quantity,number=200;
    char name[50]={"Roller_coaster"};

    FILE* fp;
    fp=fopen("j:\\nil_shoponopuri_prak.txt","a+");

     printf("\n\t\tRide name:%s",name);
      printf("\n\t\tRide Price: %d/=",number);
       printf("\n\t\tQuantity: ");
         scanf("%d",&quantity);

   fprintf(fp,"\n%d %s %d %d",no,name,number,quantity);
    fclose(fp);
       back_1();
 }

void carnival()
 { system("cls");
    int no=2,quantity,number=150;
    char name[50]={"Carnival"};

    FILE* fp;
    fp=fopen("j:\\nil_shoponopuri_prak.txt","a+");

     printf("\n\t\tRide name:%s",name);
      printf("\n\t\tRide Price: %d/=",number);
       printf("\n\t\tQuantity: ");
         scanf("%d",&quantity);

    fprintf(fp,"\n%d %s %d %d",no,name,number,quantity);
    fclose(fp);
       back_1();
 }
void Water_slide()
 {
     system("cls");
    int no=3,quantity,number=170;
    char name[50]={"Water_slide"};

    FILE* fp;
    fp=fopen("j:\\nil_shoponopuri_prak.txt","a+");

     printf("\n\t\tRide name:%s",name);
      printf("\n\t\tRide Price: %d/=",number);
       printf("\n\t\tQuantity: ");
         scanf("%d",&quantity);

   fprintf(fp,"\n%d %s %d %d",no,name,number,quantity);
    fclose(fp);
       back_1();
 }

 void Skyscreamer()
 {   system("cls");
    int no=4,quantity,number=140;
    char name[50]={"Skyscreamer"};

    FILE* fp;
    fp=fopen("j:\\nil_shoponopuri_prak.txt","a+");

     printf("\n\t\tRide name:%s",name);
      printf("\n\t\tRide Price: %d/=",number);
       printf("\n\t\tQuantity: ");
         scanf("%d",&quantity);

   fprintf(fp,"\n%d %s %d %d",no,name,number,quantity);
    fclose(fp);
       back_1();
 }


 void Bumper_car()
 {  system("cls");
    int no=5,quantity,number=150;
    char name[50]={"Bumper_Car"};

    FILE* fp;
    fp=fopen("j:\\nil_shoponopuri_prak.txt","a+");

     printf("\n\t\tRide name:%s",name);
      printf("\n\t\tRide Price: %d/=",number);
       printf("\n\t\tQuantity: ");
         scanf("%d",&quantity);

  fprintf(fp,"\n%d %s %d %d",no,name,number,quantity);
    fclose(fp);
       back_1();
 }


 void Amusement_train_ride()
 {
     system("cls");
    int no=6,quantity,number=100;
    char name[50]={"Amusement_Train_Ride"};

    FILE* fp;
    fp=fopen("j:\\nil_shoponopuri_prak.txt","a+");

     printf("\n\t\tRide name:%s",name);
      printf("\n\t\tRide Price: %d/=",number);
       printf("\n\t\tQuantity: ");
         scanf("%d",&quantity);

  fprintf(fp,"\n%d %s %d %d",no,name,number,quantity);
    fclose(fp);
       back_1();
 }


 void Air_jump()
  {
     system("cls");
    int no=7,quantity,number=120;
    char name[50]={"Air_jump"};

    FILE* fp;
    fp=fopen("j:\\nil_shoponopuri_prak.txt","a+");

     printf("\n\t\tRide name:%s",name);
      printf("\n\t\tRide Price: %d/=",number);
       printf("\n\t\tQuantity: ");
         scanf("%d",&quantity);

   fprintf(fp,"\n%d %s %d %d",no,name,number,quantity);
    fclose(fp);
       back_1();
 }


 void Magic_carpet()
  {
    system("cls");
    int no=8,quantity,number=120;
    char name[50]={"Magic_carpet"};

    FILE* fp;
    fp=fopen("j:\\nil_shoponopuri_prak.txt","a+");

     printf("\n\t\tRide name:%s",name);
      printf("\n\t\tRide Price: %d/=",number);
       printf("\n\t\tQuantity: ");
         scanf("%d",&quantity);

    fprintf(fp,"\n%d %s %d %d",no,name,number,quantity);
    fclose(fp);
       back_1();
 }

 void Bumper_boat()
  {
     system("cls");
    int no=9,quantity,number=100;
    char name[50]={"Bumper_Boat"};

    FILE* fp;
    fp=fopen("j:\\nil_shoponopuri_prak.txt","a+");

     printf("\n\t\tRide name:%s",name);
      printf("\n\t\tRide Price: %d/=",number);
       printf("\n\t\tQuantity: ");
         scanf("%d",&quantity);

    fprintf(fp,"\n%d %s %d %d",no,name,number,quantity);
    fclose(fp);
       back_1();
 }
 void  Giant_splash()
  {
     system("cls");
    int no=10,quantity,number=250;
    char name[50]={"Giant_Splash"};

    FILE* fp;
    fp=fopen("j:\\nil_shoponopuri_prak.txt","a+");

     printf("\n\t\tRide name:%s",name);
      printf("\n\t\tRide Price: %d/=",number);
       printf("\n\t\tQuantity: ");
         scanf("%d",&quantity);

    fprintf(fp,"\n%d %s %d %d",no,name,number,quantity);
    fclose(fp);
       back_1();
 }
 void Mary_go_round()
  {
     system("cls");
    int no=11,quantity,number=180;
    char name[50]={"Mary_Go_Round"};

    FILE* fp;
    fp=fopen("j:\\nil_shoponopuri_prak.txt","a+");

     printf("\n\t\tRide name:%s",name);
      printf("\n\t\tRide Price: %d/=",number);
       printf("\n\t\tQuantity: ");
         scanf("%d",&quantity);

    fprintf(fp,"\n%d %s %d %d",no,name,number,quantity);
    fclose(fp);
       back_1();
 }

void back_2()
{
    int s;
    printf("\n\n\t1.Again Buy Ticket  2.Main Menu");
    printf("\n\t\tChoose Option: ");
    scanf("%d",&s);
    if(s==1)
    {
        design();
    }
    else if(s==2)
    {
        main_menu();
    }
    else
        {
        printf("\n\n\t\tYou choose Wrong Option");
        back_2();

    }
}

void bill()
{
    char name[50];
    int amount,number,count,sum_of_quantity=0;
    int quantity,no,no_1;
    system("cls");
     FILE* fp;

    fp=fopen("j:\\nil_shoponopuri_prak.txt","r");
    printf("\n---------------Total Ticket Sells & Total Amount---------------\n");
    printf("\n\t\t1.Roller coaster\n\t\t2.Carnival ride\n\t\t3.Water slide\n\t\t4.Skyscreamer\n\t\t5.Bumper car\n\t\t6.Amusement train ride\n\t\t7.Air jump\n\t\t8.Magic carpet\n\t\t9.Bumper boat\n\t\t10.Giant splash\n\t\t11.Mary-go-round\n\t\t")  ;
printf("\n\n\t\tChoose Your Option: ");

    scanf("%d",&no_1);

    while(feof(fp)==0)
    {

    fscanf(fp,"%d %s %d %d",&no,&name,&number,&quantity);
if(no_1==no)
{

      sum_of_quantity=sum_of_quantity+quantity;
    count++;

}
}
printf("\n\t\tRide Name: %s",name);
printf("\n\t\tRide Ticket Price(Per Ticket): %d",number);

amount=number*sum_of_quantity;
printf("\n\t\tTotal Ticket Sells: %d",sum_of_quantity);
printf("\n\t\tTotal Amount: %d\n\n",amount);
back_3();
}


void back_3()
{
    int s;
    printf("\n\t 1.Again See Total Ticket sells         2.Main Menu");
    printf("\n\t\tChoose your option:");
    scanf("%d",&s);
    if(s==1)
    {
      bill();
    }
    else if(s==2)
    {
        main_menu();
    }
     else
        {
        printf("\n\n\t\tYou choose Wrong Option");
        back_3();

    }
}












