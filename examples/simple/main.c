#include <stdint.h>
#include <stdbool.h>
#include <uart/uart.h>

#define reg_uart_clkdiv (*(volatile uint32_t*)0x02000004)
#define reg_uart_data (*(volatile uint32_t*)0x02000008)

void main() {
    reg_uart_clkdiv = 217; // 25000000 / 115200

    print("Hello World!\n");
}
