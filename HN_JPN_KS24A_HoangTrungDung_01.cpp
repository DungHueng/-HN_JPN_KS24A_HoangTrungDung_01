
#include<stdio.h>
int main(){
	int n,sum,giatrithem,vitri,vitrixoa,giatri;
	int arr[100];
    int min =arr[0];
    int max =arr[0];
    int flag = -1;
	
	int chon;
	do{
		printf("1. Nhap so phan tu va gia tri cho mang\n");
		printf("2. In ra gia tri cac phan tu trong mang\n");
		printf("3. Gia tri nho nhat va lon nhat trong mang\n");
		printf("4. In ra tong tat ca cac phan tu\n");
		printf("5. Them 1 phan tu vao cuoi mang\n");
		printf("6. Xoa 1 phan tu\n");
		printf("7. Sap xep theo thu tu giam dan\n");
		printf("8. Cho nguoi dung nhap vào mot phan tu, tim kiem xem phan tu do có ton tai trong mang hay khong\n");
		printf("9. Sap xep mang theo thu tu tang dan\n");
		printf("10. Thoat\n");
		printf("Moi ban chon\n");
		scanf("%d",&chon);
		
		switch(chon){
			case 1 :
				printf("moi ban nhap so phan tu ");
				scanf("%d",&n);
				for(int i = 0;i < n;i++){
					printf("arr[%d]=",i);
					scanf("%d",&arr[i]);
				}
				break;
			case 2 :
				for(int i=0;i<n;i++){
					printf("arr[%d] = %d\n",i,arr[i]);
				}
				break;
			case 3 :
			
				for(int i = 0;i<n;i++){
					if(arr[i] > max){
						max = arr[i];
					}
					if(arr[i]<min){
						min = arr[i];
					}
				}
				printf("min = %d\n",min);
				printf("max = %d\n",max);
				break;
			
			case 5:
				printf("moi ban nhap gia tri muon them");
				scanf("%d",giatrithem);
				arr[n-1] = giatrithem;
                n++;
                for(int i=0;i<n;i++){
					printf("arr[%d] = %d\n",i,arr[i]);
				}
                
				
                break;
            case 6 :
            	printf("moi ban nhap vi tri muon xoa cua mang");
	            scanf("%d",&vitrixoa);
	            if(vitrixoa <= n){
		        for(int i = vitrixoa-1; i < n - 1; i++){
                arr[i] = arr[i + 1];
                }
                --n;
                for(int i = 0; i < n; i++){
                printf("%d ", arr[i]);
                }
			}
            
			break;
			case 8 :
				printf("moi ban nhap phan tu can tim");
				scanf("%d",&giatri);
				for(int i =0;i<n;i++){
	         	if(arr[i] == giatri){
			    flag = i+1;
			break;
	     	}
	        }
	
	        if(flag != -1){
		    printf("phan tu can tim dang o vi tri %d\n",flag);
	        }
	        else{
		    printf("phan tu can tim ko co trong mang");
         	}

            case 10 :
            	printf(" chuong trinh ket thuc");
         		default:
         			printf("lua chon khong hop le");
		}
					
		    	
				
			
			
				
		
		
	}while(chon !=10);
	
	return 0;
	
	
	
}

