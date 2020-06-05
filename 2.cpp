#include <iostream>
using namespace std;
int strstr (const char *text, const char *pattern);
int main(){
    char text[255];
    cin.getline(text, 255);
    char pattern[255];
    cin.getline(pattern, 255);
    cout << strstr(text, pattern);
}
int strstr(const char *text, const char *pattern)
{
    if (pattern[0] == '\0'){
       return 0;
    }
    int i = 0;
    int endt = 0;
    while (text[i] != '\0'){
        endt++;
        i++;
    }
    i = 0;
    int endp = 0;
    while (pattern[i] != '\0'){
        endp++;
        i++;
    }

    if(endp > endt)
        return 0;

    for (int j = 0; j <= (endt - endp); j++){
        int k = 0;
        for (int g = 0; g < endp; g++){
            if (text[j+g] == pattern[g]){
                k++;
            }
            else{
                break;
            }
        }
        if (k == endp){
            return j;
        }

    }
    return -1;
}
