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