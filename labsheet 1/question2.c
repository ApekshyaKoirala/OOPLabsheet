#include<stdio.h>

int main(){
    
    char str[100];
    int position=-1;
    printf("Enter the sring");
     fgets(str,sizeof(str),stdin);
    
    char  *ptr=str;
        
    while(*ptr!='\0')
    {
        if(*ptr=='c'||*ptr=='C'){

            position=ptr-str;
            break;
        }
        ptr++;
    }
    if(position!=-1){
        printf("The position of c is %d",position+1);
    }
    else{
        printf("Position not found");
    }
    return 0;
}