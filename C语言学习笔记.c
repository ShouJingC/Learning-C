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
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++2025.8.11+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//sizeof 与 strlen
        // // int main()
        // // {
        // //     char arr[]="hello";//字符串应以\0结尾，此处系统会自动添加
        // //     printf("%d\n",sizeof(arr));//sizeof是一个操作符，计算变量/类型的所占内存的大小--输出为6
        // //     printf("%d\n",strlen(arr));//strlen是一个库函数，计算\0之前字符串字符的个数--输出为5
// // }
//交换数组
        // // void exchange_arr(int arr1[],int arr2[],int sz)
        // // {
        // //     for(int i=0;i<sz;i++)
        // //     {
        // //         int temp=0;
        // //         temp=arr1[i];
        // //         arr1[i]=arr2[i];
        // //         arr2[i]=temp;
        // //     }
        // // }
        // // int main()
        // // {
        // //     int arr1[]={1,2,3,4};
        // //     int arr2[]={9,8,7,6};
        // //     exchange_arr(arr1,arr2,4);
        // //     for(int i=0;i<4;i++)
        // //     {
        // //         printf("%d",arr1[i]);
        // //     }
        // // }
//项目：扫雷
//++++++++++++++++++++++++++++++++++++++++++2025.8.12++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//操作符开始
//1.算术操作符：
        // （/）：整形除法和浮点数除法
        // （%）：取余两侧必须是整形
//2.移位操作符：
        //示范：
        // int main(){
        //     // // int a=7;
        //     // // //整形的二进制表达有三种：原码，反码，补码
        //     // //     //7的原码：00000000000000000000000000000111
        //     // //     //7的反码：00000000000000000000000000000111
        //     // //     //7的补码：00000000000000000000000000000111
        //     // //     //(正数的原码，反码，补码相同)
        //     // // //左移操作符
        //     // // int b=a<<1;//补码左移，左边舍弃，右边补0，即：00000000000000000000000000001110--》7*2
        //     // // printf("a=%d\n",a);
        //     // // printf("b=%d",b);
        //     // int a =-7;
        //     // //-7的原码：10000000000000000000000000000111(第一个数字为1时代表符号为负)
        //     // //-7的反码：11111111111111111111111111111000（第一个数不变，其他的数01互换）
        //     // //-7的补码：11111111111111111111111111111001（反码+1）
        //     // int b=a<<1;//此时操作的是补码
        //     // //b的补码：11111111111111111111111111110010
        //     // //b的反码：11111111111111111111111111110001
        //     // //b的原码：10000000000000000000000000001110（即-7*2）
        //     // printf("b=%d",b);
        //     //右移操作符：右边舍弃，左边分情况：（1.算术移位：左边补与符号相同的数字。2.逻辑移位：直接补0）--------大多数编译器为算术移位
        //     //注意：1.移位操作符只能操作整形 2.不能移位一个负数位（错误eg：>>-2）--标准未定义

        // }
//3.位操作符：
        //1.& 按位与 2.|按位或 3.^按位异或
        //1.按位与（&） 对应位置都是1才是1.
        //2.按位或（|） 对应位置有1就是1
        //3.按位与或（^）相同则为0，不同则为1
        //练习一：不用临时变量实现交换两个变量的值
        //练习二：计算一个整数的二进制表达中出现多少个1、
//3.赋值操作符：
        // int main()
        // {
        //     int a=0;//初始化
        //     a=2;//赋值
        //     int b =2;
        //     int c =3;
        //     a=b=c+2;//连续赋值(不建议写)
        //     a+=2;
        //     a*=2;//复合赋值符
        // }
