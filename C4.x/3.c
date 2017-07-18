//  4-14-2

#include <stdio.h>
#include <ctype.h>

int main(int argc, char const *argv[]) {
    for (size_t i = 0; i < 128; i++) {
        if(i < 100) {
            if (isgraph(i)) {
                printf("%lu                        %c\n",i, i);
            }
        } else if (isgraph(i)){
            printf("%lu                       %c\n",i, i );
        }
    }
    return 0;
}
