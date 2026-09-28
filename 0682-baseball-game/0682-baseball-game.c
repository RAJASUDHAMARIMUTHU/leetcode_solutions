int calPoints(char** operations,int n) {
    int stack[n];
    int top=-1;
    for(int i=0;i<n;i++){
        if(operations[i][0]=='+'){
            stack[top+1]=stack[top]+stack[top-1];
            top++;
        }
        else if(operations[i][0]=='C'){
            top--;
        }
        else if(operations[i][0]=='D'){
            stack[top+1]=stack[top]*2;
            top++;
        }
        else{
            stack[++top]=atoi(operations[i]);
        }


    }
    int sum=0;
    for(int i=0;i<=top;i++){
        sum=sum+stack[i];
    }
    return sum;
}