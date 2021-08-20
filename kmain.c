#include "driver/writer.c"
#include "driver/serial_port.h"
#include "segmentation/memory_segments.h"
#include "interrupts/keyboard.h"
#include "interrupts/interrupts.h"

void kmain(){

	segments_install_gdt();	
	
	char ptr1[]="Hello! Welcome to MoonOS";
	char ptr2[]="Hello! I'm Tharushi!";
	fb_write_str(ptr1,24);
	serial_write(ptr2,20);
	
	interrupts_install_idt();
}

