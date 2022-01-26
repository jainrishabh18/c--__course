//......................
//arr.erase(position to be deleted) – This erases selected element in vector and shifts and resizes the vector elements accordingly.


//arr.erase(unique(arr.begin(),arr.end()),arr.end()) – This erases the duplicate occurrences in sorted vector in a single line.


//5. distance(first_iterator,desired_position) – It returns the distance of desired position from the first iterator.
//This function  is very useful while finding the index. 

// 6.count(first_iterator, last_iterator,x) – To count the occurrences of x in vector.


//7. find(first_iterator, last_iterator, x) – Returns an iterator to the first occurence of x in vector and points
// to last address of vector ((name_of_vector).end()) if element is not present in vector.


//sort(first_iterator, last_iterator) – To sort the given vector.


//reverse(first_iterator, last_iterator) – To reverse a vector.


//*max_element (first_iterator, last_iterator) – To find the maximum element of a vector.


//*min_element (first_iterator, last_iterator) – To find the minimum element of a vector.


//accumulate(first_iterator, last_iterator, initial value of sum) – Does the summation of vector elements
 

// C++ program to demonstrate working of erase()
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
 
    cout << "Vector is :";
    for (int i=0; i<6; i++)
        cout << vect[i]<<" ";
 
    // Delete second element of vector
    vect.erase(vect.begin()+1);
 
    cout << "\nVector after erasing the element: ";
    for (int i=0; i<vect.size(); i++)
        cout << vect[i] << " ";
 
    // sorting to enable use of unique()
    sort(vect.begin(), vect.end());
 
    cout << "\nVector before removing duplicate "
             " occurrences: ";
    for (int i=0; i<vect.size(); i++)
        cout << vect[i] << " ";
 
    // Deletes the duplicate occurrences
    vect.erase(unique(vect.begin(),vect.end()),vect.end());
 
    cout << "\nVector after deleting duplicates: ";
    for (int i=0; i< vect.size(); i++)
        cout << vect[i] << " ";
 
    return 0;
}
//Output
//Vector is :5 10 15 20 20 23 
//Vector after erasing the element: 5 15 20 20 23 
//Vector before removing duplicate  occurrences: 5 15 20 20 23 
//Vector after deleting duplicates: 5 15 20 23 42 45 

//...................





// C++ program to demonstrate working of distance()
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
 
    // Return distance of first to maximum element
    cout << "Distance between first to max element: ";
    cout << distance(vect.begin(),
                     max_element(vect.begin(), vect.end()));
    return 0;
}



///................................................................





// C++ program to demonstrate working of count()
// and find()
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
 
int main()
{
    // Initializing vector with array values
    int arr[] = {10, 20, 5, 23 ,42, 20, 15};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> vect(arr, arr+n);
 
    cout << "Occurrences of 20 in vector : ";
 
    // Counts the occurrences of 20 from 1st to
    // last element
    cout << count(vect.begin(), vect.end(), 20);
 
    // find() returns iterator to last address if
    // element not present
    find(vect.begin(), vect.end(),5) != vect.end()?
                         cout << "\nElement found":
                     cout << "\nElement not found";
 
    return 0;


///........................



// A C++ program to demonstrate working of sort(),