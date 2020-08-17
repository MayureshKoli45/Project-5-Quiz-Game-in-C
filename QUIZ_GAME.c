#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>

// Function declaration and their use
// Function for cricket questions
void quiz_questions()
{
    FILE *scoreboard;
    char answer[20], name[20];
    int score = 0;
    fflush(stdin);
    printf("Enter your name :- \n");
    scanf("%s", name);
    printf("Q.1:- In which year did Milkha Singh win the first National title in the 400 m race?\n");
    printf("a. 1955 \t b. 1955 \t c. 1957 \t d. 1970 \n");
    fflush(stdin);
    scanf("%c", &answer[0]);
    if (answer[0] == 'c')
    {
        printf("CORRECT ANSWER!\n\n");
        score = score + 1;
    }
    else
    {
        printf("WRONG ANSWER!\n\n");
    }
    ///////////////////////////////////////////////////////////////////////////////////////////////////////

    printf("Q.2:- The first hand glider was designed by...?\n");
    printf("a. Leonardo DaVinci \t b. The Wright brothers \t c. Francis Rogallo \t d. Galileo \n");
    fflush(stdin);
    scanf("%c", &answer[1]);
    if (answer[1] == 'a')
    {
        printf("CORRECT ANSWER!\n\n");
        score = score + 1;
    }
    else
    {
        printf("WRONG ANSWER!\n\n");
    }
    ///////////////////////////////////////////////////////////////////////////////////////////////////////

    printf("Q.3:- Hitler party which came into power in 1933 is known as\n");
    printf("a. Labour Party \t b. Nazi Party \t c. Ku-Klux-Klan \t d. Democratic Party \n");
    fflush(stdin);
    scanf("%c", &answer[2]);
    if (answer[2] == 'b')
    {
        printf("CORRECT ANSWER!\n\n");
        score = score + 1;
    }
    else
    {
        printf("WRONG ANSWER!\n\n");
    }
    ///////////////////////////////////////////////////////////////////////////////////////////////////////

    printf("Q.4:- Which city is known as 'Electronic City of India'?\n");
    printf("a. Mumbai \t b. Hyderabad \t c. Guragon \t d. Bangalore \n");
    fflush(stdin);
    scanf("%c", &answer[3]);
    if (answer[3] == 'd')
    {
        printf("CORRECT ANSWER!\n\n");
        score = score + 1;
    }
    else
    {
        printf("WRONG ANSWER!\n\n");
    }
    ///////////////////////////////////////////////////////////////////////////////////////////////////////

    printf("Q.5:- The World Environment Day is celebrated on?\n");
    printf("a. April 7 \t b. June 5 \t c. August 6 \t d. June 16 \n");
    fflush(stdin);
    scanf("%c", &answer[4]);
    if (answer[4] == 'b')
    {
        printf("CORRECT ANSWER!\n\n");
        score = score + 1;
    }
    else
    {
        printf("WRONG ANSWER!\n\n");
    }
    ///////////////////////////////////////////////////////////////////////////////////////////////////////

    printf("Q.6:- Which county did Sachin Tendulkar play for?\n");
    printf("a. Nottinghamshire \t b. Yorkshire \t c. Lancashire \t d. Leicestershire \n");
    fflush(stdin);
    scanf("%c", &answer[5]);
    if (answer[5] == 'b')
    {
        printf("CORRECT ANSWER!\n\n");
        score = score + 1;
    }
    else
    {
        printf("WRONG ANSWER!\n\n");
    }
    ///////////////////////////////////////////////////////////////////////////////////////////////////////

    printf("Q.7:- India's first satellite is named after\n");
    printf("a. Aryabhatta \t b. Bhaskara II \t c. Bhaskara I \t d. Albert Einstein \n");
    fflush(stdin);
    scanf("%c", &answer[6]);
    if (answer[6] == 'a')
    {
        printf("CORRECT ANSWER!\n\n");
        score = score + 1;
    }
    else
    {
        printf("WRONG ANSWER!\n\n");
    }
    //////////////////////////////////////////////////////////////////////////////////////////////////////

    printf("Q.8:- The landmass of which of the following continents is the least?\n");
    printf("a. Africa \t b. Asia \t c. Australia \t d. Europe \n");
    fflush(stdin);
    scanf("%c", &answer[7]);
    if (answer[7] == 'c')
    {
        printf("CORRECT ANSWER!\n\n");
        score = score + 1;
    }
    else
    {
        printf("WRONG ANSWER!\n\n");
    }
    ///////////////////////////////////////////////////////////////////////////////////////////////////////

    printf("Q.9:- Who was known as Iron man of India?\n");
    printf("a. Govind Ballabh Pant \t b. Jawaharlal Nehru \t c. Subhash Chandra Bose \t d. Sardar Vallabhbhai Patel \n");
    fflush(stdin);
    scanf("%c", &answer[8]);
    if (answer[8] == 'd')
    {
        printf("CORRECT ANSWER!\n\n");
        score = score + 1;
    }
    else
    {
        printf("WRONG ANSWER!\n\n");
    }
    ///////////////////////////////////////////////////////////////////////////////////////////////////////

    printf("Q.10:- Which scientist discovered the radioactive element radium?\n");
    printf("a. Isaac Newton \t b. Albert Einstein \t c. Benjamin Franklin \t d. Marie Curie \n");
    fflush(stdin);
    scanf("%c", &answer[9]);
    if (answer[9] == 'd')
    {
        printf("CORRECT ANSWER!\n\n");
        score = score + 1;
    }
    else
    {
        printf("WRONG ANSWER!\n\n");
    }
    ///////////////////////////////////////////////////////////////////////////////////////////////////////

    printf("Q.11:- The Indian football team made its first appearance at Olympics in...?\n");
    printf("a. 1936 \t b. 1948 \t c. 1952 \t d. 1956 \n");
    fflush(stdin);
    scanf("%c", &answer[10]);
    if (answer[10] == 'b')
    {
        printf("CORRECT ANSWER!\n\n");
        score = score + 1;
    }
    else
    {
        printf("WRONG ANSWER!\n\n");
    }
    ///////////////////////////////////////////////////////////////////////////////////////////////////////

    printf("Q.12:- The largest continent in the world is\n");
    printf("a. Africa \t b. Asia \t c. Australia \t d. Antarctica \n");
    fflush(stdin);
    scanf("%c", &answer[11]);
    if (answer[11] == 'b')
    {
        printf("CORRECT ANSWER!\n\n");
        score = score + 1;
    }
    else
    {
        printf("WRONG ANSWER!\n\n");
    }
    ///////////////////////////////////////////////////////////////////////////////////////////////////////

    printf("Q.13:- In a normal human body, the total number of red blood cells is\n");
    printf("a. 15 trillion \t b. 5 trillion \t c. 19 trillion \t d. 30 trillion \n");
    fflush(stdin);
    scanf("%c", &answer[12]);
    if (answer[12] == 'd')
    {
        printf("CORRECT ANSWER!\n\n");
        score = score + 1;
    }
    else
    {
        printf("WRONG ANSWER!\n\n");
    }
    ///////////////////////////////////////////////////////////////////////////////////////////////////////

    printf("Q.14:- Which is known as 'Garden City of India'?\n");
    printf("a. Bangalore \t b. Simla \t c. Imphal \t d. Trivandram \n");
    fflush(stdin);
    scanf("%c", &answer[13]);
    if (answer[13] == 'a')
    {
        printf("CORRECT ANSWER!\n\n");
        score = score + 1;
    }
    else
    {
        printf("WRONG ANSWER!\n\n");
    }
    ///////////////////////////////////////////////////////////////////////////////////////////////////////

    printf("Q.15:- What Galileo invented?\n");
    printf("a. Barometer \t b. Pendulum clock \t c. Microscope \t d. Thermometer \n");
    fflush(stdin);
    scanf("%c", &answer[14]);
    if (answer[14] == 'd')
    {
        printf("CORRECT ANSWER!\n\n");
        score = score + 1;
    }
    else
    {
        printf("WRONG ANSWER!\n\n");
    }
    ///////////////////////////////////////////////////////////////////////////////////////////////////////

    printf("Q.16:- Which team won 1998 FIFA world cup?\n");
    printf("a. Brazil \t b. France \t c. Spain \t d. Argentina \n");
    fflush(stdin);
    scanf("%c", &answer[15]);
    if (answer[15] == 'b')
    {
        printf("CORRECT ANSWER!\n\n");
        score = score + 1;
    }
    else
    {
        printf("WRONG ANSWER!\n\n");
    }
    ///////////////////////////////////////////////////////////////////////////////////////////////////////

    printf("Q.17:- Vikram Sarabhai Space Centre is located at\n");
    printf("a. Pune \t b. Ahmedabad \t c. Sriharikota \t d. Thiruvananthapuram \n");
    fflush(stdin);
    scanf("%c", &answer[16]);
    if (answer[16] == 'd')
    {
        printf("CORRECT ANSWER!\n\n");
        score = score + 1;
    }
    else
    {
        printf("WRONG ANSWER!\n\n");
    }
    ///////////////////////////////////////////////////////////////////////////////////////////////////////

    printf("Q.18:- How many players are there on each side in the game of Basketball?\n");
    printf("a. 4 \t b. 5 \t c. 6 \t d. 7 \n");
    fflush(stdin);
    scanf("%c", &answer[17]);
    if (answer[17] == 'b')
    {
        printf("CORRECT ANSWER!\n\n");
        score = score + 1;
    }
    else
    {
        printf("WRONG ANSWER!\n\n");
    }
    ///////////////////////////////////////////////////////////////////////////////////////////////////////

    printf("Q.19:- Who is the English physicist responsible for the 'Big Bang Theory'?\n");
    printf("a. Albert Einstein \t b. Michael Skube \t c. George Gamow \t d. Roger Penrose \n");
    fflush(stdin);
    scanf("%c", &answer[18]);
    if (answer[18] == 'c')
    {
        printf("CORRECT ANSWER!\n\n");
        score = score + 1;
    }
    else
    {
        printf("WRONG ANSWER!\n\n");
    }
    ///////////////////////////////////////////////////////////////////////////////////////////////////////

    printf("Q.20:- The Indian to beat the computers in mathematical wizardry is\n");
    printf("a. Ramanujam \t b. Rina Panigrahi \t c. Raja Ramanna \t d. Shakunthala Devi \n");
    fflush(stdin);
    scanf("%c", &answer[19]);
    if (answer[19] == 'd')
    {
        printf("CORRECT ANSWER!\n\n");
        score = score + 1;
    }
    else
    {
        printf("WRONG ANSWER!\n\n");
    }
    ///////////////////////////////////////////////////////////////////////////////////////////////////////
    printf("You scored %d out of 20\n\n", score);
    printf("THANK YOU FOR PLAYING!");
    scoreboard = fopen("score.txt", "a");  // Here we made a file for leaderboard
    fprintf(scoreboard,"\n%s\t\t%d\n", name, score);
    fclose(scoreboard);
}

