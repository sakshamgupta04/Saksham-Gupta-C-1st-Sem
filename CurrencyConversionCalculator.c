#include<stdio.h>
#include<windows.h>
void main()
{
system("color 0F");
int a=1;

        printf("\n\t\t\t\t\t\t\t\t\t\4\4\4\4\4\4WELCOME\4\4\4\4\4\4");
        printf("\n\t\t\t\t\t\t\t\t_________________________________");
        printf("\n\n\t\t\t\t\t\t\t\t\4This Is MIET Bank Of Jammu And Kashmir\4\n");
        printf("\n\t\t\t\t\t\t\t______________________________________________________");

while(a>0)
{
float amount,tax;
float rupee,dollar,pound,euro,dirham;
int choiceA,choiceB,repeat;

        printf("\n\tCurrencies Are : ");
        printf("\n\t __ __ __ __\n ");
        printf("\n\t| 1-RUPEE   |\n\n\t| 2-DOLLAR  |\n\n\t| 3-POUND   |\n\n\t| 4-EURO    |\n\n\t| 5-DIRHAM  |\n\t");
        printf(" __ __ __ __");
        printf("\n\n\t\t ENTER YOUR CHOICE FOR CURRENCY CONVERSION : \t");
        scanf("%d",&choiceA);

switch(choiceA)
{
 case 1: //RUPEE CONEVRSION
  {
       printf("\n\n\tRupee To : ");
       printf("\n\t __ __ __ __ __ __ __ __");
       printf("\n\n\t| 1-Dollar             |\n\n\t| 2-Pound              |\n\n\t| 3-Euro               |\n\n\t| 4-Dirham             |\n\n\t| 5-All Of The Above   |\n");
       printf("\t __ __ __ __ __ __ __ __\n");
       printf("\n\t\t To which currency : \t");
       scanf("%d",&choiceB);

switch(choiceB)
{
 case 1: //RUPEE TO DOLLAR
  {
        printf("\n\t\t Enter The Amount : \t");
        scanf("%f",&amount);

        dollar=amount/82.75;
        printf("\n\t\t\t\t\t\t\t Gross Amount : %.2f Rupees = %.2f Dollars\n",amount,dollar);

        tax=dollar*0.0145;
        printf("\n\t\t\t\t\t\t\t Tax On Amount => 1.45 Percent => %.2f\n",tax);

        dollar=dollar-tax;
        printf("\n\t\t\t\t\t\t\t Current Amount : %.2f Rupees = %.2f Dollars\n",amount,dollar);

        break;
  }

 case 2: //RUPEE TO POUND
  {
        printf("\n\t\t Enter The Amount : \t");
        scanf("%f",&amount);

        pound=amount/100.11;
        printf("\n\t\t\t\t\t\t\t Gross Amount : %.2f Rupees = %.2f Pounds\n",amount,pound);

        tax=pound*0.0195;
        printf("\n\t\t\t\t\t\t\t Tax On Amount => 1.95 Percent => %.2f\n",tax);

        pound=pound-tax;
        printf("\n\t\t\t\t\t\t\t Current Amount : %.2f Rupees = %.2f Pounds\n",amount,pound);

        break;

  }

 case 3: //RUPEE TO EURO
  {
        printf("\n\t\t Enter The Amount : \t");
        scanf("%f",&amount);

        euro=amount/88.76;
        printf("\n\t\t\t\t\t\t\t Gross Amount : %.2f Rupees = %.2f Euros\n",amount,euro);

        tax=euro*0.018;
        printf("\n\t\t\t\t\t\t\t Tax On Amount => 1.8 Percent => %.2f\n",tax);

        euro=euro-tax;
        printf("\n\t\t\t\t\t\t\t Current Amount : %.2f Rupees = %.2f Euros\n",amount,euro);

        break;
  }

 case 4: //RUPEE TO DIRHAM
  {
        printf("\n\t\t Enter The Amount : \t");
        scanf("%f",&amount);

        dirham=amount/22.53;
        printf("\n\t\t\t\t\t\t\t Gross Amount : %.2f Rupees = %.2f Dirhams\n",amount,dirham);

        tax=dirham*0.012;
        printf("\n\t\t\t\t\t\t\t Tax On Amount : 1.2 Percent => %.2f\n",tax);

        dirham=dirham-tax;
        printf("\n\t\t\t\t\t\t\t Current Amount %.2f Rupees = %.2f Dirhams",amount,dirham);

        break;
  }

 case 5: //RUPEE TO ALL
  {
        printf("\n\t\t Enter The Amount : \t");
        scanf("%f",&amount);

        dollar=amount/82.75;
            tax=dollar*0.0145;
            dollar=dollar-tax;
        pound=amount/100.11;
            tax=pound*0.0195;
            pound=pound-tax;
        euro=amount/88.76;
            tax=euro*0.018;
            euro=euro-tax;
        dirham=amount/22.53;
            tax=dirham*0.012;
            dirham=dirham-tax;

        printf("\n\t\t\t\t\t\t\t%.2f Rupees = %.2f Dollars\n",amount,dollar);
        printf("\n\t\t\t\t\t\t\t%.2f Rupees = %.2f Pounds\n",amount,pound);
        printf("\n\t\t\t\t\t\t\t%.2f Rupees = %.2f Euros\n",amount,euro);
        printf("\n\t\t\t\t\t\t\t%.2f Rupees = %.2f Dirhams\n",amount,dirham);
        break;
  }

default:
 {
        Beep(500,1000);
        printf("\n\n\t\t\t\t\t\t\t\tX X X X X Invalid Option X X X X X");

 }
}
       break;
}

case 2: //DOLLAR CONVERSION
   {
        printf("\n\n\tDollar To : ");
        printf("\n\t __ __ __ __ __ __ __ __");
        printf("\n\n\t| 1-Rupee              |\n\n\t| 2-Pound              |\n\n\t| 3-Euro               |\n\n\t| 4-Dirham             |\n\n\t| 5-All Of The Above   |\n\t");
        printf(" __ __ __ __ __ __ __ __\n");
        printf("\n\t\t To which currency : \t");
        scanf("%d",&choiceB);

switch(choiceB)
{
 case 1: //DOLLAR TO RUPEE
  {
        printf("\n\t\t Enter Your Amount : \t");
        scanf("%f",&amount);

        rupee=amount*82.75;
        printf("\n\t\t\t\t\t\t\t Gross Amount : %.2f Dollars = %.2f Rupees\n",amount,rupee);

        tax=rupee*0.005;
        printf("\n\t\t\t\t\t\t\t Tax On Amount => 0.5 Percent => %.2f\n",tax);

        rupee=rupee-tax;
        printf("\n\t\t\t\t\t\t\t Current Amount : %.2f Dollars = %.2f Rupees\n",amount,rupee);

        break;
  }

 case 2: //DOLLAR TO POUND
  {
        printf("\n\t\t Enter Your Amount : \t");
        scanf("%f",&amount);

        pound=amount/1.21;
        printf("\n\t\t\t\t\t\t\t Gross Amount : %.2f Dollars = %.2f Pounds\n",amount,pound);

        tax=pound*0.0175;
        printf("\n\t\t\t\t\t\t\t Tax On Amount => 1.75 Percent => %.2f\n",tax);

        pound=pound-tax;
        printf("\n\t\t\t\t\t\t\t Current Amount : %.2f Dollars = %.2f Pounds\n",amount,pound);

        break;
  }

 case 3: //DOLLAR TO EURO
  {
        printf("\n\t\t Enter Your Amount : \t");
        scanf("%f",&amount);

        euro=amount/1.07;
        printf("\n\t\t\t\t\t\t\t Gross Amount : %.2f Dollars = %.2f Euros\n",amount,euro);

        tax=euro*0.015;
        printf("\n\t\t\t\t\t\t\t Tax On Amount => 1.5 Percent => %.2f\n",tax);

        euro=euro-tax;
        printf("\n\t\t\t\t\t\t\t Current Amount : %.2f Dollars = %.2f Euros\n",amount,euro);

        break;
  }

case 4: //DOLLAR TO DIRHAM
  {
        printf("\n\t\t Enter Your Amount : \t");
        scanf("%f",&amount);

        dirham=amount/0.27;
        printf("\n\t\t\t\t\t\t\t Gross Amount : %.2f Dollars = %.2f Dirhams\n",amount,dirham);

        tax=dirham*0.0075;
        printf("\n\t\t\t\t\t\t\t Tax On Amount => 0.75 Percent => %.2f\n",tax);

        dirham=dirham-tax;
        printf("\n\t\t\t\t\t\t\t Current Amount : %.2f Dollars = %.2f Dirhams\n",amount,dirham);

        break;
  }

 case 5: //DOLLAR TO ALL
  {
        printf("\n\t\t Enter Your Amount : \t");
        scanf("%f",&amount);

        rupee=amount*82.75;
            tax=rupee*0.005;
            rupee=rupee-tax;
        pound=amount/1.21;
            tax=pound*0.0175;
            pound=pound-tax;
        euro=amount/1.07;
            tax=euro*0.015;
            euro=euro-tax;
        dirham=amount/0.27;
            tax=dirham*0.0075;
            dirham=dirham-tax;

        printf("\n\t\t\t\t\t\t\t%.2f Dollars = %.2f Rupees\n",amount,rupee);
        printf("\n\t\t\t\t\t\t\t%.2f Dollars = %.2f Pounds\n",amount,pound);
        printf("\n\t\t\t\t\t\t\t%.2f Dollars = %.2f Euros\n",amount,euro);
        printf("\n\t\t\t\t\t\t\t%.2f Dollars = %.2f Dirhams\n",amount,dirham);
        break;
  }

default:

 {
        Beep(500,1000);
        printf("\n\n\t\t\t\t\t\t\t\t X X X X X Invalid Option X X X X X");
 }

}
        break;

}

case 3: //POUND CONVERSION
 {
        printf("\n\n\tPound To : ");
        printf("\n\t __ __ __ __ __ __ __ __");
        printf("\n\n\t| 1-Rupee              |\n\n\t| 2-Dollar             |\n\n\t| 3-Euro               |\n\n\t| 4-Dirham             |\n\n\t| 5-All Of The Above   |\n\t");
        printf(" __ __ __ __ __ __ __ __\n");
        printf("\n\t\t To which currency : \t");
        scanf("%d",&choiceB);

switch(choiceB)
{
 case 1: //POUND TO RUPEE
  {
        printf("\n\t\t Enter Your Amount : \t");
        scanf("%f",&amount);

        rupee=amount*100.11;
        printf("\n\t\t\t\t\t\t\t Gross Amount : %.2f Pounds = %.2f Rupees\n",amount,rupee);

        tax=rupee*0.0023;
        printf("\n\t\t\t\t\t\t\t Tax On Amount => 0.23 Percent => %.2f\n",tax);

        rupee=rupee-tax;
        printf("\n\t\t\t\t\t\t\t Current Amount : %.2f Pounds = %.2f Rupees\n",amount,rupee);

        break;
  }

 case 2: //POUND TO DOLLAR
  {
        printf("\n\t\t Enter Your Amount : \t");
        scanf("%f",&amount);

        dollar=amount*1.21;
        printf("\n\t\t\t\t\t\t\t Gross Amount : %.2f Pounds = %.2f Dollars\n",amount,dollar);

        tax=dollar*0.012;
        printf("\n\t\t\t\t\t\t\t Tax On Amount => 1.2 Percent => %.2f\n",tax);

        pound=pound-tax;
        printf("\n\t\t\t\t\t\t\t Current Amount : %.2f Pounds = %.2f Dollars\n",amount,dollar);

        break;
  }

 case 3: //POUND TO EURO
  {
        printf("\n\t\t Enter Your Amount : \t");
        scanf("%f",&amount);

        euro=amount*1.13;
        printf("\n\t\t\t\t\t\t\t Gross Amount : %.2f Pounds = %.2f Euros\n",amount,euro);

        tax=euro*0.0133;
        printf("\n\t\t\t\t\t\t\t Tax On Amount => 1.33 Percent => %.2f\n",tax);

        euro=euro-tax;
        printf("\n\t\t\t\t\t\t\t Current Amount : %.2f Pounds = %.2f Euros\n",amount,euro);

        break;
  }

 case 4: //POUND TO DIRHAM
  {
        printf("\n\t\t Enter Your Amount : \t");
        scanf("%f",&amount);

        dirham=amount*4.44;
        printf("\n\t\t\t\t\t\t\t Gross Amount : %.2f Pounds = %.2f Dirhams\n",amount,dirham);

        tax=dirham*0.0089;
        printf("\n\t\t\t\t\t\t\t Tax On Amount => 0.89 Percent => %.2f\n",tax);

        dirham=dirham-tax;
        printf("\n\t\t\t\t\t\t\t Current Amount : %.2f Pounds = %.2f Dirhams\n",amount,dirham);

        break;
  }

 case 5: //POUND TO ALL
  {
        printf("\n\t\t Enter Your Amount : \t");
        scanf("%f",&amount);

        rupee=amount*100.11;
            tax=rupee*0.0023;
            rupee=rupee-tax;
        dollar=amount*1.21;
            tax=dollar*0.012;
            dollar=dollar-tax;
        euro=amount*1.13;
            tax=euro*0.0133;
            euro=euro-tax;
        dirham=amount*4.44;
            tax=dirham*0.0089;
            dirham=dirham-tax;

        printf("\n\t\t\t\t\t\t\t%.2f Pounds = %.2f Rupees\n",amount,rupee);
        printf("\n\t\t\t\t\t\t\t%.2f Pounds = %.2f Dollars\n",amount,dollar);
        printf("\n\t\t\t\t\t\t\t%.2f Pounds = %.2f Euros\n",amount,euro);
        printf("\n\t\t\t\t\t\t\t%.2f Pounds = %.2f Dirhams\n",amount,dirham);
        break;
  }

default:
 {
        Beep(500,1000);
        printf("\n\t\t\t\t\t\t\t\tX X X X X Invalid Option X X X X X");
 }
}

            break;
}

case 4: //EURO CONVERSION
 {
        printf("\n\n\tEuro To : ");
        printf("\n\t __ __ __ __ __ __ __ __");
        printf("\n\n\t| 1-Rupee              |\n\n\t| 2-Dollar             |\n\n\t| 3-Pound              |\n\n\t| 4-Dirham             |\n\n\t| 5-All Of The Above   |\n\t");
        printf(" __ __ __ __ __ __ __ __\n");
        printf("\n\t\t To which currency : \t");
        scanf("%d",&choiceB);

switch(choiceB)
{
 case 1: //EURO TO RUPEE
  {
        printf("\n\t\t Enter Your Amount : \t");
        scanf("%f",&amount);

        rupee=amount*88.76;
        printf("\n\t\t\t\t\t\t\t Gross Amount : %.2f Euros = %.2f Rupees\n",amount,rupee);

        tax=rupee*0.003;
        printf("\n\t\t\t\t\t\t\t Tax On Amount => 0.3 Percent => %.2f\n",tax);

        rupee=rupee-tax;
        printf("\n\t\t\t\t\t\t\t Current Amount : %.2f Euros = %.2f Rupees\n",amount,rupee);

        break;
  }

case 2: //EURO TO DOLLAR
  {
        printf("\n\t\t Enter Your Amount : \t");
        scanf("%f",&amount);

        dollar=amount*1.07;
        printf("\n\t\t\t\t\t\t\t Gross Amount : %.2f Euros = %.2f Dollars\n",amount,dollar);

        tax=dollar*0.0125;
        printf("\n\t\t\t\t\t\t\t Tax On Amount => 1.25 Percent => %.2f\n",tax);

        dollar=dollar-tax;
        printf("\n\t\t\t\t\t\t\t Current Amount : %.2f Euros = %.2f Dollars\n",amount,dollar);

        break;
  }

 case 3: //EURO TO POUND
  {
        printf("\n\t\t Enter Your Amount : \t");
        scanf("%f",&amount);

        pound=amount/1.13;
        printf("\n\t\t\t\t\t\t\t Gross Amount : %.2f Euros = %.2f Pounds\n",amount,pound);

        tax=pound*0.014;
        printf("\n\t\t\t\t\t\t\t Tax On Amount => 1.4 Percent => %.2f\n",tax);

        pound=pound-tax;
        printf("\n\t\t\t\t\t\t\t Current Amount : %.2f Euros = %.2f Pound\n",amount,pound);

        break;
  }

 case 4: //EURO TO DIRHAM
  {
        printf("\n\t\t Enter Your Amount : \t");
        scanf("%f",&amount);

        dirham=amount*3.94;
        printf("\n\t\t\t\t\t\t\t Gross Amount : %.2f Euros = %.2f Dirhams\n",amount,dirham);

        tax=dirham*0.009;
        printf("\n\t\t\t\t\t\t\t Tax On Amount => 0.89 Percent = %.2f\n",tax);

        dirham=dirham-tax;
        printf("\n\t\t\t\t\t\t\t Current Amount : %.2f Euros = %.2f Dirhams\n",amount,dirham);

        break;
  }

 case 5: //EURO TO ALL
  {
        printf("\n\t\t Enter Your Amount : \t");
        scanf("%f",&amount);

        rupee=amount*88.76;
            tax=rupee*0.003;
            rupee=rupee-tax;
        dollar=amount*1.07;
            tax=dollar*0.0125;
            dollar=dollar-tax;
        pound=amount/1.13;
            tax=pound*0.014;
            pound=pound-tax;
        dirham=amount*3.94;
            tax=dirham*0.009;
            dirham=dirham-tax;

        printf("\n\t\t\t\t\t\t\t%.2f Euros = %.2f Rupees\n",amount,rupee);
        printf("\n\t\t\t\t\t\t\t%.2f Euros = %.2f Dollars\n",amount,dollar);
        printf("\n\t\t\t\t\t\t\t%.2f Euros = %.2f Pounds\n",amount,pound);
        printf("\n\t\t\t\t\t\t\t%.2f Euros = %.2f Dirhams\n",amount,dirham);
        break;
  }

default:
 {
        Beep(500,1000);
        printf("\n\n\t\t\t\t\t\t\t\tX X X X X Invalid Option X X X X X");
 }
}
        break;
}

case 5: //DIRHAM CONVERSION
 {
        printf("\n\n\tDirham To : ");
        printf("\n\t __ __ __ __ __ __ __ __");
        printf("\n\n\t| 1-Rupee              |\n\n\t| 2-Dollar             |\n\n\t| 3-Pound              |\n\n\t| 4-Euro               |\n\n\t| 5-All Of The Above   |\n\t");
        printf(" __ __ __ __ __ __ __ __\n");
        printf("\n\t\t To which currency : \t");
        scanf("%d",&choiceB);

switch(choiceB)
{
 case 1: //DIRHAM TO RUPEE
  {
        printf("\n\t\t Enter Your Amount : \t");
        scanf("%f",&amount);

        rupee=amount*22.53;
        printf("\n\t\t\t\t\t\t\t Gross Amount : %.2f Dirhams = %.2f Rupees\n",amount,rupee);

        tax=rupee*0.006;
        printf("\n\t\t\t\t\t\t\t Tax On Amount => 0.6 Percent => %.2f\n",tax);

        rupee=rupee-tax;
        printf("\n\t\t\t\t\t\t\t Current Amount : %.2f Dirhams = %.2f Rupees\n",amount,rupee);

        break;
  }

 case 2: //DIRHAM TO DOLLAR
  {
        printf("\n\t\t Enter Your Amount : \t");
        scanf("%f",&amount);

        dollar=amount*0.27;
        printf("\n\t\t\t\t\t\t\t Gross Amount : %.2f Dirhams = %.2f Dollars\n",amount,dollar);

        tax=dollar*0.013;
        printf("\n\t\t\t\t\t\t\t Tax On Amount => 1.3 Percent => %.2f\n",tax);

        dollar=dollar-tax;
        printf("\n\t\t\t\t\t\t\t Current Amount : %.2f Dirhams = %.2f Dollars\n",amount,dollar);

        break;
  }

 case 3: //DIRHAM TO POUND
  {
        printf("\n\t\t Enter Your Amount : \t");
        scanf("%f",&amount);

        pound=amount/4.44;
        printf("\n\t\t\t\t\t\t\t Gross Amount : %.2f Dirhams = %.2f Pounds\n",amount,pound);

        tax=pound*0.0166;
        printf("\n\t\t\t\t\t\t\t Tax On Amount => 1.66 Percent => %.2f\n",tax);

        pound=pound-tax;
        printf("\n\t\t\t\t\t\t\t Current Amount : %.2f Dirhams = %.2f Pounds\n",amount,pound);

        break;
  }

case 4: //DIRHAM TO EURO
  {
        printf("\n\t\t Enter Your Amount : \t");
        scanf("%f",&amount);

        euro=amount/3.94;
        printf("\n\t\t\t\t\t\t\t Gross Amount : %.2f Dirhams = %.2f Euros\n",amount,euro);

        tax=euro*0.015;
        printf("\n\t\t\t\t\t\t\t Tax On Amount => 1.5 Percent => %.2f\n",tax);

        euro=euro-tax;
        printf("\n\t\t\t\t\t\t\t Current Amount : %.2f Dirhams = %.2f Euros\n",amount,euro);

        break;
  }

 case 5: //DIRHAM TO ALL
  {
        printf("\n\t\t Enter Your Amount :  \t");
        scanf("%f",&amount);

        rupee=amount*22.53;
            tax=rupee*0.006;
            rupee=rupee-tax;
        dollar=amount*0.27;
            tax=dollar*0.013;
            dollar=dollar-tax;
        pound=amount/4.44;
            tax=pound*0.0166;
            pound=pound-tax;
        euro=amount/3.94;
            tax=euro*0.015;
            euro=euro-tax;

        printf("\n\t\t\t\t\t\t\t%.2f Dirhams = %.2f Rupees\n",amount,rupee);
        printf("\n\t\t\t\t\t\t\t%.2fDirhams = %.2f Dollars\n",amount,dollar);
        printf("\n\t\t\t\t\t\t\t%.2fDirhams = %.2f Pounds\n",amount,pound);
        printf("\n\t\t\t\t\t\t\t%.2f Dirhams = %.2f Euros\n",amount,euro);
        break;
  }

default:
 {
        Beep(500,1000);
        printf("\n\n\t\t\t\t\t\t\t\tX X X X X Invalid Option X X X X X");
 }
}
        break;
}

default:
 {
        Beep(500,1000);
        printf("\n\n\t\t\t\t\t\t\t\t X X X X X Invalid Option X X X X X");
 }
}

        printf("\n\n\n\t\t\t\t\t\t\t Press '0' to repeat or any to end\t");
        scanf("%d",&repeat);

if(repeat !=0)
 {
	break;
 }
}
}

