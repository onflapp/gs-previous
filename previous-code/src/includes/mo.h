void MO_Reset(void);
void MO_Insert(int disk);
void MO_Eject(int disk);

void MO_InterruptHandler(void);
void MO_IO_Handler(void);
void ECC_IO_Handler(void);

typedef struct {
    uint8_t data[1296];
    uint32_t size;
    uint32_t limit;
} OpticalDiskBuffer;

extern OpticalDiskBuffer ecc_buffer[2];

extern int eccin;
extern int eccout;

void MO_TrackNumH_Read(void);
void MO_TrackNumH_Write(void);
void MO_TrackNumL_Read(void);
void MO_TrackNumL_Write(void);
void MO_SectorIncr_Read(void);
void MO_SectorIncr_Write(void);
void MO_SectorCnt_Read(void);
void MO_SectorCnt_Write(void);
void MO_IntStatus_Read(void);
void MO_IntStatus_Write(void);
void MO_IntMask_Read(void);
void MO_IntMask_Write(void);
void MOctrl_CSR2_Read(void);
void MOctrl_CSR2_Write(void);
void MOctrl_CSR1_Read(void);
void MOctrl_CSR1_Write(void);
void MO_CSR_L_Read(void);
void MO_CSR_L_Write(void);
void MO_CSR_H_Read(void);
void MO_CSR_H_Write(void);
void MO_ErrStat_Read(void);
void MO_EccCnt_Read(void);
void MO_Init_Write(void);
void MO_Format_Write(void);
void MO_Mark_Write(void);
void MO_Flag0_Read(void);
void MO_Flag0_Write(void);
void MO_Flag1_Read(void);
void MO_Flag1_Write(void);
void MO_Flag2_Read(void);
void MO_Flag2_Write(void);
void MO_Flag3_Read(void);
void MO_Flag3_Write(void);
void MO_Flag4_Read(void);
void MO_Flag4_Write(void);
void MO_Flag5_Read(void);
void MO_Flag5_Write(void);
void MO_Flag6_Read(void);
void MO_Flag6_Write(void);