//4.单目操作符：
        //实例1：(~)将整形二进制码全部逆转
                //引申：如何将二进制码单个数字逆转？
                // int main()
                // {
                //         int a = 3;//0011
                //         //将从右往左数第三位的0变为1
                //         a = a|(1<<2);
                //         printf("%d\n",a);
                // }
        //实例2：（++/--）
                //a++先使用，再复制///++a先赋值，再使用
                // int main()
                // {
                //         int a =1;
                        //场景1：
                //         printf("%d\n",a++);//结果为1
                //         printf("%d\n",a);//结果为2
                        //场景2：
                        // // void print(int x)
                        // // {
                        // //         printf("%d",x);
                        // // }
                        // // int main()
                        // // {
                        // //         int a =1;
                        // //         print(a++);//结果为1
                        // // }
                        //场景3：
                                //C语言for循环中++i和i++几乎无区别
                // }
        //实例3：*   解引用操作符
        // // int main()
        // // {
        // //         int a=1;
        // //         int* p=&a;//这里的*不是解引用操作符，而是与int构成一个整体int*表示指针类型
        // //         *p=10;//这里的*是解引用操作符
        // //         printf("%d\n",a);
        // // }
        //实例4： （类型）   强制类型转换
        // int main()
        // {
        //         char a=0;
        //         int b=2;
        //         a=(char)b;
        //         printf("%c\n",a);//无结果？主要是整形和浮点数类型互相转换//还有指针相关转换，现在没学
        // }
//5.逻辑操作符：
        //==  > < >+ .........
        //"abc"=="abcc"这样比的是字符串首字符的地址，要比较内容的话需要使用函数strcmp()
        //&&
        // // int main()
        // // {
        // //         int a=3;
        // //         int b=0;
        // //         int c =a||b;
        // //         int d= a&&b;
        // //         printf("%d\n",c);//结果为1
        // //         printf("%d\n",d);//结果为0
        // // }
        //360笔试题：
                // int main()
                // {
                //         int a=0,b=2,c=3,d=4;
                //         int i=a++&&++b&&c++;
                //         printf("a=%d,b=%d,c=%d,d=%d\n",a,b,c,d);//结果为1234
                // }
        ///结论：逻辑运算从左往右计算，若&&左边存在0，则右边直接不进行计算；同理，若||左边存在1，则右边直接略过。
//6.三目操作符：
        //eg:
        // // int main()
        // // {
        // //         int a=1;
        // //         int b=2;
        // //         int c=(a>b?3:4);
        // //         printf("%d\n",c);
        // // }
//7.逗号表达式：
        // // int main()
        // // {
        // //         int a=1;
        // //         int b=2;
        // //         int c=4;
        // //         int i=(a++,b+=a,b+=a,c+=b);//返回的是最后一个表达式的值，但中途的表达式也会计算并修改变量
        // //         printf("a=%d,b=%d,c=%d,i=%d\n",a,b,c,i);
        // // }
//8.下标引用操作符
// // int main()
// // {
// //         int arr[]={1,2,3,4,5,6,7,8,9};
// //         arr[3]=88;//arr[3]相当于*(arr+3)
// //         3[arr]=99;//3[arr]相当于*(3+arr)
// //         printf("%d\n",arr[3]);
// // }
//9.sizeof操作符：右边为变量时，可以省略括号；为类型时，如int，不能省略括号
//10.函数调用操作符（）
//11.访问结构成员
        //结构指针->结构成员 等价于 (*结构对象).结构成员
        //结构对象.结构成员
//表达式求值开始
//1.隐式类型转换
        //整形提升：
                // int main()
                // {//+++++++整形二进制码在内存中存储时，都是补码
                //         char a =126;//01111110
                //         //整形提升时，其余为全由符号位代替，为00000000000000000000000001111110
                //         char b= 5;//00000101
                //         //整型提升后：00000000000000000000000000000101
                //         char c=a+b;//c的结果为10000011
                //         printf("%d\n",c);//c整形提升后的补码11111111111111111111111110000011
                //         //c的补码10000000000000000000000001111101---》结果为-123
                // }
//练习：
//1.走台阶
        // int step(int n)
        // {
        //         if(n>=3)
        //         {
        //                 return step(n-1) + step(n-2);
        //         }
        //         else
        //         {
        //                 return n;
        //         }
        // }
        // int main()
        // {
        //         int a =step(5);
        //         printf("%d\n",a);
        // }
//删除指定数字
        // // int main()
        // // {
        // //         //int n=0;
        // //         //scanf("%d",&n);
        // //         int arr[]={1,4,3,2,5};
        // //         int sz=sizeof(arr)/sizeof(arr[0]);
        // //         printf("输入你要删除的数字：");
        // //         int input =0;
        // //         scanf("%d",&input);
        // //         int j=0;
        // //         for(int i=0;i<sz;i++)
        // //         {
        // //                 if(arr[i]!=input)
        // //                 {
        // //                         arr[j++]=arr[i];
        // //                 }
        // //         }
        // //         for(int i=0;i<j;i++)
        // //         {
        // //                 printf("%d ",arr[i]);
        // //         }
        // // }
