// Author: Kuldeep Singh

#include <stdio.h>
#include <string.h>

//Global variables
int Guess;
int Total;
int Life1;
int Life2;

// Question Struct
struct General 
{
    char Question_Text[200];
    char Answer_1[50];
    char Answer_2[50];
    char Answer_3[50];
    char Answer_4[50];
    char Answer_5[50];
    int Correct_Answer;
    int Question_Score;
    int show1;
    int show2;
    char Hint[200];
};

// Question Struct
struct History 
{
    char Question_Text[200];
    char Answer_1[50];
    char Answer_2[50];
    char Answer_3[50];
    char Answer_4[50];
    char Answer_5[50];
    int Correct_Answer;
    int Question_Score;
    int show1;
    int show2;
    char Hint[200];
};

// Question Struct
struct Bollywood
{
    char Question_Text[200];
    char Answer_1[50];
    char Answer_2[50];
    char Answer_3[50];
    char Answer_4[50];
    char Answer_5[50];
    int Correct_Answer;
    int Question_Score;
    int show1;
    int show2;
    char Hint[200];
};

// Function to set the values of
// the questions

void setValues(struct General* q, char qt[], char a1[], char a2[], char a3[], char a4[], char a5[], int ca, int pa, int s1, int s2, char h[]) 
{
    strcpy(q->Question_Text, qt);
    strcpy(q->Answer_1, a1);
    strcpy(q->Answer_2, a2);
    strcpy(q->Answer_3, a3);
    strcpy(q->Answer_4, a4);
    strcpy(q->Answer_5, a5);
    q->Correct_Answer = ca;
    q->Question_Score = pa;
    q->show1=s1;
    q->show2=s2;
    strcpy(q->Hint, h);
}

void setValuess(struct History* q, char qt[], char a1[], char a2[], char a3[], char a4[], char a5[], int ca, int pa, int s1, int s2, char h[]) 
{
    strcpy(q->Question_Text, qt);
    strcpy(q->Answer_1, a1);
    strcpy(q->Answer_2, a2);
    strcpy(q->Answer_3, a3);
    strcpy(q->Answer_4, a4);
    strcpy(q->Answer_5, a5);
    q->Correct_Answer = ca;
    q->Question_Score = pa;
    q->show1=s1;
    q->show2=s2;
    strcpy(q->Hint, h);
}

void settValues(struct Bollywood* q, char qt[], char a1[], char a2[], char a3[], char a4[], char a5[], int ca, int pa, int s1, int s2, char h[]) 
{
    strcpy(q->Question_Text, qt);
    strcpy(q->Answer_1, a1);
    strcpy(q->Answer_2, a2);
    strcpy(q->Answer_3, a3);
    strcpy(q->Answer_4, a4);
    strcpy(q->Answer_5, a5);
    q->Correct_Answer = ca;
    q->Question_Score = pa;
    q->show1=s1;
    q->show2=s2;
    strcpy(q->Hint, h);
}

// Function to ask questions

