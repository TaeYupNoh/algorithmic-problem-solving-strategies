//재귀를 이용한 이진탐색
bool BinarySearch(int *arr, int start, int end, int key) {
 
    if (start > end) return false; //key 값이 없을 때
 
    int mid = (start + end) / 2;
 
    if (arr[mid] == key) {    
        return true;
        
    } else if (arr[mid] > key) { 
        return BinarySearch(arr, start, mid - 1, key);
        
    } else { 
        return BinarySearch(arr, mid + 1, end, key);
        
    }
}