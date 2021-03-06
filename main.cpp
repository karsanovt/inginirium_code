#include <iostream>
#include <string>
using namespace std;

class ceasar_cypher
{
private:
    string  to_code;
    int     shift;
public:
    ceasar_cypher(string input_string, int number_for_shift);
    void code();
    void setter_str(string input);
    
};

void ceasar_cypher::setter_str(string input)
{
    to_code = input;
}

ceasar_cypher::ceasar_cypher(string input_string, int number_for_shift)
{
    to_code = input_string;
    shift = number_for_shift % 26;
}

void ceasar_cypher::code()
{
    for (int i = 0; i < to_code.length(); i++)
    {
        if (to_code[i]  >= 'a' && to_code[i] <= 'z')
        {
            if (to_code[i] + shift > 'z')
                to_code[i] -= 26;
            to_code[i] += shift;
        }
    }
}

int main()
{
    // char ch = getchar();
    // cout << ch;
    string input;
    int sh;
    getline(cin, input);
    cin >> sh;
    // cout << endl;
    ceasar_cypher test1 = ceasar_cypher(input, sh);
    test1.code();
    // cout << test1.getter_str() << endl;
}