void askQuestion(struct General *q) 
{
    printf("\n%s\n", q->Question_Text);
    printf("%s\n", q->Answer_1);
    printf("%s\n", q->Answer_2);
    printf("%s\n", q->Answer_3);
    printf("%s\n", q->Answer_4);
    printf("%s\n\n", q->Answer_5);
    //Storing User's Answer
    printf("What is your answer?(in number)\n");
    while (1) {
    if ( scanf("%d", &Guess)!=1 || Guess>5 || Guess<1) {
        printf("Error: Invalid input. Please enter your answer.\n");
        while (getchar() != '\n') {}
        continue;
    }
    break;
    }
    
    int choice,c;
    while(Guess==5){
        if(Life1==2 && Life2==2)
        {
         printf("NO MORE LIFELINES REMAINING!\n"); 
         printf("What is your answer(in number)?\n");
         while(1){
            if(scanf("%d",&c)!=1 || c==5){
             printf("NO MORE LIFELINES REMAINING!\n"); 
             printf("What is your answer(in number)?\n");
             while (getchar() != '\n') {}
              continue;
            }
        Guess=c;
         break;
        }
        break;}
        printf("\nWhich LIFELINE do you want to use?\n");
        printf("1. EXPERT ADVICE\n");
        printf("2. 50-50\n\n");
        printf("Enter your choice(in number): ");
        scanf("%d",&choice);

        basic:
        
        if(choice==1 && Life1<2)
        { 
         printf("EXPERT ADVICE IS NOW ACTIVATED AND THIS IS YOUR HINT.\n");
         printf("%s",q->Hint);
         printf("\n");
         Life1=Life1+1;
        }
        else if(choice==1)
        
            printf("EXPERT ADVICE IS EXHAUSTED! ");
        else if(choice==2 && Life2<2)
        {
            printf("\n50-50 IS ACTIVATED AND THE TWO OPTIONS REMAINING ARE-\n");
            if(q->show1==1 || q->show2==1)
             printf("%s\n", q->Answer_1);
            if(q->show1==2 || q->show2==2)
             printf("%s\n", q->Answer_2);
            if(q->show1==3 || q->show2==3)
             printf("%s\n", q->Answer_3);
            if(q->show1==4 || q->show2==4)
             printf("%s\n", q->Answer_4);
            Life2=Life2+1;
        }
        else if(choice==2)
         printf("50-50 IS EXHAUSTED!\n");
    printf("What is your answer?(in number)\n");
    while (1) {
    if ( scanf("%d", &c)!=1 || c>5 || c<1) {
        printf("Error: Invalid input. Please enter your answer.\n");
        while (getchar() != '\n') {}
        continue;
    }
    break;
    }
    Guess=c;
    }
   
    if (Guess == q->Correct_Answer ) 
    {
        printf("\nCorrect !\n");
        Total = Total + q->Question_Score;
        printf("Score = %d out of %d\n", q->Question_Score, q->Question_Score);
    } 
    else 
    {
        printf("\nWrong Answer !\n");
        printf("The Correct Answer was:%d\n",q->Correct_Answer);
        printf("Score = 0 out of %d\n", q->Question_Score);
    }
}

// Function to ask questions

void askQuestionn(struct History *q) 
{
    printf("\n%s\n", q->Question_Text);
    printf("%s\n", q->Answer_1);
    printf("%s\n", q->Answer_2);
    printf("%s\n", q->Answer_3);
    printf("%s\n", q->Answer_4);
    printf("%s\n\n", q->Answer_5);
    //Storing User's Answer
    printf("What is your answer?(in number)\n");
    while (1) {
    if ( scanf("%d", &Guess)!=1 || Guess>5 || Guess<1) {
        printf("Error: Invalid input. Please enter your answer.\n");
        while (getchar() != '\n') {}
        continue;
    }
    break;
    }
    
    int choice,c;
    while(Guess==5){
        if(Life1==2 && Life2==2)
        {
         printf("NO MORE LIFELINES REMAINING!\n"); 
         printf("What is your answer(in number)?\n");
         while(1){
            if(scanf("%d",&c)!=1 || c==5){
             printf("NO MORE LIFELINES REMAINING!\n"); 
             printf("What is your answer(in number)?\n");
             while (getchar() != '\n') {}
              continue;
            }
        Guess=c;
         break;
        }
        break;}
        printf("\nWhich LIFELINE do you want to use?\n");
        printf("1. EXPERT ADVICE\n");
        printf("2. 50-50\n\n");
        printf("Enter your choice(in number): ");
        scanf("%d",&choice);

        basic:
        
        if(choice==1 && Life1<2)
        {
         printf("EXPERT ADVICE IS NOW ACTIVATED AND THIS IS YOUR HINT.\n");
         printf("%s",q->Hint);
         printf("\n");
         Life1=Life1+1;
        }
        else if(choice==1)
        
            printf("EXPERT ADVICE IS EXHAUSTED! ");
        else if(choice==2 && Life2<2)
        {
            printf("\n50-50 IS ACTIVATED AND THE TWO OPTIONS REMAINING ARE-\n");
            if(q->show1==1 || q->show2==1)
             printf("%s\n", q->Answer_1);
            if(q->show1==2 || q->show2==2)
             printf("%s\n", q->Answer_2);
            if(q->show1==3 || q->show2==3)
             printf("%s\n", q->Answer_3);
            if(q->show1==4 || q->show2==4)
             printf("%s\n", q->Answer_4);
            Life2=Life2+1;
        }
        else if(choice==2)
         printf("50-50 IS EXHAUSTED!\n");
    printf("What is your answer?(in number)\n");
    while (1) {
    if ( scanf("%d", &c)!=1 || c>5 || c<1) {
        printf("Error: Invalid input. Please enter your answer.\n");
        while (getchar() != '\n') {}
        continue;
    }
    break;
    }
    Guess=c;
    }
   
    if (Guess == q->Correct_Answer ) 
    {
        printf("\nCorrect !\n");
        Total = Total + q->Question_Score;
        printf("Score = %d out of %d\n", q->Question_Score, q->Question_Score);
    } 
    else 
    {
        printf("\nWrong Answer !\n");
        printf("The Correct Answer was:%d\n",q->Correct_Answer);
        printf("Score = 0 out of %d\n", q->Question_Score);
    }
}

