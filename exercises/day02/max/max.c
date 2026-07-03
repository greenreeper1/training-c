int max(int values[], int length){
    int temp_max = 0;
    int i;
    if (length == 0){
        return 0;
    }
    for (i = 0; i < length; i++){
        if (values[i] > temp_max){
            temp_max = values[i];
        }
    }
    return temp_max;
}