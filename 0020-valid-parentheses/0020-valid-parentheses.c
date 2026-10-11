int top = -1 ;

void push(char stack[], char c) {
    if (top == 9999) {
        return ;
    }
    else {
        stack [++top] = c ;
    }
}

void pop () {
    if (top == -1) {
        return ;
    }
    else {
        top-- ;
    }
}


bool isValid(char* s) {

    int n = strlen(s) ;
    top = -1 ;
    char *stack = malloc(n * sizeof(char));

    for (int i=0 ; i<n ; i++) {

        if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
            push(stack, s[i]) ;
        }

        else if (s[i] == ')' || s[i] == '}' || s[i] == ']') {

            if (top == -1)
                return false ;
            else {
                if (stack[top] == '(' && s[i] == ')')
                    pop() ;
                else if (stack[top] == '[' && s[i] == ']')
                    pop() ;
                else if (stack[top] == '{' && s[i] == '}')
                    pop() ;
                else
                    return false ;
            }
        }
        
        else
            continue ;
    }

    free (stack) ;
    
    if (top == -1) {
        return true ;
    }
    else
        return false ;

}