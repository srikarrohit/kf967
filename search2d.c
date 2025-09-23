#include <stdio.h>
#include <stdbool.h>
bool searchMatrix(int** matrix, int rows, int* cols, int target) {
    //we can flatten this 2d array and do binary search
    int col=cols[0];
    int left=0;
    int right=rows*col-1;//11
    while(left<=right){
        int mid=(left+right)/2;
        int mid_value=matrix[mid/col][mid%col];
        //12/4=3
        //5/4=1
        if(mid_value==target){
            return true;
        }else if(mid_value<=target){
            left=mid+1;
        }else{
            right=mid-1;
        }
    }
    return false;
}
int main(){

}