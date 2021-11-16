#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
void show_record();
void reset_score();
void help();
void edit_score(float , char []);
int main()
     {
     system("color 3f");
     int countr,r,r1,count,i,n;
     float score;
     char choice;
     char playername[20];
     mainhome:
     system("cls");
     printf("\n\tHeckler\n\n\n");
     printf("\t\t\t\tQUIZ GAME\n");
     printf("\n\t\t________________________________________");

     printf("\n\n\t\t\t   Welcome To The Game");
     printf("\n\t\t________________________________________");
     printf("\n\n\t\t > Press S to Start the Game");
     printf("\n\t\t > Press V to View the Highest Score  ");
     printf("\n\t\t > Press R to Reset Score");
     printf("\n\t\t > press H for Help");
     printf("\n\t\t > press Q to Quit");
     printf("\n\n\t\t > Enter Your Choice : ");
     choice=toupper(getch());
     if (choice=='V')
	{
	show_record();
	goto mainhome;
	}
     else if (choice=='H')
	{
	help();getch();
	goto mainhome;
	}
	else if (choice=='R')
	{reset_score();
	getch();
	goto mainhome;}
	else if (choice=='Q')
        exit(0);
    else if(choice=='S')
    {
     system("cls");

    printf("\n\n\n\n\n\n\n\n\n\n\t\t\tResister Your Name: ");
     gets(playername);

    system("cls");
    printf("\n ------------------  Welcome to Quiz Game --------------------------",playername);
    printf("\n\n Here Are Few Tips For You.");
    printf("\n -------------------------------------------------------------------------");
    printf("\n >> There are 2 rounds in this Quiz Game,WARMUP ROUND & CHALLANGE ROUND");
    printf("\n >> In warmup round you will be asked a total of 3 questions to test your");
    printf("\n    general knowledge. You are eligible to play the game if you give atleast 2");
    printf("\n    right answers, otherwise you can't proceed further to the Challenge Round.");
    printf("\n >> Your game starts with CHALLANGE ROUND. In this round you will be asked a");
    printf("\n    total of 10 questions. Each right answer will be Scored 1000 points!");
    printf("\n    By this way you can win upto ONE MILLION PRIZES!!!!!..........");
    printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n    right option.");
    printf("\n >> You will be asked questions continuously, till right answers are given");
    printf("\n >> No negative marking for wrong answers!");
    printf("\n\n\t!!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!");
    printf("\n\n\n Press Y  to start the game!\n");
    printf("\n Press any other key to return to the main menu!");
    if (toupper(getch())=='Y')
		{
		    goto home;
        }
	else
		{
        goto mainhome;
       system("cls");
       }

     home:
     system("cls");
     count=0;
     for(i=1;i<=3;i++)
     {
    system("cls");
     r1=i;

     switch(r1)
		{
		case 1:
		printf("\t\t\t\tWARMUP ROUND\n\nQ1.Which crop is sown on the largest area in India?");
		printf("\n\nA.Rice\t\t\tB.Wheat\n\nC.Sugarcane\t\tD.Maize");
		if (toupper(getch())=='A')
			{
			    printf("\n\nCorrect!!!\npress any key to continue");count++;
			    getch();
			    break;
}
		else
		       {
		           printf("\n\nWrong!!! The correct answer is A.Rice\npress any key to continue");
		           getch();
		       break;
		       }

        case 2:
		printf("\n\n\nQ2.Eritrea, which became the 182nd member of the United Nations in 1993, is on the continent of ");
		printf("\n\nA.Asia\t\t\tB.Africa\n\nC.Europe\t\tD.Australia");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!\npress any key to continue");count++;
			getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.Africa\npress any key to continue");
		       getch();
		       break;}

        case 3:
		printf("\n\n\nQ3.Which of the following personalities gave 'The Laws of Heredity'?");
		printf("\n\nA.Robert Hook\t\t\tB.G.J Mendel\n\nC.Charles Darwin\t\tD.William Harvey");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!\npress any key to continue");count++;
			getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.G.J Mendel\npress any key to continue");
		       getch();
		       break;}}
		       }

	if(count>=2)
	{goto test;}
	else
	{
	system("cls");
	printf("\n\nSORRY YOU ARE NOT ELIGIBLE TO PLAY CHALLANGE ROUND, BETTER LUCK NEXT TIME");
	getch();
	goto mainhome;
	}
     test:
     system("cls");
     printf("\n\n\t*** CONGRATULATION %s YOU ARE ELIGIBLE TO PLAY CHALLANGE ROUND ***",playername);
     printf("\n\n\n\n\t\t!Press any key to Start the CHALLANGE ROUND!");
     if(toupper(getch())=='p')
		{goto game;}
