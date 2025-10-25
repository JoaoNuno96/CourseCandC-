#include <stdio.h>
#include <stdlib.h>
#include <string>
#define TAM 4

//GET LAST VALUE OF STACK
int last_value_of_stach(int vect[TAM],int *topParam)
{
    if(verify_if_stack_empty(topParam))
    {
        return 0;
    }
    else
    {
        return vect[topParam];
    }

}

//STACK SIZE
int size_stack(int topParam)
{
    return topParam + 1;
}

//VERIFY IF STACK IS EMPTY
bool verify_if_stack_empty(int *topParam)
{
    if(*topParam == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

//VERIFY IF STACK IS FULL
bool verify_if_stack_full(int *topParam)
{
    if(*topParam == TAM -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

//PRINT VECTOR VALUES
void print_stack_vector(int v[TAM],int *topParam)
{
    int i;
    for(i = 0; i<TAM;i++)
    {
        printf("ITEM#%d - %d\n",i,v[i]);
    }
    printf("Stack size is %d",size_stack(*topParam));

}

//ADD ELEMENT
void push_stack_vector(int valueParam, int vParam[TAM], int *topParam)
{
    //STACK FULL
    if(verify_if_stack_full(topParam))
    {
        printf("Can't add more elements! Stack full!\n");
    }
    else
    {
        *topParam += 1;
        vParam[*topParam] = valueParam;
    }
}

//REMOVE ELEMENT
void pop_stack_vector(int vParam[TAM], int *topParam)
{
    if(verify_if_stack_empty(topParam))
    {
        printf("Can't remove more elements! Stack Empty!\n");
    }
    else
    {
        vParam[*topParam] = 0;
        *topParam -= 1;
    }
}

//CREATE STACK
void create_stack(int vect[TAM],int *top)
{
    *top = -1;

    int i;

    for(i = 0; i < TAM; i++)
    {
        vect[i] = 0;
    }
}



int main()
{
    int stack_vect[TAM];
    int top;

    if(verify_if_stack_empty(&top))
    {
        printf("Stack Empty\n");
    }

    create_stack(stack_vect,&top);

    print_stack_vector(stack_vect,&top);

    printf("\n SPACE \n");

    push_stack_vector(5,stack_vect,&top);
    push_stack_vector(7,stack_vect,&top);
    push_stack_vector(8,stack_vect,&top);

    pop_stack_vector(stack_vect,&top);
    pop_stack_vector(stack_vect,&top);

    print_stack_vector(stack_vect,&top);

    return 0;
}
