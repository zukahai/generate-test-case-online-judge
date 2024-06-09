Hướng dẫn sử dụng trình sinh test theo format Themis của TLEOJ.

Tính năng mới: hàm log_rand (xem mục 5)

Bước 1: Giải nén file .zip của thư mục chứa file này. Nếu bạn đã thực hiện bước này thì có thể bỏ qua.

Bước 2: Mở các file RUNME.cpp, generator.h và solution.cpp bằng một IDE bất kỳ (khuyên dùng: CodeBlocks).

Bước 3: File solution.cpp là nơi để bạn ghi lời giải của bài toán. Lời giải cần nhập dữ liệu từ file có tên input.txt và xuất dữ liệu ra một file có tên output.txt. Nếu trong thư mục không bao gồm hai file này, các bạn có thể thử tạo hai file như thế để chạy thử.

Bước 4: File RUNME.cpp là nơi để bạn tùy chỉnh một số thông số cho bộ test của mình. Chỉnh sửa số lượng test trong bộ test ở dòng 7 (int testnum = ...;), và chỉnh sửa mã bài ở dòng 8 (string prob_name = "...";).

Bước 5: File generator.h là nơi để bạn viết trình sinh test. Bạn cần viết một hàm có dạng như sau:

	void gen (int iTest, int testnum, string target_file)

trong đó: - iTest là số thứ tự của test hiện tại
	  - testnum là số lượng test của bộ test
	  - target_file là tên file đầu ra của hàm

Nói cho dễ hiểu, hàm của bạn cần phải in ra file có tên là giá trị của biến target_file input của một test có số thứ tự là giá trị của biến iTest và số lượng testcase của bộ test là giá trị của biến testnum.

Các hàm được hỗ trợ bao gồm:
	Rnd(): trả về một số ngẫu nhiên (long long)
	Rand(l, h): trả về một số trong đoạn [l, h] (long long)
	bit91(): trả về True hoặc False
	az(): trả về một ký tự Latin thường
	AZ(): trả về một ký tự Latin hoa
	num(): trả về một ký tự số
	ShuffleArray(arr, n): hoán vị n phần tử đầu tiên của vector arr
	bignum(l): trả về một số tự nhiên lớn có l chữ số, có thể chứa chữ số 0 ở đầu
	tree(ver): trả về danh sách cạnh của một cây có ver đỉnh dưới dạng vector<pair<int, int>>
	graph(ver, edge): trả về danh sách cạnh của một đồ thị có ver đỉnh và edge cạnh
	connected_graph(ver, edge): trả về danh sách cạnh của một đồ thị liên thông có ver đỉnh và edge cạnh
	log_rand(n): trả về một số ngẫu nhiên từ 1 đến n, những số nhỏ sẽ có xác suất trả về cao hơn

Bước 6: Chạy file RUNME.cpp và tận hưởng thành quả.