//计算数组最大值与最小值的差值
        // // int main()
        // // {
        // //         int arr[]={2,3,4,5,6,6,1,3,4,6,78};
        // //         int max=arr[0],min=arr[0];
        // //         int sz=sizeof(arr)/sizeof(arr[0]);
        // //         for(int i=0;i<sz;i++)
        // //         {
        // //                 if(arr[i]>max)
        // //                 {
        // //                         max=arr[i];
        // //                 }
        // //                 if(arr[i]<min)
        // //                 {
        // //                         min=arr[i];
        // //                 }
        // //         }
        // //         printf("%d",max-min);
        // // }//刚开始第一感觉是排序，这里属实复杂化了
//判断字符是否为字母
        // // int main()
        // // {
        // //         char ch=0;
        // //         //%c前面加空格表示跳过读取的字符前面的所有空白，同样可以处理\n
        // //         while(scanf(" %c",&ch)==1)//
        // //         {
        // //                 if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
        // //                 {
        // //                         printf("%c是一个字母\n",ch);
        // //                 }
        // //                 else
        // //                 {
        // //                         printf("%c不是一个字母\n",ch);
        // //                 } 
        // //                 //getchar();//处理\n换行                   
        // //         }
        // // }
//五位数的变种水仙花(Lily number)
        // // int main()
        // // {
        // //         for(int i=10000;i<=99999;i++)
        // //         {
        // //                 if(i==(i/10*(i%10)+i/100*(i%100)+i/1000*(i%1000)+i/10000*(i%10000)))
        // //                 {
        // //                         printf("%d ",i);
        // //                 }
        // //         }
        // // }
//指针初级开始：
        //1.指针是什么：指针就是地址，口语中的指针说的是指针变量（用于存放地址）
                        //内存中最小的内存单元占1byte（综合考虑最方便），且每个内存单元都有对应的地址。int类型占4byte，其变量的地址为首个最小单元的地址
                        //一个地址在32位机器上由32位2进制序列组成，共2^32种情况，共2^32bit，即最大支持4GB
                        //同理，64位机器支持的内存大小非常非常大，自行计算
                        //综上：一个指针变量在32位机器中所占大小为32bit（4byte），在64位机器中为64bit（8byte）
        //2，指针类型的意义：
                //补：16进制与2进制的转换：16进制的一位数由四个二进制数表示（F=1111），故两个16进制数所占内存空间为1byte
                //指针对象的类型可以让机器以为这个对象操作的地址是相应的类型。如int* p =&a; 以为p操作的就是int类型
                //指针对象大小都是4/8byte，而其操作的地址对应的值与指针大小的值无关。
                //eg:int* p=&a; 若p+1，对应的地址增加4.同理，若char* p，则p+1的话对应地址就加1
        //3.野指针（指向随机的地址或错误的地址）
                //如何规避野指针：
                        //1.初始化
                        //2.小心指针越界（数组）
                        //3.避免返回局部变量的地址（局部变量销毁后，地址并未消失）
                        //4.指针使用直线检查有效性：if(px!=NULL){}
        //4.指针的运算：
                //1.指针+/- 整数：
                        // // int main()
                        // // {
                        // //         int arr[5]={0};
                        // //         int* p=arr;
                        // //         for(int i=0;i<5;i++)
                        // //         {
                        // //                 *p++=1;//等价于*p=1;p=p+1;
                        // //         }
                        // //         for(int i=0;i<5;i++)
                        // //         {
                        // //                 printf("%d",arr[i]);
                        // //         }
                        // // }
                //2.指针-指针：返回的是两个地址之间元素的个数（需要两个指针指向同一块内存空间才有意义）---地址+地址没什么意义
                        // // int main()
                        // // {
                        // //         int arr[]={1,2,3,4,5,6,7,8,9,0};
                        // //         printf("%d\n",arr[1]-arr[0]);//半开半闭
                        // // }
                //3.指针与指针关系比较
                        //eg:
                        // // int main()
                        // // {
                        // //         int arr[]={1,2,3,4,5};
                        // //         int* px=arr;
                        // //         for(int* py=&arr[5];py>px;)//arr等价于&arr[0](需要取地址)
                        // //         {
                        // //                 py=py-1;
                        // //                 *py=9;
                        // //         }
                        // //         for(int i=0;i<5;i++)
                        // //         {
                        // //                 printf("%d ",arr[i]);
                        // //         }

                        // // }
                //4.指针与数组
                        //arr等价于&arr[0]------arr[i]等价于*(arr+i) 本质：数组名表示首元素地址
                        // // int main()
                        // // {
                        // //         int arr[]={1,2,3,4,5,6,7,8};
                        // //         for(int i=0;i<8;i++)
                        // //         {
                        // //            printf("%p---%p\n",&arr[i],arr+i);//结果相同
                        // //         }
                        // // }
        //5.二级指针：用来存放一级指针变量的地址
                // // int main()
                // // {
                // //         int a=1;
                // //         int* px=&a;//星号表示px是指针变量，int表示指向的对象是int类型
                // //         int** py=&px;//第二个星号表示py是指针变量，int*表示py指向的对象是int*类型的指针变量
                // //         printf("px=%p,py=%p\n",px,py);
                // // 
        //6.指针数组：
                //+用指针数组模拟二维数组
                // // int main()
                // // {
                // //         int arr1[4]={1,2,3,4};
                // //         int arr2[4]={5,6,7,8};
                // //         int arr3[4]={9,9,1,0};
                // //         int* parr[3]={arr1,arr2,arr3};
                // //         printf("%d\n",parr[1][2]);
                // //         return 0;
                // // }
