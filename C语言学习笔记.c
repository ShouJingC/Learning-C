#include <stdio.h>
//�����ṹ��
// struct Stu{
//     char name[20];
//     int age;
//     char major[20];

//};
// void print(struct Stu tes){
//     printf("%s %d %s",tes.name,tes.age,tes.major);
// }
//------------------------��ʼC����-----------------------------
//1.��֧�ṹ-------------��ִ��
// // // // int main(){
// // // //     int age = 10;
// // // //     if(age<18){
// // // //         printf("δ����");
// // // //     }
// // // //     else if (age>=18 && age<60)//����дΪ"18<=age<60"-->���߼�Ϊ0<60
// // // //     {
// // // //         printf("����");
// // // //     }//��֧���һ������һ�����������˳�ѡ���֧
// // // // }
//����---------------ɾ��ע�Ϳ�ִ��
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
// // }//-------------------A-------------->switch�����
//2.ѭ���ṹ-----------���ԣ�while--break--continue��
// int main(){
//     printf("����������룺");
//     char password[20];
//     scanf("%s",password);
//     while((getchar())!=10){
//         ;
//     }
//     printf("ȷ��Y/N:");
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
//����n�Ľ׳�
// // int main(){
// //     int i = 1;
// //     int ip = 0;
// //     int out =1;
// //     printf("�������֣�");
// //     scanf("%d",&ip);
// //     for(i=1;i<=ip;i++){
// //         out=out*i;
// //     }
// //     printf("%d�Ľ׳��ǣ�%d",ip,out);
// // }
//����1��+2��+.....+10!
// // // int main(){
// // //     int sum=0;
// // //     for(int i =1;i<=3;i++){//��ȡ1-10
// // //     int out = 1;
// // //         for(int j=1;j<=i;j++){//����׳�
// // //             out=out*j;
// // //         }
// // //     sum=sum+out;
// // //     }
// // //     printf("%d",sum);
// // // }
//����1��+2��....+10�� ����
// int main(){
//     int out=1;
//     int sum=0;
//     for(int i=1;i<=10;i++){
//         out=out*i;
//         sum=sum+out;
//     }
//     printf("%d",sum);
// }
//˳�����飬���ֲ��ҷ�
// int main(){
//     int arr[10]={1,2,3,4,5,6,7,8,9,10};
//     int left=0;
//     int right=sizeof(arr)/sizeof(int)-1;
//     printf("������Ҫ���ҵ����֣�");
//     int sc=0;
//     scanf("%d",&sc);
//     for(;left<=right;){
//         int mid = (left+right)/2;
//         if(sc<arr[mid]){
//             right=mid-1;
//         }
//         else if(sc==arr[mid]){
//             printf("�ҵ��ˣ��±��ǣ�%d",mid);
//             break;
//         }
//         else{
//             left=mid+1;
//         }
//     }
//     if(left>right){
//         printf("δ�ҵ�");
//     }
// }
//����������ʾ
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
//��������Ϸ
// // #include<stdio.h>
// // #include<Windows.h>
// // int main(){
// //     for(;;){
// //         printf("��Ҫ��������");
// //         int input=0;
// //         scanf("%d",&input);
// //         if(input==0){
// //             printf("GoodBye");
// //             break;
// //         }
// //         int random = 0;
// //         srand((unsigned int)time(NULL));
// //         random=rand()%100+1;
// //         printf("������ǣ�%d\n",random);
// //         for(;;){
// //             printf("�������֣�1-100��:");
// //             int guess =0;
// //             scanf("%d",&guess);
// //             if(guess==random){
// //                 printf("��¶���\n");
// //                 break;
// //             }
// //             else{
// //                 printf("��´���\n");
// //         }
// //         }

// //     }

