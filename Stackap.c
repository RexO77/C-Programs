#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>

float compute(float op1,float op2,char sym)
{
    switch (sym)
    {
    case '+' : return op1+op2;
        break;
    case '-' : return op1-op2;
        break;
    case '/' : return op1/op2;
        break;
    case '^' : return pow(op1,op2);
        break;
    case '*' : return op1*op2;
        break;
    default:  printf("Invalid Operand");
        break;
    }
}

void main()
{
    float s[20],op1,op2,res;
    int top=-1,i;
    char infix[20],sym;
    printf("Enter PostFix Experession : ");
    scanf("%s",infix);

    for(i=0 ; i<strlen(infix) ; i++){
        sym = infix[i];
        if(isdigit(sym)){
            s[++top]= sym-'0';
        }
        else{
            op2 = s[top--];
            op1 = s[top--];
            res = compute(op1,op2,sym);
            s[++top] = res;
        }
    }
    res = s[top--];
    printf("The Result is : %f\t",res);
}