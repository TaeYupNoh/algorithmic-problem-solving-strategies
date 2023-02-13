// 반복문을 사용한 이진 탐색
bool BinarySearch(int *arr, int len, int key){
    int start = 0;
    int end = len-1;
    int mid;
 
    while(end - start >= 0) {
        mid = (start + end) / 2;    
 
        if (arr[mid] == key) {    
            return true;
 
        } else if (arr[mid] > key) {   
            end = mid - 1;
 
        } else {
            start = mid + 1;
 
        }
    }
    return false;
}