// // }
//����--�Ƚ��������ֵ
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
//����----��������������ֵ
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
//�ж�һ�����Ƿ�Ϊ����
// // #include<math.h>
// // void pz(int x){
// //     int ti=0;
// //     for(int i=2;i<sqrt(x);i++){//�Ż�1��ȡƽ����--��ѧ˼ά
// //         if(x%i==0){//���Ż������ж�����ż����
// //             ti++;
// //             break;
// //         }
// //     }
// //     if(ti==1){
// //         printf("�������������");
// //     }
// //     else{
// //         printf("�������������");
// //     }
// // }
// // int main(){
// //     pz(8);
// // }
//�ж�����
// // int main(){
// //     //����һ�򣬰��겻���İ�������
// //     //��ӡ1000-2000֮�������
// //     int count=0;
// //     for(int i=1000;i<=2000;i++){
// //         if((i%4==0 && i%100!=0)|| i%400==0){
// //             printf("%d ",i);
// //             count++;
// //         }
// //     }
// //     printf("\n%d",count);
// // }
//�����������еĶ��ֲ��ҵĺ���ʵ��
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
//��������ʽ����================2025.8.6===================================================================================================
// // int main(){
// //     printf("%d ",printf("%d ",printf("%d ",79)));
// // }
//�����Ķ���
// // int main(){
// //     int a =sum(10,20);
// //     printf("%d",a);
// // }
// // int sum(int x,int y){
// //     return x+y
// // }//ͷ�ļ�������Դ�ļ�д�������ɰ�װΪdll��̬�⡣
//������Ƕ�ף���1234��������Ϊ1 2 3 4���������
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
// // }//����--�����ܿ�������û˼·����뵽���ֽ���취
//������Ƕ��----�����ַ����ĳ���
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
//��ϰ1���Լ����뷨��n�Ľ׳��ɺ���Ƕ��ʵ��(��������Ʒ���)
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
//���䣺n�Ľ׳˵�ѭ��ʵ��
// // int main(){
// //     int n = 3;
// //     int ret=1;
// //     for(int i=1;i<=n;i++){
// //         ret=ret*i;
// //     }
// //     printf("%d",ret);
// // }//˼�룺����1-n�����֣�Ȼ��ȫ��������-->��һ������������
//��ϰ2�����n��쳲��������е�ֵ
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
// // }//�ɹ�ʵ�֣�----��ѧ֪ʶ���̵ĵ�һ����ײ���ݹ��˼��
//BUT �÷���Ч�ʼ�����£���n=50ʱ�������㲻����
//��ʱ���ǵ��������ǵݹ�
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
//��ϰ3------------if���жϣ��ж��е�����ִ��
// // int main(){
// //     for(int i=0;i<=10;i++){
// //         if(i=5){
// //             printf("%d",i);//���Ϊ��ѭ��(VScode�޷�ִ��)
// //         }
// //     }
// // }
//switch��������default�����Է����κ�λ�ã���һ��Ҫ����case���󣬵�����case��䲻ִ��ʱ��ִ��default���
// // int main(){
// //     int b=0;
// //     switch(1){
// //         case 1:b=30;
// //         case 2:b=20;
// //         default:b=1;
// //         case 3:b=10;
// //     }//case��break��ֱ�ӻ����׻��߻���break
// //     printf("%d",b);
// // }
///��ϰ4���������������Լ��--շת�����
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
//��ϰ5������1-100�����г��ֶ��ٸ�9
// // int main(){
// //     int count=0;
// //     for(int i=1;i<=100;i++){
// //         if(i%10==9){//��λ�Ǿ�(*)
// //             count++;
// //         }
// //         if(i/10==9){//ʮλ�Ǿ�(*)
// //             count++;
// //         }
// //     }
// //     printf("%d",count);
// //     return 0;
// // }
//��ϰ6������1/1 - 1/2 + 1/3.......-1/100
// // // int main(){
// // //     double ret=0.0;
// // //     for(int i =1;i<=100;i++){
// // //         if(i%2==1){
// // //             ret = ret + 1.0/i;//(ע�⣡��������)----������Ϊ���������͸���������
// // //         }
// // //         else{
// // //             ret = ret - (1.0/i);
// // //         }
// // //     }
// // //     printf("%f",ret);
// // //     return 0;
// // // }
//��ϰ7����ʮ�������е����ֵ
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
//��ϰ8������Ļ������žų˷���
// // int main(){
// //     for(int i =1;i<=9;i++){
// //         for(int j=1;j<=i;j++){
// //             printf("%d��%d=%-2d ",j,i,i*j);//δ��%2dʱ��ӡ����û�ж��룬%2d�ܴ�����%2d-->��������߼ӿո�/////%-2d-->�������ұ߼ӿո�
// //         }
// //         printf("\n");
// //     }
// // }
//���ű��ʽ����a,b,c,d�����ս��Ϊd   //////
// // int main(){
// //     int a=1;int b=2;int c=3;
// //     int d =(a=a+3,b+2,c=a);
// //     printf("%d",d);
// //     return 0;
// // }