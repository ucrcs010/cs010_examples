/// @file boolean_advancedCompounds.cpp
/// @author Adam Koehler
/// @date January 30, 2015
/// @brief Code snippets and comments used to discuss boolean 
//          expressions, compound boolean expressions, 
///         logical negations, introduce DeMorgan's Law, 
///         and introduce short circuting


// Leap Year example
/*
Write a single compound boolean expression that satisfies the 
following rules for determining if a year is a leap year.

You may assume a variable, year, has been declared and 
assigned a value.  You should not utilize any branches in
your solution, we simply want a compound boolean expression.
 
 
By definition, year is a leap year if:
if year is divisible by 4
EXCEPT if ( year is divisible by 100, but NOT by 400 )
- e.g. 1700, 1800, 1900 are NOT leap years, 
but 2000 IS a leap year
So 2012 and 2000 are leap years; 2013 and 2100 are not.
*/


// Potential answers
// 1) (year % 400 == 0) && (year % 100) % 4 == 0
// 2) (year % 100 != 0 || year % 400 == 0)
// 3) !(year % 100 == 0 && year % 400 != 0)

// Q: Given we prove one is correct, 
//    how can we prove logical equivalence to others?
// A: truth tables

// We will choose #3, it correctly implements the 3 leap year dependencies as 
//   well as the EXCEPT if part through the negation operator

// We can use the expression in three ways:
// 1: assign the expression to a boolean variable, a bool can hold true or false
//      values and the expression evaluates to either true or false.
bool isLeap;
isLeap = 0 == year % 4 && !(year % 100 == 0 && year % 400 != 0);

// 2: use the expression within a condition, this could be in an if, else if,
//       or within a loop's conditional expression
if(0 == year % 4 && !(year % 100 == 0 && year % 400 != 0))
{
    
}

// 3: use the expression in combination with another boolean expression forming
//       a huge compound boolean expression






// DeMorgan's Law Introduction
//      Given the below compound boolean expression about leap years, 
//        utilize DeMorgan's Law to solve the question at hand.

// DeMorgan's Law states the following equivalences:
//      !(A && B) <==> !A || !B
//      !(A || B) <==> !A && !B

// Start:
(year % 4 == 0) && !(year % 100 == 0 && year % 400 != 0)

// Step 1: Apply negation across the parentheses, switching compound operator
(year % 4 == 0) && (!(year % 100 == 0) || !(year % 400 != 0))

// Step 2: Apply negation to sub expressions switching relational operator
(year % 4 == 0) && (year % 100 != 0 || year % 400 == 0)
 
// Lines 70, 73, and 76 are all logically equivalent. Meaning the resulting 
//      truth tables will be equivalent. Usually, we don't stop in the middle
//      of a DeMorgan's law application, so we would either use 70 or 76.
 



// Short Circuiting Introduction
// Teams and players example
//      Given two integer variables totalPlayers and teams, 
//      write a boolean expression that evaluates to true
//      when the number of players is evenly divided across all teams. 
//      Meaning there are no players left over.

// Potential answers:
// A) 0 == totalPlayers / teams 
// B) 0 == totalPlayers % teams 
// C) 0 == teams % totalPlayers 
// D) 0 == teams / totalPlayers 

// We want to enforce that nothing is left over, so that implies remainder (%).
//      This eliminates choices A & D. Then we have to determine whether we 
//      are splitting the players evenly amongst the teams or teams amongst
//      players. In most cases (and this one too) we split players amongst
//      teams. So we want to make sure to divide by teams, but we don't want
//      the division result we want the remainder so we use mod (%).
0 == totalPlayers % teams


// Q: What will happen in if the teams variable is zero?
// A: An error will occur, crashing the program (divide by zero)

// To prevent the error from occuring, we utilize short circuiting. This is 
//      the concept that once the computer knows the final true or false value
//      of an expression containing multiple && or || combinations, then it 
//      will stop evaluating.

// For &&, as soon as a false value is discovered, then the computer stops.
//      A && B && C, assuming A=true, B=false, C=true the && C part is never
//      actually looked at by the computer when determining the result of the
//      entire expression because B is false and the whole answer is known now.

// For ||, as soon as a true value is discovered, then the computer stops.
//      A || B || C, assuming A=true, B=false, C=true the B || C part is never
//      actually looked at by the computer when determining the result of the
//      entire expression because A is true and the whole answer is known now.

// These two expressions are logically equivalent, meaning they will produce
//      the same truth tables. So logically order does not matter.
// However, order does matter to a computer because of short circuting.
//      The two expression DO NOT result in the computer acting the same
//      because of order of operations and short circuting, one crashes and
//      one does not crash but both are logically equivalent.
0 == totalPlayers % teams && teams != 0 // crashes, % 0 yields an error
teams != 0 && 0 == totalPlayers % teams // no crash, short circuit if teams is 0

// Alternatively we can prevent the crashing error by using an if statement
if (teams != 0)
{
    if (0 == totalPlayers % teams)
    {
        // do something
    }
}

// And as we saw previously we can combine nest if statements using &&, and 
//      order within the compound conditional is dictated by the order we would
//      ask the questions when going through the if branches
teams != 0 && 0 == totalPlayers % teams