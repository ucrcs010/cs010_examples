/// @file usingRandCorrectly.cpp
/// @author Adam Koehler
/// @date November 8, 2016
/// @brief Code snippets and comments utilized in lecture on 11/08/16 to 
///        discuss improper rand() usage.

int main()
{
    // WRONG
    // flips twice when first if statement is false
    if(rand()%2 == 0)
    {
        //a
    }
    else if(rand()%2 == 1)
    {
        // b
    }
    
    
    
    // best to just store the value
    int x = rand()%2;
    if (HEADS == x)
    {
        
    }
    else
    {
        
    }
    
    // alternate, but still good as it is 
    // logically the same as 16-24 above
    if (rand()%2 == HEADS)
    {

    }
    else
    {
        
    }
}