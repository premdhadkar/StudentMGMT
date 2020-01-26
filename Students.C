#include  <stdio.h>
#include<windows.h>
#include <stdlib.h>
#include <string.h>
int NOR;
HANDLE wHnd;
HANDLE rHnd;

struct student{
    unsigned int Roll_No;
    char Name[20];
    float CGPA;
};

void saveNOR(){
    FILE *n;
    n=fopen("NOS.txt","w");
    fwrite((int *)&NOR,sizeof(int),1,n);
    fclose(n);
}

void terms_conditions(){
        system("cls");
        system("color 0c");
        printf(" #####  ###### ##    ## ######   ####### ###    ### ######\n");Sleep(100);
        printf("##   ## # ## # ##    ##  ##  ##  ##    #  ###   ##  # ## #\n");Sleep(100);
        printf(" ##       ##   ##    ##  ##  ##  #####    ####  ##    ##  \n");Sleep(100);
        printf("  ####    ##   ##    ##  ##  ##  #####    ## ## ##    ##  \n");Sleep(100);
        printf("##   ##   ##   ##    ##  ##  ##  ##    #  ##  ####    ##  \n");Sleep(100);
        printf(" #####   ####   ######  ######   ####### ###   ####  #### \n\n\n");Sleep(100);


        printf("#######  #######   #####    #####   #######   ###### \n");Sleep(100);
        printf(" ##   ## ##    #  ###  ##  ##   ##   ##   ##   ##  ##\n");Sleep(100);
        printf(" ####### #####    ##       ##   ##   #######   ##  ##\n");Sleep(100);
        printf(" #####   #####    ##       ##   ##   #####     ##  ##\n");Sleep(100);
        printf(" ##  ##  ##    #  ###  ##  ##   ##   ##  ##    ##  ##\n");Sleep(100);
        printf("####  ## #######   #####    #####   ####  ##  ###### \n\n\n");Sleep(100);

        printf(" #####  ##     ##  #####  ###### ####### ###     ### \n");Sleep(100);
        printf("##   ##  ### ###  ##   ## # ## # ##    #  ###   ###  \n");Sleep(100);
        printf(" ##         ##     ##       ##   #####    #########  \n");Sleep(100);
        printf("  ####      ##      ####    ##   #####    ## ### ##  \n");Sleep(100);
        printf("##   ##     ##    ##   ##   ##   ##    #  ##     ##  \n");Sleep(100);
        printf(" #####     ####    #####   ####  ####### ###     ### \n\n\n");Sleep(100);
    system("pause");
    system("cls");
    system("color 05");
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
    printf("%cThis is the program of student information system                                                 %c\n%cNOTE:=>                                                                                           %c\n%c1.By using \"Format Data\" you are confirming to erase all the data that is stored in hard disk.    %c\n%c2.Roll Numbers are supposed to be pure integers of FIVE DIGITS ONLY.                              %c\n%c3.You can enter the name upto 19 charaters inclusive of white spaces.                             %c\n",186,186,186,186,186,186,186,186,186,186);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
    Sleep(100);
    printf("Hello User\n");
    Sleep(100);
    system("pause");
    system("cls");
    system("color 05");
}

void disclaimer(){
    int i;
    system("color 0E");
    printf("\n%c",201);for(i=0;i<86;printf("%c",205),i++);printf("%c\n",187);
    printf("%c                                                                                      %c\n%c                                                                                      %c\n%cThis Program is Dedicated to:>                                                        %c\n%c                                                                                      %c\n%c                DEPARTMENT OF COMPUTER SCIENCE AND ENGINEERING                        %c\n%c        ORIENTAL INSTITUTE OF SCIENCE AND TECHNOLOGY RAISEN ROAD (BHOPAL)             %c\n%c                                                                                      %c\n%c                                                                                      %c\n%c                                                                                      %c\n%cThis program is created by PREM DHADKAR                                               %c\n%cRGPV B.Tech. CSE B Div                                                                %c\n%cRoll no.-079                                                                          %c\n%c                                                                                      %c\n",186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186);
    printf("%c",200);for(i=0;i<86;printf("%c",205),i++);printf("%c\n",188);
}

void Exit(){
		saveNOR();
		disclaimer();
		system("pause");
		exit(0);
}

