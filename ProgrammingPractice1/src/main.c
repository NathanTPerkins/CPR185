

/*
 * Nathan Perkins
 * nperk03@iastate.edu
 * CPRE 185 Section 7
 * Programming Practice 1
         <Reflection 1 What were you trying to learn or achieve?>
                Answer here (A few sentences is sufficient.)
        <Reflection 2 Were you successful? Why or Why not?>
        Answer here (a few sentences is sufficient.)
<Reflection 3 Would you do anything differently if starting this program over?  If so, explain what.>
        Answer here (a few sentences is sufficient.)
<Reflection 4 Think about the most important thing you learned when writing this piece of code.  What was it and explain why it was significant.>
        Answer here (a few sentences is sufficient.)
<Other questions/comments for Instructors>
        Answer here (optional)
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Obtained the macro information from -> https://iq.opengenus.org/detect-operating-system-in-c/
//Unistd documentation -> https://pubs.opengroup.org/onlinepubs/7908799/xsh/unistd.h.html
#if _WIN32
int clear_screen(){return system("cls");}
#else
int clear_screen(){return system("clear");}

#endif

/*
 * Color Codes -> https://www.theurbanpenguin.com/4184-2/
 * More Color Codes -> https://gist.github.com/RabaDabaDoba/145049536f815903c79944599c6f952a
 */

void set_black(){printf("\033[0;30m");}
void set_red(){printf("\033[0;31m");}
void set_green(){printf("\033[0;32m");}
void set_yellow(){printf("\033[0;33m");}
void set_blue(){printf("\033[0;34m");}
void set_purple(){printf("\033[0;35m");}
void set_cyan(){printf("\033[0;36m");}
void set_white(){printf("\033[0;37m");}
void reset_color(){printf("\033[0m");}

void title_blue(){printf("\033[0;93;1m");}

void title_text(){
    clear_screen();
    printf("\n");
    title_blue();
    printf("BASIC DATABASE\n\n");
    reset_color();
}

void options_text(){
    reset_color();
    set_green();
    printf("\t[1] : Create New Entry\n");
    printf("\t[2] : Read Entry\n");
    printf("\t[3] : Exit\n");
    printf("\n");
    reset_color();
}

void create_new_entry(char * entry, char * title){
    FILE * db = fopen("db.data", "a");
    fprintf(db, "--------------------------------------------------------------------\n[Title]: %s\n[Entry]: %s\n--------------------------------------------------------------------\n", title, entry);
    fclose(db);
}

void read_entries(){
    FILE* db = fopen("db.data", "r");
    if(!db){ reset_color();set_red();printf("\nNo Entries!\n\n");exit(1);}
    char c;
    while((c = fgetc(db)) != EOF){
        printf("%c", c);
    }

    fclose(db);
}

void new_entry_text(){
    fflush(stdin);
    char title[256];
    char entry[512];
    printf("[Title]::> ");
    fgets(title, 256, stdin);
    title[strlen(title) - 1] = '\0';
    printf("[Entry]::> ");
    fgets(entry, 512, stdin);
    entry[strlen(entry) - 1] = '\0';

    create_new_entry(entry, title);
}



int main () {
    int option = -1;
    //Title
    title_text();

    while(option != 3){
        printf("\n");
        options_text();
        reset_color();
        set_cyan();
        printf("Enter Option::> ");
        scanf("%d", &option);
        switch(option){
            case 1:
                new_entry_text();
                break;
            case 2:
                read_entries();
                break;
            case 3:
                printf("Exiting...\n");
                break;
            default:
                reset_color();set_red();printf("Warning Invalid Entry!\n");reset_color();break;
        }
    }


    return 0;
}