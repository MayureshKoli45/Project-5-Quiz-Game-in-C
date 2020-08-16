#include<stdio.h>
#include<string.h>

// Function declaration and their use
// Function for cricket questions
void cricket(){
    char ans1,ans2,ans3,ans4,ans5;
    int score = 0;
    printf("Q.1:- Which cricketer had scored highest individual score in first-class cricket?\n");
    printf("a. Don Bradman \t b. Brian Lara \t c. Lane Hutton \t d. Gary Sobers \n");
    fflush(stdin);
    scanf("%c",&ans1);
    if (ans1 == 'b')
    {
        printf("CORRECT Answer!\n\n");
        score = score + 1;
    }
    else
    {
        printf("WRONG Answer!\n\n");
        score = score;
    }
/////////////////////////////////////////////////////////////////////////////////////////////    
    printf("Q.2:- Which cricketer had scored highest individual score in ODI cricket?\n");
    printf("a. Virender Sehwag \t b. Chris Gayle \t c. Martin Guptill \t d. Rohit Sharma \n");
    fflush(stdin);
    scanf("%c",&ans2);
    if (ans2 == 'd')
    {
        printf("CORRECT Answer!\n\n");
        score = score + 1;
    }
    else
    {
        printf("WRONG Answer!\n\n");
        score = score;
    }
/////////////////////////////////////////////////////////////////////////////////////////////     
    printf("Q.3:- Which cricketer had scored fastest century in ODI cricket?\n");
    printf("a. Vivian Richards \t b. Corey Anderson \t c. Shahid Afridi \t d. AB de Villiers \n");
    fflush(stdin);
    scanf("%c",&ans3);
    if (ans3 == 'd')
    {
        printf("CORRECT Answer!\n\n");
        score = score + 1;
    }
    else
    {
        printf("WRONG Answer!\n\n");
        score = score;
    }
///////////////////////////////////////////////////////////////////////////////////////////// 
    printf("Q.4:- Which cricketer has taken most catches in ODI cricket?\n");
    printf("a. Ricky Ponting \t b. Mahela Jayawardene \t c. Jacques Kallis \t d. Mark Waugh \n");
    fflush(stdin);
    scanf("%c",&ans4);
    if (ans4 == 'b')
    {
        printf("CORRECT Answer!\n\n");
        score = score + 1;
    }
    else
    {
        printf("WRONG Answer!\n\n");
        score = score;
    }
///////////////////////////////////////////////////////////////////////////////////////////// 
    printf("Q.5:- Which cricketer had scored fastest century in Test cricket??\n");
    printf("a. Vivian Richards \t b. Brendon McCullum \t c. Misbah-ul-Haq \t d. Adam Gilchrist \n");
    fflush(stdin);
    scanf("%c",&ans5);
    if (ans5 == 'b')
    {
        printf("CORRECT Answer!\n\n");
        score = score + 1;
    }
    else
    {
        printf("WRONG Answer!\n\n");
        score = score;
    }
///////////////////////////////////////////////////////////////////////////////////////////// 
    printf("You scored %d out of 5 question\n\n",score);
}

// function for football questions
void football(){
    char ans1,ans2,ans3,ans4,ans5;
    int score = 0;
    printf("Q.1:- Which is a stadium of manchester city?\n");
    printf("a. Etihad Stadium \t b. Santiago Bernabeu \t c. Orange Velodrome \t d. Camp Nou \n");
    fflush(stdin);
    scanf("%c",&ans1);
    if (ans1 == 'a')
    {
        printf("CORRECT Answer!\n\n");
        score = score + 1;
    }
    else
    {
        printf("WRONG Answer!\n\n");
        score = score;
    }
/////////////////////////////////////////////////////////////////////////////////////////////    
    fflush(stdin);
    printf("Q.2:- Which player scored the fastest hat-trick in the Premier League?\n");
    printf("a. Sergio Aguero \t b. Sadio Mane \t c. Thierry Henry \t d. Didier Drogba\n");
    scanf("%c",&ans2);
    if (ans2 == 'b')
    {
        printf("CORRECT Answer!\n\n");
        score = score + 1;
    }
    else
    {
        printf("WRONG Answer!\n\n");
        score = score;
    }
//////////////////////////////////////////////////////////////////////////////////////////////    
    fflush(stdin);
    printf("Q.3:- With 260 goals, who is the Premier League's all-time top scorer?\n");
    printf("a. Wayne Rooney \t b. Frank Lampard \t c. Andy Cole \t d. Alan Shearer\n");
    scanf("%c",&ans3);
    if (ans3 == 'd')
    {
        printf("CORRECT Answer!\n\n");
        score = score + 1;
    }
    else
    {
        printf("WRONG Answer!\n\n");
        score = score;
    }
///////////////////////////////////////////////////////////////////////////////////////////////
    fflush(stdin);
    printf("Q.4:- The fastest goal scored in Premier League history came in 7.69 seconds. Who scored it?\n");
    printf("a. Sadio Mane \t b. Jermain Defoe \t c. Shane Long \t d. Van Persie\n");
    scanf("%c",&ans4);
    if (ans4 == 'c')
    {
        printf("CORRECT Answer!\n\n");
        score = score + 1;
    }
    else
    {
        printf("WRONG Answer!\n\n");
        score = score;
    }
///////////////////////////////////////////////////////////////////////////////////////////////    
    fflush(stdin);
    printf("Q.5:- Who was the Chelsea manager when they won the league in 2016/17?\n");
    printf("a. Jose Mourinho \t b. Antonio Conte \t c. Maurizio Sarri \t d. Guss Hiddink\n");
    scanf("%c",&ans5);
    if (ans5 == 'b')
    {
        printf("CORRECT Answer!\n\n");
        score = score + 1;
    }
    else
    {
        printf("WRONG Answer!\n\n");
        score = score;
    }    
    printf("You scored %d out of 5 question\n\n",score);
}
///////////////////////////////////////////////////////////////////////////////////////////////

// Main program execution starts here
int main(){
    char sq,fs;
    // Some print stements aree used for information an for design purpose
    printf("\t\t******\tWELCOME TO THE\t*****\t\t\n");
    printf("\t\t ***\t  QUIZ GAME\t ***\t\t\n");
    printf("---------------------------------------------------------\t\t\n");
    printf("|\t\tPress 's' to start the game\t\t|\n");
    printf("|\t\tPress 'q' to start the game\t\t|\n");
    printf("---------------------------------------------------------\t\t\n");
    scanf("%c",&sq);
    if (sq == 's')
    {
        fflush(stdin);  
        printf("\t\t***\tSELECT A FIELD\t ***\t\t\n");
        printf("---------------------------------------------------------\t\t\n");
        printf("|\t\t Press 'f' for football\t\t\t|\n");
        printf("|\t\t Press 'c' for cricket\t\t\t|\n");
        printf("---------------------------------------------------------\t\t\n");
        scanf("%c",&fs);
        if (fs == 'f')
        {
            printf("\t\t***FOOTBALL QUIZ***\t\t\n");
            football();
        }
        else if (fs == 'c')
        {
            printf("\t\t***CRICKET QUIZ***\t\t\n");
            cricket();
        }
        else
        {
            printf("WRONG INPUT! Quitting\n");
        }
         
    }
    else
    {
        printf("Quitting\n");
    }
    
    printf("THANK YOU FOR PLAYING!\n");
    return 0;
}