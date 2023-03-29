#include"stive.h"
int main()
{
    char s[]={'a','b','c','d'};
    Node *first=NULL;
    int i;
    for(i=0;i<4;i++){
        push(&first,s[i]);
    }
    display(first);
    return 0;
}
