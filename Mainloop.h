/***********************************************
 * File: Mainloop.h
 * Purpose: Contains the main program loop logic
 ***********************************************/
#ifndef MAINLOOP_H
#define MAINLOOP_H

#include <stdio.h>
#include <ctype.h>

#include "Menu.h"
#include "OptionSelector.h"
#include "writeFile.h"
#include "readFile.h"
#include "calculateOne.h"
#include "calculateTwo.h"

void mainLoop(void) {
    char choice;

    while (1) {
        printf("%s", showMenu());

        if (scanf(" %c", &choice) != 1) {
            // Input error; exit loop
            break;
        }

        printf("%s\n", optionSelector(choice));

        if (toupper((unsigned char)choice) == 'Q')
            break;

        if (choice == '1') printf("%s\n", writeFile());
        if (choice == '2') printf("%s\n", readFile());
        if (choice == '3') printf("%s\n", calculationOne());
        if (choice == '4') printf("%s\n", calculationTwo());

        printf("\n");
    }
}

#endif
