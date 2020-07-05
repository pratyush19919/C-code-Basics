/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
//***********************************Function for finding sum of elements of array**********************************************//
// int arr[7]={10,20,30,40,50,60,100};
// int sumarr(int a[],int size){
//     int sum=0;
//     for (int i=0;i<size;i++){
//         sum=sum+a[i];
        
//     }
//     return sum;
// }
// int main()
// {    
//     printf("Sum of array is %d",sumarr(arr,7));
//     return 0;
//}

//**********************************Example and illustration of Concept of POINTERS********************************************//

// int main(){
//     int x=30;
//     float r=128736910.3773478913;
//     printf("Addrress of x is %x and r is %x",&x,&r);
// }
// int main(){
//     int *r=6324;
//     printf("%x\n",&r);
//     int *ptr;
//     ptr = &r;
//     printf("%d\n",*ptr);//prints value stored in the address which is represented by pointer ptr
//     printf("%x\n",*r);
//     return 0;
// }


//********************************Creating pointers for arrays******************************************************************//
// int main(){
//     int arr[6]={12,443,54,23,14,100};//define array
//     int *arr_ptr[6];//define array pointer along with its size
//     for (int i=0;i<6;i++){
//         arr_ptr[i]=&arr[i];//each element of pointer array holds address of each element of array arr
//     }
//     for (int i=0;i<6;i++){
//     printf("val of arr_ptr[%d] is %d\n",i,arr_ptr[i]);
//     printf("val of arr[%d] is %d\n",i,arr[i]);//these two are same,direct array print
//     printf("val of dereferenced arr_ptr[%d] is %d\n",i,*arr_ptr[i]);//these two are same array print using dereferencing
//     }
//     return 0;
// }



//***************************using pointers as arguments to a function************************************************************//
// void getval(int *ptr){
    
//     *ptr=10000;
//     return;
// }
// int main(){
//     int val;
//     getval(&val);
//     printf("address of val is changed to %d using getval function",val);//address of val=*ptr10000
    
//     return 0;
    
// }

//*************sum of elements in array using pointers,creating a function with pointer as argument********************************//

// int sumofarr(int *ptr[], int size){
//     int sum=0;
//     for (int i=0;i<size;i++){
//         sum=sum + *ptr[i]; 
//     }
//   return sum;
// }
// int main(){
//     int arr[6]={12,443,54,23,14,100};
//     int*ptr_arr_of_arr[6];
//     for(int i=0;i<6;i++){
//         ptr_arr_of_arr[i]=&arr[i];
//     }
//     // for(int i=0;i<6;i++){
//     // printf("address of element in array arr[%d] is %d \n",i,ptr_arr_of_arr[i]);}
//     printf("sum of array using pointers as arguments to function is %d", sumofarr(ptr_arr_of_arr,6));
//     return 0;
// }
//*******************************************************************************************************************************//















