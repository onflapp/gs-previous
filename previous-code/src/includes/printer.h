void LP_CSR0_Read(void);
void LP_CSR0_Write(void);
void LP_CSR1_Read(void);
void LP_CSR1_Write(void);
void LP_CSR2_Read(void);
void LP_CSR2_Write(void);
void LP_CSR3_Read(void);
void LP_CSR3_Write(void);
void LP_Data_Read(void);
void LP_Data_Write(void);

typedef struct {
    uint8_t data[64*1024];
    int size;
    int limit;
} PrinterBuffer;

extern PrinterBuffer lp_buffer;

void Printer_Reset(void);
void Printer_IO_Handler(void);
