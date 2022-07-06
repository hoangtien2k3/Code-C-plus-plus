

// // Example 2:   insert(iterator, n, val);
// #include<iostream>  
// #include<vector>  
// using namespace std;  
// int main()  
// {  
//     vector<string>  v {"C" , "Tutorials"};

//     v.insert(v.begin() + 1, 2, "C");  
//     for(int i=0; i<v.size(); i++)  
//         cout << v[i] << " ";  

//     return 0;  
// }  


// // Example 3:   insert(iterator, InputIterator first, InputIterator last);  
// #include<iostream>  
// #include<vector>  
// using namespace std;  
// int main()  
// {  
    
//     vector<int> v1 {1,2,3,4,5};  
//     vector<int> v2 {6,7,8,9,10}; 

//     v1.insert(v1.end(), v2.begin(), v2.begin() + 5);  
//     // v1.insert(v1.end(), v2.begin(), v2.end()); 
//     for(int i=0; i<v1.size(); i++)  
//         cout << v1[i] << " ";  


//     return 0;  
// }  

