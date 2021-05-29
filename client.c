// Client Code

#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include<error.h>
#include<sys/socket.h>
#include<sys/types.h>
#include<netinet/in.h>
#include<arpa/inet.h>

#define BUFFER  1024

main(int argc,char **argv)
{
        struct sockaddr_in client_c;
        int sock;
        int data_len;
        char data_in[BUFFER];
        char data_out[BUFFER];

        if((sock=socket(AF_INET,SOCK_STREAM,0))<0)
        {
                perror("\nsocket creation error");
        }

        memset(&client_c,0,sizeof(client_c));
        client_c.sin_family=AF_INET;
        client_c.sin_port=htons(atoi(argv[2]));
        client_c.sin_addr.s_addr=inet_addr(argv[1]);
        bzero(&client_c.sin_zero,8);

        if((connect(sock,(struct sockaddr *)&client_c,sizeof(struct sockaddr_in)))<0)

        {
               perror("\nconnection fail");
	}

        while(1)
        {
                fgets(data_in,BUFFER,stdin);
                send(sock,data_in,strlen(data_in),0);

                data_len=recv(sock,data_out,BUFFER,0);
                data_out[data_len]='\0';

                printf("\necho msg:%s",data_out);

                if((strcmp(data_out,"over\n"))==0)
                        break;
        }

        printf("\n\nConnection terminated.....\n\n");
        close(sock);

}