int menu(){
    system("color 0A");
    int i;
    int choice;
    printf("\n");
    for(i=0;i<30;printf(" "),i++);
    printf("%c",201);
    for(i=0;i<17;printf("%c",205),i++);
    printf("%c\n",187);
    for(i=0;i<30;printf(" "),i++);
    printf("%c",186);
    printf("                 ");
    printf("%c\n",186);
    for(i=0;i<30;printf(" "),i++);
    printf("%c",186);
    printf("      MENU       ");
    printf("%c\n",186);
    for(i=0;i<30;printf(" "),i++);
    printf("%c",186);
    printf("                 ");
    printf("%c\n",186);
    for(i=0;i<30;printf(" "),i++);
    printf("%c",186);
    printf(" 1.Insertion     ");
    printf("%c\n",186);
    for(i=0;i<30;printf(" "),i++);
    printf("%c",186);
    printf(" 2.Deletion      ");
    printf("%c\n",186);
    for(i=0;i<30;printf(" "),i++);
    printf("%c",186);
    printf(" 3.Searching     ");
    printf("%c\n",186);
    for(i=0;i<30;printf(" "),i++);
    printf("%c",186);
    printf(" 4.Sorting       ");
    printf("%c\n",186);
    for(i=0;i<30;printf(" "),i++);
    printf("%c",186);
    printf(" 5.Listing       ");
    printf("%c\n",186);
    for(i=0;i<30;printf(" "),i++);
    printf("%c",186);
    printf(" 6.Total Student ");
    printf("%c\n",186);
    for(i=0;i<30;printf(" "),i++);
    printf("%c",186);
    printf(" 7.Format Data   ");
    printf("%c\n",186);
    for(i=0;i<30;printf(" "),i++);
    printf("%c",186);
    printf(" 8.EXIT          ");
    printf("%c\n",186);
    for(i=0;i<30;printf(" "),i++);
    printf("%c",186);
    printf("                 ");
    printf("%c\n",186);
    for(i=0;i<30;printf(" "),i++);
    printf("%c",200);
    for(i=0;i<17;printf("%c",205),i++);
    printf("%c\n",188);
    fflush(stdin);
    printf("Enter key : ");
    scanf("%d",&choice);
    return choice;
}

void insertion (void){
    system("color 0c");
    int NORTE;
    int l,i,flag=0;
    int checkwrite;
    struct student s,cs;
    FILE *f,*c;
    system("cls");
    do{
    printf("How many records you wanna insert : ");
    scanf("%d",&NORTE);
    if(NORTE>=0)
        break;
    printf("\nInvalid Number of Records!...\nEnter Correctly...\n");
    }while(1);
    for(i=1;i<=NORTE;i++){
	    enteragain:
	    printf("\nEnter Record %d :\n\n        Serial : %d",i,NOR+1);
	    nameagain:
	    printf("\n          Name : ");
	    fflush(stdin);
	    gets(s.Name);
	    strupr(s.Name);
	    for(int ch=0;s.Name[ch]!='\0';ch++){
            if((s.Name[ch]<=90&&s.Name[ch]>=65)||s.Name[ch]==32);
            else{
                printf("\nInvalid Name( Only alphabets are allowed )!...\nEnter again...\n");
                goto nameagain;
            }
	    }
	    if(strlen(s.Name)>19){
        printf("\nInvalid Name( Upto 19 characters are allowed which include whitespaces also)!...\nEnter again...\n");
        goto nameagain;
    }
	    do{
            printf("Enter Roll No. : ");
            scanf("%d",&s.Roll_No);
            c=fopen("DOSS.txt","r");
            rewind(c);
            for(l=1;l<=NOR;l++){
                fread((struct student *)&cs,sizeof(struct student),1,c);
                if(cs.Roll_No==s.Roll_No){
                    flag=1;
                    break;
                }
            }
            fclose(c);
            if(s.Roll_No<=0)
                printf("\nInvalid Roll Number!...\nEnter Correctly...\n");
            else if(flag){
                printf("\nRoll Number Already Exist!...\nEnter His/Her Record Again...\n");
                flag=0;
                goto enteragain;
            }
            else
                break;
        }while(1);
        do{
            printf("    Enter CGPA : ");
            scanf("%f",&s.CGPA);
            if(s.CGPA>=0&&s.CGPA<=10)
                break;
            printf("\nInvalid CGPA!...\nEnter Correctly...\n");
        }while(1);
        f=fopen("DOSS.txt","a");
	    checkwrite=fwrite((struct student *)&s,sizeof(struct student),1,f);
	    fclose(f);
	    NOR++;
	    if(checkwrite!=1){
		printf("\nSorry!...\nFile got corrupted\n");
		fclose(f);
		NOR--;
		saveNOR();
		disclaimer();
		system("pause");
		exit(0);
	    }
	    saveNOR();
    }
    fclose(f);
    printf("\nData Was Successfully updated!...(%d Records added)\n",i-1);
    Sleep(2000);
    system("cls");
}

