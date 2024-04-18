/**
 * @file main.c
 * @author Panda Onele (pandaonele0@gmail.com)
 * 
 * main - Driver function for the entire program 
 * 
 * @date 2024-04-15
 */

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include <sys/time.h>
#include "main.h"

char maze;
char name[15];
char choice;
char mode;
char button;

void main()
{   
    game_start();
    system("cls");
    system("color 07");
    printf("\n ===================================\n");
    printf(" WELCOME!\n");
    printf(" Enter Adventurer's name: ");
    scanf("%s", &name);
    
    START: //Reference Point
    Sleep(500);
    system("color 07");
    printf("\n\nWelcome Doctor %s, to Recte-Sapere-Fons Travels and Tours\n", name);
    Sleep(500);
    printf("\nSelect an option:\n");
    printf("1: Story Mode\n");
    printf("2: Quick Play\n\t\t==> ");
    scanf("%s", &mode);
    
    switch (mode)
    {
    case '1': //Story Mode
    {
        system("cls");
        printf("\n\n--------------------------------------------------------------------------------");
        printf("\n\n       Good Day Doctor %s, I am Adventurer Bby-onnza and I", name);
        printf("\n   will be in charge of this expedition. Think of me as a tour guide.");
        printf("\n   My job is to make sure this world tour is one you'd never forget.");
        printf("\n       Our adventure will take us through several prominent locations");
        printf("\n   across four continents - Asia, Africa, South America and Europe.");
        printf("\n       Bear in mind though, that some of these places could be dangerous,");
        printf("\n   especially for a curious mind such as yourself, but as long as we all");
        printf("\n   follow instructions and protocol, we'll be fine.");
        printf("\n\n   With that said, shall we begin our journey?\n");
        printf("\n\n--------------------------------------------------------------------------------");

        printf("\n\n\nEnter any button to proceed ");
        printf("\n\nEnter X to return to Mode Select Menu\n\t\t==> ");
        scanf("%s", &button);

        if (button != 'X')
        {
            nomlacu_story();
        }
        else
        {
            system("cls");
            goto START;
        }

        system("cls");
        printf("\n\n--------------------------------------------------------------------------------");
        printf("\n\n      I'm amazed Doc, you seem to have a nose for trouble. Like a magnet of");
        printf("\n  sorts. It's funny when you think about it actually. Well, that concludes our");
        printf("\n  world tour. It has been as thrilling and exhilarating as it's been educative.");
        printf("\n      We visited over 50 countries with over 300 landmarks, Museums, Stadiums,");
        printf("\n  Parks and Sport Centres, heard over a hundred languages, paid homage to");
        printf("\n  several dynasties and even interacted with the locals across four continents.");
        printf("\n  These past few months have been wonderful and it's been really great");
        printf("\n  getting to know you.");
        printf("\n  It has been a fulfilling trip. My name once again, is Bby-onnza");
        printf("\n  and you can reach out to me at pandaonele0@gmail.com for more amazing tours");
        printf("\n  like this one.");
        printf("\n  Have a safe flight home. Bye-Bye!");
        printf("\n\n--------------------------------------------------------------------------------");
        
        printf("\n\n\nEnter any button to proceed: ");
        scanf("%s", &button);

        if (button != 'X')
        {
            system("cls");
            goto START;
        }
        else
        {
            system("cls");
            goto START;
        }
    }

    case '2': //Quick Play
    {
        Quick_play: //Reference Point
        system("color 07");
        printf("\n\nSelect a location of choice:\n");
        printf("A: Nomlacu Nation\n");
        printf("B: Kwanikhwe Kingdom\n");
        printf("C: Egoli Republic\n");
        printf("D: kwamashu's Palace\n");
        printf("E: Random\n");
        printf("-------------------------------------\n");
        printf("X: Return to Mode Select\n\t==> ");
        scanf("%s", &maze);

        switch (maze)
        {
        case 'A': //nomlacu
        {
            nomlacu: //
            Sleep(500);
            system("cls");
            system("color 0A");
            
            nomlacu_pic();
            printf("===============================================================\n");
            printf("\nWelcome %s, to the Mighty Independent Nation of nomlacu.\n", name);
            printf("\n===============================================================\n");
            printf("\nA: Proceed (with Caution!)");
            printf("\nX: Get me out of here!\n\t==> ");
            nomlacu_proceed: //Reference point
            scanf("%s", &choice);

            switch (choice)
            {
            case 'A': //Proceed
                nomlacu();
                goto Quick_play;
                break;
            
            case 'X' : //Exit
                system("cls");
                goto Quick_play;
                break;

            default:
                printf("\n--------------------------------------\n");
                printf("\nERROR! Invalid Choice\n");
                printf("Press A to Proceed into the Palace\n");
                printf("Press X to Go Back\n\t==> ");
                goto nomlacu_proceed;
                break;
            }
        }        
        case 'B': //kwanikhwe
{
           kwanikhwe:
            Sleep(500);
            system("cls");
            system("color 0D");
            
            kwanikhwe_pic();
            printf("\n\n\n===============================================================\n");
            printf("\nWelcome %s, to the Kingdom of kwanikhwe.\n", name);
            printf("\n===============================================================\n");
            printf("\nA: Proceed (with Caution!)\n");
            printf("\nX: Get me out of here!\n\t==> ");
            kwanikhwe_proceed: //Reference point
            scanf("%s", &choice);

            switch (choice)
            {
            case 'A': //Proceed
                baluba();
                goto Quick_play;
                break;
            
            case 'X' : //Exit
                system("cls");
                goto Quick_play;
                break;

            default:
                printf("\n--------------------------------------\n");
                printf("\nERROR! Invalid Choice\n");
                printf("Press A to Proceed into the Palace\n");
                printf("Press X to Go Back\n\t==> ");
                goto kwanikhwe_proceed;
                break;
            }
        }        
        case 'C': //egoli
        {
            egoli:
            Sleep(500);
            system("cls");
            system("color 0E");
            
            egoli_pic();
            printf("\n==================================================================\n");
            printf("\nWelcome %s, to the Prestigious Brotherhood: egoli Republic\n", name);
            printf("\n==================================================================\n");
            printf("\nA: Proceed (with Caution!)\n");
            printf("\nX: Get me out of here!\n\t==> ");
            egoli_proceed: //Reference point
            scanf("%s", &choice);

            switch (choice)
            {
            case 'A': //Proceed
                egoli();
                goto Quick_play;
                break;
            
            case 'X' : //Exit
                system("cls");
                goto Quick_play;
                break;

            default:
                printf("\n--------------------------------------\n");
                printf("\nERROR! Invalid Choice\n");
                printf("Press A to Proceed into the Palace\n");
                printf("Press X to Go Back\n\t==> ");
                goto kalakuta_proceed;
                break;
            }
        }
        case 'D': // kwamashu
        {
            kwamashu:
            Sleep(500);
            system("cls");
            system("color 0B");

            kwamashu_pic();
            printf("\n===============================================================\n");
            printf("\nWelcome %s, to the Magnificent Castle of the Great kwamashu\n", name);
            printf("\n===============================================================\n");
            printf("\nA: Proceed (with Caution!)\n");
            printf("\nX: Get me out of here!\n\t==> ");
            kwamashu_proceed: //Reference point
            scanf("%s", &choice);

            switch (choice)
            {
            case 'A': //Proceed
                kwamashu();
                goto Quick_play;
                break;
            
            case 'X' : //Exit
                system("cls");
                goto Quick_play;
                break;

            default:
                printf("\n--------------------------------------\n");
                printf("\nERROR! Invalid Choice\n");
                printf("Press A to Proceed into the Palace\n");
                printf("Press X to Go Back\n\t==> ");
                goto kwamashu_proceed;
                break;
            }
        }

        case 'E':
            printf("\nSelecting Randomly...");
            Sleep(1000);
            srand(time(NULL));
            int n;
            n= rand() % 100;

            if (n >= 0 && n<25)
            {
                goto kwamashu;
            }
            else if (n >= 25 && n<50)
            {
                goto kwanikhwe;
            }
            else if (n >= 50 && n<75)
            {
                goto egoli;
            }
            else if (n >= 75 && n<100)
            {
                goto nomlacu;
            }
            else
            {
                kwanikhwe();
            }
            break;

        case 'X':
            system("cls");
            goto START;
            break;
        
        default: //Error
        {
            printf("\n------------------------------------------------------------------\n");
            printf("ERROR! Invalid Location\n");
            printf("Enter A to visit the Independent nation of Katanga in Asia\n");
            printf("Enter B to visit the Great Kingdom of Baluba in Africa\n");
            printf("Enter C to visit the Esteemed Kalakuta Republic in South America\n");
            printf("Enter D to visit The Mighty Mallam's Palace in Europe\n\n");
            Sleep(750);
            goto Quick_play;
            break;
        }
        
        }
    break;
    }

    default: //Not Quick Play or Story Mode
    {
        printf("\nYou have to choose either Quick Play(1) or Story Mode(2)\n");
        goto START;
        break;
    }
    }

    return;
}
