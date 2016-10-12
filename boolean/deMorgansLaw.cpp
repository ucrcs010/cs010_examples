/// @file deMorgansLaw.cpp
/// @author Adam Koehler
/// @date October 11, 2016
/// @brief Code snippets and comments utilized in lecture on 10/11/16 to
///     discuss DeMorgan's Law

// DeMorgan's Laws: 
1) !(x && y)   =====>  (!x || !y)
2) (!x || !y)  =====>  !(x && y)
3) !(x || y)   =====>  (!x && !y)
4) (!x && !y)  =====>  !(x || y)

// DeMorgan's Laws Simplified
!(x && y)  <====>  (!x || !y)
!(x || y)  <====>  (!x && !y)

// We can transition from either direction (laws work both ways) to 
//  distribute a negation operator across a logical compound operator.
//  Do not forget to switch the logical operator!

// DeMorgan's Law Truth Table to show logical equivalence
x       y       !(x && y)   (!x || !y)
true    true    false       false
true    false   true        true
false   true    true        true
false   false   true        true

x       y       !(x || y)   (!x && !y)
true    true    false       false
true    false   false       false
false   true    false       false
false   false   true        true


// A DeMorgan's Law example
// Utilize DeMorgan's Law to either eliminate the negation operator
// or move the negation operator inwards as far as possible
!( !(x && y) && (z != q) )

// Let's break apart the steps with descriptions, we don't skip steps
//      in a proof because we want all the steps there to show our 
//      work and proove nothing magical occurred.

// We always start with the outer most negation operator, if we do not
// then we will often introduce additional steps to the process

// DeMorgan's Laws: 
1) !(x && y)   =====>  (!x || !y)
2) (!x || !y)  =====>  !(x && y)
3) !(x || y)   =====>  (!x && !y)
4) (!x && !y)  =====>  !(x || y)

// Start:
!( !(x && y) && (z != q) )

// Step 1: deMorgan's #1
( !!(x && y) || !(z != q) )

// Step 2: eliminate double negation
( (x && y) || !(z != q) )

// Step 3: apply ! onto != to become ==
( (x && y) || (z == q) )

// DONE!


// DeMorgan's Law ICE
// DeMorgan's Laws: 
1) !(x && y)   =====>  (!x || !y)
2) (!x || !y)  =====>  !(x && y)
3) !(x || y)   =====>  (!x && !y)
4) (!x && !y)  =====>  !(x || y)

// Write steps to simplify the expression
// Use DeMorgan's Laws and other simplification
// tricks to simplify the following expression
!((!x && y) && (!x || !y))

// State your reasoning just as we did in the example
// Start:
!((!x && y) && (!x || !y))

(!(!x && y) || !(!x || !y)) - #1

!(A && B) - simple substition

((!!x || !y) || !(!x || !y)) - #1

((x || !y) || !(!x || !y)) - double negation

(x || !y) || !!(x && y) - #2 OR (x || !y) || (!!x && !!y) - #3

(x || !y) || (x && y)

// DONE



























