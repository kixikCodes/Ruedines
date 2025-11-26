/*                  ~~ Ruedines ~~
 * A light-weight learning library with useful aliases
 * and functions desgined to make first-time programmers
 * have an easier timer with C. Aims to get closer to
 * human language. Should only be used the first few times.
*/

// This is a header guard, it is a safety convention in C and C++.
#ifndef RUEDINES_H
#define RUEDINES_H

/// Standard C libraries for convenience. 

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>
#include <limits.h>
#include <string.h>
#include <math.h>

// Arbitrary size for buffer allocations. Nothing to see here...
#define BUFFERSIZE 1000

/// Aliases and definitions for learning.

// Logic statement will evaluate to True if both sides are equal and False if not.
#define is ==
// Logic statement will evaluate to True if both sides are NOT equal and False if they are.
#define isnt !=
// Logic operator between two statements. Will result in True if both are True and False otherwise.
#define and &&
// Logic operator between two statements. Will result in True if either is True and False only if neither is.
#define or ||

// A series of any characters in conjunction. Essentially text.
typedef char *string;
// A whole number, either positive or negative, which can fit in 32 bits.
typedef int integer;
// A number, either positive or negative which can be a decimal. Uses 32 bit floating-point precission.
typedef float decimal;
// A group of 8 bits, the smallest data type you can manipulate in C.
typedef unsigned char byte;
// A logic statement which is either True or False.
typedef bool boolean;

/// Function signatures, all defined in the "ruedines.c" file.

string say(string text);
string listen();
integer string_int(string number);
decimal string_float(string number);
string int_string(integer value);
string float_string(decimal value);

// The C compiler always looks for "main" as a starting point.
// Takes nothing (kinda) and returns the program status upon stopping.
// Write your code in here! 
integer main();

// We finish the header file with the guard closer and the name again, as per convention.
#endif /* RUEDINES__H */
