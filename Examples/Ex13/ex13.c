#include <stdio.h>

/*
 * For-Loops and Arrays of Strings Example
 */
int main(int argc, char *argv[])
{
    int i = 0;
    // go through each string in argv
    // why am I skipping argv[0]?
    // argv[0] is the name of the program
    for (i = 1; i < argc; i++) {
        printf("arg %d: %s\n", i, argv[i]);
    }

    // let's make our own array of strings
    char *states[] = {
        "California", "Oregon",
        "Kentucky", "Texas"
    };

    int num_states = 4;

    for (i = 0; i < num_states; i++) {
        printf("state %d: %s\n", i, states[i]);
    }

    return 0;
}