//结构体开始：
//1.结构是一些值的集合，这些值被称为成员变量。结构的每个成员可以是不同类型的变量
//结构体的定义：
        // struct stu
        // {
        //         char name[20];
        //         int age;
        //         int height;
        // }p1;//全局变量p1
        // int main()
        // {
        //         struct stu p2;//定义变量p2
        //         //初始化
        //         struct stu p3={"Chen",18,178};
        //         //访问
        //         printf("%d\n",p3.age);//结构体变量类型用.访问
        //         struct stu* px =&p3;
        //         printf("%d\n",px->age);//指针类型使用->
        //         //小结论：结构体传参时，要传其地址
        // }
        
//练习：统计二进制中1的个数
// // int count(int x)
// // {
// //         int count=0;
// //         for(int i=0;i<32;i++)
// //         {
// //                 if(x&1==1)
// //                 {
// //                         count++;
// //                 }
// //                 else
// //                 {
// //                         x>>1;
// //                 }
// //         }
// //         return count;
// // }
// // int main()
// // {
// //         int a=count(2);
// //         printf("%d\n",a);
// // }
//练习：获取一个数二进制序列的奇数位和偶数位，并打印
// int main()
// {       
//         int num=2;
//         for(int i=31;i>0;i-=2)
//         {
//                 printf("%d",1&(num>>i));
//         }
//         printf("\n");
//         for(int i=30;i>=0;i-=2)
//         {
//                 printf("%d",1&(num>>i));
//         }
//         return 0;
// }
//判断：
// // int i;
// // int main()
// // {
// //         i--;
// //         if(i>sizeof(i))
// //         {
// //                 printf(">\n");
// //         }
// //         if(i<sizeof(i))
// //         {
// //                 printf("<\n");
// //         }
// //         //输出为>
// //         //结论：全局变量和静态区的变量未初始化时，默认为0，局部变量则为随机值；
// //         //sizeof返回的是无符号整数，无符号整数与有符号整数比较时，会将有符号整数转化为无符号整数
// // }
//X型图案----独立完成！！！
// // int main()
// // {
// //         int x =0;
// //         scanf("%d",&x);
// //         int left=1;
// //         int right=x;
// //         for(int i=0;i<x;i++)
// //         {
// //                 for(int j=1;j<=x;j++)
// //                 {
// //                         if(j==left || j==right)
// //                         {
// //                                 printf("*");
// //                         }
// //                         else
// //                         {
// //                                 printf(" ");
// //                         }
// //                 }
// //                 printf("\n");
// //                 left++;
// //                 right--;
// //         }
// //         return 0;
// // }
//调试开始：
        //查看传参数组的值-->监视     arr,number
        //写出好的代码：
