# Running step


1. Set environment variable
```
$ source set-env.sh # (need type root password)
$ gcc -fno-stack-protector print-env.c -o print-env
$ print-env # MYSHELL address is 0xbfffffe8c command /bin/sh
```



