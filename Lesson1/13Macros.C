/*
A macro is a preprocessor directive in C — something that runs before the compiler.
Macros are defined with #define.

#define PI 3.14159
henever the compiler sees PI in your code, it will replace it with 3.14159 automatically.

float area = PI * r * r;   // becomes 3.14159 * r * r

-----------------------------------------------------------------------------------------

#define SQUARE(x) ((x) * (x))

int a = 5;
int b = SQUARE(a);  // becomes (5 * 5)


Why use macros instead of functions?

No function call overhead
The code is replaced directly.

Can work with constants
Example: #define MAX 100 works anywhere a constant is needed.

Conditional compilation
You can use macros to include/exclude code depending on conditions.


Be careful with macros

Parentheses — always wrap macro arguments to avoid unexpected results:
#define DOUBLE(x) (2 * (x))  // correct

No type checking — macros are text replacement, not real functions.
Debugging can be tricky — errors in macros sometimes show weird messages.


*/