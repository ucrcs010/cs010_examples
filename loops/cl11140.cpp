#include <iostream>

using namespace std;

/*
    codelab 11140:
    "sentinel" - a recognizable word that is guaranteed NOT to be a part of the data.
    e.g. "xxx" or *quit*
    parse input A A A A B A B B
    where AAAA is considered one consecutive repetition of length 4,
    and BB is another of length 2, 
    but I only want to add 1 to a variable once a repetition occurs
    no matter how long.
    In this case, there are only 2 reps
    
    algorithm:
    repeat while input is not "xxx"
    - obtain two words from user (prev, current)
    - the first time (prev == current), increment count
    - ignore continued matches
    
    pseudo-code:
    set isRep to false; repCount to 0
    get current
    loop
      while current is not "xxx"
        - copy current to prev
        - get new current
        - if current == prev
            - if not isRep, increment repCount and set isRep to true
        - else set isRep to false

*/

int main()
{
    string current, prev;
    int repCount = 0;
    bool isRep = false;
    
    cout << "prompt: ";
    cin >> current;
    
    while (current != "xxx")
    {  
        prev = current;
        cin >> current;
        
        if (current == prev)
        {
            if (!isRep)
            {
                ++repCount;
                isRep = true;
            }
        }
        else
        {
            isRep = false;
        }
    }
    
    cout << "\nYou had " << repCount << " repetitions" << endl;
    
    return 0;
}