#include <stdio.h>
#include<string.h>
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
//函数的链式访问================2025.8.6===================================================================================================
// // int main(){
// //     printf("%d ",printf("%d ",printf("%d ",79)));
// // }
//函数的定义
// // int main(){
// //     int a =sum(10,20);
// //     printf("%d",a);
// // }
// // int sum(int x,int y){
// //     return x+y
// // }//头文件声明，源文件写函数，可包装为dll静态库。
//函数的嵌套（将1234整形数拆为1 2 3 4进行输出）
// // int main(){
// //     char arr[20]={0};
// //     sprintf(arr,"%d",1234);
// //     printf("%c %c %c %c",arr[0],arr[1],arr[2],arr[3]);
// // }
// // void print(int x){
// //     if(x>9){
// //         print(x/10);
// //     }
// //     printf("%d ",x%10);
// // }
// // int main(){
// //     print(1234);
// //     return 0;
// // }//多练--现在能看懂，但没思路如何想到这种解决办法
//函数的嵌套----计算字符串的长度
// // int my_strlen(char* str){
// //     if(*str!='\0'){
// //         return 1+my_strlen(str+1);
// //     }
// //     else{
// //         return 0;
// //     }
// // }
// // int main(){
// //     int a =my_strlen("strrr");
// //     printf("%d",a);
// //     return 0;
// // }
//+++++++++++++++++++++++++++++++++++++++++++++++++++2025.8.7++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//练习1：自己的想法：n的阶乘由函数嵌套实现(神似马尔科夫链)
// // mut(int n){
// //     if(n!=1){
// //         return n*mut(n-1);
// //     }
// //     else{
// //         return 1;
// //     }
// // }
// // int main(){
// //     int a = mut(3);
// //     printf("%d",a);
// //     return 0;
// // }
//补充：n的阶乘的循环实现
// // int main(){
// //     int n = 3;
// //     int ret=1;
// //     for(int i=1;i<=n;i++){
// //         ret=ret*i;
// //     }
// //     printf("%d",ret);
// // }//思想：产生1-n的数字，然后全部乘起来-->找一个变量存起来
//练习2：求第n个斐波那契数列的值
// // int fib(int n){
// //     if(n<=2){
// //         return 1;
// //     }
// //     else{
// //         return fib(n-1)+fib(n-2);
// //     }
// // }
// // int main(){
// //     int a =fib(6);
// //     printf("%d",a);
// // }//成功实现！----数学知识与编程的第一次碰撞，递归的思想
//BUT 该方法效率极其低下，当n=50时，几乎算不出来
//此时考虑迭代，而非递归
// // int fib(int n){
// //     int a=1;
// //     int b=1;
// //     int c=0;
// //     if(n<=2){
// //         return 1;
// //     }
// //     while(n>=3){
// //         c=a+b;
// //         a=b;
// //         b=c;
// //         n--;
// //     }
// //     return c;
// // }
// // int main(){
// //     printf("%d",fib(4));
// // }
//练习3------------if（判断）判断中的语句会执行
// // int main(){
// //     for(int i=0;i<=10;i++){
// //         if(i=5){
// //             printf("%d",i);//结果为死循环(VScode无法执行)
// //         }
// //     }
// // }
//switch语句辨析：default语句可以放在任何位置，不一定要放在case语句后，当所有case语句不执行时就执行default语句
// // int main(){
// //     int b=0;
// //     switch(1){
// //         case 1:b=30;
// //         case 2:b=20;
// //         default:b=1;
// //         case 3:b=10;
// //     }//case无break，直接滑到底或者滑到break
// //     printf("%d",b);
// // }
///练习4：求两个数的最大公约数--辗转相除法
// // int main(){
// //     int a=0; int b=0;
// //     scanf("%d %d",&a,&b);
// //     int c=a%b;
// //     while(c!=0){
// //         a=b;
// //         b=c;
// //         c=a%b;
// //     }
// //     printf("%d",b);
// // }
//练习5：计算1-100数字中出现多少个9
// // int main(){
// //     int count=0;
// //     for(int i=1;i<=100;i++){
// //         if(i%10==9){//个位是九(*)
// //             count++;
// //         }
// //         if(i/10==9){//十位是九(*)
// //             count++;
// //         }
// //     }
// //     printf("%d",count);
// //     return 0;
// // }
//练习6：计算1/1 - 1/2 + 1/3.......-1/100
// // // int main(){
// // //     double ret=0.0;
// // //     for(int i =1;i<=100;i++){
// // //         if(i%2==1){
// // //             ret = ret + 1.0/i;//(注意！！！！！)----除法分为整数除法和浮点数除法
// // //         }
// // //         else{
// // //             ret = ret - (1.0/i);
// // //         }
// // //     }
// // //     printf("%f",ret);
// // //     return 0;
// // // }
//练习7：求十个整数中的最大值
// // int main(){
// //     int arr[10]={3,3,4,56,245,2345,23,234,56,756};
// //     int max=arr[0];
// //     for(int i=1;i<10;i++){
// //         if(max<arr[i]){
// //             max=arr[i];
// //         }
// //     }
// //     printf("%d",max);
// // }
//练习8：在屏幕上输出九九乘法表
// // int main(){
// //     for(int i =1;i<=9;i++){
// //         for(int j=1;j<=i;j++){
// //             printf("%d×%d=%-2d ",j,i,i*j);//未加%2d时打印出来没有对齐，%2d很聪明（%2d-->在数字左边加空格/////%-2d-->在数字右边加空格）
// //         }
// //         printf("\n");
// //     }
// // }
//逗号表达式：（a,b,c,d）最终结果为d   //////
// // int main(){
// //     int a=1;int b=2;int c=3;
// //     int d =(a=a+3,b+2,c=a);
// //     printf("%d",d);
// //     return 0;
// // }
//+++++++++++++++++++++++++++++++++++++++++++++++++2025.8.8++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//=========数组==========
//变长数组-->C99支持
// // int main(){
// //     int a =10;
// //     int arr[a];

