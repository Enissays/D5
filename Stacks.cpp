#include "Stacks.h"

Stacks::Stacks()
{

}

Stacks::~Stacks()
{

}


int max(vector<string> stacks)
{
    int maxV = int(stacks[0].length());
    for (int i=0; i<int(stacks.size()); i++)
    {
        if (int(stacks[0].length()) > maxV)
        {
            maxV = int(stacks[0].length());
        }
    }
    return maxV+1;
}

void Stacks::display()
{
    int i;

// For each lign (maximum)
    for (i=max(st); i>=0; i--)
    {
        // For each stack
        for (int j=0; j<int(st.size()); j++)
        {
            if (int(st[j].size()) > i)
            {
                cout << "[" << st[j][i] << "]";
            }
            cout << "\t";
        }
        cout << endl;
    }
    for (i=0; i<int(st.size()); i++)
        cout << (i+1) << "\t";
    
}

void Stacks::addStack(string s)
{
    st.push_back(s);
}

void Stacks::move(int n, int s, int d)
{
    if (int(st[s].length()) < n) cout << "Number of crates is higher than stacks stock";
    else 
    {
        for (int i=0;i<n;i++)
        {
            st[d] += st[s][st[s].size() - 1];
            st[s].pop_back();
        }
    }
}

string Stacks::get_top()
{
    string top;
    for (int i=0;i<int(st.size());i++)
    {
        top += st[i][st[i].size() - 1];
    }
    return top;
}