#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

string alter_strings_1(string &sent1, int &total_lower)
{
    for(int i=0;i<sent1.size();i++)
    {
        if((int)sent1[i]>=97 && sent1[i]<=122)
        {
            sent1[i] = sent1[i] - 32;
            total_lower ++;
        }
    }
    return sent1;
}

int main()
{
    string sent1;
    int total_lower = 0;
    do
    {
        cout << "Enter sentence: ";
        getline(cin, sent1);
        if(sent1.size()<=25)
        cout << "Your string is too short!" << endl;
    }
    while(sent1.size() <= 25);
    cout << "Changed string: " << alter_strings_1(sent1,total_lower) << endl;
    cout << "Lower case count: " << total_lower << endl;
    for(int i=0;i<sent1.size();i++)
    {
        if((int)sent1[i]==' ')total_lower++; // bo sent1[i] jest traktowany jako zmienna typu char
    }
    cout << "Upper case count is " << (sent1.size() - total_lower) << endl;


    system("pause");
}