//指针练习：
//1.
        // // int main()
        // // {
        // //         int a=0x11223344;
        // //         char* p=(char*)&a;
        // //         *p=0;//改变最低位,从右边开始
        // //         printf("%x\n",a);
        // //         return 0;
        // // }
//2.逆序字符串
        // // void reverse(char* arr)
        // // {
        // //         if(*arr !='\0')
        // //         {
        // //                 reverse(arr+1);
        // //                 printf("%c",*arr);
        // //         }

        // // }
        // // int main()
        // // {
        // //         char arr[10]="abcde";
        // //         reverse(arr);

        // // }
//3.计算2+22+222+2222.....
        // //  int main()
        // //  {
        // //         int a=2;
        // //         int n =5;
        // //         int k=0;
        // //         int sum=0;
        // //         for(int i=0;i<n;i++)
        // //         {
        // //                 k=k*10+a;
        // //                 sum+=k;
        // //         }
        // //         printf("%d\n",sum);
        // //  }
//4.打印0-10000的水仙花数
        // //  int main()
        // //  {
        // //         for(int i=0;i<=10000;i++)
        // //         {
        // //                 int sum=0;
        // //                 int count=0;
        // //                 while(i>0)//计算位数count
        // //                 {
        // //                         count++;
        // //                         i/=10;
        // //                 }
        // //                 while(i>0)//计算sum
        // //                 {
        // //                         int mut=1;
        // //                         for(int j=0;j<count;j++)//使用for实现指数
        // //                         {
        // //                                 mut*=(i%10);
        // //                         }
        // //                         i/=10;
        // //                         sum+=mut;
        // //                 }
        // //                 if(sum==i)//判断是否为水仙花数
        // //                 {
        // //                         printf("%d ",i);
        // //                 }
                  
        // //         }
        // //  }
//5.打印图案
        // // int main()
        // // {
        // //         int left=7,right=7;
        // //         for(int i=1;i<=13;i++)
        // //         {
        // //                 for(int j=1;j<=13;j++)
        // //                 {
        // //                         if(j>=left&&j<=right)
        // //                         {
        // //                                 printf("*");
        // //                         }
        // //                         else
        // //                         {
        // //                                 printf(" ");
        // //                         }
        // //                 }
        // //                 printf("\n");
        // //                 if(i<=6)
        // //                 {
        // //                         left--;
        // //                         right++;
        // //                 }
        // //                 else
        // //                 {
        // //                         left++;
        // //                         right--;
        // //                 }
        // //         }
        // // }
//买汽水问题
// // int main()
// // {
// //         int money=20;
// //         int count_all =0;
// //         int count_null=0;
// //         while(money>0)
// //         {
// //                 if(count_null==2)
// //                 {
// //                         count_null=0;
// //                         money++;
// //                 }
// //                 money--;
// //                 count_all++;
// //                 count_null++;
// //         }
// //         if(count_null==2)
// //         {
// //                 count_all++;
// //         }
// //         printf("%d",count_all);
// // }
//最小公倍数
// // int main()
// // {
// //         int a=0,b=0;
// //         scanf("%d %d",&a,&b);
// //         int max=a>b? a:b;
// //         while(max%a!=0 || max%b!=0)
// //         {
// //                 max++;
// //         }
// //         printf("%d",max);
// // }
//优化：
        // // int main()
        // // {
        // //         int a=0,b=0;
        // //         scanf("%d %d",&a,&b);
        // //         int i=1;
        // //         while(a*i%b)
        // //         {
        // //                 i++;
        // //         }
        // //         printf("%d",a*i);
        // // }
//逆置字符串
        void reverse(char* left,char* right)
        {
                while(left<right)
                {
                        char tem=0;
                        tem =*left;
                        *left =*right;
                        *right=tem;
                        left++;right--;
                }
        }
        int main()
        {
                char arr[101]="I like Beijing.";
                reverse(arr,&arr[14]);
                int i=0;
                int start=0;
                while(*(arr+i)!='\0')
                {
                        if(*(arr+i)==' ')
                        {
                                reverse(arr+start,arr+i-1);
                                start=i+1;
                        }
                        i++;
                }
                reverse(arr+start,arr+i-1);
                printf("%s",arr);
                return 0;
        }