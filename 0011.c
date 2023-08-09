//
// Created by Dell on 2023/8/9.
//

//双循环  超时

//int maxArea(int* height, int heightSize){
//    int max = 0;
//    for (int i = 0; i < heightSize - 1; ++i) {
//        for (int j = i + 1; j < heightSize; ++j) {
//            if(height[i] <= height[j]){
//                max = max > height[i] * (j - i) ? max:height[i] * (j - i);
//            }else{
//                max = max > height[j] * (j - i) ? max:height[j] *(j - i);
//            }
//        }
//    }
//    return max;
//}


//双指针  通过  可以继续优化

int maxArea(int* height, int heightSize){
    int *left = height;
    int *right = height + heightSize -1;
    int max = 0;
    while (left < right){
        if(*left >= *right){
            max = max > *right * (right - left)?max:*right * (right - left);
            right--;
        }else{
            max = max > *left * (right - left)?max:*left * (right - left);
            left++;
        }
    }
    return max;
}


int main(){
    int height[] = {1,8,6,2,5,4,8,3,7};
    int ret = maxArea(height,9);
    printf("%d",ret);
    return 0;
}