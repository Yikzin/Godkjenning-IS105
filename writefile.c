#include <fcntl.h>

int main(){
	
	int fd, sz;

	fd = open("bar.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if(fd < 0) {
	perror("feil ved skriving av filen"); exit(1);
	}
	sz = write(fd, "Hello\0", 6);
	
	close(fd);
}
