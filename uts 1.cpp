#include<stdio.h>
#include<conio.h>

int main(){
	float da[1000]={8,10,6,2,11,7,1,100};
	int cari,jmlh=0;
	bool bol=false;

        printf("MASUKKAN DATA YANG AKAN DICARI : ");
        scanf("%d",&cari);

            for(int i=0;i<1000;i++)
        {
            if(da[i]==cari)
        {
            bol=true;
            break;
        }
        }

            if(bol==true)
                {
            printf("data ada atau tercantum \n");
                }
    else
        {
        printf("data Tidak ada atau tidak tercantum\n");
        }
}
