#!/bin/sh

if [ $# -ne 1 ]; then
    echo "Usage: $0 <your program source file>"
    exit 1
fi

SOURCEFILE="$1"
OUTNAME="${SOURCEFILE%.c}"
LIBFILE="ruedines.a"

if [ ! -f "$LIBFILE" ]; then
    echo "Error: $LIBFILE not found."
    exit 1
fi

cc -Wall -Wextra -Werror "$SOURCEFILE" "$LIBFILE" -o "$OUTNAME"

if [ $? -eq 0 ]; then
    echo "Built executable: $OUTNAME"
else
    echo "Compilation failed."
fi