void searchbyname(){
    char name[20];
    struct student s;
    FILE *c;
    int i,j,l,flag=0;
    c=fopen("DOSS.txt","r");
    rewind(c);
    nameagain:
    printf("\nEnter Full Name of Student : ");
    fflush(stdin);
    gets(name);
    strupr(name);
    for(int ch=0;name[ch]!='\0';ch++){
        if((name[ch]<=90&&name[ch]>=65)||name[ch]==32);
        else{
            printf("\nInvalid Name( Only alphabets are allowed )!...\nEnter again...\n");
            goto nameagain;
        }
    }
    if(strlen(name)>19){
        printf("\nInvalid Name( Upto 19 characters are allowed which include whitespaces also)!...\nEnter again...\n");
        goto nameagain;
    }
    printf("\nPlease Wait..");Sleep(300);
    for(l=1;l<=NOR;l++){
        fread((struct student *)&s,sizeof(struct student),1,c);
        if(strcmp(s.Name,name)=='\0'){
            flag=1;
            break;
        }
    }
    if(flag==1){
        rewind(c);
        system("cls");
        printf("\n");
        for(i=0;i<15;printf(" "),i++);
        printf("%c",201);
        for(i=0;i<51;printf("%c",205),i++);
        printf("%c\n",187);
        for(i=0;i<15;printf(" "),i++);
        printf("%c",186);
        printf(" S.No.  Roll No.          NAME                CGPA ");
        printf("%c\n",186);
        for(j=1;j<=NOR;j++,Sleep(5)){
            fread((struct student *)&s,sizeof(struct student),1,c);
            if(strcmp(s.Name,name)=='\0'){
                for(i=0;i<15;printf(" "),i++);
                printf("%c  ",186);
                l=printf("%d",j);for(l=4-l;l>0;printf(" "),l--);
                printf("     ");
                l=printf("%d",s.Roll_No);for(l=5-l;l>0;printf(" "),l--);
                printf("      ");
                l=printf("%s",s.Name);for(l=20-l;l>0;printf(" "),l--);
                printf("    ");
                l=printf("%.2f",s.CGPA);for(l=5-l;l>0;printf(" "),l--);
                printf("%c\n",186);
            }
        }
        for(i=0;i<15;printf(" "),i++);
        printf("%c",200);
        for(i=0;i<51;printf("%c",205),i++);
        printf("%c\n",188);
        fclose(c);
        system("pause");
        system("cls");
        return ;
    }
    else{
        printf("\nNo Record Found!...\n");
        fclose(c);
        system("pause");
        return;
    }
}

void searchbyroll(){
    int roll;
    struct student s;
    int i,j,l,flag=0;
    FILE *c;
    c=fopen("DOSS.txt","r");
    rewind(c);
    do{
            printf("Enter Roll No. : ");
            scanf("%d",&roll);
            if(roll<=0)
                printf("\nInvalid Roll Number!...\nEnter Correctly...\n\n");
            else
                break;
        }while(1);
    printf("\nPlease Wait..");Sleep(300);
    for(l=1;l<=NOR;l++){
        fread((struct student *)&s,sizeof(struct student),1,c);
        if(s.Roll_No==roll){
            flag=1;
            break;
        }
    }
    if(flag==1){
        rewind(c);
        system("cls");
        printf("\n");
        for(i=0;i<15;printf(" "),i++);
        printf("%c",201);
        for(i=0;i<51;printf("%c",205),i++);
        printf("%c\n",187);
        for(i=0;i<15;printf(" "),i++);
        printf("%c",186);
        printf(" S.No.  Roll No.          NAME                CGPA ");
        printf("%c\n",186);
        for(j=1;j<=NOR;j++,Sleep(5)){
            fread((struct student *)&s,sizeof(struct student),1,c);
            if(s.Roll_No==roll){
                for(i=0;i<15;printf(" "),i++);
                printf("%c  ",186);
                l=printf("%d",j);for(l=4-l;l>0;printf(" "),l--);
                printf("     ");
                l=printf("%d",s.Roll_No);for(l=5-l;l>0;printf(" "),l--);
                printf("      ");
                l=printf("%s",s.Name);for(l=20-l;l>0;printf(" "),l--);
                printf("    ");
                l=printf("%.2f",s.CGPA);for(l=5-l;l>0;printf(" "),l--);
                printf("%c\n",186);
            }
        }
        for(i=0;i<15;printf(" "),i++);
        printf("%c",200);
        for(i=0;i<51;printf("%c",205),i++);
        printf("%c\n",188);
        fclose(c);
        system("pause");
        system("cls");
        return ;
    }
    else{
        printf("\nNo Record Found!...\n");
        fclose(c);
        system("pause");
        return;
    }
}

