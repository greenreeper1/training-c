int search(int values[], int length, int to_find){
    int i;
    for (i = 0; i < length; i++){
        if (values[i] == to_find){
            return i;
        }
    }
    return -1;
}