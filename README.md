# Hướng dẫn sử dụng trình sinh test case

- **Bước 1**: Giải nén file .zip của thư mục chứa file này. Nếu bạn đã thực hiện bước này thì có thể bỏ qua.

- **Bước 2**: Mở các file ``run.cpp``, `generator.h` và `solution.cpp` bằng một IDE bất kỳ (khuyên dùng: CodeBlocks).

- **Bước 3**: File `solution.cpp` là nơi để bạn ghi lời giải của bài toán. Lời giải cần nhập dữ liệu từ file có tên `input.txt` và xuất dữ liệu ra một file có tên `output.txt`. Nếu trong thư mục không bao gồm hai file này, các bạn có thể thử tạo hai file như thế để chạy thử.

- **Bước 4**: File `run.cpp` là nơi để bạn tùy chỉnh một số thông số cho bộ test của mình. Chỉnh sửa số lượng test trong bộ test ở dòng 7 (int testnum = ...), và chỉnh sửa mã bài ở dòng 8 (string prob_name = "...").

- **Bước 5**: File generator.h là nơi để bạn viết trình sinh test. Bạn cần viết một hàm có dạng như sau:

	```c++

	void gen (int iTest, int testnum, string target_file)
	```

	Trong đó:
		- **iTest** là số thứ tự của test hiện tại
		- **testnum** là số lượng test của bộ test
		- **target_file** là tên file đầu ra của hàm

	Nói cho dễ hiểu, hàm của bạn cần phải in ra file có tên là giá trị của biến `target_file` input của một test có số thứ tự là giá trị của biến iTest và số lượng testcase của bộ test là giá trị của biến testnum.

- Bước 6: Chạy file `run.cpp` và tận hưởng thành quả.

## Các hàm được hỗ trợ bao gồm:

- [**random()**: long long] sinh một số ngẫu nhiên trong đoạn `[0, 10^18]`

- [**random(long long a, long long b)**: long long] sinh một số ngẫu nhiên trong đoạn `[a, b]`