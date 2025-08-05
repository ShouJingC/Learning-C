#include <stdio.h>
//创建结构体
// struct Stu{
//     char name[20];
//     int age;
//     char major[20];

//};
// void print(struct Stu tes){
//     printf("%s %d %s",tes.name,tes.age,tes.major);
// }
//------------------------初始C语言-----------------------------
//1.分支结构-------------可执行
// // // // int main(){
// // // //     int age = 10;
// // // //     if(age<18){
// // // //         printf("未成年");
// // // //     }
// // // //     else if (age>=18 && age<60)//不可写为"18<=age<60"-->此逻辑为0<60
// // // //     {
// // // //         printf("成年");
// // // //     }//分支语句一旦满足一个条件，则退出选择分支
// // // // }
//——---------------删除注释可执行
// // int main(){
// //     int i = 3;
// //     switch (i)
// //     {
// //     case 0:
// //         break;
// //     case 3:
// //         printf("dui");
// //     default:
// //         break;
// //     }
// // }//-------------------A-------------->switch语句例
//2.循环结构-----------例略（while--break--continue）
// int main(){
//     printf("输入你的密码：");
//     char password[20];
//     scanf("%s",password);
//     while((getchar())!=10){
//         ;
//     }
//     printf("确认Y/N:");
//     if((getchar())==89){
//         printf("yes");
//     }
//     else{
//         printf("no");
//     }
// }
// int main(){
//     int nums[4]={97,98,99,100};
//     int sz = sizeof(nums)/sizeof(int);
//     int i = 0;
//     while(i<sz){
//         printf("%c",nums[i]);
//         i++;
//     }
// }
// int main(){
//     for(int i = 1;i<=10;i++){
//         printf("%d\n",i);
//     }
// }
//计算n的阶乘
// // int main(){
// //     int i = 1;
// //     int ip = 0;
// //     int out =1;
// //     printf("输入数字：");
// //     scanf("%d",&ip);
// //     for(i=1;i<=ip;i++){
// //         out=out*i;
// //     }
// //     printf("%d的阶乘是：%d",ip,out);
// // }
//计算1！+2！+.....+10!
// // // int main(){
// // //     int sum=0;
// // //     for(int i =1;i<=3;i++){//获取1-10
// // //     int out = 1;
// // //         for(int j=1;j<=i;j++){//计算阶乘
// // //             out=out*j;
// // //         }
// // //     sum=sum+out;
// // //     }
// // //     printf("%d",sum);
// // // }
//计算1！+2！....+10！ 法二
// int main(){
//     int out=1;
//     int sum=0;
//     for(int i=1;i<=10;i++){
//         out=out*i;
//         sum=sum+out;
//     }
//     printf("%d",sum);
// }
//顺序数组，二分查找法
// int main(){
//     int arr[10]={1,2,3,4,5,6,7,8,9,10};
//     int left=0;
//     int right=sizeof(arr)/sizeof(int)-1;
//     printf("输入需要查找的数字：");
//     int sc=0;
//     scanf("%d",&sc);
//     for(;left<=right;){
//         int mid = (left+right)/2;
//         if(sc<arr[mid]){
//             right=mid-1;
//         }
//         else if(sc==arr[mid]){
//             printf("找到了，下标是：%d",mid);
//             break;
//         }
//         else{
//             left=mid+1;
//         }
//     }
//     if(left>right){
//         printf("未找到");
//     }
// }
//文字两边显示
// #include <string.h>
// #include<windows.h>
// #include<stdlib.h>
// int main(){
//     char str[20]="nihaohaohoa";
//     char str2[20]="###########";
//     int left=0;
//     int right=strlen(str2)-1;
//     for(;left<=right;left++,right--){
//         str2[left]=str[left];
//         str2[right]=str[right];
//         printf("%s\n",str2);
//         Sleep(1000);
//         system("cls");
//     }
// }
//猜数字游戏
// // #include<stdio.h>
// // #include<Windows.h>
// // int main(){
// //     for(;;){
// //         printf("你要猜数字吗？");
// //         int input=0;
// //         scanf("%d",&input);
// //         if(input==0){
// //             printf("GoodBye");
// //             break;
// //         }
// //         int random = 0;
// //         srand((unsigned int)time(NULL));
// //         random=rand()%100+1;
// //         printf("随机数是：%d\n",random);
// //         for(;;){
// //             printf("输入数字（1-100）:");
// //             int guess =0;
// //             scanf("%d",&guess);
// //             if(guess==random){
// //                 printf("你猜对了\n");
// //                 break;
// //             }
// //             else{
// //                 printf("你猜错了\n");
// //         }
// //         }

// //     }

// // }
//函数--比较两者最大值
// // int max(int x,int y){
// //     int max=0;
// //     if(x>=y){
// //         max=x;
// //     }
// //     else{
// //         max=y;
// //     }
// //     return max;
// // }
// // int main(){
// //     printf("%d",max(10,10));
// // }
//函数----交换两个变量的值
// // void swap(int*px,int*py){
// //     int z=0;
// //     z=*px;
// //     *px=*py;
// //     *py=z;
// // }
// // int main(){
// //     int a=1;
// //     int b=2;
// //     swap(&a,&b);
// //     printf("a:%d;b:%d",a,b);
// // }
//判断一个数是否为质数
// // #include<math.h>
// // void pz(int x){
// //     int ti=0;
// //     for(int i=2;i<sqrt(x);i++){//优化1（取平方）--数学思维
// //         if(x%i==0){//再优化（先判断奇数偶数）
// //             ti++;
// //             break;
// //         }
// //     }
// //     if(ti==1){
// //         printf("这个数字是质数");
// //     }
// //     else{
// //         printf("这个数不是质数");
// //     }
// // }
// // int main(){
// //     pz(8);
// // }
//判断闰年
// // int main(){
// //     //四年一闰，百年不闰，四百年再闰
// //     //打印1000-2000之间的闰年
// //     int count=0;
// //     for(int i=1000;i<=2000;i++){
// //         if((i%4==0 && i%100!=0)|| i%400==0){
// //             printf("%d ",i);
// //             count++;
// //         }
// //     }
// //     printf("\n%d",count);
// // }
//整形有序数列的二分查找的函数实现
// // int arr_find(int arrr[],int x,int sz){
// //     int left =0;
// //     int right=sz-1;
// //     int mid=left+(right-left)/2;
// //     for(;;){
// //         if(arrr[mid]==x){
// //             return mid;
// //         }
// //         else if(arrr[mid]<x){
// //             left=mid+1;

// //         }
// //         else if(arrr[mid]>x){
// //             right=mid-1;
// //         }
// //         else{
// //             return -1;
// //         }
// //         mid=left+(right-left)/2;
// //     }
// // }
// // int main(){
// //     int arr[10]={1,2,3,4,5,6,7,8,9,10};
// //     int a =arr_find(arr,3,10);
// //     printf("%d",a);
// // }