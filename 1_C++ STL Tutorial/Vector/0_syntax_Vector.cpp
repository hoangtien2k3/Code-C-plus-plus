
/*
    *   A vector is a sequence container class that implements dynamic array, means size automatically changes when appending elements. 
        A vector stores the elements in contiguous memory locations and allocates the memory as needed at run time.

    * Difference between vector and array: 
        An array follows static approach, means its size cannot be changed during run time while vector implements dynamic array means 
        it automatically resizes itself when appending elements.

    ! Syntax Vector C++:
            vector<object_type> v;  

            vector<object_type> v(n); // vector with n elements

            vector<object_type> v(n, value) // vector n elements with value baland is value. 


    ! C++ Vector Functions: // Function used to Vector
        Function	            Description
        at()	                It provides a reference to an element.
        back()	                It gives a reference to the last element.
        front()	                It gives a reference to the first element.
        swap()	                It exchanges the elements between two vectors.
        push_back()	            It adds a new element at the end.
        pop_back()	            It removes a last element from the vector.
        empty()	                It determines whether the vector is empty or not.
        insert()	            It inserts new element at the specified position.
        erase()	                It deletes the specified element.
        resize()	            It modifies the size of the vector.
        clear()	                It removes all the elements from the vector.
        size()	                It determines a number of elements in the vector.
        capacity()	            It determines the current capacity of the vector.
        assign()	            It assigns new values to the vector.
        operator=()	            It assigns new values to the vector container.
        operator[]()	        It access a specified element.
        end()	                It refers to the past-lats-element in the vector.
        emplace()	            It inserts a new element just before the position pos.
        emplace_back()	        It inserts a new element at the end.
        rend()	                It points the element preceding the first element of the vector.
        rbegin()	            It points the last element of the vector.
        begin()	                It points the first element of the vector.
        max_size()	            It determines the maximum size that vector can hold.
        cend()	                It refers to the past-last-element in the vector.
        cbegin()	            It refers to the first element of the vector.
        crbegin()	            It refers to the last character of the vector.
        crend()	                It refers to the element preceding the first element of the vector.
        data()	                It writes the data of the vector into an array.
        shrink_to_fit()	        It reduces the capacity and makes it equal to the size of the vector.

*/

/*
    Ch??ng ta c?? 3 ph????ng ph??p duy???t vector trong C++ nh?? sau:
        + S??? d???ng v??ng l???p v?? index trong C++
        + S??? d???ng v??ng l???p d???a tr??n ph???m vi.
        + S??? d???ng iterator.


    !Syntax: S??? d???ng v??ng l???p v?? index trong C++
        for(int i=0; i<v.size(); i++) {
            cout << v[i] << " ";
        }


    !Syntax: S??? d???ng v??ng l???p d???a tr??n ph???m vi.
        for (auto & x : v) {
            cout << x << " ";
        }
        
            + v : l?? t??n vector
            + x : l?? t??n m???t bi???n d??ng ????? g??n t???ng ph???n t??? ???????c l???y t??? vector
            + auto : l?? ki???u suy lu???n gi??p t??? x??c ?????nh ki???u d??? li???u c???a gi?? tr??? l???y t??? vector


    !Syntax: S??? d???ng iterator.
        ! C1:
        for(vector<int>::iterator itr = v.begin(); itr != v.end(); ++itr) {
            cout << *itr << " ";
        }

        ! C2:
        for(auto itr = v.begin(); itr != v.end(); ++itr) {
            cout << *itr << " ";
        }

            + v l?? t??n vector
            + itr l?? t??n iterator

*/


#include <iostream>
#include <vector>   
using namespace std;

int main()
{
    vector<int> v {1, 2, 3, 4, 5, 6, 7, 8, 9};

    // C1
    for(int i=0; i<v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    
    // C2
    for(int x : v)  {
        cout << x << " ";
    }
    cout << endl;

    // C3
    for(auto & x : v) {
        cout << x << " ";
    }
    cout << endl;

    // C4
    for(auto itr = v.begin(); itr != v.end(); ++itr) {
        cout << *itr << " ";
    }
    cout << endl;

    // C5
    for(vector<int>::iterator itr = v.begin(); itr != v.end(); ++itr) {
        cout << *itr << " ";
    }
    cout << endl;




    return 0;
}


