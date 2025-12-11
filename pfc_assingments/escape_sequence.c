#include <stdio.h>

int main() {
    printf("🧾 Escape Sequence Demo in C\n");
    printf("==============================\n\n");

    // \n - New Line
    printf("1. \\n -> New Line\n");
    printf("Hello\nWorld\n\n");

    // \t - Horizontal Tab
    printf("2. \\t -> Horizontal Tab\n");
    printf("Name\tAge\tCity\n");
    printf("John\t20\tDelhi\n\n");

    // \b - Backspace
    printf("3. \\b -> Backspace\n");
    printf("ABC\bD\n\n");  // Removes 'C' and prints ABD

    // \r - Carriage Return
    printf("4. \\r -> Carriage Return\n");
    printf("Hello World\rC Demo!\n\n"); // Moves cursor to start of line

    // \' - Single Quote
    printf("5. \\\' -> Single Quote\n");
    printf("\'A\'\n\n");

    // \" - Double Quote
    printf("6. \\\" -> Double Quote\n");
    printf("\"C Programming\"\n\n");

    // \\ - Backslash
    printf("7. \\\\ -> Backslash\n");
    printf("This is a backslash: \\\n\n");

    // \a - Alert (Beep sound)
    printf("8. \\a -> Alert (Beep Sound)\n");
    printf("Listen!\a\n\n");

    // \f - Form Feed
    printf("9. \\f -> Form Feed\n");
    printf("Line1\fLine2\n\n");

    // \v - Vertical Tab
    printf("10. \\v -> Vertical Tab\n");
    printf("First Line\vSecond Line\n\n");

    // \? - Question Mark
    printf("11. \\? -> Question Mark\n");
    printf("Is this a question mark\\? Yes!\n\n");

    printf("==============================\n");
    printf("End of Escape Sequence Demo 🎉\n");
    printf("Pranjal Singh, ERP -- RU-25-10992\n");

    return 0;
}