void searching(){
    int i;
    int choice;
    FILE *c;
    system("color 05");
    c=fopen("DOSS.txt","r");
    if(c==NULL){
	    printf("\nFile not found!...\n\n");
	    remove("NOS.txt");
	    NOR=0;
	    system("pause");
	    fclose(c);
	    system("cls");
	    saveNOR();
	    return ;
    }
    fclose(c);
    for(;;){
        printf("\n");
        for(i=0;i<28;printf(" "),i++);
        printf("%c",201);
        for(i=0;i<21;printf("%c",205),i++);
        printf("%c\n",187);
        for(i=0;i<28;printf(" "),i++);
        printf("%c",186);
        printf("                     ");
        printf("%c\n",186);
        for(i=0;i<28;printf(" "),i++);
        printf("%c",186);
        printf("      SEARCH BY      ");
        printf("%c\n",186);
        for(i=0;i<28;printf(" "),i++);
        printf("%c",186);
        printf("                     ");
        printf("%c\n",186);
        for(i=0;i<28;printf(" "),i++);
        printf("%c",186);
        printf("1.Search by Name     ");
        printf("%c\n",186);
        for(i=0;i<28;printf(" "),i++);
        printf("%c",186);
        printf("2.Search by Roll No. ");
        printf("%c\n",186);
        for(i=0;i<28;printf(" "),i++);
        printf("%c",186);
        printf("3.Main Menu          ");
        printf("%c\n",186);
        for(i=0;i<28;printf(" "),i++);
        printf("%c",186);
        printf("4.Exit               ");
        printf("%c\n",186);
        for(i=0;i<28;printf(" "),i++);
        printf("%c",186);
        printf("                     ");
        printf("%c\n",186);
        for(i=0;i<28;printf(" "),i++);
        printf("%c",200);
        for(i=0;i<21;printf("%c",205),i++);
        printf("%c\n",188);
        printf("Enter key : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                searchbyname();
                system("cls");
                break;
            case 2:
                searchbyroll();
                system("cls");
                break;
            case 3:
                system("cls");
                return;
            case 4:
                Exit();
            default:
                system("cls");
                printf("Invalid option\nChoose again");
        }
    }
}

void listing(){
    struct student s;
    int i,j;
    int l;
    FILE *f;
    system("color 0d");
    f=fopen("DOSS.txt","r");
    if(f==NULL){
	    printf("\nFile not found!...\n\n");
	    remove("NOS.txt");
	    NOR=0;
	    fclose(f);
	    system("pause");
	    system("cls");
	    saveNOR();
	    return ;
    }
    rewind(f);
    system("cls");
    printf("\n");
    for(i=0;i<15;printf(" "),i++);
    printf("%c",201);
    for(i=0;i<51;printf("%c",205),i++);
    printf("%c\n",187);
    for(i=0;i<15;printf(" "),i++);
    printf("%c",186);
    printf(" S.No.  Roll No.          NAME                CGPA ");
    printf("%c\n",186);
    for(j=0;j<NOR;j++,Sleep(20)){
	    fread((struct student *)&s,sizeof(struct student),1,f);
	    for(i=0;i<15;printf(" "),i++);
	    printf("%c  ",186);
	    l=printf("%d",j+1);for(l=4-l;l>0;printf(" "),l--);
	    printf("     ");
	    l=printf("%d",s.Roll_No);for(l=5-l;l>0;printf(" "),l--);
	    printf("      ");
	    l=printf("%s",s.Name);for(l=20-l;l>0;printf(" "),l--);
	    printf("    ");
	    l=printf("%.2f",s.CGPA);for(l=5-l;l>0;printf(" "),l--);
	    printf("%c\n",186);
    }
    for(i=0;i<15;printf(" "),i++);
    printf("%c",200);
    for(i=0;i<51;printf("%c",205),i++);
    printf("%c\n",188);
    fclose(f);
    system("pause");
    system("cls");
    return ;
}

