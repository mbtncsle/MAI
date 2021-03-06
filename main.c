// main.c for MAI (MIPS Assembly Interpreter)

#include <stdio.h>
#include <stdlib.h>
#include "mips_memory.h"
#include "mips_interpreter.h"

int main(int argc, char** argv) {
    // create the MIPS register space, and set all registers to zero
    mips_state registers = { 0 };
    // create space for the MIPS stack
    initialize_stack(&registers);
    
    if (argc == 1) // no parameters. run in live interpreter mode.
    {
        printf("Welcome to MAI (MIPS Assembly Interpreter).\n");
        printf("Enter commands to execute and press enter to execute. For help, execute 'help'.\n");
        while (1)
        {
            printf(">> ");
            char inputLine[56];
            char* p;
            
            // read next input line
            p = fgets(inputLine, sizeof(inputLine), stdin);
            run_from_string(&registers, inputLine);
        }
    }
    
    return (EXIT_SUCCESS);
}