game:
     countr=0;
     for(i=1;i<=10;i++)
     {system("cls");
     r=i;

     switch(r)
		{
		case 1:
		printf("\t\t\t\tCHALLANGE ROUND\n\nQ1.What is the National Game of England?");
		printf("\n\nA.Football\t\tB.Basketball\n\nC.Cricket\t\tD.Baseball");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;getch();}
		else
		       {printf("\n\nWrong!!! The correct answer is C.Cricket\npress any key to continue");getch();
		       goto score;
		       break;}

		case 2:
		printf("\n\n\nQ2.Study of Earthquake is called............,");
		printf("\n\nA.Seismology\t\tB.Cosmology\n\nC.Orology\t\tD.Etimology");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!\npress any key to continue");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Seismology\npress any key to continue");getch();
		      goto score;
		       break;
		       }

        case 3:
		printf("\n\n\nQ3.Among the top 10 highest peaks in the world, how many lie in Nepal? ");
		printf("\n\nA.6\t\tB.7\n\nC.8\t\tD.9");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!\npress any key to continue");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.8\npress any key to continue");getch();
		       goto score;
		       break;}

        case 4:
		printf("\n\n\nQ4.The Laws of Electromagnetic Induction were given by?");
		printf("\n\nA.Faraday\t\tB.Tesla\n\nC.Maxwell\t\tD.Coulomb");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!\npress any key to continue");countr++;getch();
			 break;}
		else
		       {
                printf("\n\nWrong!!! The correct answer is A.Faraday\npress any key to continue");getch();
		       goto score;
		       break;
		       }

        case 5:
		printf("\n\n\nQ5.In what unit is electric power measured?");
		printf("\n\nA.Coulomb\t\tB.Watt\n\nC.Power\t\t\tD.Units");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!\npress any key to continue");
			countr++;
			getch();
			break;}
		else
		       {
		           printf("\n\nWrong!!! The correct answer is B.Power\npress any key to continue");
		       getch();
		       goto score;
		       break;
		       }
			   case 6:
		printf("\n\n\nQ6.Who was awarded the youngest player award in Fifa World Cup 2006?");
		printf("\n\nA.Wayne Rooney\t\tB.Lucas Podolski\n\nC.Lionel Messi\t\tD.Christiano Ronaldo");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!\npress any key to continue");
			countr++;
			getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.Lucas Podolski\npress any key to continue");
		       getch();
		        goto score;
		       break;}

        case 7:
        printf("\n\n\nQ7.Which is the third highest mountain in the world?");
        printf("\n\nA.Mt. K2\t\tB.Mt. Kanchanjungha\n\nC.Mt. Makalu\t\tD.Mt. Kilimanjaro");
        if (toupper(getch())=='B')
               {printf("\n\nCorrect!!!\npress any key to continue");countr++;
               getch();
                break;}
        else
		       {printf("\n\nWrong!!! The correct answer is B.Mt. Kanchanjungha\npress any key to continue");
		       getch();
		        goto score;
		       break;}
		       
		       case 8:
		printf("\n\n\nQ8.35 Which of the following is the world’s largest and deepest ocean?");
		printf("\n\nA.Arctic\t\tB.Atlantic\n\nC.Pacific\t\tD.Indian");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!\npress any key to continue");countr++;
			getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.Pacific\npress any key to continue");
		       getch();
		        goto score;
		       break;}
		       
			   case 9:
		printf("\n\n\nQ9.World Red Cross and Red Crescent Day are celebrated every year?");
		printf("\n\nA.May 8\t\t\tB.May 18\n\nC.June 8\t\tD.June 18");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!\npress any key to continue");countr++;
			getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.May 8\npress any key to continue");
		       getch();
		        goto score;
		       break;}
			   
			   case 10:
		printf("\n\n\nQ10.In which state is the Elephant Falls located?");
		printf("\n\nA. Mizoram\t\tB.Orissa\n\nC.Manipur\t\tD.Meghalaya");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!\npress any key to continue");countr++;
			getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.Meghalaya\npress any key to continue");
		       getch();
		        goto score;
		       break;}
			   
			   }}
	score:
    system("cls");
	score=(float)countr*1000;
	if(score>0.00 && score<10000)
	{
	   printf("\n\n\t\t**************** CONGRATULATION *****************");
	     printf("\n\t Your score is %.2f",score);goto go;}

	 else if(score==10000.00)
	{
	    printf("\n\n\n \t\t**************** CONGRATULATION ****************");
	    printf("\n\t\t Your score is %.2f And You won Iphone 13 Pro MAX",score);
	    printf("\t\t Thank You!!");
	}
	 else
{
	 printf("\n\n\t******** SORRY YOU DIDN'T WIN ANY PRIZE ********");
	    printf("\n\t\tYour score is %.2f And Thanks for your participation",score);
	    printf("\n\t\t TRY AGAIN");goto go;}

	go:
	puts("\n\n Press Y if you want to play next game");
	puts(" Press any key if you want to go main menu");
	if (toupper(getch())=='Y')
		goto home;
	else
		{
		edit_score(score,playername);
		goto mainhome;}}}
