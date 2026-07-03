

float average(float values[], int length){
    float sum = 0;
    int i;
    
    if (length == 0) {
        return 0.0;
    }

    for (i = 0; i < length; i++){
        sum += values[i];
    }
    return sum / length;
}