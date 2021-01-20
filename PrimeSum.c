/* ****Đề Bài ****
Một bài nâng cao từ bài kiểm tra số nguyên tố:
Cho số nguyên n, hãy tính tổng các số nguyên tố nhỏ hơn hoặc bằng n
Bởi vì tổng các số nguyên tố nhỏ hơn hoặc bằng n có thể rất lớn, nên hãy trả ra kết quả của tổng trên dưới dạng là số dư trong phép chia của tổng trên cho 22082018.
Example

Với n = 2 thì primeSum(n) = 2
Với n = 3 thì primeSum(n) = 5
Đầu vào/Đầu ra:
[Thời gian chạy] 0.5 giây
[Đầu vào] integer n
-10^7 < n < 10^7
[Đầu ra] integer

Gợi ý:
Kiểm tra và tính tổng các số nguyên tố từ 1 tới n có thể tốn nhiều thời gian
Để tăng tốc tìm các số nguyên tố, có thể sử dụng sàng Eratosthenes*/

/* ********Giải Pháp*********
    Sàng Eratosthenes (Ơ-ra-tô-xten): Để tìm các số nguyên tố nhỏ hơn hoặc bằng số tự nhiên N bằng sàng Eratosthenes, ta làm như sau:
Bước 1: Tạo 1 danh sách các số tự nhiên liên tiếp từ 2 đến n: (2, 3, 4,..., n).
Bước 2: Giả sử tất cả các số trong danh sách đều là số nguyên tố. Trong đó, p = 2 là số nguyên tố đầu tiên.
Bước 3: Tất cả các bội số của p: 2p, 3p, 4p,... sẽ bị đánh dấu vì không phải là số nguyên tố.
Bước 4: Tìm các số còn lại trong danh sách mà chưa bị đánh dấu và phải lớn hơn p. Nếu không còn số nào, dừng tìm kiếm.
Ngược lại, gán cho p giá trị bằng số nguyên tố tiếp theo và quay lại bước 3
    Code: Cho A là một mảng boolean. Đánh dấu từ 2->n. A[i] là số nguyên tố => true(1), k phải => false(0)
          Ban đầu đánh dấu tất cả phần tử là true.
          For: i: 2-> sqrt(n)
                if(a[i) true)-> for: j: 2xi -> n, bước nhảy: i=i+j: đấnh dấu tất cả A[j] là false (Bước này đánh dấu tất cả bội của số ngtố đã tìm là false)
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <boolean.h>
int A[1000000000];
void timsnt(int n){
    for(int i=2; i<=n; i++){
        A[i]=1;
    }
    A[0]=0; A[1]=0;
    for(int i=2; i<=sqrt(n); i++){
        if(A[i]){
            for(int j=2*i; i<=n; j+=i){
                A[j]=0;
            }
        }
    }
}
int primeSum(int n)
{
    int mod=22082018;
    timsnt(n);
    int sum=0;
    for(int i=2; i<=n; i++){
        if(A[i]){
            sum = (sum + i % mod) % mod;
        }
    }
    return sum;

}