void show_record()
    {system("cls");
	char name[20];
	float scr;
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",&name,&scr);
	printf("\n\n\t\t*************************************************************");
	printf("\n\n\t\t %s has secured the Highest Score %0.2f",name,scr);
	printf("\n\n\t\t*************************************************************");
	fclose(f);
	getch();}

void reset_score()
    {system("cls");
    float sc;
	char nm[20];
	FILE *f;
	f=fopen("score.txt","r+");
	fscanf(f,"%s%f",&nm,&sc);
	sc=0;
	fprintf(f,"%s,%.2f",nm,sc);
    fclose(f);}
void help()
	{system("cls");
    printf("\n\n                              HELP");
    printf("\n -------------------------------------------------------------------------");
    printf("\n ......................... Heckler ...........");
    printf("\n >> There are two rounds in the game, WARMUP ROUND & CHALLANGE ROUND");
    printf("\n >> In warmup round you will be asked a total of 3 questions to test your general");
    printf("\n    knowledge. You will be eligible to play the game if you can give atleast 2");
    printf("\n    right answers otherwise you can't play the Game...........");
    printf("\n >> Your game starts with the CHALLANGE ROUND. In this round you will be asked");
    printf("\n    total 10 questions each right answer will be awarded $100,000.");
    printf("\n    By this way you can win upto ONE MILLION cash prize in USD...............");
    printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n    right option");
    printf("\n >> You will be asked questions continuously if you keep giving the right answers.");
    printf("\n >> No negative marking for wrong answers");

	printf("\n\n\t*********************BEST OF LUCK*********************************");
	printf("\n\n\t*****C PROGRAM QUIZ GAME is demonstrated by Knowledge 360********");}

void edit_score(float score, char plnm[20])
	{system("cls");
	float sc;
	char nm[20];
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",&nm,&sc);
	if (score>=sc)
	  { sc=score;
	    fclose(f);
	    f=fopen("score.txt","w");
	    fprintf(f,"%s\n%.2f",plnm,sc);
	    fclose(f);}}