void deletebyname(){
    char name[20];
    struct student s;
    int j,l,flag=0;
    FILE *c,*f;
    c=fopen("DOSS.txt","r");
    rewind(c);
    nameagain:
    printf("\nEnter Full Name of Student : ");
    fflush(stdin);
    gets(name);
    strupr(name);
    for(int ch=0;name[ch]!='\0';ch++){
        if((name[ch]<=90&&name[ch]>=65)||name[ch]==32);
        else{
            printf("\nInvalid Name( Only alphabets are allowed )!...\nEnter again...\n");
            goto nameagain;
        }
    }
    if(strlen(name)>19){
        printf("\nInvalid Name( Upto 19 characters are allowed which include whitespaces also)!...\nEnter again...\n");
        goto nameagain;
    }
    printf("\nPlease Wait..");Sleep(300);
    for(l=1;l<=NOR;l++){
        fread((struct student *)&s,sizeof(struct student),1,c);
        if(strcmp(s.Name,name)=='\0'){
            flag++;
        }
    }
    if(flag>0){
        rewind(c);
        system("cls");
        f=fopen("fresh.txt","w");
        l=NOR;
        for(j=1;j<=NOR;j++,Sleep(5)){
            fread((struct student *)&s,sizeof(struct student),1,c);
            if(strcmp(s.Name,name)!='\0'){
                fwrite((struct student*)&s,sizeof(struct student),1,f);
            }
        }
        fclose(c);
        fclose(f);
        remove("DOSS.txt");
        rename("fresh.txt","DOSS.txt");
        NOR-=flag;
        saveNOR();
        printf("Record Successfully Deleted!...\n");
        system("pause");
        system("cls");
        return ;
    }
    else{
        printf("\nNo Record Found!...\n");
        system("pause");
        fclose(c);
        return;
    }
}

void deletebyroll(){
    int roll;
    struct student s;
    int j,l,flag=0;
    FILE *c,*f;
    c=fopen("DOSS.txt","r");
    rewind(c);
    do{
            printf("Enter Roll No. : ");
            scanf("%d",&roll);
            if(roll<=0)
                printf("\nInvalid Roll Number!...\nEnter Correctly...\n\n");
            else
                break;
        }while(1);
    printf("\nPlease Wait..");Sleep(300);
    for(l=1;l<=NOR;l++){
        fread((struct student *)&s,sizeof(struct student),1,c);
        if(s.Roll_No==roll){
            flag++;
        }
    }
    if(flag>0){
        rewind(c);
        system("cls");
        f=fopen("fresh.txt","w");
        l=NOR;
        for(j=1;j<=NOR;j++,Sleep(5)){
            fread((struct student *)&s,sizeof(struct student),1,c);
            if(s.Roll_No!=roll){
                fwrite((struct student*)&s,sizeof(struct student),1,f);
            }
        }
        fclose(c);
        fclose(f);
        remove("DOSS.txt");
        rename("fresh.txt","DOSS.txt");
        NOR-=flag;
        printf("Record Successfully Deleted!...\n");
        system("pause");
        system("cls");
        return ;
    }
    else{
        printf("\nNo Record Found!...\n");
        system("pause");
        fclose(c);
        return;
    }
}

void deletion(){
    int i;
    int choice;
    FILE *c;
    system("color 02");
    c=fopen("DOSS.txt","r");
    if(c==NULL){
	    printf("\nFile not found!...\n\n");
	    remove("NOS.txt");
	    NOR=0;
	    system("pause");
	    fclose(c);
	    system("cls");
	    saveNOR();
	    return ;
    }
    fclose(c);
    for(;;){
        printf("\n");
        for(i=0;i<28;printf(" "),i++);
        printf("%c",201);
        for(i=0;i<21;printf("%c",205),i++);
        printf("%c\n",187);
        for(i=0;i<28;printf(" "),i++);
        printf("%c",186);
        printf("                     ");
        printf("%c\n",186);
        for(i=0;i<28;printf(" "),i++);
        printf("%c",186);
        printf("      DELETE BY      ");
        printf("%c\n",186);
        for(i=0;i<28;printf(" "),i++);
        printf("%c",186);
        printf("                     ");
        printf("%c\n",186);
        for(i=0;i<28;printf(" "),i++);
        printf("%c",186);
        printf("1.Delete by Name     ");
        printf("%c\n",186);
        for(i=0;i<28;printf(" "),i++);
        printf("%c",186);
        printf("2.Delete by Roll No. ");
        printf("%c\n",186);
        for(i=0;i<28;printf(" "),i++);
        printf("%c",186);
        printf("3.Main Menu          ");
        printf("%c\n",186);
        for(i=0;i<28;printf(" "),i++);
        printf("%c",186);
        printf("4.Exit               ");
        printf("%c\n",186);
        for(i=0;i<28;printf(" "),i++);
        printf("%c",186);
        printf("                     ");
        printf("%c\n",186);
        for(i=0;i<28;printf(" "),i++);
        printf("%c",200);
        for(i=0;i<21;printf("%c",205),i++);
        printf("%c\n",188);
        printf("Enter key : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                deletebyname();
                system("cls");
                break;
            case 2:
                deletebyroll();
                system("cls");
                break;
            case 3:
                system("cls");
                return;
            case 4:
                Exit();
            default:
                system("cls");
                printf("Invalid option\nChoose again");
        }
    }
}

