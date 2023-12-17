#include <stdio.h>

int main(){

//1./--------------------------------------------------------------------------------------------------------------------
float a,b,c,d,ratio;

if((c-d)!=0){

    printf("(1.)Enter an integer value for a:");
    scanf("%f",&a);

    printf("\n  Enter an integer value for b:");
    scanf("%f",&b);

    printf("\n  Enter an integer value for c:");
    scanf("%f",&c);

    printf("\n  Enter an integer value for d:");
    scanf("%f",&d);


    ratio = (a+b)/(c-d);
    printf("\n  Ratio::%f", ratio);

}else
{
    printf("\n  Ratio can't be displayed");
}


// 2./--------------------------------------------------------------------------------------------------------------------

float e,f,g,num1;

    printf("\n\n(2.)Enter three numbers::");
    scanf("%f,%f,%f", &e,&f,&g);

    num1=(e>f)?((e>g)?e:g):((f>g)?f:g);
    printf("\n      The greatest number is'%f'\n",num1);

// 3./--------------------------------------------------------------------------------------------------------------------

float balance,interest;
char name[50];
char gender[6];

printf("\n(3.)Enter your name:");
scanf("%s", &name);

printf("\n    Enter your gender(F/M):");
scanf("%s", &gender);

printf("\n    Enter your account balance(LKR):");
scanf("%f", &balance);

if((gender==('f')||('F')) && (balance>5000))
    {
        balance=balance+balance*0.05;
        printf("\n Your new balance is LKR %f", balance);
    }

else{
        balance=balance+balance*0.02;
        printf("\n Your new balance is LKR %f", balance);
    }

// 4./--------------------------------------------------------------------------------------------------------------------

char snumber[10];
float avgmark;

printf("\n(4.)Enter your student number:");
scanf("%s", &snumber);

printf("      Enter your average marks:");
scanf("%f", &avgmark);

printf("\n    Your student number:%s", snumber);

if(avgmark>0 && avgmark<=39)
{
    printf("\n    Your class::Fail");
}
else if(avgmark>=40 && avgmark<=49)
{
    printf("\n    Your class::Third Division");
}
else if(avgmark>=50 && avgmark<=59)
{
    printf("\n    Your class::Second Division");
}
else if(avgmark>=60 && avgmark<=79)
{
    printf("\n    Your class::First Division");
}
else if(avgmark>=80 && avgmark<=100)
{
    printf("\n    Your class::Honours");
}
else
{
    printf("\nInvalid Mark Inserted");
}



//(6.1)--------------------------------------------------------------------------------------------------------------------

float basic,gross,net;
char jno[10];
int lno;


printf("\n Enter your job number:");
scanf("%s", &jno);

printf("\n Enter level number(1,2,3,4):");
scanf("%d", &lno);

printf("\n Enter your basic salary:");
scanf("%f", &basic);

if(lno==1)
    {
        gross=basic+basic*0.25+1000+500;
    }
else if(lno==2)
    {
        gross=basic+basic*0.25+750+200;
    }
else if(lno==3)
    {
        gross=basic+basic*0.25+500+100;
    }
else if(lno==4)
    {
        gross=basic+basic*0.25+250+0;
    }



if(gross<2000)
    {
        net=gross-gross*0.00;
        printf("\nYour net salary:LKR %f",net);
    }
else if(2000<=gross<4000)
    {
        net=gross-gross*0.03;
        printf("\nYour net salary:LKR %f",net);
    }
else if(4000<=gross<6000)
    {
        net=gross-gross*0.05;
        printf("\nYour net salary:LKR %f",net);
    }
else if(6000<=gross)
    {
        net=gross-gross*0.08;
        printf("\nYour net salary:LKR %f",net);
    }


//(6.2)--------------------------------------------------------------------------------------------------------------------


float basic,gross,net;
char jno[10];
int lno;

printf("\n Enter your job number:");
scanf("%s", &jno);

printf("\n Enter level number(1,2,3,4):");
scanf("%d", &lno);

printf("\n Enter your basic salary:");
scanf("%f", &basic);

switch(gross){
    case 1: gross=basic+basic*0.25+1000+500;
    break;
    case 2: gross=basic+basic*0.25+750+200;
    break;
    case 3: gross=basic+basic*0.25+500+100;
    break;
    case 4: gross=basic+basic*0.25+250+0;
    break;
}
    net /=2000;

switch (net){
    case

}


//(7.1)--------------------------------------------------------------------------------------------------------------------


float x;


printf("\nx = ");
scanf("%f",&x);

if(x>0)
    {
         printf("y = 1\n");
    }
else if(x==0)
    {
         printf("y = 0\n");
    }
else if(x<0)
    {
         printf("y = -1\n");
    }




//(7.2)--------------------------------------------------------------------------------------------------------------------









//(8)--------------------------------------------------------------------------------------------------------------------

float a,b,c,d,x,x1,x2,y;

while(1){
printf("\nEnter a value for a:");
scanf("%f", &a);

printf("\nEnter a value for b:");
scanf("%f", &b);

printf("\nEnter a value for c:");
scanf("%f", &c);

printf("\nThe equation:: \"%fx^2 + %fx + %f\"\n", a,b,c);

//printf("\n\nEnter value for x");

if(a==0 && b==0)
{
    printf("\nThere are no roots for this equation");
}
else if(a==0)
{
    x = (-c)/b ;
    printf("\nThere is an one root for this equation and it is:%f",x);
}
else if((b*b - 4*a*c)<0)
{
    printf("\nThere are no any possible roots for this equation");
}
else
{
    y = sqrt((b*b - 4*a*c));
    x1 = (-1*b + y)/(2*a);
    x2 = (-1*b - y)/(2*a);
    printf("\nThe roots for this equation are x = %f and x = %f", x1, x2);
}
}






//(9)--------------------------------------------------------------------------------------------------------------------


int a,b,c;

printf("\nEnter three integers:");
scanf("%d, %d, %d", &a,&b,&c);

if (((a^2) + (b^2) == (c^2)) || ((a^2) + (c^2) == (b^2)) || ((b^2) + (c^2) == (a^2)))
{
    printf("\nThe given %d, %d and %d integers are sides of the related right angled triangle.",a,b,c);
}
else
{
    printf("\nThe given %d, %d and %d integers are not sides of any right angled triangle.",a,b,c);
}


//(10)--------------------------------------------------------------------------------------------------------------------



float BMI,mass,height;

printf("\nYour mass(kg):");
scanf("%f",&mass);
printf("\nYour height(m):");
scanf("%f",&height);

BMI = mass/(height*height);

if(BMI<18.5)
{
    printf("\nYour BMI: %f\nRisk of developing problems such as nutritional deficiency and osteoporosis",BMI);
}
else if(18.5<=BMI<23)
{
    printf("\nYour BMI: %f\nLow Risk (healthy range", BMI);
}
else if(23<=BMI<27.5)
{
    printf("\nYour BMI: %f\nModerate risk of developing heart disease, high blood pressure, stroke, diabetes", BMI);
}
else
{
    printf("\nYour BMI: %f\High risk of developing heart disease, high blood pressure, stroke, diabetes ");
}













return 0;}
