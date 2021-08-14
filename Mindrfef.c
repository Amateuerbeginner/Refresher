#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int userchoice;
    printf("\t\t\t\t\t\t COMPUTER KEYBOARD GAMES \n  ");
    printf("\n");
    printf("\n");
    printf("1> CRICKET                   ( press '1')\n");
    printf("2> GUESS THE NUMBER          ( press '2')\n");
    scanf("%d", &userchoice);

    if (userchoice == 1)
    {
        int toss, tossi;
        int bb;
        srand(time(0));
        toss = rand() % 2 + 1;

        printf("\t\t\t\t*******CRICKET******\n");
        printf("\t\t Rules :\n");
        printf("\t\t THE NUMBER ENTERD BY YOU WILL BE YOUR RUN\n");
        printf("\t\t 2. IF THE NUMBER ENTERED BY YOU AND THE COMPUTER IS THE SAME ,  THE PERSON BATTING WILL BE OUT\n");
        printf("\t\t 3. THE PERSON TO BE BATTING OR BOWLING FIRST WILL BE DECIDED BY A TOSS   \n");
        printf("\t\t 4. A PERSON HAS ONE WICKET WHICH HE/SHE LOSES WHEN OUT \n");
        printf("\t\t 5. IN THE END THE PERSON SCORING THE MAXIMUM RUNS WINS\n");
        printf("\t\t 4. 1 , 2, 3, 4, 5 & 6 ARE THE VALID NUMBERS THAT YOU CAN ENTER\n");

        printf("\t\t\t\t\n");
        printf("\t\t\t\t\n");
        printf("\t\t\t\t\n");
        printf("\t\t\t\t****** TOSS *******\n");
        printf("\t\tpress 1 for heads\n\t\t press 2 for tails \n");
        scanf("%d", &tossi);
        if (toss == tossi)
        {
            printf("you won the toss !");
            printf(" \t\tWhat do you choose  :\n");
            printf(" \t\t\t\tpress 2 for batting \n\t\t\t\tpress 3 for bowling\n");
            scanf("%d", &bb);
            if (bb == 2)
            {
                printf("YOU ARE BATTING !\n");
                int comp, user, run = 0, compi, useri, runi = 0, c;
                do
                {
                    comp = rand() % 6 + 1;
                    printf("Enter your number\n");
                    scanf("%d", &user);
                    printf(" computer's no : %d\n", comp);

                    run = run + user;

                } while (comp != user);
                printf("you are out !\n");
                printf("your run:%d\n", run);
                printf("\t\t\t\t******* END OF INNIGS ******** \n");
                printf("press 1 to continue \n");
                scanf("%d\n", &c);
                if (c == 1)
                {
                    printf("YOU ARE BOWLING ! \n");
                    do
                    {
                        compi = rand() % 6 + 1;
                        printf("Enter your number\n");
                        scanf("%d", &useri);
                        printf(" computer's no : %d\n", compi);

                        runi = runi + compi;
                        if (runi > run)
                        {
                            break;
                        }
                    } while (compi != useri);
                    printf("computer's run:%d\n", runi);

                    if (run > runi)
                    {
                        printf("\t\t\t\t\t****YOU WON****\n");
                    }
                    else if (runi > run)
                    {
                        printf("\t\t\t\t\t****YOU LOST****\n");
                    }
                    else
                        printf("\t\t\t\t\t****MATCH DRAW****\n");
                    int g;
                    printf("please press any number and exit\n");
                    scanf("%d", &g);
                }
            }
            else
            {
                int compi, useri, runi = 0, comp, user, run = 0, c;
                printf("YOU ARE BOWLING ! \n");
                do
                {
                    printf("Enter your number\n");
                    scanf("%d", &useri);
                    compi = rand() % 6 + 1;

                    printf(" computer's no : %d\n", compi);

                    runi = runi + compi;
                } while (compi != useri);
                printf("computer is out\n ");
                printf("computer's run:%d\n", runi);
                printf("\t\t\t\t******* END OF INNIGS ******** \n");
                printf("press 1 to continue \n");
                scanf("%d", &c);
                if (c == 1)
                {
                    printf("YOU ARE BATTING !\n");
                    do
                    {
                        comp = rand() % 6 + 1;
                        printf("Enter your number\n");
                        scanf("%d", &user);
                        printf(" computer's no : %d\n", comp);

                        run = run + user;
                        if (runi < run)
                            break;
                    } while (comp != user);

                    printf("your run:%d\n", run);

                    if (run > runi)
                    {
                        printf("\t\t\t\t\t****YOU WON****\n");
                    }
                    else if (runi > run)
                    {
                        printf("\t\t\t\t\t****YOU LOST****\n");
                    }
                    else
                        printf("\t\t\t\t\t****MATCH DRAW****\n");
                    int g;
                    printf("please press any number and exit\n");
                    scanf("%d", &g);
                }
            }
        }
        else
        {
            int r;
            r = rand() % 3 + 2;

            if (r == 2)
            {
                printf(" \t\t\t\tTHE COMPUTER WON THE TOSS AND CHOSE TO BAT FIRST  \n");
                int compi, useri, runi = 0;
                int comp, user, run = 0, c;
                printf("YOU ARE BOWLING ! \n");
                do
                {
                    compi = rand() % 6 + 1;
                    printf("Enter your number\n");
                    scanf("%d", &useri);
                    printf(" computer's no : %d\n", compi);

                    runi = runi + compi;
                } while (compi != useri);
                printf("computer is out\n ");
                printf("computer's run:%d\n", runi);
                printf("\t\t\t\t******* END OF INNIGS ******** \n");
                printf("press 1 to continue \n");
                scanf("%d", &c);
                if (c == 1)
                {
                    printf("YOU ARE BATTING !\n");
                    do
                    {
                        comp = rand() % 6 + 1;
                        printf("Enter your number\n");
                        scanf("%d", &user);
                        printf(" computer's no : %d\n", comp);

                        run = run + user;
                        if (runi < run)
                            break;
                    } while (comp != user);

                    printf("your run:%d\n", run);

                    if (run > runi)
                    {
                        printf("\t\t\t\t\t****YOU WON****\n");
                    }
                    else if (runi > run)
                    {
                        printf("\t\t\t\t\t****YOU LOST****\n");
                    }
                    else
                        printf("\t\t\t\t\t****MATCH DRAW****\n");
                    int g;
                    printf("please press any number and exit\n");
                    scanf("%d", &g);
                }
            }
            else
            {
                printf(" \t\t\t\tTHE COMPUTER WON THE TOSS AND CHOSE TO BOWL FIRST  \n");
                printf("YOU ARE BATTING !\n");
                int comp, user, run = 0, compi, useri, runi = 0, c;
                do
                {
                    comp = rand() % 6 + 1;
                    printf("Enter your number\n");
                    scanf("%d", &user);
                    printf(" computer's no : %d\n", comp);

                    run = run + user;

                } while (comp != user);
                printf("you are out !\n");
                printf("your run:%d\n", run);
                printf("\t\t\t\t******* END OF INNIGS ******** \n");
                printf("press 1 to continue \n");
                scanf("%d", &c);
                if (c == 1)
                {
                    printf("YOU ARE BOWLING ! \n");
                    do
                    {
                        compi = rand() % 6 + 1;
                        printf("Enter your number\n");
                        scanf("%d", &useri);
                        printf(" computer's no : %d\n", compi);

                        runi = runi + compi;
                        if (runi > run)
                        {
                            break;
                        }
                    } while (compi != useri);
                    printf("computer's run:%d\n", runi);

                    if (run > runi)
                    {
                        printf("\t\t\t\t\t****YOU WON****\n");
                    }
                    else if (runi > run)
                    {
                        printf("\t\t\t\t\t****YOU LOST****\n");
                    }
                    else
                        printf("\t\t\t\t\t****MATCH DRAW****\n");
                    int g;
                    printf("please press any number and exit\n");
                    scanf("%d", &g);
                }
            }
        }
    }
    else if (userchoice == 2)
    {
        int dif;
        printf("\t\t\t\t *******GUESS THE NUMBER*******\n");
        printf("\t\tCHOOSE THE LEVEL: \n");
        printf("\t\t\tEasy    (press 1)\n\t\t\tMedium  (press 2)\n\t\t\tHard   (press 3)");
        scanf("%d", &dif);
        if (dif == 1)
        {
            int number, guess, attempts = 1;
            int rating;
            srand(time(0));
            number = rand() % 20 + 1;
            printf("DIFFICULTY LEVEL:EASY\n");
            do
            {
                printf("Guess the number that the computer is thinking between 1 to 20 \n");
                scanf("%d", &guess);
                if (guess > number)
                    printf("the number is less than your guess\n");
                else if (guess < number)
                    printf("the number is more  than your guess\n");
                else
                {
                    printf("you are right !\n");
                    printf(" attempts : %d \n", attempts);
                }
                attempts++;
            } while (guess != number);
            printf(" press any number and exit \n");
            scanf("%d", &rating);
        }
        else if (dif == 2)
        {
            int number, guess, attempts = 1;
            int rating;
            srand(time(0));
            number = rand() % 50 + 1;
            printf("DIFFICULTY LEVEL: MEDIUM\n");

            do
            {
                printf("Guess the number that the computer is thinking between 1 to 50 \n");
                scanf("%d", &guess);
                if (guess > number)
                    printf("the number is less than your guess\n");
                else if (guess < number)
                    printf("the number is more  than your guess\n");
                else
                {
                    printf("you are right !\n");
                    printf(" attempts : %d\n ", attempts);
                }
                attempts++;
            } while (guess != number);
            printf("press any number and exit \n");
            scanf("%d", &rating);
        }
        else if (dif == 3)
        {
            int number, guess, attempts = 1;
            int rating;
            srand(time(0));
            number = rand() % 100 + 1;
            printf("DIFFICULTY LEVEL: HARD\n");

            do
            {
                printf("Guess the number that the computer is thinking between 1 to 100 \n");
                scanf("%d", &guess);
                if (guess > number)
                    printf("the number is less than your guess\n");
                else if (guess < number)
                    printf("the number is more  than your guess\n");
                else
                {
                    printf("you are right !\n");
                    printf(" attempts : %d\n ", attempts);
                }

                attempts++;
            } while (guess != number);
            printf("press any number and exit\n");
            scanf("%d", &rating);
        }
        else
            printf("ERROR:(this DIFFICULTY LEVEL not found)");
    }
    return 0;
}