/***********************************************
 * File: Application.c
 * Purpose: Main entry point for the program
 ***********************************************/
#include <stdio.h>
#include "Mainloop.h"

int main(void) {
    printf("=== Application Started ===\n");
    mainLoop();
    printf("=== Application Closed ===\n");
    return 0;
}
