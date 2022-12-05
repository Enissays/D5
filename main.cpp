#include "Stacks.h"
using namespace std;

int main()
{
    // A crate is represented by a string, and a stack by a vector of strings
    Stacks stacks;
    int nStacks;
    cout << "Number of stacks : ";
    cin >> nStacks;

    for (int i=0;i<nStacks;i++)
    {
        string stack="";
        int nCrates;
        cout << "Number of crates in stack " << i << " : ";
        cin >> nCrates;

        for (int j=0;j<nCrates;j++)
        {
            cout << "Select letter for crate " << j << " : ";
            char input;
            cin >> input;
            stack += input;
        }
        stacks.addStack(stack);
    }

    stacks.display();
    
    int nMoves, source, destination;
    cout << "(Number of moves must be 0 to stop input)";
    cout << endl;
    do
    {
        cout << "move ";
        cin >> nMoves;
        if (nMoves != 0) 
        {
            cout << " from ";
            cin >> source;
            cout << " to ";
            cin >> destination;
            stacks.move(nMoves, source-1, destination-1);            
        }
        cout << endl;

    }while (nMoves!=0);

    cout << stacks.get_top();
    return 0;
}