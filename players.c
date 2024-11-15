#include <stdio.h>
#include <string.h>

#define num_teams 10
#define SQUAD_SIZE 15

typedef struct{
    int day;
    int month;
    int year;
}

typedef struct{
    char name[25]
    int pnumber;
    char club[20];
    char position[20]; 
}

typedef struct{
    char name[20];
    int num_players;
}


void display_menu();
void enroll_club();
void add_player();
void search_update();
void display_club_stats();
void handle_error();

int main(){
    int selection;

    while 1 {
        display_menu();
        printf("Choose one of the available options: ")
        scanf("%d",selection);
        
        switch(selection){
            case 1:
                enroll_club();
            case 2:
                add_player();
            case 3:
                search_update();
            case 4:
                display_club_stats();
            case 5:
                printf("Exiting...");
            return 0
            
            default:
                handle_error("Invalid choice. Choose again.")
            break;
        }   


    }
    return 0;
}
