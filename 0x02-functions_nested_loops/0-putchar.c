#include <unistd.h>

int main() {
    const char my_m = "_putchar\n";
    ssize_t bytes_written = write(1, my_m, sizeof(my_m) - 1);
    
    return (bytes_written == sizeof(my_m - 1) ? 0 : 1;
}
