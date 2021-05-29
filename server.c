// Server Code

#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include<error.h>
#include<sys/socket.h>
#include<sys/types.h>
#include<netinet/in.h>
#include<arpa/inet.h>

#define BUFFER          1024
#define MAX_CLIENT      2

main(int argc,char **argv)
{
        struct sockaddr_in server;
        struct sockaddr_in client;
        int sock,new,data_len;
        int len=sizeof(struct sockaddr_in);
        char data[BUFFER];

        if((sock=socket(AF_INET,SOCK_STREAM,0))<0)
        {
                perror("\nsocket connection fail");
        }

        memset(&server,0,sizeof(server));
        memset(&client,0,sizeof(client));

        server.sin_family=AF_INET;
        server.sin_port=htons(atoi(argv[1]));
        server.sin_addr.s_addr=INADDR_ANY;
        bzero(&server.sin_zero,8);

        if(bind(sock,(struct sockaddr *)&server,len)<0)
	{
                perror("\nbind fail");
        }

        if((listen(sock,MAX_CLIENT))<0)
        {
                perror("\nlisten fail");
        }

        while(1)
        {

        printf("\nWaiting for clients.....\n\n");


        if((new=accept(sock,(struct sockaddr *)&client,&len))<0)
        {
                perror("\nlisten fail");
        }

        printf("\nnew client is connected with ip %s and port %d\n",inet_ntoa(client.sin_addr),ntohs(client.sin_port));

        while(1)
        {
                data_len=recv(new,data,BUFFER,0);
                data[data_len]='\0';

                if(data_len)
                {
                        printf("\nclient msg:%s",data);
                        send(new,data,data_len,0);

                        if((strcmp(data,"over\n"))==0)
			break;
		}
        }

        close(new);
        printf("\nconnection terminated........\n\n");

     }
close(sock);

}
