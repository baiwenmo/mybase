#include <iostream>
#include <thread>
#include <stdio.h>
#include <mutex>
#include <queue>
#include <unistd.h>

std::queue<int> line_;
std::mutex mtx;

// bool producer(){
//     for(int i = 1;i < 100; ++i){
//         std::cout<<"us pro"<<std::endl;
//         std::this_thread::sleep_for(std::chrono::milliseconds(100));
//         std::unique_lock<std::mutex> m1(mtx);
//         line_.push(i);
//         std::cout<<"producer ---> "<<line_.size()<<"["<<i<<"]"<<std::endl;
//         m1.unlock();
//     }
// }
// bool consumer(){
//     while(1){
//         std::cout<<"us con"<<std::endl;8
//         std::unique_lock<std::mutex> m2(mtx);
//         if(!line_.empty()){
//             std::cout<<"consumer ===> "<<line_.size()<<"["<<line_.front()<<"]"<<std::endl;
//             line_.pop();
//             m2.unlock();
//             std::this_thread::sleep_for(std::chrono::milliseconds(80));
//         }
//         else{
//             std::this_thread::sleep_for(std::chrono::milliseconds(500));
//         }
        
//     }
// }




int main(){
//     std::thread t1(producer);
//     std::thread t2(consumer);
//     std::thread t3(producer);
//     std::thread t4(producer);
//     std::thread t5(producer);
// while (1)
// {
//     /* code */
// }
int *a = new int[10];
int *b = new int[10];
// int a[10] = {1};
// int b[10] = {1};
for(int i = 10; i > 0 ; i++){
    std::cout << a << " ||| " << b << std::endl;
    std::cout << &a[i] << " ||| " << &b[i] << std::endl;
    std::cout << a[i]  << " ||| " << b[i] << std::endl;
    std::cout << std::endl;
    if(i%160 == 0 || i == 10){
        std::cout << "stop = " << i%160 << std::endl;
    }
}
    
//     std::cout<<"over"<<std::endl;
return 0;
}