//https://leetcode.com/problems/check-if-it-is-a-straight-line/

bool checkStraightLine(int** coordinates, int coordinatesSize, int* coordinatesColSize){
    if(coordinatesSize <= 2){
        return true;
    }

    float slope_num = coordinates[1][1] - coordinates[0][1];
    float slope_den = coordinates[1][0] - coordinates[0][0];

    for(int i = 2; i < coordinatesSize; i++){

        float curr_slope_num = coordinates[i][1] - coordinates[0][1];
        float curr_slope_den = coordinates[i][0] - coordinates[0][0];

        if(curr_slope_num*slope_den != curr_slope_den*slope_num){
            return false;
        }
    }

    return true;
}