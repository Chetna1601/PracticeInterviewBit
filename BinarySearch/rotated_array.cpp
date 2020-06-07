int Solution::findMin(const vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    int n = A.size();
    int high = A.size() - 1;
    int low = 0;
    while(low <= high) {
        int mid = low+ (high-low)/2;
        if( mid > 0 && A[mid-1] > A[mid] ) {
            return A[mid];
        } else if (mid < n-1 && A[mid]> A[mid+1]) {
            return A[mid+1];
        } else if ( A[mid] > A[high] ) {
            low = mid +1;
        } else {
            high = mid - 1;
        }
    }
    return A[0];
}