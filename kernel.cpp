
void printf(char* str)
{
    unsigned short* videoMem = (unsigned short*)0xb8000;

    for (int i = 0; str[i] != '\0'; ++i)
        videoMem[i] = (videoMem[i] & 0xFF00) | str[i];
}

extern "C" void kernelMain(void* multiboot_structure, unsigned int magicnumber)
{
    printf("Welcome to the first boot of CylinOS...");

    while(1);
}