void askkQuestion(struct Bollywood *q) 
{
    printf("\n%s\n", q->Question_Text);
    printf("%s\n", q->Answer_1);
    printf("%s\n", q->Answer_2);
    printf("%s\n", q->Answer_3);
    printf("%s\n", q->Answer_4);
    printf("%s\n\n", q->Answer_5);
    //Storing User's Answer
    printf("What is your answer?(in number)\n");
    while (1) {
    if ( scanf("%d", &Guess)!=1 || Guess>5 || Guess<1) {
        printf("Error: Invalid input. Please enter your answer.\n");
        while (getchar() != '\n') {}
        continue;
    }
    break;
    }
    
    int choice,c;
    while(Guess==5){
        if(Life1==2 && Life2==2)
        {
         printf("NO MORE LIFELINES REMAINING!\n"); 
         printf("What is your answer(in number)?\n");
         while(1){
            if(scanf("%d",&c)!=1 || c==5){
             printf("NO MORE LIFELINES REMAINING!\n"); 
            
             printf("What is your answer(in number)?\n");
             while (getchar() != '\n') {}
              continue;
            }
        Guess=c;
         break;
        }
        break;}
        printf("\nWhich LIFELINE do you want to use?\n");
        printf("1. EXPERT ADVICE\n");
        printf("2. 50-50\n\n");
        printf("Enter your choice(in number): ");
        scanf("%d",&choice);

        basic:
        
        if(choice==1 && Life1<2)
        {
         printf("EXPERT ADVICE IS NOW ACTIVATED AND THIS IS YOUR HINT.\n");
         printf("%s",q->Hint);
         printf("\n");
         Life1=Life1+1;
        }
        else if(choice==1)
        
            printf("EXPERT ADVICE IS EXHAUSTED! ");
        else if(choice==2 && Life2<2)
        {
            printf("\n50-50 IS ACTIVATED AND THE TWO OPTIONS REMAINING ARE-\n");
            if(q->show1==1 || q->show2==1)
             printf("%s\n", q->Answer_1);
            if(q->show1==2 || q->show2==2)
             printf("%s\n", q->Answer_2);
            if(q->show1==3 || q->show2==3)
             printf("%s\n", q->Answer_3);
            if(q->show1==4 || q->show2==4)
             printf("%s\n", q->Answer_4);
            Life2=Life2+1;
        }
        else if(choice==2)
         printf("50-50 IS EXHAUSTED!\n");
    printf("What is your answer?(in number)\n");
    while (1) {
    if ( scanf("%d", &c)!=1 || c>5 || c<1) {
        printf("Error: Invalid input. Please enter your answer.\n");
        while (getchar() != '\n') {}
        continue;
    }
    break;
    }
    Guess=c;
    }

   
    if (Guess == q->Correct_Answer ) 
    {
        printf("\nCorrect !\n");
        Total = Total + q->Question_Score;
        printf("Score = %d out of %d\n", q->Question_Score, q->Question_Score);
    } 
    else 
    {
        printf("\nWrong Answer !\n");
        printf("The Correct Answer was:%d\n",q->Correct_Answer);
        printf("Score = 0 out of %d\n", q->Question_Score);
    }
}
// Driver code

