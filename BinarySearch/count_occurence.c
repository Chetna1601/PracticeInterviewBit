/**
 * @input A : Read only ( DON'T MODIFY ) Integer array
 * @input n1 : Integer array's ( A ) length
 * @input B : Integer
 * 
 * @Output Integer
 */
int findIndex(const int* A, int low, int high, int B) {
    
    if(low<=high) {
    	int mid = low + (high-low)/2;
        if(A[mid]==B){
            return mid;
        }
        else if( A[mid] < B) {
            return findIndex(A,mid+1,high,B);
        }
        else{
            return findIndex(A,low,mid-1,B);
        }
    }
    return -1;
}

int findCount(const int* A, int n1, int B) {
    int index = findIndex(A, 0, n1, B);
    if(index == -1) {
        return 0;
    } else {
        int left = index;
        int right = index;
        while((left-1)>=0){
            if(A[left-1] == B) {
                left--;
            } else { break; }
        }
        while((right+1) <= n1-1) {
            if(A[right+1] == B) {
                right++;
            } else { break; }
        }
        return right - left + 1;
    }
}