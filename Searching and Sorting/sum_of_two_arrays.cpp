 void sumOfTwoArrays(int *input1, int size1, int *input2, int size2, int *output)
 { 
int i = size1-1, j = size2-1;
    int carry=0;
    int k;
    if(size1 < size2){
      k = size2;
    }
    else{
       k = size1;
    }
    while(k >= 0){
        output[k] = (input1[i]+input2[j]+carry)%10;
          carry = (input1[i]+input2[j]+carry)/10;
        if(i>0)
            i--;
        else{
            i=-1;
            input1[i] = 0;
       }
        if(j>0)
            j--;
        else{
            j=-1;
            input2[j] = 0;
        }
       k--;
    }
}
