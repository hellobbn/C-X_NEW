#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "stdbool.h"
int main(int argc, char const *argv[])
{
    int cnt = 0;
    int STR_NUM = 10;                                                //    initialize the number of strings
    int BUFF_LEN = 100;                                                //    the size of buff
    int STR_NUM_ADD_PER_STEP = 1;                                    //    when add str_num is needed, it will automatically allocate memory for str
    char** str = calloc(STR_NUM, sizeof(char*));                    //    a var to store all the strings
    char buff[BUFF_LEN];                                            //    a var to temporarily store one string -- eaual to char** str
    char *ptr = NULL;
    int str_len;
    while(true)                                                     //    this part will store all the input and automatically use realloc to increase thr memory use
    {
        ptr = fgets(buff, BUFF_LEN, stdin);
        if (!ptr)
        {
            printf("error\n");
        }
        if (*buff == '\n')
        {
            break;
        }
        if (cnt == STR_NUM)
        {
            STR_NUM += STR_NUM_ADD_PER_STEP;
            str = realloc(str, STR_NUM);
        }
        str_len = strlen(buff);
        str[cnt] = malloc(str_len);
        if (!(strcpy(str[cnt], ptr)))
        {
            printf("DEBUG: Error copying string from buff to str[%d]\n",cnt );
            return 1;
        }
        cnt += 1;
    }
    int job_done = 0;
    while(!job_done) {
        for (int i = 0; i < cnt - 1; ++i)
        {
            if (strcmp(str[i], str[i + 1]) > 0)
            {
                char* temp = NULL;
                temp = str[i];
                str[i + 1] = str[i];
                str[i] = temp;
            }
        }
    }
    
    for (int i = 0; i < cnt; ++i)
    {
        printf("%s\n", *(str + i));
    }
    free(str);
    str = NULL;
    return 0;
}
