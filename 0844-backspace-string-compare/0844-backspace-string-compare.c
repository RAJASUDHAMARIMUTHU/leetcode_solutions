bool backspaceCompare(char* s, char* t) {
    int stack1[200];
    int stack2[200];
    int top1=-1;
    int top2=-1;
    for(int i=0;s[i]!='\0';i++){
        if(s[i]!='#'){
           stack1[++top1]=s[i];
            
        }
        else{
            if(top1 >= 0)
                 top1--;
           
        }
    }  
     for(int i=0;t[i]!='\0';i++){
        if(t[i]!='#'){
           stack2[++top2]=t[i];
            
        }
        else{
            if(top2 >= 0)
                 top2--;
          
        }
    }  
    if(top1!=top2){
        return false;
    }
     for(int i=0;i<=top1;i++){
        if(stack1[i]!=stack2[i]){
            return false;
        }
    }  
    return true;

}