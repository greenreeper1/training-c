int min(int values[], int length){
    int temp_min = 1e9;
    int i;
    for (i = 0; i < length; i++){
        if (values[i] < temp_min){
            temp_min = values[i];
        }
    } 
    return temp_min;
}