void sortbycgpa(){
    int j;
    int choice;
    float i,maxr,minr;
    struct student s;
    FILE *c,*f;
    for(;;){
        printf("\n");
        for(i=0;i<28;printf(" "),i++);
        printf("%c",201);
        for(i=0;i<21;printf("%c",205),i++);
        printf("%c\n",187);
        for(i=0;i<28;printf(" "),i++);
        printf("%c",186);
        printf("                     ");
        printf("%c\n",186);
        for(i=0;i<28;printf(" "),i++);
        printf("%c",186);
        printf("1.Decreasing order   ");
        printf("%c\n",186);
        for(i=0;i<28;printf(" "),i++);
        printf("%c",186);
        printf("2.Increasing order   ");
        printf("%c\n",186);
        for(i=0;i<28;printf(" "),i++);
        printf("%c",186);
        printf("3.Back               ");
        printf("%c\n",186);
        for(i=0;i<28;printf(" "),i++);
        printf("%c",186);
        printf("4.Exit               ");
        printf("%c\n",186);
        for(i=0;i<28;printf(" "),i++);
        printf("%c",186);
        printf("                     ");
        printf("%c\n",186);
        for(i=0;i<28;printf(" "),i++);
        printf("%c",200);
        for(i=0;i<21;printf("%c",205),i++);
        printf("%c\n",188);
        printf("Enter key : ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                system("cls");
                break;
            case 2:
                system("cls");
                break;
            case 3:
                system("cls");
                return;
            case 4:
                Exit();
            default:
                system("cls");
                printf("Invalid option\nChoose again");
                continue;
        }
        if(choice==1||choice==2){
            maxr=10.0;
            minr=0.0;
            f=fopen("DOSS.txt","r");
            c=fopen("fresh.txt","w");
            rewind(f);
            break;
        }
    }
    if(choice==1){
        for(i=maxr;i>minr;i-=0.01)
        {
            for(j=1;j<=NOR;j++){
                fread((struct student *)&s,sizeof(struct student),1,f);
                if(s.CGPA>=i&&s.CGPA<=(i+0.01)){
                    fwrite((struct student*)&s,sizeof(struct student),1,c);
                }
            }
            rewind(f);
        }
        printf("Sorted in decreasing order of CGPA\n\n");
    }
    if(choice==2){
        for(i=minr;i<=maxr;i+=0.01){
            for(j=1;j<=NOR;j++){
                fread((struct student *)&s,sizeof(struct student),1,f);
                if(s.CGPA>=i&&s.CGPA<=(i+0.01)){
                    fwrite((struct student*)&s,sizeof(struct student),1,c);
                }
            }
            rewind(f);
        }
        printf("Sorted in increasing order of CGPA\n\n");
    }
    fclose(f);
    fclose(c);
    remove("DOSS.txt");
    rename("fresh.txt","DOSS.txt");
    system("pause");

}

