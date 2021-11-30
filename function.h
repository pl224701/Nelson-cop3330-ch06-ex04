/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Jack Nelson
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Name_value
{
    public: 
        std::string name;
        int value;
};

void display(vector<Name_value> vectors)
{
    cout << "Displaying vector\n";
    int size;
    size = vectors.size();
    for(int i=0;i<size;i++)
    {
        printf("%s %d\n",vectors[i].name.c_str(),vectors[i].value);
    }
}

int function()
{
    vector<Name_value> vectors;
    Name_value temp;
    temp.name = "something";
    temp.value = 1;
    int size;
    cout << "No identical names. To terminate enter NoName and 0\n";
    while(temp.name!="NoName" && temp.value!=0)
    {
        cout << "Enter a name: ";
        getline(cin,temp.name);
        cout << "Enter a score: ";
        scanf("%d",&temp.value);
        size=vectors.size();
        for(int i=0;i<size;i++)
        {
            if(temp.name==vectors[i].name)
            {
                cout << "No identical names";
                return 0;
            }
        }
        if(temp.name!="NoName" && temp.value!=0)
            vectors.push_back(temp);
        cin.ignore();
    }
    display(vectors);
    return 0;
}
