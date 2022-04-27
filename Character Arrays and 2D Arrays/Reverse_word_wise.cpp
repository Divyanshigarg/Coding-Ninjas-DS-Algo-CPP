
int length(char input[])
{
    int len = 0; 
    for(int i = 0; input[i] != '\0'; i++) 
    {
         len++;
    }
        return len; 
}
void reverse(char input[], int start, int end){
    int i = start,
    j = end; 
    while(i < j) 
    { 
        char temp = input[i]; 
        input[i] = input[j]; 
        input[j] = temp; 
        i++; 
        j--; 
    } 
}

void reverseCompleteString(char input[]) { 
    int i = 0, 
    j = length(input) - 1; 
    while(i < j) {
        char temp = input[i]; 
        input[i] = input[j]; 
        input[j] = temp;
         i++; 
        j--; 
    } 
}
void reverseStringWordWise(char input[]){
    reverseCompleteString(input); 
    int start = 0, 
    end = 0, i; 
    for(i = 0; input[i] != '\0'; i++){
         if(input[i] == ' '){
            end = i - 1; 
            reverse(input, start, end);
            start = i + 1; 
        }
    } 
end = i - 1; 
reverse(input, start, end); 
}
