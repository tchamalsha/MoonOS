# MoonOS
This is an Operating System which is made using the littleosbook (https://littleosbook.github.io).

To every sub topic I have made a seperate branch and a blog article. Carefully read the articles and reference materilals in order to make your own OS.
Files which should be created in paticuler segment is mentioned under bellow.

## 1. Booting

* loader.s
* link.ld
* menu.lst
* borchsrc.txt

Blog article : https://tharu-chamalsha.medium.com/implementing-operating-system-dbe9961971dd <br>
Branch       : https://github.com/tchamalsha/MoonOS/tree/setup_booting_os

## 2. Getting to c

* kmain.c
* makefile

Blog article : https://tharu-chamalsha.medium.com/implementing-an-operating-system-2-f003d1a4f9c <br>
Branch       : https://github.com/tchamalsha/MoonOS/tree/implement_with_c

## 3. Output

* io.s
* io.h
* writer.h
* writer.c
* serial_port.c
* serial_port.h

Blog article : https://tharu-chamalsha.medium.com/implementing-operating-system-3-1acc3dc96a52 <br>
Branch       : https://github.com/tchamalsha/MoonOS/tree/setup_booting_os

## 4. Segmentation

* gdt.s
* memory_segments.c
* memory_segments.h

Blog article : https://tharu-chamalsha.medium.com/implementing-operating-system-4-a3c558871c95 <br>
Branch       : https://github.com/tchamalsha/MoonOS/tree/integrate_segmentation

## 5. Interrupts and inputs

* idt.s
* interrupt_handlers.c
* interrupt_handlers.h

Blog article : https://tharu-chamalsha.medium.com/implementing-operating-system-5-b6c191c5a9bb <br>
Branch       : https://github.com/tchamalsha/MoonOS/tree/interrupts_and_inputs/interrupts

## 6. The road to user mode

* multiboot.h
* program.s

Blog article : https://tharu-chamalsha.medium.com/implementing-operating-system-6-e86270e6844c <br>
Branch       : https://github.com/tchamalsha/MoonOS/tree/integrate_user_modes

## 7. Virtual Memory

* paging.c
* paging.s

Blog article : https://tharu-chamalsha.medium.com/implementing-operating-system-7-8958875d5f88 <br>
Branch       : https://github.com/tchamalsha/MoonOS/tree/page_frame_allocation

## 8. Paging

* log.h
* common.c
* common.h
* kheap.h
* kheap.c

Blog article : https://tharu-chamalsha.medium.com/implementing-operating-system-8-970bd0fdcb8c <br>
Branch       : https://github.com/tchamalsha/MoonOS/tree/page_frame_allocation-2

## Resources
* https://github.com/philippeLG/littleOS
* https://littleosbook.github.io
* https://github.com/ragu-manjegowda/vivitsa