// // }
//现在我对c语言数组的理解：创建+访问
// // void fun(int* px){
// //     printf("%d\n",*px);
// //     px=px+1;
// //     printf("%d\n",*px);
// // }
// // int main(){
// //     int arr[10]={1,2,3,4,5,6,7,8,9,10};
// //     fun(arr);
// // }
//二维数组
// // int main(){
// //     int arr[3][4]={{4,3,2,1},{6,7,8,9},{2,9,8,7}};
// //     for(int i=0;i<3;i++){
// //         for(int j=0;j<4;j++){
// //             scanf("%d",&arr[i][j]);
// //         }
// //     }
// //     for(int i=0;i<3;i++){
// //         for(int j=0;j<4;j++){
// //             printf("%d ",arr[i][j]);
// //         }
// //         printf("\n");
// //     }
// // }//二维数组是一维数组的数组。定义时必须有列
//冒泡排序
// // void Bubble_list(int arr[],int sz){
// //     for(int j=0;j<sz-1;j++){
// //         for(int i=0;i<sz-1-j;i++){
// //             if(arr[i]>arr[i+1]){
// //                 int temp=arr[i];
// //                 arr[i]=arr[i+1];
// //                 arr[i+1]=temp;
// //             }
// //         }
// // }
// // }
// // int main(){
// //     int arr[12]={3,2,7,9,5,24,93,1,42,5,23,45};
// //     Bubble_list(arr,12);
// //     for(int i=0;i<12;i++){
// //         printf("%d ",arr[i]);
// //     }
// //     return 0;
// // }
//+++++++++++++++++++++++++++++++++++++++++++++++++++++2025.8.9+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//数组名：约等于首元素的地址
//      两个例外{1.sizeof（）括号内部的数组名指的是整个数组//2.&数组名【数组名取地址】代表整个数组}
// // int main(){
// //     int arr[]={1,2,3,4,5,6};
// //     printf("%p\n",arr);
// //     printf("%p\n",&arr);
// //     printf("%p\n",arr+1);
// //     printf("%p\n",&arr+1);
//////////printf("%p\n",arr[0]);
// // }
//二位数组数组名【二维数组是一维数组的数组】--<>二维数组数组名为第一个元素的地址（第一个元素为第一行整个数组）
// // int main(){
// //     int arr[3][4]={0};
// //     printf("%d\n",sizeof(arr));//整个二维数组大小
// //     printf("%d\n",sizeof(arr[0]));//第一行数组大小
// //     printf("%p\n",arr);
// //     printf("%p\n",arr+1);//二维数组数组名为第一个元素的地址（第一个元素为第一行数组）
// // }
//打印一个整数的每一位
// // void print(int n)
// // {
// //     if(n>9)
// //     {
// //         print(n/10);
// //     }
// //     printf("%d ",n%10);
// // }
// // int main(){
// //     print(1239);
// // }
//字符串反向排列
// // void reverse_str(char arr[],int sz)
// // {
// //     for(int i=0;i<sz-1-i;i++)
// //     {
// //         char n=0;
// //         n=arr[i];
// //         arr[i]=arr[sz-1-i];
// //         arr[sz-1-i]=n;
// //     }
// // }
// // int main()
// // {
// //     char arr[5]="hello";
// //     int sz=sizeof(arr)/sizeof(arr[0]);
// //     reverse_str(arr,sz);
// //     for(int i=0;i<5;i++)
// //     {
// //         printf("%c",arr[i]);        
// //     }
// // }
// // void Reverse_string(char *arr)
// // {
// //     int sz=strlen(arr);
// //     char tem =arr[0];
// //     arr[0]=arr[sz-1];
// //     arr[sz-1]='\0';
// //     if(sz>2)
// //     {
// //         Reverse_string(arr+1);
// //     }
// //     arr[sz-1]=tem;
// // }
// // int main()
// // {
// //     char arr[]="hello";
// //     Reverse_string(arr);
// //     printf("%s",arr);
// // }//递归实现（逆序？）
//实现strlen函数
// // int my_strlen(char*arr)
// // {
// //     int count=0;
// //     for(int i=0;arr[i]!='\0';i++)
// //     {
// //         count++;
// //     }
// //     return count;
// // }
// // int main()
// // {
// //     printf("%d",my_strlen("arr"));
// // }
//递归实现strlen函数
// // int my_strlen(char*arr){
// //     if(*arr!='\0')
// //     {
// //         return 1+my_strlen(arr+1);
// //     }
// //     else
// //     {
// //         return 0;
// //     }

// // }
// // int main()
// // {
// //     printf("%d",my_strlen("afhba"));
// // }
//递归实现一个整型每一位数字相加
// // int digitsum(int x)
// // {
// //     if(x>9)
// //     {
// //         return x%10 + digitsum(x/10);
// //     }
// //     else
// //     {
// //         return x;
// //     }
// // }
// // int main()
// // {
// //     printf("%d",digitsum(1234));
// // }
//求n的k次方 递归实现
// // double mut_n(int n,int k)
// // {
// //     if(k>0)
// //     {
// //         return n*mut_n(n,k-1);
// //     }
// //     else if(k==0)
// //     {
// //         return 1;
// //     }
// //     else
// //     {
// //         return 1.0/mut_n(n,-k);
// //     }
// // }
// // int main()
// // {
// //     printf("%f",mut_n(3,-1));
// // }