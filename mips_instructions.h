#include "mips_memory.h"
#include "utils.h"

#pragma once

// function pointer to a mips instruction implementation
typedef void (*instruction_function)(mips_state*, char*);

// instruction implementations
void add(mips_state*, char*);
void addi(mips_state*, char*);
void and(mips_state*, char*);
void andi(mips_state*, char*);
void sub(mips_state*, char*);
void subi(mips_state*, char*);
void or(mips_state*, char*);
void ori(mips_state*, char*);
void xor(mips_state*, char*);
void sllv(mips_state*, char*);
void slrv(mips_state*, char*);


// pseudo-dictionary for going from char* -> function pointer
extern const char* INSTRUCTION_NAMES[];
extern const instruction_function INSTRUCTION_IMPLEMENTATION[];
extern const int INSTRUCTION_COUNT,NT;

