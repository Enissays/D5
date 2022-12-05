#ifndef STACKS_H
#define STACKS_H

#pragma once

#include<vector>
#include<string>
#include<iostream>
using namespace std;

class Stacks
{
public:
    Stacks();
    ~Stacks();
    void display();
    void addStack(string);
    void move(int, int, int);
    string get_top();
private:
    vector<string> st;
};

#include "Stacks.cpp"

#endif