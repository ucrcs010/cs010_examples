/// @file shortCircuit.cpp
/// @author Adam Koehler
/// @date October 29, 2014
/// @brief Code snippets and comments utilized in lecture on 10/29/14 to 
///        discuss short circuiting boolean expression evaluation.

combination of || in compound boolean expression means we stop evaluation as 
soon as one of the choices is true

Simple example:
true || y ---> we never evaluate y because the compound is already true, the 
true literal may be replaced by an expression that evaluates to true


combination of || in compound boolean expression means we stop evaluation as 
soon as one of the choices is false

Simple example:
false && y ---> we never evaluate y because the compound is already false, the 
false literal may be replaced by an expression that evaluates to false