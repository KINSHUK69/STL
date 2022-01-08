//      8. binary_search(first_iterator, last_iterator, x) – Tests whether x exists in sorted vector or not.

//      9. lower_bound(first_iterator, last_iterator, x) – returns an iterator pointing to the first element in the range [first,last) which  has a value not less than ‘x’.

//      10. upper_bound(first_iterator, last_iterator, x) – returns an iterator pointing to the first element in the range [first,last) which has a value greater than ‘x’. 


// C++ program to demonstrate working of lower_bound()
// and upper_bound().
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
 


int main()
{
    // Initializing vector with array values
    int arr[] = {5, 10, 15, 20, 20, 23, 42, 45};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> vect(arr, arr+n);
 
    // Sort the array to make sure that lower_bound()
    // and upper_bound() work.
    sort(vect.begin(), vect.end());
 
    // Returns the first occurrence of 20
    auto q = lower_bound(vect.begin(), vect.end(), 20);
 
    // Returns the last occurrence of 20
    auto p = upper_bound(vect.begin(), vect.end(), 20);
 
    cout << "The lower bound is at position: ";
    cout << q-vect.begin() << endl;
 
    cout << "The upper bound is at position: ";
    cout << p-vect.begin() << endl;
 
    return 0;
}
