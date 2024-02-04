# Algorithms--custom-Implementation
Did not refer anywhere before implementing.


Some important concepts that can be incorporated in Hardware code:

Advanced Concpets:(Not included in this code example but going to incorporate some of these)

TMP(Tempalte metaprogramming):
template can allow for compile time computations, that is let's say if we want to compute matrix multiplication
and I want to make it faster, I need for the code to execute after compliation. So template metaprogramming is
a technique in C++ where you start running the code in the compile time instead and this significantly reduces 
the overhead and gives a perfomance optimizations.

Most C++ headers have inline functions writtten in them and the reason is that they want to make sure that 
everything is called at the compile time instead of run-time and provides seamless intergration and better
usage experience.

Complier optimzations:

Constant folding: technique that tells us to evaualte the constant expressions at the compile time 

Loop unrooling: Techniques such as copy pasting the loop body multiple times in if else in a way
where control flow structure is ont presernt to recuce he overhead

constant propogation: resolving expresssions with constants in the complie time, instead
of run time const int x=10; int y=x+10; so the expression with "y" becomes 20.

Dead code elimination: It is a complier optimization techniqie that involves removing code that is "not used"

int, float -4bytes;
double- 8 bytes;
size_t 4bytes;
extern = visibilty
register= saved at register for faster access;
