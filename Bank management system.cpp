#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
float choice2();
float choice3();
float ball[11]={1000,1000,1000,1000,1000,1000,1000,1000,1000,1000,1000};
float mypin;
float withdraw, deposit;
int transaction, myaccount;
char transaction1;
main()
{           
    pin:{     
              system("cls");
              printf("Enter pin code: ");  
              scanf("%f",&mypin);
             }                   
            if (mypin==1234)
            { 
            myaccount=0;
            }
            else if(mypin==2345)
            {
            myaccount=1;
            } 
            else if(mypin==3456)
            {
            myaccount=2;
            }
            else if(mypin==4567)
            {
            myaccount=3;
            }
            else if(mypin==5678)
            {
            myaccount=4;
            }
            else if(mypin==6789)
            {
            myaccount=5;
            }
            else if(mypin==7890) 
            {
            myaccount=6;
            }
            else if(mypin==8901)
            {
            myaccount=7;
            }
            else if(mypin==9012)
            {
            myaccount=8;
            }
            else if(mypin==0123)
            {
            myaccount=9;
            }
            else if(mypin==2234)
            {
             myaccount=10;
             }
            else if(mypin==2245)
            {
            myaccount=9;
            }
            else if(mypin==2256)
            {
            myaccount=10;
            }
            else if(mypin==2267)
            {
            myaccount=11;
            } 
             else{
                  goto pin;
                  }
            if(mypin!=1234 && mypin!=2345 && mypin!=3456 && mypin!=4567 && mypin!=5678 && mypin!=6789 && mypin!=7890 && mypin!=8901 && mypin!=0123 && mypin!=2234 && mypin!=2245 && mypin!=2256 && mypin!=2267){
}
                    menu:{
                    printf("\n\t\t\tTRANSACTION\n");
                    printf("\n\t\tChoose your transaction: \n");
                    printf("\n\t\t[1]: Balance Inquiry");
                    printf("\n\t\t[2]: Withdraw");
                    printf("\n\t\t[3]: Deposit");
                    printf("\n\t\t[4]: Exit Transaction\n\n");  
                    printf("Your transaction: ");
                    scanf("%d",&transaction);  
}               
  if(transaction==1){
                               printf("\n \t\tBalance Inquiry \n\n");
                               printf("\tYour Available balance : %0.2f",ball[myaccount]);
                               printf("\n\n Do you want another transaction[y][n]: ");
                               scanf("%s", &transaction1);   
  if(transaction1=='y' || transaction=='Y'){
                                        goto menu;
                                                             }
                     else if(transaction1=='n' || transaction1=='N'){
                                    printf("Do you want to another account[y][n]");
                                    scanf("%s", &transaction1);
                     if(transaction1=='y' || transaction=='Y'){
                                                       main(); }
                     else if(transaction1=='n' || transaction1=='N'){
                                          return 0;}
                                                                   }
     }//end sa trans1
  else if(transaction==2){
                               printf("\n \t\tWithdraw \n\n");
                               choice2();
                               printf("\n\n Do you want another transaction[y][n]: ");
                               scanf("%s", &transaction1);   
                   if(transaction1=='y' || transaction=='Y'){
                                        goto menu;
                                                             }
                     else if(transaction1=='n' || transaction1=='N'){
                                    printf("Do you want to another account[y][n]");
                                    scanf("%s", &transaction1);
                   if(transaction1=='y' || transaction=='Y'){
                                        main(); }
                                        else if(transaction1=='n' || transaction1=='N'){
                                             return 0;}
}
                            }          
  else if(transaction==3){
                               printf("\n \t\tDeposit \n\n");
                               choice3();        
                               printf("\n\n Do you want another transaction[y][n]: ");
                               scanf("%s", &transaction1);   
                   if(transaction1=='y' || transaction=='Y'){
                                        goto menu;
                                                             }
                     else if(transaction1=='n' || transaction1=='N'){
                                    printf("Do you want to another account[y][n]");
                                    scanf("%s", &transaction1);
                   if(transaction1=='y' || transaction=='Y'){
                                        main(); }
                                        else if(transaction1=='n' || transaction1=='N'){
                                             return 0;}                       
}
                                  }
  else if(transaction==4){
                               printf("\n \t\tExit \n\n");
                               printf("\t\t\tDo you want to another account[y][n]");
                               scanf("%s", &transaction1);
                   if(transaction1=='y' || transaction=='Y'){
                                        main(); }
                                        else if(transaction1=='n' || transaction1=='N'){
                                             return 0;}   
}              
getch();
return 0;
}
float choice2()
{                  
       printf("\n\tHow much do you want to withdraw?: ");
       scanf("%f", &withdraw);
     if(withdraw>ball[myaccount]){
       printf("\n\nInsuficient Balance\n");
       printf("You have only %0.2f in your account", ball[myaccount]);              
       getch ();                                                      
       }
     else if(ball[myaccount]>withdraw){                           
       printf("\n\tYou withdraw: %0.2f pesos", withdraw);
       printf("\n\tYour current balance: %0.2f pesos", ball[myaccount]-withdraw);
       ball[myaccount]=ball[myaccount]-withdraw;
                                }
}
float choice3()
{
                printf("\n\tHow much do you want to deposit?: ");
                scanf("%f", &deposit);
                printf("\n\tYou deposited %0.2f pesos", deposit);
                printf("\n\tYour current balance: %0.2f pesos", deposit+ball[myaccount]);           
                ball[myaccount]=deposit+ball[myaccount];
}
