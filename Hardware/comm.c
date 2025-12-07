#include "header.h"
//*********************************************************************************************************
extern UART_HandleTypeDef huart1; // 调试串口:printf文本，用于调试
//*********************************************************************************************************
static char debug_buffer[128];
//*********************************************************************************************************
/**
 * @name    Debug_prinf()
 * @brief   自定义串口(使用串口1)发送文本
 * @note    用于向电脑发送串口信息，用于调试
 * @param   *text:文本
 * @param   ...:可变变量
 */
void Debug_printf(const char *text, ...)
{
    va_list args;
    va_start(args, text);
    int len = vsnprintf(debug_buffer, sizeof(debug_buffer), text, args);
    va_end(args);
    if (len > 0)
    {
        HAL_UART_Transmit(&huart1, (uint8_t *)debug_buffer, len, 100);
    }
}
