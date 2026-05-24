# RFID-Based-Attendance-System-with-Database-Integration

## Project Overview
This project is an RFID-based attendance system developed using LPC2129 microcontroller and Linux system communication.

The system reads RFID card data through UART communication and sends the data to Linux OS. In Linux, a C program using termios API receives RFID data and stores attendance details using a singly linked list.

## Features
- RFID card detection
- UART serial communication
- Linux termios API usage
- Attendance data storage
- Linked list implementation
- Real-time attendance monitoring

## Hardware Used
- LPC2129 ARM7 Microcontroller
- RFID Reader
- UART Communication
- Power Supply

## Software Used
- Embedded C
- Linux OS
- GCC Compiler
- termios API
- Keil IDE

## Working Process
1. RFID card is scanned.
2. RFID reader sends card ID to LPC2129.
3. LPC2129 transmits data through UART.
4. Linux system receives data using termios API.
5. C program processes received data.
6. Singly linked list stores attendance details.
7. Attendance information is displayed.

## Files Description
- `Rfid_Reader.c` : RFID data reading logic
- `linked_list.c` : Attendance data storage
- `uart.c` : UART communication functions

## Future Improvements
- Database integration
- GUI application
- Cloud attendance storage

## Author
Harish Badam
