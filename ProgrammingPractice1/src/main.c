

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
void red () {
    printf("\033[1;31m");
}

void yellow (){
        printf("\033[1;33m");
}

void reset () {
    printf("\033[0m");
}

int main () {
    set_red();
    printf("Hello ");
    yellow();
    printf("world\n");
    reset();
    return 0;
}