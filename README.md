# 🛒 Roblox Shop & Lucky Spin Core System

Hệ thống quản lý tài khoản và doanh thu vòng quay Lucky Spin được viết hoàn toàn bằng C++. Project tập trung vào việc tối ưu hóa hiệu năng, xử lý chuỗi bộ nhớ thấp và quản lý Heap Memory an toàn tuyệt đối.

## ✨ Tính năng nổi bật (Core Features)
- **Trim C-String Tốc Độ Cao:** Tự động dọn dẹp khoảng trắng rác (`\space`) từ log chat Discord của khách hàng. Thao tác dịch bit trực tiếp trên RAM, độ phức tạp $O(N)$, không tốn thêm bộ nhớ đệm.
- **Tính Tổng Doanh Thu Siêu Tốc:** Áp dụng thuật toán Đệ quy đuôi (Tail Recursion) ngăn chặn triệt để tình trạng tràn bộ nhớ (Stack Overflow) khi lượng giao dịch tăng vọt.
- **Quản Lý Kho Acc VIP (Matrix Allocation):** Cấp phát và thu hồi ma trận động 2 chiều chứa ID Account. 
- **Thuật Toán Tìm Số Nguyên Tố Chuyên Sâu:** Sử dụng bước nhảy `i += 6` đạt độ phức tạp $O(\sqrt{N})$, tốc độ quét nhanh hơn gấp nhiều lần so với thuật toán chia thông thường để lọc ra các Acc VIP.
- **Zero Memory Leak:** Quản lý trọn vẹn vòng đời của con trỏ, thu hồi mảng 2 chiều và chốt chặn `nullptr` đạt chuẩn an toàn hệ thống.

## 🛠️ Công nghệ sử dụng
- **Ngôn ngữ:** C++ (Standard)
- **Thư viện:** `<iostream>`, `<cstring>`, `<cmath>`, `<cctype>`
- **Kỹ thuật:** Pointers, Dynamic Array Allocation, Memory Management, Tail Recursion.

## 🚀 Hướng dẫn chạy chương trình (How to run)
1. Clone repository này về máy:
   ```bash
   git clone [https://github.com/your-username/Roblox-Shop-Core-System.git](https://github.com/your-username/Roblox-Shop-Core-System.git)
