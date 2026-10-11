char stack [10000] ;
int top = -1 ;

void push(char c) {
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

    top = -1 ;

    for (int i=0 ; i<strlen(s) ; i++) {

        if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
            push(s[i]) ;
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

    if (top == -1) {
        return true ;
    }
    else
        return false ;
}