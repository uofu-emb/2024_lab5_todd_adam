// #include <stdio.h>
// #include <pico/stdlib.h>

// #define DELAY_MS 100
// #define IN_PIN 6
// #define OUT_PIN 7 

// int main(void)
// {
//     int toggle = 0;
//     stdio_init_all();
//     gpio_init(OUT_PIN);
//     gpio_set_dir(OUT_PIN, GPIO_OUT);
//     gpio_put(OUT_PIN, toggle);

//     while (true) {
//         toggle = !toggle;
//         gpio_put(OUT_PIN, toggle);
//         sleep_ms(DELAY_MS);
//     }
// }


#include <stdio.h>

#include "FreeRTOS.h"
#include "task.h"

#include "pico/stdlib.h"
#include "pico/multicore.h"
#include "pico/cyw43_arch.h"

#define DELAY_MS 100
#define IN_PIN 6
#define OUT_PIN 7 

int count = 0;
int num = 0;
bool on = false;
int toggle = 0;

// #define MAIN_TASK_PRIORITY      ( tskIDLE_PRIORITY + 1UL )
// #define BLINK_TASK_PRIORITY     ( tskIDLE_PRIORITY + 2UL )
// #define MAIN_TASK_STACK_SIZE configMINIMAL_STACK_SIZE
// #define BLINK_TASK_STACK_SIZE configMINIMAL_STACK_SIZE

// void blink_task(__unused void *params) {
//     hard_assert(cyw43_arch_init() == PICO_OK);
//     while (true) {
//         cyw43_arch_gpio_put(CYW43_WL_GPIO_LED_PIN, on);
//         if (count++ % 11) on = !on;
//         vTaskDelay(250);
//     }
// }

// void main_task(__unused void *params) {
//     xTaskCreate(blink_task, "BlinkThread",
//                 BLINK_TASK_STACK_SIZE, NULL, BLINK_TASK_PRIORITY, NULL);
//     char c;
//     while(c = getchar()) {
//         if (c <= 'z' && c >= 'a') putchar(c - 32);
//         else if (c >= 'A' && c <= 'Z') putchar(c + 32);
//         else putchar(c);
//     }
// }

int main( void )
{
    //printf("hello world");

     stdio_init_all();
    while(num < 100){
        printf("hello world %d\n", num);
        num++;
        sleep_ms(250);
    }
    gpio_init(OUT_PIN);
    gpio_set_dir(OUT_PIN, GPIO_OUT);
    gpio_put(OUT_PIN, toggle);

    while (true) {
        toggle = !toggle;
        gpio_put(OUT_PIN, toggle);
        sleep_ms(DELAY_MS);
    }
    // stdio_init_all();
    // while(count < 250){
    //         printf("Hello world %d\n", count);
    //         count++;
    //     }
    // printf("hello world");
    // const char *rtos_name;
    // rtos_name = "FreeRTOS";
    // TaskHandle_t task;
    // xTaskCreate(main_task, "MainThread",
    //             MAIN_TASK_STACK_SIZE, NULL, MAIN_TASK_PRIORITY, &task);
    // vTaskStartScheduler();
    return 0;
}


// int main(void)
// {
//     stdio_init_all();
//     int toggle = 0;
//     int count = 0;
//     //stdio_init_all();
//      while(count < 250){
//             printf("Hello world %d\n", count);
//             count++;
//         }
//     gpio_init(OUT_PIN);
//     gpio_set_dir(OUT_PIN, GPIO_OUT);
//     gpio_put(OUT_PIN, toggle);
//  vTaskStartScheduler();
    // while (true) {
    //     while(count < 250){
    //         printf("Hello world %d\n", count);
    //         count++;
    //     }


    //     toggle = !toggle;
    //     volatile int baseValue = 9898;
    //     volatile int temp = 0;
    //     for(int i = 0; i < 1000; i++)
    //     {
    //         temp = baseValue++/7;
    //     }
    //     temp++;
    //     gpio_put(OUT_PIN, toggle);
    //     sleep_ms(DELAY_MS);
    // }
//}