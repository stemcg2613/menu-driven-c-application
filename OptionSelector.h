/***********************************************
 * File: OptionSelector.h
 * Purpose: Maps user choice to module behavior
 ***********************************************/
#ifndef OPTION_SELECTOR_H
#define OPTION_SELECTOR_H

#include <ctype.h>

const char* optionSelector(char c) {
    c = toupper((unsigned char)c);

    switch (c) {
        case '1': return "Write File Selected.";
        case '2': return "Read File Selected.";
        case '3': return "Calculation One Selected.";
        case '4': return "Calculation Two Selected.";
        case 'Q': return "Exiting program...";
        default:  return "Invalid selection.";
    }
}

#endif
