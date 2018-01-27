#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
int emtiaz_kalame,o;
char new_topic[10];
char javab_dorost_kardan;
double u1[100];
double emtiaz_kol;
double emtiaz_max=-1000.0000;
int mozoe_bazi;
struct LList* first;
struct LList* last;
char kalame[50];
struct LList{
	char c[50];
	LList * next;
};
struct edame
{
double emtiaz;
char esm[50];
char mozoe[50];
};
struct edame st1;
LList* dorost_kardan_yek_node(void){                                           
	LList *nn=NULL;
	int i = 0;
	nn=(LList*)malloc(sizeof(LList));
  nn->next=NULL;
  return nn;
}

void ezafe_kardan(LList *list,char i[]){   
	int t=0;
	LList *temp= list;
  while(temp->next!=NULL){
    temp=temp->next;
  }//mikhaim beresim be akhar listemon
  temp->next=(struct LList*)malloc(sizeof(LList));
  temp=temp->next;
  while(i[t]!='\0'){
	temp->c[t]=i[t];
	t++;
  }
  temp->c[t] = '\0';
  temp->next=NULL;
  last = temp;
}
int vojod(char a[50], char s){
	int i=0;
	while(i<50){
		if(a[i]==s)
			return 1;
		i++;
	}
	return 0;
}
void draw( int a){
	if(a==0 || a==-1 || a==-2){
printf("           +-----+\n");
  printf("           | . . |\n");
  printf("           |  |  |\n");
  printf("           |  -  |\n");
  printf("           +-----+\n");
  printf("             | |  \n");
  printf("        +-----------+ \n");
  printf("       /|           |\\\ ");
  printf("\n");
  printf("      / /           \\ \\ ");
  printf("\n");
  printf("     / /|           |\\ \\ ");
  printf("\n");
  printf("        |           | \n");
  printf("        |           | \n");
  printf("        |           | \n");
  printf("        +-+-+---+-+-+ \n");
  printf("           | | | | \n");
  printf("           | | | | \n");
  printf("           | | | | \n");
  printf("           | | | | \n");
  printf("  /\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\  ");
  printf("\n");
  printf("  //////////////////////////  ");
  printf("\n");
  printf("  \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\ \n");


	}
	if(a==1){
printf("           +-----+\n");
  printf("           | o o |\n");
  printf("           |  |  |\n");
  printf("           |  -  |\n");
  printf("           +-----+\n");
  printf("             | |  \n");
  printf("        +-----------+ \n");
  printf("       /|           |\\\ ");
  printf("\n");
  printf("      / /           \\ \\ ");
  printf("\n");
  printf("     / /|           |\\ \\ ");
  printf("\n");
  printf("        |           | \n");
  printf("        |           | \n");
  printf("        |           | \n");
  printf("        +-+-+---+-+-+ \n");
  printf("  /\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\  ");
  printf("\n");
  printf("  //////////////////////////  ");
  printf("\n");
  printf("  \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\ \n");
	}
	if(a==2){
printf("           +-----+\n");
  printf("           | 0 0 |\n");
  printf("           |  |  |\n");
  printf("           |  -  |\n");
  printf("           +-----+\n");
  printf("             | |  \n");
  printf("        +-----------+ \n");
  printf("       /|           |\\\ ");
  printf("\n");
  printf("      / /           \\ \\ ");
  printf("\n");
  printf("     / /|           |\\ \\ ");
  printf("\n");
  printf("  /\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\  ");
  printf("\n");
  printf("  //////////////////////////  ");
  printf("\n");
  printf("  \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\ \n");

	}
	if(a==3){
printf("           +-----+\n");
  printf("           | O O |\n");
  printf("           |  |  |\n");
  printf("           |  -  |\n");
  printf("           +-----+\n");
  printf("             | |  \n");
  printf("  /\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\  ");
  printf("\n");
  printf("  //////////////////////////  ");
  printf("\n");
  printf("  \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\ \n");

	}
	if(a==4){
printf("           +-----+\n");
  printf("           | * * |\n");
  printf("           |  |  |\n");
  printf("  /\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\  ");
  printf("\n");
  printf("  //////////////////////////  ");
  printf("\n");
  printf("  \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\ \n");

	}
	if(a==5){
printf("          Bye Bye!!!\n");
  printf("  /\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\  ");
  printf("\n");
  printf("  //////////////////////////  ");
  printf("\n");
  printf("  \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\ \n");

	}

}
int hads_kalame(char a[50]){

	
	char s;
	char negahban[50];
	int b,i=0,j=0,n=-1,tool,vojod_hard,z1;
	int hads=0;

	b=strlen(a);
	a[b-1]='\0';
	tool=b-1;
	while(i!=tool){
		negahban[i]='*';
		i++;
	}
	negahban[i]='\0';
	printf("\n%s\n",negahban);
	b=0;
	draw(j);
	
	while(j<5 && n<0){

    	scanf("%c",&s);
		if(s=='Q')
			return 0;
		else{
		if(s == '\n')
			continue;
		z1=vojod(a,s);
		if(z1==0){
			j++;
		printf("\n%s\n",negahban);
		draw(j);
		}
		else
		{
			hads=hads+1;
		while(b<tool){
			if(a[b]==s)
			negahban[b]=s;
			b++;
		}
		printf("\n%s\n",negahban);
		draw(j);
		b=0;
		}
		n=strcmp(negahban,a);
		if(n==1)
			n=n-2;
		if(n==0){
			emtiaz_kalame=emtiaz_kalame+(3* tool)-j;
			
		}
		if(hads==2){
			j=j-1;
			hads=0;
		}

		    
		}


	    

}
	return 1;
}
void pak_kardan_node(char a[50])
{
	struct LList* temp;
	struct LList* temp1;
    temp1=temp=first;
    int not_exit_in_list=0;
    if(strcmp(first->c,a)==0)
    {
        temp=first;
        first=first->next;
        delete temp;
    }
    else
    {
        while(temp!=last)
        {
            temp=temp1->next;
            if(temp->c==a)
            {
                if(temp==last)
                {
                    temp1->next=NULL;
                    delete temp;
                    last=temp1;
                    not_exit_in_list=1;
                    break;
                }
                else
                {
                    temp1->next=temp->next;
                    delete temp;
                    not_exit_in_list=1;
                    break;
                }
            }
            temp1=temp1->next;
        }
        if(not_exit_in_list==0)
        {
            printf("There is not node with Data= %s",a," in linked list.");
        }
    }
}
void save(char a[50],int b,double c){
	FILE* er;

	char s1[]="vide_games";
	char s2[]="soccer_players";
	char s3[]="programming_languages";
	char s4[]="fruits";
	char s5[]="computer_networks";
	st1.emtiaz=c;
	strcpy(st1.esm,a);
	if(b==1)
		strcpy(st1.mozoe,s1);
	else if(b==2)
		strcpy(st1.mozoe,s2);
	else if(b==3)
		strcpy(st1.mozoe,s3);
	else if(b==3)
		strcpy(st1.mozoe,s3);
	else if(b==4)
		strcpy(st1.mozoe,s4);
	else if(b==5)
		strcpy(st1.mozoe,s5);
	er=fopen("E:\save.txt","a+");
	fseek(er, 0, SEEK_END);
	fprintf(er,"\n%s ",st1.esm);
	fprintf(er,"%f ",st1.emtiaz);
	//fprintf(er,"%s",st1.mozoe);
	fclose(er);


}
void chap_kardan(char a[50]){
	FILE* er;
	char g[50];
	char g1[50];
	double zx;
	er=fopen("E:\save.txt","r");
	/*fscanf(er, "%s",g );
	fscanf(er, "%lf",&zx );
	fscanf(er, "%s",g1 );
	printf("esme bazikon:%s\n",g);
	printf("emtiaz bazikon:%lf\n",zx);
	printf("mozoe:%s\n",g1);*/
	while(!feof(er)){                                       
      fscanf(er,"%s %lf",g , &zx);   
	  if(strcmp(g,a)==0){
		  printf("esme bazikon:%s\n",g);
		  printf("emtiaz bazikon:%lf\n",zx);
		  break;
      }
      
}
	
}
void top_10()
{
	int i=0,j=0,k=0;
	double temp;
	double temp1;
	char g[100];
	FILE* sn;
	FILE* as;
	sn=fopen("E:\save.txt","a+");
	while(!feof(sn)){
     fscanf(sn,"%s %lf",g , &u1[i]);
	// printf("%f\n",u1[i]);
	 i++;
	}
	for(j=0;j<100;j++){
       for(k=j+1;k<100;k++){
		   if(u1[j]<u1[k]){
			   temp=u1[j];
			   u1[j]=u1[k];
			   u1[k]=temp;
		   }
	   }
	}
	j=0;
	i=i-1;
	//as=fopen("E:\save_badi.txt","a+");
	if(i<10){
		while(j<i){
		fseek(sn, 0, SEEK_SET);
		while(!feof(sn)){
			fscanf(sn,"%s %lf",g , &temp1);
			if(u1[j]==temp1){
				printf("%s     %f\n",g,u1[j]);
			}

		}
		j++;
	}
	}
	else{

	while(j<10){
		fseek(sn, 0, SEEK_SET);
		while(!feof(sn)){
			fscanf(sn,"%s %lf",g , &temp1);
			if(u1[j]==temp1){
				printf("%s     %f\n",g,u1[j]);
			}

		}
		j++;
	}
	}
	fclose(sn);
}
void dorost_kardan_yek_mozoe(){
char new_word[50]={'\0'};
char c;
fflush(stdin);
  printf("aya mikhahid mozoe jadidi besazid (y/n)\n");
  printf("%c",javab_dorost_kardan);
 // while(javab_dorost_kardan=32){
  scanf("%c",&javab_dorost_kardan);
//  }
  if(javab_dorost_kardan=='y'){
    FILE *new_to;
    printf("mozoe mored nazar khod ra vared konid\n");
    scanf("%s",new_topic);
    
    int i=0;
    while(1){
      new_to=fopen("E:\\new_toic.txt","a+");
      printf("kalame vared konid: \n");
      scanf("%s",new_word);
      i=0;
     // fseek(new_to,0,SEEK_END);
        fprintf(new_to," %s",new_word);
        i++;
      
      fclose(new_to);
	  fflush(stdin);
      printf("aya bazam mikhahid kalame vared konid(y/n)\n");
	//  while(c=32){
      scanf("%c",&c);
	//  }
      if(c=='n')
        break;
    }
    
  }
}
int main()
{
	srand(time(0));
	FILE* fb;
	LList *list_asli=dorost_kardan_yek_node();
	first = list_asli;
	LList *list_asli2;
	char name[100],neshane='*',javab='\n',javab1='\n';
	char kalame_kgarej_shode_list[50];
	int a,mozoe,tedad_kalame=0,i,shomarandeh=0;
	int w=0,m=1;
	double timet=0,time1=0,time2=0;
	printf("esme khod ra vared konid\n");
	scanf("%s",name);
	printf("khosh amadi %s\n\n\n",name);
	printf("to in bazi baray hayajan bishtar yadet bashe dar ezay har 2 harfi ke dorst hads bezani be onvan jayeze yek ghalat azat kam mikonim\n\n\n\n");
	dorost_kardan_yek_mozoe();
	printf("[1]NEW GAME\n[2]RESUME GAME\n[3]TOP 10\n");
	scanf("%d",&a);


	if(a==1){
		printf("yek mozo ra entekhab konid\n");
		while (javab1!='n')
		{
			if(javab_dorost_kardan=='y')
			printf("[1]video games\n[2]soccer players\n[3]programming languages\n[4]fruits\n[5]computer networks\n[6]%s",new_topic);
			else
					printf("[1]video games\n[2]soccer players\n[3]programming languages\n[4]fruits\n[5]computer networks\n");
		scanf("%d",&mozoe);
		printf("game start\n");
		if(mozoe==1){
			fb=fopen("E:\erfan.txt","r");
				while(!feof(fb)){
					fscanf(fb,"%s",kalame);
					ezafe_kardan(list_asli,kalame);
					tedad_kalame++;
				}
				while(tedad_kalame>0){
				i=rand()%(tedad_kalame+1);
				if(i==0)
					i=i+1;
				list_asli2=list_asli;
				shomarandeh=0;
				while(shomarandeh!=i){
					list_asli2=list_asli2->next; 
					shomarandeh++;	
				}
				
				/*printf("tedad kalame ha:%d\n\n",tedad_kalame);
				printf("adad random:%d\n",i);
				printf("kalame khareg shode:%s\n\n",list_asli2->c)*/;
				shomarandeh=0;
			
					while(list_asli2->c[shomarandeh]!='\0'){
						kalame_kgarej_shode_list[shomarandeh]=list_asli2->c[shomarandeh];
						shomarandeh++;
					}
						
					kalame_kgarej_shode_list[shomarandeh+1]='\0';
					pak_kardan_node(list_asli2->c);
					time1=time(NULL);
					m=hads_kalame(kalame_kgarej_shode_list);
					if(m==0)
						break;
					tedad_kalame--;
					emtiaz_kol=emtiaz_kol+emtiaz_kalame;
					emtiaz_kalame=0;
				}
				tedad_kalame=0;
				time2=time(NULL);
				timet=time2-time1;
				timet=timet/3600;
				emtiaz_kol=emtiaz_kol/timet;
	
		}

		if(mozoe==2){
			fb=fopen("E:\soccer_players.txt","r");
				while(!feof(fb)){
					fscanf(fb,"%s",kalame);
					ezafe_kardan(list_asli,kalame);
					tedad_kalame++;
				}
				while(tedad_kalame>0){
				i=rand()%(tedad_kalame+1);
				if(i==0)
					i=i+1;
				list_asli2=list_asli;
				shomarandeh=0;
				while(shomarandeh!=i){
					list_asli2=list_asli2->next; 
					shomarandeh++;	
				}
				
				/*printf("tedad kalame ha:%d\n\n",tedad_kalame);
				printf("adad random:%d\n",i);
				printf("kalame khareg shode:%s\n\n",list_asli2->c);*/
				shomarandeh=0;
			
					while(list_asli2->c[shomarandeh]!='\0'){
						kalame_kgarej_shode_list[shomarandeh]=list_asli2->c[shomarandeh];
						shomarandeh++;
					}
						
					kalame_kgarej_shode_list[shomarandeh+1]='\0';
					pak_kardan_node(list_asli2->c);
					time1=time(NULL);
					m=hads_kalame(kalame_kgarej_shode_list);
					if(m==0)
						break;
					tedad_kalame--;
					emtiaz_kol=emtiaz_kol+emtiaz_kalame;
					emtiaz_kalame=0;
				}
				tedad_kalame=0;
				time2=time(NULL);
				
				timet=time2-time1;
				timet=timet/3600;
				emtiaz_kol=emtiaz_kol/timet;
	
			
		}
		if(mozoe==3){
			fb=fopen("E:\programming_languages.txt","r");
				while(!feof(fb)){
					fscanf(fb,"%s",kalame);
					ezafe_kardan(list_asli,kalame);
					tedad_kalame++;
				}
				while(tedad_kalame>0){
				i=rand()%(tedad_kalame+1);
				if(i==0)
					i=i+1;
				list_asli2=list_asli;
				shomarandeh=0;
				while(shomarandeh!=i){
					list_asli2=list_asli2->next; 
					shomarandeh++;	
				}
				
				/*printf("tedad kalame ha:%d\n\n",tedad_kalame);
				printf("adad random:%d\n",i);
				printf("kalame khareg shode:%s\n\n",list_asli2->c);*/
				shomarandeh=0;
			
					while(list_asli2->c[shomarandeh]!='\0'){
						kalame_kgarej_shode_list[shomarandeh]=list_asli2->c[shomarandeh];
						shomarandeh++;
					}
						
					kalame_kgarej_shode_list[shomarandeh+1]='\0';
					pak_kardan_node(list_asli2->c);
					time1=time(NULL);
					m=hads_kalame(kalame_kgarej_shode_list);
					if(m==0)
						break;
					tedad_kalame--;
					emtiaz_kol=emtiaz_kol+emtiaz_kalame;
					emtiaz_kalame=0;
				}
				tedad_kalame=0;
				time2=time(NULL);
				
				timet=time2-time1;
				timet=timet/3600;
				emtiaz_kol=emtiaz_kol/timet;
	
			
		}
		if(mozoe==4){
			fb=fopen("E:\erfan1.txt","r");
				while(!feof(fb)){
					fscanf(fb,"%s",kalame);
					ezafe_kardan(list_asli,kalame);
					tedad_kalame++;
				}
				while(tedad_kalame>0){
				i=rand()%(tedad_kalame+1);
				if(i==0)
					i=i+1;
				list_asli2=list_asli;
				shomarandeh=0;
				while(shomarandeh!=i){
					list_asli2=list_asli2->next; 
					shomarandeh++;	
				}
				
				/*printf("tedad kalame ha:%d\n\n",tedad_kalame);
				printf("adad random:%d\n",i);
				printf("kalame khareg shode:%s\n\n",list_asli2->c);*/
				shomarandeh=0;
			
					while(list_asli2->c[shomarandeh]!='\0'){
						kalame_kgarej_shode_list[shomarandeh]=list_asli2->c[shomarandeh];
						shomarandeh++;
					}
						
					kalame_kgarej_shode_list[shomarandeh+1]='\0';
					pak_kardan_node(list_asli2->c);
					time1=time(NULL);
					m=hads_kalame(kalame_kgarej_shode_list);
					if(m==0)
						break;
					tedad_kalame--;
					emtiaz_kol=emtiaz_kol+emtiaz_kalame;
					emtiaz_kalame=0;
				}
				tedad_kalame=0;
				time2=time(NULL);
				
				timet=time2-time1;
				timet=timet/3600;
				emtiaz_kol=emtiaz_kol/timet;
	
			
		}
		if(mozoe==5){
			fb=fopen("E:\computer_networks.txt","r");
				while(!feof(fb)){
					fscanf(fb,"%s",kalame);
					ezafe_kardan(list_asli,kalame);
					tedad_kalame++;
				}
				while(tedad_kalame>0){
				i=rand()%(tedad_kalame+1);
				if(i==0)
					i=i+1;
				list_asli2=list_asli;
				shomarandeh=0;
				while(shomarandeh!=i){
					list_asli2=list_asli2->next; 
					shomarandeh++;	
				}
				
				/*printf("tedad kalame ha:%d\n\n",tedad_kalame);
				printf("adad random:%d\n",i);
				printf("kalame khareg shode:%s\n\n",list_asli2->c);*/
				shomarandeh=0;
			
					while(list_asli2->c[shomarandeh]!='\0'){
						kalame_kgarej_shode_list[shomarandeh]=list_asli2->c[shomarandeh];
						shomarandeh++;
					}
						
					kalame_kgarej_shode_list[shomarandeh+1]='\0';
					pak_kardan_node(list_asli2->c);
					time1=time(NULL);
					m=hads_kalame(kalame_kgarej_shode_list);
					if(m==0)
						break;
					tedad_kalame--;
					emtiaz_kol=emtiaz_kol+emtiaz_kalame;
					emtiaz_kalame=0;
				}
				tedad_kalame=0;
				time2=time(NULL);
				
				timet=time2-time1;
				timet=timet/3600;
				emtiaz_kol=emtiaz_kol/timet;
	
			
		}
		if(javab_dorost_kardan=='y'){
		if(mozoe==6){
			fb=fopen("E:\\new_toic.txt","r");
				while(!feof(fb)){
					fscanf(fb,"%s",kalame);
					ezafe_kardan(list_asli,kalame);
					tedad_kalame++;
				}
				while(tedad_kalame>0){
				i=rand()%(tedad_kalame+1);
				if(i==0)
					i=i+1;
				list_asli2=list_asli;
				shomarandeh=0;
				while(shomarandeh!=i){
					list_asli2=list_asli2->next; 
					shomarandeh++;	
				}
				
				printf("tedad kalame ha:%d\n\n",tedad_kalame);
				printf("adad random:%d\n",i);
				printf("kalame khareg shode:%s\n\n",list_asli2->c);
				shomarandeh=0;
			
					while(list_asli2->c[shomarandeh]!='\0'){
						kalame_kgarej_shode_list[shomarandeh]=list_asli2->c[shomarandeh];
						shomarandeh++;
					}
						
					kalame_kgarej_shode_list[shomarandeh+1]='\0';
					pak_kardan_node(list_asli2->c);
					time1=time(NULL);
					m=hads_kalame(kalame_kgarej_shode_list);
					if(m==0)
						break;
					tedad_kalame--;
					emtiaz_kol=emtiaz_kol+emtiaz_kalame;
					emtiaz_kalame=0;
				}
				tedad_kalame=0;
				time2=time(NULL);
				
				timet=time2-time1;
				timet=timet/3600;
				emtiaz_kol=emtiaz_kol/timet;
	
			
		}
		}
	
		
		if(emtiaz_kol>emtiaz_max){
			emtiaz_max=emtiaz_kol;
			mozoe_bazi=mozoe;
		}
		javab='\n';
		javab1='\n';
		printf("aya bazam mikhay bazi koni?[y/n]\n");
		while(javab1=='\n'){
		scanf("%c",&javab1);
		}
		if(javab1=='n')
			break;
		}
		printf("aya mikhahid bazi ra save konid?[y/n]\n");
		while(javab=='\n'){
		scanf("%c",&javab);
		}
		/*printf("%s\n",name);
		printf("%f\n",emtiaz_max);
		printf("%d\n",mozoe_bazi);*/
		if(javab=='y')
			save(name,mozoe_bazi,emtiaz_max);
	}//akolad if avalam ast
	if(a==2){
		chap_kardan(name);
	}
	if(a==3)
	{
		top_10();
	}
	
}
