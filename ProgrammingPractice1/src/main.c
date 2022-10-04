

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
#include "../incl/colors.h"
#include "../incl/comp_system.h"

void title_text(){
    clear_screen();
    printf("\n");
    title_blue();
    printf("BASIC TERMINAL\n\n");
    reset_color();
}

void inline_text(){
    printf("Enter Command::> ");
}



int main () {
    //Title
    title_text();
    char hostname[100];
    getcwd(hostname, 100);
    printf("%s\n", hostname);

    return 0;
}