# Algorithms--custom-Implementation
Did not refer anywhere before implementing.

Some important concepts that can be incorporated in Hardware code:

Advanced Concepts (Not included in this code example but going to incorporate some of these):

TMP (Template Metaprogramming):
Template metaprogramming allows for compile-time computations. For example, if we want to optimize matrix multiplication, we can execute code during compilation rather than runtime, significantly reducing overhead and providing performance optimizations.

Most C++ headers have inline functions written in them to ensure that everything is evaluated at compile-time, providing seamless integration and a better user experience.

Compiler Optimizations:**

Constant Folding: A technique that evaluates constant expressions at compile-time.

Loop Unrolling: Techniques such as copying and pasting the loop body multiple times to reduce control flow overhead.

Constant Propagation: Resolving expressions with constants at compile-time instead of runtime. For example, const int x = 10; int y = x + 10; results in the expression for "y" becoming 20.

Dead Code Elimination: A compiler optimization technique that involves removing unused code.

Data Type Sizes:
int, float: 4 bytes
double: 8 bytes
size_t: 4 bytes (on many systems)
extern: Specifies visibility
register: Suggests storing a variable in a register for faster access