// Main program execution starts here
int main()
{
    char score, sq, fs, b, yes_or_no;  // declarations
    FILE *ptr;                         // This step is immportant to make scoreboard
    // Some print stements aree used for information an for design purpose
    while (1)  // Used while statement because it will continue the program untill exited or terminated
    {
        fflush(stdin);
        printf("\t\t******\tWELCOME TO THE\t*****\t\t\n");
        printf("\t\t ***\t  QUIZ GAME\t ***\t\t\n");
        printf("---------------------------------------------------------\t\t\n");
        printf("|\t\tPress 's' to start the game\t\t|\n");
        printf("|\t\tPress 'h' for help\t\t\t|\n");
        printf("|\t\tPress 'v' to see the scoreboard\t\t|\n");
        printf("|\t\tPress 'q' to quit the game\t\t|\n");
        printf("---------------------------------------------------------\t\t\n");
        scanf("%c", &sq);
        system("cls");                 // This will clear the screen
        if (sq == 's')                 // Rest are the operations
        {
            fflush(stdin);          
            printf("There will be 20 question to answer\n");
            printf("Are you ready\n");
            printf("Press 'y' for yes and 'n' for no\n");
            scanf("%c", &yes_or_no);
            if (yes_or_no == 'y')
            {
                fflush(stdin);
                quiz_questions();
            }
            else
            {
                printf("OK\n");
                system("cls");
            }
        }

        else if (sq == 'h')
        {
            fflush(stdin);
            printf("\t\t***\tHELP SECTION\t ***\t\t\n");
            printf("1.To play the game read the instructin on the start page\n");
            printf("and press the characters as given on the screen with the help of keyboard\n\n");
            printf("2.To give the answers press a,b,c or d as per question\n\n");
            printf("3.Enter the input as per instruction given\n\n");
            printf("4.Please enjoy the game\n\n");
            printf("\t\t***\tpress b to back\t ***\t\t\n");
            scanf("%c", &b);
            system("cls");
        }

        else if (sq == 'v')
        {
            fflush(stdin);         // We operation for showing leaderboard
            ptr = fopen("score.txt", "r");  // This fill store all scores
            score = fgetc(ptr);
            while (score != EOF)     // This reads the character of that file
            {
                printf("%c", score);
                score = fgetc(ptr);
            }
            printf("\n\t\t***\tpress b to back\t ***\t\t\n");
            scanf("%c", &b);
            fclose(ptr);
            system("cls");
        }

        else
        {
            fflush(stdin);
            printf("Quitting\n");
            printf("THANK YOU FOR PLAYING!\n");
            break;
        }
    }

    return 0;
}