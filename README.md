# My first C Cheatsheet 👼

Ruedines single install command:
```sh
git clone https://github.com/kixikCodes/Ruedines && cd Ruedines/ && sudo ./install.sh && cd ..
```

#### Quick essentials:
In C the `;` marks the end of an instruction.
If an instruction contains other instructions, we contain them between `{ }` (with no need for `;` after the braces).
If you are listing multiple variables in a line, you split them by `, `.
Empty characters such as spaces and tabs are meaningless in C. We still indent and devide out code out so we can read it better, altough it could all go in one line.

## Comments
Whenever we want to put explanations or just notes we add a comment using `//` or `/* */` for multi-line.
```c
// Like this,

/*
or like this.
*/
```
## Data Types

- `string` - Stores a series of characters. Value **must** be between `" "`!
- `char` - Stores a singular character. Value **must** be between `' '`!
- `integer` - Stores a whole number, positive or negative.
- `decimal` - Stores a decimal number, positive or negative. Value **must** end with an `f`.
- `boolean` - Stores a logical statement which is either `true` or `false`.
- `byte` - Stores an 8 bit positive value. Smallest piece of data you can manipulate. You can write it as `0b[bits]`. Example: `byte tiny_guy =  0b00000001`.
- `void` - Stores nothing. This is to tell the computer that a function doesn't return anything.

## Operators

### Value:
- `=` - Assigns what's on the right to what's on the left. Just like an equals sign in math.
- `+` - Adds the value on the right to the value on the left.
- `-` - Subtracts the value on the right from the value on the left.
- `*` - Multiplies the value on the right by the value on the left.
- `/` - Divides the value on the left by the value on the right.
- `%` - Produces the **remainder** of dividing the value on the left by the value on the right.

### Logic:
- `is`- Compares if the values on both sides are equal.
- `isnt` - Compares if the values on both sides are not equal.
- `and` - Chains together logic such that if both sides are true the whole statement is true.
- `or` - Chains together logic such that if EITHER side is true the whole statement is true.
- `<` - Left value **is less than** right value.
- `>` - Left value **is greater than** right value.
- `<=` - Left value is less than **or equal** right value.
- `>=` - Left value is greater than **or equal** right value.
- `!some_statement` - Flips entire statement. Essentially a **"not"**.

## Logic Blocks

### Variable creation and assignment:

`type name = value;`

or just
`type name;`
and later
`name = value;`

```c
// Examples:
string word = "hello!";
char funny = 'E';
integer my_age;
decimal my_height;
boolean am_human;

my_age = 23;
my_height = 1.73f;
am_human = false;
```
### Program entry point:
```c
// Don't worry too much about why this is for now.
integer main() {

    // Your code...
    
    return 0; // Just do this at the very end.
}
```
### If block:
```c
if (/* Condition is met? */) {

    // Do *this* code.

}
```
### If-else chain block:
(add as many `else if` as you need)
```c
if (/* Condition is met? */) {

    // Do *this* code.

} else if (/* Alternative is met? */) {

    // Do *this* code instead.

} else {

    // Otherwise just do *this* code.

}
```

### While loop:
```c
while (/* Condition is true... */) {

    // Do *this* repeatedly.

}
```

### For loop:
```c
for (/* Iterator */;/* End condition */;/* Stepping */) {

    // Do *this* repeatedly.

}
```

### Loop controls:
`break` - will break out of the loop if ran into.

`continue` - will skip to the next loop step if ran into.

## Functions

### Input and Output

```c
say(/* string you wish to print to terminal */);
```
```c
listen(); // will return you back what you enter in the terminal
```
### Conversion

_Since the computer does not know the difference between text and actual numbers, you must use this to turn strings such as "12" to the actual integer value of 12 (and viceversa)._
```c
string_int(/*string you want as an integer value*/);
```
```c
string_float(/*string you want as a decimal value*/);
```
```c
int_string(/*integer you want as a textual string*/);
```
```c
float_string(/*decimal you want as a textual string*/);
```
### Making your own function
To make your own function you must define it just like a variable from before. You can do so like:

```
return_type function_name(arguments as variables) {
    function code
}
```

In a function we use the keyword `return` to exit it with an output back to where it was called.

```c
// Example:
integer times_two(integer number) {
    integer result = number * 2;
    return result;
}

// Would could be called in your program like such:
integer main() {
    integer some_number;
    ...
    some_number = times_two(5);
    // Now some_number is set to the result which is 10.
    ...
    return 0;
}
```

As suggested earlier, function can return nothing with the `void` type. This is useful if you just want to do stuff and not output any particular result.
```c
// Example:
void say_hello_world() {
    say("Hello World!");
    // no need for return
}

// Would could be called in your program like such:
integer main() {
    ...
    say_hello_world();
    // Now the code in the function would just take place here.
    ...
    return 0;
}
```

Lastly a quick note on why the `main` function is an `int`. The reason is rather simple. Programs have something called an _exit code_ which is just a number that represents how the runtime went. Since the program outputs that number and the program IS the `main` function, we make it have an integer return type and `return 0` at the end by default. Zero being the "everything went okay" code. That's all there is to it!

Happy coding~
