
Lý thuyết: Nhập String trong C++

**** khai báo string và xuất string không có khoảng trắng trong C

    // Nhập một string
    +   string str;
        cin >> str;
        cout << str;

    // Nhập nhiều string
    +   string str, str1, str2;
        cin >> str >> str1 >> str2;
        cout << str << str1 << str2;




**** Khai báo string và xuất string có khoảng trắng

    +   Hàm getline là một hàm thành viên trong class std:string, có tác dụng nhập toàn bộ một string từ bàn phím vào chương trình C++. 
        Hàm getline sẽ nhận và lưu trữ toàn bộ string nhập vào cho tới khi tìm thấy ký tự phân cách chỉ định hoặc là ký tự xuống dòng \n.


    + Syntax: Cú pháp của hàm length trong C++ như sau:

        std::getline(std::cin, str, delimiter )

        Trong đó:
        - std::cin để chỉ định stream nhận dữ liệu, giúp chúng ta có thể nhận đầu vào tiêu chuẩn từ bàn phím.
        - str là tên biến string sẽ lưu string nhập vào.
        - delimiter là ký tự phân tách sử dụng để tách string nhập vào. Nếu delimiter được lược bỏ thì sử dụng giá trị 
          mặc định là ký tự xuống dòng.








