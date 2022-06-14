#include <iostream>
#include <string>

using namespace std;


void exer1();
void exer2();


int main()
{
//    exer1();
    exer2();
    return 0;
}


void exer1()
{
    string word;
    getline(cin, word);
    for(int i=0;i<word.length(); i++)
    {
        if(i==0||word[i-1]==' ')
        {
            word[i] = toupper(word[i]);
        }
    }

    cout<<word;
}

//Write a C++ program to find the largest word in a given string
void exer2()
{
    string sentence;
    getline(cin, sentence);
    int whiteSpaces = 0;


    //count the number of whitespaces
    for(int i=0; i<sentence.length(); i++)
    {
        if(sentence[i]==' ')
        {
            whiteSpaces++;
        }
    }

//    int whiteSpaceIndices[whiteSpaces+1];
    int wordStartIndices[whiteSpaces+1] = {0};
    int wordEndIndices[whiteSpaces+1];
    //find the index of whitespaces
    int j = 0;
    for(int i=0; i<sentence.length(); i++)
    {
        if(sentence[i]==' ')
        {
            wordEndIndices[j] = i-1;
            wordStartIndices[j+1] = i+1;
            j++;
        }
    }
    wordEndIndices[whiteSpaces] = sentence.length()-1;


    int longestWordLength = wordEndIndices[0] - wordStartIndices[0] + 1; // - whiteSpaceIndices[0]; //assume that first word is the longest
    int longestWordIndices[2] = {wordStartIndices[0], wordEndIndices[0]};

    for(int i = 1; i<whiteSpaces+1; i++)
    {
        if(wordEndIndices[i]-wordStartIndices[i] + 1>longestWordLength)
        {
            longestWordLength = wordEndIndices[i]-wordStartIndices[i] + 1;
            longestWordIndices[0] = wordStartIndices[i];
            longestWordIndices[1] = wordEndIndices[i];
        }
    }

    string longestWord = "";
    for(int i=longestWordIndices[0]; i<=longestWordIndices[1]; i++)
    {
        longestWord.push_back(sentence[i]);
    }

    cout<<"longest word = "<<longestWord;
}
