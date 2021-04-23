#include "dna.h"
#include <cstring>
#include<string>
#include"math.h"
using namespace std;
/*
Write code for function get_gc_content that accepts
a const reference string parameter and returns a double.
Calculate GC content:
Iterate string count Gs and Cs, divide count by string length.
Return quotient.
*/
double get_gc_content(const string& dna)
{
    double ceegee=0;// inital value of cg counter
    double cg_content;//create double variable for cg content
    int total= dna.length();//total # of chars is string length
    for(size_t i=0; i<dna.length(); i++)//for loop to go thru wach char in string
    {
        if(toupper(dna[i])=='C' || toupper(dna[i])=='G')//if statement to catch the c & g chars
        {
        
            ceegee++;//increase cg counter
        }
    }
    if (dna.length()==0)//cant ddivide by zero so if string length is 0 return 0
    {
        return 0;
    }
    cg_content= ceegee / total;//cg content is # of c&g chars over total # of chars
    return (round(1000*cg_content)/1000) * 100;//rounded to get 3 sig number in percentage

}



/*
Write code for function get_reverse_string that
accepts a string parameter and returns a string reversed.
*/
string get_reverse_string(string dna)
{
    int total = dna.length()-1;//length of string minus 1
    string reverse=dna;//create variable thats a copy of dna
    for (int i=total; i>=0; i--)//for loop to go thru each char in total backwards
    {//index starts at total int value, then loop down by one
      reverse[total-i]=toupper(dna[i]);//reverse array built, reverse index of total-1 is the char in dna index i
    }
    return reverse;
}


/*
Write prototype for function get_dna_complement that
accepts a string dna and returns a string.
Calculate dna complement:
a. call function get_reverse_string(dna), save results to a local string variable
b. iterate local string variable and
    replace A with T, T with A, C with G and G with C
c. return string

*/
string get_dna_complement(string dna)
{
    string new_dna=get_reverse_string(dna);//get string from reverse function
    for (size_t i=0; i<new_dna.length();i++)//for loop to go thru each char
    {
        if(new_dna[i]=='A')//when the char at the index is A
        {
            new_dna[i]='T';//swap for t
        }
        else if(new_dna[i]=='T')//when the char at the index is T
        {
            new_dna[i]='A';//swap for a
        }
        else if(new_dna[i]=='C')//when the char at the index is C
        {
            new_dna[i]='G';//swap for g
        }
        else if(new_dna[i]=='G')//when the char at the index is G
        {
            new_dna[i]='C';//swap for c
        }
    }
    return new_dna;
}

bool is_input_valid(string dna)
{
    for(size_t i=0; i<dna.length();i++)//for loop to go thru each char in dna
    {//want to validate dna characters being entered by users
        if(!(toupper(dna[i])=='A' || toupper(dna[i])=='T' || toupper(dna[i])=='G' || toupper(dna[i])=='C'))//dna character over than letters 
        {//a,t,c,g
            return false;
        }
    }
    return true;
}

