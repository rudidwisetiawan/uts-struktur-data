#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include <time.h>

int main(){
	int da[100],cari,jmlh=0;
	bool bol=false;
    srand(time(0));

        for(int i=0;i<100;i++)
    {
        da[i]=rand()%100+1;
	}
        printf("MASUKKAN DATA YANG AKAN DICARI : ");
        scanf("%d",&cari);

        for(int i=0;i<100;i++)
    {
        if(da[i]==cari)
        {
            bol=true;
            jmlh++;
        }
	}

        if(bol==true)
        {
            printf("data ada atau tercantum \n");
        }
        else
        {
            printf("Data Tidak ada atau tidak tercantum\n");
        }
            printf("jumlah data anda : %d",jmlh);


}
