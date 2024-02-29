#include <stdio.h>
void print_space(int row, int i){
    for(int spc=0;spc<=row-i;spc++){
        printf(" ");
    }
}
void print_number(int row,int i){
    for(int num=1;num<=i;num++){
        printf("%d ",num);
    }
    
}

int main()
{
    int row=5;
    for(int i=0;i<=row;i++){
        print_space(row,i);
        print_number(row,i);
        printf("\n");
        
    }

    return 0;
}
