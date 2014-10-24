/// @file branches_tallestPerson_noCode.cpp
/// @author Adam Koehler
/// @date October 20, 2014
/// @brief Code snippets and comments utilized in lecture on 10/20/14 to 
///        discuss comparisons and algorithm design


// Question:
// Given 3 people standing next to you. 
// What are the steps you would take to determine the tallest person?
// What if you were blind and could only talk to them? 
//      How would you adapt your steps?
// DO NOT write code, just the steps you wish to take to solve your problem

// Potential Answer:
// check if A is taller than B
//      if he taller than B, check if A is taller than C
//          if he is taller than C, then he is the tallest
// check if B is taller than A
//      if he taller than A, check if B is taller than C
//          if he is taller than C, then he is the tallest
// check if C is taller than A
//      if he taller than A, check if C is taller than B
//          if he is taller than B, then he is the tallest

// Potential Answer:
// check if A is taller than B
//      if he taller than B, check if A is taller than C
//          if he is taller than C, then he is the tallest
//          if he is not taller than C, then C is the tallest
// based on initial check, B is taller than A
//      check if B is taller than C
//          if he is taller than C, then he is the tallest
//          if he is not taller than C, then C is the tallest
