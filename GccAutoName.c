#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc,char *argv[]){
	if(argc < 2){
		fprintf(stderr,"%s: error number of arguments!\n",argv[0]);
		exit(1);
	}
	char cmd[256]="gcc -o ";
	char out_name[256]={0};
//	printf("argv[1]=%s,strlen(argv[1])=%lu\n",argv[1],strlen(argv[1]));
    strncpy(out_name,argv[1],strlen(argv[1])-2);
	printf("\033[1;35;40m This version just only support one argment!\033[0m\n");
	strcat(cmd,out_name);	
	strcat(cmd," ");
    strcat(cmd,argv[1]);
//	printf("%s\n",cmd);
	if(system(cmd)){
		exit(1);
	}else{
		printf(" The output file is \"%s\"\n",out_name);
	}
	exit(0);
}
