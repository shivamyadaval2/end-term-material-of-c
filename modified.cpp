#include <stdio.h>
#include <string.h>

int main() {
    char name[10];
    int correctAns = 0;

    printf("enter your name: ");
    scanf("%s", name);

    printf("\nHello %s, your quiz is now starting at GLA.\n", name);

    printf("Ques1: Who is the best professor of c programming in GLA?\n");
    printf("a) Gurupreet Mam\nb) Any other\nc) None\n");
    char ans1;
    scanf(" %c", &ans1);
    if (ans1 == 'a') {
        correctAns++;
    }

    printf("Que2: What is the capital of Uttar Pradesh?\n");
    printf("a) Agra\nb) Noida\nc) Lucknow\nd) Jhansi\n");
    char ans2;
    scanf(" %c", &ans2);
    if (ans2 == 'c') {
        correctAns++;
    }

    printf("Ques3: How many districts are in Uttar Pradesh?\n");
    printf("a) 75\nb) 76\nc) 74\nd) 72\n");
    char ans3;
    scanf(" %c", &ans3);
    if (ans3 == 'a') {
        correctAns++;
    }

    printf("Que4: What is the square of 9?\n");
    printf("a) 72\nb) 81\nc) 64\nd) 100\n");
    char ans4;
    scanf(" %c", &ans4);
    if (ans4 == 'b') {
        correctAns++;
    }

    printf("Que5: Who is the president of India?\n");
    printf("a) Narendra Modi\nb) Droupadi Murmu\nc) Pranab Mukherjee\nd) Manmohan Singh\n");
    char ans5;
    scanf(" %c", &ans5);
    if (ans5 == 'b') {
        correctAns++;
    }

    // Print results
    printf("\n%s, you got %d out of 5 questions correct!\n", name, correctAns);

    return 0;
}