void sortbyroll(){
    int i,j;
    int choice,maxr,minr;
    struct student s;
    FILE *c,*f;
    for(;;){
        printf("\n");
        for(i=0;i<28;printf(" "),i++);
        printf("%c",201);
        for(i=0;i<21;printf("%c",205),i++);
        printf("%c\n",187);
        for(i=0;i<28;printf(" "),i++);
        printf("%c",186);
        printf("                     ");
        printf("%c\n",186);
        for(i=0;i<28;printf(" "),i++);
        printf("%c",186);
        printf("1.Decreasing order   ");
        printf("%c\n",186);
        for(i=0;i<28;printf(" "),i++);
        printf("%c",186);
        printf("2.Increasing order   ");
        printf("%c\n",186);
        for(i=0;i<28;printf(" "),i++);
        printf("%c",186);
        printf("3.Back               ");
        printf("%c\n",186);
        for(i=0;i<28;printf(" "),i++);
        printf("%c",186);
        printf("4.Exit               ");
        printf("%c\n",186);
        for(i=0;i<28;printf(" "),i++);
        printf("%c",186);
        printf("                     ");
        printf("%c\n",186);
        for(i=0;i<28;printf(" "),i++);
        printf("%c",200);
        for(i=0;i<21;printf("%c",205),i++);
        printf("%c\n",188);
        printf("Enter key : ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                system("cls");
                break;
            case 2:
                system("cls");
                break;
            case 3:
                system("cls");
                return;
            case 4:
                Exit();
            default:
                system("cls");
                printf("Invalid option\nChoose again");
                continue;
        }
        if(choice==1||choice==2){
            maxr=minr=0;
            f=fopen("DOSS.txt","r");
            c=fopen("fresh.txt","w");
            rewind(f);
            for(i=0;i<NOR;i++){
                fread((struct student*)&s,sizeof(struct student),1,f);
                if(s.Roll_No>maxr)
                    maxr=s.Roll_No;
                if(s.Roll_No<minr||minr==0)
                    minr=s.Roll_No;
            }
            rewind(f);
            break;
        }
    }
    if(choice==1){
        for(i=maxr;i>=minr;i--)
        {
            for(j=1;j<=NOR;j++){
                fread((struct student *)&s,sizeof(struct student),1,f);
                if(s.Roll_No==i){
                    fwrite((struct student*)&s,sizeof(struct student),1,c);
                }
            }
            rewind(f);
        }
        printf("Sorted in decreasing order of roll number\n\n");
    }
    if(choice==2){
        for(i=minr;i<=maxr;i++){
            for(j=1;j<=NOR;j++){
                fread((struct student *)&s,sizeof(struct student),1,f);
                if(s.Roll_No==i){
                    fwrite((struct student*)&s,sizeof(struct student),1,c);
                }
            }
            rewind(f);
        }
        printf("Sorted in increasing order of roll number\n\n");
    }
    fclose(f);
    fclose(c);
    remove("DOSS.txt");
    rename("fresh.txt","DOSS.txt");
    system("pause");
}

void sortbyname(){
int i,j;
    int choice;
    struct student s;
    struct student *data;
    FILE *c,*f;
    for(;;){
        printf("\n");
        for(i=0;i<28;printf(" "),i++);
        printf("%c",201);
        for(i=0;i<21;printf("%c",205),i++);
        printf("%c\n",187);
        for(i=0;i<28;printf(" "),i++);
        printf("%c",186);
        printf("                     ");
        printf("%c\n",186);
        for(i=0;i<28;printf(" "),i++);
        printf("%c",186);
        printf("1.A to Z order       ");
        printf("%c\n",186);
        for(i=0;i<28;printf(" "),i++);
        printf("%c",186);
        printf("2.Z to A order       ");
        printf("%c\n",186);
        for(i=0;i<28;printf(" "),i++);
        printf("%c",186);
        printf("3.Back               ");
        printf("%c\n",186);
        for(i=0;i<28;printf(" "),i++);
        printf("%c",186);
        printf("4.Exit               ");
        printf("%c\n",186);
        for(i=0;i<28;printf(" "),i++);
        printf("%c",186);
        printf("                     ");
        printf("%c\n",186);
        for(i=0;i<28;printf(" "),i++);
        printf("%c",200);
        for(i=0;i<21;printf("%c",205),i++);
        printf("%c\n",188);
        printf("Enter key : ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                system("cls");
                break;
            case 2:
                system("cls");
                break;
            case 3:
                system("cls");
                return;
            case 4:
                Exit();
            default:
                system("cls");
                printf("Invalid option\nChoose again");
                continue;
        }
        if(choice==1||choice==2){
            data=(struct student*) malloc(NOR*sizeof(struct student));
            f=fopen("DOSS.txt","r");
            c=fopen("fresh.txt","w");
            rewind(f);
            for(i=0;i<NOR;i++){
                fread((struct student*)&s,sizeof(struct student),1,f);
                data[i]=s;
            }
            rewind(f);
            break;
        }
    }
    if(choice==1){
        for(i=0;i<NOR-1;i++){
            for(j=i+1;j<NOR;j++){
                if(strcmp(data[i].Name,data[j].Name)>0){
                    struct student temp=data[i];
                    data[i]=data[j];
                    data[j]=temp;
                }

            }
        }
        printf("Sorted in A to Z order of Names\n\n");
    }
    if(choice==2){
        for(i=0;i<NOR-1;i++){
            for(j=i+1;j<NOR;j++){
                if(strcmp(data[i].Name,data[j].Name)<0){
                    struct student temp=data[i];
                    data[i]=data[j];
                    data[j]=temp;
                }
            }
        }
        printf("Sorted in Z to A order of Names\n\n");
    }
    for(i=0;i<NOR;i++){
                fwrite((struct student*)&data[i],sizeof(struct student),1,c);
            }
    fclose(f);
    rewind(c);
    fclose(c);
    free(data);
    remove("DOSS.txt");
    rename("fresh.txt","DOSS.txt");
    system("pause");
}

