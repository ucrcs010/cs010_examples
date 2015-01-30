/// @file deMorgans_practice.cpp
/// @author Adam Koehler
/// @date February 2, 2015
/// @brief Code snippets and comments utilized in lecture on 2/2/15 to
/// discuss DeMorgan's Law

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


// Another DeMorgan's Law example
// Utilize DeMorgan's Law to either eliminate the negation operator
// or move the negation operator inwards as far as possible

// We always start with the outer most negation operator, if we do not
// then we will often introduce additional steps to the process
!(!(x && y) && (z != q))


// Let's break apart the steps with descriptions, we don't skip steps
//      in a proof because we want all the steps there to show our 
//      work and proove nothing magical occurred.

// Start:
!( !(x && y) && (z != q) )
// Step one, apply the outer most negation operator across parentheses
!!(x && y) || !(z != q)
// Step two, eliminate the double negation
(x && y) || !(z != q)
// Step three, apply the negation operator to the relational expression
(x && y) || (z == q)
// DONE!

// With this proof, we show that the following are equivalent.
// WHO WOULD HAVE GUESSED!?!
!(!(x && y) && (z != q)) <===> (x && y) || (z == q)


// You can try starting with the inner most negation operator. This
//      causes more steps to be added to the process. But you can do
//      it for practice.
