#include "driver/io.h"
#include "driver/writer.h"
#include "driver/serial_port.h"
#include "segmentation/memory_segments.h"

void kmain(){

	segments_install_gdt();	
	
	char ptr1[]="Hello! Welcome to MoonOS";
	char ptr2[]="Hello! I'm Tharushi!";
	fb_write(24,ptr1);
	serial_write(0x3F8,ptr2,20);
}

