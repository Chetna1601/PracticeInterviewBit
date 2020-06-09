int binarySearch(const vector<int> &A, int B, bool searchFirst){
    int low = 0, high = A.size()-1;
    int result = -1;
    while(low <= high){
        int mid = low+(high-low)/2;
        if(A[mid] == B){
            result = mid;
            if(searchFirst){
                high = mid - 1;
            } else {
                low = mid+1;
            }
        } else if(A[mid] > B){
            high = mid-1;
        } else{
            low = mid+1;
        }
    }
    return result;
}
int Solution::findCount(const vector<int> &A, int B) {
    
    int start = binarySearch(A,B, true);
    int end = binarySearch(A,B, false);
	if(start == -1)
		return 0;
	else
    return end - start + 1;
}