int main() 
{
    printf("\n\n\t\t\t\tTHE DAILY QUIZ\n\n");
    printf("RULES OF THE QUIZ-\n");
    printf("1. There are 10 Questions to answer.\n");
    printf("2. Each Question has 4 options out of which only 1 is right.\n");
    printf("3. Each Question will be of 10 points.\n");
    printf("4. You need to score atleast 70 points out of 100 to pass the Quiz.\n");
    printf("5. To help you when you are stuck, we have TWO LIFELINES (EXPERT ADVICE AND 50-50).\n");
    printf("      -> EXPERT ADVICE: A Hint will be a given related to correct answer.\n");
    printf("      -> 50-50: In this option, two options will be removed and only two options remain out of which one is correct.\n\n");
    printf("PRESS ENTER TO START THE QUIZ.\n");

    getchar();

    char Name[50];
    int Age;
    //Input Personal Details
    printf("What is your name?\n");
    scanf("%[^\n]s", Name);

    printf("\nAre you ready to take the quiz %s? Yes/No \n", Name);
    char Respond[50];
    scanf("%s", Respond);
    
    int n;
    if (strcmp(Respond, "Yes") == 0 || strcmp(Respond, "yes")==0 || strcmp(Respond, "y")==0 || strcmp(Respond, "Y")==0)
    {
        printf("\n");
        printf("What quiz do you want to play?\n");
        printf("ENTER 1 FOR BOLLYWOOD QUIZ\n");
        printf("ENTER 2 FOR HISTORY QUIZ\n");
        printf("ENTER 3 FOR GENERAL QUIZ\n");
        printf("What is your CHOICE?(in number)\n");
        while (1) {
    if ( scanf("%d", &n)!=1 || n>5 || n<1) {
        printf("Error: Invalid input. Please enter your answer.\n");
        while (getchar() != '\n') {}
        continue;
    }
    break;
    }
    } 
    else 
    {
        printf("\nOkay Good Bye!\n");
        return 0;
    }

    if(n==3)
    {
        printf("\nGood Luck!\n\n");
    // Objects of Question Struct

    struct General q1;
    struct General q2;
    struct General q3;
    struct General q4;
    struct General q5;
    struct General q6;
    struct General q7;
    struct General q8;
    struct General q9;
    struct General q10;

    //Adding Questions, Options, Correct Answers and Question Score

    setValues(&q1, "Question 1: Who is the first woman chief minister in India?", "1. Sushma Swaraj", "2. Sucheta Kriplani", "3. Smt. Nandini Satpathy", "4. Indira Gandhi","5. Lifeline", 2, 10, 2, 3, "Hint: She was the former Chief Minister of Uttar Pradesh.");

    setValues(&q2, "Question 2: Which artist recently crossed 100,000,000 monthly listeners on Spotify?", "1. Justin Beiber", "2. Taylor Swift ", "3. The Weeknd", "4. Ed Sheeran","5. Lifeline", 3, 10, 3, 4, "Hint: The artist has sung the hit single 'Blinding Lights'.");

    setValues(&q3, "Question 3: What company was originally called 'Cadabra'?", "1. Flipkart", "2. Amazon", "3. Microsoft", "4. Facebook","5. Lifeline", 2, 10, 1, 2,"Hint: The company is currently 5th biggest company in world founded by Jeff Bezos.");

    setValues(&q4, "Question 4: How many ghosts chase pac-man at the start of the game?", "1. 3", "2. 4", "3. 5", "4. 6","5. Lifeline", 2, 10, 2, 4,"Hint: The ghost gang (Blinky, Pinky,.....)");

    setValues(&q5, "Question 5: Which of the following is NOT an Unforgivable Curse in Harry Potter series?", "1. Wingardium Leviosa ", "2. Crucio", "3. Avada Kedavra", "4. Imperio","5. Lifeline", 1, 10, 1, 4,"Hint: The spell Hermione uses to levitate a feather in air.");

    setValues(&q6, "Question 6: Who will be the highest paid cricketer in IPL 2023?", "1. Cameroon Green", "2. Nicholas Pooran", "3. Ben Stokes", "4. Sam Curran","5. Lifeline", 4, 10, 3, 4,"Hint: The player is bought by Punjab Kings for a whopping amount of 18.50 crores.");

    setValues(&q7, "Question 7: Which country has won the most FIFA world cups?", "1. Germany", "2. Italy", "3. Brazil", "4. Argentina","5. Lifeline", 3, 10, 3, 4,"Hint: The country also is the home of largest river in the world.");

    setValues(&q8, "Question 8: How many countries are there in the United Kingdom?", "1. 2", "2. 3", "3. 4", "4. 5","5. Lifeline", 3, 10, 2, 3,"Hint: It's the number of ghosts chasing in pac-man.");

    setValues(&q9, "Question 9: What sports car company manufactures the 911?", "1. Mercedes", "2. Porsche", "3. BMW", "4. Ferrari","5. Lifeline", 2, 10, 2, 4,"Hint: This company originated in Germany and launched an electric car in 1900's.");

    setValues(&q10, "Question 10: The iconic dialogue 'Choti Bacchi Ho Kya' is from which movie?", "1. Baaghi", "2. War", "3. Student of the Year 2", "4. Heropanti","5. Lifeline", 4, 10, 1, 4,"Hint: This movie co-stars Kriti Sanon.");

    askQuestion(&q1);
	askQuestion(&q2);
	askQuestion(&q3);
	askQuestion(&q4);
	askQuestion(&q5);
	askQuestion(&q6);
	askQuestion(&q7);
	askQuestion(&q8);
	askQuestion(&q9);
	askQuestion(&q10);
    }
    else if(n==2)
 {
    printf("\nGood Luck!\n\n");
    struct History q1;
    struct History q2;
    struct History q3;
    struct History q4;
    struct History q5;
    struct History q6;
    struct History q7;
    struct History q8;
    struct History q9;
    struct History q10;

    //Adding Questions, Options, Correct Answers and Question Score

    setValuess(&q1, "Question 1: The Battle of Plassey was fought in?", "1. 1757", "2. 1782", "3. 1748", "4. 1764","5. Lifeline", 1, 10, 1, 3, "Hint: It was fought between East India Company led by Robert Clive and Nawab of Bengal");

    setValuess(&q2, "Question 2: Which was the largest empire in India?", "1. Mughal Empire", "2. Mauryan Empire", "3. Maratha Empire", "4. Kushan Empire","5. Lifeline", 2, 10, 2, 4, "Hint: The biggest empire existed around 250 B.C.");

    setValuess(&q3, "Question 3: Who gave the title 'Father of the Nation' to Gandhiji?", "1. Bhagat Singh", "2. SC Bose", "3. Jawaharlal Nehru", "4. Lal Bahadur Shastri","5. Lifeline", 2, 10, 2, 3,"Hint: He was also known as 'Netaji'.");

    setValuess(&q4, "Question 4: The first Mughal Emperor to rule India was?", "1. Akbar", "2. Shah Jahan", "3. Babur", "4. Jahangir","5. Lifeline", 3, 10, 1, 3,"Hint: His son was 'Humayun'.");

    setValuess(&q5, "Question 5: Who wrote the National Anthem of India?", "1. Swami Vivekananda ", "2. Bankim Chandra Chatterjee", "3. Rabindranath Tagore", "4. Debendranath Tagore","5. Lifeline", 3, 10, 3, 4,"Hint: He was a famous Bengali poet who was also awarded with Noble Prize.");

    setValuess(&q6, "Question 6: Who killed Mahatama Gandhi?", "1. Nathuram Godse", "2. Narayan Apte", "3. Vinayak Godse ", "4. Gopal Godse","5. Lifeline", 1, 10, 1, 4,"Hint: He was the right wing extremist of Hindu Mahasabha.");

    setValuess(&q7, "Question 7: Who coined this slogan 'Tum Hume Khoon Do, Mai Tumhe Azaadi Dunga'?", "1. SC Bose", "2. Bhagat Singh", "3. Mahatama Gandhi", "4. Dr. Rajendra Prasad","5. Lifeline", 1, 10, 1, 3,"Hint: He found 'Azad Hind Fauj'.");

    setValuess(&q8, "Question 8: Where did Jallianwallah Bagh Massacre happen?", "1. Sonipat", "2. Karnal", "3. Amritsar", "4. Chandigarh","5. Lifeline", 3, 10, 2, 3,"Hint: It is the Golden City of India");

    setValuess(&q9, "Question 9: Who drafted the Constitution of India?", "1. Dr. Rajendra Prasad ", "2. Dr.BR Ambedkar", "3. Jawaharlal Nehru", "4. Indira Gandhi","5. Lifeline", 2, 10, 1, 2,"Hint: He was a scholar and fought for the rights of dalits.");

    setValuess(&q10, "Question 10: Who is the 'Missile Man of India'?", "1. CV Raman", "2. Satendranath Bose", "3. Srinivasa Ramanujan", "4. Dr. APJ Abdul Kalam","5. Lifeline", 4, 10, 1, 4,"Hint: He was the 11th president of India.");

    askQuestionn(&q1);
	askQuestionn(&q2);
	askQuestionn(&q3);
	askQuestionn(&q4);
	askQuestionn(&q5);
	askQuestionn(&q6);
	askQuestionn(&q7);
	askQuestionn(&q8);
	askQuestionn(&q9);
	askQuestionn(&q10);
 }

 else if(n==1)
 {
    printf("\nGood Luck!\n\n");
    struct Bollywood q1;
    struct Bollywood q2;
    struct Bollywood q3;
    struct Bollywood q4;
    struct Bollywood q5;
    struct Bollywood q6;
    struct Bollywood q7;
    struct Bollywood q8;
    struct Bollywood q9;
    struct Bollywood q10;

    //Adding Questions, Options, Correct Answers and Question Score

    settValues(&q1, "Question 1: Which movie DOES NOT have both Salman and Shahrukh Khan?", "1. Karan Arjun", "2. Hum Tumhare Hai Sanam", "3. Kuch Kuch Hota Hai", "4. Mai Hoon Na","5. Lifeline", 4, 10, 2, 4, "Hint: The correct answer has songs 'Tumhe Jo Maine Dekha' , 'Tumse Milke Dil ka hai jo haal'. ");

    settValues(&q2, "Question 2: Which movie has the villian 'Gabbbar'?", "1. Tiger Zinda Hai", "2. War", "3. Sholay", "4. Border","5. Lifeline", 3, 10, 3, 4, "Hint: The movie also has characters of Basanti, Jai, Veeru.");

    settValues(&q3, "Question 3: Who directed Dil Chahta Hai?", "1. Zoya Akhtar", "2. Farhan Akhtar", "3. Aamir Khan ", "4. Reema Kagti","5. Lifeline", 2, 10, 1, 2,"Hint: The director has also directed movies like Don and Jee Le Zara.");

    settValues(&q4, "Question 4: Which cities does Rani visit when she goes on her 'solo' honeymoon in Queen?", "1. Paris and London", "2. Paris and Amsterdam", "3. London and New York", "4. Tokyo and Shanghai","5. Lifeline", 2, 10, 2, 4,"Hint: First city has monumental Eiffel Tower and the second is famous for bachelor's party.");

    settValues(&q5, "Question 5: In Om Shanti Om, what does Deepika Padukone's character Shantipriya do?", "1. Actress ", "2. Singer", "3. Journalist", "4. Lawyer","5. Lifeline", 1, 10, 1, 4,"Hint: Deepika pursues the same career in her real life.");

    settValues(&q6, "Question 6: In 3 Idiots, what is Rancho's real name?", "1. Phunsukh Wangdu", "2. Viru Sahastrabuddhe", "3. Chatur Ramalingam", "4. Ranchhoddas Shamaldas Chanchad","5. Lifeline", 4, 10, 3, 4,"Hint: Real Rancho revealed this after 10 years of graduating from college.");

    settValues(&q7, "Question 7: Which singer has sung the song 'Kesariya'?", "1. Mohit Chauhan", "2. Amit Trivedi", "3. Arijit Singh", "4. Jubin Nautiyal","5. Lifeline", 3, 10, 3, 4,"Hint: The singer has also sung other hits like 'Tum Hi Ho'.");

    settValues(&q8, "Question 8: Which movie has the dialogue 'Keh diya na. Bas, keh diya'?", "1. DDLJ", "2. Kuch Kuch Hota hai", "3. Kabhi Khushi Kabhi Gham", "4. Baghban","5. Lifeline", 3, 10, 2, 3,"Hint: The dialogue is said by Amitabh Bacchan.");

    settValues(&q9, "Question 9: Which movie has the dialogue 'Rahul... Take a Chill Pill'?", "1. Kal Ho Na Ho", "2. Kabhi Khushi Kabhi Gham", "3. Kuch Kuch Hota Hai", "4. Om Shanti Om","5. Lifeline", 2, 10, 2, 3,"Hint: This dialogue is from the movie having the character 'POOH'.");

    settValues(&q10, "Question 10: Which movie was the debut of Alia Bhatt?", "1. Raazi", "2. Gangubhai Kathiawadi", "3. Student of the Year", "4. 2 States","5. Lifeline", 3, 10, 3, 4,"Hint: This movie co-stars Varun Dhawan, Siddhart Malhotra and name of Alia Bhatt's character is Shanaya.");

    askkQuestion(&q1);
	askkQuestion(&q2);
	askkQuestion(&q3);
	askkQuestion(&q4);
	askkQuestion(&q5);
	askkQuestion(&q6);
	askkQuestion(&q7);
	askkQuestion(&q8);
	askkQuestion(&q9);
	askkQuestion(&q10);
 }
    
    //displaying final result

    printf("The Total Score is %d out of 100.\n",Total);
    if(Total>=70)
    {
     printf("YOU PASSED THE QUIZ GAME! CONGRATULATIONS %s:)\n",Name);
    }
    else
    {
     printf("YOU FAILED THE QUIZ! SORRY %s :(\n",Name);
    }
    return 0;
}