void sorting(){
    int i;
    int choice;
    FILE *c;
    system("color 0b");
    c=fopen("DOSS.txt","r");
    if(c==NULL){
	    printf("\nFile not found!...\n\n");
	    remove("NOS.txt");
	    NOR=0;
	    system("pause");
	    fclose(c);
	    system("cls");
	    saveNOR();
	    return ;
    }
    fclose(c);
    for(;;){
        printf("\n");
        for(i=0;i<28;printf(" "),i++);
        printf("%c",201);
        for(i=0;i<21;printf("%c",205),i++);
        printf("%c\n",187);
        for(i=0;i<28;printf(" "),i++);
        printf("%c",186);
        printf("                     ");
        printf("%c\n",186);
        for(i=0;i<28;printf(" "),i++);
        printf("%c",186);
        printf("       SORT BY       ");
        printf("%c\n",186);
        for(i=0;i<28;printf(" "),i++);
        printf("%c",186);
        printf("                     ");
        printf("%c\n",186);
        for(i=0;i<28;printf(" "),i++);
        printf("%c",186);
        printf("1.Sort by Name       ");
        printf("%c\n",186);
        for(i=0;i<28;printf(" "),i++);
        printf("%c",186);
        printf("2.Sort by Roll No.   ");
        printf("%c\n",186);
        for(i=0;i<28;printf(" "),i++);
        printf("%c",186);
        printf("3.Sort by CGPA       ");
        printf("%c\n",186);
        for(i=0;i<28;printf(" "),i++);
        printf("%c",186);
        printf("4.Main Menu          ");
        printf("%c\n",186);
        for(i=0;i<28;printf(" "),i++);
        printf("%c",186);
        printf("5.Exit               ");
        printf("%c\n",186);
        for(i=0;i<28;printf(" "),i++);
        printf("%c",186);
        printf("                     ");
        printf("%c\n",186);
        for(i=0;i<28;printf(" "),i++);
        printf("%c",200);
        for(i=0;i<21;printf("%c",205),i++);
        printf("%c\n",188);
        printf("Enter key : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                sortbyname();
                system("cls");
                break;
            case 2:
                sortbyroll();
                system("cls");
                break;
            case 3:
                sortbycgpa();
            case 4:
                system("cls");
                return;
            case 5:
                Exit();
            default:
                system("cls");
                printf("Invalid option\nChoose again");
        }

		fflush(stdin);
		listing();
    }
}

void files_already(){
    FILE *n;
    SetConsoleTitleA("Student Record System built by Mr. PREM DHADKAR (OIST 0105CS171079)");
    struct student s;
    n=fopen("NOS.txt","r");
    if(n==NULL){
	    NOR=0;
	    fclose(n);
	    n=fopen("NOS.txt","w");
	    fwrite((int *)&NOR,sizeof(int),1,n);
	    fclose(n);
    }
    else{
	rewind(n);
	fread((int *)&NOR,sizeof(int),1,n);
	fclose(n);
    }
}

void control(){
do{
    int choice;
	choice=menu();
	switch(choice)
	{
	case 1:
		insertion();
		system("cls");
		break;
      case 2:
		deletion();
		system("cls");
		break;
	case 4:
		sorting();
		system("cls");
		break;
	case 3:
		searching();
		system("cls");
		break;
	case 5:
		listing();
		break;
	case 6:
		printf("\nTOTAL STUDENTS:- %d\n",NOR);
		system("pause");
		system("cls");
		break;
    case 7:
        NOR=0;
        system("color 0c");
        remove("DOSS.txt");
        remove("NOS.txt");
        printf("All Files are Deleted!...");
        Sleep(1500);
        system("cls");
        break;
    case 8:
		Exit();
	default:
		system("cls");
		printf("Invalid option\nChoose again");
	}
    }while(1);
}

int main(){
    files_already();
    terms_conditions();
    control();

}
