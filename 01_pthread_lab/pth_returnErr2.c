#include <stdio.h>
#include <pthread.h>
#include <malloc.h>

void *thread(void *vargp) {
        int value = 42;
        pthread_exit((void *)&value);
}

int main() {
        int i;
        pthread_t tid;
        void *vptr_return = malloc(sizeof(int));

        pthread_create(&tid, NULL, thread, NULL);
        pthread_join(tid, &vptr_return);

        i = *((int *)vptr_return);
        printf("%d\n",i);
}
