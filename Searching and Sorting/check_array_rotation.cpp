int arrayRotateCheck(int arr[], int n) {

    int count=1;
    bool check = false;
    
    for(int i = 0; i < n-1; i++){
        if(arr[i] <= arr[i+1]){
            count++;
        }
        else{
            check = true;
            break;
        }
    }
    if(check == false){
        return 0;
    }
    else{
        return count;
    }
}
