// We include our header at the start and then give our functions their proper definitions.
#include "ruedines.h"

// Prints a given string to the terminal.
// Returns passed string back.
string say(string text) {
    write(STDOUT_FILENO, text, strlen(text));
    write(STDOUT_FILENO, "\n", 1);
    return text;
}

// Reads user's input from the terminal.
// Takes no arguments, returns read string. (dynamically allocated thus leaks)
string listen() {
    string buffer = malloc(BUFFERSIZE);
    ssize_t n = read(STDIN_FILENO, buffer, BUFFERSIZE - 1);
    buffer[n > 0 ? n : 0] = '\0';
    return buffer;
}

// Converts text representing a number into it real integer data.
// Takes the number as a string and outputs it as an integer.
integer string_int(string number) {
    return atoi(number);
}

// Converts text representing a decimal into it floating-point data.
// Takes the number as a string and outputs it as an integer.
decimal string_float(string number) {
    return atof(number);
}

// Converts an integer value to its string form.
// Takes the integer and returns the string. (dynamically allocated thus leaks)
string int_string(integer value) {
    string buffer = malloc(12);
    if (!buffer)
        return NULL;
    snprintf(buffer, 12, "%d", value);
    return buffer;
}

// Converts a float value to its string form.
// Takes the float and returns the string. (dynamically allocated thus leaks)
string float_string(decimal value) {
    char temp[64];
    snprintf(temp, sizeof(temp), "%.9f", value);  
    string buffer = malloc(64);
    if (!buffer)
        return NULL;

    strcpy(buffer, temp);
    char *dot = strchr(buffer, '.');
    if (!dot)
        return buffer;
    char *end = buffer + strlen(buffer) - 1;
    while (end > dot && *end == '0')
        *end-- = '\0';
    if (end == dot)
        *end = '\0';

    return buffer;
}
