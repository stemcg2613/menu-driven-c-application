/***********************************************
 * File: Menu.h
 * Purpose: Displays program menu options (C)
 ***********************************************/
#ifndef MENU_H
#define MENU_H

const char* showMenu(void) {
    return  "\n=== MAIN MENU ===\n"
            "1. Write File\n"
            "2. Read File\n"
            "3. Calculation One\n"
            "4. Calculation Two\n"
            "Q. Quit\n"
            "Enter your choice: ";
}

#endif
