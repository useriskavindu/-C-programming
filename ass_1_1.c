#include <stdio.h>
int main(){

int s10=10;//stamp value of LKR 10
int s15=15;//stamp value of LKR 15
int s25=25;//stamp value of LKR 25

int cs10=5;//count of LKR 10 valued stamp
int cs15=5;//count of LKR 15 valued stamp
int cs25=5;//count of LKR 25 valued stamp

int c5=5;//LKR 5 valued coin
int c10=10;//LKR 10 valued coin
int c25=25;//LKR 15 valued coin
int c50=50;//LKR 25 valued coin

int cc5=3;//count of LKR 5 valued coin
int cc10=3;//count of LKR 10 valued coin
int cc25=3;//count of LKR 25 valued coin
int cc50=3;//count of LKR 50 valued coin

int stamp;
int coin;
int identifier;
int balance,a,b,c,d,e,f,g;
//char choice;

while(1){

printf("\nAvailable Stamps::\n LKR 10::%d\n LKR 15::%d\n LKR 25::%d",cs10,cs15,cs25);//Displaying what the available stamps are

printf("\n\nRequest a stamp(LKR 10,15,25)::");//Asking for a stamp from the customer
scanf("%d",&stamp);



if(stamp==s10 && stamp!=s15 && stamp!=s25 && cs10>0){
        cs10--; //decreasing the count of stamp
        }
else if(stamp!=s10 && stamp==s15 && stamp!=s25 && cs15>0){
        cs15--; //decreasing the count of stamp
        }
else if(stamp!=s10 && stamp!=s15 && stamp==s25 && cs25>0){
        cs25--; //decreasing the count of stamp
        }
else{
        printf("\"Requested stamp is not available\"");//Rejecting the request
        break;
}

printf("\nInsert only one coin from(LKR 5,10,25,50)::");//Asking for money from the customer
scanf("%d",&coin);

if(coin<stamp){
        printf("\n\"Insufficient amount inserted. Please collect back your money\"");//Indicating the loss and ignoring the request
        break;
}

if(coin!=5 && coin!=10 && coin!=25 && coin!=50){
        printf("\n\"Invalid coin Inserted. Coin rejected\"");//Rejecting the request
        break;
}

else if (coin==5){
        printf("\"Insufficient amount tendered. Coin rejected\"");//Indicating the loss and ignoring the request
        break;
}

balance=coin-stamp;
a=balance/50;
b=balance%50;
c=b/25;
d=b%25;
e=d/10;
f=d%10;
g=f/5;

if(a>1 || c>1 || e>1 || g>1){
        printf("\n\"Change cannot retrieve. Please collect your money back\"");//Avoiding dispensing the same type of coins twice in a one transaction
}
//From line 82 to 129, dispensing the required stamp and the related balance, decreasing count of stamps and other coins, increasing the count of inserted coins
else if(stamp==s10 && coin==10){
        cc10++;
        printf("\nStamp Dispensed\nYour balance::LKR %d/-\nLKR 50 coins:%d\nLKR 25 coins:%d\nLKR 10 coins:%d\nLKR 5 coins:%d\n\nPlease collect your balance and stamp",balance,a,c,e,g);

}

else if(stamp==s10 && coin==25 && cc10!=0 && cc5!=0){
        cc25++;
        cc10--;
        cc5--;
        printf("\nStamp Dispensed\nYour balance::LKR %d/-\nLKR 50 coins:%d\nLKR 25 coins:%d\nLKR 10 coins:%d\nLKR 5 coins:%d\n\nPlease collect your balance and stamp",balance,a,c,e,g);
}

else if(stamp==s10 && coin==50 && cc25!=0 && cc10!=0 && cc5!=0){
        cc50++;
        cc25--;
        cc10--;
        cc5--;
        printf("\nStamp Dispensed\nYour balance::LKR %d/-\nLKR 50 coins:%d\nLKR 25 coins:%d\nLKR 10 coins:%d\nLKR 5 coins:%d\n\nPlease collect your balance and stamp",balance,a,c,e,g);
}

else if(stamp==s15 && coin==25 && cc10!=0){
        cc25++;
        cc10--;
        printf("\nStamp Dispensed\nYour balance::LKR %d/-\nLKR 50 coins:%d\nLKR 25 coins:%d\nLKR 10 coins:%d\nLKR 5 coins:%d\n\nPlease collect your balance and stamp",balance,a,c,e,g);


}

else if(stamp==s15 && coin==50 && cc25!=0 && cc10!=0){
        cc50++;
        cc25--;
        cc10--;
        printf("\nStamp Dispensed\nYour balance::LKR %d/-\nLKR 50 coins:%d\nLKR 25 coins:%d\nLKR 10 coins:%d\nLKR 5 coins:%d\n\nPlease collect your balance and stamp",balance,a,c,e,g);

}

else if(stamp==s25 && coin==25){
        cc25++;
        printf("\nStamp Dispensed\nYour balance::LKR %d/-\nLKR 50 coins:%d\nLKR 25 coins:%d\nLKR 10 coins:%d\nLKR 5 coins:%d\n\nPlease collect your balance and stamp",balance,a,c,e,g);

}

else if(stamp==s25 && coin==50 &&cc25!=0){
        cc50++;
        cc25--;
        printf("\nStamp Dispensed\nYour balance::LKR %d/-\nLKR 50 coins:%d\nLKR 25 coins:%d\nLKR 10 coins:%d\nLKR 5 coins:%d\n\nPlease collect your balance and stamp",balance,a,c,e,g);
}

else{   //Indicating the lack of coins to dispense the balance
        printf("\n\"Sorry! Currently the machine cannot retrieve the balance. Please collect your money back.\"");
}

char choice;

        printf("\nDo you want to exit(y/n):");//Asking the customer whether he/she want to exit or not
        scanf("%s",&choice);

if(choice=='y')
{       printf("\n:::::Thank you. Have a nice day!:::::");//Exiting the customer from the system
        break;
}

}

return 0;}
