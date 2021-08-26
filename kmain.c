#include "driver/writer.c"
#include "driver/serial_port.h"
#include "segmentation/memory_segments.h"
#include "interrupts/keyboard.h"
#include "interrupts/interrupts.h"
#include "multiboot.h"

void init(){

    
    //initialize segment descriptor tables
    segments_install_gdt();
    
    //initialize interrupt descriptor table
    interrupts_install_idt();
	
	
}
void kmain(unsigned int ebx){
    init();
    
    multiboot_info_t *mbinfo = (multiboot_info_t *) ebx;
    multiboot_module_t* modules = (multiboot_module_t*) mbinfo->mods_addr; 
    unsigned int address_of_module = modules->mod_start;

    if(mbinfo->mods_count == 1){
    
    	//kernel display
    	char ptr1[]="Hello! Welcome to MoonOS";
	char ptr2[]="Hello! I'm Tharushi!";
	fb_write_str(ptr1,24);
	
	//serial writing
	serial_write(ptr2,20);
	
	typedef void (*call_module_t)(void);
        /* ... */
        call_module_t start_program = (call_module_t) address_of_module;
        start_program();
        /* we'll never get here, unless the module code returns */
	
	
	}else{
	
	char errorMsg[] = "Error: Number of modules loaded is not equal to 1.\n";
        unsigned int err_len = sizeof(errorMsg) / sizeof(errorMsg[0]);
        fb_write_str(errorMsg, err_len);
        serial_write(errorMsg, err_len);
    }
}

