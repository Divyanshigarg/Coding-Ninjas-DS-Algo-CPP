#include<cstring>
void printSubstrings(char str[]){
    for(int start = 0; str[start] != '\0'; start++)
    {
        for(int j = start; str[j] != '\0'; j++)
        {
            for(int i = start; i <= j; i++)
            {
                cout << str[i];
           
            }
            cout << endl;
        }
    }
}
