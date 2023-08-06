#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int quick_quiz(int);       //function declaration. function is take something return something

int main()
{
    char output[]="yes";
    int l1,l2,t1;
    char y[10];
    char str1[]="YES";
    char str2[10];
    char str3[]="NO";
    int l3;
    int i,j,k;
    int choice,choice2,totalcost=0;
    int Accessories;
    int Mobiles;
    int Shoes;
    int num;
    int a[15];
    int cost[15],acc[15],upip[15];
    char name[30],add[100],upi[20],cardname[20],ts[5];
    int expiry[5],otp[10],cvv[5],cardnumber[17],number[15],last[5];

    //CAPTCHA CODE

    printf("TO ENTER WE WILL ASK SOME QUESTIONS TO VERIFY YOU ARE HUMAN OR NOT\n");
    printf("WRITE 'YES' TO CONTINUE 'NO' TO DISCONTINUE\n");

    gets(str2);
    l1=strlen(str1);
    l2=strlen(str2);

    if(l1!=l2)
    {
        printf("YOU DISCOUNTINUED CAPTHA VERIFICATION FAILED!!!\n");
        return 0;
    }
    for(i=0; str1[i]; i++)
    {
        if(str1[i]!=str2[i])
        {
            printf("YOU DISCOUNTINUED CAPTHA VERIFICATION FAILED!!!");
            return 0;
        }

    }
    printf("***ENTER THE NAME OF THE BELOW SHAPE?***\n");

    for(i=1; i<=5; i++)
    {
        k=1;
    for(j=1; j<=9; j++)
    {

        if(j>=6-i && j<=4+i && k)
        {
        printf("*");
        k=0;
        }
        else
        {
        printf(" ");
        k=1;
        }

    }
    printf("\n");
    }

    char str4[]="TRIANGLE";
    char str5[10];
    gets(str5);

    int l4,l5;
    l4=strlen(str4);
    l5=strlen(str5);
    if(l4!=l5)
    {
        printf("CAPTHA VERIFICATION FAILED\n");
        printf("YOU ENTERED THE WRONG SHAPE\n");
        return 0;
    }
    for(i=0; str4[i]; i++)
    {
        if(str4[i]!=str5[i])
        {
        printf("CAPTHA VERIFICATION FAILED\n");
        printf("YOU ENTERED THE WRONG SHAPE\n");
        return 0;
        }
    }

    printf("YOU ENTERED THE RIGHT SHAPE\n\n");

    printf("NOW WHAT IS THE SHAPE BELOW?\n");

    for(i=1; i<=9; i++)
    {

        if(i<=5)
        {
            k++;
        }
        else
        {
            k--;
        }
    for(j=1; j<=9; j++)
    {
        if((j==6-k || j==4+k)|| (j==5 || i==5))
        printf("*");
        else
        printf(" ");
    }
    printf("\n");

    }

    int l6,l7;
    char str6[]="DIAMOND";
    char str7[10];
    gets(str7);
    l6=strlen(str6);
    l7=strlen(str7);
    if(l6!=l7)
    {
        printf("CAPTHA VERIFICATION FAILED\n");
        printf("YOU ENTERED THE WRONG SHAPE\n");
        return 0;
    }
     for(i=0; str6[i]; i++)
    {
        if(str6[i]!=str7[i])
        {
        printf("CAPTHA VERIFICATION FAILED\n");
        printf("YOU ENTERED THE WRONG SHAPE\n");
        return 0;
        }
    }

    printf("YOU ENTERED THE RIGHT SHAPE\n\n");

    printf("ENTER THE BELOW SHAPE\n");

    for(i=1; i<=5; i++)
    {
    for(j=1; j<=9; j++)
    {
        if(j>=6-i && j<=4+i)
        printf("*");
        else
       printf(" ");
    }
    printf("\n");
    }

    for(i=1; i<=3; i++)
        {
            for(j=1; j<=9; j++)
            {
                printf("*");
            }
            printf("\n");
        }

    for(i=1; i<=5; i++)
    {
        for(j=1; j<=9; j++)
    {
        if(j>=i && j<=10-i)
        printf("*");
        else
        printf(" ");
    }
    printf("\n");
    }


    int l8,l9;
    char str8[]="HEXAGON";
    char str9[10];
    gets(str9);
    l8=strlen(str8);
    l9=strlen(str9);
    if(l8!=l9)
    {
        printf("CAPTHA VERIFICATION FAILED\n");
        printf("YOU ENTERED THE WRONG SHAPE\n");
        return 0;
    }
     for(i=0; str8[i]; i++)
    {
        if(str8[i]!=str9[i])
        {
        printf("CAPTHA VERIFICATION FAILED\n");
        printf("YOU ENTERED THE WRONG SHAPE\n");
        return 0;
        }
    }

    printf("YOU ENTERED THE RIGHT SHAPE\n\n");
    printf("YOU HAVE SUCCESFULLY PASSED OUR CAPTHA VERIFICATION\n ");
    printf("NOW YOU HAVE ENTERED OUR WEBSITE\n");


//    MAIN WEBSITE CODE

    k=0,j=0;

    char purchase[15][100]={"Sandisk 128 GB         ",
    "Logitech Mouse         ",
    "Pendrive 64 GB         ",
    "Boat Rockerz 450       ",
    "Ambrane powerbank      ",
    "Nike                   ",
    "Adidas                 ",
    "Leecoooper             ",
    "Balenciaga             ",
    "Converse All Stars     ",
    "Samsung M53            ",
    "Apple iphone 13 pro max",
    "OnePlus 10 pro         ",
    "XIaomi 12 pro          ",
    "Samsung M33            "
    };

    printf("Please Enter Your Name\n");
    gets(name);
    fflush(stdin);
    printf("Hello %s, Welcome to our Online Shopping.\n",name);

    for(i=0;i<15;i++)
    {
        a[i]=0;
    }

    label:

    printf("Enter your choice");
    printf("\n1-Computer Accessories\n2-Shoes\n3-Mobiles\n");
    scanf("%d",&choice);
    fflush(stdin);


    if((choice==1)||(choice==2)||(choice==3))
    {
    }

    else
    {
        printf("Thanks , visit again");
        return 0;
    }
    switch(choice)
    {
        case 1:
                printf("Enter\n1 - Sandisk 128 GB-Rs.300\n2 - Logitech Mouse- Rs.500\n3 - Pendrive 64 GB - Rs.660\n4 - Boat Rockerz 450 - Rs.999\n5 - Ambrane Powerbank - Rs.1599\n ");
                printf("WRITE THE ITEM NUMBER YOU WANT TO BUY:");
                scanf("%d",&Accessories);
                cost[0]=300;
                cost[1]=500;
                cost[2]=660;
                cost[3]=999;
                cost[4]=1599;

                switch(Accessories)
                {
                  case 1:
                    {
                        printf("You chose Sandisk 128 GB with Rs.300.Are you sure to buy? Write 'yes' or 'no'\n");
                        scanf("%s",y);
                        num=strcmp(output,y);
                        if(num==0)
                        {
                            a[0]++;
                            totalcost+=300;
                        }
                        printf("Your cost in Cart is %d\n", totalcost);
                        break;

                    }
                  case 2:
                    {
                        printf("You chose Logitech Mouse with Rs.500.Are you sure to buy? Write 'yes' or 'no'\n");
                        scanf("%s",y);
                        num=strcmp(output,y);
                        if(num==0)
                        {
                            a[1]++;
                            totalcost+=500;
                        }
                        printf("Your cost in cart is %d\n",totalcost);
                        break;
                    }

                  case 3:
                    {
                        printf("You chose Pendrive 64 GB with Rs.660.Are you sure to buy? Write 'yes' or 'no'\n");
                        scanf("%s",y);
                        num=strcmp(output,y);
                        if(num==0)
                        {
                            a[2]++;
                            totalcost+=660;
                        }
                        printf("Your cost in cart is %d\n", totalcost);
                        break;
                    }

                  case 4:
                    {
                        printf("You chose Boat Rockerz 450 with Rs.999.Are you sure to buy? Write 'yes' or 'no'\n");
                        scanf("%s",y);
                        num=strcmp(output,y);
                        if(num==0)
                       {
                        a[3]++;
                         totalcost+=999;
                       }
                       printf("Your cost in cart is %d\n",totalcost);
                       break;
                    }

                  case 5:
                    {
                        printf("You chose Ambrane powerbank with Rs.1599.Are you sure to buy?  Write 'yes' or 'no'\n");
                        scanf("%s",y);
                        num=strcmp(output,y);
                        if(num==0)
                       {
                        a[4]++;
                        totalcost+=1599;
                       }
                       printf("Your cost in cart is %d\n",totalcost);
                       break;
                    }

                  default:
                    {
                    printf("Exit from Computer Accessories\n");
                    break;
                    }

                }
            break;

        case 2:
                printf("Enter\n1 - Adidas - Rs.3999\n2 - Nike - Rs.2799\n3 - LeeCooper - Rs.4200\n4 - Balenciaga - Rs.68079\n5 - Converse All Stars - Rs. 3500\n");
                printf("WRITE THE ITEM NUMBER YOU WANT TO BUY:");
                scanf("%d",&Shoes);
                cost[5]=3999;
                cost[6]=2799;
                cost[7]=4200;
                cost[8]=68079;
                cost[9]=3500;
                switch(Shoes)
                {
                 case 1:
                    {
                        printf("You chose Adidas worth Rs.3999.Are you sure to buy?  Write 'yes' or 'no'\n");
                        scanf("%s",y);
                        num=strcmp(output,y);
                        if(num==0)
                       {
                        a[5]++;
                       totalcost+=3999;
                       }
                    printf("Your cost in Cart is %d\n",totalcost);
                    break;
                    }

                 case 2:
                    {
                        printf("You chose Nike worth Rs.2799.Are you sure to buy? Write 'yes' or 'no'\n");
                        scanf("%s",y);
                        num=strcmp(output,y);
                        if(num==0)
                        {
                            a[6]++;
                            totalcost+=2799;
                        }
                        printf("Your cost in cart is %d\n",totalcost);
                        break;
                    }

                 case 3:
                    {
                        printf("You chose Lee Cooper worth Rs.4200.Are you sure to buy?  Write 'yes' or 'no'\n");
                        scanf("%s",y);
                        num=strcmp(output,y);
                        if(num==0)
                        {
                            a[7]++;
                            totalcost+=4200;
                        }
                        printf("Your cost in cart is %d\n", totalcost);
                        break;
                    }

                 case 4:
                    {
                        printf("You chose Balenciaga worth Rs.68079.Are you sure to buy?  Write 'yes' or 'no'\n");
                        scanf("%s",y);
                        num=strcmp(output,y);
                        if(num==0)
                       {
                        a[8]++;
                       totalcost+=68079;
                       }
                    printf("Your cost in cart is %d\n",totalcost);
                    break;
                    }

                 case 5:
                    {
                        printf("You chose Converse All Stars worth Rs.3500.Are you sure to buy?  Write 'yes' or 'no'\n");
                        scanf("%s",y);
                        num=strcmp(output,y);
                        if(num==0)
                       {
                        a[9]++;
                        totalcost+=3500;
                       }
                    printf("Your cost in cart is %d\n",totalcost);
                    break;
                    }

                    default:{
                    printf("Exit from Shoes\n");
                    break;}

                    }
                    break;

        case 3:
                printf("Enter\n1 - Samsung M53 - Rs.28999\n2 - Apple iphone 13 - Rs.69900\n3 -OnePlus 10 pro - Rs.61999\n4 - Xiaomi 12 pro- Rs.55999\n5 - Samsung M33 - Rs. 20499\n");
                printf("WRITE THE ITEM NUMBER YOU WANT TO BUY:");
                scanf("%d",&Mobiles);
                cost[10]=28999;
                cost[11]=69900;
                cost[12]=61999;
                cost[13]=55999;
                cost[14]=20499;

                switch(Mobiles)
                {
                case 1:
                    {
                        printf("You chose Samsung M53 worth Rs.28999.Are you sure to buy?  Write 'yes' or 'no'\n");
                        scanf("%s",y);
                        num=strcmp(output,y);
                        if(num==0)
                        {
                        a[10]++;
                        totalcost+=28999;
                        }
                        printf("Your cost in Cart is %d\n", totalcost);
                        break;
                    }

                case 2:
                    {
                        printf("You chose Apple iphone 13 worth Rs.69900.Are you sure to buy? Write 'yes' or 'no'\n");
                        scanf("%s",y);
                        num=strcmp(output,y);
                        if(num==0)
                        {
                            a[11]++;
                            totalcost+=69900;
                        }
                        printf("Your cost in cart is %d\n",totalcost);
                        break;
                    }

                case 3:
                    {
                        printf("You chose OnePlus 10 pro worth Rs.61999.Are you sure to buy?  Write 'yes' or 'no'\n");
                        scanf("%s",y);
                        num=strcmp(output,y);
                        if(num==0)
                        {
                            a[12]++;
                            totalcost+=61999;
                        }
                        printf("Your cost in cart is %d\n", totalcost);
                        break;
                    }

                case 4:
                    {
                        printf("You chose Xiaomi 12 pro worth Rs.55999.Are you sure to buy? Write 'yes' or 'no'\n");
                        scanf("%s",y);
                        num=strcmp(output,y);
                        if(num==0)
                       {
                        a[13]++;
                       totalcost+=55999;
                       }
                    printf("Your cost in cart is %d\n",totalcost);
                    break;
                    }

                case 5:
                    {
                        printf("You chose Samsung M33 worth Rs.20499.Are you sure to buy?  Write 'yes' or 'no'\n");
                        scanf("%s",y);
                        num=strcmp(output,y);
                        if(num==0)
                       {
                        a[14]++;
                       totalcost+=20499;
                       }
                       printf("Your cost in cart is %d\n",totalcost);
                       break;
                    }

                default:
                printf("Exit from Mobiles\n");

             }
    }
    printf("do u want to shop more ? Write 'yes' or 'no'\n");
    scanf("%s",y);
    num=strcmp(output,y);
    if(num!=0)
    {
        printf("%s's cart\n",name);
        printf("No.\t        Purchase\t                M.R.P\t    Quantity\n");
        for(i=0;i<15;i++)
        {
            if (a[i]!=0)
            {
                j++;
                printf("%d\t\t%s\t\t%d\t\t%d\n",j,purchase[i],cost[i],a[i]);
            }
        }

        printf("\n your total amount is %d\n",totalcost);
        printf("But you dont have to pay this amount if you win our quiz, you can win heavy discount\n");
        printf("For every question 50 rupees will be deducted from your amount\n");
        printf("So you want to play our quiz yes or no\n");

        fflush(stdin);
        gets(ts);
        t1=strlen(ts);

        if(t1==3)
        {
        totalcost=quick_quiz(totalcost);
        printf("So after our quiz your discounted price is %d\n",totalcost);
        }

        printf("how would you like to make payment or cancel order \n");
        printf("Do you want to go to the payment portal write 'yes' or 'no'\n");
        scanf("%s",y);
        num=strcmp(output,y);
        if(num==0)
        {
        printf("How would you like to make payment\n");
        printf(" 1 - COD \n 2 - By Card \n 3 - Upi id \n");
        scanf("%d",&choice2);
        if((choice2==1)||(choice2==2)||(choice2==3))
        {
        }

        switch(choice2)
        {
            case 1:
            printf("Please enter your address\n");
            scanf("%s",add);
            fflush(stdin);
            printf("enter your mobile number\n");
            scanf("%d",&number);
            printf("\n THANK YOU %s \n Your order will be delivered at %s",name,add);
            break;

            case 2:
            printf("Please enter your address\n");
            scanf("%s",add);
            fflush(stdin);
            printf("Enter your card details\n");
            printf("Enter 16 digits card number\n");
            scanf("%d",&cardnumber);


            for(i=0;i<4;i++)
            {
                k=cardnumber[i+12];
                last[i]=k;
            }

            fflush(stdin);
            printf("Enter CVV \n");
            scanf("%d",&cvv);
            printf("Enter expiry date in format MMYY\n");
            scanf("%d",&expiry);
            printf("Enter card holder name\n");
            scanf("%s",cardname);
            printf("Enter the otp recieved on your registered number\n");
            scanf("%d",&otp);
            fflush(stdin);
            printf("Thank you %s \n Amount %d is deducted from your card",cardname,totalcost);
            printf("\n THANK YOU %s \n Your order will be delivered at %s",cardname,add);
            break;

            case 3:

            printf("Enter your UPI ID\n");
            scanf("%s",upi);
            printf("Enter your 12 digit account number\n");
            scanf("%d",&acc);
            printf("Enter your 4 digit UPI Pin\n");
            scanf("%d",&upip);
            printf("Thank you %d deducted from your account\n ",totalcost);
            printf("Thank you %s for shopping with us\n",name);

        }
        }
        else
        {
        printf("Thank you,visit again");
        }


    }
    else
    goto label;


        //code for rating the website

    int r;
    printf("\nPLEASE ENTER YOUR RATING THIS WILL BE VALUABLE TO US\n");
    printf("5 MEANS ABSOLUTELY BEST 1 MEANS WORST\n");

    scanf("%d",&r);

    if(r==1)
    {
        for(i=1; i<=7; i++)
        {
            for(j=1; j<=5; j++)
            {
                if((i==2 && j==2) ||(i==3 && j==1)|| (j==3) || (i==7))
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");

        }

        printf("THANK YOU FOR RATING US\n YOU GAVE US 1 STARS\n");
        printf("WE WILL MAKE SURE TO CHANGE YOUR EXPIEREINCE NEXT TIME\n");

    }

    if(r==2)
    {
        for(i=1; i<=7; i++)
        {
            for(j=1; j<=4; j++)
            {
                if((i<=4 && j==4) ||(i<=7 && i>=4 && j==1)|| (i==1) || (i==4) || (i==7))
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");

        }

        printf("THANK YOU FOR RATING US\n YOU GAVE US 2 STARS\n");
        printf("WE WILL MAKE SURE TO GIVE YOU BETTER EXPIEREINCE NEXT TIME\n");

    }

    if(r==3)
    {
        for(i=1; i<=7; i++)
        {
            for(j=1; j<=4; j++)
            {
                if((j==4) || (i==1) || (i==4) || (i==7))
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");

        }

        printf("THANK YOU FOR RATING US\n YOU GAVE US 3 STARS\n");
        printf("WE WILL MAKE SURE TO IMPROVE YOUR EXPIEREINCE FURTHER NEXT TIME\n");

    }

    if(r==4)
    {
        for(i=1; i<=7; i++)
        {
            for(j=1; j<=4; j++)
            {
                if((j==4) || (i==4) || (j==1) && (i<=4) )
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");

        }

        printf("THANK YOU SO MUCH FOR RATING US\n YOU GAVE US 4 STARS\n");
        printf("WE WILL MAKE SURE TO IMPROVE YOUR EXPIEREINCE FURTHER NEXT TIME\n");

    }

    if(r==5)
    {
        for(i=1; i<=7; i++)
        {
            for(j=1; j<=5; j++)
            {
                if((i==1) || (i==4) || (i==7) || (i<=4) && (j==1) || (i>=4) && (i<=7) && (j==5))
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");

        }

        printf("THANK YOU SO MUCH FOR RATING US\n YOU GAVE US 5 STARS\n");
        printf("WE WILL MAKE SURE TO IMPROVE YOUR EXPIEREINCE FURTHER NEXT TIME\n");

    }

    printf("THANK YOU FOR BEING WITH US AND BELIEVING US\n");
    printf("HAPPY SHOPPING\n");

return 0;
}

// FUNCTION FOR QUIZ RETURN TYPE INTEGER

int quick_quiz(int totalcost)
{
    int n=0,t;

    printf("                          WELCOME TO QUIZ FOR DISCOUNT                                   \n");
    printf("Play carefully if you give wrong answer you loses the quiz game and  not get any discount:\n\n");
    printf("                               GUILDLINE FOR QUIZ                                           \n");
    printf("If you give right answer of every question than you get discount on the selected product \n");
    printf("If you wrong answer of any of the question than you loss and not get any discount\n But we think it is a fun to play a quiz\n\n\n");
    int fi;
    printf("enter field of interest:\n 1)sport\n 2)history\n 3)indian culture\n 4)science\n");
    scanf("%d",&fi);
    switch(fi)
    {
        case 1 :
               printf("_____________ Welcome to Sports Quiz________________ :\n\n");
               int q;
               printf("Question 1: donald bradman was a great player of which sport : \n\n option:1.football  2.cricket\t  3.tennis\t 4.baseball\n");
               scanf("%d",&q);
               if(q==2)
               {
                printf("right answer\n");
                printf("your score is %d\n",++n);
                printf("move to next question\n");
               }
               else
               {
                printf("xxxxx  WRONG xxxxx\n");
                printf("your score is %d\n",n);
               }
               int qq;
               printf("Question 2: what is the national sport of spain:\n\n option:1.judo  2.football\t 3.bullfighting\t 4.rugbyfootball\n");
               scanf("%d",&qq);
                      if(qq==3)
                      {
                        printf("right answer\n");
                        printf("your score is %d\n",++n);
                        printf("move to next question\n");
                        }
                        else
                        {
                            printf("xxxxx  WRONG  xxxxx\n");
                            printf("your score is %d\n",n);
                        }
                        int qqq;
                        printf("Question 3: which was the 1st non testing playing country to beat india in an international match:\n option:1.srilanka  2.cannada\t 3.zimbabwe\t 4.east africa\n");
                        scanf("%d",&qqq);
                        if(qqq==1)
                        {
                            printf("right answer\n");
                            printf("you won the quiz \n");
                            printf("your score is %d out of 3\n",++n);

                        }
                        else
                        {
                            printf("xxxxx  WRONG  xxxxx\n");
                            printf("your score is %d out of 3\n",n);

                        }
                        totalcost=totalcost-(50*n);
                        break;
                case 2:
                        printf("______Welcome to History Quiz:_______\n\n");
                        int a;
                        printf("Question 1: the battle of Plassey was fought in:\n options: 1.1754  2.1757\t 3.1765\t 4.1748\n");
                        scanf("%d",&a);
                        if(a==2)
                        {
                            printf("right answer\n");
                            printf("your score is %d\n",++n);
                            printf("move to next question\n");
                            }
                        else
                        {
                            printf("xxxxx WRONG  xxxxx\n");
                            printf("your score is %d\n",n);
                        }
                        int aa;
                        printf("Question 2:- the trident-shaped symbol of buddhism does not represent:\n option 1.Nirvana  2.Sangha\t 3.buddha\t 4.dharma\n");
                        scanf("%d",&aa);
                        if(aa==1)
                        {
                            printf("right answer\n");
                            printf("your score is %d\n",++n);
                            printf("move to next question\n");
                        }
                        else
                        {
                            printf("xxxxx WRONG xxxxx\n");
                            printf("your score is %d\n",n);
                        }
                            int aaa;
                            printf("Question 3:- Under akbar ,the Mir Bakshi was required to look after:\n option 1.military affairs  2.the state treasury\t 3.the royal household\t 4.none of the above\n");
                            scanf("%d",&aaa);
                            if(aaa==1)
                            {
                                printf("right answer\n");
                                printf("you won the quiz\n");
                                printf("your score is %d out of 3\n",++n);
                            }
                            else
                            {
                                printf("wrong answer\n");
                                printf("your score is %d out of 3\n",n);
                                }
                                totalcost=totalcost-(50*n);
                                break;
                case 3:
                            printf("__Welcome to INDIAN CURTUAL quiz____\n\n");
                            int b;
                            printf("Question 1: The ratio of width of our national flag to its length is\n :1)3:5   2)2:3\t 3)2:4\t 4)3:4\n ");
                            scanf("%d",&b);
                            if (b == 2) {
                                printf("right answer\n");
                                printf("your score is %d\n",++n);
                                printf("move to next question\n");
                            }
                            else {
                                printf("your answer is wrong\n");
                                printf("your score is %d\n",n);
                                }
                                int bb;
                                printf("Question 2 : 'Dandia' is a popular dance of\noptions:1)punjab  2)gujarat\t 3)Tamil nadu\t 4)Maharashtra\n");
                                scanf("%d",&bb);
                                if (bb == 2) {
                                    printf("right answer\n");
                                     printf("your score is %d\n",++n);
                                    printf("move to next question\n");
                                }
                                else {
                                    printf("your answer is wrong\n ");
                                    printf("your score is %d\n",n);
                                    }
                                int bbb;
                                    printf("Question 3: 'Natya-shastra' the main source of india's classial dances was written by\noptions:1)Nara muri  2)bharat muni\t3)abhinav gupt\t 4)tandu muni\n ");
                                       scanf("%d",&bbb);
                                       if (bbb == 2) {
                                        printf("right answer\n");
                                        printf("you won the quiz\n");
                                        printf("your score is %d out of 3\n",++n);
                                       }
                                       else
                                       {
                                        printf("xxxxx WRONG xxxxx\n");
                                        printf("your score is %d out of 3\n",n);
                                       }
                                       totalcost=totalcost-(50*n);
                                       break;
                case 4:
                            printf("_Welcome to science quiz___");
                            int z;
                            printf("Question 1: What is the chemical formula of sodium oxide\noptions:1)CaCO3  2)NaNO3\t 3)NaO\t 4)Na2O\n");
                            scanf("%d",&z);
                            if (z == 4)
                            {
                                printf("right answer\n");
                                printf("your score is %d\n",++n);
                                printf("move to next question\n");
                            }
                            else
                            {
                                printf("xxxxx  WRONG  xxxxx\n");
                                 printf("your score is %d\n",n);
                            }
                            int zz;
                            printf("Question 2: What is chemical formula of iron\noption:1)Na  2)Ca\t 3)Fe\t 4)Ir\n");
                            scanf("%d",&zz);
                            if (zz == 3)
                            {
                                printf("right answer\n");
                                 printf("your score is %d\n",++n);
                                printf("move to next question\n");
                            }
                            else
                            {
                                printf("xxxxx WRONG  xxxxx\n");
                                 printf("your score is %d\n",n);
                            }
                            int zzz;
                            printf("Question 3: What is formula of distance\noptions:1)speed*time  2)speed/time\t 3)mass*accerralation\t 4)none of above\n");
                            scanf("%d",&zzz);
                            if(zzz == 1)
                            {
                                printf("right answer\n");
                                printf("you won the quiz\n");
                                 printf("your score is %d out of 3\n",++n);
                            }
                            else {
                                printf("xxxxx WRONG  xxxxx\n");
                                 printf("your score is %d out of 3\n",n);
                            }
                            totalcost=totalcost-(50*n);
                            break;
                default:
                    printf("ENTER the valid QUIZ Number");
               }
              t=totalcost;
              return t;
}