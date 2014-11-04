/// @file deMorgans.cpp
/// @author Adam Koehler
/// @date October 29, 2014
/// @brief Code snippets and comments utilized in lecture on 10/29/14 to 
///        discuss DeMorgan's Law

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
//      or move the negation operator inwards as far as possible

// Start:
!( !(x && y) && (z != q) )

// Step one, apply the outer most negation operator across parentheses
!!(x && y) || !(z != q)

// Step two, eliminate the double negation
(x && y) || !(z != q)

// Step three, apply the negation operator to the relational expression
(x && y) || (z == q)

// DONE!


// We always start with the outer most negation operator, if we do not
//      then we will often introduce additional steps to the process
!( !(x && y) && (z != q) )
!( (!x || !y) && (z != q) )
!(!x || !y) || !(z != q)
(!!x && !!y) || !(z != q)
(x && y) || (z == q) 

