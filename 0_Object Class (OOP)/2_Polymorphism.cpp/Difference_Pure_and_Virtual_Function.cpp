
// Difference between Virtual Function(hàm ảo) and Pure Virtual Function(hàm thuần ảo) in Abstraction OOP C++

//!  Virtual Function:
    + A virtual function is a member function in a base class that can be redefined in a derived class.
    
    + The classes which are containing virtual functions are not abstract classes(lớp trừu tượng).

    + In case of a virtual function, definition of a function is provided in the base class.

    + The base class that contains a virtual function can be instantiated(được khởi tạo).

    + All the derived classes may or may not redefine(xác định lại) the virtual function.


//! Pure Virtual Function:

    + A pure virtual function is a member function in a base class whose declaration is provided in 
    a base class and implemented in a derived class. 

    + The classes which are containing pure virtual function are the abstract classes(lớp trừu tượng).

    + In case of a pure virtual function, definition of a function is not provided in the base class.

    + The base class that contains a pure virtual function becomes an abstract class, and that cannot be instantiated(không thể được khởi tạo).

    + All the derived classes must define(xác định) the pure virtual function.