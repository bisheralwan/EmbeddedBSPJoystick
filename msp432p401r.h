
#ifndef __MSP432P401R_H__
#define __MSP432P401R_H__

// Use standard integer types with explicit width
#include <stdint.h>

// Remap MSP430 intrinsics to ARM equivalents
#include "msp_compatibility.h"

//*****************************************************************************
// CMSIS-compatible Interrupt Number Definition
//*****************************************************************************
#ifndef __CMSIS_CONFIG__
#define __CMSIS_CONFIG__

typedef enum IRQn
{
  // Cortex-M4 Processor Exceptions Numbers
  NonMaskableInt_IRQn         = -14,    /*  2 Non Maskable Interrupt */
  HardFault_IRQn              = -13,    /*  3 Hard Fault Interrupt */
  MemoryManagement_IRQn       = -12,    /*  4 Memory Management Interrupt */
  BusFault_IRQn               = -11,    /*  5 Bus Fault Interrupt */
  UsageFault_IRQn             = -10,    /*  6 Usage Fault Interrupt */
  SVCall_IRQn                 = -5,     /* 11 SV Call Interrupt */
  DebugMonitor_IRQn           = -4,     /* 12 Debug Monitor Interrupt */
  PendSV_IRQn                 = -2,     /* 14 Pend SV Interrupt */
  SysTick_IRQn                = -1,     /* 15 System Tick Interrupt */
  //  Peripheral Exceptions Numbers
  PSS_IRQn                    =  0,     /* 16 PSS Interrupt */
  CS_IRQn                     =  1,     /* 17 CS Interrupt */
  PCM_IRQn                    =  2,     /* 18 PCM Interrupt */
  WDT_A_IRQn                  =  3,     /* 19 WDT_A Interrupt */
  FPU_IRQn                    =  4,     /* 20 FPU Interrupt */
  FLCTL_IRQn                  =  5,     /* 21 FLCTL Interrupt */
  COMP_E0_IRQn                =  6,     /* 22 COMP_E0 Interrupt */
  COMP_E1_IRQn                =  7,     /* 23 COMP_E1 Interrupt */
  TA0_0_IRQn                  =  8,     /* 24 TA0_0 Interrupt */
  TA0_N_IRQn                  =  9,     /* 25 TA0_N Interrupt */
  TA1_0_IRQn                  = 10,     /* 26 TA1_0 Interrupt */
  TA1_N_IRQn                  = 11,     /* 27 TA1_N Interrupt */
  TA2_0_IRQn                  = 12,     /* 28 TA2_0 Interrupt */
  TA2_N_IRQn                  = 13,     /* 29 TA2_N Interrupt */
  TA3_0_IRQn                  = 14,     /* 30 TA3_0 Interrupt */
  TA3_N_IRQn                  = 15,     /* 31 TA3_N Interrupt */
  EUSCIA0_IRQn                = 16,     /* 32 EUSCIA0 Interrupt */
  EUSCIA1_IRQn                = 17,     /* 33 EUSCIA1 Interrupt */
  EUSCIA2_IRQn                = 18,     /* 34 EUSCIA2 Interrupt */
  EUSCIA3_IRQn                = 19,     /* 35 EUSCIA3 Interrupt */
  EUSCIB0_IRQn                = 20,     /* 36 EUSCIB0 Interrupt */
  EUSCIB1_IRQn                = 21,     /* 37 EUSCIB1 Interrupt */
  EUSCIB2_IRQn                = 22,     /* 38 EUSCIB2 Interrupt */
  EUSCIB3_IRQn                = 23,     /* 39 EUSCIB3 Interrupt */
  ADC14_IRQn                  = 24,     /* 40 ADC14 Interrupt */
  T32_INT1_IRQn               = 25,     /* 41 T32_INT1 Interrupt */
  T32_INT2_IRQn               = 26,     /* 42 T32_INT2 Interrupt */
  T32_INTC_IRQn               = 27,     /* 43 T32_INTC Interrupt */
  AES256_IRQn                 = 28,     /* 44 AES256 Interrupt */
  RTC_C_IRQn                  = 29,     /* 45 RTC_C Interrupt */
  DMA_ERR_IRQn                = 30,     /* 46 DMA_ERR Interrupt */
  DMA_INT3_IRQn               = 31,     /* 47 DMA_INT3 Interrupt */
  DMA_INT2_IRQn               = 32,     /* 48 DMA_INT2 Interrupt */
  DMA_INT1_IRQn               = 33,     /* 49 DMA_INT1 Interrupt */
  DMA_INT0_IRQn               = 34,     /* 50 DMA_INT0 Interrupt */
  PORT1_IRQn                  = 35,     /* 51 PORT1 Interrupt */
  PORT2_IRQn                  = 36,     /* 52 PORT2 Interrupt */
  PORT3_IRQn                  = 37,     /* 53 PORT3 Interrupt */
  PORT4_IRQn                  = 38,     /* 54 PORT4 Interrupt */
  PORT5_IRQn                  = 39,     /* 55 PORT5 Interrupt */
  PORT6_IRQn                  = 40      /* 56 PORT6 Interrupt */
} IRQn_Type;

//*****************************************************************************
// CMSIS-compatible configuration of the Cortex-M4 Processor and Core Peripherals
//*****************************************************************************
#define __MPU_PRESENT           1     // MPU present or not
#define __NVIC_PRIO_BITS        3     // Number of Bits used for Prio Levels
#define __FPU_PRESENT           1     // FPU present or not

#endif // __CMSIS_CONFIG__

// Include CMSIS Cortex-M4 Core Peripheral Access Layer Header File
#ifdef __TMS470__
#pragma diag_push
#pragma CHECK_ULP("none")
#include "core_cm4.h"
#pragma diag_pop
#else
#include "core_cm4.h"
#endif

//*****************************************************************************
// Definition of standard bits
//*****************************************************************************
#define BIT0                                               (0x0001u)
#define BIT1                                               (0x0002u)
#define BIT2                                               (0x0004u)
#define BIT3                                               (0x0008u)
#define BIT4                                               (0x0010u)
#define BIT5                                               (0x0020u)
#define BIT6                                               (0x0040u)
#define BIT7                                               (0x0080u)
#define BIT8                                               (0x0100u)
#define BIT9                                               (0x0200u)
#define BITA                                               (0x0400u)
#define BITB                                               (0x0800u)
#define BITC                                               (0x1000u)
#define BITD                                               (0x2000u)
#define BITE                                               (0x4000u)
#define BITF                                               (0x8000u)
#define BIT(x)                                             (1 << (x))

//*****************************************************************************
// Definitions for 8/16/32-bit wide memory access
//*****************************************************************************
#define HWREG8(x)                                          (*((volatile uint8_t *)(x)))
#define HWREG16(x)                                         (*((volatile uint16_t *)(x)))
#define HWREG32(x)                                         (*((volatile uint32_t *)(x)))
#define HWREG(x)                                           (HWREG16(x))
#define HWREG8_L(x)                                        (*((volatile uint8_t *)((uint8_t *)&x)))
#define HWREG8_H(x)                                        (*((volatile uint8_t *)(((uint8_t *)&x)+1)))
#define HWREG16_L(x)                                       (*((volatile uint16_t *)((uint16_t *)&x)))
#define HWREG16_H(x)                                       (*((volatile uint16_t *)(((uint16_t *)&x)+1)))

//*****************************************************************************
// Definitions for 8/16/32-bit wide bit band access
//*****************************************************************************
#define HWREGBIT8(x, b)                                    (HWREG8(((uint32_t)(x) & 0xF0000000) | 0x02000000 | (((uint32_t)(x) & 0x000FFFFF) << 5) | ((b) << 2)))
#define HWREGBIT16(x, b)                                   (HWREG16(((uint32_t)(x) & 0xF0000000) | 0x02000000 | (((uint32_t)(x) & 0x000FFFFF) << 5) | ((b) << 2)))
#define HWREGBIT32(x, b)                                   (HWREG32(((uint32_t)(x) & 0xF0000000) | 0x02000000 | (((uint32_t)(x) & 0x000FFFFF) << 5) | ((b) << 2)))
#define BITBAND_SRAM(x, b)                                 (*((volatile uint8_t *) (0x22000000 +  (((uint32_t)(uint32_t *)&x) - 0x20000000)*32 + b*4)))
#define BITBAND_PERI(x, b)                                 (*((volatile uint8_t *) (0x42000000 +  (((uint32_t)(uint32_t *)&x) - 0x40000000)*32 + b*4)))

//*****************************************************************************
// Device memory map
//*****************************************************************************
#define __MAIN_MEMORY_START__                              (0x00000000)          /* Main Flash memory start address */
#define __MAIN_MEMORY_END__                                (0x0003FFFF)          /* Main Flash memory end address */
#define __BSL_MEMORY_START__                               (0x00202000)          /* BSL memory start address */
#define __BSL_MEMORY_END__                                 (0x00203FFF)          /* BSL memory end address */
#define __SRAM_START__                                     (0x20000000)          /* SRAM memory start address */
#define __SRAM_END__                                       (0x2000FFFF)          /* SRAM memory end address */

//*****************************************************************************
// Peripheral memory map
//*****************************************************************************
#define __MCU_HAS_ADC14__                                                        /* Module is available */
#define __MCU_HAS_AES256__                                                       /* Module is available */
#define __MCU_HAS_CAPTIO0__                                                      /* Module is available */
#define __MCU_HAS_CAPTIO1__                                                      /* Module is available */
#define __MCU_HAS_COMP_E0__                                                      /* Module is available */
#define __MCU_HAS_COMP_E1__                                                      /* Module is available */
#define __MCU_HAS_CRC32__                                                        /* Module is available */
#define __MCU_HAS_CS__                                                           /* Module is available */
#define __MCU_HAS_DIO__                                                          /* Module is available */
#define __MCU_HAS_DMA__                                                          /* Module is available */
#define __MCU_HAS_EUSCI_A0__                                                     /* Module is available */
#define __MCU_HAS_EUSCI_A1__                                                     /* Module is available */
#define __MCU_HAS_EUSCI_A2__                                                     /* Module is available */
#define __MCU_HAS_EUSCI_A3__                                                     /* Module is available */
#define __MCU_HAS_EUSCI_B0__                                                     /* Module is available */
#define __MCU_HAS_EUSCI_B1__                                                     /* Module is available */
#define __MCU_HAS_EUSCI_B2__                                                     /* Module is available */
#define __MCU_HAS_EUSCI_B3__                                                     /* Module is available */
#define __MCU_HAS_FLCTL__                                                        /* Module is available */
#define __MCU_HAS_FPB__                                                          /* Module is available */
#define __MCU_HAS_PCM__                                                          /* Module is available */
#define __MCU_HAS_PMAP__                                                         /* Module is available */
#define __MCU_HAS_PSS__                                                          /* Module is available */
#define __MCU_HAS_REF_A__                                                        /* Module is available */
#define __MCU_HAS_RSTCTL__                                                       /* Module is available */
#define __MCU_HAS_RTC_C__                                                        /* Module is available */
#define __MCU_HAS_SYSCTL__                                                       /* Module is available */
#define __MCU_HAS_TIMER32__                                                      /* Module is available */
#define __MCU_HAS_TIMER_A0__                                                     /* Module is available */
#define __MCU_HAS_TIMER_A1__                                                     /* Module is available */
#define __MCU_HAS_TIMER_A2__                                                     /* Module is available */
#define __MCU_HAS_TIMER_A3__                                                     /* Module is available */
#define __MCU_HAS_TLV__                                                          /* Module is available */
#define __MCU_HAS_WDT_A__                                                        /* Module is available */

#define ADC14_BASE                                         (0x40012000)          /* Base address of module registers */
#define ADC14_MODULE                                       (0x40012000)          /* Base address of module registers */
#define AES256_BASE                                        (0x40003C00)          /* Base address of module registers */
#define AES256_MODULE                                      (0x40003C00)          /* Base address of module registers */
#define CAPTIO0_BASE                                       (0x40005400)          /* Base address of module registers */
#define CAPTIO0_MODULE                                     (0x40005400)          /* Base address of module registers */
#define CAPTIO1_BASE                                       (0x40005800)          /* Base address of module registers */
#define CAPTIO1_MODULE                                     (0x40005800)          /* Base address of module registers */
#define COMP_E0_BASE                                       (0x40003400)          /* Base address of module registers */
#define COMP_E0_MODULE                                     (0x40003400)          /* Base address of module registers */
#define COMP_E1_BASE                                       (0x40003800)          /* Base address of module registers */
#define COMP_E1_MODULE                                     (0x40003800)          /* Base address of module registers */
#define CRC32_BASE                                         (0x40004000)          /* Base address of module registers */
#define CRC32_MODULE                                       (0x40004000)          /* Base address of module registers */
#define CS_BASE                                            (0x40010400)          /* Base address of module registers */
#define CS_MODULE                                          (0x40010400)          /* Base address of module registers */
#define DIO_BASE                                           (0x40004C00)          /* Base address of module registers */
#define DIO_MODULE                                         (0x40004C00)          /* Base address of module registers */
#define DMA_BASE                                           (0x4000E000)          /* Base address of module registers */
#define DMA_MODULE                                         (0x4000E000)          /* Base address of module registers */
#define EUSCI_A0_BASE                                      (0x40001000)          /* Base address of module registers */
#define EUSCI_A0_MODULE                                    (0x40001000)          /* Base address of module registers */
#define EUSCI_A1_BASE                                      (0x40001400)          /* Base address of module registers */
#define EUSCI_A1_MODULE                                    (0x40001400)          /* Base address of module registers */
#define EUSCI_A2_BASE                                      (0x40001800)          /* Base address of module registers */
#define EUSCI_A2_MODULE                                    (0x40001800)          /* Base address of module registers */
#define EUSCI_A3_BASE                                      (0x40001C00)          /* Base address of module registers */
#define EUSCI_A3_MODULE                                    (0x40001C00)          /* Base address of module registers */
#define EUSCI_B0_BASE                                      (0x40002000)          /* Base address of module registers */
#define EUSCI_B0_MODULE                                    (0x40002000)          /* Base address of module registers */
#define EUSCI_B1_BASE                                      (0x40002400)          /* Base address of module registers */
#define EUSCI_B1_MODULE                                    (0x40002400)          /* Base address of module registers */
#define EUSCI_B2_BASE                                      (0x40002800)          /* Base address of module registers */
#define EUSCI_B2_MODULE                                    (0x40002800)          /* Base address of module registers */
#define EUSCI_B3_BASE                                      (0x40002C00)          /* Base address of module registers */
#define EUSCI_B3_MODULE                                    (0x40002C00)          /* Base address of module registers */
#define FLCTL_BASE                                         (0x40011000)          /* Base address of module registers */
#define FLCTL_MODULE                                       (0x40011000)          /* Base address of module registers */
#define FPB_BASE                                           (0xE0002000)          /* Base address of module registers */
#define FPB_MODULE                                         (0xE0002000)          /* Base address of module registers */
#define PCM_BASE                                           (0x40010000)          /* Base address of module registers */
#define PCM_MODULE                                         (0x40010000)          /* Base address of module registers */
#define PMAP_BASE                                          (0x40005000)          /* Base address of module registers */
#define PMAP_MODULE                                        (0x40005000)          /* Base address of module registers */
#define PSS_BASE                                           (0x40010800)          /* Base address of module registers */
#define PSS_MODULE                                         (0x40010800)          /* Base address of module registers */
#define REF_A_BASE                                         (0x40003000)          /* Base address of module registers */
#define REF_A_MODULE                                       (0x40003000)          /* Base address of module registers */
#define RSTCTL_BASE                                        (0xE0042000)          /* Base address of module registers */
#define RSTCTL_MODULE                                      (0xE0042000)          /* Base address of module registers */
#define RTC_C_BASE                                         (0x40004400)          /* Base address of module registers */
#define RTC_C_MODULE                                       (0x40004400)          /* Base address of module registers */
#define SYSCTL_BASE                                        (0xE0043000)          /* Base address of module registers */
#define SYSCTL_MODULE                                      (0xE0043000)          /* Base address of module registers */
#define TIMER32_BASE                                       (0x4000C000)          /* Base address of module registers */
#define TIMER32_MODULE                                     (0x4000C000)          /* Base address of module registers */
#define TIMER_A0_BASE                                      (0x40000000)          /* Base address of module registers */
#define TIMER_A0_MODULE                                    (0x40000000)          /* Base address of module registers */
#define TIMER_A1_BASE                                      (0x40000400)          /* Base address of module registers */
#define TIMER_A1_MODULE                                    (0x40000400)          /* Base address of module registers */
#define TIMER_A2_BASE                                      (0x40000800)          /* Base address of module registers */
#define TIMER_A2_MODULE                                    (0x40000800)          /* Base address of module registers */
#define TIMER_A3_BASE                                      (0x40000C00)          /* Base address of module registers */
#define TIMER_A3_MODULE                                    (0x40000C00)          /* Base address of module registers */
#define TLV_BASE                                           (0x00201000)          /* Base address of module registers */
#define TLV_MODULE                                         (0x00201000)          /* Base address of module registers */
#define WDT_A_BASE                                         (0x40004800)          /* Base address of module registers */
#define WDT_A_MODULE                                       (0x40004800)          /* Base address of module registers */

#define ADC14                                              ((ADC14_Type *) ADC14_BASE)   
#define AES256                                             ((AES256_Type *) AES256_BASE) 
#define CAPTIO0                                            ((CAPTIO0_Type *) CAPTIO0_BASE)
#define CAPTIO1                                            ((CAPTIO1_Type *) CAPTIO1_BASE)
#define COMP_E0                                            ((COMP_E0_Type *) COMP_E0_BASE)
#define COMP_E1                                            ((COMP_E1_Type *) COMP_E1_BASE)
#define CRC32                                              ((CRC32_Type *) CRC32_BASE)   
#define CS                                                 ((CS_Type *) CS_BASE)         
#define DIO                                                ((DIO_Type *) DIO_BASE)       
#define DMA                                                ((DMA_Type *) DMA_BASE)       
#define EUSCI_A0                                           ((EUSCI_A0_Type *) EUSCI_A0_BASE)
#define EUSCI_A1                                           ((EUSCI_A1_Type *) EUSCI_A1_BASE)
#define EUSCI_A2                                           ((EUSCI_A2_Type *) EUSCI_A2_BASE)
#define EUSCI_A3                                           ((EUSCI_A3_Type *) EUSCI_A3_BASE)
#define EUSCI_B0                                           ((EUSCI_B0_Type *) EUSCI_B0_BASE)
#define EUSCI_B1                                           ((EUSCI_B1_Type *) EUSCI_B1_BASE)
#define EUSCI_B2                                           ((EUSCI_B2_Type *) EUSCI_B2_BASE)
#define EUSCI_B3                                           ((EUSCI_B3_Type *) EUSCI_B3_BASE)
#define FLCTL                                              ((FLCTL_Type *) FLCTL_BASE)   
#define FPB                                                ((FPB_Type *) FPB_BASE)       
#define PCM                                                ((PCM_Type *) PCM_BASE)       
#define PMAP                                               ((PMAP_Type *) PMAP_BASE)     
#define PSS                                                ((PSS_Type *) PSS_BASE)       
#define REF_A                                              ((REF_A_Type *) REF_A_BASE)   
#define RSTCTL                                             ((RSTCTL_Type *) RSTCTL_BASE) 
#define RTC_C                                              ((RTC_C_Type *) RTC_C_BASE)   
#define SYSCTL                                             ((SYSCTL_Type *) SYSCTL_BASE) 
#define TIMER32                                            ((TIMER32_Type *) TIMER32_BASE)
#define TIMER_A0                                           ((TIMER_A0_Type *) TIMER_A0_BASE)
#define TIMER_A1                                           ((TIMER_A1_Type *) TIMER_A1_BASE)
#define TIMER_A2                                           ((TIMER_A2_Type *) TIMER_A2_BASE)
#define TIMER_A3                                           ((TIMER_A3_Type *) TIMER_A3_BASE)
#define TLV                                                ((TLV_Type *) TLV_BASE)       
#define WDT_A                                              ((WDT_A_Type *) WDT_A_BASE)   


//*****************************************************************************
// MSP-format peripheral registers
//*****************************************************************************

//*****************************************************************************
// ADC14 Registers
//*****************************************************************************
#define ADC14CTL0                                          (HWREG32(0x40012000)) /* Control 0 Register  */
#define ADC14CTL1                                          (HWREG32(0x40012004)) /* Control 1 Register */
#define ADC14LO0                                           (HWREG32(0x40012008)) /* Window Comparator Low Threshold 0 Register  */
#define ADC14HI0                                           (HWREG32(0x4001200C)) /* Window Comparator High Threshold 0 Register  */
#define ADC14LO1                                           (HWREG32(0x40012010)) /* Window Comparator Low Threshold 1 Register  */
#define ADC14HI1                                           (HWREG32(0x40012014)) /* Window Comparator High Threshold 1 Register  */
#define ADC14MCTL0                                         (HWREG32(0x40012018)) /* Conversion Memory Control Register */
#define ADC14MCTL1                                         (HWREG32(0x4001201C)) /* Conversion Memory Control Register */
#define ADC14MCTL2                                         (HWREG32(0x40012020)) /* Conversion Memory Control Register */
#define ADC14MCTL3                                         (HWREG32(0x40012024)) /* Conversion Memory Control Register */
#define ADC14MCTL4                                         (HWREG32(0x40012028)) /* Conversion Memory Control Register */
#define ADC14MCTL5                                         (HWREG32(0x4001202C)) /* Conversion Memory Control Register */
#define ADC14MCTL6                                         (HWREG32(0x40012030)) /* Conversion Memory Control Register */
#define ADC14MCTL7                                         (HWREG32(0x40012034)) /* Conversion Memory Control Register */
#define ADC14MCTL8                                         (HWREG32(0x40012038)) /* Conversion Memory Control Register */
#define ADC14MCTL9                                         (HWREG32(0x4001203C)) /* Conversion Memory Control Register */
#define ADC14MCTL10                                        (HWREG32(0x40012040)) /* Conversion Memory Control Register */
#define ADC14MCTL11                                        (HWREG32(0x40012044)) /* Conversion Memory Control Register */
#define ADC14MCTL12                                        (HWREG32(0x40012048)) /* Conversion Memory Control Register */
#define ADC14MCTL13                                        (HWREG32(0x4001204C)) /* Conversion Memory Control Register */
#define ADC14MCTL14                                        (HWREG32(0x40012050)) /* Conversion Memory Control Register */
#define ADC14MCTL15                                        (HWREG32(0x40012054)) /* Conversion Memory Control Register */
#define ADC14MCTL16                                        (HWREG32(0x40012058)) /* Conversion Memory Control Register */
#define ADC14MCTL17                                        (HWREG32(0x4001205C)) /* Conversion Memory Control Register */
#define ADC14MCTL18                                        (HWREG32(0x40012060)) /* Conversion Memory Control Register */
#define ADC14MCTL19                                        (HWREG32(0x40012064)) /* Conversion Memory Control Register */
#define ADC14MCTL20                                        (HWREG32(0x40012068)) /* Conversion Memory Control Register */
#define ADC14MCTL21                                        (HWREG32(0x4001206C)) /* Conversion Memory Control Register */
#define ADC14MCTL22                                        (HWREG32(0x40012070)) /* Conversion Memory Control Register */
#define ADC14MCTL23                                        (HWREG32(0x40012074)) /* Conversion Memory Control Register */
#define ADC14MCTL24                                        (HWREG32(0x40012078)) /* Conversion Memory Control Register */
#define ADC14MCTL25                                        (HWREG32(0x4001207C)) /* Conversion Memory Control Register */
#define ADC14MCTL26                                        (HWREG32(0x40012080)) /* Conversion Memory Control Register */
#define ADC14MCTL27                                        (HWREG32(0x40012084)) /* Conversion Memory Control Register */
#define ADC14MCTL28                                        (HWREG32(0x40012088)) /* Conversion Memory Control Register */
#define ADC14MCTL29                                        (HWREG32(0x4001208C)) /* Conversion Memory Control Register */
#define ADC14MCTL30                                        (HWREG32(0x40012090)) /* Conversion Memory Control Register */
#define ADC14MCTL31                                        (HWREG32(0x40012094)) /* Conversion Memory Control Register */
#define ADC14MEM0                                          (HWREG32(0x40012098)) /* Conversion Memory Register */
#define ADC14MEM1                                          (HWREG32(0x4001209C)) /* Conversion Memory Register */
#define ADC14MEM2                                          (HWREG32(0x400120A0)) /* Conversion Memory Register */
#define ADC14MEM3                                          (HWREG32(0x400120A4)) /* Conversion Memory Register */
#define ADC14MEM4                                          (HWREG32(0x400120A8)) /* Conversion Memory Register */
#define ADC14MEM5                                          (HWREG32(0x400120AC)) /* Conversion Memory Register */
#define ADC14MEM6                                          (HWREG32(0x400120B0)) /* Conversion Memory Register */
#define ADC14MEM7                                          (HWREG32(0x400120B4)) /* Conversion Memory Register */
#define ADC14MEM8                                          (HWREG32(0x400120B8)) /* Conversion Memory Register */
#define ADC14MEM9                                          (HWREG32(0x400120BC)) /* Conversion Memory Register */
#define ADC14MEM10                                         (HWREG32(0x400120C0)) /* Conversion Memory Register */
#define ADC14MEM11                                         (HWREG32(0x400120C4)) /* Conversion Memory Register */
#define ADC14MEM12                                         (HWREG32(0x400120C8)) /* Conversion Memory Register */
#define ADC14MEM13                                         (HWREG32(0x400120CC)) /* Conversion Memory Register */
#define ADC14MEM14                                         (HWREG32(0x400120D0)) /* Conversion Memory Register */
#define ADC14MEM15                                         (HWREG32(0x400120D4)) /* Conversion Memory Register */
#define ADC14MEM16                                         (HWREG32(0x400120D8)) /* Conversion Memory Register */
#define ADC14MEM17                                         (HWREG32(0x400120DC)) /* Conversion Memory Register */
#define ADC14MEM18                                         (HWREG32(0x400120E0)) /* Conversion Memory Register */
#define ADC14MEM19                                         (HWREG32(0x400120E4)) /* Conversion Memory Register */
#define ADC14MEM20                                         (HWREG32(0x400120E8)) /* Conversion Memory Register */
#define ADC14MEM21                                         (HWREG32(0x400120EC)) /* Conversion Memory Register */
#define ADC14MEM22                                         (HWREG32(0x400120F0)) /* Conversion Memory Register */
#define ADC14MEM23                                         (HWREG32(0x400120F4)) /* Conversion Memory Register */
#define ADC14MEM24                                         (HWREG32(0x400120F8)) /* Conversion Memory Register */
#define ADC14MEM25                                         (HWREG32(0x400120FC)) /* Conversion Memory Register */
#define ADC14MEM26                                         (HWREG32(0x40012100)) /* Conversion Memory Register */
#define ADC14MEM27                                         (HWREG32(0x40012104)) /* Conversion Memory Register */
#define ADC14MEM28                                         (HWREG32(0x40012108)) /* Conversion Memory Register */
#define ADC14MEM29                                         (HWREG32(0x4001210C)) /* Conversion Memory Register */
#define ADC14MEM30                                         (HWREG32(0x40012110)) /* Conversion Memory Register */
#define ADC14MEM31                                         (HWREG32(0x40012114)) /* Conversion Memory Register */
#define ADC14IER0                                          (HWREG32(0x4001213C)) /* Interrupt Enable 0 Register  */
#define ADC14IER1                                          (HWREG32(0x40012140)) /* Interrupt Enable 1 Register  */
#define ADC14IFGR0                                         (HWREG32(0x40012144)) /* Interrupt Flag 0 Register  */
#define ADC14IFGR1                                         (HWREG32(0x40012148)) /* Interrupt Flag 1 Register  */
#define ADC14CLRIFGR0                                      (HWREG32(0x4001214C)) /* Clear Interrupt Flag 0 Register  */
#define ADC14CLRIFGR1                                      (HWREG32(0x40012150)) /* Clear Interrupt Flag 1 Register  */
#define ADC14IV                                            (HWREG32(0x40012154)) /* Interrupt Vector Register */

/* Register offsets from ADC14_BASE address */
#define OFS_ADC14CTL0                                      (0x00000000)          /* Control 0 Register  */
#define OFS_ADC14CTL1                                      (0x00000004)          /* Control 1 Register */
#define OFS_ADC14LO0                                       (0x00000008)          /* Window Comparator Low Threshold 0 Register  */
#define OFS_ADC14HI0                                       (0x0000000c)          /* Window Comparator High Threshold 0 Register  */
#define OFS_ADC14LO1                                       (0x00000010)          /* Window Comparator Low Threshold 1 Register  */
#define OFS_ADC14HI1                                       (0x00000014)          /* Window Comparator High Threshold 1 Register  */
#define OFS_ADC14MCTL0                                     (0x00000018)          /* Conversion Memory Control Register */
#define OFS_ADC14MCTL1                                     (0x0000001C)          /* Conversion Memory Control Register */
#define OFS_ADC14MCTL2                                     (0x00000020)          /* Conversion Memory Control Register */
#define OFS_ADC14MCTL3                                     (0x00000024)          /* Conversion Memory Control Register */
#define OFS_ADC14MCTL4                                     (0x00000028)          /* Conversion Memory Control Register */
#define OFS_ADC14MCTL5                                     (0x0000002C)          /* Conversion Memory Control Register */
#define OFS_ADC14MCTL6                                     (0x00000030)          /* Conversion Memory Control Register */
#define OFS_ADC14MCTL7                                     (0x00000034)          /* Conversion Memory Control Register */
#define OFS_ADC14MCTL8                                     (0x00000038)          /* Conversion Memory Control Register */
#define OFS_ADC14MCTL9                                     (0x0000003C)          /* Conversion Memory Control Register */
#define OFS_ADC14MCTL10                                    (0x00000040)          /* Conversion Memory Control Register */
#define OFS_ADC14MCTL11                                    (0x00000044)          /* Conversion Memory Control Register */
#define OFS_ADC14MCTL12                                    (0x00000048)          /* Conversion Memory Control Register */
#define OFS_ADC14MCTL13                                    (0x0000004C)          /* Conversion Memory Control Register */
#define OFS_ADC14MCTL14                                    (0x00000050)          /* Conversion Memory Control Register */
#define OFS_ADC14MCTL15                                    (0x00000054)          /* Conversion Memory Control Register */
#define OFS_ADC14MCTL16                                    (0x00000058)          /* Conversion Memory Control Register */
#define OFS_ADC14MCTL17                                    (0x0000005C)          /* Conversion Memory Control Register */
#define OFS_ADC14MCTL18                                    (0x00000060)          /* Conversion Memory Control Register */
#define OFS_ADC14MCTL19                                    (0x00000064)          /* Conversion Memory Control Register */
#define OFS_ADC14MCTL20                                    (0x00000068)          /* Conversion Memory Control Register */
#define OFS_ADC14MCTL21                                    (0x0000006C)          /* Conversion Memory Control Register */
#define OFS_ADC14MCTL22                                    (0x00000070)          /* Conversion Memory Control Register */
#define OFS_ADC14MCTL23                                    (0x00000074)          /* Conversion Memory Control Register */
#define OFS_ADC14MCTL24                                    (0x00000078)          /* Conversion Memory Control Register */
#define OFS_ADC14MCTL25                                    (0x0000007C)          /* Conversion Memory Control Register */
#define OFS_ADC14MCTL26                                    (0x00000080)          /* Conversion Memory Control Register */
#define OFS_ADC14MCTL27                                    (0x00000084)          /* Conversion Memory Control Register */
#define OFS_ADC14MCTL28                                    (0x00000088)          /* Conversion Memory Control Register */
#define OFS_ADC14MCTL29                                    (0x0000008C)          /* Conversion Memory Control Register */
#define OFS_ADC14MCTL30                                    (0x00000090)          /* Conversion Memory Control Register */
#define OFS_ADC14MCTL31                                    (0x00000094)          /* Conversion Memory Control Register */
#define OFS_ADC14MEM0                                      (0x00000098)          /* Conversion Memory Register */
#define OFS_ADC14MEM1                                      (0x0000009C)          /* Conversion Memory Register */
#define OFS_ADC14MEM2                                      (0x000000A0)          /* Conversion Memory Register */
#define OFS_ADC14MEM3                                      (0x000000A4)          /* Conversion Memory Register */
#define OFS_ADC14MEM4                                      (0x000000A8)          /* Conversion Memory Register */
#define OFS_ADC14MEM5                                      (0x000000AC)          /* Conversion Memory Register */
#define OFS_ADC14MEM6                                      (0x000000B0)          /* Conversion Memory Register */
#define OFS_ADC14MEM7                                      (0x000000B4)          /* Conversion Memory Register */
#define OFS_ADC14MEM8                                      (0x000000B8)          /* Conversion Memory Register */
#define OFS_ADC14MEM9                                      (0x000000BC)          /* Conversion Memory Register */
#define OFS_ADC14MEM10                                     (0x000000C0)          /* Conversion Memory Register */
#define OFS_ADC14MEM11                                     (0x000000C4)          /* Conversion Memory Register */
#define OFS_ADC14MEM12                                     (0x000000C8)          /* Conversion Memory Register */
#define OFS_ADC14MEM13                                     (0x000000CC)          /* Conversion Memory Register */
#define OFS_ADC14MEM14                                     (0x000000D0)          /* Conversion Memory Register */
#define OFS_ADC14MEM15                                     (0x000000D4)          /* Conversion Memory Register */
#define OFS_ADC14MEM16                                     (0x000000D8)          /* Conversion Memory Register */
#define OFS_ADC14MEM17                                     (0x000000DC)          /* Conversion Memory Register */
#define OFS_ADC14MEM18                                     (0x000000E0)          /* Conversion Memory Register */
#define OFS_ADC14MEM19                                     (0x000000E4)          /* Conversion Memory Register */
#define OFS_ADC14MEM20                                     (0x000000E8)          /* Conversion Memory Register */
#define OFS_ADC14MEM21                                     (0x000000EC)          /* Conversion Memory Register */
#define OFS_ADC14MEM22                                     (0x000000F0)          /* Conversion Memory Register */
#define OFS_ADC14MEM23                                     (0x000000F4)          /* Conversion Memory Register */
#define OFS_ADC14MEM24                                     (0x000000F8)          /* Conversion Memory Register */
#define OFS_ADC14MEM25                                     (0x000000FC)          /* Conversion Memory Register */
#define OFS_ADC14MEM26                                     (0x00000100)          /* Conversion Memory Register */
#define OFS_ADC14MEM27                                     (0x00000104)          /* Conversion Memory Register */
#define OFS_ADC14MEM28                                     (0x00000108)          /* Conversion Memory Register */
#define OFS_ADC14MEM29                                     (0x0000010C)          /* Conversion Memory Register */
#define OFS_ADC14MEM30                                     (0x00000110)          /* Conversion Memory Register */
#define OFS_ADC14MEM31                                     (0x00000114)          /* Conversion Memory Register */
#define OFS_ADC14IER0                                      (0x0000013c)          /* Interrupt Enable 0 Register  */
#define OFS_ADC14IER1                                      (0x00000140)          /* Interrupt Enable 1 Register  */
#define OFS_ADC14IFGR0                                     (0x00000144)          /* Interrupt Flag 0 Register  */
#define OFS_ADC14IFGR1                                     (0x00000148)          /* Interrupt Flag 1 Register  */
#define OFS_ADC14CLRIFGR0                                  (0x0000014c)          /* Clear Interrupt Flag 0 Register  */
#define OFS_ADC14CLRIFGR1                                  (0x00000150)          /* Clear Interrupt Flag 1 Register  */
#define OFS_ADC14IV                                        (0x00000154)          /* Interrupt Vector Register */


//*****************************************************************************
// AES256 Registers
//*****************************************************************************
#define AESACTL0                                           (HWREG16(0x40003C00)) /* AES Accelerator Control Register 0 */
#define AESACTL1                                           (HWREG16(0x40003C02)) /* AES Accelerator Control Register 1 */
#define AESASTAT                                           (HWREG16(0x40003C04)) /* AES Accelerator Status Register */
#define AESAKEY                                            (HWREG16(0x40003C06)) /* AES Accelerator Key Register */
#define AESADIN                                            (HWREG16(0x40003C08)) /* AES Accelerator Data In Register */
#define AESADOUT                                           (HWREG16(0x40003C0A)) /* AES Accelerator Data Out Register */
#define AESAXDIN                                           (HWREG16(0x40003C0C)) /* AES Accelerator XORed Data In Register */
#define AESAXIN                                            (HWREG16(0x40003C0E)) /* AES Accelerator XORed Data In Register */

/* Register offsets from AES256_BASE address */
#define OFS_AESACTL0                                       (0x0000)              /* AES Accelerator Control Register 0 */
#define OFS_AESACTL1                                       (0x0002)              /* AES Accelerator Control Register 1 */
#define OFS_AESASTAT                                       (0x0004)              /* AES Accelerator Status Register */
#define OFS_AESAKEY                                        (0x0006)              /* AES Accelerator Key Register */
#define OFS_AESADIN                                        (0x0008)              /* AES Accelerator Data In Register */
#define OFS_AESADOUT                                       (0x000a)              /* AES Accelerator Data Out Register */
#define OFS_AESAXDIN                                       (0x000c)              /* AES Accelerator XORed Data In Register */
#define OFS_AESAXIN                                        (0x000e)              /* AES Accelerator XORed Data In Register */


//*****************************************************************************
// CAPTIO0 Registers
//*****************************************************************************
#define CAPTIO0CTL                                         (HWREG16(0x4000540E)) /* Capacitive Touch IO x Control Register */

/* Register offsets from CAPTIO0_BASE address */
#define OFS_CAPTIO0CTL                                     (0x000e)              /* Capacitive Touch IO x Control Register */

#define CAPTIO0CTL_L                                       (HWREG8_L(CAPTIO0CTL))/* Capacitive Touch IO x Control Register */
#define CAPTIO0CTL_H                                       (HWREG8_H(CAPTIO0CTL))/* Capacitive Touch IO x Control Register */

//*****************************************************************************
// CAPTIO1 Registers
//*****************************************************************************
#define CAPTIO1CTL                                         (HWREG16(0x4000580E)) /* Capacitive Touch IO x Control Register */

/* Register offsets from CAPTIO1_BASE address */
#define OFS_CAPTIO1CTL                                     (0x000e)              /* Capacitive Touch IO x Control Register */

#define CAPTIO1CTL_L                                       (HWREG8_L(CAPTIO1CTL))/* Capacitive Touch IO x Control Register */
#define CAPTIO1CTL_H                                       (HWREG8_H(CAPTIO1CTL))/* Capacitive Touch IO x Control Register */

//*****************************************************************************
// COMP_E0 Registers
//*****************************************************************************
#define CE0CTL0                                            (HWREG16(0x40003400)) /* Comparator Control Register 0 */
#define CE0CTL1                                            (HWREG16(0x40003402)) /* Comparator Control Register 1 */
#define CE0CTL2                                            (HWREG16(0x40003404)) /* Comparator Control Register 2 */
#define CE0CTL3                                            (HWREG16(0x40003406)) /* Comparator Control Register 3 */
#define CE0INT                                             (HWREG16(0x4000340C)) /* Comparator Interrupt Control Register */
#define CE0IV                                              (HWREG16(0x4000340E)) /* Comparator Interrupt Vector Word Register */

/* Register offsets from COMP_E0_BASE address */
#define OFS_CE0CTL0                                        (0x0000)              /* Comparator Control Register 0 */
#define OFS_CE0CTL1                                        (0x0002)              /* Comparator Control Register 1 */
#define OFS_CE0CTL2                                        (0x0004)              /* Comparator Control Register 2 */
#define OFS_CE0CTL3                                        (0x0006)              /* Comparator Control Register 3 */
#define OFS_CE0INT                                         (0x000c)              /* Comparator Interrupt Control Register */
#define OFS_CE0IV                                          (0x000e)              /* Comparator Interrupt Vector Word Register */


//*****************************************************************************
// COMP_E1 Registers
//*****************************************************************************
#define CE1CTL0                                            (HWREG16(0x40003800)) /* Comparator Control Register 0 */
#define CE1CTL1                                            (HWREG16(0x40003802)) /* Comparator Control Register 1 */
#define CE1CTL2                                            (HWREG16(0x40003804)) /* Comparator Control Register 2 */
#define CE1CTL3                                            (HWREG16(0x40003806)) /* Comparator Control Register 3 */
#define CE1INT                                             (HWREG16(0x4000380C)) /* Comparator Interrupt Control Register */
#define CE1IV                                              (HWREG16(0x4000380E)) /* Comparator Interrupt Vector Word Register */

/* Register offsets from COMP_E1_BASE address */
#define OFS_CE1CTL0                                        (0x0000)              /* Comparator Control Register 0 */
#define OFS_CE1CTL1                                        (0x0002)              /* Comparator Control Register 1 */
#define OFS_CE1CTL2                                        (0x0004)              /* Comparator Control Register 2 */
#define OFS_CE1CTL3                                        (0x0006)              /* Comparator Control Register 3 */
#define OFS_CE1INT                                         (0x000c)              /* Comparator Interrupt Control Register */
#define OFS_CE1IV                                          (0x000e)              /* Comparator Interrupt Vector Word Register */


//*****************************************************************************
// COREDEBUG Registers
//*****************************************************************************
#define COREDEBUG_DHCSR                                    (HWREG32(0xE000EDF0)) /* Debug Halting Control and Status Register */
#define COREDEBUG_DCRSR                                    (HWREG32(0xE000EDF4)) /* Deubg Core Register Selector Register */
#define COREDEBUG_DCRDR                                    (HWREG32(0xE000EDF8)) /* Debug Core Register Data Register */
#define COREDEBUG_DEMCR                                    (HWREG32(0xE000EDFC)) /* Debug Exception and Monitor Control Register */

/* Register offsets from COREDEBUG_BASE address */
#define OFS_COREDEBUG_DHCSR                                (0x00000DF0)          /* Debug Halting Control and Status Register */
#define OFS_COREDEBUG_DCRSR                                (0x00000DF4)          /* Deubg Core Register Selector Register */
#define OFS_COREDEBUG_DCRDR                                (0x00000DF8)          /* Debug Core Register Data Register */
#define OFS_COREDEBUG_DEMCR                                (0x00000DFC)          /* Debug Exception and Monitor Control Register */


//*****************************************************************************
// CRC32 Registers
//*****************************************************************************
#define CRC32DI                                            (HWREG16(0x40004000)) /* Data Input for CRC32 Signature Computation */
#define CRC32DIRB                                          (HWREG16(0x40004004)) /* Data In Reverse for CRC32 Computation */
#define CRC32INIRES_LO                                     (HWREG16(0x40004008)) /* CRC32 Initialization and Result, lower 16 bits */
#define CRC32INIRES_HI                                     (HWREG16(0x4000400A)) /* CRC32 Initialization and Result, upper 16 bits */
#define CRC32RESR_LO                                       (HWREG16(0x4000400C)) /* CRC32 Result Reverse, lower 16 bits */
#define CRC32RESR_HI                                       (HWREG16(0x4000400E)) /* CRC32 Result Reverse, Upper 16 bits */
#define CRC16DI                                            (HWREG16(0x40004010)) /* Data Input for CRC16 computation */
#define CRC16DIRB                                          (HWREG16(0x40004014)) /* CRC16 Data In Reverse */
#define CRC16INIRES                                        (HWREG16(0x40004018)) /* CRC16 Initialization and Result register */
#define CRC16RESR                                          (HWREG16(0x4000401E)) /* CRC16 Result Reverse */

/* Register offsets from CRC32_BASE address */
#define OFS_CRC32DI                                        (0x0000)              /* Data Input for CRC32 Signature Computation */
#define OFS_CRC32DIRB                                      (0x0004)              /* Data In Reverse for CRC32 Computation */
#define OFS_CRC32INIRES_LO                                 (0x0008)              /* CRC32 Initialization and Result, lower 16 bits */
#define OFS_CRC32INIRES_HI                                 (0x000a)              /* CRC32 Initialization and Result, upper 16 bits */
#define OFS_CRC32RESR_LO                                   (0x000c)              /* CRC32 Result Reverse, lower 16 bits */
#define OFS_CRC32RESR_HI                                   (0x000e)              /* CRC32 Result Reverse, Upper 16 bits */
#define OFS_CRC16DI                                        (0x0010)              /* Data Input for CRC16 computation */
#define OFS_CRC16DIRB                                      (0x0014)              /* CRC16 Data In Reverse */
#define OFS_CRC16INIRES                                    (0x0018)              /* CRC16 Initialization and Result register */
#define OFS_CRC16RESR                                      (0x001e)              /* CRC16 Result Reverse */


//*****************************************************************************
// CS Registers
//*****************************************************************************
#define CSKEY                                              (HWREG32(0x40010400)) /* Key Register */
#define CSCTL0                                             (HWREG32(0x40010404)) /* Control 0 Register */
#define CSCTL1                                             (HWREG32(0x40010408)) /* Control 1 Register */
#define CSCTL2                                             (HWREG32(0x4001040C)) /* Control 2 Register */
#define CSCTL3                                             (HWREG32(0x40010410)) /* Control 3 Register */
#define CSCTL4                                             (HWREG32(0x40010414)) /* Control 4 Register */
#define CSCTL5                                             (HWREG32(0x40010418)) /* Control 5 Register */
#define CSCTL6                                             (HWREG32(0x4001041C)) /* Control 6 Register */
#define CSCTL7                                             (HWREG32(0x40010420)) /* Control 7 Register */
#define CSCLKEN                                            (HWREG32(0x40010430)) /* Clock Enable Register */
#define CSSTAT                                             (HWREG32(0x40010434)) /* Status Register */
#define CSIE                                               (HWREG32(0x40010440)) /* Interrupt Enable Register */
#define CSIFG                                              (HWREG32(0x40010448)) /* Interrupt Flag Register */
#define CSCLRIFG                                           (HWREG32(0x40010450)) /* Clear Interrupt Flag Register */
#define CSSETIFG                                           (HWREG32(0x40010458)) /* Set Interrupt Flag Register */
#define CSDCOERCAL                                         (HWREG32(0x40010460)) /* DCO external resistor cailbration register */

/* Register offsets from CS_BASE address */
#define OFS_CSKEY                                          (0x00000000)          /* Key Register */
#define OFS_CSCTL0                                         (0x00000004)          /* Control 0 Register */
#define OFS_CSCTL1                                         (0x00000008)          /* Control 1 Register */
#define OFS_CSCTL2                                         (0x0000000c)          /* Control 2 Register */
#define OFS_CSCTL3                                         (0x00000010)          /* Control 3 Register */
#define OFS_CSCTL4                                         (0x00000014)          /* Control 4 Register */
#define OFS_CSCTL5                                         (0x00000018)          /* Control 5 Register */
#define OFS_CSCTL6                                         (0x0000001c)          /* Control 6 Register */
#define OFS_CSCTL7                                         (0x00000020)          /* Control 7 Register */
#define OFS_CSCLKEN                                        (0x00000030)          /* Clock Enable Register */
#define OFS_CSSTAT                                         (0x00000034)          /* Status Register */
#define OFS_CSIE                                           (0x00000040)          /* Interrupt Enable Register */
#define OFS_CSIFG                                          (0x00000048)          /* Interrupt Flag Register */
#define OFS_CSCLRIFG                                       (0x00000050)          /* Clear Interrupt Flag Register */
#define OFS_CSSETIFG                                       (0x00000058)          /* Set Interrupt Flag Register */
#define OFS_CSDCOERCAL                                     (0x00000060)          /* DCO external resistor cailbration register */


//*****************************************************************************
// DIO Registers
//*****************************************************************************
#define PAIN                                               (HWREG16(0x40004C00)) /* Port A Input */
#define PAOUT                                              (HWREG16(0x40004C02)) /* Port A Output */
#define PADIR                                              (HWREG16(0x40004C04)) /* Port A Direction */
#define PAREN                                              (HWREG16(0x40004C06)) /* Port A Resistor Enable */
#define PADS                                               (HWREG16(0x40004C08)) /* Port A Drive Strength */
#define PASEL0                                             (HWREG16(0x40004C0A)) /* Port A Select 0 */
#define PASEL1                                             (HWREG16(0x40004C0C)) /* Port A Select 1 */
#define P1IV                                               (HWREG16(0x40004C0E)) /* Port 1 Interrupt Vector Register */
#define PASELC                                             (HWREG16(0x40004C16)) /* Port A Complement Select */
#define PAIES                                              (HWREG16(0x40004C18)) /* Port A Interrupt Edge Select */
#define PAIE                                               (HWREG16(0x40004C1A)) /* Port A Interrupt Enable */
#define PAIFG                                              (HWREG16(0x40004C1C)) /* Port A Interrupt Flag */
#define P2IV                                               (HWREG16(0x40004C1E)) /* Port 2 Interrupt Vector Register */
#define PBIN                                               (HWREG16(0x40004C20)) /* Port B Input */
#define PBOUT                                              (HWREG16(0x40004C22)) /* Port B Output */
#define PBDIR                                              (HWREG16(0x40004C24)) /* Port B Direction */
#define PBREN                                              (HWREG16(0x40004C26)) /* Port B Resistor Enable */
#define PBDS                                               (HWREG16(0x40004C28)) /* Port B Drive Strength */
#define PBSEL0                                             (HWREG16(0x40004C2A)) /* Port B Select 0 */
#define PBSEL1                                             (HWREG16(0x40004C2C)) /* Port B Select 1 */
#define P3IV                                               (HWREG16(0x40004C2E)) /* Port 3 Interrupt Vector Register */
#define PBSELC                                             (HWREG16(0x40004C36)) /* Port B Complement Select */
#define PBIES                                              (HWREG16(0x40004C38)) /* Port B Interrupt Edge Select */
#define PBIE                                               (HWREG16(0x40004C3A)) /* Port B Interrupt Enable */
#define PBIFG                                              (HWREG16(0x40004C3C)) /* Port B Interrupt Flag */
#define P4IV                                               (HWREG16(0x40004C3E)) /* Port 4 Interrupt Vector Register */
#define PCIN                                               (HWREG16(0x40004C40)) /* Port C Input */
#define PCOUT                                              (HWREG16(0x40004C42)) /* Port C Output */
#define PCDIR                                              (HWREG16(0x40004C44)) /* Port C Direction */
#define PCREN                                              (HWREG16(0x40004C46)) /* Port C Resistor Enable */
#define PCDS                                               (HWREG16(0x40004C48)) /* Port C Drive Strength */
#define PCSEL0                                             (HWREG16(0x40004C4A)) /* Port C Select 0 */
#define PCSEL1                                             (HWREG16(0x40004C4C)) /* Port C Select 1 */
#define P5IV                                               (HWREG16(0x40004C4E)) /* Port 5 Interrupt Vector Register */
#define PCSELC                                             (HWREG16(0x40004C56)) /* Port C Complement Select */
#define PCIES                                              (HWREG16(0x40004C58)) /* Port C Interrupt Edge Select */
#define PCIE                                               (HWREG16(0x40004C5A)) /* Port C Interrupt Enable */
#define PCIFG                                              (HWREG16(0x40004C5C)) /* Port C Interrupt Flag */
#define P6IV                                               (HWREG16(0x40004C5E)) /* Port 6 Interrupt Vector Register */
#define PDIN                                               (HWREG16(0x40004C60)) /* Port D Input */
#define PDOUT                                              (HWREG16(0x40004C62)) /* Port D Output */
#define PDDIR                                              (HWREG16(0x40004C64)) /* Port D Direction */
#define PDREN                                              (HWREG16(0x40004C66)) /* Port D Resistor Enable */
#define PDDS                                               (HWREG16(0x40004C68)) /* Port D Drive Strength */
#define PDSEL0                                             (HWREG16(0x40004C6A)) /* Port D Select 0 */
#define PDSEL1                                             (HWREG16(0x40004C6C)) /* Port D Select 1 */
#define P7IV                                               (HWREG16(0x40004C6E)) /* Port 7 Interrupt Vector Register */
#define PDSELC                                             (HWREG16(0x40004C76)) /* Port D Complement Select */
#define PDIES                                              (HWREG16(0x40004C78)) /* Port D Interrupt Edge Select */
#define PDIE                                               (HWREG16(0x40004C7A)) /* Port D Interrupt Enable */
#define PDIFG                                              (HWREG16(0x40004C7C)) /* Port D Interrupt Flag */
#define P8IV                                               (HWREG16(0x40004C7E)) /* Port 8 Interrupt Vector Register */
#define PEIN                                               (HWREG16(0x40004C80)) /* Port E Input */
#define PEOUT                                              (HWREG16(0x40004C82)) /* Port E Output */
#define PEDIR                                              (HWREG16(0x40004C84)) /* Port E Direction */
#define PEREN                                              (HWREG16(0x40004C86)) /* Port E Resistor Enable */
#define PEDS                                               (HWREG16(0x40004C88)) /* Port E Drive Strength */
#define PESEL0                                             (HWREG16(0x40004C8A)) /* Port E Select 0 */
#define PESEL1                                             (HWREG16(0x40004C8C)) /* Port E Select 1 */
#define P9IV                                               (HWREG16(0x40004C8E)) /* Port 9 Interrupt Vector Register */
#define PESELC                                             (HWREG16(0x40004C96)) /* Port E Complement Select */
#define PEIES                                              (HWREG16(0x40004C98)) /* Port E Interrupt Edge Select */
#define PEIE                                               (HWREG16(0x40004C9A)) /* Port E Interrupt Enable */
#define PEIFG                                              (HWREG16(0x40004C9C)) /* Port E Interrupt Flag */
#define P10IV                                              (HWREG16(0x40004C9E)) /* Port 10 Interrupt Vector Register */
#define PJIN                                               (HWREG16(0x40004D20)) /* Port J Input */
#define PJOUT                                              (HWREG16(0x40004D22)) /* Port J Output */
#define PJDIR                                              (HWREG16(0x40004D24)) /* Port J Direction */
#define PJREN                                              (HWREG16(0x40004D26)) /* Port J Resistor Enable */
#define PJDS                                               (HWREG16(0x40004D28)) /* Port J Drive Strength */
#define PJSEL0                                             (HWREG16(0x40004D2A)) /* Port J Select 0 */
#define PJSEL1                                             (HWREG16(0x40004D2C)) /* Port J Select 1 */
#define PJSELC                                             (HWREG16(0x40004D36)) /* Port J Complement Select */
#define P1IN                                               (HWREG8(0x40004C00))  /* Port 1 Input */
#define P2IN                                               (HWREG8(0x40004C01))  /* Port 2 Input */
#define P2OUT                                              (HWREG8(0x40004C03))  /* Port 2 Output */
#define P1OUT                                              (HWREG8(0x40004C02))  /* Port 1 Output */
#define P1DIR                                              (HWREG8(0x40004C04))  /* Port 1 Direction */
#define P2DIR                                              (HWREG8(0x40004C05))  /* Port 2 Direction */
#define P1REN                                              (HWREG8(0x40004C06))  /* Port 1 Resistor Enable */
#define P2REN                                              (HWREG8(0x40004C07))  /* Port 2 Resistor Enable */
#define P1DS                                               (HWREG8(0x40004C08))  /* Port 1 Drive Strength */
#define P2DS                                               (HWREG8(0x40004C09))  /* Port 2 Drive Strength */
#define P1SEL0                                             (HWREG8(0x40004C0A))  /* Port 1 Select 0 */
#define P2SEL0                                             (HWREG8(0x40004C0B))  /* Port 2 Select 0 */
#define P1SEL1                                             (HWREG8(0x40004C0C))  /* Port 1 Select 1 */
#define P2SEL1                                             (HWREG8(0x40004C0D))  /* Port 2 Select 1 */
#define P1SELC                                             (HWREG8(0x40004C16))  /* Port 1 Complement Select */
#define P2SELC                                             (HWREG8(0x40004C17))  /* Port 2 Complement Select */
#define P1IES                                              (HWREG8(0x40004C18))  /* Port 1 Interrupt Edge Select */
#define P2IES                                              (HWREG8(0x40004C19))  /* Port 2 Interrupt Edge Select */
#define P1IE                                               (HWREG8(0x40004C1A))  /* Port 1 Interrupt Enable */
#define P2IE                                               (HWREG8(0x40004C1B))  /* Port 2 Interrupt Enable */
#define P1IFG                                              (HWREG8(0x40004C1C))  /* Port 1 Interrupt Flag */
#define P2IFG                                              (HWREG8(0x40004C1D))  /* Port 2 Interrupt Flag */
#define P3IN                                               (HWREG8(0x40004C20))  /* Port 3 Input */
#define P4IN                                               (HWREG8(0x40004C21))  /* Port 4 Input */
#define P3OUT                                              (HWREG8(0x40004C22))  /* Port 3 Output */
#define P4OUT                                              (HWREG8(0x40004C23))  /* Port 4 Output */
#define P3DIR                                              (HWREG8(0x40004C24))  /* Port 3 Direction */
#define P4DIR                                              (HWREG8(0x40004C25))  /* Port 4 Direction */
#define P3REN                                              (HWREG8(0x40004C26))  /* Port 3 Resistor Enable */
#define P4REN                                              (HWREG8(0x40004C27))  /* Port 4 Resistor Enable */
#define P3DS                                               (HWREG8(0x40004C28))  /* Port 3 Drive Strength */
#define P4DS                                               (HWREG8(0x40004C29))  /* Port 4 Drive Strength */
#define P4SEL0                                             (HWREG8(0x40004C2B))  /* Port 4 Select 0 */
#define P3SEL0                                             (HWREG8(0x40004C2A))  /* Port 3 Select 0 */
#define P3SEL1                                             (HWREG8(0x40004C2C))  /* Port 3 Select 1 */
#define P4SEL1                                             (HWREG8(0x40004C2D))  /* Port 4 Select 1 */
#define P3SELC                                             (HWREG8(0x40004C36))  /* Port 3 Complement Select */
#define P4SELC                                             (HWREG8(0x40004C37))  /* Port 4 Complement Select */
#define P3IES                                              (HWREG8(0x40004C38))  /* Port 3 Interrupt Edge Select */
#define P4IES                                              (HWREG8(0x40004C39))  /* Port 4 Interrupt Edge Select */
#define P3IE                                               (HWREG8(0x40004C3A))  /* Port 3 Interrupt Enable */
#define P4IE                                               (HWREG8(0x40004C3B))  /* Port 4 Interrupt Enable */
#define P3IFG                                              (HWREG8(0x40004C3C))  /* Port 3 Interrupt Flag */
#define P4IFG                                              (HWREG8(0x40004C3D))  /* Port 4 Interrupt Flag */
#define P5IN                                               (HWREG8(0x40004C40))  /* Port 5 Input */
#define P6IN                                               (HWREG8(0x40004C41))  /* Port 6 Input */
#define P5OUT                                              (HWREG8(0x40004C42))  /* Port 5 Output */
#define P6OUT                                              (HWREG8(0x40004C43))  /* Port 6 Output */
#define P5DIR                                              (HWREG8(0x40004C44))  /* Port 5 Direction */
#define P6DIR                                              (HWREG8(0x40004C45))  /* Port 6 Direction */
#define P5REN                                              (HWREG8(0x40004C46))  /* Port 5 Resistor Enable */
#define P6REN                                              (HWREG8(0x40004C47))  /* Port 6 Resistor Enable */
#define P5DS                                               (HWREG8(0x40004C48))  /* Port 5 Drive Strength */
#define P6DS                                               (HWREG8(0x40004C49))  /* Port 6 Drive Strength */
#define P5SEL0                                             (HWREG8(0x40004C4A))  /* Port 5 Select 0 */
#define P6SEL0                                             (HWREG8(0x40004C4B))  /* Port 6 Select 0 */
#define P5SEL1                                             (HWREG8(0x40004C4C))  /* Port 5 Select 1 */
#define P6SEL1                                             (HWREG8(0x40004C4D))  /* Port 6 Select 1 */
#define P5SELC                                             (HWREG8(0x40004C56))  /* Port 5 Complement Select */
#define P6SELC                                             (HWREG8(0x40004C57))  /* Port 6 Complement Select */
#define P5IES                                              (HWREG8(0x40004C58))  /* Port 5 Interrupt Edge Select */
#define P6IES                                              (HWREG8(0x40004C59))  /* Port 6 Interrupt Edge Select */
#define P5IE                                               (HWREG8(0x40004C5A))  /* Port 5 Interrupt Enable */
#define P6IE                                               (HWREG8(0x40004C5B))  /* Port 6 Interrupt Enable */
#define P5IFG                                              (HWREG8(0x40004C5C))  /* Port 5 Interrupt Flag */
#define P6IFG                                              (HWREG8(0x40004C5D))  /* Port 6 Interrupt Flag */
#define P7IN                                               (HWREG8(0x40004C60))  /* Port 7 Input */
#define P8IN                                               (HWREG8(0x40004C61))  /* Port 8 Input */
#define P7OUT                                              (HWREG8(0x40004C62))  /* Port 7 Output */
#define P8OUT                                              (HWREG8(0x40004C63))  /* Port 8 Output */
#define P7DIR                                              (HWREG8(0x40004C64))  /* Port 7 Direction */
#define P8DIR                                              (HWREG8(0x40004C65))  /* Port 8 Direction */
#define P7REN                                              (HWREG8(0x40004C66))  /* Port 7 Resistor Enable */
#define P8REN                                              (HWREG8(0x40004C67))  /* Port 8 Resistor Enable */
#define P7DS                                               (HWREG8(0x40004C68))  /* Port 7 Drive Strength */
#define P8DS                                               (HWREG8(0x40004C69))  /* Port 8 Drive Strength */
#define P7SEL0                                             (HWREG8(0x40004C6A))  /* Port 7 Select 0 */
#define P8SEL0                                             (HWREG8(0x40004C6B))  /* Port 8 Select 0 */
#define P7SEL1                                             (HWREG8(0x40004C6C))  /* Port 7 Select 1 */
#define P8SEL1                                             (HWREG8(0x40004C6D))  /* Port 8 Select 1 */
#define P7SELC                                             (HWREG8(0x40004C76))  /* Port 7 Complement Select */
#define P8SELC                                             (HWREG8(0x40004C77))  /* Port 8 Complement Select */
#define P7IES                                              (HWREG8(0x40004C78))  /* Port 7 Interrupt Edge Select */
#define P8IES                                              (HWREG8(0x40004C79))  /* Port 8 Interrupt Edge Select */
#define P7IE                                               (HWREG8(0x40004C7A))  /* Port 7 Interrupt Enable */
#define P8IE                                               (HWREG8(0x40004C7B))  /* Port 8 Interrupt Enable */
#define P7IFG                                              (HWREG8(0x40004C7C))  /* Port 7 Interrupt Flag */
#define P8IFG                                              (HWREG8(0x40004C7D))  /* Port 8 Interrupt Flag */
#define P9IN                                               (HWREG8(0x40004C80))  /* Port 9 Input */
#define P10IN                                              (HWREG8(0x40004C81))  /* Port 10 Input */
#define P9OUT                                              (HWREG8(0x40004C82))  /* Port 9 Output */
#define P10OUT                                             (HWREG8(0x40004C83))  /* Port 10 Output */
#define P9DIR                                              (HWREG8(0x40004C84))  /* Port 9 Direction */
#define P10DIR                                             (HWREG8(0x40004C85))  /* Port 10 Direction */
#define P9REN                                              (HWREG8(0x40004C86))  /* Port 9 Resistor Enable */
#define P10REN                                             (HWREG8(0x40004C87))  /* Port 10 Resistor Enable */
#define P9DS                                               (HWREG8(0x40004C88))  /* Port 9 Drive Strength */
#define P10DS                                              (HWREG8(0x40004C89))  /* Port 10 Drive Strength */
#define P9SEL0                                             (HWREG8(0x40004C8A))  /* Port 9 Select 0 */
#define P10SEL0                                            (HWREG8(0x40004C8B))  /* Port 10 Select 0 */
#define P9SEL1                                             (HWREG8(0x40004C8C))  /* Port 9 Select 1 */
#define P10SEL1                                            (HWREG8(0x40004C8D))  /* Port 10 Select 1 */
#define P9SELC                                             (HWREG8(0x40004C96))  /* Port 9 Complement Select */
#define P10SELC                                            (HWREG8(0x40004C97))  /* Port 10 Complement Select */
#define P9IES                                              (HWREG8(0x40004C98))  /* Port 9 Interrupt Edge Select */
#define P10IES                                             (HWREG8(0x40004C99))  /* Port 10 Interrupt Edge Select */
#define P9IE                                               (HWREG8(0x40004C9A))  /* Port 9 Interrupt Enable */
#define P10IE                                              (HWREG8(0x40004C9B))  /* Port 10 Interrupt Enable */
#define P9IFG                                              (HWREG8(0x40004C9C))  /* Port 9 Interrupt Flag */
#define P10IFG                                             (HWREG8(0x40004C9D))  /* Port 10 Interrupt Flag */

/* Register offsets from DIO_BASE address */
#define OFS_PAIN                                           (0x0000)              /* Port A Input */
#define OFS_PAOUT                                          (0x0002)              /* Port A Output */
#define OFS_PADIR                                          (0x0004)              /* Port A Direction */
#define OFS_PAREN                                          (0x0006)              /* Port A Resistor Enable */
#define OFS_PADS                                           (0x0008)              /* Port A Drive Strength */
#define OFS_PASEL0                                         (0x000a)              /* Port A Select 0 */
#define OFS_PASEL1                                         (0x000c)              /* Port A Select 1 */
#define OFS_P1IV                                           (0x000e)              /* Port 1 Interrupt Vector Register */
#define OFS_PASELC                                         (0x0016)              /* Port A Complement Select */
#define OFS_PAIES                                          (0x0018)              /* Port A Interrupt Edge Select */
#define OFS_PAIE                                           (0x001a)              /* Port A Interrupt Enable */
#define OFS_PAIFG                                          (0x001c)              /* Port A Interrupt Flag */
#define OFS_P2IV                                           (0x001e)              /* Port 2 Interrupt Vector Register */
#define OFS_PBIN                                           (0x0020)              /* Port B Input */
#define OFS_PBOUT                                          (0x0022)              /* Port B Output */
#define OFS_PBDIR                                          (0x0024)              /* Port B Direction */
#define OFS_PBREN                                          (0x0026)              /* Port B Resistor Enable */
#define OFS_PBDS                                           (0x0028)              /* Port B Drive Strength */
#define OFS_PBSEL0                                         (0x002a)              /* Port B Select 0 */
#define OFS_PBSEL1                                         (0x002c)              /* Port B Select 1 */
#define OFS_P3IV                                           (0x002e)              /* Port 3 Interrupt Vector Register */
#define OFS_PBSELC                                         (0x0036)              /* Port B Complement Select */
#define OFS_PBIES                                          (0x0038)              /* Port B Interrupt Edge Select */
#define OFS_PBIE                                           (0x003a)              /* Port B Interrupt Enable */
#define OFS_PBIFG                                          (0x003c)              /* Port B Interrupt Flag */
#define OFS_P4IV                                           (0x003e)              /* Port 4 Interrupt Vector Register */
#define OFS_PCIN                                           (0x0040)              /* Port C Input */
#define OFS_PCOUT                                          (0x0042)              /* Port C Output */
#define OFS_PCDIR                                          (0x0044)              /* Port C Direction */
#define OFS_PCREN                                          (0x0046)              /* Port C Resistor Enable */
#define OFS_PCDS                                           (0x0048)              /* Port C Drive Strength */
#define OFS_PCSEL0                                         (0x004a)              /* Port C Select 0 */
#define OFS_PCSEL1                                         (0x004c)              /* Port C Select 1 */
#define OFS_P5IV                                           (0x004e)              /* Port 5 Interrupt Vector Register */
#define OFS_PCSELC                                         (0x0056)              /* Port C Complement Select */
#define OFS_PCIES                                          (0x0058)              /* Port C Interrupt Edge Select */
#define OFS_PCIE                                           (0x005a)              /* Port C Interrupt Enable */
#define OFS_PCIFG                                          (0x005c)              /* Port C Interrupt Flag */
#define OFS_P6IV                                           (0x005e)              /* Port 6 Interrupt Vector Register */
#define OFS_PDIN                                           (0x0060)              /* Port D Input */
#define OFS_PDOUT                                          (0x0062)              /* Port D Output */
#define OFS_PDDIR                                          (0x0064)              /* Port D Direction */
#define OFS_PDREN                                          (0x0066)              /* Port D Resistor Enable */
#define OFS_PDDS                                           (0x0068)              /* Port D Drive Strength */
#define OFS_PDSEL0                                         (0x006a)              /* Port D Select 0 */
#define OFS_PDSEL1                                         (0x006c)              /* Port D Select 1 */
#define OFS_P7IV                                           (0x006e)              /* Port 7 Interrupt Vector Register */
#define OFS_PDSELC                                         (0x0076)              /* Port D Complement Select */
#define OFS_PDIES                                          (0x0078)              /* Port D Interrupt Edge Select */
#define OFS_PDIE                                           (0x007a)              /* Port D Interrupt Enable */
#define OFS_PDIFG                                          (0x007c)              /* Port D Interrupt Flag */
#define OFS_P8IV                                           (0x007e)              /* Port 8 Interrupt Vector Register */
#define OFS_PEIN                                           (0x0080)              /* Port E Input */
#define OFS_PEOUT                                          (0x0082)              /* Port E Output */
#define OFS_PEDIR                                          (0x0084)              /* Port E Direction */
#define OFS_PEREN                                          (0x0086)              /* Port E Resistor Enable */
#define OFS_PEDS                                           (0x0088)              /* Port E Drive Strength */
#define OFS_PESEL0                                         (0x008a)              /* Port E Select 0 */
#define OFS_PESEL1                                         (0x008c)              /* Port E Select 1 */
#define OFS_P9IV                                           (0x008e)              /* Port 9 Interrupt Vector Register */
#define OFS_PESELC                                         (0x0096)              /* Port E Complement Select */
#define OFS_PEIES                                          (0x0098)              /* Port E Interrupt Edge Select */
#define OFS_PEIE                                           (0x009a)              /* Port E Interrupt Enable */
#define OFS_PEIFG                                          (0x009c)              /* Port E Interrupt Flag */
#define OFS_P10IV                                          (0x009e)              /* Port 10 Interrupt Vector Register */
#define OFS_PJIN                                           (0x0120)              /* Port J Input */
#define OFS_PJOUT                                          (0x0122)              /* Port J Output */
#define OFS_PJDIR                                          (0x0124)              /* Port J Direction */
#define OFS_PJREN                                          (0x0126)              /* Port J Resistor Enable */
#define OFS_PJDS                                           (0x0128)              /* Port J Drive Strength */
#define OFS_PJSEL0                                         (0x012a)              /* Port J Select 0 */
#define OFS_PJSEL1                                         (0x012c)              /* Port J Select 1 */
#define OFS_PJSELC                                         (0x0136)              /* Port J Complement Select */
#define OFS_P1IN                                           (0x0000)              /* Port 1 Input */
#define OFS_P2IN                                           (0x0000)              /* Port 2 Input */
#define OFS_P2OUT                                          (0x0002)              /* Port 2 Output */
#define OFS_P1OUT                                          (0x0002)              /* Port 1 Output */
#define OFS_P1DIR                                          (0x0004)              /* Port 1 Direction */
#define OFS_P2DIR                                          (0x0004)              /* Port 2 Direction */
#define OFS_P1REN                                          (0x0006)              /* Port 1 Resistor Enable */
#define OFS_P2REN                                          (0x0006)              /* Port 2 Resistor Enable */
#define OFS_P1DS                                           (0x0008)              /* Port 1 Drive Strength */
#define OFS_P2DS                                           (0x0008)              /* Port 2 Drive Strength */
#define OFS_P1SEL0                                         (0x000a)              /* Port 1 Select 0 */
#define OFS_P2SEL0                                         (0x000a)              /* Port 2 Select 0 */
#define OFS_P1SEL1                                         (0x000c)              /* Port 1 Select 1 */
#define OFS_P2SEL1                                         (0x000c)              /* Port 2 Select 1 */
#define OFS_P1SELC                                         (0x0016)              /* Port 1 Complement Select */
#define OFS_P2SELC                                         (0x0016)              /* Port 2 Complement Select */
#define OFS_P1IES                                          (0x0018)              /* Port 1 Interrupt Edge Select */
#define OFS_P2IES                                          (0x0018)              /* Port 2 Interrupt Edge Select */
#define OFS_P1IE                                           (0x001a)              /* Port 1 Interrupt Enable */
#define OFS_P2IE                                           (0x001a)              /* Port 2 Interrupt Enable */
#define OFS_P1IFG                                          (0x001c)              /* Port 1 Interrupt Flag */
#define OFS_P2IFG                                          (0x001c)              /* Port 2 Interrupt Flag */
#define OFS_P3IN                                           (0x0020)              /* Port 3 Input */
#define OFS_P4IN                                           (0x0020)              /* Port 4 Input */
#define OFS_P3OUT                                          (0x0022)              /* Port 3 Output */
#define OFS_P4OUT                                          (0x0022)              /* Port 4 Output */
#define OFS_P3DIR                                          (0x0024)              /* Port 3 Direction */
#define OFS_P4DIR                                          (0x0024)              /* Port 4 Direction */
#define OFS_P3REN                                          (0x0026)              /* Port 3 Resistor Enable */
#define OFS_P4REN                                          (0x0026)              /* Port 4 Resistor Enable */
#define OFS_P3DS                                           (0x0028)              /* Port 3 Drive Strength */
#define OFS_P4DS                                           (0x0028)              /* Port 4 Drive Strength */
#define OFS_P4SEL0                                         (0x002a)              /* Port 4 Select 0 */
#define OFS_P3SEL0                                         (0x002a)              /* Port 3 Select 0 */
#define OFS_P3SEL1                                         (0x002c)              /* Port 3 Select 1 */
#define OFS_P4SEL1                                         (0x002c)              /* Port 4 Select 1 */
#define OFS_P3SELC                                         (0x0036)              /* Port 3 Complement Select */
#define OFS_P4SELC                                         (0x0036)              /* Port 4 Complement Select */
#define OFS_P3IES                                          (0x0038)              /* Port 3 Interrupt Edge Select */
#define OFS_P4IES                                          (0x0038)              /* Port 4 Interrupt Edge Select */
#define OFS_P3IE                                           (0x003a)              /* Port 3 Interrupt Enable */
#define OFS_P4IE                                           (0x003a)              /* Port 4 Interrupt Enable */
#define OFS_P3IFG                                          (0x003c)              /* Port 3 Interrupt Flag */
#define OFS_P4IFG                                          (0x003c)              /* Port 4 Interrupt Flag */
#define OFS_P5IN                                           (0x0040)              /* Port 5 Input */
#define OFS_P6IN                                           (0x0040)              /* Port 6 Input */
#define OFS_P5OUT                                          (0x0042)              /* Port 5 Output */
#define OFS_P6OUT                                          (0x0042)              /* Port 6 Output */
#define OFS_P5DIR                                          (0x0044)              /* Port 5 Direction */
#define OFS_P6DIR                                          (0x0044)              /* Port 6 Direction */
#define OFS_P5REN                                          (0x0046)              /* Port 5 Resistor Enable */
#define OFS_P6REN                                          (0x0046)              /* Port 6 Resistor Enable */
#define OFS_P5DS                                           (0x0048)              /* Port 5 Drive Strength */
#define OFS_P6DS                                           (0x0048)              /* Port 6 Drive Strength */
#define OFS_P5SEL0                                         (0x004a)              /* Port 5 Select 0 */
#define OFS_P6SEL0                                         (0x004a)              /* Port 6 Select 0 */
#define OFS_P5SEL1                                         (0x004c)              /* Port 5 Select 1 */
#define OFS_P6SEL1                                         (0x004c)              /* Port 6 Select 1 */
#define OFS_P5SELC                                         (0x0056)              /* Port 5 Complement Select */
#define OFS_P6SELC                                         (0x0056)              /* Port 6 Complement Select */
#define OFS_P5IES                                          (0x0058)              /* Port 5 Interrupt Edge Select */
#define OFS_P6IES                                          (0x0058)              /* Port 6 Interrupt Edge Select */
#define OFS_P5IE                                           (0x005a)              /* Port 5 Interrupt Enable */
#define OFS_P6IE                                           (0x005a)              /* Port 6 Interrupt Enable */
#define OFS_P5IFG                                          (0x005c)              /* Port 5 Interrupt Flag */
#define OFS_P6IFG                                          (0x005c)              /* Port 6 Interrupt Flag */
#define OFS_P7IN                                           (0x0060)              /* Port 7 Input */
#define OFS_P8IN                                           (0x0060)              /* Port 8 Input */
#define OFS_P7OUT                                          (0x0062)              /* Port 7 Output */
#define OFS_P8OUT                                          (0x0062)              /* Port 8 Output */
#define OFS_P7DIR                                          (0x0064)              /* Port 7 Direction */
#define OFS_P8DIR                                          (0x0064)              /* Port 8 Direction */
#define OFS_P7REN                                          (0x0066)              /* Port 7 Resistor Enable */
#define OFS_P8REN                                          (0x0066)              /* Port 8 Resistor Enable */
#define OFS_P7DS                                           (0x0068)              /* Port 7 Drive Strength */
#define OFS_P8DS                                           (0x0068)              /* Port 8 Drive Strength */
#define OFS_P7SEL0                                         (0x006a)              /* Port 7 Select 0 */
#define OFS_P8SEL0                                         (0x006a)              /* Port 8 Select 0 */
#define OFS_P7SEL1                                         (0x006c)              /* Port 7 Select 1 */
#define OFS_P8SEL1                                         (0x006c)              /* Port 8 Select 1 */
#define OFS_P7SELC                                         (0x0076)              /* Port 7 Complement Select */
#define OFS_P8SELC                                         (0x0076)              /* Port 8 Complement Select */
#define OFS_P7IES                                          (0x0078)              /* Port 7 Interrupt Edge Select */
#define OFS_P8IES                                          (0x0078)              /* Port 8 Interrupt Edge Select */
#define OFS_P7IE                                           (0x007a)              /* Port 7 Interrupt Enable */
#define OFS_P8IE                                           (0x007a)              /* Port 8 Interrupt Enable */
#define OFS_P7IFG                                          (0x007c)              /* Port 7 Interrupt Flag */
#define OFS_P8IFG                                          (0x007c)              /* Port 8 Interrupt Flag */
#define OFS_P9IN                                           (0x0080)              /* Port 9 Input */
#define OFS_P10IN                                          (0x0080)              /* Port 10 Input */
#define OFS_P9OUT                                          (0x0082)              /* Port 9 Output */
#define OFS_P10OUT                                         (0x0082)              /* Port 10 Output */
#define OFS_P9DIR                                          (0x0084)              /* Port 9 Direction */
#define OFS_P10DIR                                         (0x0084)              /* Port 10 Direction */
#define OFS_P9REN                                          (0x0086)              /* Port 9 Resistor Enable */
#define OFS_P10REN                                         (0x0086)              /* Port 10 Resistor Enable */
#define OFS_P9DS                                           (0x0088)              /* Port 9 Drive Strength */
#define OFS_P10DS                                          (0x0088)              /* Port 10 Drive Strength */
#define OFS_P9SEL0                                         (0x008a)              /* Port 9 Select 0 */
#define OFS_P10SEL0                                        (0x008a)              /* Port 10 Select 0 */
#define OFS_P9SEL1                                         (0x008c)              /* Port 9 Select 1 */
#define OFS_P10SEL1                                        (0x008c)              /* Port 10 Select 1 */
#define OFS_P9SELC                                         (0x0096)              /* Port 9 Complement Select */
#define OFS_P10SELC                                        (0x0096)              /* Port 10 Complement Select */
#define OFS_P9IES                                          (0x0098)              /* Port 9 Interrupt Edge Select */
#define OFS_P10IES                                         (0x0098)              /* Port 10 Interrupt Edge Select */
#define OFS_P9IE                                           (0x009a)              /* Port 9 Interrupt Enable */
#define OFS_P10IE                                          (0x009a)              /* Port 10 Interrupt Enable */
#define OFS_P9IFG                                          (0x009c)              /* Port 9 Interrupt Flag */
#define OFS_P10IFG                                         (0x009c)              /* Port 10 Interrupt Flag */


//*****************************************************************************
// DMA Registers
//*****************************************************************************
#define DMA_DEVICE_CFG                                     (HWREG32(0x4000E000)) /* Device Configuration Status */
#define DMA_SW_CHTRIG                                      (HWREG32(0x4000E004)) /* Software Channel Trigger Register */
#define DMA_CH0_SRCCFG                                     (HWREG32(0x4000E010)) /* Channel n Source Configuration Register */
#define DMA_CH1_SRCCFG                                     (HWREG32(0x4000E014)) /* Channel n Source Configuration Register */
#define DMA_CH2_SRCCFG                                     (HWREG32(0x4000E018)) /* Channel n Source Configuration Register */
#define DMA_CH3_SRCCFG                                     (HWREG32(0x4000E01C)) /* Channel n Source Configuration Register */
#define DMA_CH4_SRCCFG                                     (HWREG32(0x4000E020)) /* Channel n Source Configuration Register */
#define DMA_CH5_SRCCFG                                     (HWREG32(0x4000E024)) /* Channel n Source Configuration Register */
#define DMA_CH6_SRCCFG                                     (HWREG32(0x4000E028)) /* Channel n Source Configuration Register */
#define DMA_CH7_SRCCFG                                     (HWREG32(0x4000E02C)) /* Channel n Source Configuration Register */
#define DMA_CH8_SRCCFG                                     (HWREG32(0x4000E030)) /* Channel n Source Configuration Register */
#define DMA_CH9_SRCCFG                                     (HWREG32(0x4000E034)) /* Channel n Source Configuration Register */
#define DMA_CH10_SRCCFG                                    (HWREG32(0x4000E038)) /* Channel n Source Configuration Register */
#define DMA_CH11_SRCCFG                                    (HWREG32(0x4000E03C)) /* Channel n Source Configuration Register */
#define DMA_CH12_SRCCFG                                    (HWREG32(0x4000E040)) /* Channel n Source Configuration Register */
#define DMA_CH13_SRCCFG                                    (HWREG32(0x4000E044)) /* Channel n Source Configuration Register */
#define DMA_CH14_SRCCFG                                    (HWREG32(0x4000E048)) /* Channel n Source Configuration Register */
#define DMA_CH15_SRCCFG                                    (HWREG32(0x4000E04C)) /* Channel n Source Configuration Register */
#define DMA_CH16_SRCCFG                                    (HWREG32(0x4000E050)) /* Channel n Source Configuration Register */
#define DMA_CH17_SRCCFG                                    (HWREG32(0x4000E054)) /* Channel n Source Configuration Register */
#define DMA_CH18_SRCCFG                                    (HWREG32(0x4000E058)) /* Channel n Source Configuration Register */
#define DMA_CH19_SRCCFG                                    (HWREG32(0x4000E05C)) /* Channel n Source Configuration Register */
#define DMA_CH20_SRCCFG                                    (HWREG32(0x4000E060)) /* Channel n Source Configuration Register */
#define DMA_CH21_SRCCFG                                    (HWREG32(0x4000E064)) /* Channel n Source Configuration Register */
#define DMA_CH22_SRCCFG                                    (HWREG32(0x4000E068)) /* Channel n Source Configuration Register */
#define DMA_CH23_SRCCFG                                    (HWREG32(0x4000E06C)) /* Channel n Source Configuration Register */
#define DMA_CH24_SRCCFG                                    (HWREG32(0x4000E070)) /* Channel n Source Configuration Register */
#define DMA_CH25_SRCCFG                                    (HWREG32(0x4000E074)) /* Channel n Source Configuration Register */
#define DMA_CH26_SRCCFG                                    (HWREG32(0x4000E078)) /* Channel n Source Configuration Register */
#define DMA_CH27_SRCCFG                                    (HWREG32(0x4000E07C)) /* Channel n Source Configuration Register */
#define DMA_CH28_SRCCFG                                    (HWREG32(0x4000E080)) /* Channel n Source Configuration Register */
#define DMA_CH29_SRCCFG                                    (HWREG32(0x4000E084)) /* Channel n Source Configuration Register */
#define DMA_CH30_SRCCFG                                    (HWREG32(0x4000E088)) /* Channel n Source Configuration Register */
#define DMA_CH31_SRCCFG                                    (HWREG32(0x4000E08C)) /* Channel n Source Configuration Register */
#define DMA_INT1_SRCCFG                                    (HWREG32(0x4000E100)) /* Interrupt 1 Source Channel Configuration */
#define DMA_INT2_SRCCFG                                    (HWREG32(0x4000E104)) /* Interrupt 2 Source Channel Configuration Register */
#define DMA_INT3_SRCCFG                                    (HWREG32(0x4000E108)) /* Interrupt 3 Source Channel Configuration Register */
#define DMA_INT0_SRCFLG                                    (HWREG32(0x4000E110)) /* Interrupt 0 Source Channel Flag Register */
#define DMA_INT0_CLRFLG                                    (HWREG32(0x4000E114)) /* Interrupt 0 Source Channel Clear Flag Register */
#define DMA_STAT                                           (HWREG32(0x4000F000)) /* Status Register */
#define DMA_CFG                                            (HWREG32(0x4000F004)) /* Configuration Register */
#define DMA_CTLBASE                                        (HWREG32(0x4000F008)) /* Channel Control Data Base Pointer Register */
#define DMA_ATLBASE                                        (HWREG32(0x4000F00C)) /* Channel Alternate Control Data Base Pointer Register */
#define DMA_WAITSTAT                                       (HWREG32(0x4000F010)) /* Channel Wait on Request Status Register */
#define DMA_SWREQ                                          (HWREG32(0x4000F014)) /* Channel Software Request Register */
#define DMA_USEBURSTSET                                    (HWREG32(0x4000F018)) /* Channel Useburst Set Register */
#define DMA_USEBURSTCLR                                    (HWREG32(0x4000F01C)) /* Channel Useburst Clear Register */
#define DMA_REQMASKSET                                     (HWREG32(0x4000F020)) /* Channel Request Mask Set Register */
#define DMA_REQMASKCLR                                     (HWREG32(0x4000F024)) /* Channel Request Mask Clear Register */
#define DMA_ENASET                                         (HWREG32(0x4000F028)) /* Channel Enable Set Register */
#define DMA_ENACLR                                         (HWREG32(0x4000F02C)) /* Channel Enable Clear Register */
#define DMA_ALTSET                                         (HWREG32(0x4000F030)) /* Channel Primary-Alternate Set Register */
#define DMA_ALTCLR                                         (HWREG32(0x4000F034)) /* Channel Primary-Alternate Clear Register */
#define DMA_PRIOSET                                        (HWREG32(0x4000F038)) /* Channel Priority Set Register */
#define DMA_PRIOCLR                                        (HWREG32(0x4000F03C)) /* Channel Priority Clear Register */
#define DMA_ERRCLR                                         (HWREG32(0x4000F04C)) /* Bus Error Clear Register */

/* Register offsets from DMA_BASE address */
#define OFS_DMA_DEVICE_CFG                                 (0x00000000)          /* Device Configuration Status */
#define OFS_DMA_SW_CHTRIG                                  (0x00000004)          /* Software Channel Trigger Register */
#define OFS_DMA_CH0_SRCCFG                                 (0x00000010)          /* Channel n Source Configuration Register */
#define OFS_DMA_CH1_SRCCFG                                 (0x00000014)          /* Channel n Source Configuration Register */
#define OFS_DMA_CH2_SRCCFG                                 (0x00000018)          /* Channel n Source Configuration Register */
#define OFS_DMA_CH3_SRCCFG                                 (0x0000001C)          /* Channel n Source Configuration Register */
#define OFS_DMA_CH4_SRCCFG                                 (0x00000020)          /* Channel n Source Configuration Register */
#define OFS_DMA_CH5_SRCCFG                                 (0x00000024)          /* Channel n Source Configuration Register */
#define OFS_DMA_CH6_SRCCFG                                 (0x00000028)          /* Channel n Source Configuration Register */
#define OFS_DMA_CH7_SRCCFG                                 (0x0000002C)          /* Channel n Source Configuration Register */
#define OFS_DMA_CH8_SRCCFG                                 (0x00000030)          /* Channel n Source Configuration Register */
#define OFS_DMA_CH9_SRCCFG                                 (0x00000034)          /* Channel n Source Configuration Register */
#define OFS_DMA_CH10_SRCCFG                                (0x00000038)          /* Channel n Source Configuration Register */
#define OFS_DMA_CH11_SRCCFG                                (0x0000003C)          /* Channel n Source Configuration Register */
#define OFS_DMA_CH12_SRCCFG                                (0x00000040)          /* Channel n Source Configuration Register */
#define OFS_DMA_CH13_SRCCFG                                (0x00000044)          /* Channel n Source Configuration Register */
#define OFS_DMA_CH14_SRCCFG                                (0x00000048)          /* Channel n Source Configuration Register */
#define OFS_DMA_CH15_SRCCFG                                (0x0000004C)          /* Channel n Source Configuration Register */
#define OFS_DMA_CH16_SRCCFG                                (0x00000050)          /* Channel n Source Configuration Register */
#define OFS_DMA_CH17_SRCCFG                                (0x00000054)          /* Channel n Source Configuration Register */
#define OFS_DMA_CH18_SRCCFG                                (0x00000058)          /* Channel n Source Configuration Register */
#define OFS_DMA_CH19_SRCCFG                                (0x0000005C)          /* Channel n Source Configuration Register */
#define OFS_DMA_CH20_SRCCFG                                (0x00000060)          /* Channel n Source Configuration Register */
#define OFS_DMA_CH21_SRCCFG                                (0x00000064)          /* Channel n Source Configuration Register */
#define OFS_DMA_CH22_SRCCFG                                (0x00000068)          /* Channel n Source Configuration Register */
#define OFS_DMA_CH23_SRCCFG                                (0x0000006C)          /* Channel n Source Configuration Register */
#define OFS_DMA_CH24_SRCCFG                                (0x00000070)          /* Channel n Source Configuration Register */
#define OFS_DMA_CH25_SRCCFG                                (0x00000074)          /* Channel n Source Configuration Register */
#define OFS_DMA_CH26_SRCCFG                                (0x00000078)          /* Channel n Source Configuration Register */
#define OFS_DMA_CH27_SRCCFG                                (0x0000007C)          /* Channel n Source Configuration Register */
#define OFS_DMA_CH28_SRCCFG                                (0x00000080)          /* Channel n Source Configuration Register */
#define OFS_DMA_CH29_SRCCFG                                (0x00000084)          /* Channel n Source Configuration Register */
#define OFS_DMA_CH30_SRCCFG                                (0x00000088)          /* Channel n Source Configuration Register */
#define OFS_DMA_CH31_SRCCFG                                (0x0000008C)          /* Channel n Source Configuration Register */
#define OFS_DMA_INT1_SRCCFG                                (0x00000100)          /* Interrupt 1 Source Channel Configuration */
#define OFS_DMA_INT2_SRCCFG                                (0x00000104)          /* Interrupt 2 Source Channel Configuration Register */
#define OFS_DMA_INT3_SRCCFG                                (0x00000108)          /* Interrupt 3 Source Channel Configuration Register */
#define OFS_DMA_INT0_SRCFLG                                (0x00000110)          /* Interrupt 0 Source Channel Flag Register */
#define OFS_DMA_INT0_CLRFLG                                (0x00000114)          /* Interrupt 0 Source Channel Clear Flag Register */
#define OFS_DMA_STAT                                       (0x00001000)          /* Status Register */
#define OFS_DMA_CFG                                        (0x00001004)          /* Configuration Register */
#define OFS_DMA_CTLBASE                                    (0x00001008)          /* Channel Control Data Base Pointer Register */
#define OFS_DMA_ATLBASE                                    (0x0000100c)          /* Channel Alternate Control Data Base Pointer Register */
#define OFS_DMA_WAITSTAT                                   (0x00001010)          /* Channel Wait on Request Status Register */
#define OFS_DMA_SWREQ                                      (0x00001014)          /* Channel Software Request Register */
#define OFS_DMA_USEBURSTSET                                (0x00001018)          /* Channel Useburst Set Register */
#define OFS_DMA_USEBURSTCLR                                (0x0000101c)          /* Channel Useburst Clear Register */
#define OFS_DMA_REQMASKSET                                 (0x00001020)          /* Channel Request Mask Set Register */
#define OFS_DMA_REQMASKCLR                                 (0x00001024)          /* Channel Request Mask Clear Register */
#define OFS_DMA_ENASET                                     (0x00001028)          /* Channel Enable Set Register */
#define OFS_DMA_ENACLR                                     (0x0000102c)          /* Channel Enable Clear Register */
#define OFS_DMA_ALTSET                                     (0x00001030)          /* Channel Primary-Alternate Set Register */
#define OFS_DMA_ALTCLR                                     (0x00001034)          /* Channel Primary-Alternate Clear Register */
#define OFS_DMA_PRIOSET                                    (0x00001038)          /* Channel Priority Set Register */
#define OFS_DMA_PRIOCLR                                    (0x0000103c)          /* Channel Priority Clear Register */
#define OFS_DMA_ERRCLR                                     (0x0000104c)          /* Bus Error Clear Register */


//*****************************************************************************
// DWT Registers
//*****************************************************************************
#define DWT_CTRL                                           (HWREG32(0xE0001000)) /* DWT Control Register */
#define DWT_CYCCNT                                         (HWREG32(0xE0001004)) /* DWT Current PC Sampler Cycle Count Register */
#define DWT_CPICNT                                         (HWREG32(0xE0001008)) /* DWT CPI Count Register */
#define DWT_EXCCNT                                         (HWREG32(0xE000100C)) /* DWT Exception Overhead Count Register */
#define DWT_SLEEPCNT                                       (HWREG32(0xE0001010)) /* DWT Sleep Count Register */
#define DWT_LSUCNT                                         (HWREG32(0xE0001014)) /* DWT LSU Count Register */
#define DWT_FOLDCNT                                        (HWREG32(0xE0001018)) /* DWT Fold Count Register */
#define DWT_PCSR                                           (HWREG32(0xE000101C)) /* DWT Program Counter Sample Register */
#define DWT_COMP0                                          (HWREG32(0xE0001020)) /* DWT Comparator Register 0 */
#define DWT_MASK0                                          (HWREG32(0xE0001024)) /* DWT Mask Register 0 */
#define DWT_FUNCTION0                                      (HWREG32(0xE0001028)) /* DWT Function Register 0 */
#define DWT_COMP1                                          (HWREG32(0xE0001030)) /* DWT Comparator Register 1 */
#define DWT_MASK1                                          (HWREG32(0xE0001034)) /* DWT Mask Register 1 */
#define DWT_FUNCTION1                                      (HWREG32(0xE0001038)) /* DWT Function Register 1 */
#define DWT_COMP2                                          (HWREG32(0xE0001040)) /* DWT Comparator Register 2 */
#define DWT_MASK2                                          (HWREG32(0xE0001044)) /* DWT Mask Register 2 */
#define DWT_FUNCTION2                                      (HWREG32(0xE0001048)) /* DWT Function Register 2 */
#define DWT_COMP3                                          (HWREG32(0xE0001050)) /* DWT Comparator Register 3 */
#define DWT_MASK3                                          (HWREG32(0xE0001054)) /* DWT Mask Register 3 */
#define DWT_FUNCTION3                                      (HWREG32(0xE0001058)) /* DWT Function Register 3 */

/* Register offsets from DWT_BASE address */
#define OFS_DWT_CTRL                                       (0x00000000)          /* DWT Control Register */
#define OFS_DWT_CYCCNT                                     (0x00000004)          /* DWT Current PC Sampler Cycle Count Register */
#define OFS_DWT_CPICNT                                     (0x00000008)          /* DWT CPI Count Register */
#define OFS_DWT_EXCCNT                                     (0x0000000C)          /* DWT Exception Overhead Count Register */
#define OFS_DWT_SLEEPCNT                                   (0x00000010)          /* DWT Sleep Count Register */
#define OFS_DWT_LSUCNT                                     (0x00000014)          /* DWT LSU Count Register */
#define OFS_DWT_FOLDCNT                                    (0x00000018)          /* DWT Fold Count Register */
#define OFS_DWT_PCSR                                       (0x0000001C)          /* DWT Program Counter Sample Register */
#define OFS_DWT_COMP0                                      (0x00000020)          /* DWT Comparator Register 0 */
#define OFS_DWT_MASK0                                      (0x00000024)          /* DWT Mask Register 0 */
#define OFS_DWT_FUNCTION0                                  (0x00000028)          /* DWT Function Register 0 */
#define OFS_DWT_COMP1                                      (0x00000030)          /* DWT Comparator Register 1 */
#define OFS_DWT_MASK1                                      (0x00000034)          /* DWT Mask Register 1 */
#define OFS_DWT_FUNCTION1                                  (0x00000038)          /* DWT Function Register 1 */
#define OFS_DWT_COMP2                                      (0x00000040)          /* DWT Comparator Register 2 */
#define OFS_DWT_MASK2                                      (0x00000044)          /* DWT Mask Register 2 */
#define OFS_DWT_FUNCTION2                                  (0x00000048)          /* DWT Function Register 2 */
#define OFS_DWT_COMP3                                      (0x00000050)          /* DWT Comparator Register 3 */
#define OFS_DWT_MASK3                                      (0x00000054)          /* DWT Mask Register 3 */
#define OFS_DWT_FUNCTION3                                  (0x00000058)          /* DWT Function Register 3 */


//*****************************************************************************
// EUSCI_A0 Registers
//*****************************************************************************
#define UCA0CTLW0                                          (HWREG16(0x40001000)) /* eUSCI_Ax Control Word Register 0 */
#define UCA0CTLW0_SPI                                      (HWREG16(0x40001000)) /*  */
#define UCA0CTLW1                                          (HWREG16(0x40001002)) /* eUSCI_Ax Control Word Register 1 */
#define UCA0BRW                                            (HWREG16(0x40001006)) /* eUSCI_Ax Baud Rate Control Word Register */
#define UCA0BRW_SPI                                        (HWREG16(0x40001006)) /*  */
#define UCA0MCTLW                                          (HWREG16(0x40001008)) /* eUSCI_Ax Modulation Control Word Register */
#define UCA0STATW                                          (HWREG16(0x4000100A)) /* eUSCI_Ax Status Register */
#define UCA0STATW_SPI                                      (HWREG16(0x4000100A)) /*  */
#define UCA0RXBUF                                          (HWREG16(0x4000100C)) /* eUSCI_Ax Receive Buffer Register */
#define UCA0RXBUF_SPI                                      (HWREG16(0x4000100C)) /*  */
#define UCA0TXBUF                                          (HWREG16(0x4000100E)) /* eUSCI_Ax Transmit Buffer Register */
#define UCA0TXBUF_SPI                                      (HWREG16(0x4000100E)) /*  */
#define UCA0ABCTL                                          (HWREG16(0x40001010)) /* eUSCI_Ax Auto Baud Rate Control Register */
#define UCA0IRCTL                                          (HWREG16(0x40001012)) /* eUSCI_Ax IrDA Control Word Register */
#define UCA0IE                                             (HWREG16(0x4000101A)) /* eUSCI_Ax Interrupt Enable Register */
#define UCA0IE_SPI                                         (HWREG16(0x4000101A)) /*  */
#define UCA0IFG                                            (HWREG16(0x4000101C)) /* eUSCI_Ax Interrupt Flag Register */
#define UCA0IFG_SPI                                        (HWREG16(0x4000101C)) /*  */
#define UCA0IV                                             (HWREG16(0x4000101E)) /* eUSCI_Ax Interrupt Vector Register */
#define UCA0IV_SPI                                         (HWREG16(0x4000101E)) /*  */

/* Register offsets from EUSCI_A0_BASE address */
#define OFS_UCA0CTLW0                                      (0x0000)              /* eUSCI_Ax Control Word Register 0 */
#define OFS_UCA0CTLW0_SPI                                  (0x0000)              /*  */
#define OFS_UCA0CTLW1                                      (0x0002)              /* eUSCI_Ax Control Word Register 1 */
#define OFS_UCA0BRW                                        (0x0006)              /* eUSCI_Ax Baud Rate Control Word Register */
#define OFS_UCA0BRW_SPI                                    (0x0006)              /*  */
#define OFS_UCA0MCTLW                                      (0x0008)              /* eUSCI_Ax Modulation Control Word Register */
#define OFS_UCA0STATW                                      (0x000a)              /* eUSCI_Ax Status Register */
#define OFS_UCA0STATW_SPI                                  (0x000a)              /*  */
#define OFS_UCA0RXBUF                                      (0x000c)              /* eUSCI_Ax Receive Buffer Register */
#define OFS_UCA0RXBUF_SPI                                  (0x000c)              /*  */
#define OFS_UCA0TXBUF                                      (0x000e)              /* eUSCI_Ax Transmit Buffer Register */
#define OFS_UCA0TXBUF_SPI                                  (0x000e)              /*  */
#define OFS_UCA0ABCTL                                      (0x0010)              /* eUSCI_Ax Auto Baud Rate Control Register */
#define OFS_UCA0IRCTL                                      (0x0012)              /* eUSCI_Ax IrDA Control Word Register */
#define OFS_UCA0IE                                         (0x001a)              /* eUSCI_Ax Interrupt Enable Register */
#define OFS_UCA0IE_SPI                                     (0x001a)              /*  */
#define OFS_UCA0IFG                                        (0x001c)              /* eUSCI_Ax Interrupt Flag Register */
#define OFS_UCA0IFG_SPI                                    (0x001c)              /*  */
#define OFS_UCA0IV                                         (0x001e)              /* eUSCI_Ax Interrupt Vector Register */
#define OFS_UCA0IV_SPI                                     (0x001e)              /*  */

#define UCA0CTL0                                           (HWREG8_L(UCA0CTLW0)) /* eUSCI_Ax Control 0 */
#define UCA0CTL1                                           (HWREG8_H(UCA0CTLW0)) /* eUSCI_Ax Control 1 */
#define UCA0BR0                                            (HWREG8_L(UCA0BRW))   /* eUSCI_Ax Baud Rate Control 0 */
#define UCA0BR1                                            (HWREG8_H(UCA0BRW))   /* eUSCI_Ax Baud Rate Control 1 */
#define UCA0IRTCTL                                         (HWREG8_L(UCA0IRCTL)) /* eUSCI_Ax IrDA Transmit Control */
#define UCA0IRRCTL                                         (HWREG8_H(UCA0IRCTL)) /* eUSCI_Ax IrDA Receive Control */

//*****************************************************************************
// EUSCI_A1 Registers
//*****************************************************************************
#define UCA1CTLW0                                          (HWREG16(0x40001400)) /* eUSCI_Ax Control Word Register 0 */
#define UCA1CTLW0_SPI                                      (HWREG16(0x40001400)) /*  */
#define UCA1CTLW1                                          (HWREG16(0x40001402)) /* eUSCI_Ax Control Word Register 1 */
#define UCA1BRW                                            (HWREG16(0x40001406)) /* eUSCI_Ax Baud Rate Control Word Register */
#define UCA1BRW_SPI                                        (HWREG16(0x40001406)) /*  */
#define UCA1MCTLW                                          (HWREG16(0x40001408)) /* eUSCI_Ax Modulation Control Word Register */
#define UCA1STATW                                          (HWREG16(0x4000140A)) /* eUSCI_Ax Status Register */
#define UCA1STATW_SPI                                      (HWREG16(0x4000140A)) /*  */
#define UCA1RXBUF                                          (HWREG16(0x4000140C)) /* eUSCI_Ax Receive Buffer Register */
#define UCA1RXBUF_SPI                                      (HWREG16(0x4000140C)) /*  */
#define UCA1TXBUF                                          (HWREG16(0x4000140E)) /* eUSCI_Ax Transmit Buffer Register */
#define UCA1TXBUF_SPI                                      (HWREG16(0x4000140E)) /*  */
#define UCA1ABCTL                                          (HWREG16(0x40001410)) /* eUSCI_Ax Auto Baud Rate Control Register */
#define UCA1IRCTL                                          (HWREG16(0x40001412)) /* eUSCI_Ax IrDA Control Word Register */
#define UCA1IE                                             (HWREG16(0x4000141A)) /* eUSCI_Ax Interrupt Enable Register */
#define UCA1IE_SPI                                         (HWREG16(0x4000141A)) /*  */
#define UCA1IFG                                            (HWREG16(0x4000141C)) /* eUSCI_Ax Interrupt Flag Register */
#define UCA1IFG_SPI                                        (HWREG16(0x4000141C)) /*  */
#define UCA1IV                                             (HWREG16(0x4000141E)) /* eUSCI_Ax Interrupt Vector Register */
#define UCA1IV_SPI                                         (HWREG16(0x4000141E)) /*  */

/* Register offsets from EUSCI_A1_BASE address */
#define OFS_UCA1CTLW0                                      (0x0000)              /* eUSCI_Ax Control Word Register 0 */
#define OFS_UCA1CTLW0_SPI                                  (0x0000)              /*  */
#define OFS_UCA1CTLW1                                      (0x0002)              /* eUSCI_Ax Control Word Register 1 */
#define OFS_UCA1BRW                                        (0x0006)              /* eUSCI_Ax Baud Rate Control Word Register */
#define OFS_UCA1BRW_SPI                                    (0x0006)              /*  */
#define OFS_UCA1MCTLW                                      (0x0008)              /* eUSCI_Ax Modulation Control Word Register */
#define OFS_UCA1STATW                                      (0x000a)              /* eUSCI_Ax Status Register */
#define OFS_UCA1STATW_SPI                                  (0x000a)              /*  */
#define OFS_UCA1RXBUF                                      (0x000c)              /* eUSCI_Ax Receive Buffer Register */
#define OFS_UCA1RXBUF_SPI                                  (0x000c)              /*  */
#define OFS_UCA1TXBUF                                      (0x000e)              /* eUSCI_Ax Transmit Buffer Register */
#define OFS_UCA1TXBUF_SPI                                  (0x000e)              /*  */
#define OFS_UCA1ABCTL                                      (0x0010)              /* eUSCI_Ax Auto Baud Rate Control Register */
#define OFS_UCA1IRCTL                                      (0x0012)              /* eUSCI_Ax IrDA Control Word Register */
#define OFS_UCA1IE                                         (0x001a)              /* eUSCI_Ax Interrupt Enable Register */
#define OFS_UCA1IE_SPI                                     (0x001a)              /*  */
#define OFS_UCA1IFG                                        (0x001c)              /* eUSCI_Ax Interrupt Flag Register */
#define OFS_UCA1IFG_SPI                                    (0x001c)              /*  */
#define OFS_UCA1IV                                         (0x001e)              /* eUSCI_Ax Interrupt Vector Register */
#define OFS_UCA1IV_SPI                                     (0x001e)              /*  */

#define UCA1CTL0                                           (HWREG8_L(UCA1CTLW0)) /* eUSCI_Ax Control 0 */
#define UCA1CTL1                                           (HWREG8_H(UCA1CTLW0)) /* eUSCI_Ax Control 1 */
#define UCA1BR0                                            (HWREG8_L(UCA1BRW))   /* eUSCI_Ax Baud Rate Control 0 */
#define UCA1BR1                                            (HWREG8_H(UCA1BRW))   /* eUSCI_Ax Baud Rate Control 1 */
#define UCA1IRTCTL                                         (HWREG8_L(UCA1IRCTL)) /* eUSCI_Ax IrDA Transmit Control */
#define UCA1IRRCTL                                         (HWREG8_H(UCA1IRCTL)) /* eUSCI_Ax IrDA Receive Control */

//*****************************************************************************
// EUSCI_A2 Registers
//*****************************************************************************
#define UCA2CTLW0                                          (HWREG16(0x40001800)) /* eUSCI_Ax Control Word Register 0 */
#define UCA2CTLW0_SPI                                      (HWREG16(0x40001800)) /*  */
#define UCA2CTLW1                                          (HWREG16(0x40001802)) /* eUSCI_Ax Control Word Register 1 */
#define UCA2BRW                                            (HWREG16(0x40001806)) /* eUSCI_Ax Baud Rate Control Word Register */
#define UCA2BRW_SPI                                        (HWREG16(0x40001806)) /*  */
#define UCA2MCTLW                                          (HWREG16(0x40001808)) /* eUSCI_Ax Modulation Control Word Register */
#define UCA2STATW                                          (HWREG16(0x4000180A)) /* eUSCI_Ax Status Register */
#define UCA2STATW_SPI                                      (HWREG16(0x4000180A)) /*  */
#define UCA2RXBUF                                          (HWREG16(0x4000180C)) /* eUSCI_Ax Receive Buffer Register */
#define UCA2RXBUF_SPI                                      (HWREG16(0x4000180C)) /*  */
#define UCA2TXBUF                                          (HWREG16(0x4000180E)) /* eUSCI_Ax Transmit Buffer Register */
#define UCA2TXBUF_SPI                                      (HWREG16(0x4000180E)) /*  */
#define UCA2ABCTL                                          (HWREG16(0x40001810)) /* eUSCI_Ax Auto Baud Rate Control Register */
#define UCA2IRCTL                                          (HWREG16(0x40001812)) /* eUSCI_Ax IrDA Control Word Register */
#define UCA2IE                                             (HWREG16(0x4000181A)) /* eUSCI_Ax Interrupt Enable Register */
#define UCA2IE_SPI                                         (HWREG16(0x4000181A)) /*  */
#define UCA2IFG                                            (HWREG16(0x4000181C)) /* eUSCI_Ax Interrupt Flag Register */
#define UCA2IFG_SPI                                        (HWREG16(0x4000181C)) /*  */
#define UCA2IV                                             (HWREG16(0x4000181E)) /* eUSCI_Ax Interrupt Vector Register */
#define UCA2IV_SPI                                         (HWREG16(0x4000181E)) /*  */

/* Register offsets from EUSCI_A2_BASE address */
#define OFS_UCA2CTLW0                                      (0x0000)              /* eUSCI_Ax Control Word Register 0 */
#define OFS_UCA2CTLW0_SPI                                  (0x0000)              /*  */
#define OFS_UCA2CTLW1                                      (0x0002)              /* eUSCI_Ax Control Word Register 1 */
#define OFS_UCA2BRW                                        (0x0006)              /* eUSCI_Ax Baud Rate Control Word Register */
#define OFS_UCA2BRW_SPI                                    (0x0006)              /*  */
#define OFS_UCA2MCTLW                                      (0x0008)              /* eUSCI_Ax Modulation Control Word Register */
#define OFS_UCA2STATW                                      (0x000a)              /* eUSCI_Ax Status Register */
#define OFS_UCA2STATW_SPI                                  (0x000a)              /*  */
#define OFS_UCA2RXBUF                                      (0x000c)              /* eUSCI_Ax Receive Buffer Register */
#define OFS_UCA2RXBUF_SPI                                  (0x000c)              /*  */
#define OFS_UCA2TXBUF                                      (0x000e)              /* eUSCI_Ax Transmit Buffer Register */
#define OFS_UCA2TXBUF_SPI                                  (0x000e)              /*  */
#define OFS_UCA2ABCTL                                      (0x0010)              /* eUSCI_Ax Auto Baud Rate Control Register */
#define OFS_UCA2IRCTL                                      (0x0012)              /* eUSCI_Ax IrDA Control Word Register */
#define OFS_UCA2IE                                         (0x001a)              /* eUSCI_Ax Interrupt Enable Register */
#define OFS_UCA2IE_SPI                                     (0x001a)              /*  */
#define OFS_UCA2IFG                                        (0x001c)              /* eUSCI_Ax Interrupt Flag Register */
#define OFS_UCA2IFG_SPI                                    (0x001c)              /*  */
#define OFS_UCA2IV                                         (0x001e)              /* eUSCI_Ax Interrupt Vector Register */
#define OFS_UCA2IV_SPI                                     (0x001e)              /*  */

#define UCA2CTL0                                           (HWREG8_L(UCA2CTLW0)) /* eUSCI_Ax Control 0 */
#define UCA2CTL1                                           (HWREG8_H(UCA2CTLW0)) /* eUSCI_Ax Control 1 */
#define UCA2BR0                                            (HWREG8_L(UCA2BRW))   /* eUSCI_Ax Baud Rate Control 0 */
#define UCA2BR1                                            (HWREG8_H(UCA2BRW))   /* eUSCI_Ax Baud Rate Control 1 */
#define UCA2IRTCTL                                         (HWREG8_L(UCA2IRCTL)) /* eUSCI_Ax IrDA Transmit Control */
#define UCA2IRRCTL                                         (HWREG8_H(UCA2IRCTL)) /* eUSCI_Ax IrDA Receive Control */

//*****************************************************************************
// EUSCI_A3 Registers
//*****************************************************************************
#define UCA3CTLW0                                          (HWREG16(0x40001C00)) /* eUSCI_Ax Control Word Register 0 */
#define UCA3CTLW0_SPI                                      (HWREG16(0x40001C00)) /*  */
#define UCA3CTLW1                                          (HWREG16(0x40001C02)) /* eUSCI_Ax Control Word Register 1 */
#define UCA3BRW                                            (HWREG16(0x40001C06)) /* eUSCI_Ax Baud Rate Control Word Register */
#define UCA3BRW_SPI                                        (HWREG16(0x40001C06)) /*  */
#define UCA3MCTLW                                          (HWREG16(0x40001C08)) /* eUSCI_Ax Modulation Control Word Register */
#define UCA3STATW                                          (HWREG16(0x40001C0A)) /* eUSCI_Ax Status Register */
#define UCA3STATW_SPI                                      (HWREG16(0x40001C0A)) /*  */
#define UCA3RXBUF                                          (HWREG16(0x40001C0C)) /* eUSCI_Ax Receive Buffer Register */
#define UCA3RXBUF_SPI                                      (HWREG16(0x40001C0C)) /*  */
#define UCA3TXBUF                                          (HWREG16(0x40001C0E)) /* eUSCI_Ax Transmit Buffer Register */
#define UCA3TXBUF_SPI                                      (HWREG16(0x40001C0E)) /*  */
#define UCA3ABCTL                                          (HWREG16(0x40001C10)) /* eUSCI_Ax Auto Baud Rate Control Register */
#define UCA3IRCTL                                          (HWREG16(0x40001C12)) /* eUSCI_Ax IrDA Control Word Register */
#define UCA3IE                                             (HWREG16(0x40001C1A)) /* eUSCI_Ax Interrupt Enable Register */
#define UCA3IE_SPI                                         (HWREG16(0x40001C1A)) /*  */
#define UCA3IFG                                            (HWREG16(0x40001C1C)) /* eUSCI_Ax Interrupt Flag Register */
#define UCA3IFG_SPI                                        (HWREG16(0x40001C1C)) /*  */
#define UCA3IV                                             (HWREG16(0x40001C1E)) /* eUSCI_Ax Interrupt Vector Register */
#define UCA3IV_SPI                                         (HWREG16(0x40001C1E)) /*  */

/* Register offsets from EUSCI_A3_BASE address */
#define OFS_UCA3CTLW0                                      (0x0000)              /* eUSCI_Ax Control Word Register 0 */
#define OFS_UCA3CTLW0_SPI                                  (0x0000)              /*  */
#define OFS_UCA3CTLW1                                      (0x0002)              /* eUSCI_Ax Control Word Register 1 */
#define OFS_UCA3BRW                                        (0x0006)              /* eUSCI_Ax Baud Rate Control Word Register */
#define OFS_UCA3BRW_SPI                                    (0x0006)              /*  */
#define OFS_UCA3MCTLW                                      (0x0008)              /* eUSCI_Ax Modulation Control Word Register */
#define OFS_UCA3STATW                                      (0x000a)              /* eUSCI_Ax Status Register */
#define OFS_UCA3STATW_SPI                                  (0x000a)              /*  */
#define OFS_UCA3RXBUF                                      (0x000c)              /* eUSCI_Ax Receive Buffer Register */
#define OFS_UCA3RXBUF_SPI                                  (0x000c)              /*  */
#define OFS_UCA3TXBUF                                      (0x000e)              /* eUSCI_Ax Transmit Buffer Register */
#define OFS_UCA3TXBUF_SPI                                  (0x000e)              /*  */
#define OFS_UCA3ABCTL                                      (0x0010)              /* eUSCI_Ax Auto Baud Rate Control Register */
#define OFS_UCA3IRCTL                                      (0x0012)              /* eUSCI_Ax IrDA Control Word Register */
#define OFS_UCA3IE                                         (0x001a)              /* eUSCI_Ax Interrupt Enable Register */
#define OFS_UCA3IE_SPI                                     (0x001a)              /*  */
#define OFS_UCA3IFG                                        (0x001c)              /* eUSCI_Ax Interrupt Flag Register */
#define OFS_UCA3IFG_SPI                                    (0x001c)              /*  */
#define OFS_UCA3IV                                         (0x001e)              /* eUSCI_Ax Interrupt Vector Register */
#define OFS_UCA3IV_SPI                                     (0x001e)              /*  */

#define UCA3CTL0                                           (HWREG8_L(UCA3CTLW0)) /* eUSCI_Ax Control 0 */
#define UCA3CTL1                                           (HWREG8_H(UCA3CTLW0)) /* eUSCI_Ax Control 1 */
#define UCA3BR0                                            (HWREG8_L(UCA3BRW))   /* eUSCI_Ax Baud Rate Control 0 */
#define UCA3BR1                                            (HWREG8_H(UCA3BRW))   /* eUSCI_Ax Baud Rate Control 1 */
#define UCA3IRTCTL                                         (HWREG8_L(UCA3IRCTL)) /* eUSCI_Ax IrDA Transmit Control */
#define UCA3IRRCTL                                         (HWREG8_H(UCA3IRCTL)) /* eUSCI_Ax IrDA Receive Control */

//*****************************************************************************
// EUSCI_B0 Registers
//*****************************************************************************
#define UCB0CTLW0                                          (HWREG16(0x40002000)) /* eUSCI_Bx Control Word Register 0 */
#define UCB0CTLW0_SPI                                      (HWREG16(0x40002000)) /*  */
#define UCB0CTLW1                                          (HWREG16(0x40002002)) /* eUSCI_Bx Control Word Register 1 */
#define UCB0BRW                                            (HWREG16(0x40002006)) /* eUSCI_Bx Baud Rate Control Word Register */
#define UCB0BRW_SPI                                        (HWREG16(0x40002006)) /*  */
#define UCB0STATW                                          (HWREG16(0x40002008)) /* eUSCI_Bx Status Register */
#define UCB0STATW_SPI                                      (HWREG16(0x40002008)) /*  */
#define UCB0TBCNT                                          (HWREG16(0x4000200A)) /* eUSCI_Bx Byte Counter Threshold Register */
#define UCB0RXBUF                                          (HWREG16(0x4000200C)) /* eUSCI_Bx Receive Buffer Register */
#define UCB0RXBUF_SPI                                      (HWREG16(0x4000200C)) /*  */
#define UCB0TXBUF                                          (HWREG16(0x4000200E)) /* eUSCI_Bx Transmit Buffer Register */
#define UCB0TXBUF_SPI                                      (HWREG16(0x4000200E)) /*  */
#define UCB0I2COA0                                         (HWREG16(0x40002014)) /* eUSCI_Bx I2C Own Address 0 Register */
#define UCB0I2COA1                                         (HWREG16(0x40002016)) /* eUSCI_Bx I2C Own Address 1 Register */
#define UCB0I2COA2                                         (HWREG16(0x40002018)) /* eUSCI_Bx I2C Own Address 2 Register */
#define UCB0I2COA3                                         (HWREG16(0x4000201A)) /* eUSCI_Bx I2C Own Address 3 Register */
#define UCB0ADDRX                                          (HWREG16(0x4000201C)) /* eUSCI_Bx I2C Received Address Register */
#define UCB0ADDMASK                                        (HWREG16(0x4000201E)) /* eUSCI_Bx I2C Address Mask Register */
#define UCB0I2CSA                                          (HWREG16(0x40002020)) /* eUSCI_Bx I2C Slave Address Register */
#define UCB0IE                                             (HWREG16(0x4000202A)) /* eUSCI_Bx Interrupt Enable Register */
#define UCB0IE_SPI                                         (HWREG16(0x4000202A)) /*  */
#define UCB0IFG                                            (HWREG16(0x4000202C)) /* eUSCI_Bx Interrupt Flag Register */
#define UCB0IFG_SPI                                        (HWREG16(0x4000202C)) /*  */
#define UCB0IV                                             (HWREG16(0x4000202E)) /* eUSCI_Bx Interrupt Vector Register */
#define UCB0IV_SPI                                         (HWREG16(0x4000202E)) /*  */

/* Register offsets from EUSCI_B0_BASE address */
#define OFS_UCB0CTLW0                                      (0x0000)              /* eUSCI_Bx Control Word Register 0 */
#define OFS_UCB0CTLW0_SPI                                  (0x0000)              /*  */
#define OFS_UCB0CTLW1                                      (0x0002)              /* eUSCI_Bx Control Word Register 1 */
#define OFS_UCB0BRW                                        (0x0006)              /* eUSCI_Bx Baud Rate Control Word Register */
#define OFS_UCB0BRW_SPI                                    (0x0006)              /*  */
#define OFS_UCB0STATW                                      (0x0008)              /* eUSCI_Bx Status Register */
#define OFS_UCB0STATW_SPI                                  (0x0008)              /*  */
#define OFS_UCB0TBCNT                                      (0x000a)              /* eUSCI_Bx Byte Counter Threshold Register */
#define OFS_UCB0RXBUF                                      (0x000c)              /* eUSCI_Bx Receive Buffer Register */
#define OFS_UCB0RXBUF_SPI                                  (0x000c)              /*  */
#define OFS_UCB0TXBUF                                      (0x000e)              /* eUSCI_Bx Transmit Buffer Register */
#define OFS_UCB0TXBUF_SPI                                  (0x000e)              /*  */
#define OFS_UCB0I2COA0                                     (0x0014)              /* eUSCI_Bx I2C Own Address 0 Register */
#define OFS_UCB0I2COA1                                     (0x0016)              /* eUSCI_Bx I2C Own Address 1 Register */
#define OFS_UCB0I2COA2                                     (0x0018)              /* eUSCI_Bx I2C Own Address 2 Register */
#define OFS_UCB0I2COA3                                     (0x001a)              /* eUSCI_Bx I2C Own Address 3 Register */
#define OFS_UCB0ADDRX                                      (0x001c)              /* eUSCI_Bx I2C Received Address Register */
#define OFS_UCB0ADDMASK                                    (0x001e)              /* eUSCI_Bx I2C Address Mask Register */
#define OFS_UCB0I2CSA                                      (0x0020)              /* eUSCI_Bx I2C Slave Address Register */
#define OFS_UCB0IE                                         (0x002a)              /* eUSCI_Bx Interrupt Enable Register */
#define OFS_UCB0IE_SPI                                     (0x002a)              /*  */
#define OFS_UCB0IFG                                        (0x002c)              /* eUSCI_Bx Interrupt Flag Register */
#define OFS_UCB0IFG_SPI                                    (0x002c)              /*  */
#define OFS_UCB0IV                                         (0x002e)              /* eUSCI_Bx Interrupt Vector Register */
#define OFS_UCB0IV_SPI                                     (0x002e)              /*  */

#define UCB0CTL0                                           (HWREG8_L(UCB0CTLW0)) /* eUSCI_Bx Control 1 */
#define UCB0CTL1                                           (HWREG8_H(UCB0CTLW0)) /* eUSCI_Bx Control 0 */
#define UCB0BR0                                            (HWREG8_L(UCB0BRW))   /* eUSCI_Bx Bit Rate Control 0 */
#define UCB0BR1                                            (HWREG8_H(UCB0BRW))   /* eUSCI_Bx Bit Rate Control 1 */
#define UCB0STAT                                           (HWREG8_L(UCB0STATW)) /* eUSCI_Bx Status */
#define UCB0BCNT                                           (HWREG8_H(UCB0STATW)) /* eUSCI_Bx Byte Counter Register */

//*****************************************************************************
// EUSCI_B1 Registers
//*****************************************************************************
#define UCB1CTLW0                                          (HWREG16(0x40002400)) /* eUSCI_Bx Control Word Register 0 */
#define UCB1CTLW0_SPI                                      (HWREG16(0x40002400)) /*  */
#define UCB1CTLW1                                          (HWREG16(0x40002402)) /* eUSCI_Bx Control Word Register 1 */
#define UCB1BRW                                            (HWREG16(0x40002406)) /* eUSCI_Bx Baud Rate Control Word Register */
#define UCB1BRW_SPI                                        (HWREG16(0x40002406)) /*  */
#define UCB1STATW                                          (HWREG16(0x40002408)) /* eUSCI_Bx Status Register */
#define UCB1STATW_SPI                                      (HWREG16(0x40002408)) /*  */
#define UCB1TBCNT                                          (HWREG16(0x4000240A)) /* eUSCI_Bx Byte Counter Threshold Register */
#define UCB1RXBUF                                          (HWREG16(0x4000240C)) /* eUSCI_Bx Receive Buffer Register */
#define UCB1RXBUF_SPI                                      (HWREG16(0x4000240C)) /*  */
#define UCB1TXBUF                                          (HWREG16(0x4000240E)) /* eUSCI_Bx Transmit Buffer Register */
#define UCB1TXBUF_SPI                                      (HWREG16(0x4000240E)) /*  */
#define UCB1I2COA0                                         (HWREG16(0x40002414)) /* eUSCI_Bx I2C Own Address 0 Register */
#define UCB1I2COA1                                         (HWREG16(0x40002416)) /* eUSCI_Bx I2C Own Address 1 Register */
#define UCB1I2COA2                                         (HWREG16(0x40002418)) /* eUSCI_Bx I2C Own Address 2 Register */
#define UCB1I2COA3                                         (HWREG16(0x4000241A)) /* eUSCI_Bx I2C Own Address 3 Register */
#define UCB1ADDRX                                          (HWREG16(0x4000241C)) /* eUSCI_Bx I2C Received Address Register */
#define UCB1ADDMASK                                        (HWREG16(0x4000241E)) /* eUSCI_Bx I2C Address Mask Register */
#define UCB1I2CSA                                          (HWREG16(0x40002420)) /* eUSCI_Bx I2C Slave Address Register */
#define UCB1IE                                             (HWREG16(0x4000242A)) /* eUSCI_Bx Interrupt Enable Register */
#define UCB1IE_SPI                                         (HWREG16(0x4000242A)) /*  */
#define UCB1IFG                                            (HWREG16(0x4000242C)) /* eUSCI_Bx Interrupt Flag Register */
#define UCB1IFG_SPI                                        (HWREG16(0x4000242C)) /*  */
#define UCB1IV                                             (HWREG16(0x4000242E)) /* eUSCI_Bx Interrupt Vector Register */
#define UCB1IV_SPI                                         (HWREG16(0x4000242E)) /*  */

/* Register offsets from EUSCI_B1_BASE address */
#define OFS_UCB1CTLW0                                      (0x0000)              /* eUSCI_Bx Control Word Register 0 */
#define OFS_UCB1CTLW0_SPI                                  (0x0000)              /*  */
#define OFS_UCB1CTLW1                                      (0x0002)              /* eUSCI_Bx Control Word Register 1 */
#define OFS_UCB1BRW                                        (0x0006)              /* eUSCI_Bx Baud Rate Control Word Register */
#define OFS_UCB1BRW_SPI                                    (0x0006)              /*  */
#define OFS_UCB1STATW                                      (0x0008)              /* eUSCI_Bx Status Register */
#define OFS_UCB1STATW_SPI                                  (0x0008)              /*  */
#define OFS_UCB1TBCNT                                      (0x000a)              /* eUSCI_Bx Byte Counter Threshold Register */
#define OFS_UCB1RXBUF                                      (0x000c)              /* eUSCI_Bx Receive Buffer Register */
#define OFS_UCB1RXBUF_SPI                                  (0x000c)              /*  */
#define OFS_UCB1TXBUF                                      (0x000e)              /* eUSCI_Bx Transmit Buffer Register */
#define OFS_UCB1TXBUF_SPI                                  (0x000e)              /*  */
#define OFS_UCB1I2COA0                                     (0x0014)              /* eUSCI_Bx I2C Own Address 0 Register */
#define OFS_UCB1I2COA1                                     (0x0016)              /* eUSCI_Bx I2C Own Address 1 Register */
#define OFS_UCB1I2COA2                                     (0x0018)              /* eUSCI_Bx I2C Own Address 2 Register */
#define OFS_UCB1I2COA3                                     (0x001a)              /* eUSCI_Bx I2C Own Address 3 Register */
#define OFS_UCB1ADDRX                                      (0x001c)              /* eUSCI_Bx I2C Received Address Register */
#define OFS_UCB1ADDMASK                                    (0x001e)              /* eUSCI_Bx I2C Address Mask Register */
#define OFS_UCB1I2CSA                                      (0x0020)              /* eUSCI_Bx I2C Slave Address Register */
#define OFS_UCB1IE                                         (0x002a)              /* eUSCI_Bx Interrupt Enable Register */
#define OFS_UCB1IE_SPI                                     (0x002a)              /*  */
#define OFS_UCB1IFG                                        (0x002c)              /* eUSCI_Bx Interrupt Flag Register */
#define OFS_UCB1IFG_SPI                                    (0x002c)              /*  */
#define OFS_UCB1IV                                         (0x002e)              /* eUSCI_Bx Interrupt Vector Register */
#define OFS_UCB1IV_SPI                                     (0x002e)              /*  */

#define UCB1CTL0                                           (HWREG8_L(UCB1CTLW0)) /* eUSCI_Bx Control 1 */
#define UCB1CTL1                                           (HWREG8_H(UCB1CTLW0)) /* eUSCI_Bx Control 0 */
#define UCB1BR0                                            (HWREG8_L(UCB1BRW))   /* eUSCI_Bx Bit Rate Control 0 */
#define UCB1BR1                                            (HWREG8_H(UCB1BRW))   /* eUSCI_Bx Bit Rate Control 1 */
#define UCB1STAT                                           (HWREG8_L(UCB1STATW)) /* eUSCI_Bx Status */
#define UCB1BCNT                                           (HWREG8_H(UCB1STATW)) /* eUSCI_Bx Byte Counter Register */

//*****************************************************************************
// EUSCI_B2 Registers
//*****************************************************************************
#define UCB2CTLW0                                          (HWREG16(0x40002800)) /* eUSCI_Bx Control Word Register 0 */
#define UCB2CTLW0_SPI                                      (HWREG16(0x40002800)) /*  */
#define UCB2CTLW1                                          (HWREG16(0x40002802)) /* eUSCI_Bx Control Word Register 1 */
#define UCB2BRW                                            (HWREG16(0x40002806)) /* eUSCI_Bx Baud Rate Control Word Register */
#define UCB2BRW_SPI                                        (HWREG16(0x40002806)) /*  */
#define UCB2STATW                                          (HWREG16(0x40002808)) /* eUSCI_Bx Status Register */
#define UCB2STATW_SPI                                      (HWREG16(0x40002808)) /*  */
#define UCB2TBCNT                                          (HWREG16(0x4000280A)) /* eUSCI_Bx Byte Counter Threshold Register */
#define UCB2RXBUF                                          (HWREG16(0x4000280C)) /* eUSCI_Bx Receive Buffer Register */
#define UCB2RXBUF_SPI                                      (HWREG16(0x4000280C)) /*  */
#define UCB2TXBUF                                          (HWREG16(0x4000280E)) /* eUSCI_Bx Transmit Buffer Register */
#define UCB2TXBUF_SPI                                      (HWREG16(0x4000280E)) /*  */
#define UCB2I2COA0                                         (HWREG16(0x40002814)) /* eUSCI_Bx I2C Own Address 0 Register */
#define UCB2I2COA1                                         (HWREG16(0x40002816)) /* eUSCI_Bx I2C Own Address 1 Register */
#define UCB2I2COA2                                         (HWREG16(0x40002818)) /* eUSCI_Bx I2C Own Address 2 Register */
#define UCB2I2COA3                                         (HWREG16(0x4000281A)) /* eUSCI_Bx I2C Own Address 3 Register */
#define UCB2ADDRX                                          (HWREG16(0x4000281C)) /* eUSCI_Bx I2C Received Address Register */
#define UCB2ADDMASK                                        (HWREG16(0x4000281E)) /* eUSCI_Bx I2C Address Mask Register */
#define UCB2I2CSA                                          (HWREG16(0x40002820)) /* eUSCI_Bx I2C Slave Address Register */
#define UCB2IE                                             (HWREG16(0x4000282A)) /* eUSCI_Bx Interrupt Enable Register */
#define UCB2IE_SPI                                         (HWREG16(0x4000282A)) /*  */
#define UCB2IFG                                            (HWREG16(0x4000282C)) /* eUSCI_Bx Interrupt Flag Register */
#define UCB2IFG_SPI                                        (HWREG16(0x4000282C)) /*  */
#define UCB2IV                                             (HWREG16(0x4000282E)) /* eUSCI_Bx Interrupt Vector Register */
#define UCB2IV_SPI                                         (HWREG16(0x4000282E)) /*  */

/* Register offsets from EUSCI_B2_BASE address */
#define OFS_UCB2CTLW0                                      (0x0000)              /* eUSCI_Bx Control Word Register 0 */
#define OFS_UCB2CTLW0_SPI                                  (0x0000)              /*  */
#define OFS_UCB2CTLW1                                      (0x0002)              /* eUSCI_Bx Control Word Register 1 */
#define OFS_UCB2BRW                                        (0x0006)              /* eUSCI_Bx Baud Rate Control Word Register */
#define OFS_UCB2BRW_SPI                                    (0x0006)              /*  */
#define OFS_UCB2STATW                                      (0x0008)              /* eUSCI_Bx Status Register */
#define OFS_UCB2STATW_SPI                                  (0x0008)              /*  */
#define OFS_UCB2TBCNT                                      (0x000a)              /* eUSCI_Bx Byte Counter Threshold Register */
#define OFS_UCB2RXBUF                                      (0x000c)              /* eUSCI_Bx Receive Buffer Register */
#define OFS_UCB2RXBUF_SPI                                  (0x000c)              /*  */
#define OFS_UCB2TXBUF                                      (0x000e)              /* eUSCI_Bx Transmit Buffer Register */
#define OFS_UCB2TXBUF_SPI                                  (0x000e)              /*  */
#define OFS_UCB2I2COA0                                     (0x0014)              /* eUSCI_Bx I2C Own Address 0 Register */
#define OFS_UCB2I2COA1                                     (0x0016)              /* eUSCI_Bx I2C Own Address 1 Register */
#define OFS_UCB2I2COA2                                     (0x0018)              /* eUSCI_Bx I2C Own Address 2 Register */
#define OFS_UCB2I2COA3                                     (0x001a)              /* eUSCI_Bx I2C Own Address 3 Register */
#define OFS_UCB2ADDRX                                      (0x001c)              /* eUSCI_Bx I2C Received Address Register */
#define OFS_UCB2ADDMASK                                    (0x001e)              /* eUSCI_Bx I2C Address Mask Register */
#define OFS_UCB2I2CSA                                      (0x0020)              /* eUSCI_Bx I2C Slave Address Register */
#define OFS_UCB2IE                                         (0x002a)              /* eUSCI_Bx Interrupt Enable Register */
#define OFS_UCB2IE_SPI                                     (0x002a)              /*  */
#define OFS_UCB2IFG                                        (0x002c)              /* eUSCI_Bx Interrupt Flag Register */
#define OFS_UCB2IFG_SPI                                    (0x002c)              /*  */
#define OFS_UCB2IV                                         (0x002e)              /* eUSCI_Bx Interrupt Vector Register */
#define OFS_UCB2IV_SPI                                     (0x002e)              /*  */

#define UCB2CTL0                                           (HWREG8_L(UCB2CTLW0)) /* eUSCI_Bx Control 1 */
#define UCB2CTL1                                           (HWREG8_H(UCB2CTLW0)) /* eUSCI_Bx Control 0 */
#define UCB2BR0                                            (HWREG8_L(UCB2BRW))   /* eUSCI_Bx Bit Rate Control 0 */
#define UCB2BR1                                            (HWREG8_H(UCB2BRW))   /* eUSCI_Bx Bit Rate Control 1 */
#define UCB2STAT                                           (HWREG8_L(UCB2STATW)) /* eUSCI_Bx Status */
#define UCB2BCNT                                           (HWREG8_H(UCB2STATW)) /* eUSCI_Bx Byte Counter Register */

//*****************************************************************************
// EUSCI_B3 Registers
//*****************************************************************************
#define UCB3CTLW0                                          (HWREG16(0x40002C00)) /* eUSCI_Bx Control Word Register 0 */
#define UCB3CTLW0_SPI                                      (HWREG16(0x40002C00)) /*  */
#define UCB3CTLW1                                          (HWREG16(0x40002C02)) /* eUSCI_Bx Control Word Register 1 */
#define UCB3BRW                                            (HWREG16(0x40002C06)) /* eUSCI_Bx Baud Rate Control Word Register */
#define UCB3BRW_SPI                                        (HWREG16(0x40002C06)) /*  */
#define UCB3STATW                                          (HWREG16(0x40002C08)) /* eUSCI_Bx Status Register */
#define UCB3STATW_SPI                                      (HWREG16(0x40002C08)) /*  */
#define UCB3TBCNT                                          (HWREG16(0x40002C0A)) /* eUSCI_Bx Byte Counter Threshold Register */
#define UCB3RXBUF                                          (HWREG16(0x40002C0C)) /* eUSCI_Bx Receive Buffer Register */
#define UCB3RXBUF_SPI                                      (HWREG16(0x40002C0C)) /*  */
#define UCB3TXBUF                                          (HWREG16(0x40002C0E)) /* eUSCI_Bx Transmit Buffer Register */
#define UCB3TXBUF_SPI                                      (HWREG16(0x40002C0E)) /*  */
#define UCB3I2COA0                                         (HWREG16(0x40002C14)) /* eUSCI_Bx I2C Own Address 0 Register */
#define UCB3I2COA1                                         (HWREG16(0x40002C16)) /* eUSCI_Bx I2C Own Address 1 Register */
#define UCB3I2COA2                                         (HWREG16(0x40002C18)) /* eUSCI_Bx I2C Own Address 2 Register */
#define UCB3I2COA3                                         (HWREG16(0x40002C1A)) /* eUSCI_Bx I2C Own Address 3 Register */
#define UCB3ADDRX                                          (HWREG16(0x40002C1C)) /* eUSCI_Bx I2C Received Address Register */
#define UCB3ADDMASK                                        (HWREG16(0x40002C1E)) /* eUSCI_Bx I2C Address Mask Register */
#define UCB3I2CSA                                          (HWREG16(0x40002C20)) /* eUSCI_Bx I2C Slave Address Register */
#define UCB3IE                                             (HWREG16(0x40002C2A)) /* eUSCI_Bx Interrupt Enable Register */
#define UCB3IE_SPI                                         (HWREG16(0x40002C2A)) /*  */
#define UCB3IFG                                            (HWREG16(0x40002C2C)) /* eUSCI_Bx Interrupt Flag Register */
#define UCB3IFG_SPI                                        (HWREG16(0x40002C2C)) /*  */
#define UCB3IV                                             (HWREG16(0x40002C2E)) /* eUSCI_Bx Interrupt Vector Register */
#define UCB3IV_SPI                                         (HWREG16(0x40002C2E)) /*  */

/* Register offsets from EUSCI_B3_BASE address */
#define OFS_UCB3CTLW0                                      (0x0000)              /* eUSCI_Bx Control Word Register 0 */
#define OFS_UCB3CTLW0_SPI                                  (0x0000)              /*  */
#define OFS_UCB3CTLW1                                      (0x0002)              /* eUSCI_Bx Control Word Register 1 */
#define OFS_UCB3BRW                                        (0x0006)              /* eUSCI_Bx Baud Rate Control Word Register */
#define OFS_UCB3BRW_SPI                                    (0x0006)              /*  */
#define OFS_UCB3STATW                                      (0x0008)              /* eUSCI_Bx Status Register */
#define OFS_UCB3STATW_SPI                                  (0x0008)              /*  */
#define OFS_UCB3TBCNT                                      (0x000a)              /* eUSCI_Bx Byte Counter Threshold Register */
#define OFS_UCB3RXBUF                                      (0x000c)              /* eUSCI_Bx Receive Buffer Register */
#define OFS_UCB3RXBUF_SPI                                  (0x000c)              /*  */
#define OFS_UCB3TXBUF                                      (0x000e)              /* eUSCI_Bx Transmit Buffer Register */
#define OFS_UCB3TXBUF_SPI                                  (0x000e)              /*  */
#define OFS_UCB3I2COA0                                     (0x0014)              /* eUSCI_Bx I2C Own Address 0 Register */
#define OFS_UCB3I2COA1                                     (0x0016)              /* eUSCI_Bx I2C Own Address 1 Register */
#define OFS_UCB3I2COA2                                     (0x0018)              /* eUSCI_Bx I2C Own Address 2 Register */
#define OFS_UCB3I2COA3                                     (0x001a)              /* eUSCI_Bx I2C Own Address 3 Register */
#define OFS_UCB3ADDRX                                      (0x001c)              /* eUSCI_Bx I2C Received Address Register */
#define OFS_UCB3ADDMASK                                    (0x001e)              /* eUSCI_Bx I2C Address Mask Register */
#define OFS_UCB3I2CSA                                      (0x0020)              /* eUSCI_Bx I2C Slave Address Register */
#define OFS_UCB3IE                                         (0x002a)              /* eUSCI_Bx Interrupt Enable Register */
#define OFS_UCB3IE_SPI                                     (0x002a)              /*  */
#define OFS_UCB3IFG                                        (0x002c)              /* eUSCI_Bx Interrupt Flag Register */
#define OFS_UCB3IFG_SPI                                    (0x002c)              /*  */
#define OFS_UCB3IV                                         (0x002e)              /* eUSCI_Bx Interrupt Vector Register */
#define OFS_UCB3IV_SPI                                     (0x002e)              /*  */

#define UCB3CTL0                                           (HWREG8_L(UCB3CTLW0)) /* eUSCI_Bx Control 1 */
#define UCB3CTL1                                           (HWREG8_H(UCB3CTLW0)) /* eUSCI_Bx Control 0 */
#define UCB3BR0                                            (HWREG8_L(UCB3BRW))   /* eUSCI_Bx Bit Rate Control 0 */
#define UCB3BR1                                            (HWREG8_H(UCB3BRW))   /* eUSCI_Bx Bit Rate Control 1 */
#define UCB3STAT                                           (HWREG8_L(UCB3STATW)) /* eUSCI_Bx Status */
#define UCB3BCNT                                           (HWREG8_H(UCB3STATW)) /* eUSCI_Bx Byte Counter Register */

//*****************************************************************************
// FLCTL Registers
//*****************************************************************************
#define FLCTL_POWER_STAT                                   (HWREG32(0x40011000)) /* Power Status Register */
#define FLCTL_BANK0_RDCTL                                  (HWREG32(0x40011010)) /* Bank0 Read Control Register */
#define FLCTL_BANK1_RDCTL                                  (HWREG32(0x40011014)) /* Bank1 Read Control Register */
#define FLCTL_RDBRST_CTLSTAT                               (HWREG32(0x40011020)) /* Read Burst/Compare Control and Status Register */
#define FLCTL_RDBRST_STARTADDR                             (HWREG32(0x40011024)) /* Read Burst/Compare Start Address Register */
#define FLCTL_RDBRST_LEN                                   (HWREG32(0x40011028)) /* Read Burst/Compare Length Register */
#define FLCTL_RDBRST_FAILADDR                              (HWREG32(0x4001103C)) /* Read Burst/Compare Fail Address Register */
#define FLCTL_RDBRST_FAILCNT                               (HWREG32(0x40011040)) /* Read Burst/Compare Fail Count Register */
#define FLCTL_PRG_CTLSTAT                                  (HWREG32(0x40011050)) /* Program Control and Status Register */
#define FLCTL_PRGBRST_CTLSTAT                              (HWREG32(0x40011054)) /* Program Burst Control and Status Register */
#define FLCTL_PRGBRST_STARTADDR                            (HWREG32(0x40011058)) /* Program Burst Start Address Register */
#define FLCTL_PRGBRST_DATA0_0                              (HWREG32(0x40011060)) /* Program Burst Data0 Register0 */
#define FLCTL_PRGBRST_DATA0_1                              (HWREG32(0x40011064)) /* Program Burst Data0 Register1 */
#define FLCTL_PRGBRST_DATA0_2                              (HWREG32(0x40011068)) /* Program Burst Data0 Register2 */
#define FLCTL_PRGBRST_DATA0_3                              (HWREG32(0x4001106C)) /* Program Burst Data0 Register3 */
#define FLCTL_PRGBRST_DATA1_0                              (HWREG32(0x40011070)) /* Program Burst Data1 Register0 */
#define FLCTL_PRGBRST_DATA1_1                              (HWREG32(0x40011074)) /* Program Burst Data1 Register1 */
#define FLCTL_PRGBRST_DATA1_2                              (HWREG32(0x40011078)) /* Program Burst Data1 Register2 */
#define FLCTL_PRGBRST_DATA1_3                              (HWREG32(0x4001107C)) /* Program Burst Data1 Register3 */
#define FLCTL_PRGBRST_DATA2_0                              (HWREG32(0x40011080)) /* Program Burst Data2 Register0 */
#define FLCTL_PRGBRST_DATA2_1                              (HWREG32(0x40011084)) /* Program Burst Data2 Register1 */
#define FLCTL_PRGBRST_DATA2_2                              (HWREG32(0x40011088)) /* Program Burst Data2 Register2 */
#define FLCTL_PRGBRST_DATA2_3                              (HWREG32(0x4001108C)) /* Program Burst Data2 Register3 */
#define FLCTL_PRGBRST_DATA3_0                              (HWREG32(0x40011090)) /* Program Burst Data3 Register0 */
#define FLCTL_PRGBRST_DATA3_1                              (HWREG32(0x40011094)) /* Program Burst Data3 Register1 */
#define FLCTL_PRGBRST_DATA3_2                              (HWREG32(0x40011098)) /* Program Burst Data3 Register2 */
#define FLCTL_PRGBRST_DATA3_3                              (HWREG32(0x4001109C)) /* Program Burst Data3 Register3 */
#define FLCTL_ERASE_CTLSTAT                                (HWREG32(0x400110A0)) /* Erase Control and Status Register */
#define FLCTL_ERASE_SECTADDR                               (HWREG32(0x400110A4)) /* Erase Sector Address Register */
#define FLCTL_BANK0_INFO_WEPROT                            (HWREG32(0x400110B0)) /* Information Memory Bank0 Write/Erase Protection Register */
#define FLCTL_BANK0_MAIN_WEPROT                            (HWREG32(0x400110B4)) /* Main Memory Bank0 Write/Erase Protection Register */
#define FLCTL_BANK1_INFO_WEPROT                            (HWREG32(0x400110C0)) /* Information Memory Bank1 Write/Erase Protection Register */
#define FLCTL_BANK1_MAIN_WEPROT                            (HWREG32(0x400110C4)) /* Main Memory Bank1 Write/Erase Protection Register */
#define FLCTL_BMRK_CTLSTAT                                 (HWREG32(0x400110D0)) /* Benchmark Control and Status Register */
#define FLCTL_BMRK_IFETCH                                  (HWREG32(0x400110D4)) /* Benchmark Instruction Fetch Count Register */
#define FLCTL_BMRK_DREAD                                   (HWREG32(0x400110D8)) /* Benchmark Data Read Count Register */
#define FLCTL_BMRK_CMP                                     (HWREG32(0x400110DC)) /* Benchmark Count Compare Register */
#define FLCTL_IFG                                          (HWREG32(0x400110F0)) /* Interrupt Flag Register */
#define FLCTL_IE                                           (HWREG32(0x400110F4)) /* Interrupt Enable Register */
#define FLCTL_CLRIFG                                       (HWREG32(0x400110F8)) /* Clear Interrupt Flag Register */
#define FLCTL_SETIFG                                       (HWREG32(0x400110FC)) /* Set Interrupt Flag Register */
#define FLCTL_READ_TIMCTL                                  (HWREG32(0x40011100)) /* Read Timing Control Register */
#define FLCTL_READMARGIN_TIMCTL                            (HWREG32(0x40011104)) /* Read Margin Timing Control Register */
#define FLCTL_PRGVER_TIMCTL                                (HWREG32(0x40011108)) /* Program Verify Timing Control Register */
#define FLCTL_ERSVER_TIMCTL                                (HWREG32(0x4001110C)) /* Erase Verify Timing Control Register */
#define FLCTL_LKGVER_TIMCTL                                (HWREG32(0x40011110)) /* Leakage Verify Timing Control Register */
#define FLCTL_PROGRAM_TIMCTL                               (HWREG32(0x40011114)) /* Program Timing Control Register */
#define FLCTL_ERASE_TIMCTL                                 (HWREG32(0x40011118)) /* Erase Timing Control Register */
#define FLCTL_MASSERASE_TIMCTL                             (HWREG32(0x4001111C)) /* Mass Erase Timing Control Register */
#define FLCTL_BURSTPRG_TIMCTL                              (HWREG32(0x40011120)) /* Burst Program Timing Control Register */

/* Register offsets from FLCTL_BASE address */
#define OFS_FLCTL_POWER_STAT                               (0x00000000)          /* Power Status Register */
#define OFS_FLCTL_BANK0_RDCTL                              (0x00000010)          /* Bank0 Read Control Register */
#define OFS_FLCTL_BANK1_RDCTL                              (0x00000014)          /* Bank1 Read Control Register */
#define OFS_FLCTL_RDBRST_CTLSTAT                           (0x00000020)          /* Read Burst/Compare Control and Status Register */
#define OFS_FLCTL_RDBRST_STARTADDR                         (0x00000024)          /* Read Burst/Compare Start Address Register */
#define OFS_FLCTL_RDBRST_LEN                               (0x00000028)          /* Read Burst/Compare Length Register */
#define OFS_FLCTL_RDBRST_FAILADDR                          (0x0000003C)          /* Read Burst/Compare Fail Address Register */
#define OFS_FLCTL_RDBRST_FAILCNT                           (0x00000040)          /* Read Burst/Compare Fail Count Register */
#define OFS_FLCTL_PRG_CTLSTAT                              (0x00000050)          /* Program Control and Status Register */
#define OFS_FLCTL_PRGBRST_CTLSTAT                          (0x00000054)          /* Program Burst Control and Status Register */
#define OFS_FLCTL_PRGBRST_STARTADDR                        (0x00000058)          /* Program Burst Start Address Register */
#define OFS_FLCTL_PRGBRST_DATA0_0                          (0x00000060)          /* Program Burst Data0 Register0 */
#define OFS_FLCTL_PRGBRST_DATA0_1                          (0x00000064)          /* Program Burst Data0 Register1 */
#define OFS_FLCTL_PRGBRST_DATA0_2                          (0x00000068)          /* Program Burst Data0 Register2 */
#define OFS_FLCTL_PRGBRST_DATA0_3                          (0x0000006C)          /* Program Burst Data0 Register3 */
#define OFS_FLCTL_PRGBRST_DATA1_0                          (0x00000070)          /* Program Burst Data1 Register0 */
#define OFS_FLCTL_PRGBRST_DATA1_1                          (0x00000074)          /* Program Burst Data1 Register1 */
#define OFS_FLCTL_PRGBRST_DATA1_2                          (0x00000078)          /* Program Burst Data1 Register2 */
#define OFS_FLCTL_PRGBRST_DATA1_3                          (0x0000007C)          /* Program Burst Data1 Register3 */
#define OFS_FLCTL_PRGBRST_DATA2_0                          (0x00000080)          /* Program Burst Data2 Register0 */
#define OFS_FLCTL_PRGBRST_DATA2_1                          (0x00000084)          /* Program Burst Data2 Register1 */
#define OFS_FLCTL_PRGBRST_DATA2_2                          (0x00000088)          /* Program Burst Data2 Register2 */
#define OFS_FLCTL_PRGBRST_DATA2_3                          (0x0000008C)          /* Program Burst Data2 Register3 */
#define OFS_FLCTL_PRGBRST_DATA3_0                          (0x00000090)          /* Program Burst Data3 Register0 */
#define OFS_FLCTL_PRGBRST_DATA3_1                          (0x00000094)          /* Program Burst Data3 Register1 */
#define OFS_FLCTL_PRGBRST_DATA3_2                          (0x00000098)          /* Program Burst Data3 Register2 */
#define OFS_FLCTL_PRGBRST_DATA3_3                          (0x0000009C)          /* Program Burst Data3 Register3 */
#define OFS_FLCTL_ERASE_CTLSTAT                            (0x000000A0)          /* Erase Control and Status Register */
#define OFS_FLCTL_ERASE_SECTADDR                           (0x000000A4)          /* Erase Sector Address Register */
#define OFS_FLCTL_BANK0_INFO_WEPROT                        (0x000000B0)          /* Information Memory Bank0 Write/Erase Protection Register */
#define OFS_FLCTL_BANK0_MAIN_WEPROT                        (0x000000B4)          /* Main Memory Bank0 Write/Erase Protection Register */
#define OFS_FLCTL_BANK1_INFO_WEPROT                        (0x000000C0)          /* Information Memory Bank1 Write/Erase Protection Register */
#define OFS_FLCTL_BANK1_MAIN_WEPROT                        (0x000000C4)          /* Main Memory Bank1 Write/Erase Protection Register */
#define OFS_FLCTL_BMRK_CTLSTAT                             (0x000000D0)          /* Benchmark Control and Status Register */
#define OFS_FLCTL_BMRK_IFETCH                              (0x000000D4)          /* Benchmark Instruction Fetch Count Register */
#define OFS_FLCTL_BMRK_DREAD                               (0x000000D8)          /* Benchmark Data Read Count Register */
#define OFS_FLCTL_BMRK_CMP                                 (0x000000DC)          /* Benchmark Count Compare Register */
#define OFS_FLCTL_IFG                                      (0x000000F0)          /* Interrupt Flag Register */
#define OFS_FLCTL_IE                                       (0x000000F4)          /* Interrupt Enable Register */
#define OFS_FLCTL_CLRIFG                                   (0x000000F8)          /* Clear Interrupt Flag Register */
#define OFS_FLCTL_SETIFG                                   (0x000000FC)          /* Set Interrupt Flag Register */
#define OFS_FLCTL_READ_TIMCTL                              (0x00000100)          /* Read Timing Control Register */
#define OFS_FLCTL_READMARGIN_TIMCTL                        (0x00000104)          /* Read Margin Timing Control Register */
#define OFS_FLCTL_PRGVER_TIMCTL                            (0x00000108)          /* Program Verify Timing Control Register */
#define OFS_FLCTL_ERSVER_TIMCTL                            (0x0000010C)          /* Erase Verify Timing Control Register */
#define OFS_FLCTL_LKGVER_TIMCTL                            (0x00000110)          /* Leakage Verify Timing Control Register */
#define OFS_FLCTL_PROGRAM_TIMCTL                           (0x00000114)          /* Program Timing Control Register */
#define OFS_FLCTL_ERASE_TIMCTL                             (0x00000118)          /* Erase Timing Control Register */
#define OFS_FLCTL_MASSERASE_TIMCTL                         (0x0000011C)          /* Mass Erase Timing Control Register */
#define OFS_FLCTL_BURSTPRG_TIMCTL                          (0x00000120)          /* Burst Program Timing Control Register */


//*****************************************************************************
// FPB Registers
//*****************************************************************************
#define FPB_FP_CTRL                                        (HWREG32(0xE0002000)) /* Flash Patch Control Register */
#define FPB_FP_REMAP                                       (HWREG32(0xE0002004)) /* Flash Patch Remap Register */
#define FPB_FP_COMP0                                       (HWREG32(0xE0002008)) /* Flash Patch Comparator Registers */
#define FPB_FP_COMP1                                       (HWREG32(0xE000200C)) /* Flash Patch Comparator Registers */
#define FPB_FP_COMP2                                       (HWREG32(0xE0002010)) /* Flash Patch Comparator Registers */
#define FPB_FP_COMP3                                       (HWREG32(0xE0002014)) /* Flash Patch Comparator Registers */
#define FPB_FP_COMP4                                       (HWREG32(0xE0002018)) /* Flash Patch Comparator Registers */
#define FPB_FP_COMP5                                       (HWREG32(0xE000201C)) /* Flash Patch Comparator Registers */
#define FPB_FP_COMP6                                       (HWREG32(0xE0002020)) /* Flash Patch Comparator Registers */
#define FPB_FP_COMP7                                       (HWREG32(0xE0002024)) /* Flash Patch Comparator Registers */

/* Register offsets from FPB_BASE address */
#define OFS_FPB_FP_CTRL                                    (0x00000000)          /* Flash Patch Control Register */
#define OFS_FPB_FP_REMAP                                   (0x00000004)          /* Flash Patch Remap Register */
#define OFS_FPB_FP_COMP0                                   (0x00000008)          /* Flash Patch Comparator Registers */
#define OFS_FPB_FP_COMP1                                   (0x0000000C)          /* Flash Patch Comparator Registers */
#define OFS_FPB_FP_COMP2                                   (0x00000010)          /* Flash Patch Comparator Registers */
#define OFS_FPB_FP_COMP3                                   (0x00000014)          /* Flash Patch Comparator Registers */
#define OFS_FPB_FP_COMP4                                   (0x00000018)          /* Flash Patch Comparator Registers */
#define OFS_FPB_FP_COMP5                                   (0x0000001C)          /* Flash Patch Comparator Registers */
#define OFS_FPB_FP_COMP6                                   (0x00000020)          /* Flash Patch Comparator Registers */
#define OFS_FPB_FP_COMP7                                   (0x00000024)          /* Flash Patch Comparator Registers */


//*****************************************************************************
// FPU Registers
//*****************************************************************************
#define FPU_FPCCR                                          (HWREG32(0xE000EF34)) /* Floating Point Context Control Register */
#define FPU_FPCAR                                          (HWREG32(0xE000EF38)) /* Floating-Point Context Address Register */
#define FPU_FPDSCR                                         (HWREG32(0xE000EF3C)) /* Floating Point Default Status Control Register */
#define FPU_MVFR0                                          (HWREG32(0xE000EF40)) /* Media and FP Feature Register 0 (MVFR0) */
#define FPU_MVFR1                                          (HWREG32(0xE000EF44)) /* Media and FP Feature Register 1 (MVFR1) */

/* Register offsets from FPU_BASE address */
#define OFS_FPU_FPCCR                                      (0x00000F34)          /* Floating Point Context Control Register */
#define OFS_FPU_FPCAR                                      (0x00000F38)          /* Floating-Point Context Address Register */
#define OFS_FPU_FPDSCR                                     (0x00000F3C)          /* Floating Point Default Status Control Register */
#define OFS_FPU_MVFR0                                      (0x00000F40)          /* Media and FP Feature Register 0 (MVFR0) */
#define OFS_FPU_MVFR1                                      (0x00000F44)          /* Media and FP Feature Register 1 (MVFR1) */


//*****************************************************************************
// ITM Registers
//*****************************************************************************
#define ITM_STIM0                                          (HWREG32(0xE0000000)) /* ITM Stimulus Port 0 */
#define ITM_STIM1                                          (HWREG32(0xE0000004)) /* ITM Stimulus Port 1 */
#define ITM_STIM2                                          (HWREG32(0xE0000008)) /* ITM Stimulus Port 2 */
#define ITM_STIM3                                          (HWREG32(0xE000000C)) /* ITM Stimulus Port 3 */
#define ITM_STIM4                                          (HWREG32(0xE0000010)) /* ITM Stimulus Port 4 */
#define ITM_STIM5                                          (HWREG32(0xE0000014)) /* ITM Stimulus Port 5 */
#define ITM_STIM6                                          (HWREG32(0xE0000018)) /* ITM Stimulus Port 6 */
#define ITM_STIM7                                          (HWREG32(0xE000001C)) /* ITM Stimulus Port 7 */
#define ITM_STIM8                                          (HWREG32(0xE0000020)) /* ITM Stimulus Port 8 */
#define ITM_STIM9                                          (HWREG32(0xE0000024)) /* ITM Stimulus Port 9 */
#define ITM_STIM10                                         (HWREG32(0xE0000028)) /* ITM Stimulus Port 10 */
#define ITM_STIM11                                         (HWREG32(0xE000002C)) /* ITM Stimulus Port 11 */
#define ITM_STIM12                                         (HWREG32(0xE0000030)) /* ITM Stimulus Port 12 */
#define ITM_STIM13                                         (HWREG32(0xE0000034)) /* ITM Stimulus Port 13 */
#define ITM_STIM14                                         (HWREG32(0xE0000038)) /* ITM Stimulus Port 14 */
#define ITM_STIM15                                         (HWREG32(0xE000003C)) /* ITM Stimulus Port 15 */
#define ITM_STIM16                                         (HWREG32(0xE0000040)) /* ITM Stimulus Port 16 */
#define ITM_STIM17                                         (HWREG32(0xE0000044)) /* ITM Stimulus Port 17 */
#define ITM_STIM18                                         (HWREG32(0xE0000048)) /* ITM Stimulus Port 18 */
#define ITM_STIM19                                         (HWREG32(0xE000004C)) /* ITM Stimulus Port 19 */
#define ITM_STIM20                                         (HWREG32(0xE0000050)) /* ITM Stimulus Port 20 */
#define ITM_STIM21                                         (HWREG32(0xE0000054)) /* ITM Stimulus Port 21 */
#define ITM_STIM22                                         (HWREG32(0xE0000058)) /* ITM Stimulus Port 22 */
#define ITM_STIM23                                         (HWREG32(0xE000005C)) /* ITM Stimulus Port 23 */
#define ITM_STIM24                                         (HWREG32(0xE0000060)) /* ITM Stimulus Port 24 */
#define ITM_STIM25                                         (HWREG32(0xE0000064)) /* ITM Stimulus Port 25 */
#define ITM_STIM26                                         (HWREG32(0xE0000068)) /* ITM Stimulus Port 26 */
#define ITM_STIM27                                         (HWREG32(0xE000006C)) /* ITM Stimulus Port 27 */
#define ITM_STIM28                                         (HWREG32(0xE0000070)) /* ITM Stimulus Port 28 */
#define ITM_STIM29                                         (HWREG32(0xE0000074)) /* ITM Stimulus Port 29 */
#define ITM_STIM30                                         (HWREG32(0xE0000078)) /* ITM Stimulus Port 30 */
#define ITM_STIM31                                         (HWREG32(0xE000007C)) /* ITM Stimulus Port 31 */
#define ITM_TER                                            (HWREG32(0xE0000E00)) /* ITM Trace Enable Register */
#define ITM_TPR                                            (HWREG32(0xE0000E40)) /* ITM Trace Privilege Register */
#define ITM_TCR                                            (HWREG32(0xE0000E80)) /* ITM Trace Control Register */
#define ITM_IWR                                            (HWREG32(0xE0000EF8)) /* ITM Integration Write Register */
#define ITM_IMCR                                           (HWREG32(0xE0000F00)) /* ITM Integration Mode Control Register */
#define ITM_LAR                                            (HWREG32(0xE0000FB0)) /* ITM Lock Access Register */
#define ITM_LSR                                            (HWREG32(0xE0000FB4)) /* ITM Lock Status Register */

/* Register offsets from ITM_BASE address */
#define OFS_ITM_STIM0                                      (0x00000000)          /* ITM Stimulus Port 0 */
#define OFS_ITM_STIM1                                      (0x00000004)          /* ITM Stimulus Port 1 */
#define OFS_ITM_STIM2                                      (0x00000008)          /* ITM Stimulus Port 2 */
#define OFS_ITM_STIM3                                      (0x0000000C)          /* ITM Stimulus Port 3 */
#define OFS_ITM_STIM4                                      (0x00000010)          /* ITM Stimulus Port 4 */
#define OFS_ITM_STIM5                                      (0x00000014)          /* ITM Stimulus Port 5 */
#define OFS_ITM_STIM6                                      (0x00000018)          /* ITM Stimulus Port 6 */
#define OFS_ITM_STIM7                                      (0x0000001C)          /* ITM Stimulus Port 7 */
#define OFS_ITM_STIM8                                      (0x00000020)          /* ITM Stimulus Port 8 */
#define OFS_ITM_STIM9                                      (0x00000024)          /* ITM Stimulus Port 9 */
#define OFS_ITM_STIM10                                     (0x00000028)          /* ITM Stimulus Port 10 */
#define OFS_ITM_STIM11                                     (0x0000002C)          /* ITM Stimulus Port 11 */
#define OFS_ITM_STIM12                                     (0x00000030)          /* ITM Stimulus Port 12 */
#define OFS_ITM_STIM13                                     (0x00000034)          /* ITM Stimulus Port 13 */
#define OFS_ITM_STIM14                                     (0x00000038)          /* ITM Stimulus Port 14 */
#define OFS_ITM_STIM15                                     (0x0000003C)          /* ITM Stimulus Port 15 */
#define OFS_ITM_STIM16                                     (0x00000040)          /* ITM Stimulus Port 16 */
#define OFS_ITM_STIM17                                     (0x00000044)          /* ITM Stimulus Port 17 */
#define OFS_ITM_STIM18                                     (0x00000048)          /* ITM Stimulus Port 18 */
#define OFS_ITM_STIM19                                     (0x0000004C)          /* ITM Stimulus Port 19 */
#define OFS_ITM_STIM20                                     (0x00000050)          /* ITM Stimulus Port 20 */
#define OFS_ITM_STIM21                                     (0x00000054)          /* ITM Stimulus Port 21 */
#define OFS_ITM_STIM22                                     (0x00000058)          /* ITM Stimulus Port 22 */
#define OFS_ITM_STIM23                                     (0x0000005C)          /* ITM Stimulus Port 23 */
#define OFS_ITM_STIM24                                     (0x00000060)          /* ITM Stimulus Port 24 */
#define OFS_ITM_STIM25                                     (0x00000064)          /* ITM Stimulus Port 25 */
#define OFS_ITM_STIM26                                     (0x00000068)          /* ITM Stimulus Port 26 */
#define OFS_ITM_STIM27                                     (0x0000006C)          /* ITM Stimulus Port 27 */
#define OFS_ITM_STIM28                                     (0x00000070)          /* ITM Stimulus Port 28 */
#define OFS_ITM_STIM29                                     (0x00000074)          /* ITM Stimulus Port 29 */
#define OFS_ITM_STIM30                                     (0x00000078)          /* ITM Stimulus Port 30 */
#define OFS_ITM_STIM31                                     (0x0000007C)          /* ITM Stimulus Port 31 */
#define OFS_ITM_TER                                        (0x00000E00)          /* ITM Trace Enable Register */
#define OFS_ITM_TPR                                        (0x00000E40)          /* ITM Trace Privilege Register */
#define OFS_ITM_TCR                                        (0x00000E80)          /* ITM Trace Control Register */
#define OFS_ITM_IWR                                        (0x00000EF8)          /* ITM Integration Write Register */
#define OFS_ITM_IMCR                                       (0x00000F00)          /* ITM Integration Mode Control Register */
#define OFS_ITM_LAR                                        (0x00000FB0)          /* ITM Lock Access Register */
#define OFS_ITM_LSR                                        (0x00000FB4)          /* ITM Lock Status Register */


//*****************************************************************************
// MPU Registers
//*****************************************************************************
#define MPU_TYPE                                           (HWREG32(0xE000ED90)) /* MPU Type Register */
#define MPU_CTRL                                           (HWREG32(0xE000ED94)) /* MPU Control Register */
#define MPU_RNR                                            (HWREG32(0xE000ED98)) /* MPU Region Number Register */
#define MPU_RBAR                                           (HWREG32(0xE000ED9C)) /* MPU Region Base Address Register */
#define MPU_RASR                                           (HWREG32(0xE000EDA0)) /* MPU Region Attribute and Size Register */
#define MPU_RBAR_A1                                        (HWREG32(0xE000EDA4)) /* MPU Alias 1 Region Base Address register */
#define MPU_RASR_A1                                        (HWREG32(0xE000EDA8)) /* MPU Alias 1 Region Attribute and Size register */
#define MPU_RBAR_A2                                        (HWREG32(0xE000EDAC)) /* MPU Alias 2 Region Base Address register */
#define MPU_RASR_A2                                        (HWREG32(0xE000EDB0)) /* MPU Alias 2 Region Attribute and Size register */
#define MPU_RBAR_A3                                        (HWREG32(0xE000EDB4)) /* MPU Alias 3 Region Base Address register */
#define MPU_RASR_A3                                        (HWREG32(0xE000EDB8)) /* MPU Alias 3 Region Attribute and Size register */

/* Register offsets from MPU_BASE address */
#define OFS_MPU_TYPE                                       (0x00000D90)          /* MPU Type Register */
#define OFS_MPU_CTRL                                       (0x00000D94)          /* MPU Control Register */
#define OFS_MPU_RNR                                        (0x00000D98)          /* MPU Region Number Register */
#define OFS_MPU_RBAR                                       (0x00000D9C)          /* MPU Region Base Address Register */
#define OFS_MPU_RASR                                       (0x00000DA0)          /* MPU Region Attribute and Size Register */
#define OFS_MPU_RBAR_A1                                    (0x00000DA4)          /* MPU Alias 1 Region Base Address register */
#define OFS_MPU_RASR_A1                                    (0x00000DA8)          /* MPU Alias 1 Region Attribute and Size register */
#define OFS_MPU_RBAR_A2                                    (0x00000DAC)          /* MPU Alias 2 Region Base Address register */
#define OFS_MPU_RASR_A2                                    (0x00000DB0)          /* MPU Alias 2 Region Attribute and Size register */
#define OFS_MPU_RBAR_A3                                    (0x00000DB4)          /* MPU Alias 3 Region Base Address register */
#define OFS_MPU_RASR_A3                                    (0x00000DB8)          /* MPU Alias 3 Region Attribute and Size register */


//*****************************************************************************
// NVIC Registers
//*****************************************************************************
#define NVIC_ISER0                                         (HWREG32(0xE000E100)) /* Irq 0 to 31 Set Enable Register */
#define NVIC_ISER1                                         (HWREG32(0xE000E104)) /* Irq 32 to 63 Set Enable Register */
#define NVIC_ICER0                                         (HWREG32(0xE000E180)) /* Irq 0 to 31 Clear Enable Register */
#define NVIC_ICER1                                         (HWREG32(0xE000E184)) /* Irq 32 to 63 Clear Enable Register */
#define NVIC_ISPR0                                         (HWREG32(0xE000E200)) /* Irq 0 to 31 Set Pending Register */
#define NVIC_ISPR1                                         (HWREG32(0xE000E204)) /* Irq 32 to 63 Set Pending Register */
#define NVIC_ICPR0                                         (HWREG32(0xE000E280)) /* Irq 0 to 31 Clear Pending Register */
#define NVIC_ICPR1                                         (HWREG32(0xE000E284)) /* Irq 32 to 63 Clear Pending Register */
#define NVIC_IABR0                                         (HWREG32(0xE000E300)) /* Irq 0 to 31 Active Bit Register */
#define NVIC_IABR1                                         (HWREG32(0xE000E304)) /* Irq 32 to 63 Active Bit Register */
#define NVIC_IPR0                                          (HWREG32(0xE000E400)) /* Irq 0 to 3 Priority Register */
#define NVIC_IPR1                                          (HWREG32(0xE000E404)) /* Irq 4 to 7 Priority Register */
#define NVIC_IPR2                                          (HWREG32(0xE000E408)) /* Irq 8 to 11 Priority Register */
#define NVIC_IPR3                                          (HWREG32(0xE000E40C)) /* Irq 12 to 15 Priority Register */
#define NVIC_IPR4                                          (HWREG32(0xE000E410)) /* Irq 16 to 19 Priority Register */
#define NVIC_IPR5                                          (HWREG32(0xE000E414)) /* Irq 20 to 23 Priority Register */
#define NVIC_IPR6                                          (HWREG32(0xE000E418)) /* Irq 24 to 27 Priority Register */
#define NVIC_IPR7                                          (HWREG32(0xE000E41C)) /* Irq 28 to 31 Priority Register */
#define NVIC_IPR8                                          (HWREG32(0xE000E420)) /* Irq 32 to 35 Priority Register */
#define NVIC_IPR9                                          (HWREG32(0xE000E424)) /* Irq 36 to 39 Priority Register */
#define NVIC_IPR10                                         (HWREG32(0xE000E428)) /* Irq 40 to 43 Priority Register */
#define NVIC_IPR11                                         (HWREG32(0xE000E42C)) /* Irq 44 to 47 Priority Register */
#define NVIC_IPR12                                         (HWREG32(0xE000E430)) /* Irq 48 to 51 Priority Register */
#define NVIC_IPR13                                         (HWREG32(0xE000E434)) /* Irq 52 to 55 Priority Register */
#define NVIC_IPR14                                         (HWREG32(0xE000E438)) /* Irq 56 to 59 Priority Register */
#define NVIC_IPR15                                         (HWREG32(0xE000E43C)) /* Irq 60 to 63 Priority Register */
#define NVIC_STIR                                          (HWREG32(0xE000EF00)) /* Software Trigger Interrupt Register */

/* Register offsets from NVIC_BASE address */
#define OFS_NVIC_ISER0                                     (0x00000100)          /* Irq 0 to 31 Set Enable Register */
#define OFS_NVIC_ISER1                                     (0x00000104)          /* Irq 32 to 63 Set Enable Register */
#define OFS_NVIC_ICER0                                     (0x00000180)          /* Irq 0 to 31 Clear Enable Register */
#define OFS_NVIC_ICER1                                     (0x00000184)          /* Irq 32 to 63 Clear Enable Register */
#define OFS_NVIC_ISPR0                                     (0x00000200)          /* Irq 0 to 31 Set Pending Register */
#define OFS_NVIC_ISPR1                                     (0x00000204)          /* Irq 32 to 63 Set Pending Register */
#define OFS_NVIC_ICPR0                                     (0x00000280)          /* Irq 0 to 31 Clear Pending Register */
#define OFS_NVIC_ICPR1                                     (0x00000284)          /* Irq 32 to 63 Clear Pending Register */
#define OFS_NVIC_IABR0                                     (0x00000300)          /* Irq 0 to 31 Active Bit Register */
#define OFS_NVIC_IABR1                                     (0x00000304)          /* Irq 32 to 63 Active Bit Register */
#define OFS_NVIC_IPR0                                      (0x00000400)          /* Irq 0 to 3 Priority Register */
#define OFS_NVIC_IPR1                                      (0x00000404)          /* Irq 4 to 7 Priority Register */
#define OFS_NVIC_IPR2                                      (0x00000408)          /* Irq 8 to 11 Priority Register */
#define OFS_NVIC_IPR3                                      (0x0000040C)          /* Irq 12 to 15 Priority Register */
#define OFS_NVIC_IPR4                                      (0x00000410)          /* Irq 16 to 19 Priority Register */
#define OFS_NVIC_IPR5                                      (0x00000414)          /* Irq 20 to 23 Priority Register */
#define OFS_NVIC_IPR6                                      (0x00000418)          /* Irq 24 to 27 Priority Register */
#define OFS_NVIC_IPR7                                      (0x0000041C)          /* Irq 28 to 31 Priority Register */
#define OFS_NVIC_IPR8                                      (0x00000420)          /* Irq 32 to 35 Priority Register */
#define OFS_NVIC_IPR9                                      (0x00000424)          /* Irq 36 to 39 Priority Register */
#define OFS_NVIC_IPR10                                     (0x00000428)          /* Irq 40 to 43 Priority Register */
#define OFS_NVIC_IPR11                                     (0x0000042C)          /* Irq 44 to 47 Priority Register */
#define OFS_NVIC_IPR12                                     (0x00000430)          /* Irq 48 to 51 Priority Register */
#define OFS_NVIC_IPR13                                     (0x00000434)          /* Irq 52 to 55 Priority Register */
#define OFS_NVIC_IPR14                                     (0x00000438)          /* Irq 56 to 59 Priority Register */
#define OFS_NVIC_IPR15                                     (0x0000043C)          /* Irq 60 to 63 Priority Register */
#define OFS_NVIC_STIR                                      (0x00000F00)          /* Software Trigger Interrupt Register */


//*****************************************************************************
// PCM Registers
//*****************************************************************************
#define PCMCTL0                                            (HWREG32(0x40010000)) /* Control 0 Register */
#define PCMCTL1                                            (HWREG32(0x40010004)) /* Control 1 Register */
#define PCMIE                                              (HWREG32(0x40010008)) /* Interrupt Enable Register */
#define PCMIFG                                             (HWREG32(0x4001000C)) /* Interrupt Flag Register */
#define PCMCLRIFG                                          (HWREG32(0x40010010)) /* Clear Interrupt Flag Register */

/* Register offsets from PCM_BASE address */
#define OFS_PCMCTL0                                        (0x00000000)          /* Control 0 Register */
#define OFS_PCMCTL1                                        (0x00000004)          /* Control 1 Register */
#define OFS_PCMIE                                          (0x00000008)          /* Interrupt Enable Register */
#define OFS_PCMIFG                                         (0x0000000c)          /* Interrupt Flag Register */
#define OFS_PCMCLRIFG                                      (0x00000010)          /* Clear Interrupt Flag Register */


//*****************************************************************************
// PMAP Registers
//*****************************************************************************
#define PMAPKEYID                                          (HWREG16(0x40005000)) /* Port Mapping Key Register */
#define PMAPCTL                                            (HWREG16(0x40005002)) /* Port Mapping Control Register */
#define P1MAP01                                            (HWREG16(0x40005008)) /* Port mapping register, P1.0 and P1.1 */
#define P1MAP23                                            (HWREG16(0x4000500A)) /* Port mapping register, P1.2 and P1.3 */
#define P1MAP45                                            (HWREG16(0x4000500C)) /* Port mapping register, P1.4 and P1.5 */
#define P1MAP67                                            (HWREG16(0x4000500E)) /* Port mapping register, P1.6 and P1.7 */
#define P2MAP01                                            (HWREG16(0x40005010)) /* Port mapping register, P2.0 and P2.1 */
#define P2MAP23                                            (HWREG16(0x40005012)) /* Port mapping register, P2.2 and P2.3 */
#define P2MAP45                                            (HWREG16(0x40005014)) /* Port mapping register, P2.4 and P2.5 */
#define P2MAP67                                            (HWREG16(0x40005016)) /* Port mapping register, P2.6 and P2.7 */
#define P3MAP01                                            (HWREG16(0x40005018)) /* Port mapping register, P3.0 and P3.1 */
#define P3MAP23                                            (HWREG16(0x4000501A)) /* Port mapping register, P3.2 and P3.3 */
#define P3MAP45                                            (HWREG16(0x4000501C)) /* Port mapping register, P3.4 and P3.5 */
#define P3MAP67                                            (HWREG16(0x4000501E)) /* Port mapping register, P3.6 and P3.7 */
#define P4MAP01                                            (HWREG16(0x40005020)) /* Port mapping register, P4.0 and P4.1 */
#define P4MAP23                                            (HWREG16(0x40005022)) /* Port mapping register, P4.2 and P4.3 */
#define P4MAP45                                            (HWREG16(0x40005024)) /* Port mapping register, P4.4 and P4.5 */
#define P4MAP67                                            (HWREG16(0x40005026)) /* Port mapping register, P4.6 and P4.7 */
#define P5MAP01                                            (HWREG16(0x40005028)) /* Port mapping register, P5.0 and P5.1 */
#define P5MAP23                                            (HWREG16(0x4000502A)) /* Port mapping register, P5.2 and P5.3 */
#define P5MAP45                                            (HWREG16(0x4000502C)) /* Port mapping register, P5.4 and P5.5 */
#define P5MAP67                                            (HWREG16(0x4000502E)) /* Port mapping register, P5.6 and P5.7 */
#define P6MAP01                                            (HWREG16(0x40005030)) /* Port mapping register, P6.0 and P6.1 */
#define P6MAP23                                            (HWREG16(0x40005032)) /* Port mapping register, P6.2 and P6.3 */
#define P6MAP45                                            (HWREG16(0x40005034)) /* Port mapping register, P6.4 and P6.5 */
#define P6MAP67                                            (HWREG16(0x40005036)) /* Port mapping register, P6.6 and P6.7 */
#define P7MAP01                                            (HWREG16(0x40005038)) /* Port mapping register, P7.0 and P7.1 */
#define P7MAP23                                            (HWREG16(0x4000503A)) /* Port mapping register, P7.2 and P7.3 */
#define P7MAP45                                            (HWREG16(0x4000503C)) /* Port mapping register, P7.4 and P7.5 */
#define P7MAP67                                            (HWREG16(0x4000503E)) /* Port mapping register, P7.6 and P7.7 */

/* Register offsets from PMAP_BASE address */
#define OFS_PMAPKEYID                                      (0x0000)              /* Port Mapping Key Register */
#define OFS_PMAPCTL                                        (0x0002)              /* Port Mapping Control Register */
#define OFS_P1MAP01                                        (0x0008)              /* Port mapping register, P1.0 and P1.1 */
#define OFS_P1MAP23                                        (0x000a)              /* Port mapping register, P1.2 and P1.3 */
#define OFS_P1MAP45                                        (0x000c)              /* Port mapping register, P1.4 and P1.5 */
#define OFS_P1MAP67                                        (0x000e)              /* Port mapping register, P1.6 and P1.7 */
#define OFS_P2MAP01                                        (0x0010)              /* Port mapping register, P2.0 and P2.1 */
#define OFS_P2MAP23                                        (0x0012)              /* Port mapping register, P2.2 and P2.3 */
#define OFS_P2MAP45                                        (0x0014)              /* Port mapping register, P2.4 and P2.5 */
#define OFS_P2MAP67                                        (0x0016)              /* Port mapping register, P2.6 and P2.7 */
#define OFS_P3MAP01                                        (0x0018)              /* Port mapping register, P3.0 and P3.1 */
#define OFS_P3MAP23                                        (0x001a)              /* Port mapping register, P3.2 and P3.3 */
#define OFS_P3MAP45                                        (0x001c)              /* Port mapping register, P3.4 and P3.5 */
#define OFS_P3MAP67                                        (0x001e)              /* Port mapping register, P3.6 and P3.7 */
#define OFS_P4MAP01                                        (0x0020)              /* Port mapping register, P4.0 and P4.1 */
#define OFS_P4MAP23                                        (0x0022)              /* Port mapping register, P4.2 and P4.3 */
#define OFS_P4MAP45                                        (0x0024)              /* Port mapping register, P4.4 and P4.5 */
#define OFS_P4MAP67                                        (0x0026)              /* Port mapping register, P4.6 and P4.7 */
#define OFS_P5MAP01                                        (0x0028)              /* Port mapping register, P5.0 and P5.1 */
#define OFS_P5MAP23                                        (0x002a)              /* Port mapping register, P5.2 and P5.3 */
#define OFS_P5MAP45                                        (0x002c)              /* Port mapping register, P5.4 and P5.5 */
#define OFS_P5MAP67                                        (0x002e)              /* Port mapping register, P5.6 and P5.7 */
#define OFS_P6MAP01                                        (0x0030)              /* Port mapping register, P6.0 and P6.1 */
#define OFS_P6MAP23                                        (0x0032)              /* Port mapping register, P6.2 and P6.3 */
#define OFS_P6MAP45                                        (0x0034)              /* Port mapping register, P6.4 and P6.5 */
#define OFS_P6MAP67                                        (0x0036)              /* Port mapping register, P6.6 and P6.7 */
#define OFS_P7MAP01                                        (0x0038)              /* Port mapping register, P7.0 and P7.1 */
#define OFS_P7MAP23                                        (0x003a)              /* Port mapping register, P7.2 and P7.3 */
#define OFS_P7MAP45                                        (0x003c)              /* Port mapping register, P7.4 and P7.5 */
#define OFS_P7MAP67                                        (0x003e)              /* Port mapping register, P7.6 and P7.7 */


//*****************************************************************************
// PSS Registers
//*****************************************************************************
#define PSSKEY                                             (HWREG32(0x40010800)) /* Key Register */
#define PSSCTL0                                            (HWREG32(0x40010804)) /* Control 0 Register */
#define PSSIE                                              (HWREG32(0x40010834)) /* Interrupt Enable Register */
#define PSSIFG                                             (HWREG32(0x40010838)) /* Interrupt Flag Register */
#define PSSCLRIFG                                          (HWREG32(0x4001083C)) /* Clear Interrupt Flag Register */

/* Register offsets from PSS_BASE address */
#define OFS_PSSKEY                                         (0x00000000)          /* Key Register */
#define OFS_PSSCTL0                                        (0x00000004)          /* Control 0 Register */
#define OFS_PSSIE                                          (0x00000034)          /* Interrupt Enable Register */
#define OFS_PSSIFG                                         (0x00000038)          /* Interrupt Flag Register */
#define OFS_PSSCLRIFG                                      (0x0000003c)          /* Clear Interrupt Flag Register */


//*****************************************************************************
// REF_A Registers
//*****************************************************************************
#define REFCTL0                                            (HWREG16(0x40003000)) /* REF Control Register 0 */

/* Register offsets from REF_A_BASE address */
#define OFS_REFCTL0                                        (0x0000)              /* REF Control Register 0 */

#define REFCTL0_L                                          (HWREG8_L(REFCTL0))   /* REF Control Register 0 */
#define REFCTL0_H                                          (HWREG8_H(REFCTL0))   /* REF Control Register 0 */

//*****************************************************************************
// RSTCTL Registers
//*****************************************************************************
#define RSTCTL_RESET_REQ                                   (HWREG32(0xE0042000)) /* Reset Request Register */
#define RSTCTL_HARDRESET_STAT                              (HWREG32(0xE0042004)) /* Hard Reset Status Register */
#define RSTCTL_HARDRESET_CLR                               (HWREG32(0xE0042008)) /* Hard Reset Status Clear Register */
#define RSTCTL_HARDRESET_SET                               (HWREG32(0xE004200C)) /* Hard Reset Status Set Register */
#define RSTCTL_SOFTRESET_STAT                              (HWREG32(0xE0042010)) /* Soft Reset Status Register */
#define RSTCTL_SOFTRESET_CLR                               (HWREG32(0xE0042014)) /* Soft Reset Status Clear Register */
#define RSTCTL_SOFTRESET_SET                               (HWREG32(0xE0042018)) /* Soft Reset Status Set Register */
#define RSTCTL_PSSRESET_STAT                               (HWREG32(0xE0042100)) /* PSS Reset Status Register */
#define RSTCTL_PSSRESET_CLR                                (HWREG32(0xE0042104)) /* PSS Reset Status Clear Register */
#define RSTCTL_PCMRESET_STAT                               (HWREG32(0xE0042108)) /* PCM Reset Status Register */
#define RSTCTL_PCMRESET_CLR                                (HWREG32(0xE004210C)) /* PCM Reset Status Clear Register */
#define RSTCTL_PINRESET_STAT                               (HWREG32(0xE0042110)) /* Pin Reset Status Register */
#define RSTCTL_PINRESET_CLR                                (HWREG32(0xE0042114)) /* Pin Reset Status Clear Register */
#define RSTCTL_REBOOTRESET_STAT                            (HWREG32(0xE0042118)) /* Reboot Reset Status Register */
#define RSTCTL_REBOOTRESET_CLR                             (HWREG32(0xE004211C)) /* Reboot Reset Status Clear Register */

/* Register offsets from RSTCTL_BASE address */
#define OFS_RSTCTL_RESET_REQ                               (0x00000000)          /* Reset Request Register */
#define OFS_RSTCTL_HARDRESET_STAT                          (0x00000004)          /* Hard Reset Status Register */
#define OFS_RSTCTL_HARDRESET_CLR                           (0x00000008)          /* Hard Reset Status Clear Register */
#define OFS_RSTCTL_HARDRESET_SET                           (0x0000000c)          /* Hard Reset Status Set Register */
#define OFS_RSTCTL_SOFTRESET_STAT                          (0x00000010)          /* Soft Reset Status Register */
#define OFS_RSTCTL_SOFTRESET_CLR                           (0x00000014)          /* Soft Reset Status Clear Register */
#define OFS_RSTCTL_SOFTRESET_SET                           (0x00000018)          /* Soft Reset Status Set Register */
#define OFS_RSTCTL_PSSRESET_STAT                           (0x00000100)          /* PSS Reset Status Register */
#define OFS_RSTCTL_PSSRESET_CLR                            (0x00000104)          /* PSS Reset Status Clear Register */
#define OFS_RSTCTL_PCMRESET_STAT                           (0x00000108)          /* PCM Reset Status Register */
#define OFS_RSTCTL_PCMRESET_CLR                            (0x0000010c)          /* PCM Reset Status Clear Register */
#define OFS_RSTCTL_PINRESET_STAT                           (0x00000110)          /* Pin Reset Status Register */
#define OFS_RSTCTL_PINRESET_CLR                            (0x00000114)          /* Pin Reset Status Clear Register */
#define OFS_RSTCTL_REBOOTRESET_STAT                        (0x00000118)          /* Reboot Reset Status Register */
#define OFS_RSTCTL_REBOOTRESET_CLR                         (0x0000011c)          /* Reboot Reset Status Clear Register */


//*****************************************************************************
// RTC_C Registers
//*****************************************************************************
#define RTCCTL0                                            (HWREG16(0x40004400)) /* RTCCTL0 Register */
#define RTCCTL13                                           (HWREG16(0x40004402)) /* RTCCTL13 Register */
#define RTCOCAL                                            (HWREG16(0x40004404)) /* RTCOCAL Register */
#define RTCTCMP                                            (HWREG16(0x40004406)) /* RTCTCMP Register */
#define RTCPS0CTL                                          (HWREG16(0x40004408)) /* Real-Time Clock Prescale Timer 0 Control Register */
#define RTCPS1CTL                                          (HWREG16(0x4000440A)) /* Real-Time Clock Prescale Timer 1 Control Register */
#define RTCPS                                              (HWREG16(0x4000440C)) /* Real-Time Clock Prescale Timer Counter Register */
#define RTCIV                                              (HWREG16(0x4000440E)) /* Real-Time Clock Interrupt Vector Register */
#define RTCTIM0                                            (HWREG16(0x40004410)) /* RTCTIM0 Register ? Hexadecimal Format */
#define RTCTIM0_BCD                                        (HWREG16(0x40004410)) /*  */
#define RTCTIM1                                            (HWREG16(0x40004412)) /* Real-Time Clock Hour, Day of Week */
#define RTCTIM1_BCD                                        (HWREG16(0x40004412)) /*  */
#define RTCDATE                                            (HWREG16(0x40004414)) /* RTCDATE - Hexadecimal Format */
#define RTCDATE_BCD                                        (HWREG16(0x40004414)) /*  */
#define RTCYEAR                                            (HWREG16(0x40004416)) /* RTCYEAR Register ? Hexadecimal Format */
#define RTCYEAR_BCD                                        (HWREG16(0x40004416)) /*  */
#define RTCAMINHR                                          (HWREG16(0x40004418)) /* RTCMINHR - Hexadecimal Format */
#define RTCAMINHR_BCD                                      (HWREG16(0x40004418)) /*  */
#define RTCADOWDAY                                         (HWREG16(0x4000441A)) /* RTCADOWDAY - Hexadecimal Format */
#define RTCADOWDAY_BCD                                     (HWREG16(0x4000441A)) /*  */
#define RTCBIN2BCD                                         (HWREG16(0x4000441C)) /* Binary-to-BCD Conversion Register */
#define RTCBCD2BIN                                         (HWREG16(0x4000441E)) /* BCD-to-Binary Conversion Register */

/* Register offsets from RTC_C_BASE address */
#define OFS_RTCCTL0                                        (0x0000)              /* RTCCTL0 Register */
#define OFS_RTCCTL13                                       (0x0002)              /* RTCCTL13 Register */
#define OFS_RTCOCAL                                        (0x0004)              /* RTCOCAL Register */
#define OFS_RTCTCMP                                        (0x0006)              /* RTCTCMP Register */
#define OFS_RTCPS0CTL                                      (0x0008)              /* Real-Time Clock Prescale Timer 0 Control Register */
#define OFS_RTCPS1CTL                                      (0x000a)              /* Real-Time Clock Prescale Timer 1 Control Register */
#define OFS_RTCPS                                          (0x000c)              /* Real-Time Clock Prescale Timer Counter Register */
#define OFS_RTCIV                                          (0x000e)              /* Real-Time Clock Interrupt Vector Register */
#define OFS_RTCTIM0                                        (0x0010)              /* RTCTIM0 Register ? Hexadecimal Format */
#define OFS_RTCTIM0_BCD                                    (0x0010)              /*  */
#define OFS_RTCTIM1                                        (0x0012)              /* Real-Time Clock Hour, Day of Week */
#define OFS_RTCTIM1_BCD                                    (0x0012)              /*  */
#define OFS_RTCDATE                                        (0x0014)              /* RTCDATE - Hexadecimal Format */
#define OFS_RTCDATE_BCD                                    (0x0014)              /*  */
#define OFS_RTCYEAR                                        (0x0016)              /* RTCYEAR Register ? Hexadecimal Format */
#define OFS_RTCYEAR_BCD                                    (0x0016)              /*  */
#define OFS_RTCAMINHR                                      (0x0018)              /* RTCMINHR - Hexadecimal Format */
#define OFS_RTCAMINHR_BCD                                  (0x0018)              /*  */
#define OFS_RTCADOWDAY                                     (0x001a)              /* RTCADOWDAY - Hexadecimal Format */
#define OFS_RTCADOWDAY_BCD                                 (0x001a)              /*  */
#define OFS_RTCBIN2BCD                                     (0x001c)              /* Binary-to-BCD Conversion Register */
#define OFS_RTCBCD2BIN                                     (0x001e)              /* BCD-to-Binary Conversion Register */

#define RTCCTL0_L                                          (HWREG8_L(RTCCTL0))   /* RTCCTL0 Register */
#define RTCCTL0_H                                          (HWREG8_H(RTCCTL0))   /* RTCCTL0 Register */
#define RTCCTL1                                            (HWREG8_L(RTCCTL13))  /* RTCCTL13 Register */
#define RTCCTL13_L                                         (HWREG8_L(RTCCTL13))  /* RTCCTL13 Register */
#define RTCCTL3                                            (HWREG8_H(RTCCTL13))  /* RTCCTL13 Register */
#define RTCCTL13_H                                         (HWREG8_H(RTCCTL13))  /* RTCCTL13 Register */
#define RTCOCAL_L                                          (HWREG8_L(RTCOCAL))   /* RTCOCAL Register */
#define RTCOCAL_H                                          (HWREG8_H(RTCOCAL))   /* RTCOCAL Register */
#define RTCTCMP_L                                          (HWREG8_L(RTCTCMP))   /* RTCTCMP Register */
#define RTCTCMP_H                                          (HWREG8_H(RTCTCMP))   /* RTCTCMP Register */
#define RTCPS0CTL_L                                        (HWREG8_L(RTCPS0CTL)) /* Real-Time Clock Prescale Timer 0 Control Register */
#define RTCPS0CTL_H                                        (HWREG8_H(RTCPS0CTL)) /* Real-Time Clock Prescale Timer 0 Control Register */
#define RTCPS1CTL_L                                        (HWREG8_L(RTCPS1CTL)) /* Real-Time Clock Prescale Timer 1 Control Register */
#define RTCPS1CTL_H                                        (HWREG8_H(RTCPS1CTL)) /* Real-Time Clock Prescale Timer 1 Control Register */
#define RTCPS0                                             (HWREG8_L(RTCPS))     /* Real-Time Clock Prescale Timer Counter Register */
#define RTCPS_L                                            (HWREG8_L(RTCPS))     /* Real-Time Clock Prescale Timer Counter Register */
#define RTCPS1                                             (HWREG8_H(RTCPS))     /* Real-Time Clock Prescale Timer Counter Register */
#define RTCPS_H                                            (HWREG8_H(RTCPS))     /* Real-Time Clock Prescale Timer Counter Register */
#define RTCSEC                                             (HWREG8_L(RTCTIM0))   /* Real-Time Clock Seconds */
#define RTCTIM0_L                                          (HWREG8_L(RTCTIM0))   /* Real-Time Clock Seconds */
#define RTCMIN                                             (HWREG8_H(RTCTIM0))   /* Real-Time Clock Minutes */
#define RTCTIM0_H                                          (HWREG8_H(RTCTIM0))   /* Real-Time Clock Minutes */
#define RTCHOUR                                            (HWREG8_L(RTCTIM1))   /* Real-Time Clock Hour */
#define RTCTIM1_L                                          (HWREG8_L(RTCTIM1))   /* Real-Time Clock Hour */
#define RTCDOW                                             (HWREG8_H(RTCTIM1))   /* Real-Time Clock Day of Week */
#define RTCTIM1_H                                          (HWREG8_H(RTCTIM1))   /* Real-Time Clock Day of Week */
#define RTCDAY                                             (HWREG8_L(RTCDATE))   /* Real-Time Clock Day of Month */
#define RTCDATE_L                                          (HWREG8_L(RTCDATE))   /* Real-Time Clock Day of Month */
#define RTCMON                                             (HWREG8_H(RTCDATE))   /* Real-Time Clock Month */
#define RTCDATE_H                                          (HWREG8_H(RTCDATE))   /* Real-Time Clock Month */
#define RTCAMIN                                            (HWREG8_L(RTCAMINHR)) /* Real-Time Clock Minutes Alarm */
#define RTCAMINHR_L                                        (HWREG8_L(RTCAMINHR)) /* Real-Time Clock Minutes Alarm */
#define RTCAHOUR                                           (HWREG8_H(RTCAMINHR)) /* Real-Time Clock Hours Alarm */
#define RTCAMINHR_H                                        (HWREG8_H(RTCAMINHR)) /* Real-Time Clock Hours Alarm */
#define RTCADOW                                            (HWREG8_L(RTCADOWDAY))/* Real-Time Clock Day of Week Alarm */
#define RTCADOWDAY_L                                       (HWREG8_L(RTCADOWDAY))/* Real-Time Clock Day of Week Alarm */
#define RTCADAY                                            (HWREG8_H(RTCADOWDAY))/* Real-Time Clock Day of Month Alarm */
#define RTCADOWDAY_H                                       (HWREG8_H(RTCADOWDAY))/* Real-Time Clock Day of Month Alarm */

//*****************************************************************************
// SCB Registers
//*****************************************************************************
#define SCB_CPUID                                          (HWREG32(0xE000ED00)) /* CPUID Base Register */
#define SCB_ICSR                                           (HWREG32(0xE000ED04)) /* Interrupt Control State Register */
#define SCB_VTOR                                           (HWREG32(0xE000ED08)) /* Vector Table Offset Register */
#define SCB_AIRCR                                          (HWREG32(0xE000ED0C)) /* Application Interrupt/Reset Control Register */
#define SCB_SCR                                            (HWREG32(0xE000ED10)) /* System Control Register */
#define SCB_CCR                                            (HWREG32(0xE000ED14)) /* Configuration Control Register */
#define SCB_SHPR1                                          (HWREG32(0xE000ED18)) /* System Handlers 4-7 Priority Register */
#define SCB_SHPR2                                          (HWREG32(0xE000ED1C)) /* System Handlers 8-11 Priority Register */
#define SCB_SHPR3                                          (HWREG32(0xE000ED20)) /* System Handlers 12-15 Priority Register */
#define SCB_SHCSR                                          (HWREG32(0xE000ED24)) /* System Handler Control and State Register */
#define SCB_CFSR                                           (HWREG32(0xE000ED28)) /* Configurable Fault Status Registers */
#define SCB_HFSR                                           (HWREG32(0xE000ED2C)) /* Hard Fault Status Register */
#define SCB_DFSR                                           (HWREG32(0xE000ED30)) /* Debug Fault Status Register */
#define SCB_MMFAR                                          (HWREG32(0xE000ED34)) /* Mem Manage Fault Address Register */
#define SCB_BFAR                                           (HWREG32(0xE000ED38)) /* Bus Fault Address Register */
#define SCB_AFSR                                           (HWREG32(0xE000ED3C)) /* Auxiliary Fault Status Register */
#define SCB_PFR0                                           (HWREG32(0xE000ED40)) /* Processor Feature register0 */
#define SCB_PFR1                                           (HWREG32(0xE000ED44)) /* Processor Feature register1 */
#define SCB_DFR0                                           (HWREG32(0xE000ED48)) /* Debug Feature register0 */
#define SCB_AFR0                                           (HWREG32(0xE000ED4C)) /* Auxiliary Feature register0 */
#define SCB_MMFR0                                          (HWREG32(0xE000ED50)) /* Memory Model Feature register0 */
#define SCB_MMFR1                                          (HWREG32(0xE000ED54)) /* Memory Model Feature register1 */
#define SCB_MMFR2                                          (HWREG32(0xE000ED58)) /* Memory Model Feature register2 */
#define SCB_MMFR3                                          (HWREG32(0xE000ED5C)) /* Memory Model Feature register3 */
#define SCB_ISAR0                                          (HWREG32(0xE000ED60)) /* ISA Feature register0 */
#define SCB_ISAR1                                          (HWREG32(0xE000ED64)) /* ISA Feature register1 */
#define SCB_ISAR2                                          (HWREG32(0xE000ED68)) /* ISA Feature register2 */
#define SCB_ISAR3                                          (HWREG32(0xE000ED6C)) /* ISA Feature register3 */
#define SCB_ISAR4                                          (HWREG32(0xE000ED70)) /* ISA Feature register4 */
#define SCB_CPACR                                          (HWREG32(0xE000ED88)) /* Coprocessor Access Control Register */

/* Register offsets from SCB_BASE address */
#define OFS_SCB_CPUID                                      (0x00000D00)          /* CPUID Base Register */
#define OFS_SCB_ICSR                                       (0x00000D04)          /* Interrupt Control State Register */
#define OFS_SCB_VTOR                                       (0x00000D08)          /* Vector Table Offset Register */
#define OFS_SCB_AIRCR                                      (0x00000D0C)          /* Application Interrupt/Reset Control Register */
#define OFS_SCB_SCR                                        (0x00000D10)          /* System Control Register */
#define OFS_SCB_CCR                                        (0x00000D14)          /* Configuration Control Register */
#define OFS_SCB_SHPR1                                      (0x00000D18)          /* System Handlers 4-7 Priority Register */
#define OFS_SCB_SHPR2                                      (0x00000D1C)          /* System Handlers 8-11 Priority Register */
#define OFS_SCB_SHPR3                                      (0x00000D20)          /* System Handlers 12-15 Priority Register */
#define OFS_SCB_SHCSR                                      (0x00000D24)          /* System Handler Control and State Register */
#define OFS_SCB_CFSR                                       (0x00000D28)          /* Configurable Fault Status Registers */
#define OFS_SCB_HFSR                                       (0x00000D2C)          /* Hard Fault Status Register */
#define OFS_SCB_DFSR                                       (0x00000D30)          /* Debug Fault Status Register */
#define OFS_SCB_MMFAR                                      (0x00000D34)          /* Mem Manage Fault Address Register */
#define OFS_SCB_BFAR                                       (0x00000D38)          /* Bus Fault Address Register */
#define OFS_SCB_AFSR                                       (0x00000D3C)          /* Auxiliary Fault Status Register */
#define OFS_SCB_PFR0                                       (0x00000D40)          /* Processor Feature register0 */
#define OFS_SCB_PFR1                                       (0x00000D44)          /* Processor Feature register1 */
#define OFS_SCB_DFR0                                       (0x00000D48)          /* Debug Feature register0 */
#define OFS_SCB_AFR0                                       (0x00000D4C)          /* Auxiliary Feature register0 */
#define OFS_SCB_MMFR0                                      (0x00000D50)          /* Memory Model Feature register0 */
#define OFS_SCB_MMFR1                                      (0x00000D54)          /* Memory Model Feature register1 */
#define OFS_SCB_MMFR2                                      (0x00000D58)          /* Memory Model Feature register2 */
#define OFS_SCB_MMFR3                                      (0x00000D5C)          /* Memory Model Feature register3 */
#define OFS_SCB_ISAR0                                      (0x00000D60)          /* ISA Feature register0 */
#define OFS_SCB_ISAR1                                      (0x00000D64)          /* ISA Feature register1 */
#define OFS_SCB_ISAR2                                      (0x00000D68)          /* ISA Feature register2 */
#define OFS_SCB_ISAR3                                      (0x00000D6C)          /* ISA Feature register3 */
#define OFS_SCB_ISAR4                                      (0x00000D70)          /* ISA Feature register4 */
#define OFS_SCB_CPACR                                      (0x00000D88)          /* Coprocessor Access Control Register */


//*****************************************************************************
// SCnSCB Registers
//*****************************************************************************
#define SCnSCB_ICTR                                        (HWREG32(0xE000E004)) /* Interrupt Control Type Register */
#define SCnSCB_ACTLR                                       (HWREG32(0xE000E008)) /* Auxiliary Control Register */

/* Register offsets from SCnSCB_BASE address */
#define OFS_SCnSCB_ICTR                                    (0x00000004)          /* Interrupt Control Type Register */
#define OFS_SCnSCB_ACTLR                                   (0x00000008)          /* Auxiliary Control Register */


//*****************************************************************************
// SYSCTL Registers
//*****************************************************************************
#define SYSCTL_REBOOT_CTL                                  (HWREG32(0xE0043000)) /* Reboot Control Register */
#define SYSCTL_NMI_CTLSTAT                                 (HWREG32(0xE0043004)) /* NMI Control and Status Register */
#define SYSCTL_WDTRESET_CTL                                (HWREG32(0xE0043008)) /* Watchdog Reset Control Register */
#define SYSCTL_PERIHALT_CTL                                (HWREG32(0xE004300C)) /* Peripheral Halt Control Register */
#define SYSCTL_SRAM_SIZE                                   (HWREG32(0xE0043010)) /* SRAM Size Register */
#define SYSCTL_SRAM_BANKEN                                 (HWREG32(0xE0043014)) /* SRAM Bank Enable Register */
#define SYSCTL_SRAM_BANKRET                                (HWREG32(0xE0043018)) /* SRAM Bank Retention Control Register */
#define SYSCTL_FLASH_SIZE                                  (HWREG32(0xE0043020)) /* Flash Size Register */
#define SYSCTL_DIO_GLTFLT_CTL                              (HWREG32(0xE0043030)) /* Digital I/O Glitch Filter Control Register */
#define SYSCTL_SECDATA_UNLOCK                              (HWREG32(0xE0043040)) /* IP Protected Secure Zone Data Access Unlock Register */
#define SYSCTL_MASTER_UNLOCK                               (HWREG32(0xE0044000)) /* Master Unlock Register */
#define SYSCTL_BOOTOVER_REQ0                               (HWREG32(0xE0044004)) /* Boot Override Request Register */
#define SYSCTL_BOOTOVER_REQ1                               (HWREG32(0xE0044008)) /* Boot Override Request Register */
#define SYSCTL_BOOTOVER_ACK                                (HWREG32(0xE004400C)) /* Boot Override Acknowledge Register */
#define SYSCTL_RESET_REQ                                   (HWREG32(0xE0044010)) /* Reset Request Register */
#define SYSCTL_RESET_STATOVER                              (HWREG32(0xE0044014)) /* Reset Status and Override Register */
#define SYSCTL_SYSTEM_STAT                                 (HWREG32(0xE0044020)) /* System Status Register */

/* Register offsets from SYSCTL_BASE address */
#define OFS_SYSCTL_REBOOT_CTL                              (0x00000000)          /* Reboot Control Register */
#define OFS_SYSCTL_NMI_CTLSTAT                             (0x00000004)          /* NMI Control and Status Register */
#define OFS_SYSCTL_WDTRESET_CTL                            (0x00000008)          /* Watchdog Reset Control Register */
#define OFS_SYSCTL_PERIHALT_CTL                            (0x0000000c)          /* Peripheral Halt Control Register */
#define OFS_SYSCTL_SRAM_SIZE                               (0x00000010)          /* SRAM Size Register */
#define OFS_SYSCTL_SRAM_BANKEN                             (0x00000014)          /* SRAM Bank Enable Register */
#define OFS_SYSCTL_SRAM_BANKRET                            (0x00000018)          /* SRAM Bank Retention Control Register */
#define OFS_SYSCTL_FLASH_SIZE                              (0x00000020)          /* Flash Size Register */
#define OFS_SYSCTL_DIO_GLTFLT_CTL                          (0x00000030)          /* Digital I/O Glitch Filter Control Register */
#define OFS_SYSCTL_SECDATA_UNLOCK                          (0x00000040)          /* IP Protected Secure Zone Data Access Unlock Register */
#define OFS_SYSCTL_MASTER_UNLOCK                           (0x00001000)          /* Master Unlock Register */
#define OFS_SYSCTL_BOOTOVER_REQ0                           (0x00001004)          /* Boot Override Request Register */
#define OFS_SYSCTL_BOOTOVER_REQ1                           (0x00001008)          /* Boot Override Request Register */
#define OFS_SYSCTL_BOOTOVER_ACK                            (0x0000100c)          /* Boot Override Acknowledge Register */
#define OFS_SYSCTL_RESET_REQ                               (0x00001010)          /* Reset Request Register */
#define OFS_SYSCTL_RESET_STATOVER                          (0x00001014)          /* Reset Status and Override Register */
#define OFS_SYSCTL_SYSTEM_STAT                             (0x00001020)          /* System Status Register */


//*****************************************************************************
// SYSTICK Registers
//*****************************************************************************
#define SYSTICK_STCSR                                      (HWREG32(0xE000E010)) /* SysTick Control and Status Register */
#define SYSTICK_STRVR                                      (HWREG32(0xE000E014)) /* SysTick Reload Value Register */
#define SYSTICK_STCVR                                      (HWREG32(0xE000E018)) /* SysTick Current Value Register */
#define SYSTICK_STCR                                       (HWREG32(0xE000E01C)) /* SysTick Calibration Value Register */

/* Register offsets from SYSTICK_BASE address */
#define OFS_SYSTICK_STCSR                                  (0x00000010)          /* SysTick Control and Status Register */
#define OFS_SYSTICK_STRVR                                  (0x00000014)          /* SysTick Reload Value Register */
#define OFS_SYSTICK_STCVR                                  (0x00000018)          /* SysTick Current Value Register */
#define OFS_SYSTICK_STCR                                   (0x0000001C)          /* SysTick Calibration Value Register */


//*****************************************************************************
// TIMER32 Registers
//*****************************************************************************
#define TIMER32_LOAD1                                      (HWREG32(0x4000C000)) /* Timer 1 Load Register */
#define TIMER32_VALUE1                                     (HWREG32(0x4000C004)) /* Timer 1 Current Value Register */
#define TIMER32_CONTROL1                                   (HWREG32(0x4000C008)) /* Timer 1 Timer Control Register */
#define TIMER32_INTCLR1                                    (HWREG32(0x4000C00C)) /* Timer 1 Interrupt Clear Register */
#define TIMER32_RIS1                                       (HWREG32(0x4000C010)) /* Timer 1 Raw Interrupt Status Register */
#define TIMER32_MIS1                                       (HWREG32(0x4000C014)) /* Timer 1 Interrupt Status Register */
#define TIMER32_BGLOAD1                                    (HWREG32(0x4000C018)) /* Timer 1 Background Load Register */
#define TIMER32_LOAD2                                      (HWREG32(0x4000C020)) /* Timer 2 Load Register */
#define TIMER32_VALUE2                                     (HWREG32(0x4000C024)) /* Timer 2 Current Value Register */
#define TIMER32_CONTROL2                                   (HWREG32(0x4000C028)) /* Timer 2 Timer Control Register */
#define TIMER32_INTCLR2                                    (HWREG32(0x4000C02C)) /* Timer 2 Interrupt Clear Register */
#define TIMER32_RIS2                                       (HWREG32(0x4000C030)) /* Timer 2 Raw Interrupt Status Register */
#define TIMER32_MIS2                                       (HWREG32(0x4000C034)) /* Timer 2 Interrupt Status Register */
#define TIMER32_BGLOAD2                                    (HWREG32(0x4000C038)) /* Timer 2 Background Load Register */

/* Register offsets from TIMER32_BASE address */
#define OFS_TIMER32_LOAD1                                  (0x00000000)          /* Timer 1 Load Register */
#define OFS_TIMER32_VALUE1                                 (0x00000004)          /* Timer 1 Current Value Register */
#define OFS_TIMER32_CONTROL1                               (0x00000008)          /* Timer 1 Timer Control Register */
#define OFS_TIMER32_INTCLR1                                (0x0000000C)          /* Timer 1 Interrupt Clear Register */
#define OFS_TIMER32_RIS1                                   (0x00000010)          /* Timer 1 Raw Interrupt Status Register */
#define OFS_TIMER32_MIS1                                   (0x00000014)          /* Timer 1 Interrupt Status Register */
#define OFS_TIMER32_BGLOAD1                                (0x00000018)          /* Timer 1 Background Load Register */
#define OFS_TIMER32_LOAD2                                  (0x00000020)          /* Timer 2 Load Register */
#define OFS_TIMER32_VALUE2                                 (0x00000024)          /* Timer 2 Current Value Register */
#define OFS_TIMER32_CONTROL2                               (0x00000028)          /* Timer 2 Timer Control Register */
#define OFS_TIMER32_INTCLR2                                (0x0000002C)          /* Timer 2 Interrupt Clear Register */
#define OFS_TIMER32_RIS2                                   (0x00000030)          /* Timer 2 Raw Interrupt Status Register */
#define OFS_TIMER32_MIS2                                   (0x00000034)          /* Timer 2 Interrupt Status Register */
#define OFS_TIMER32_BGLOAD2                                (0x00000038)          /* Timer 2 Background Load Register */


//*****************************************************************************
// TIMER_A0 Registers
//*****************************************************************************
#define TA0CTL                                             (HWREG16(0x40000000)) /* TimerAx Control Register */
#define TA0CCTL0                                           (HWREG16(0x40000002)) /* Timer_A Capture/Compare Control Register */
#define TA0CCTL1                                           (HWREG16(0x40000004)) /* Timer_A Capture/Compare Control Register */
#define TA0CCTL2                                           (HWREG16(0x40000006)) /* Timer_A Capture/Compare Control Register */
#define TA0CCTL3                                           (HWREG16(0x40000008)) /* Timer_A Capture/Compare Control Register */
#define TA0CCTL4                                           (HWREG16(0x4000000A)) /* Timer_A Capture/Compare Control Register */
#define TA0CCTL5                                           (HWREG16(0x4000000C)) /* Timer_A Capture/Compare Control Register */
#define TA0CCTL6                                           (HWREG16(0x4000000E)) /* Timer_A Capture/Compare Control Register */
#define TA0R                                               (HWREG16(0x40000010)) /* TimerA register */
#define TA0CCR0                                            (HWREG16(0x40000012)) /* Timer_A Capture/Compare  Register */
#define TA0CCR1                                            (HWREG16(0x40000014)) /* Timer_A Capture/Compare  Register */
#define TA0CCR2                                            (HWREG16(0x40000016)) /* Timer_A Capture/Compare  Register */
#define TA0CCR3                                            (HWREG16(0x40000018)) /* Timer_A Capture/Compare  Register */
#define TA0CCR4                                            (HWREG16(0x4000001A)) /* Timer_A Capture/Compare  Register */
#define TA0CCR5                                            (HWREG16(0x4000001C)) /* Timer_A Capture/Compare  Register */
#define TA0CCR6                                            (HWREG16(0x4000001E)) /* Timer_A Capture/Compare  Register */
#define TA0EX0                                             (HWREG16(0x40000020)) /* TimerAx Expansion 0 Register */
#define TA0IV                                              (HWREG16(0x4000002E)) /* TimerAx Interrupt Vector Register */

/* Register offsets from TIMER_A0_BASE address */
#define OFS_TA0CTL                                         (0x0000)              /* TimerAx Control Register */
#define OFS_TA0CCTL0                                       (0x0002)              /* Timer_A Capture/Compare Control Register */
#define OFS_TA0CCTL1                                       (0x0004)              /* Timer_A Capture/Compare Control Register */
#define OFS_TA0CCTL2                                       (0x0006)              /* Timer_A Capture/Compare Control Register */
#define OFS_TA0CCTL3                                       (0x0008)              /* Timer_A Capture/Compare Control Register */
#define OFS_TA0CCTL4                                       (0x000A)              /* Timer_A Capture/Compare Control Register */
#define OFS_TA0CCTL5                                       (0x000C)              /* Timer_A Capture/Compare Control Register */
#define OFS_TA0CCTL6                                       (0x000E)              /* Timer_A Capture/Compare Control Register */
#define OFS_TA0R                                           (0x0010)              /* TimerA register */
#define OFS_TA0CCR0                                        (0x0012)              /* Timer_A Capture/Compare  Register */
#define OFS_TA0CCR1                                        (0x0014)              /* Timer_A Capture/Compare  Register */
#define OFS_TA0CCR2                                        (0x0016)              /* Timer_A Capture/Compare  Register */
#define OFS_TA0CCR3                                        (0x0018)              /* Timer_A Capture/Compare  Register */
#define OFS_TA0CCR4                                        (0x001A)              /* Timer_A Capture/Compare  Register */
#define OFS_TA0CCR5                                        (0x001C)              /* Timer_A Capture/Compare  Register */
#define OFS_TA0CCR6                                        (0x001E)              /* Timer_A Capture/Compare  Register */
#define OFS_TA0EX0                                         (0x0020)              /* TimerAx Expansion 0 Register */
#define OFS_TA0IV                                          (0x002e)              /* TimerAx Interrupt Vector Register */


//*****************************************************************************
// TIMER_A1 Registers
//*****************************************************************************
#define TA1CTL                                             (HWREG16(0x40000400)) /* TimerAx Control Register */
#define TA1CCTL0                                           (HWREG16(0x40000402)) /* Timer_A Capture/Compare Control Register */
#define TA1CCTL1                                           (HWREG16(0x40000404)) /* Timer_A Capture/Compare Control Register */
#define TA1CCTL2                                           (HWREG16(0x40000406)) /* Timer_A Capture/Compare Control Register */
#define TA1CCTL3                                           (HWREG16(0x40000408)) /* Timer_A Capture/Compare Control Register */
#define TA1CCTL4                                           (HWREG16(0x4000040A)) /* Timer_A Capture/Compare Control Register */
#define TA1CCTL5                                           (HWREG16(0x4000040C)) /* Timer_A Capture/Compare Control Register */
#define TA1CCTL6                                           (HWREG16(0x4000040E)) /* Timer_A Capture/Compare Control Register */
#define TA1R                                               (HWREG16(0x40000410)) /* TimerA register */
#define TA1CCR0                                            (HWREG16(0x40000412)) /* Timer_A Capture/Compare  Register */
#define TA1CCR1                                            (HWREG16(0x40000414)) /* Timer_A Capture/Compare  Register */
#define TA1CCR2                                            (HWREG16(0x40000416)) /* Timer_A Capture/Compare  Register */
#define TA1CCR3                                            (HWREG16(0x40000418)) /* Timer_A Capture/Compare  Register */
#define TA1CCR4                                            (HWREG16(0x4000041A)) /* Timer_A Capture/Compare  Register */
#define TA1CCR5                                            (HWREG16(0x4000041C)) /* Timer_A Capture/Compare  Register */
#define TA1CCR6                                            (HWREG16(0x4000041E)) /* Timer_A Capture/Compare  Register */
#define TA1EX0                                             (HWREG16(0x40000420)) /* TimerAx Expansion 0 Register */
#define TA1IV                                              (HWREG16(0x4000042E)) /* TimerAx Interrupt Vector Register */

/* Register offsets from TIMER_A1_BASE address */
#define OFS_TA1CTL                                         (0x0000)              /* TimerAx Control Register */
#define OFS_TA1CCTL0                                       (0x0002)              /* Timer_A Capture/Compare Control Register */
#define OFS_TA1CCTL1                                       (0x0004)              /* Timer_A Capture/Compare Control Register */
#define OFS_TA1CCTL2                                       (0x0006)              /* Timer_A Capture/Compare Control Register */
#define OFS_TA1CCTL3                                       (0x0008)              /* Timer_A Capture/Compare Control Register */
#define OFS_TA1CCTL4                                       (0x000A)              /* Timer_A Capture/Compare Control Register */
#define OFS_TA1CCTL5                                       (0x000C)              /* Timer_A Capture/Compare Control Register */
#define OFS_TA1CCTL6                                       (0x000E)              /* Timer_A Capture/Compare Control Register */
#define OFS_TA1R                                           (0x0010)              /* TimerA register */
#define OFS_TA1CCR0                                        (0x0012)              /* Timer_A Capture/Compare  Register */
#define OFS_TA1CCR1                                        (0x0014)              /* Timer_A Capture/Compare  Register */
#define OFS_TA1CCR2                                        (0x0016)              /* Timer_A Capture/Compare  Register */
#define OFS_TA1CCR3                                        (0x0018)              /* Timer_A Capture/Compare  Register */
#define OFS_TA1CCR4                                        (0x001A)              /* Timer_A Capture/Compare  Register */
#define OFS_TA1CCR5                                        (0x001C)              /* Timer_A Capture/Compare  Register */
#define OFS_TA1CCR6                                        (0x001E)              /* Timer_A Capture/Compare  Register */
#define OFS_TA1EX0                                         (0x0020)              /* TimerAx Expansion 0 Register */
#define OFS_TA1IV                                          (0x002e)              /* TimerAx Interrupt Vector Register */


//*****************************************************************************
// TIMER_A2 Registers
//*****************************************************************************
#define TA2CTL                                             (HWREG16(0x40000800)) /* TimerAx Control Register */
#define TA2CCTL0                                           (HWREG16(0x40000802)) /* Timer_A Capture/Compare Control Register */
#define TA2CCTL1                                           (HWREG16(0x40000804)) /* Timer_A Capture/Compare Control Register */
#define TA2CCTL2                                           (HWREG16(0x40000806)) /* Timer_A Capture/Compare Control Register */
#define TA2CCTL3                                           (HWREG16(0x40000808)) /* Timer_A Capture/Compare Control Register */
#define TA2CCTL4                                           (HWREG16(0x4000080A)) /* Timer_A Capture/Compare Control Register */
#define TA2CCTL5                                           (HWREG16(0x4000080C)) /* Timer_A Capture/Compare Control Register */
#define TA2CCTL6                                           (HWREG16(0x4000080E)) /* Timer_A Capture/Compare Control Register */
#define TA2R                                               (HWREG16(0x40000810)) /* TimerA register */
#define TA2CCR0                                            (HWREG16(0x40000812)) /* Timer_A Capture/Compare  Register */
#define TA2CCR1                                            (HWREG16(0x40000814)) /* Timer_A Capture/Compare  Register */
#define TA2CCR2                                            (HWREG16(0x40000816)) /* Timer_A Capture/Compare  Register */
#define TA2CCR3                                            (HWREG16(0x40000818)) /* Timer_A Capture/Compare  Register */
#define TA2CCR4                                            (HWREG16(0x4000081A)) /* Timer_A Capture/Compare  Register */
#define TA2CCR5                                            (HWREG16(0x4000081C)) /* Timer_A Capture/Compare  Register */
#define TA2CCR6                                            (HWREG16(0x4000081E)) /* Timer_A Capture/Compare  Register */
#define TA2EX0                                             (HWREG16(0x40000820)) /* TimerAx Expansion 0 Register */
#define TA2IV                                              (HWREG16(0x4000082E)) /* TimerAx Interrupt Vector Register */

/* Register offsets from TIMER_A2_BASE address */
#define OFS_TA2CTL                                         (0x0000)              /* TimerAx Control Register */
#define OFS_TA2CCTL0                                       (0x0002)              /* Timer_A Capture/Compare Control Register */
#define OFS_TA2CCTL1                                       (0x0004)              /* Timer_A Capture/Compare Control Register */
#define OFS_TA2CCTL2                                       (0x0006)              /* Timer_A Capture/Compare Control Register */
#define OFS_TA2CCTL3                                       (0x0008)              /* Timer_A Capture/Compare Control Register */
#define OFS_TA2CCTL4                                       (0x000A)              /* Timer_A Capture/Compare Control Register */
#define OFS_TA2CCTL5                                       (0x000C)              /* Timer_A Capture/Compare Control Register */
#define OFS_TA2CCTL6                                       (0x000E)              /* Timer_A Capture/Compare Control Register */
#define OFS_TA2R                                           (0x0010)              /* TimerA register */
#define OFS_TA2CCR0                                        (0x0012)              /* Timer_A Capture/Compare  Register */
#define OFS_TA2CCR1                                        (0x0014)              /* Timer_A Capture/Compare  Register */
#define OFS_TA2CCR2                                        (0x0016)              /* Timer_A Capture/Compare  Register */
#define OFS_TA2CCR3                                        (0x0018)              /* Timer_A Capture/Compare  Register */
#define OFS_TA2CCR4                                        (0x001A)              /* Timer_A Capture/Compare  Register */
#define OFS_TA2CCR5                                        (0x001C)              /* Timer_A Capture/Compare  Register */
#define OFS_TA2CCR6                                        (0x001E)              /* Timer_A Capture/Compare  Register */
#define OFS_TA2EX0                                         (0x0020)              /* TimerAx Expansion 0 Register */
#define OFS_TA2IV                                          (0x002e)              /* TimerAx Interrupt Vector Register */


//*****************************************************************************
// TIMER_A3 Registers
//*****************************************************************************
#define TA3CTL                                             (HWREG16(0x40000C00)) /* TimerAx Control Register */
#define TA3CCTL0                                           (HWREG16(0x40000C02)) /* Timer_A Capture/Compare Control Register */
#define TA3CCTL1                                           (HWREG16(0x40000C04)) /* Timer_A Capture/Compare Control Register */
#define TA3CCTL2                                           (HWREG16(0x40000C06)) /* Timer_A Capture/Compare Control Register */
#define TA3CCTL3                                           (HWREG16(0x40000C08)) /* Timer_A Capture/Compare Control Register */
#define TA3CCTL4                                           (HWREG16(0x40000C0A)) /* Timer_A Capture/Compare Control Register */
#define TA3CCTL5                                           (HWREG16(0x40000C0C)) /* Timer_A Capture/Compare Control Register */
#define TA3CCTL6                                           (HWREG16(0x40000C0E)) /* Timer_A Capture/Compare Control Register */
#define TA3R                                               (HWREG16(0x40000C10)) /* TimerA register */
#define TA3CCR0                                            (HWREG16(0x40000C12)) /* Timer_A Capture/Compare  Register */
#define TA3CCR1                                            (HWREG16(0x40000C14)) /* Timer_A Capture/Compare  Register */
#define TA3CCR2                                            (HWREG16(0x40000C16)) /* Timer_A Capture/Compare  Register */
#define TA3CCR3                                            (HWREG16(0x40000C18)) /* Timer_A Capture/Compare  Register */
#define TA3CCR4                                            (HWREG16(0x40000C1A)) /* Timer_A Capture/Compare  Register */
#define TA3CCR5                                            (HWREG16(0x40000C1C)) /* Timer_A Capture/Compare  Register */
#define TA3CCR6                                            (HWREG16(0x40000C1E)) /* Timer_A Capture/Compare  Register */
#define TA3EX0                                             (HWREG16(0x40000C20)) /* TimerAx Expansion 0 Register */
#define TA3IV                                              (HWREG16(0x40000C2E)) /* TimerAx Interrupt Vector Register */

/* Register offsets from TIMER_A3_BASE address */
#define OFS_TA3CTL                                         (0x0000)              /* TimerAx Control Register */
#define OFS_TA3CCTL0                                       (0x0002)              /* Timer_A Capture/Compare Control Register */
#define OFS_TA3CCTL1                                       (0x0004)              /* Timer_A Capture/Compare Control Register */
#define OFS_TA3CCTL2                                       (0x0006)              /* Timer_A Capture/Compare Control Register */
#define OFS_TA3CCTL3                                       (0x0008)              /* Timer_A Capture/Compare Control Register */
#define OFS_TA3CCTL4                                       (0x000A)              /* Timer_A Capture/Compare Control Register */
#define OFS_TA3CCTL5                                       (0x000C)              /* Timer_A Capture/Compare Control Register */
#define OFS_TA3CCTL6                                       (0x000E)              /* Timer_A Capture/Compare Control Register */
#define OFS_TA3R                                           (0x0010)              /* TimerA register */
#define OFS_TA3CCR0                                        (0x0012)              /* Timer_A Capture/Compare  Register */
#define OFS_TA3CCR1                                        (0x0014)              /* Timer_A Capture/Compare  Register */
#define OFS_TA3CCR2                                        (0x0016)              /* Timer_A Capture/Compare  Register */
#define OFS_TA3CCR3                                        (0x0018)              /* Timer_A Capture/Compare  Register */
#define OFS_TA3CCR4                                        (0x001A)              /* Timer_A Capture/Compare  Register */
#define OFS_TA3CCR5                                        (0x001C)              /* Timer_A Capture/Compare  Register */
#define OFS_TA3CCR6                                        (0x001E)              /* Timer_A Capture/Compare  Register */
#define OFS_TA3EX0                                         (0x0020)              /* TimerAx Expansion 0 Register */
#define OFS_TA3IV                                          (0x002e)              /* TimerAx Interrupt Vector Register */


//*****************************************************************************
// TLV Registers
//*****************************************************************************
#define TLV_TLV_CHECKSUM                                   (HWREG32(0x00201000)) /* TLV Checksum */
#define TLV_DEVICE_INFO_TAG                                (HWREG32(0x00201004)) /* Device Info Tag */
#define TLV_DEVICE_INFO_LEN                                (HWREG32(0x00201008)) /* Device Info Length */
#define TLV_DEVICE_ID                                      (HWREG32(0x0020100C)) /* Device ID */
#define TLV_HWREV                                          (HWREG32(0x00201010)) /* HW Revision */
#define TLV_BCREV                                          (HWREG32(0x00201014)) /* Boot Code Revision */
#define TLV_ROM_DRVLIB_REV                                 (HWREG32(0x00201018)) /* ROM Driver Library Revision */
#define TLV_DIE_REC_TAG                                    (HWREG32(0x0020101C)) /* Die Record Tag */
#define TLV_DIE_REC_LEN                                    (HWREG32(0x00201020)) /* Die Record Length */
#define TLV_DIE_XPOS                                       (HWREG32(0x00201024)) /* Die X-Position */
#define TLV_DIE_YPOS                                       (HWREG32(0x00201028)) /* Die Y-Position */
#define TLV_WAFER_ID                                       (HWREG32(0x0020102C)) /* Wafer ID */
#define TLV_LOT_ID                                         (HWREG32(0x00201030)) /* Lot ID */
#define TLV_RESERVED0                                      (HWREG32(0x00201034)) /* Reserved */
#define TLV_RESERVED1                                      (HWREG32(0x00201038)) /* Reserved */
#define TLV_RESERVED2                                      (HWREG32(0x0020103C)) /* Reserved */
#define TLV_TEST_RESULTS                                   (HWREG32(0x00201040)) /* Test Results */
#define TLV_CS_CAL_TAG                                     (HWREG32(0x00201044)) /* Clock System Calibration Tag */
#define TLV_CS_CAL_LEN                                     (HWREG32(0x00201048)) /* Clock System Calibration Length */
#define TLV_DCOIR_FCAL_RSEL04                              (HWREG32(0x0020104C)) /* DCO IR mode: Frequency calibration for DCORSEL 0 to 4 */
#define TLV_DCOIR_FCAL_RSEL5                               (HWREG32(0x00201050)) /* DCO IR mode: Frequency calibration for DCORSEL 5 */
#define TLV_DCOIR_MAXPOSTUNE_RSEL04                        (HWREG32(0x00201054)) /* DCO IR mode: Max Positive Tune for DCORSEL 0 to 4 */
#define TLV_DCOIR_MAXNEGTUNE_RSEL04                        (HWREG32(0x00201058)) /* DCO IR mode: Max Negative Tune for DCORSEL 0 to 4 */
#define TLV_DCOIR_MAXPOSTUNE_RSEL5                         (HWREG32(0x0020105C)) /* DCO IR mode: Max Positive Tune for DCORSEL 5 */
#define TLV_DCOIR_MAXNEGTUNE_RSEL5                         (HWREG32(0x00201060)) /* DCO IR mode: Max Negative Tune for DCORSEL 5 */
#define TLV_DCOIR_CONSTK_RSEL04                            (HWREG32(0x00201064)) /* DCO IR mode: DCO Constant (K) for DCORSEL 0 to 4 */
#define TLV_DCOIR_CONSTK_RSEL5                             (HWREG32(0x00201068)) /* DCO IR mode: DCO Constant (K) for DCORSEL 5 */
#define TLV_DCOER_FCAL_RSEL04                              (HWREG32(0x0020106C)) /* DCO ER mode: Frequency calibration for DCORSEL 0 to 4 */
#define TLV_DCOER_FCAL_RSEL5                               (HWREG32(0x00201070)) /* DCO ER mode: Frequency calibration for DCORSEL 5 */
#define TLV_DCOER_MAXPOSTUNE_RSEL04                        (HWREG32(0x00201074)) /* DCO ER mode: Max Positive Tune for DCORSEL 0 to 4 */
#define TLV_DCOER_MAXNEGTUNE_RSEL04                        (HWREG32(0x00201078)) /* DCO ER mode: Max Negative Tune for DCORSEL 0 to 4 */
#define TLV_DCOER_MAXPOSTUNE_RSEL5                         (HWREG32(0x0020107C)) /* DCO ER mode: Max Positive Tune for DCORSEL 5 */
#define TLV_DCOER_MAXNEGTUNE_RSEL5                         (HWREG32(0x00201080)) /* DCO ER mode: Max Negative Tune for DCORSEL 5 */
#define TLV_DCOER_CONSTK_RSEL04                            (HWREG32(0x00201084)) /* DCO ER mode: DCO Constant (K) for DCORSEL 0 to 4 */
#define TLV_DCOER_CONSTK_RSEL5                             (HWREG32(0x00201088)) /* DCO ER mode: DCO Constant (K) for DCORSEL 5 */
#define TLV_ADC14_CAL_TAG                                  (HWREG32(0x0020108C)) /* ADC14 Calibration Tag */
#define TLV_ADC14_CAL_LEN                                  (HWREG32(0x00201090)) /* ADC14 Calibration Length */
#define TLV_ADC14_GF_EXTREF30C                             (HWREG32(0x00201094)) /* ADC14 Gain Factor for External Reference 30°C */
#define TLV_ADC14_GF_EXTREF85C                             (HWREG32(0x00201098)) /* ADC14 Gain Factor for External Reference 85°C */
#define TLV_ADC14_GF_BUF_EXTREF30C                         (HWREG32(0x0020109C)) /* ADC14 Gain Factor for Buffered External Reference 30°C */
#define TLV_ADC14_GF_BUF_EXTREF85C                         (HWREG32(0x002010A0)) /* ADC14 Gain Factor for Buffered External Reference 85°C */
#define TLV_ADC14_GF_BUF1P2V_INTREF30C_REFOUT0             (HWREG32(0x002010A4)) /* ADC14 Gain Factor for Buffered 1.2V Internal Reference 30°C (REFOUT = 0) */
#define TLV_ADC14_GF_BUF1P2V_INTREF85C_REFOUT0             (HWREG32(0x002010A8)) /* ADC14 Gain Factor for Buffered 1.2V Internal Reference 85°C (REFOUT = 0) */
#define TLV_ADC14_GF_BUF1P2V_INTREF30C_REFOUT1             (HWREG32(0x002010AC)) /* ADC14 Gain Factor for Buffered 1.2V Internal Reference 30°C (REFOUT = 1) */
#define TLV_ADC14_GF_BUF1P2V_INTREF85C_REFOUT1             (HWREG32(0x002010B0)) /* ADC14 Gain Factor for Buffered 1.2V Internal Reference 85°C (REFOUT = 1) */
#define TLV_ADC14_GF_BUF1P45V_INTREF30C_REFOUT0            (HWREG32(0x002010B4)) /* ADC14 Gain Factor for Buffered 1.45V Internal Reference 30°C (REFOUT = 0) */
#define TLV_ADC14_GF_BUF1P45V_INTREF85C_REFOUT0            (HWREG32(0x002010B8)) /* ADC14 Gain Factor for Buffered 1.45V Internal Reference 85°C (REFOUT = 0) */
#define TLV_ADC14_GF_BUF1P45V_INTREF30C_REFOUT1            (HWREG32(0x002010BC)) /* ADC14 Gain Factor for Buffered 1.45V Internal Reference 30°C (REFOUT = 1) */
#define TLV_ADC14_GF_BUF1P45V_INTREF85C_REFOUT1            (HWREG32(0x002010C0)) /* ADC14 Gain Factor for Buffered 1.45V Internal Reference 85°C (REFOUT = 1) */
#define TLV_ADC14_GF_BUF2P5V_INTREF30C_REFOUT0             (HWREG32(0x002010C4)) /* ADC14 Gain Factor for Buffered 2.5V Internal Reference 30°C (REFOUT = 0) */
#define TLV_ADC14_GF_BUF2P5V_INTREF85C_REFOUT0             (HWREG32(0x002010C8)) /* ADC14 Gain Factor for Buffered 2.5V Internal Reference 85°C (REFOUT = 0) */
#define TLV_ADC14_GF_BUF2P5V_INTREF30C_REFOUT1             (HWREG32(0x002010CC)) /* ADC14 Gain Factor for Buffered 2.5V Internal Reference 30°C (REFOUT = 1) */
#define TLV_ADC14_GF_BUF2P5V_INTREF85C_REFOUT1             (HWREG32(0x002010D0)) /* ADC14 Gain Factor for Buffered 2.5V Internal Reference 85°C (REFOUT = 1) */
#define TLV_ADC14_OFFSET_VRSEL_1                           (HWREG32(0x002010D4)) /* ADC14 Offset (ADC14VRSEL = 1h) */
#define TLV_ADC14_OFFSET_VRSEL_E                           (HWREG32(0x002010D8)) /* ADC14 Offset (ADC14VRSEL = Eh) */
#define TLV_ADC14_REF1P2V_TS30C                            (HWREG32(0x002010DC)) /* ADC14 1.2V Reference Temp. Sensor 30°C */
#define TLV_ADC14_REF1P2V_TS85C                            (HWREG32(0x002010E0)) /* ADC14 1.2V Reference Temp. Sensor 85°C */
#define TLV_ADC14_REF1P45V_TS30C                           (HWREG32(0x002010E4)) /* ADC14 1.45V Reference Temp. Sensor 30°C */
#define TLV_ADC14_REF1P45V_TS85C                           (HWREG32(0x002010E8)) /* ADC14 1.45V Reference Temp. Sensor 85°C */
#define TLV_ADC14_REF2P5V_TS30C                            (HWREG32(0x002010EC)) /* ADC14 2.5V Reference Temp. Sensor 30°C */
#define TLV_ADC14_REF2P5V_TS85C                            (HWREG32(0x002010F0)) /* ADC14 2.5V Reference Temp. Sensor 85°C */
#define TLV_REF_CAL_TAG                                    (HWREG32(0x002010F4)) /* REF Calibration Tag */
#define TLV_REF_CAL_LEN                                    (HWREG32(0x002010F8)) /* REF Calibration Length */
#define TLV_REF_1P2V                                       (HWREG32(0x002010FC)) /* REF 1.2V Reference */
#define TLV_REF_1P45V                                      (HWREG32(0x00201100)) /* REF 1.45V Reference */
#define TLV_REF_2P5V                                       (HWREG32(0x00201104)) /* REF 2.5V Reference */
#define TLV_RANDOM_NUM_TAG                                 (HWREG32(0x00201108)) /* 128-bit Random Number Tag */
#define TLV_RANDOM_NUM_LEN                                 (HWREG32(0x0020110C)) /* 128-bit Random Number Length */
#define TLV_RANDOM_NUM_1                                   (HWREG32(0x00201110)) /* 32-bit Random Number 1 */
#define TLV_RANDOM_NUM_2                                   (HWREG32(0x00201114)) /* 32-bit Random Number 2 */
#define TLV_RANDOM_NUM_3                                   (HWREG32(0x00201118)) /* 32-bit Random Number 3 */
#define TLV_RANDOM_NUM_4                                   (HWREG32(0x0020111C)) /* 32-bit Random Number 4 */
#define TLV_BSL_CFG_TAG                                    (HWREG32(0x00201120)) /* BSL Configuration Tag */
#define TLV_BSL_CFG_LEN                                    (HWREG32(0x00201124)) /* BSL Configuration Length */
#define TLV_BSL_PERIPHIF_SEL                               (HWREG32(0x00201128)) /* BSL Peripheral Interface Selection */
#define TLV_BSL_PORTIF_CFG_UART                            (HWREG32(0x0020112C)) /* BSL Port Interface Configuration for UART */
#define TLV_BSL_PORTIF_CFG_SPI                             (HWREG32(0x00201130)) /* BSL Port Interface Configuration for SPI */
#define TLV_BSL_PORTIF_CFG_I2C                             (HWREG32(0x00201134)) /* BSL Port Interface Configuration for I2C */
#define TLV_TLV_END                                        (HWREG32(0x00201138)) /* TLV End Word */

/* Register offsets from TLV_BASE address */
#define OFS_TLV_TLV_CHECKSUM                               (0x00000000)          /* TLV Checksum */
#define OFS_TLV_DEVICE_INFO_TAG                            (0x00000004)          /* Device Info Tag */
#define OFS_TLV_DEVICE_INFO_LEN                            (0x00000008)          /* Device Info Length */
#define OFS_TLV_DEVICE_ID                                  (0x0000000C)          /* Device ID */
#define OFS_TLV_HWREV                                      (0x00000010)          /* HW Revision */
#define OFS_TLV_BCREV                                      (0x00000014)          /* Boot Code Revision */
#define OFS_TLV_ROM_DRVLIB_REV                             (0x00000018)          /* ROM Driver Library Revision */
#define OFS_TLV_DIE_REC_TAG                                (0x0000001C)          /* Die Record Tag */
#define OFS_TLV_DIE_REC_LEN                                (0x00000020)          /* Die Record Length */
#define OFS_TLV_DIE_XPOS                                   (0x00000024)          /* Die X-Position */
#define OFS_TLV_DIE_YPOS                                   (0x00000028)          /* Die Y-Position */
#define OFS_TLV_WAFER_ID                                   (0x0000002C)          /* Wafer ID */
#define OFS_TLV_LOT_ID                                     (0x00000030)          /* Lot ID */
#define OFS_TLV_RESERVED0                                  (0x00000034)          /* Reserved */
#define OFS_TLV_RESERVED1                                  (0x00000038)          /* Reserved */
#define OFS_TLV_RESERVED2                                  (0x0000003c)          /* Reserved */
#define OFS_TLV_TEST_RESULTS                               (0x00000040)          /* Test Results */
#define OFS_TLV_CS_CAL_TAG                                 (0x00000044)          /* Clock System Calibration Tag */
#define OFS_TLV_CS_CAL_LEN                                 (0x00000048)          /* Clock System Calibration Length */
#define OFS_TLV_DCOIR_FCAL_RSEL04                          (0x0000004c)          /* DCO IR mode: Frequency calibration for DCORSEL 0 to 4 */
#define OFS_TLV_DCOIR_FCAL_RSEL5                           (0x00000050)          /* DCO IR mode: Frequency calibration for DCORSEL 5 */
#define OFS_TLV_DCOIR_MAXPOSTUNE_RSEL04                    (0x00000054)          /* DCO IR mode: Max Positive Tune for DCORSEL 0 to 4 */
#define OFS_TLV_DCOIR_MAXNEGTUNE_RSEL04                    (0x00000058)          /* DCO IR mode: Max Negative Tune for DCORSEL 0 to 4 */
#define OFS_TLV_DCOIR_MAXPOSTUNE_RSEL5                     (0x0000005c)          /* DCO IR mode: Max Positive Tune for DCORSEL 5 */
#define OFS_TLV_DCOIR_MAXNEGTUNE_RSEL5                     (0x00000060)          /* DCO IR mode: Max Negative Tune for DCORSEL 5 */
#define OFS_TLV_DCOIR_CONSTK_RSEL04                        (0x00000064)          /* DCO IR mode: DCO Constant (K) for DCORSEL 0 to 4 */
#define OFS_TLV_DCOIR_CONSTK_RSEL5                         (0x00000068)          /* DCO IR mode: DCO Constant (K) for DCORSEL 5 */
#define OFS_TLV_DCOER_FCAL_RSEL04                          (0x0000006c)          /* DCO ER mode: Frequency calibration for DCORSEL 0 to 4 */
#define OFS_TLV_DCOER_FCAL_RSEL5                           (0x00000070)          /* DCO ER mode: Frequency calibration for DCORSEL 5 */
#define OFS_TLV_DCOER_MAXPOSTUNE_RSEL04                    (0x00000074)          /* DCO ER mode: Max Positive Tune for DCORSEL 0 to 4 */
#define OFS_TLV_DCOER_MAXNEGTUNE_RSEL04                    (0x00000078)          /* DCO ER mode: Max Negative Tune for DCORSEL 0 to 4 */
#define OFS_TLV_DCOER_MAXPOSTUNE_RSEL5                     (0x0000007c)          /* DCO ER mode: Max Positive Tune for DCORSEL 5 */
#define OFS_TLV_DCOER_MAXNEGTUNE_RSEL5                     (0x00000080)          /* DCO ER mode: Max Negative Tune for DCORSEL 5 */
#define OFS_TLV_DCOER_CONSTK_RSEL04                        (0x00000084)          /* DCO ER mode: DCO Constant (K) for DCORSEL 0 to 4 */
#define OFS_TLV_DCOER_CONSTK_RSEL5                         (0x00000088)          /* DCO ER mode: DCO Constant (K) for DCORSEL 5 */
#define OFS_TLV_ADC14_CAL_TAG                              (0x0000008C)          /* ADC14 Calibration Tag */
#define OFS_TLV_ADC14_CAL_LEN                              (0x00000090)          /* ADC14 Calibration Length */
#define OFS_TLV_ADC14_GF_EXTREF30C                         (0x00000094)          /* ADC14 Gain Factor for External Reference 30°C */
#define OFS_TLV_ADC14_GF_EXTREF85C                         (0x00000098)          /* ADC14 Gain Factor for External Reference 85°C */
#define OFS_TLV_ADC14_GF_BUF_EXTREF30C                     (0x0000009C)          /* ADC14 Gain Factor for Buffered External Reference 30°C */
#define OFS_TLV_ADC14_GF_BUF_EXTREF85C                     (0x000000A0)          /* ADC14 Gain Factor for Buffered External Reference 85°C */
#define OFS_TLV_ADC14_GF_BUF1P2V_INTREF30C_REFOUT0         (0x000000A4)          /* ADC14 Gain Factor for Buffered 1.2V Internal Reference 30°C (REFOUT = 0) */
#define OFS_TLV_ADC14_GF_BUF1P2V_INTREF85C_REFOUT0         (0x000000A8)          /* ADC14 Gain Factor for Buffered 1.2V Internal Reference 85°C (REFOUT = 0) */
#define OFS_TLV_ADC14_GF_BUF1P2V_INTREF30C_REFOUT1         (0x000000AC)          /* ADC14 Gain Factor for Buffered 1.2V Internal Reference 30°C (REFOUT = 1) */
#define OFS_TLV_ADC14_GF_BUF1P2V_INTREF85C_REFOUT1         (0x000000B0)          /* ADC14 Gain Factor for Buffered 1.2V Internal Reference 85°C (REFOUT = 1) */
#define OFS_TLV_ADC14_GF_BUF1P45V_INTREF30C_REFOUT0        (0x000000B4)          /* ADC14 Gain Factor for Buffered 1.45V Internal Reference 30°C (REFOUT = 0) */
#define OFS_TLV_ADC14_GF_BUF1P45V_INTREF85C_REFOUT0        (0x000000B8)          /* ADC14 Gain Factor for Buffered 1.45V Internal Reference 85°C (REFOUT = 0) */
#define OFS_TLV_ADC14_GF_BUF1P45V_INTREF30C_REFOUT1        (0x000000BC)          /* ADC14 Gain Factor for Buffered 1.45V Internal Reference 30°C (REFOUT = 1) */
#define OFS_TLV_ADC14_GF_BUF1P45V_INTREF85C_REFOUT1        (0x000000C0)          /* ADC14 Gain Factor for Buffered 1.45V Internal Reference 85°C (REFOUT = 1) */
#define OFS_TLV_ADC14_GF_BUF2P5V_INTREF30C_REFOUT0         (0x000000C4)          /* ADC14 Gain Factor for Buffered 2.5V Internal Reference 30°C (REFOUT = 0) */
#define OFS_TLV_ADC14_GF_BUF2P5V_INTREF85C_REFOUT0         (0x000000C8)          /* ADC14 Gain Factor for Buffered 2.5V Internal Reference 85°C (REFOUT = 0) */
#define OFS_TLV_ADC14_GF_BUF2P5V_INTREF30C_REFOUT1         (0x000000CC)          /* ADC14 Gain Factor for Buffered 2.5V Internal Reference 30°C (REFOUT = 1) */
#define OFS_TLV_ADC14_GF_BUF2P5V_INTREF85C_REFOUT1         (0x000000D0)          /* ADC14 Gain Factor for Buffered 2.5V Internal Reference 85°C (REFOUT = 1) */
#define OFS_TLV_ADC14_OFFSET_VRSEL_1                       (0x000000D4)          /* ADC14 Offset (ADC14VRSEL = 1h) */
#define OFS_TLV_ADC14_OFFSET_VRSEL_E                       (0x000000D8)          /* ADC14 Offset (ADC14VRSEL = Eh) */
#define OFS_TLV_ADC14_REF1P2V_TS30C                        (0x000000DC)          /* ADC14 1.2V Reference Temp. Sensor 30°C */
#define OFS_TLV_ADC14_REF1P2V_TS85C                        (0x000000E0)          /* ADC14 1.2V Reference Temp. Sensor 85°C */
#define OFS_TLV_ADC14_REF1P45V_TS30C                       (0x000000E4)          /* ADC14 1.45V Reference Temp. Sensor 30°C */
#define OFS_TLV_ADC14_REF1P45V_TS85C                       (0x000000E8)          /* ADC14 1.45V Reference Temp. Sensor 85°C */
#define OFS_TLV_ADC14_REF2P5V_TS30C                        (0x000000EC)          /* ADC14 2.5V Reference Temp. Sensor 30°C */
#define OFS_TLV_ADC14_REF2P5V_TS85C                        (0x000000F0)          /* ADC14 2.5V Reference Temp. Sensor 85°C */
#define OFS_TLV_REF_CAL_TAG                                (0x000000F4)          /* REF Calibration Tag */
#define OFS_TLV_REF_CAL_LEN                                (0x000000F8)          /* REF Calibration Length */
#define OFS_TLV_REF_1P2V                                   (0x000000FC)          /* REF 1.2V Reference */
#define OFS_TLV_REF_1P45V                                  (0x00000100)          /* REF 1.45V Reference */
#define OFS_TLV_REF_2P5V                                   (0x00000104)          /* REF 2.5V Reference */
#define OFS_TLV_RANDOM_NUM_TAG                             (0x00000108)          /* 128-bit Random Number Tag */
#define OFS_TLV_RANDOM_NUM_LEN                             (0x0000010C)          /* 128-bit Random Number Length */
#define OFS_TLV_RANDOM_NUM_1                               (0x00000110)          /* 32-bit Random Number 1 */
#define OFS_TLV_RANDOM_NUM_2                               (0x00000114)          /* 32-bit Random Number 2 */
#define OFS_TLV_RANDOM_NUM_3                               (0x00000118)          /* 32-bit Random Number 3 */
#define OFS_TLV_RANDOM_NUM_4                               (0x0000011C)          /* 32-bit Random Number 4 */
#define OFS_TLV_BSL_CFG_TAG                                (0x00000120)          /* BSL Configuration Tag */
#define OFS_TLV_BSL_CFG_LEN                                (0x00000124)          /* BSL Configuration Length */
#define OFS_TLV_BSL_PERIPHIF_SEL                           (0x00000128)          /* BSL Peripheral Interface Selection */
#define OFS_TLV_BSL_PORTIF_CFG_UART                        (0x0000012C)          /* BSL Port Interface Configuration for UART */
#define OFS_TLV_BSL_PORTIF_CFG_SPI                         (0x00000130)          /* BSL Port Interface Configuration for SPI */
#define OFS_TLV_BSL_PORTIF_CFG_I2C                         (0x00000134)          /* BSL Port Interface Configuration for I2C */
#define OFS_TLV_TLV_END                                    (0x00000138)          /* TLV End Word */


//*****************************************************************************
// WDT_A Registers
//*****************************************************************************
#define WDTCTL                                             (HWREG16(0x4000480C)) /* Watchdog Timer Control Register */

/* Register offsets from WDT_A_BASE address */
#define OFS_WDTCTL                                         (0x000c)              /* Watchdog Timer Control Register */


//*****************************************************************************
// CMSIS-format peripheral registers
//*****************************************************************************

//*****************************************************************************
// ADC14 Registers
//*****************************************************************************
typedef struct {
  union {    /* ADC14CTL0 Register */
    __IO uint32_t r;
    struct { /* ADC14CTL0 Bits */
      __IO uint32_t bSC                 	:	1;  /* ADC14 start conversion */
      __IO uint32_t bENC                	:	1;  /* ADC14 enable conversion */
      __I  uint32_t bRESERVED0          	:	2;  /* Reserved */
      __IO uint32_t bON                 	:	1;  /* ADC14 on */
      __I  uint32_t bRESERVED1          	:	2;  /* Reserved */
      __IO uint32_t bMSC                	:	1;  /* ADC14 multiple sample and conversion */
      __IO uint32_t bSHT0               	:	4;  /* ADC14 sample-and-hold time */
      __IO uint32_t bSHT1               	:	4;  /* ADC14 sample-and-hold time */
      __I  uint32_t bBUSY               	:	1;  /* ADC14 busy */
      __IO uint32_t bCONSEQ             	:	2;  /* ADC14 conversion sequence mode select */
      __IO uint32_t bSSEL               	:	3;  /* ADC14 clock source select */
      __IO uint32_t bDIV                	:	3;  /* ADC14 clock divider */
      __IO uint32_t bISSH               	:	1;  /* ADC14 invert signal sample-and-hold */
      __IO uint32_t bSHP                	:	1;  /* ADC14 sample-and-hold pulse-mode select */
      __IO uint32_t bSHS                	:	3;  /* ADC14 sample-and-hold source select */
      __IO uint32_t bPDIV               	:	2;  /* ADC14 predivider */
    } b;
  } rCTL0;
  union {    /* ADC14CTL1 Register */
    __IO uint32_t r;
    struct { /* ADC14CTL1 Bits */
      __IO uint32_t bPWRMD              	:	2;  /* ADC14 power modes */
      __IO uint32_t bREFBURST           	:	1;  /* ADC14 reference buffer burst */
      __IO uint32_t bDF                 	:	1;  /* ADC14 data read-back format */
      __IO uint32_t bRES                	:	2;  /* ADC14 resolution */
      __I  uint32_t bRESERVED0          	:	10;  /* Reserved */
      __IO uint32_t bCSTARTADD          	:	5;  /* ADC14 conversion start address */
      __I  uint32_t bRESERVED1          	:	1;  /* Reserved */
      __IO uint32_t bBATMAP             	:	1;  /* Controls 1/2 AVCC ADC input channel selection */
      __IO uint32_t bTCMAP              	:	1;  /* Controls temperature sensor ADC input channel selection */
      __IO uint32_t bCH0MAP             	:	1;  /* Controls internal channel 0 selection to ADC input channel MAX-2 */
      __IO uint32_t bCH1MAP             	:	1;  /* Controls internal channel 1 selection to ADC input channel MAX-3 */
      __IO uint32_t bCH2MAP             	:	1;  /* Controls internal channel 2 selection to ADC input channel MAX-4 */
      __IO uint32_t bCH3MAP             	:	1;  /* Controls internal channel 3 selection to ADC input channel MAX-5 */
      __I  uint32_t bRESERVED2          	:	4;  /* Reserved */
    } b;
  } rCTL1;
  union {    /* ADC14LO0 Register */
    __IO uint32_t r;
    struct { /* ADC14LO0 Bits */
      __IO uint32_t bLO0                	:	16;  /* Low threshold 0 */
      __I  uint32_t bRESERVED0          	:	16;  /* Reserved */
    } b;
  } rLO0;
  union {    /* ADC14HI0 Register */
    __IO uint32_t r;
    struct { /* ADC14HI0 Bits */
      __IO uint32_t bHI0                	:	16;  /* High threshold 0 */
      __I  uint32_t bRESERVED0          	:	16;  /* Reserved */
    } b;
  } rHI0;
  union {    /* ADC14LO1 Register */
    __IO uint32_t r;
    struct { /* ADC14LO1 Bits */
      __IO uint32_t bLO1                	:	16;  /* Low threshold 1 */
      __I  uint32_t bRESERVED0          	:	16;  /* Reserved */
    } b;
  } rLO1;
  union {    /* ADC14HI1 Register */
    __IO uint32_t r;
    struct { /* ADC14HI1 Bits */
      __IO uint32_t bHI1                	:	16;  /* High threshold 1 */
      __I  uint32_t bRESERVED0          	:	16;  /* Reserved */
    } b;
  } rHI1;
  union {    /* ADC14MCTL0 Register */
    __IO uint32_t r;
    struct { /* ADC14MCTL0 Bits */
      __IO uint32_t bINCH               	:	5;  /* Input channel select */
      __I  uint32_t bRESERVED0          	:	2;  /* Reserved */
      __IO uint32_t bEOS                	:	1;  /* End of sequence */
      __IO uint32_t bVRSEL              	:	4;  /* Selects combinations of V(R+) and V(R-) sources */
      __I  uint32_t bRESERVED1          	:	1;  /* Reserved */
      __IO uint32_t bDIF                	:	1;  /* Differential mode */
      __IO uint32_t bWINC               	:	1;  /* Comparator window enable */
      __IO uint32_t bWINCTH             	:	1;  /* Window comparator threshold register selection */
      __I  uint32_t bRESERVED2          	:	16;  /* Reserved */
    } b;
  } rMCTL0;
  union {    /* ADC14MCTL1 Register */
    __IO uint32_t r;
    struct { /* ADC14MCTL1 Bits */
      __IO uint32_t bINCH               	:	5;  /* Input channel select */
      __I  uint32_t bRESERVED0          	:	2;  /* Reserved */
      __IO uint32_t bEOS                	:	1;  /* End of sequence */
      __IO uint32_t bVRSEL              	:	4;  /* Selects combinations of V(R+) and V(R-) sources */
      __I  uint32_t bRESERVED1          	:	1;  /* Reserved */
      __IO uint32_t bDIF                	:	1;  /* Differential mode */
      __IO uint32_t bWINC               	:	1;  /* Comparator window enable */
      __IO uint32_t bWINCTH             	:	1;  /* Window comparator threshold register selection */
      __I  uint32_t bRESERVED2          	:	16;  /* Reserved */
    } b;
  } rMCTL1;
  union {    /* ADC14MCTL2 Register */
    __IO uint32_t r;
    struct { /* ADC14MCTL2 Bits */
      __IO uint32_t bINCH               	:	5;  /* Input channel select */
      __I  uint32_t bRESERVED0          	:	2;  /* Reserved */
      __IO uint32_t bEOS                	:	1;  /* End of sequence */
      __IO uint32_t bVRSEL              	:	4;  /* Selects combinations of V(R+) and V(R-) sources */
      __I  uint32_t bRESERVED1          	:	1;  /* Reserved */
      __IO uint32_t bDIF                	:	1;  /* Differential mode */
      __IO uint32_t bWINC               	:	1;  /* Comparator window enable */
      __IO uint32_t bWINCTH             	:	1;  /* Window comparator threshold register selection */
      __I  uint32_t bRESERVED2          	:	16;  /* Reserved */
    } b;
  } rMCTL2;
  union {    /* ADC14MCTL3 Register */
    __IO uint32_t r;
    struct { /* ADC14MCTL3 Bits */
      __IO uint32_t bINCH               	:	5;  /* Input channel select */
      __I  uint32_t bRESERVED0          	:	2;  /* Reserved */
      __IO uint32_t bEOS                	:	1;  /* End of sequence */
      __IO uint32_t bVRSEL              	:	4;  /* Selects combinations of V(R+) and V(R-) sources */
      __I  uint32_t bRESERVED1          	:	1;  /* Reserved */
      __IO uint32_t bDIF                	:	1;  /* Differential mode */
      __IO uint32_t bWINC               	:	1;  /* Comparator window enable */
      __IO uint32_t bWINCTH             	:	1;  /* Window comparator threshold register selection */
      __I  uint32_t bRESERVED2          	:	16;  /* Reserved */
    } b;
  } rMCTL3;
  union {    /* ADC14MCTL4 Register */
    __IO uint32_t r;
    struct { /* ADC14MCTL4 Bits */
      __IO uint32_t bINCH               	:	5;  /* Input channel select */
      __I  uint32_t bRESERVED0          	:	2;  /* Reserved */
      __IO uint32_t bEOS                	:	1;  /* End of sequence */
      __IO uint32_t bVRSEL              	:	4;  /* Selects combinations of V(R+) and V(R-) sources */
      __I  uint32_t bRESERVED1          	:	1;  /* Reserved */
      __IO uint32_t bDIF                	:	1;  /* Differential mode */
      __IO uint32_t bWINC               	:	1;  /* Comparator window enable */
      __IO uint32_t bWINCTH             	:	1;  /* Window comparator threshold register selection */
      __I  uint32_t bRESERVED2          	:	16;  /* Reserved */
    } b;
  } rMCTL4;
  union {    /* ADC14MCTL5 Register */
    __IO uint32_t r;
    struct { /* ADC14MCTL5 Bits */
      __IO uint32_t bINCH               	:	5;  /* Input channel select */
      __I  uint32_t bRESERVED0          	:	2;  /* Reserved */
      __IO uint32_t bEOS                	:	1;  /* End of sequence */
      __IO uint32_t bVRSEL              	:	4;  /* Selects combinations of V(R+) and V(R-) sources */
      __I  uint32_t bRESERVED1          	:	1;  /* Reserved */
      __IO uint32_t bDIF                	:	1;  /* Differential mode */
      __IO uint32_t bWINC               	:	1;  /* Comparator window enable */
      __IO uint32_t bWINCTH             	:	1;  /* Window comparator threshold register selection */
      __I  uint32_t bRESERVED2          	:	16;  /* Reserved */
    } b;
  } rMCTL5;
  union {    /* ADC14MCTL6 Register */
    __IO uint32_t r;
    struct { /* ADC14MCTL6 Bits */
      __IO uint32_t bINCH               	:	5;  /* Input channel select */
      __I  uint32_t bRESERVED0          	:	2;  /* Reserved */
      __IO uint32_t bEOS                	:	1;  /* End of sequence */
      __IO uint32_t bVRSEL              	:	4;  /* Selects combinations of V(R+) and V(R-) sources */
      __I  uint32_t bRESERVED1          	:	1;  /* Reserved */
      __IO uint32_t bDIF                	:	1;  /* Differential mode */
      __IO uint32_t bWINC               	:	1;  /* Comparator window enable */
      __IO uint32_t bWINCTH             	:	1;  /* Window comparator threshold register selection */
      __I  uint32_t bRESERVED2          	:	16;  /* Reserved */
    } b;
  } rMCTL6;
  union {    /* ADC14MCTL7 Register */
    __IO uint32_t r;
    struct { /* ADC14MCTL7 Bits */
      __IO uint32_t bINCH               	:	5;  /* Input channel select */
      __I  uint32_t bRESERVED0          	:	2;  /* Reserved */
      __IO uint32_t bEOS                	:	1;  /* End of sequence */
      __IO uint32_t bVRSEL              	:	4;  /* Selects combinations of V(R+) and V(R-) sources */
      __I  uint32_t bRESERVED1          	:	1;  /* Reserved */
      __IO uint32_t bDIF                	:	1;  /* Differential mode */
      __IO uint32_t bWINC               	:	1;  /* Comparator window enable */
      __IO uint32_t bWINCTH             	:	1;  /* Window comparator threshold register selection */
      __I  uint32_t bRESERVED2          	:	16;  /* Reserved */
    } b;
  } rMCTL7;
  union {    /* ADC14MCTL8 Register */
    __IO uint32_t r;
    struct { /* ADC14MCTL8 Bits */
      __IO uint32_t bINCH               	:	5;  /* Input channel select */
      __I  uint32_t bRESERVED0          	:	2;  /* Reserved */
      __IO uint32_t bEOS                	:	1;  /* End of sequence */
      __IO uint32_t bVRSEL              	:	4;  /* Selects combinations of V(R+) and V(R-) sources */
      __I  uint32_t bRESERVED1          	:	1;  /* Reserved */
      __IO uint32_t bDIF                	:	1;  /* Differential mode */
      __IO uint32_t bWINC               	:	1;  /* Comparator window enable */
      __IO uint32_t bWINCTH             	:	1;  /* Window comparator threshold register selection */
      __I  uint32_t bRESERVED2          	:	16;  /* Reserved */
    } b;
  } rMCTL8;
  union {    /* ADC14MCTL9 Register */
    __IO uint32_t r;
    struct { /* ADC14MCTL9 Bits */
      __IO uint32_t bINCH               	:	5;  /* Input channel select */
      __I  uint32_t bRESERVED0          	:	2;  /* Reserved */
      __IO uint32_t bEOS                	:	1;  /* End of sequence */
      __IO uint32_t bVRSEL              	:	4;  /* Selects combinations of V(R+) and V(R-) sources */
      __I  uint32_t bRESERVED1          	:	1;  /* Reserved */
      __IO uint32_t bDIF                	:	1;  /* Differential mode */
      __IO uint32_t bWINC               	:	1;  /* Comparator window enable */
      __IO uint32_t bWINCTH             	:	1;  /* Window comparator threshold register selection */
      __I  uint32_t bRESERVED2          	:	16;  /* Reserved */
    } b;
  } rMCTL9;
  union {    /* ADC14MCTL10 Register */
    __IO uint32_t r;
    struct { /* ADC14MCTL10 Bits */
      __IO uint32_t bINCH               	:	5;  /* Input channel select */
      __I  uint32_t bRESERVED0          	:	2;  /* Reserved */
      __IO uint32_t bEOS                	:	1;  /* End of sequence */
      __IO uint32_t bVRSEL              	:	4;  /* Selects combinations of V(R+) and V(R-) sources */
      __I  uint32_t bRESERVED1          	:	1;  /* Reserved */
      __IO uint32_t bDIF                	:	1;  /* Differential mode */
      __IO uint32_t bWINC               	:	1;  /* Comparator window enable */
      __IO uint32_t bWINCTH             	:	1;  /* Window comparator threshold register selection */
      __I  uint32_t bRESERVED2          	:	16;  /* Reserved */
    } b;
  } rMCTL10;
  union {    /* ADC14MCTL11 Register */
    __IO uint32_t r;
    struct { /* ADC14MCTL11 Bits */
      __IO uint32_t bINCH               	:	5;  /* Input channel select */
      __I  uint32_t bRESERVED0          	:	2;  /* Reserved */
      __IO uint32_t bEOS                	:	1;  /* End of sequence */
      __IO uint32_t bVRSEL              	:	4;  /* Selects combinations of V(R+) and V(R-) sources */
      __I  uint32_t bRESERVED1          	:	1;  /* Reserved */
      __IO uint32_t bDIF                	:	1;  /* Differential mode */
      __IO uint32_t bWINC               	:	1;  /* Comparator window enable */
      __IO uint32_t bWINCTH             	:	1;  /* Window comparator threshold register selection */
      __I  uint32_t bRESERVED2          	:	16;  /* Reserved */
    } b;
  } rMCTL11;
  union {    /* ADC14MCTL12 Register */
    __IO uint32_t r;
    struct { /* ADC14MCTL12 Bits */
      __IO uint32_t bINCH               	:	5;  /* Input channel select */
      __I  uint32_t bRESERVED0          	:	2;  /* Reserved */
      __IO uint32_t bEOS                	:	1;  /* End of sequence */
      __IO uint32_t bVRSEL              	:	4;  /* Selects combinations of V(R+) and V(R-) sources */
      __I  uint32_t bRESERVED1          	:	1;  /* Reserved */
      __IO uint32_t bDIF                	:	1;  /* Differential mode */
      __IO uint32_t bWINC               	:	1;  /* Comparator window enable */
      __IO uint32_t bWINCTH             	:	1;  /* Window comparator threshold register selection */
      __I  uint32_t bRESERVED2          	:	16;  /* Reserved */
    } b;
  } rMCTL12;
  union {    /* ADC14MCTL13 Register */
    __IO uint32_t r;
    struct { /* ADC14MCTL13 Bits */
      __IO uint32_t bINCH               	:	5;  /* Input channel select */
      __I  uint32_t bRESERVED0          	:	2;  /* Reserved */
      __IO uint32_t bEOS                	:	1;  /* End of sequence */
      __IO uint32_t bVRSEL              	:	4;  /* Selects combinations of V(R+) and V(R-) sources */
      __I  uint32_t bRESERVED1          	:	1;  /* Reserved */
      __IO uint32_t bDIF                	:	1;  /* Differential mode */
      __IO uint32_t bWINC               	:	1;  /* Comparator window enable */
      __IO uint32_t bWINCTH             	:	1;  /* Window comparator threshold register selection */
      __I  uint32_t bRESERVED2          	:	16;  /* Reserved */
    } b;
  } rMCTL13;
  union {    /* ADC14MCTL14 Register */
    __IO uint32_t r;
    struct { /* ADC14MCTL14 Bits */
      __IO uint32_t bINCH               	:	5;  /* Input channel select */
      __I  uint32_t bRESERVED0          	:	2;  /* Reserved */
      __IO uint32_t bEOS                	:	1;  /* End of sequence */
      __IO uint32_t bVRSEL              	:	4;  /* Selects combinations of V(R+) and V(R-) sources */
      __I  uint32_t bRESERVED1          	:	1;  /* Reserved */
      __IO uint32_t bDIF                	:	1;  /* Differential mode */
      __IO uint32_t bWINC               	:	1;  /* Comparator window enable */
      __IO uint32_t bWINCTH             	:	1;  /* Window comparator threshold register selection */
      __I  uint32_t bRESERVED2          	:	16;  /* Reserved */
    } b;
  } rMCTL14;
  union {    /* ADC14MCTL15 Register */
    __IO uint32_t r;
    struct { /* ADC14MCTL15 Bits */
      __IO uint32_t bINCH               	:	5;  /* Input channel select */
      __I  uint32_t bRESERVED0          	:	2;  /* Reserved */
      __IO uint32_t bEOS                	:	1;  /* End of sequence */
      __IO uint32_t bVRSEL              	:	4;  /* Selects combinations of V(R+) and V(R-) sources */
      __I  uint32_t bRESERVED1          	:	1;  /* Reserved */
      __IO uint32_t bDIF                	:	1;  /* Differential mode */
      __IO uint32_t bWINC               	:	1;  /* Comparator window enable */
      __IO uint32_t bWINCTH             	:	1;  /* Window comparator threshold register selection */
      __I  uint32_t bRESERVED2          	:	16;  /* Reserved */
    } b;
  } rMCTL15;
  union {    /* ADC14MCTL16 Register */
    __IO uint32_t r;
    struct { /* ADC14MCTL16 Bits */
      __IO uint32_t bINCH               	:	5;  /* Input channel select */
      __I  uint32_t bRESERVED0          	:	2;  /* Reserved */
      __IO uint32_t bEOS                	:	1;  /* End of sequence */
      __IO uint32_t bVRSEL              	:	4;  /* Selects combinations of V(R+) and V(R-) sources */
      __I  uint32_t bRESERVED1          	:	1;  /* Reserved */
      __IO uint32_t bDIF                	:	1;  /* Differential mode */
      __IO uint32_t bWINC               	:	1;  /* Comparator window enable */
      __IO uint32_t bWINCTH             	:	1;  /* Window comparator threshold register selection */
      __I  uint32_t bRESERVED2          	:	16;  /* Reserved */
    } b;
  } rMCTL16;
  union {    /* ADC14MCTL17 Register */
    __IO uint32_t r;
    struct { /* ADC14MCTL17 Bits */
      __IO uint32_t bINCH               	:	5;  /* Input channel select */
      __I  uint32_t bRESERVED0          	:	2;  /* Reserved */
      __IO uint32_t bEOS                	:	1;  /* End of sequence */
      __IO uint32_t bVRSEL              	:	4;  /* Selects combinations of V(R+) and V(R-) sources */
      __I  uint32_t bRESERVED1          	:	1;  /* Reserved */
      __IO uint32_t bDIF                	:	1;  /* Differential mode */
      __IO uint32_t bWINC               	:	1;  /* Comparator window enable */
      __IO uint32_t bWINCTH             	:	1;  /* Window comparator threshold register selection */
      __I  uint32_t bRESERVED2          	:	16;  /* Reserved */
    } b;
  } rMCTL17;
  union {    /* ADC14MCTL18 Register */
    __IO uint32_t r;
    struct { /* ADC14MCTL18 Bits */
      __IO uint32_t bINCH               	:	5;  /* Input channel select */
      __I  uint32_t bRESERVED0          	:	2;  /* Reserved */
      __IO uint32_t bEOS                	:	1;  /* End of sequence */
      __IO uint32_t bVRSEL              	:	4;  /* Selects combinations of V(R+) and V(R-) sources */
      __I  uint32_t bRESERVED1          	:	1;  /* Reserved */
      __IO uint32_t bDIF                	:	1;  /* Differential mode */
      __IO uint32_t bWINC               	:	1;  /* Comparator window enable */
      __IO uint32_t bWINCTH             	:	1;  /* Window comparator threshold register selection */
      __I  uint32_t bRESERVED2          	:	16;  /* Reserved */
    } b;
  } rMCTL18;
  union {    /* ADC14MCTL19 Register */
    __IO uint32_t r;
    struct { /* ADC14MCTL19 Bits */
      __IO uint32_t bINCH               	:	5;  /* Input channel select */
      __I  uint32_t bRESERVED0          	:	2;  /* Reserved */
      __IO uint32_t bEOS                	:	1;  /* End of sequence */
      __IO uint32_t bVRSEL              	:	4;  /* Selects combinations of V(R+) and V(R-) sources */
      __I  uint32_t bRESERVED1          	:	1;  /* Reserved */
      __IO uint32_t bDIF                	:	1;  /* Differential mode */
      __IO uint32_t bWINC               	:	1;  /* Comparator window enable */
      __IO uint32_t bWINCTH             	:	1;  /* Window comparator threshold register selection */
      __I  uint32_t bRESERVED2          	:	16;  /* Reserved */
    } b;
  } rMCTL19;
  union {    /* ADC14MCTL20 Register */
    __IO uint32_t r;
    struct { /* ADC14MCTL20 Bits */
      __IO uint32_t bINCH               	:	5;  /* Input channel select */
      __I  uint32_t bRESERVED0          	:	2;  /* Reserved */
      __IO uint32_t bEOS                	:	1;  /* End of sequence */
      __IO uint32_t bVRSEL              	:	4;  /* Selects combinations of V(R+) and V(R-) sources */
      __I  uint32_t bRESERVED1          	:	1;  /* Reserved */
      __IO uint32_t bDIF                	:	1;  /* Differential mode */
      __IO uint32_t bWINC               	:	1;  /* Comparator window enable */
      __IO uint32_t bWINCTH             	:	1;  /* Window comparator threshold register selection */
      __I  uint32_t bRESERVED2          	:	16;  /* Reserved */
    } b;
  } rMCTL20;
  union {    /* ADC14MCTL21 Register */
    __IO uint32_t r;
    struct { /* ADC14MCTL21 Bits */
      __IO uint32_t bINCH               	:	5;  /* Input channel select */
      __I  uint32_t bRESERVED0          	:	2;  /* Reserved */
      __IO uint32_t bEOS                	:	1;  /* End of sequence */
      __IO uint32_t bVRSEL              	:	4;  /* Selects combinations of V(R+) and V(R-) sources */
      __I  uint32_t bRESERVED1          	:	1;  /* Reserved */
      __IO uint32_t bDIF                	:	1;  /* Differential mode */
      __IO uint32_t bWINC               	:	1;  /* Comparator window enable */
      __IO uint32_t bWINCTH             	:	1;  /* Window comparator threshold register selection */
      __I  uint32_t bRESERVED2          	:	16;  /* Reserved */
    } b;
  } rMCTL21;
  union {    /* ADC14MCTL22 Register */
    __IO uint32_t r;
    struct { /* ADC14MCTL22 Bits */
      __IO uint32_t bINCH               	:	5;  /* Input channel select */
      __I  uint32_t bRESERVED0          	:	2;  /* Reserved */
      __IO uint32_t bEOS                	:	1;  /* End of sequence */
      __IO uint32_t bVRSEL              	:	4;  /* Selects combinations of V(R+) and V(R-) sources */
      __I  uint32_t bRESERVED1          	:	1;  /* Reserved */
      __IO uint32_t bDIF                	:	1;  /* Differential mode */
      __IO uint32_t bWINC               	:	1;  /* Comparator window enable */
      __IO uint32_t bWINCTH             	:	1;  /* Window comparator threshold register selection */
      __I  uint32_t bRESERVED2          	:	16;  /* Reserved */
    } b;
  } rMCTL22;
  union {    /* ADC14MCTL23 Register */
    __IO uint32_t r;
    struct { /* ADC14MCTL23 Bits */
      __IO uint32_t bINCH               	:	5;  /* Input channel select */
      __I  uint32_t bRESERVED0          	:	2;  /* Reserved */
      __IO uint32_t bEOS                	:	1;  /* End of sequence */
      __IO uint32_t bVRSEL              	:	4;  /* Selects combinations of V(R+) and V(R-) sources */
      __I  uint32_t bRESERVED1          	:	1;  /* Reserved */
      __IO uint32_t bDIF                	:	1;  /* Differential mode */
      __IO uint32_t bWINC               	:	1;  /* Comparator window enable */
      __IO uint32_t bWINCTH             	:	1;  /* Window comparator threshold register selection */
      __I  uint32_t bRESERVED2          	:	16;  /* Reserved */
    } b;
  } rMCTL23;
  union {    /* ADC14MCTL24 Register */
    __IO uint32_t r;
    struct { /* ADC14MCTL24 Bits */
      __IO uint32_t bINCH               	:	5;  /* Input channel select */
      __I  uint32_t bRESERVED0          	:	2;  /* Reserved */
      __IO uint32_t bEOS                	:	1;  /* End of sequence */
      __IO uint32_t bVRSEL              	:	4;  /* Selects combinations of V(R+) and V(R-) sources */
      __I  uint32_t bRESERVED1          	:	1;  /* Reserved */
      __IO uint32_t bDIF                	:	1;  /* Differential mode */
      __IO uint32_t bWINC               	:	1;  /* Comparator window enable */
      __IO uint32_t bWINCTH             	:	1;  /* Window comparator threshold register selection */
      __I  uint32_t bRESERVED2          	:	16;  /* Reserved */
    } b;
  } rMCTL24;
  union {    /* ADC14MCTL25 Register */
    __IO uint32_t r;
    struct { /* ADC14MCTL25 Bits */
      __IO uint32_t bINCH               	:	5;  /* Input channel select */
      __I  uint32_t bRESERVED0          	:	2;  /* Reserved */
      __IO uint32_t bEOS                	:	1;  /* End of sequence */
      __IO uint32_t bVRSEL              	:	4;  /* Selects combinations of V(R+) and V(R-) sources */
      __I  uint32_t bRESERVED1          	:	1;  /* Reserved */
      __IO uint32_t bDIF                	:	1;  /* Differential mode */
      __IO uint32_t bWINC               	:	1;  /* Comparator window enable */
      __IO uint32_t bWINCTH             	:	1;  /* Window comparator threshold register selection */
      __I  uint32_t bRESERVED2          	:	16;  /* Reserved */
    } b;
  } rMCTL25;
  union {    /* ADC14MCTL26 Register */
    __IO uint32_t r;
    struct { /* ADC14MCTL26 Bits */
      __IO uint32_t bINCH               	:	5;  /* Input channel select */
      __I  uint32_t bRESERVED0          	:	2;  /* Reserved */
      __IO uint32_t bEOS                	:	1;  /* End of sequence */
      __IO uint32_t bVRSEL              	:	4;  /* Selects combinations of V(R+) and V(R-) sources */
      __I  uint32_t bRESERVED1          	:	1;  /* Reserved */
      __IO uint32_t bDIF                	:	1;  /* Differential mode */
      __IO uint32_t bWINC               	:	1;  /* Comparator window enable */
      __IO uint32_t bWINCTH             	:	1;  /* Window comparator threshold register selection */
      __I  uint32_t bRESERVED2          	:	16;  /* Reserved */
    } b;
  } rMCTL26;
  union {    /* ADC14MCTL27 Register */
    __IO uint32_t r;
    struct { /* ADC14MCTL27 Bits */
      __IO uint32_t bINCH               	:	5;  /* Input channel select */
      __I  uint32_t bRESERVED0          	:	2;  /* Reserved */
      __IO uint32_t bEOS                	:	1;  /* End of sequence */
      __IO uint32_t bVRSEL              	:	4;  /* Selects combinations of V(R+) and V(R-) sources */
      __I  uint32_t bRESERVED1          	:	1;  /* Reserved */
      __IO uint32_t bDIF                	:	1;  /* Differential mode */
      __IO uint32_t bWINC               	:	1;  /* Comparator window enable */
      __IO uint32_t bWINCTH             	:	1;  /* Window comparator threshold register selection */
      __I  uint32_t bRESERVED2          	:	16;  /* Reserved */
    } b;
  } rMCTL27;
  union {    /* ADC14MCTL28 Register */
    __IO uint32_t r;
    struct { /* ADC14MCTL28 Bits */
      __IO uint32_t bINCH               	:	5;  /* Input channel select */
      __I  uint32_t bRESERVED0          	:	2;  /* Reserved */
      __IO uint32_t bEOS                	:	1;  /* End of sequence */
      __IO uint32_t bVRSEL              	:	4;  /* Selects combinations of V(R+) and V(R-) sources */
      __I  uint32_t bRESERVED1          	:	1;  /* Reserved */
      __IO uint32_t bDIF                	:	1;  /* Differential mode */
      __IO uint32_t bWINC               	:	1;  /* Comparator window enable */
      __IO uint32_t bWINCTH             	:	1;  /* Window comparator threshold register selection */
      __I  uint32_t bRESERVED2          	:	16;  /* Reserved */
    } b;
  } rMCTL28;
  union {    /* ADC14MCTL29 Register */
    __IO uint32_t r;
    struct { /* ADC14MCTL29 Bits */
      __IO uint32_t bINCH               	:	5;  /* Input channel select */
      __I  uint32_t bRESERVED0          	:	2;  /* Reserved */
      __IO uint32_t bEOS                	:	1;  /* End of sequence */
      __IO uint32_t bVRSEL              	:	4;  /* Selects combinations of V(R+) and V(R-) sources */
      __I  uint32_t bRESERVED1          	:	1;  /* Reserved */
      __IO uint32_t bDIF                	:	1;  /* Differential mode */
      __IO uint32_t bWINC               	:	1;  /* Comparator window enable */
      __IO uint32_t bWINCTH             	:	1;  /* Window comparator threshold register selection */
      __I  uint32_t bRESERVED2          	:	16;  /* Reserved */
    } b;
  } rMCTL29;
  union {    /* ADC14MCTL30 Register */
    __IO uint32_t r;
    struct { /* ADC14MCTL30 Bits */
      __IO uint32_t bINCH               	:	5;  /* Input channel select */
      __I  uint32_t bRESERVED0          	:	2;  /* Reserved */
      __IO uint32_t bEOS                	:	1;  /* End of sequence */
      __IO uint32_t bVRSEL              	:	4;  /* Selects combinations of V(R+) and V(R-) sources */
      __I  uint32_t bRESERVED1          	:	1;  /* Reserved */
      __IO uint32_t bDIF                	:	1;  /* Differential mode */
      __IO uint32_t bWINC               	:	1;  /* Comparator window enable */
      __IO uint32_t bWINCTH             	:	1;  /* Window comparator threshold register selection */
      __I  uint32_t bRESERVED2          	:	16;  /* Reserved */
    } b;
  } rMCTL30;
  union {    /* ADC14MCTL31 Register */
    __IO uint32_t r;
    struct { /* ADC14MCTL31 Bits */
      __IO uint32_t bINCH               	:	5;  /* Input channel select */
      __I  uint32_t bRESERVED0          	:	2;  /* Reserved */
      __IO uint32_t bEOS                	:	1;  /* End of sequence */
      __IO uint32_t bVRSEL              	:	4;  /* Selects combinations of V(R+) and V(R-) sources */
      __I  uint32_t bRESERVED1          	:	1;  /* Reserved */
      __IO uint32_t bDIF                	:	1;  /* Differential mode */
      __IO uint32_t bWINC               	:	1;  /* Comparator window enable */
      __IO uint32_t bWINCTH             	:	1;  /* Window comparator threshold register selection */
      __I  uint32_t bRESERVED2          	:	16;  /* Reserved */
    } b;
  } rMCTL31;
  union {    /* ADC14MEM0 Register */
    __IO uint32_t r;
    struct { /* ADC14MEM0 Bits */
      __IO uint32_t bCONVRES            	:	16;  /* Conversion Result */
      __I  uint32_t bRESERVED0          	:	16;  /* Reserved */
    } b;
  } rMEM0;
  union {    /* ADC14MEM1 Register */
    __IO uint32_t r;
    struct { /* ADC14MEM1 Bits */
      __IO uint32_t bCONVRES            	:	16;  /* Conversion Result */
      __I  uint32_t bRESERVED0          	:	16;  /* Reserved */
    } b;
  } rMEM1;
  union {    /* ADC14MEM2 Register */
    __IO uint32_t r;
    struct { /* ADC14MEM2 Bits */
      __IO uint32_t bCONVRES            	:	16;  /* Conversion Result */
      __I  uint32_t bRESERVED0          	:	16;  /* Reserved */
    } b;
  } rMEM2;
  union {    /* ADC14MEM3 Register */
    __IO uint32_t r;
    struct { /* ADC14MEM3 Bits */
      __IO uint32_t bCONVRES            	:	16;  /* Conversion Result */
      __I  uint32_t bRESERVED0          	:	16;  /* Reserved */
    } b;
  } rMEM3;
  union {    /* ADC14MEM4 Register */
    __IO uint32_t r;
    struct { /* ADC14MEM4 Bits */
      __IO uint32_t bCONVRES            	:	16;  /* Conversion Result */
      __I  uint32_t bRESERVED0          	:	16;  /* Reserved */
    } b;
  } rMEM4;
  union {    /* ADC14MEM5 Register */
    __IO uint32_t r;
    struct { /* ADC14MEM5 Bits */
      __IO uint32_t bCONVRES            	:	16;  /* Conversion Result */
      __I  uint32_t bRESERVED0          	:	16;  /* Reserved */
    } b;
  } rMEM5;
  union {    /* ADC14MEM6 Register */
    __IO uint32_t r;
    struct { /* ADC14MEM6 Bits */
      __IO uint32_t bCONVRES            	:	16;  /* Conversion Result */
      __I  uint32_t bRESERVED0          	:	16;  /* Reserved */
    } b;
  } rMEM6;
  union {    /* ADC14MEM7 Register */
    __IO uint32_t r;
    struct { /* ADC14MEM7 Bits */
      __IO uint32_t bCONVRES            	:	16;  /* Conversion Result */
      __I  uint32_t bRESERVED0          	:	16;  /* Reserved */
    } b;
  } rMEM7;
  union {    /* ADC14MEM8 Register */
    __IO uint32_t r;
    struct { /* ADC14MEM8 Bits */
      __IO uint32_t bCONVRES            	:	16;  /* Conversion Result */
      __I  uint32_t bRESERVED0          	:	16;  /* Reserved */
    } b;
  } rMEM8;
  union {    /* ADC14MEM9 Register */
    __IO uint32_t r;
    struct { /* ADC14MEM9 Bits */
      __IO uint32_t bCONVRES            	:	16;  /* Conversion Result */
      __I  uint32_t bRESERVED0          	:	16;  /* Reserved */
    } b;
  } rMEM9;
  union {    /* ADC14MEM10 Register */
    __IO uint32_t r;
    struct { /* ADC14MEM10 Bits */
      __IO uint32_t bCONVRES            	:	16;  /* Conversion Result */
      __I  uint32_t bRESERVED0          	:	16;  /* Reserved */
    } b;
  } rMEM10;
  union {    /* ADC14MEM11 Register */
    __IO uint32_t r;
    struct { /* ADC14MEM11 Bits */
      __IO uint32_t bCONVRES            	:	16;  /* Conversion Result */
      __I  uint32_t bRESERVED0          	:	16;  /* Reserved */
    } b;
  } rMEM11;
  union {    /* ADC14MEM12 Register */
    __IO uint32_t r;
    struct { /* ADC14MEM12 Bits */
      __IO uint32_t bCONVRES            	:	16;  /* Conversion Result */
      __I  uint32_t bRESERVED0          	:	16;  /* Reserved */
    } b;
  } rMEM12;
  union {    /* ADC14MEM13 Register */
    __IO uint32_t r;
    struct { /* ADC14MEM13 Bits */
      __IO uint32_t bCONVRES            	:	16;  /* Conversion Result */
      __I  uint32_t bRESERVED0          	:	16;  /* Reserved */
    } b;
  } rMEM13;
  union {    /* ADC14MEM14 Register */
    __IO uint32_t r;
    struct { /* ADC14MEM14 Bits */
      __IO uint32_t bCONVRES            	:	16;  /* Conversion Result */
      __I  uint32_t bRESERVED0          	:	16;  /* Reserved */
    } b;
  } rMEM14;
  union {    /* ADC14MEM15 Register */
    __IO uint32_t r;
    struct { /* ADC14MEM15 Bits */
      __IO uint32_t bCONVRES            	:	16;  /* Conversion Result */
      __I  uint32_t bRESERVED0          	:	16;  /* Reserved */
    } b;
  } rMEM15;
  union {    /* ADC14MEM16 Register */
    __IO uint32_t r;
    struct { /* ADC14MEM16 Bits */
      __IO uint32_t bCONVRES            	:	16;  /* Conversion Result */
      __I  uint32_t bRESERVED0          	:	16;  /* Reserved */
    } b;
  } rMEM16;
  union {    /* ADC14MEM17 Register */
    __IO uint32_t r;
    struct { /* ADC14MEM17 Bits */
      __IO uint32_t bCONVRES            	:	16;  /* Conversion Result */
      __I  uint32_t bRESERVED0          	:	16;  /* Reserved */
    } b;
  } rMEM17;
  union {    /* ADC14MEM18 Register */
    __IO uint32_t r;
    struct { /* ADC14MEM18 Bits */
      __IO uint32_t bCONVRES            	:	16;  /* Conversion Result */
      __I  uint32_t bRESERVED0          	:	16;  /* Reserved */
    } b;
  } rMEM18;
  union {    /* ADC14MEM19 Register */
    __IO uint32_t r;
    struct { /* ADC14MEM19 Bits */
      __IO uint32_t bCONVRES            	:	16;  /* Conversion Result */
      __I  uint32_t bRESERVED0          	:	16;  /* Reserved */
    } b;
  } rMEM19;
  union {    /* ADC14MEM20 Register */
    __IO uint32_t r;
    struct { /* ADC14MEM20 Bits */
      __IO uint32_t bCONVRES            	:	16;  /* Conversion Result */
      __I  uint32_t bRESERVED0          	:	16;  /* Reserved */
    } b;
  } rMEM20;
  union {    /* ADC14MEM21 Register */
    __IO uint32_t r;
    struct { /* ADC14MEM21 Bits */
      __IO uint32_t bCONVRES            	:	16;  /* Conversion Result */
      __I  uint32_t bRESERVED0          	:	16;  /* Reserved */
    } b;
  } rMEM21;
  union {    /* ADC14MEM22 Register */
    __IO uint32_t r;
    struct { /* ADC14MEM22 Bits */
      __IO uint32_t bCONVRES            	:	16;  /* Conversion Result */
      __I  uint32_t bRESERVED0          	:	16;  /* Reserved */
    } b;
  } rMEM22;
  union {    /* ADC14MEM23 Register */
    __IO uint32_t r;
    struct { /* ADC14MEM23 Bits */
      __IO uint32_t bCONVRES            	:	16;  /* Conversion Result */
      __I  uint32_t bRESERVED0          	:	16;  /* Reserved */
    } b;
  } rMEM23;
  union {    /* ADC14MEM24 Register */
    __IO uint32_t r;
    struct { /* ADC14MEM24 Bits */
      __IO uint32_t bCONVRES            	:	16;  /* Conversion Result */
      __I  uint32_t bRESERVED0          	:	16;  /* Reserved */
    } b;
  } rMEM24;
  union {    /* ADC14MEM25 Register */
    __IO uint32_t r;
    struct { /* ADC14MEM25 Bits */
      __IO uint32_t bCONVRES            	:	16;  /* Conversion Result */
      __I  uint32_t bRESERVED0          	:	16;  /* Reserved */
    } b;
  } rMEM25;
  union {    /* ADC14MEM26 Register */
    __IO uint32_t r;
    struct { /* ADC14MEM26 Bits */
      __IO uint32_t bCONVRES            	:	16;  /* Conversion Result */
      __I  uint32_t bRESERVED0          	:	16;  /* Reserved */
    } b;
  } rMEM26;
  union {    /* ADC14MEM27 Register */
    __IO uint32_t r;
    struct { /* ADC14MEM27 Bits */
      __IO uint32_t bCONVRES            	:	16;  /* Conversion Result */
      __I  uint32_t bRESERVED0          	:	16;  /* Reserved */
    } b;
  } rMEM27;
  union {    /* ADC14MEM28 Register */
    __IO uint32_t r;
    struct { /* ADC14MEM28 Bits */
      __IO uint32_t bCONVRES            	:	16;  /* Conversion Result */
      __I  uint32_t bRESERVED0          	:	16;  /* Reserved */
    } b;
  } rMEM28;
  union {    /* ADC14MEM29 Register */
    __IO uint32_t r;
    struct { /* ADC14MEM29 Bits */
      __IO uint32_t bCONVRES            	:	16;  /* Conversion Result */
      __I  uint32_t bRESERVED0          	:	16;  /* Reserved */
    } b;
  } rMEM29;
  union {    /* ADC14MEM30 Register */
    __IO uint32_t r;
    struct { /* ADC14MEM30 Bits */
      __IO uint32_t bCONVRES            	:	16;  /* Conversion Result */
      __I  uint32_t bRESERVED0          	:	16;  /* Reserved */
    } b;
  } rMEM30;
  union {    /* ADC14MEM31 Register */
    __IO uint32_t r;
    struct { /* ADC14MEM31 Bits */
      __IO uint32_t bCONVRES            	:	16;  /* Conversion Result */
      __I  uint32_t bRESERVED0          	:	16;  /* Reserved */
    } b;
  } rMEM31;
  uint8_t  RESERVED0[36];
  union {    /* ADC14IER0 Register */
    __IO uint32_t r;
    struct { /* ADC14IER0 Bits */
      __IO uint32_t bIE0                	:	1;  /* Interrupt enable */
      __IO uint32_t bIE1                	:	1;  /* Interrupt enable */
      __IO uint32_t bIE2                	:	1;  /* Interrupt enable */
      __IO uint32_t bIE3                	:	1;  /* Interrupt enable */
      __IO uint32_t bIE4                	:	1;  /* Interrupt enable */
      __IO uint32_t bIE5                	:	1;  /* Interrupt enable */
      __IO uint32_t bIE6                	:	1;  /* Interrupt enable */
      __IO uint32_t bIE7                	:	1;  /* Interrupt enable */
      __IO uint32_t bIE8                	:	1;  /* Interrupt enable */
      __IO uint32_t bIE9                	:	1;  /* Interrupt enable */
      __IO uint32_t bIE10               	:	1;  /* Interrupt enable */
      __IO uint32_t bIE11               	:	1;  /* Interrupt enable */
      __IO uint32_t bIE12               	:	1;  /* Interrupt enable */
      __IO uint32_t bIE13               	:	1;  /* Interrupt enable */
      __IO uint32_t bIE14               	:	1;  /* Interrupt enable */
      __IO uint32_t bIE15               	:	1;  /* Interrupt enable */
      __IO uint32_t bIE16               	:	1;  /* Interrupt enable */
      __IO uint32_t bIE17               	:	1;  /* Interrupt enable */
      __IO uint32_t bIE18               	:	1;  /* Interrupt enable */
      __IO uint32_t bIE19               	:	1;  /* Interrupt enable */
      __IO uint32_t bIE20               	:	1;  /* Interrupt enable */
      __IO uint32_t bIE21               	:	1;  /* Interrupt enable */
      __IO uint32_t bIE22               	:	1;  /* Interrupt enable */
      __IO uint32_t bIE23               	:	1;  /* Interrupt enable */
      __IO uint32_t bIE24               	:	1;  /* Interrupt enable */
      __IO uint32_t bIE25               	:	1;  /* Interrupt enable */
      __IO uint32_t bIE26               	:	1;  /* Interrupt enable */
      __IO uint32_t bIE27               	:	1;  /* Interrupt enable */
      __IO uint32_t bIE28               	:	1;  /* Interrupt enable */
      __IO uint32_t bIE29               	:	1;  /* Interrupt enable */
      __IO uint32_t bIE30               	:	1;  /* Interrupt enable */
      __IO uint32_t bIE31               	:	1;  /* Interrupt enable */
    } b;
  } rIER0;
  union {    /* ADC14IER1 Register */
    __IO uint32_t r;
    struct { /* ADC14IER1 Bits */
      __I  uint32_t bRESERVED0          	:	1;  /* Reserved */
      __IO uint32_t bINIE               	:	1;  /* Interrupt enable for ADC14MEMx within comparator window */
      __IO uint32_t bLOIE               	:	1;  /* Interrupt enable for ADC14MEMx below comparator window */
      __IO uint32_t bHIIE               	:	1;  /* Interrupt enable for ADC14MEMx above comparator window */
      __IO uint32_t bOVIE               	:	1;  /* ADC14MEMx overflow-interrupt enable */
      __IO uint32_t bTOVIE              	:	1;  /* ADC14 conversion-time-overflow interrupt enable */
      __IO uint32_t bRDYIE              	:	1;  /* ADC14 local buffered reference ready interrupt enable */
      __I  uint32_t bRESERVED1          	:	25;  /* Reserved */
    } b;
  } rIER1;
  union {    /* ADC14IFGR0 Register */
    __I uint32_t r;
    struct { /* ADC14IFGR0 Bits */
      __I  uint32_t bIFG0               	:	1;  /* ADC14MEM0 interrupt flag */
      __I  uint32_t bIFG1               	:	1;  /* ADC14MEM1 interrupt flag */
      __I  uint32_t bIFG2               	:	1;  /* ADC14MEM2 interrupt flag */
      __I  uint32_t bIFG3               	:	1;  /* ADC14MEM3 interrupt flag */
      __I  uint32_t bIFG4               	:	1;  /* ADC14MEM4 interrupt flag */
      __I  uint32_t bIFG5               	:	1;  /* ADC14MEM5 interrupt flag */
      __I  uint32_t bIFG6               	:	1;  /* ADC14MEM6 interrupt flag */
      __I  uint32_t bIFG7               	:	1;  /* ADC14MEM7 interrupt flag */
      __I  uint32_t bIFG8               	:	1;  /* ADC14MEM8 interrupt flag */
      __I  uint32_t bIFG9               	:	1;  /* ADC14MEM9 interrupt flag */
      __I  uint32_t bIFG10              	:	1;  /* ADC14MEM10 interrupt flag */
      __I  uint32_t bIFG11              	:	1;  /* ADC14MEM11 interrupt flag */
      __I  uint32_t bIFG12              	:	1;  /* ADC14MEM12 interrupt flag */
      __I  uint32_t bIFG13              	:	1;  /* ADC14MEM13 interrupt flag */
      __I  uint32_t bIFG14              	:	1;  /* ADC14MEM14 interrupt flag */
      __I  uint32_t bIFG15              	:	1;  /* ADC14MEM15 interrupt flag */
      __I  uint32_t bIFG16              	:	1;  /* ADC14MEM16 interrupt flag */
      __I  uint32_t bIFG17              	:	1;  /* ADC14MEM17 interrupt flag */
      __I  uint32_t bIFG18              	:	1;  /* ADC14MEM18 interrupt flag */
      __I  uint32_t bIFG19              	:	1;  /* ADC14MEM19 interrupt flag */
      __I  uint32_t bIFG20              	:	1;  /* ADC14MEM20 interrupt flag */
      __I  uint32_t bIFG21              	:	1;  /* ADC14MEM21 interrupt flag */
      __I  uint32_t bIFG22              	:	1;  /* ADC14MEM22 interrupt flag */
      __I  uint32_t bIFG23              	:	1;  /* ADC14MEM23 interrupt flag */
      __I  uint32_t bIFG24              	:	1;  /* ADC14MEM24 interrupt flag */
      __I  uint32_t bIFG25              	:	1;  /* ADC14MEM25 interrupt flag */
      __I  uint32_t bIFG26              	:	1;  /* ADC14MEM26 interrupt flag */
      __I  uint32_t bIFG27              	:	1;  /* ADC14MEM27 interrupt flag */
      __I  uint32_t bIFG28              	:	1;  /* ADC14MEM28 interrupt flag */
      __I  uint32_t bIFG29              	:	1;  /* ADC14MEM29 interrupt flag */
      __I  uint32_t bIFG30              	:	1;  /* ADC14MEM30 interrupt flag */
      __I  uint32_t bIFG31              	:	1;  /* ADC14MEM31 interrupt flag */
    } b;
  } rIFGR0;
  union {    /* ADC14IFGR1 Register */
    __I uint32_t r;
    struct { /* ADC14IFGR1 Bits */
      __I  uint32_t bRESERVED0          	:	1;  /* Reserved */
      __I  uint32_t bINIFG              	:	1;  /* Interrupt flag for ADC14MEMx within comparator window */
      __I  uint32_t bLOIFG              	:	1;  /* Interrupt flag for ADC14MEMx below comparator window */
      __I  uint32_t bHIIFG              	:	1;  /* Interrupt flag for ADC14MEMx above comparator window */
      __I  uint32_t bOVIFG              	:	1;  /* ADC14MEMx overflow interrupt flag */
      __I  uint32_t bTOVIFG             	:	1;  /* ADC14 conversion time overflow interrupt flag */
      __I  uint32_t bRDYIFG             	:	1;  /* ADC14 local buffered reference ready interrupt flag */
      __I  uint32_t bRESERVED1          	:	25;  /* Reserved */
    } b;
  } rIFGR1;
  union {    /* ADC14CLRIFGR0 Register */
    __O uint32_t r;
    struct { /* ADC14CLRIFGR0 Bits */
      __O  uint32_t bCLRIFG0            	:	1;  /* clear ADC14IFG0 */
      __O  uint32_t bCLRIFG1            	:	1;  /* clear ADC14IFG1 */
      __O  uint32_t bCLRIFG2            	:	1;  /* clear ADC14IFG2 */
      __O  uint32_t bCLRIFG3            	:	1;  /* clear ADC14IFG3 */
      __O  uint32_t bCLRIFG4            	:	1;  /* clear ADC14IFG4 */
      __O  uint32_t bCLRIFG5            	:	1;  /* clear ADC14IFG5 */
      __O  uint32_t bCLRIFG6            	:	1;  /* clear ADC14IFG6 */
      __O  uint32_t bCLRIFG7            	:	1;  /* clear ADC14IFG7 */
      __O  uint32_t bCLRIFG8            	:	1;  /* clear ADC14IFG8 */
      __O  uint32_t bCLRIFG9            	:	1;  /* clear ADC14IFG9 */
      __O  uint32_t bCLRIFG10           	:	1;  /* clear ADC14IFG10 */
      __O  uint32_t bCLRIFG11           	:	1;  /* clear ADC14IFG11 */
      __O  uint32_t bCLRIFG12           	:	1;  /* clear ADC14IFG12 */
      __O  uint32_t bCLRIFG13           	:	1;  /* clear ADC14IFG13 */
      __O  uint32_t bCLRIFG14           	:	1;  /* clear ADC14IFG14 */
      __O  uint32_t bCLRIFG15           	:	1;  /* clear ADC14IFG15 */
      __O  uint32_t bCLRIFG16           	:	1;  /* clear ADC14IFG16 */
      __O  uint32_t bCLRIFG17           	:	1;  /* clear ADC14IFG17 */
      __O  uint32_t bCLRIFG18           	:	1;  /* clear ADC14IFG18 */
      __O  uint32_t bCLRIFG19           	:	1;  /* clear ADC14IFG19 */
      __O  uint32_t bCLRIFG20           	:	1;  /* clear ADC14IFG20 */
      __O  uint32_t bCLRIFG21           	:	1;  /* clear ADC14IFG21 */
      __O  uint32_t bCLRIFG22           	:	1;  /* clear ADC14IFG22 */
      __O  uint32_t bCLRIFG23           	:	1;  /* clear ADC14IFG23 */
      __O  uint32_t bCLRIFG24           	:	1;  /* clear ADC14IFG24 */
      __O  uint32_t bCLRIFG25           	:	1;  /* clear ADC14IFG25 */
      __O  uint32_t bCLRIFG26           	:	1;  /* clear ADC14IFG26 */
      __O  uint32_t bCLRIFG27           	:	1;  /* clear ADC14IFG27 */
      __O  uint32_t bCLRIFG28           	:	1;  /* clear ADC14IFG28 */
      __O  uint32_t bCLRIFG29           	:	1;  /* clear ADC14IFG29 */
      __O  uint32_t bCLRIFG30           	:	1;  /* clear ADC14IFG30 */
      __O  uint32_t bCLRIFG31           	:	1;  /* clear ADC14IFG31 */
    } b;
  } rCLRIFGR0;
  union {    /* ADC14CLRIFGR1 Register */
    __IO uint32_t r;
    struct { /* ADC14CLRIFGR1 Bits */
      __I  uint32_t bRESERVED0          	:	1;  /* Reserved */
      __O  uint32_t bCLRINIFG           	:	1;  /* clear ADC14INIFG */
      __O  uint32_t bCLRLOIFG           	:	1;  /* clear ADC14LOIFG */
      __O  uint32_t bCLRHIIFG           	:	1;  /* clear ADC14HIIFG */
      __O  uint32_t bCLROVIFG           	:	1;  /* clear ADC14OVIFG */
      __O  uint32_t bCLRTOVIFG          	:	1;  /* clear ADC14TOVIFG */
      __O  uint32_t bCLRRDYIFG          	:	1;  /* clear ADC14RDYIFG */
      __I  uint32_t bRESERVED1          	:	25;  /* Reserved */
    } b;
  } rCLRIFGR1;
  __IO uint32_t rIV; /* Interrupt Vector Register */
} ADC14_Type;


//*****************************************************************************
// AES256 Registers
//*****************************************************************************
typedef struct {
  union {    /* AESACTL0 Register */
    __IO uint16_t r;
    struct { /* AESACTL0 Bits */
      __IO uint16_t bOP                 	:	2;  /* AES operation */
      __IO uint16_t bKL                 	:	2;  /* AES key length */
      __I  uint16_t bRESERVED0          	:	1;  /* Reserved */
      __IO uint16_t bCM                 	:	2;  /* AES cipher mode select */
      __IO uint16_t bSWRST              	:	1;  /* AES software reset */
      __IO uint16_t bRDYIFG             	:	1;  /* AES ready interrupt flag */
      __I  uint16_t bRESERVED1          	:	2;  /* Reserved */
      __IO uint16_t bERRFG              	:	1;  /* AES error flag */
      __IO uint16_t bRDYIE              	:	1;  /* AES ready interrupt enable */
      __I  uint16_t bRESERVED2          	:	2;  /* Reserved */
      __IO uint16_t bCMEN               	:	1;  /* AES cipher mode enable */
    } b;
  } rCTL0;
  union {    /* AESACTL1 Register */
    __IO uint16_t r;
    struct { /* AESACTL1 Bits */
      __IO uint16_t bBLKCNT             	:	8;  /* Cipher Block Counter */
      __I  uint16_t bRESERVED0          	:	8;  /* Reserved */
    } b;
  } rCTL1;
  union {    /* AESASTAT Register */
    __IO uint16_t r;
    struct { /* AESASTAT Bits */
      __IO uint16_t bBUSY               	:	1;  /* AES accelerator module busy */
      __IO uint16_t bKEYWR              	:	1;  /* All 16 bytes written to AESAKEY */
      __IO uint16_t bDINWR              	:	1;  /* All 16 bytes written to AESADIN, AESAXDIN or AESAXIN */
      __I  uint16_t bDOUTRD             	:	1;  /* All 16 bytes read from AESADOUT */
      __I  uint16_t bKEYCNT             	:	4;  /* Bytes written via AESAKEY for AESKLx=00, half-words written via AESAKEY */
      __I  uint16_t bDINCNT             	:	4;  /* Bytes written via AESADIN, AESAXDIN or AESAXIN */
      __I  uint16_t bDOUTCNT            	:	4;  /* Bytes read via AESADOUT */
    } b;
  } rSTAT;
  union {    /* AESAKEY Register */
    __O uint16_t r;
    struct { /* AESAKEY Bits */
      __O  uint16_t bKEY0               	:	8;  /* AES key byte n when AESAKEY is written as half-word */
      __O  uint16_t bKEY1               	:	8;  /* AES key byte n+1 when AESAKEY is written as half-word */
    } b;
  } rKEY;
  union {    /* AESADIN Register */
    __O uint16_t r;
    struct { /* AESADIN Bits */
      __O  uint16_t bDIN0               	:	8;  /* AES data in byte n when AESADIN is written as half-word */
      __O  uint16_t bDIN1               	:	8;  /* AES data in byte n+1 when AESADIN is written as half-word */
    } b;
  } rDIN;
  union {    /* AESADOUT Register */
    __O uint16_t r;
    struct { /* AESADOUT Bits */
      __O  uint16_t bDOUT0              	:	8;  /* AES data out byte n when AESADOUT is read as half-word */
      __O  uint16_t bDOUT1              	:	8;  /* AES data out byte n+1 when AESADOUT is read as half-word */
    } b;
  } rDOUT;
  union {    /* AESAXDIN Register */
    __O uint16_t r;
    struct { /* AESAXDIN Bits */
      __O  uint16_t bXDIN0              	:	8;  /* AES data in byte n when AESAXDIN is written as half-word */
      __O  uint16_t bXDIN1              	:	8;  /* AES data in byte n+1 when AESAXDIN is written as half-word */
    } b;
  } rXDIN;
  union {    /* AESAXIN Register */
    __O uint16_t r;
    struct { /* AESAXIN Bits */
      __O  uint16_t bXIN0               	:	8;  /* AES data in byte n when AESAXIN is written as half-word */
      __O  uint16_t bXIN1               	:	8;  /* AES data in byte n+1 when AESAXIN is written as half-word */
    } b;
  } rXIN;
} AES256_Type;


//*****************************************************************************
// CAPTIO0 Registers
//*****************************************************************************
typedef struct {
  uint8_t  RESERVED0[14];
  union {    /* CAPTIO0CTL Register */
    __IO uint16_t r;
    struct { /* CAPTIO0CTL Bits */
      __I  uint16_t bRESERVED0          	:	1;  /* Reserved */
      __IO uint16_t bPISEL              	:	3;  /* Capacitive Touch IO pin select */
      __IO uint16_t bPOSEL              	:	4;  /* Capacitive Touch IO port select */
      __IO uint16_t bEN                 	:	1;  /* Capacitive Touch IO enable */
      __I  uint16_t bSTATE              	:	1;  /* Capacitive Touch IO state */
      __I  uint16_t bRESERVED1          	:	6;  /* Reserved */
    } b;
  } rCTL;
} CAPTIO0_Type;


//*****************************************************************************
// CAPTIO1 Registers
//*****************************************************************************
typedef struct {
  uint8_t  RESERVED0[14];
  union {    /* CAPTIO1CTL Register */
    __IO uint16_t r;
    struct { /* CAPTIO1CTL Bits */
      __I  uint16_t bRESERVED0          	:	1;  /* Reserved */
      __IO uint16_t bPISEL              	:	3;  /* Capacitive Touch IO pin select */
      __IO uint16_t bPOSEL              	:	4;  /* Capacitive Touch IO port select */
      __IO uint16_t bEN                 	:	1;  /* Capacitive Touch IO enable */
      __I  uint16_t bSTATE              	:	1;  /* Capacitive Touch IO state */
      __I  uint16_t bRESERVED1          	:	6;  /* Reserved */
    } b;
  } rCTL;
} CAPTIO1_Type;


//*****************************************************************************
// COMP_E0 Registers
//*****************************************************************************
typedef struct {
  union {    /* CE0CTL0 Register */
    __IO uint16_t r;
    struct { /* CE0CTL0 Bits */
      __IO uint16_t bIPSEL              	:	4;  /* Channel input selected for the V+ terminal */
      __I  uint16_t bRESERVED0          	:	3;  /* Reserved */
      __IO uint16_t bIPEN               	:	1;  /* Channel input enable for the V+ terminal */
      __IO uint16_t bIMSEL              	:	4;  /* Channel input selected for the - terminal */
      __I  uint16_t bRESERVED1          	:	3;  /* Reserved */
      __IO uint16_t bIMEN               	:	1;  /* Channel input enable for the - terminal */
    } b;
  } rCTL0;
  union {    /* CE0CTL1 Register */
    __IO uint16_t r;
    struct { /* CE0CTL1 Bits */
      __IO uint16_t bOUT                	:	1;  /* Comparator output value */
      __IO uint16_t bOUTPOL             	:	1;  /* Comparator output polarity */
      __IO uint16_t bF                  	:	1;  /* Comparator output filter */
      __IO uint16_t bIES                	:	1;  /* Interrupt edge select for CEIIFG and CEIFG */
      __IO uint16_t bSHORT              	:	1;  /* Input short */
      __IO uint16_t bEX                 	:	1;  /* Exchange */
      __IO uint16_t bFDLY               	:	2;  /* Filter delay */
      __IO uint16_t bPWRMD              	:	2;  /* Power Mode */
      __IO uint16_t bON                 	:	1;  /* Comparator On */
      __IO uint16_t bMRVL               	:	1;  /* This bit is valid of CEMRVS is set to 1 */
      __IO uint16_t bMRVS               	:	1;  /*  */
      __I  uint16_t bRESERVED0          	:	3;  /* Reserved */
    } b;
  } rCTL1;
  union {    /* CE0CTL2 Register */
    __IO uint16_t r;
    struct { /* CE0CTL2 Bits */
      __IO uint16_t bREF0               	:	5;  /* Reference resistor tap 0 */
      __IO uint16_t bRSEL               	:	1;  /* Reference select */
      __IO uint16_t bRS                 	:	2;  /* Reference source */
      __IO uint16_t bREF1               	:	5;  /* Reference resistor tap 1 */
      __IO uint16_t bREFL               	:	2;  /* Reference voltage level */
      __IO uint16_t bREFACC             	:	1;  /* Reference accuracy */
    } b;
  } rCTL2;
  union {    /* CE0CTL3 Register */
    __IO uint16_t r;
    struct { /* CE0CTL3 Bits */
      __IO uint16_t bPD0                	:	1;  /* Port disable */
      __IO uint16_t bPD1                	:	1;  /* Port disable */
      __IO uint16_t bPD2                	:	1;  /* Port disable */
      __IO uint16_t bPD3                	:	1;  /* Port disable */
      __IO uint16_t bPD4                	:	1;  /* Port disable */
      __IO uint16_t bPD5                	:	1;  /* Port disable */
      __IO uint16_t bPD6                	:	1;  /* Port disable */
      __IO uint16_t bPD7                	:	1;  /* Port disable */
      __IO uint16_t bPD8                	:	1;  /* Port disable */
      __IO uint16_t bPD9                	:	1;  /* Port disable */
      __IO uint16_t bPD10               	:	1;  /* Port disable */
      __IO uint16_t bPD11               	:	1;  /* Port disable */
      __IO uint16_t bPD12               	:	1;  /* Port disable */
      __IO uint16_t bPD13               	:	1;  /* Port disable */
      __IO uint16_t bPD14               	:	1;  /* Port disable */
      __IO uint16_t bPD15               	:	1;  /* Port disable */
    } b;
  } rCTL3;
  uint8_t  RESERVED0[4];
  union {    /* CE0INT Register */
    __IO uint16_t r;
    struct { /* CE0INT Bits */
      __IO uint16_t bIFG                	:	1;  /* Comparator output interrupt flag */
      __IO uint16_t bIIFG               	:	1;  /* Comparator output inverted interrupt flag */
      __I  uint16_t bRESERVED0          	:	2;  /* Reserved */
      __IO uint16_t bRDYIFG             	:	1;  /* Comparator ready interrupt flag */
      __I  uint16_t bRESERVED1          	:	3;  /* Reserved */
      __IO uint16_t bIE                 	:	1;  /* Comparator output interrupt enable */
      __IO uint16_t bIIE                	:	1;  /* Comparator output interrupt enable inverted polarity */
      __I  uint16_t bRESERVED2          	:	2;  /* Reserved */
      __IO uint16_t bRDYIE              	:	1;  /* Comparator ready interrupt enable */
      __I  uint16_t bRESERVED3          	:	3;  /* Reserved */
    } b;
  } rINT;
  __I uint16_t rIV; /* Comparator Interrupt Vector Word Register */
} COMP_E0_Type;


//*****************************************************************************
// COMP_E1 Registers
//*****************************************************************************
typedef struct {
  union {    /* CE1CTL0 Register */
    __IO uint16_t r;
    struct { /* CE1CTL0 Bits */
      __IO uint16_t bIPSEL              	:	4;  /* Channel input selected for the V+ terminal */
      __I  uint16_t bRESERVED0          	:	3;  /* Reserved */
      __IO uint16_t bIPEN               	:	1;  /* Channel input enable for the V+ terminal */
      __IO uint16_t bIMSEL              	:	4;  /* Channel input selected for the - terminal */
      __I  uint16_t bRESERVED1          	:	3;  /* Reserved */
      __IO uint16_t bIMEN               	:	1;  /* Channel input enable for the - terminal */
    } b;
  } rCTL0;
  union {    /* CE1CTL1 Register */
    __IO uint16_t r;
    struct { /* CE1CTL1 Bits */
      __IO uint16_t bOUT                	:	1;  /* Comparator output value */
      __IO uint16_t bOUTPOL             	:	1;  /* Comparator output polarity */
      __IO uint16_t bF                  	:	1;  /* Comparator output filter */
      __IO uint16_t bIES                	:	1;  /* Interrupt edge select for CEIIFG and CEIFG */
      __IO uint16_t bSHORT              	:	1;  /* Input short */
      __IO uint16_t bEX                 	:	1;  /* Exchange */
      __IO uint16_t bFDLY               	:	2;  /* Filter delay */
      __IO uint16_t bPWRMD              	:	2;  /* Power Mode */
      __IO uint16_t bON                 	:	1;  /* Comparator On */
      __IO uint16_t bMRVL               	:	1;  /* This bit is valid of CEMRVS is set to 1 */
      __IO uint16_t bMRVS               	:	1;  /*  */
      __I  uint16_t bRESERVED0          	:	3;  /* Reserved */
    } b;
  } rCTL1;
  union {    /* CE1CTL2 Register */
    __IO uint16_t r;
    struct { /* CE1CTL2 Bits */
      __IO uint16_t bREF0               	:	5;  /* Reference resistor tap 0 */
      __IO uint16_t bRSEL               	:	1;  /* Reference select */
      __IO uint16_t bRS                 	:	2;  /* Reference source */
      __IO uint16_t bREF1               	:	5;  /* Reference resistor tap 1 */
      __IO uint16_t bREFL               	:	2;  /* Reference voltage level */
      __IO uint16_t bREFACC             	:	1;  /* Reference accuracy */
    } b;
  } rCTL2;
  union {    /* CE1CTL3 Register */
    __IO uint16_t r;
    struct { /* CE1CTL3 Bits */
      __IO uint16_t bPD0                	:	1;  /* Port disable */
      __IO uint16_t bPD1                	:	1;  /* Port disable */
      __IO uint16_t bPD2                	:	1;  /* Port disable */
      __IO uint16_t bPD3                	:	1;  /* Port disable */
      __IO uint16_t bPD4                	:	1;  /* Port disable */
      __IO uint16_t bPD5                	:	1;  /* Port disable */
      __IO uint16_t bPD6                	:	1;  /* Port disable */
      __IO uint16_t bPD7                	:	1;  /* Port disable */
      __IO uint16_t bPD8                	:	1;  /* Port disable */
      __IO uint16_t bPD9                	:	1;  /* Port disable */
      __IO uint16_t bPD10               	:	1;  /* Port disable */
      __IO uint16_t bPD11               	:	1;  /* Port disable */
      __IO uint16_t bPD12               	:	1;  /* Port disable */
      __IO uint16_t bPD13               	:	1;  /* Port disable */
      __IO uint16_t bPD14               	:	1;  /* Port disable */
      __IO uint16_t bPD15               	:	1;  /* Port disable */
    } b;
  } rCTL3;
  uint8_t  RESERVED0[4];
  union {    /* CE1INT Register */
    __IO uint16_t r;
    struct { /* CE1INT Bits */
      __IO uint16_t bIFG                	:	1;  /* Comparator output interrupt flag */
      __IO uint16_t bIIFG               	:	1;  /* Comparator output inverted interrupt flag */
      __I  uint16_t bRESERVED0          	:	2;  /* Reserved */
      __IO uint16_t bRDYIFG             	:	1;  /* Comparator ready interrupt flag */
      __I  uint16_t bRESERVED1          	:	3;  /* Reserved */
      __IO uint16_t bIE                 	:	1;  /* Comparator output interrupt enable */
      __IO uint16_t bIIE                	:	1;  /* Comparator output interrupt enable inverted polarity */
      __I  uint16_t bRESERVED2          	:	2;  /* Reserved */
      __IO uint16_t bRDYIE              	:	1;  /* Comparator ready interrupt enable */
      __I  uint16_t bRESERVED3          	:	3;  /* Reserved */
    } b;
  } rINT;
  __I uint16_t rIV; /* Comparator Interrupt Vector Word Register */
} COMP_E1_Type;


//*****************************************************************************
// CRC32 Registers
//*****************************************************************************
typedef struct {
  __IO uint16_t rCRC32DI; /* Data Input for CRC32 Signature Computation */
  uint8_t  RESERVED0[2];
  __IO uint16_t rCRC32DIRB; /* Data In Reverse for CRC32 Computation */
  uint8_t  RESERVED1[2];
  __IO uint16_t rCRC32INIRES_LO; /* CRC32 Initialization and Result, lower 16 bits */
  __IO uint16_t rCRC32INIRES_HI; /* CRC32 Initialization and Result, upper 16 bits */
  __IO uint16_t rCRC32RESR_LO; /* CRC32 Result Reverse, lower 16 bits */
  __IO uint16_t rCRC32RESR_HI; /* CRC32 Result Reverse, Upper 16 bits */
  __IO uint16_t rCRC16DI; /* Data Input for CRC16 computation */
  uint8_t  RESERVED2[2];
  __IO uint16_t rCRC16DIRB; /* CRC16 Data In Reverse */
  uint8_t  RESERVED3[2];
  __IO uint16_t rCRC16INIRES; /* CRC16 Initialization and Result register */
  uint8_t  RESERVED4[4];
  __IO uint16_t rCRC16RESR; /* CRC16 Result Reverse */
} CRC32_Type;


//*****************************************************************************
// CS Registers
//*****************************************************************************
typedef struct {
  union {    /* CSKEY Register */
    __IO uint32_t r;
    struct { /* CSKEY Bits */
      __IO uint32_t bKEY                	:	16;  /* Write xxxx_695Ah to unlock */
      __I  uint32_t bRESERVED0          	:	16;  /* Reserved */
    } b;
  } rKEY;
  union {    /* CSCTL0 Register */
    __IO uint32_t r;
    struct { /* CSCTL0 Bits */
      __IO uint32_t bDCOTUNE            	:	13;  /* DCO frequency tuning select */
      __I  uint32_t bRESERVED0          	:	3;  /* Reserved */
      __IO uint32_t bDCORSEL            	:	3;  /* DCO frequency range select */
      __I  uint32_t bRESERVED1          	:	3;  /* Reserved */
      __IO uint32_t bDCORES             	:	1;  /* Enables the DCO external resistor mode */
      __IO uint32_t bDCOEN              	:	1;  /* Enables the DCO oscillator */
      __IO uint32_t bDIS_DCO_DELAY_CNT  	:	1;  /*  */
      __I  uint32_t bRESERVED2          	:	7;  /* Reserved */
    } b;
  } rCTL0;
  union {    /* CSCTL1 Register */
    __IO uint32_t r;
    struct { /* CSCTL1 Bits */
      __IO uint32_t bSELM               	:	3;  /* Selects the MCLK source */
      __I  uint32_t bRESERVED0          	:	1;  /* Reserved */
      __IO uint32_t bSELS               	:	3;  /* Selects the SMCLK and HSMCLK source */
      __I  uint32_t bRESERVED1          	:	1;  /* Reserved */
      __IO uint32_t bSELA               	:	3;  /* Selects the ACLK source */
      __I  uint32_t bRESERVED2          	:	1;  /* Reserved */
      __IO uint32_t bSELB               	:	1;  /* Selects the BCLK source */
      __I  uint32_t bRESERVED3          	:	3;  /* Reserved */
      __IO uint32_t bDIVM               	:	3;  /* MCLK source divider */
      __I  uint32_t bRESERVED4          	:	1;  /* Reserved */
      __IO uint32_t bDIVHS              	:	3;  /* HSMCLK source divider */
      __I  uint32_t bRESERVED5          	:	1;  /* Reserved */
      __IO uint32_t bDIVA               	:	3;  /* ACLK source divider */
      __I  uint32_t bRESERVED6          	:	1;  /* Reserved */
      __IO uint32_t bDIVS               	:	3;  /* SMCLK source divider */
      __I  uint32_t bRESERVED7          	:	1;  /* Reserved */
    } b;
  } rCTL1;
  union {    /* CSCTL2 Register */
    __IO uint32_t r;
    struct { /* CSCTL2 Bits */
      __IO uint32_t bLFXTDRIVE          	:	3;  /* LFXT oscillator current can be adjusted to its drive needs */
      __IO uint32_t bRESERVED0          	:	4;  /* Reserved */
      __IO uint32_t bLFXTAGCOFF         	:	1;  /* Disables the automatic gain control of the LFXT crystal */
      __IO uint32_t bLFXT_EN            	:	1;  /* Turns on the LFXT oscillator regardless if used as a clock resource */
      __IO uint32_t bLFXTBYPASS         	:	1;  /* LFXT bypass select */
      __I  uint32_t bRESERVED1          	:	6;  /* Reserved */
      __IO uint32_t bHFXTDRIVE          	:	1;  /* HFXT oscillator drive selection */
      __IO uint32_t bRESERVED5          	:	2;  /* Reserved */
      __I  uint32_t bRESERVED2          	:	1;  /* Reserved */
      __IO uint32_t bHFXTFREQ           	:	3;  /* HFXT frequency selection */
      __I  uint32_t bRESERVED3          	:	1;  /* Reserved */
      __IO uint32_t bHFXT_EN            	:	1;  /* Turns on the HFXT oscillator regardless if used as a clock resource */
      __IO uint32_t bHFXTBYPASS         	:	1;  /* HFXT bypass select */
      __I  uint32_t bRESERVED4          	:	6;  /* Reserved */
    } b;
  } rCTL2;
  union {    /* CSCTL3 Register */
    __IO uint32_t r;
    struct { /* CSCTL3 Bits */
      __IO uint32_t bFCNTLF             	:	2;  /* Start flag counter for LFXT */
      __O  uint32_t bRFCNTLF            	:	1;  /* Reset start fault counter for LFXT */
      __IO uint32_t bFCNTLF_EN          	:	1;  /* Enable start fault counter for LFXT */
      __IO uint32_t bFCNTHF             	:	2;  /* Start flag counter for HFXT */
      __O  uint32_t bRFCNTHF            	:	1;  /* Reset start fault counter for HFXT */
      __IO uint32_t bFCNTHF_EN          	:	1;  /* Enable start fault counter for HFXT */
      __IO uint32_t bFCNTHF2            	:	2;  /* Start flag counter for HFXT2 */
      __O  uint32_t bRFCNTHF2           	:	1;  /* Reset start fault counter for HFXT2 */
      __IO uint32_t bFCNTHF2_EN         	:	1;  /* Enable start fault counter for HFXT2 */
      __I  uint32_t bRESERVED0          	:	20;  /* Reserved */
    } b;
  } rCTL3;
  union {    /* CSCTL4 Register */
    __IO uint32_t r;
    struct { /* CSCTL4 Bits */
      __IO uint32_t bHFXT2DRIVE         	:	3;  /* HFXT2 oscillator current can be adjusted to its drive needs */
      __I  uint32_t bRESERVED0          	:	1;  /* Reserved */
      __IO uint32_t bHFXT2FREQ          	:	3;  /* HFXT2 frequency selection */
      __I  uint32_t bRESERVED1          	:	1;  /* Reserved */
      __IO uint32_t bHFXT2_EN           	:	1;  /* Turns on the HFXT2 oscillator */
      __IO uint32_t bHFXT2BYPASS        	:	1;  /* HFXT2 bypass select */
      __I  uint32_t bRESERVED2          	:	22;  /* Reserved */
    } b;
  } rCTL4;
  union {    /* CSCTL5 Register */
    __IO uint32_t r;
    struct { /* CSCTL5 Bits */
      __IO uint32_t bREFCNTSEL          	:	3;  /* Reference counter source select */
      __IO uint32_t bREFCNTPS           	:	3;  /* Reference clock prescaler */
      __I  uint32_t bRESERVED0          	:	1;  /* Reserved */
      __O  uint32_t bCALSTART           	:	1;  /* Start clock calibration counters */
      __IO uint32_t bPERCNTSEL          	:	3;  /* Period counter source select */
      __I  uint32_t bRESERVED1          	:	21;  /* Reserved */
    } b;
  } rCTL5;
  union {    /* CSCTL6 Register */
    __IO uint32_t r;
    struct { /* CSCTL6 Bits */
      __I  uint32_t bPERCNT             	:	16;  /* Calibration period counter */
      __I  uint32_t bRESERVED0          	:	16;  /* Reserved */
    } b;
  } rCTL6;
  union {    /* CSCTL7 Register */
    __IO uint32_t r;
    struct { /* CSCTL7 Bits */
      __IO uint32_t bREFCNT             	:	16;  /* Calibration reference period counter */
      __I  uint32_t bRESERVED0          	:	16;  /* Reserved */
    } b;
  } rCTL7;
  uint8_t  RESERVED0[12];
  union {    /* CSCLKEN Register */
    __IO uint32_t r;
    struct { /* CSCLKEN Bits */
      __IO uint32_t bACLK_EN            	:	1;  /* ACLK system clock conditional request enable */
      __IO uint32_t bMCLK_EN            	:	1;  /* MCLK system clock conditional request enable */
      __IO uint32_t bHSMCLK_EN          	:	1;  /* HSMCLK system clock conditional request enable */
      __IO uint32_t bSMCLK_EN           	:	1;  /* SMCLK system clock conditional request enable */
      __I  uint32_t bRESERVED0          	:	4;  /* Reserved */
      __IO uint32_t bVLO_EN             	:	1;  /* Turns on the VLO oscillator */
      __IO uint32_t bREFO_EN            	:	1;  /* Turns on the REFO oscillator */
      __IO uint32_t bMODOSC_EN          	:	1;  /* Turns on the MODOSC oscillator */
      __I  uint32_t bRESERVED1          	:	4;  /* Reserved */
      __IO uint32_t bREFOFSEL           	:	1;  /* Selects REFO nominal frequency */
      __I  uint32_t bRESERVED2          	:	16;  /* Reserved */
    } b;
  } rCLKEN;
  union {    /* CSSTAT Register */
    __I uint32_t r;
    struct { /* CSSTAT Bits */
      __I  uint32_t bDCO_ON             	:	1;  /* DCO status */
      __I  uint32_t bDCOBIAS_ON         	:	1;  /* DCO bias status */
      __I  uint32_t bHFXT_ON            	:	1;  /* HFXT status */
      __I  uint32_t bHFXT2_ON           	:	1;  /* HFXT2 status */
      __I  uint32_t bMODOSC_ON          	:	1;  /* MODOSC status */
      __I  uint32_t bVLO_ON             	:	1;  /* VLO status */
      __I  uint32_t bLFXT_ON            	:	1;  /* LFXT status */
      __I  uint32_t bREFO_ON            	:	1;  /* REFO status */
      __I  uint32_t bRESERVED0          	:	8;  /* Reserved */
      __I  uint32_t bACLK_ON            	:	1;  /* ACLK system clock status */
      __I  uint32_t bMCLK_ON            	:	1;  /* MCLK system clock status */
      __I  uint32_t bHSMCLK_ON          	:	1;  /* HSMCLK system clock status */
      __I  uint32_t bSMCLK_ON           	:	1;  /* SMCLK system clock status */
      __I  uint32_t bMODCLK_ON          	:	1;  /* MODCLK system clock status */
      __I  uint32_t bVLOCLK_ON          	:	1;  /* VLOCLK system clock status */
      __I  uint32_t bLFXTCLK_ON         	:	1;  /* LFXTCLK system clock status */
      __I  uint32_t bREFOCLK_ON         	:	1;  /* REFOCLK system clock status */
      __I  uint32_t bACLK_READY         	:	1;  /* ACLK Ready status */
      __I  uint32_t bMCLK_READY         	:	1;  /* MCLK Ready status */
      __I  uint32_t bHSMCLK_READY       	:	1;  /* HSMCLK Ready status */
      __I  uint32_t bSMCLK_READY        	:	1;  /* SMCLK Ready status */
      __I  uint32_t bBCLK_READY         	:	1;  /* BCLK Ready status */
      __I  uint32_t bRESERVED1          	:	3;  /* Reserved */
    } b;
  } rSTAT;
  uint8_t  RESERVED1[8];
  union {    /* CSIE Register */
    __IO uint32_t r;
    struct { /* CSIE Bits */
      __IO uint32_t bLFXTIE             	:	1;  /* LFXT oscillator fault flag interrupt enable */
      __IO uint32_t bHFXTIE             	:	1;  /* HFXT oscillator fault flag interrupt enable */
      __IO uint32_t bHFXT2IE            	:	1;  /* HFXT2 oscillator fault flag interrupt enable */
      __I  uint32_t bRESERVED0          	:	1;  /* Reserved */
      __IO uint32_t bDCOMINIE           	:	1;  /* DCO minimum fault flag interrupt enable */
      __IO uint32_t bDCOMAXIE           	:	1;  /* DCO maximum fault flag interrupt enable */
      __IO uint32_t bDCORIE             	:	1;  /* DCO external resistor fault flag interrupt enable */
      __I  uint32_t bRESERVED1          	:	1;  /* Reserved */
      __IO uint32_t bFCNTLFIE           	:	1;  /* Start fault counter interrupt enable LFXT */
      __IO uint32_t bFCNTHFIE           	:	1;  /* Start fault counter interrupt enable HFXT */
      __IO uint32_t bFCNTHF2IE          	:	1;  /* Start fault counter interrupt enable HFXT2 */
      __I  uint32_t bRESERVED2          	:	1;  /* Reserved */
      __IO uint32_t bPLLOOLIE           	:	1;  /* PLL out-of-lock interrupt enable */
      __IO uint32_t bPLLLOSIE           	:	1;  /* PLL loss-of-signal interrupt enable */
      __IO uint32_t bPLLOORIE           	:	1;  /* PLL out-of-range interrupt enable */
      __IO uint32_t bCALIE              	:	1;  /* REFCNT period counter interrupt enable */
      __I  uint32_t bRESERVED3          	:	16;  /* Reserved */
    } b;
  } rIE;
  uint8_t  RESERVED2[4];
  union {    /* CSIFG Register */
    __I uint32_t r;
    struct { /* CSIFG Bits */
      __I  uint32_t bLFXTIFG            	:	1;  /* LFXT oscillator fault flag */
      __I  uint32_t bHFXTIFG            	:	1;  /* HFXT oscillator fault flag */
      __I  uint32_t bHFXT2IFG           	:	1;  /* HFXT2 oscillator fault flag */
      __I  uint32_t bRESERVED0          	:	1;  /* Reserved */
      __I  uint32_t bDCOMINIFG          	:	1;  /* DCO minimum fault flag */
      __I  uint32_t bDCOMAXIFG          	:	1;  /* DCO maximum fault flag */
      __I  uint32_t bDCORIFG            	:	1;  /* DCO external resistor fault flag */
      __I  uint32_t bRESERVED1          	:	1;  /* Reserved */
      __I  uint32_t bFCNTLFIFG          	:	1;  /* Start fault counter interrupt flag LFXT */
      __I  uint32_t bFCNTHFIFG          	:	1;  /* Start fault counter interrupt flag HFXT */
      __I  uint32_t bRESERVED2          	:	1;  /* Reserved */
      __I  uint32_t bFCNTHF2IFG         	:	1;  /* Start fault counter interrupt flag HFXT2 */
      __I  uint32_t bPLLOOLIFG          	:	1;  /* PLL out-of-lock interrupt flag */
      __I  uint32_t bPLLLOSIFG          	:	1;  /* PLL loss-of-signal interrupt flag */
      __I  uint32_t bPLLOORIFG          	:	1;  /* PLL out-of-range interrupt flag */
      __I  uint32_t bCALIFG             	:	1;  /* REFCNT period counter expired */
      __I  uint32_t bRESERVED3          	:	16;  /* Reserved */
    } b;
  } rIFG;
  uint8_t  RESERVED3[4];
  union {    /* CSCLRIFG Register */
    __IO uint32_t r;
    struct { /* CSCLRIFG Bits */
      __O  uint32_t bCLR_LFXTIFG        	:	1;  /* Clear LFXT oscillator fault interrupt flag */
      __O  uint32_t bCLR_HFXTIFG        	:	1;  /* Clear HFXT oscillator fault interrupt flag */
      __O  uint32_t bCLR_HFXT2IFG       	:	1;  /* Clear HFXT2 oscillator fault interrupt flag */
      __I  uint32_t bRESERVED0          	:	1;  /* Reserved */
      __O  uint32_t bCLR_DCOMINIFG      	:	1;  /* Clear DCO minimum fault interrupt flag */
      __O  uint32_t bCLR_DCOMAXIFG      	:	1;  /* Clear DCO maximum fault interrupt flag */
      __O  uint32_t bCLR_DCORIFG        	:	1;  /* Clear DCO external resistor fault interrupt flag */
      __O  uint32_t bCLR_CALIFG         	:	1;  /* REFCNT period counter clear interrupt flag */
      __O  uint32_t bCLR_FCNTLFIFG      	:	1;  /* Start fault counter clear interrupt flag LFXT */
      __O  uint32_t bCLR_FCNTHFIFG      	:	1;  /* Start fault counter clear interrupt flag HFXT */
      __O  uint32_t bCLR_FCNTHF2IFG     	:	1;  /* Start fault counter clear interrupt flag HFXT2 */
      __I  uint32_t bRESERVED1          	:	1;  /* Reserved */
      __O  uint32_t bCLR_PLLOOLIFG      	:	1;  /* PLL out-of-lock clear interrupt flag */
      __O  uint32_t bCLR_PLLLOSIFG      	:	1;  /* PLL loss-of-signal clear interrupt flag */
      __O  uint32_t bCLR_PLLOORIFG      	:	1;  /* PLL out-of-range clear interrupt flag */
      __I  uint32_t bRESERVED2          	:	17;  /* Reserved */
    } b;
  } rCLRIFG;
  uint8_t  RESERVED4[4];
  union {    /* CSSETIFG Register */
    __IO uint32_t r;
    struct { /* CSSETIFG Bits */
      __O  uint32_t bSET_LFXTIFG        	:	1;  /* Set LFXT oscillator fault interrupt flag */
      __O  uint32_t bSET_HFXTIFG        	:	1;  /* Set HFXT oscillator fault interrupt flag */
      __O  uint32_t bSET_HFXT2IFG       	:	1;  /* Set HFXT2 oscillator fault interrupt flag */
      __I  uint32_t bRESERVED0          	:	1;  /* Reserved */
      __O  uint32_t bSET_DCOMINIFG      	:	1;  /* Set DCO minimum fault interrupt flag */
      __O  uint32_t bSET_DCOMAXIFG      	:	1;  /* Set DCO maximum fault interrupt flag */
      __O  uint32_t bSET_DCORIFG        	:	1;  /* Set DCO external resistor fault interrupt flag */
      __O  uint32_t bSET_CALIFG         	:	1;  /* REFCNT period counter set interrupt flag */
      __O  uint32_t bSET_FCNTLFIFG      	:	1;  /* Start fault counter set interrupt flag LFXT */
      __O  uint32_t bSET_FCNTHFIFG      	:	1;  /* Start fault counter set interrupt flag HFXT */
      __O  uint32_t bSET_FCNTHF2IFG     	:	1;  /* Start fault counter set interrupt flag HFXT2 */
      __I  uint32_t bRESERVED1          	:	1;  /* Reserved */
      __O  uint32_t bSET_PLLOOLIFG      	:	1;  /* PLL out-of-lock set interrupt flag */
      __O  uint32_t bSET_PLLLOSIFG      	:	1;  /* PLL loss-of-signal set interrupt flag */
      __O  uint32_t bSET_PLLOORIFG      	:	1;  /* PLL out-of-range set interrupt flag */
      __I  uint32_t bRESERVED2          	:	17;  /* Reserved */
    } b;
  } rSETIFG;
  uint8_t  RESERVED5[4];
  union {    /* CSDCOERCAL Register */
    __IO uint32_t r;
    struct { /* CSDCOERCAL Bits */
      __IO uint32_t bDCO_TCTRIM         	:	2;  /* DCO Temperature compensation Trim */
      __I  uint32_t bRESERVED0          	:	14;  /* Reserved */
      __IO uint32_t bDCO_FTRIM          	:	11;  /* DCO frequency trim */
      __I  uint32_t bRESERVED1          	:	5;  /* Reserved */
    } b;
  } rDCOERCAL;
} CS_Type;


//*****************************************************************************
// DIO Registers
//*****************************************************************************
typedef struct {
  union {    /* PAIN Register */
    __I uint16_t r;
    struct { /* PAIN Bits */
      __I  uint16_t bP1IN               	:	8;  /* Port 1 Input */
      __I  uint16_t bP2IN               	:	8;  /* Port 2 Input */
    } b;
  } rPAIN;
  union {    /* PAOUT Register */
    __IO uint16_t r;
    struct { /* PAOUT Bits */
      __IO uint16_t bP1OUT              	:	8;  /* Port 1 Output */
      __IO uint16_t bP2OUT              	:	8;  /* Port 2 Output */
    } b;
  } rPAOUT;
  union {    /* PADIR Register */
    __IO uint16_t r;
    struct { /* PADIR Bits */
      __IO uint16_t bP1DIR              	:	8;  /* Port 1 Direction */
      __IO uint16_t bP2DIR              	:	8;  /* Port 2 Direction */
    } b;
  } rPADIR;
  union {    /* PAREN Register */
    __IO uint16_t r;
    struct { /* PAREN Bits */
      __IO uint16_t bP1REN              	:	8;  /* Port 1 Resistor Enable */
      __IO uint16_t bP2REN              	:	8;  /* Port 2 Resistor Enable */
    } b;
  } rPAREN;
  union {    /* PADS Register */
    __IO uint16_t r;
    struct { /* PADS Bits */
      __IO uint16_t bP1DS               	:	8;  /* Port 1 Drive Strength */
      __IO uint16_t bP2DS               	:	8;  /* Port 2 Drive Strength */
    } b;
  } rPADS;
  union {    /* PASEL0 Register */
    __IO uint16_t r;
    struct { /* PASEL0 Bits */
      __IO uint16_t bP1SEL0             	:	8;  /* Port 1 Select 0 */
      __IO uint16_t bP2SEL0             	:	8;  /* Port 2 Select 0 */
    } b;
  } rPASEL0;
  union {    /* PASEL1 Register */
    __IO uint16_t r;
    struct { /* PASEL1 Bits */
      __IO uint16_t bP1SEL1             	:	8;  /* Port 1 Select 1 */
      __IO uint16_t bP2SEL1             	:	8;  /* Port 2 Select 1 */
    } b;
  } rPASEL1;
  union {    /* P1IV Register */
    __I uint16_t r;
    struct { /* P1IV Bits */
      __I  uint16_t bP1IV               	:	5;  /* Port 1 interrupt vector value */
      __I  uint16_t bRESERVED0          	:	11;  /* Reserved */
    } b;
  } rP1IV;
  uint8_t  RESERVED0[6];
  union {    /* PASELC Register */
    __IO uint16_t r;
    struct { /* PASELC Bits */
      __IO uint16_t bP1SELC             	:	8;  /* Port 1 Complement Select */
      __IO uint16_t bP2SELC             	:	8;  /* Port 2 Complement Select */
    } b;
  } rPASELC;
  union {    /* PAIES Register */
    __IO uint16_t r;
    struct { /* PAIES Bits */
      __IO uint16_t bP1IES              	:	8;  /* Port 1 Interrupt Edge Select */
      __IO uint16_t bP2IES              	:	8;  /* Port 2 Interrupt Edge Select */
    } b;
  } rPAIES;
  union {    /* PAIE Register */
    __IO uint16_t r;
    struct { /* PAIE Bits */
      __IO uint16_t bP1IE               	:	8;  /* Port 1 Interrupt Enable */
      __IO uint16_t bP2IE               	:	8;  /* Port 2 Interrupt Enable */
    } b;
  } rPAIE;
  union {    /* PAIFG Register */
    __IO uint16_t r;
    struct { /* PAIFG Bits */
      __IO uint16_t bP1IFG              	:	8;  /* Port 1 Interrupt Flag */
      __IO uint16_t bP2IFG              	:	8;  /* Port 2 Interrupt Flag */
    } b;
  } rPAIFG;
  union {    /* P2IV Register */
    __I uint16_t r;
    struct { /* P2IV Bits */
      __I  uint16_t bP2IV               	:	5;  /* Port 2 interrupt vector value */
      __I  uint16_t bRESERVED0          	:	11;  /* Reserved */
    } b;
  } rP2IV;
  union {    /* PBIN Register */
    __I uint16_t r;
    struct { /* PBIN Bits */
      __I  uint16_t bP3IN               	:	8;  /* Port 3 Input */
      __I  uint16_t bP4IN               	:	8;  /* Port 4 Input */
    } b;
  } rPBIN;
  union {    /* PBOUT Register */
    __IO uint16_t r;
    struct { /* PBOUT Bits */
      __IO uint16_t bP3OUT              	:	8;  /* Port 3 Output */
      __IO uint16_t bP4OUT              	:	8;  /* Port 4 Output */
    } b;
  } rPBOUT;
  union {    /* PBDIR Register */
    __IO uint16_t r;
    struct { /* PBDIR Bits */
      __IO uint16_t bP3DIR              	:	8;  /* Port 3 Direction */
      __IO uint16_t bP4DIR              	:	8;  /* Port 4 Direction */
    } b;
  } rPBDIR;
  union {    /* PBREN Register */
    __IO uint16_t r;
    struct { /* PBREN Bits */
      __IO uint16_t bP3REN              	:	8;  /* Port 3 Resistor Enable */
      __IO uint16_t bP4REN              	:	8;  /* Port 4 Resistor Enable */
    } b;
  } rPBREN;
  union {    /* PBDS Register */
    __IO uint16_t r;
    struct { /* PBDS Bits */
      __IO uint16_t bP3DS               	:	8;  /* Port 3 Drive Strength */
      __IO uint16_t bP4DS               	:	8;  /* Port 4 Drive Strength */
    } b;
  } rPBDS;
  union {    /* PBSEL0 Register */
    __IO uint16_t r;
    struct { /* PBSEL0 Bits */
      __IO uint16_t bP3SEL0             	:	8;  /* Port 3 Select 0 */
      __IO uint16_t bP4SEL0             	:	8;  /* Port 4 Select 0 */
    } b;
  } rPBSEL0;
  union {    /* PBSEL1 Register */
    __IO uint16_t r;
    struct { /* PBSEL1 Bits */
      __IO uint16_t bP3SEL1             	:	8;  /* Port 3 Select 1 */
      __IO uint16_t bP4SEL1             	:	8;  /* Port 4 Select 1 */
    } b;
  } rPBSEL1;
  union {    /* P3IV Register */
    __I uint16_t r;
    struct { /* P3IV Bits */
      __I  uint16_t bP3IV               	:	5;  /* Port 3 interrupt vector value */
      __I  uint16_t bRESERVED0          	:	11;  /* Reserved */
    } b;
  } rP3IV;
  uint8_t  RESERVED1[6];
  union {    /* PBSELC Register */
    __IO uint16_t r;
    struct { /* PBSELC Bits */
      __IO uint16_t bP3SELC             	:	8;  /* Port 3 Complement Select */
      __IO uint16_t bP4SELC             	:	8;  /* Port 4 Complement Select */
    } b;
  } rPBSELC;
  union {    /* PBIES Register */
    __IO uint16_t r;
    struct { /* PBIES Bits */
      __IO uint16_t bP3IES              	:	8;  /* Port 3 Interrupt Edge Select */
      __IO uint16_t bP4IES              	:	8;  /* Port 4 Interrupt Edge Select */
    } b;
  } rPBIES;
  union {    /* PBIE Register */
    __IO uint16_t r;
    struct { /* PBIE Bits */
      __IO uint16_t bP3IE               	:	8;  /* Port 3 Interrupt Enable */
      __IO uint16_t bP4IE               	:	8;  /* Port 4 Interrupt Enable */
    } b;
  } rPBIE;
  union {    /* PBIFG Register */
    __IO uint16_t r;
    struct { /* PBIFG Bits */
      __IO uint16_t bP3IFG              	:	8;  /* Port 3 Interrupt Flag */
      __IO uint16_t bP4IFG              	:	8;  /* Port 4 Interrupt Flag */
    } b;
  } rPBIFG;
  union {    /* P4IV Register */
    __I uint16_t r;
    struct { /* P4IV Bits */
      __I  uint16_t bP4IV               	:	5;  /* Port 4 interrupt vector value */
      __I  uint16_t bRESERVED0          	:	11;  /* Reserved */
    } b;
  } rP4IV;
  union {    /* PCIN Register */
    __I uint16_t r;
    struct { /* PCIN Bits */
      __I  uint16_t bP5IN               	:	8;  /* Port 5 Input */
      __I  uint16_t bP6IN               	:	8;  /* Port 6 Input */
    } b;
  } rPCIN;
  union {    /* PCOUT Register */
    __IO uint16_t r;
    struct { /* PCOUT Bits */
      __IO uint16_t bP5OUT              	:	8;  /* Port 5 Output */
      __IO uint16_t bP6OUT              	:	8;  /* Port 6 Output */
    } b;
  } rPCOUT;
  union {    /* PCDIR Register */
    __IO uint16_t r;
    struct { /* PCDIR Bits */
      __IO uint16_t bP5DIR              	:	8;  /* Port 5 Direction */
      __IO uint16_t bP6DIR              	:	8;  /* Port 6 Direction */
    } b;
  } rPCDIR;
  union {    /* PCREN Register */
    __IO uint16_t r;
    struct { /* PCREN Bits */
      __IO uint16_t bP5REN              	:	8;  /* Port 5 Resistor Enable */
      __IO uint16_t bP6REN              	:	8;  /* Port 6 Resistor Enable */
    } b;
  } rPCREN;
  union {    /* PCDS Register */
    __IO uint16_t r;
    struct { /* PCDS Bits */
      __IO uint16_t bP5DS               	:	8;  /* Port 5 Drive Strength */
      __IO uint16_t bP6DS               	:	8;  /* Port 6 Drive Strength */
    } b;
  } rPCDS;
  union {    /* PCSEL0 Register */
    __IO uint16_t r;
    struct { /* PCSEL0 Bits */
      __IO uint16_t bP5SEL0             	:	8;  /* Port 5 Select 0 */
      __IO uint16_t bP6SEL0             	:	8;  /* Port 6 Select 0 */
    } b;
  } rPCSEL0;
  union {    /* PCSEL1 Register */
    __IO uint16_t r;
    struct { /* PCSEL1 Bits */
      __IO uint16_t bP5SEL1             	:	8;  /* Port 5 Select 1 */
      __IO uint16_t bP6SEL1             	:	8;  /* Port 6 Select 1 */
    } b;
  } rPCSEL1;
  union {    /* P5IV Register */
    __I uint16_t r;
    struct { /* P5IV Bits */
      __I  uint16_t bP5IV               	:	5;  /* Port 5 interrupt vector value */
      __I  uint16_t bRESERVED0          	:	11;  /* Reserved */
    } b;
  } rP5IV;
  uint8_t  RESERVED2[6];
  union {    /* PCSELC Register */
    __IO uint16_t r;
    struct { /* PCSELC Bits */
      __IO uint16_t bP5SELC             	:	8;  /* Port 5 Complement Select */
      __IO uint16_t bP6SELC             	:	8;  /* Port 6 Complement Select */
    } b;
  } rPCSELC;
  union {    /* PCIES Register */
    __IO uint16_t r;
    struct { /* PCIES Bits */
      __IO uint16_t bP5IES              	:	8;  /* Port 5 Interrupt Edge Select */
      __IO uint16_t bP6IES              	:	8;  /* Port 6 Interrupt Edge Select */
    } b;
  } rPCIES;
  union {    /* PCIE Register */
    __IO uint16_t r;
    struct { /* PCIE Bits */
      __IO uint16_t bP5IE               	:	8;  /* Port 5 Interrupt Enable */
      __IO uint16_t bP6IE               	:	8;  /* Port 6 Interrupt Enable */
    } b;
  } rPCIE;
  union {    /* PCIFG Register */
    __IO uint16_t r;
    struct { /* PCIFG Bits */
      __IO uint16_t bP5IFG              	:	8;  /* Port 5 Interrupt Flag */
      __IO uint16_t bP6IFG              	:	8;  /* Port 6 Interrupt Flag */
    } b;
  } rPCIFG;
  union {    /* P6IV Register */
    __I uint16_t r;
    struct { /* P6IV Bits */
      __I  uint16_t bP6IV               	:	5;  /* Port 6 interrupt vector value */
      __I  uint16_t bRESERVED0          	:	11;  /* Reserved */
    } b;
  } rP6IV;
  union {    /* PDIN Register */
    __I uint16_t r;
    struct { /* PDIN Bits */
      __I  uint16_t bP7IN               	:	8;  /* Port 7 Input */
      __I  uint16_t bP8IN               	:	8;  /* Port 8 Input */
    } b;
  } rPDIN;
  union {    /* PDOUT Register */
    __IO uint16_t r;
    struct { /* PDOUT Bits */
      __IO uint16_t bP7OUT              	:	8;  /* Port 7 Output */
      __IO uint16_t bP8OUT              	:	8;  /* Port 8 Output */
    } b;
  } rPDOUT;
  union {    /* PDDIR Register */
    __IO uint16_t r;
    struct { /* PDDIR Bits */
      __IO uint16_t bP7DIR              	:	8;  /* Port 7 Direction */
      __IO uint16_t bP8DIR              	:	8;  /* Port 8 Direction */
    } b;
  } rPDDIR;
  union {    /* PDREN Register */
    __IO uint16_t r;
    struct { /* PDREN Bits */
      __IO uint16_t bP7REN              	:	8;  /* Port 7 Resistor Enable */
      __IO uint16_t bP8REN              	:	8;  /* Port 8 Resistor Enable */
    } b;
  } rPDREN;
  union {    /* PDDS Register */
    __IO uint16_t r;
    struct { /* PDDS Bits */
      __IO uint16_t bP7DS               	:	8;  /* Port 7 Drive Strength */
      __IO uint16_t bP8DS               	:	8;  /* Port 8 Drive Strength */
    } b;
  } rPDDS;
  union {    /* PDSEL0 Register */
    __IO uint16_t r;
    struct { /* PDSEL0 Bits */
      __IO uint16_t bP7SEL0             	:	8;  /* Port 7 Select 0 */
      __IO uint16_t bP8SEL0             	:	8;  /* Port 8 Select 0 */
    } b;
  } rPDSEL0;
  union {    /* PDSEL1 Register */
    __IO uint16_t r;
    struct { /* PDSEL1 Bits */
      __IO uint16_t bP7SEL1             	:	8;  /* Port 7 Select 1 */
      __IO uint16_t bP8SEL1             	:	8;  /* Port 8 Select 1 */
    } b;
  } rPDSEL1;
  union {    /* P7IV Register */
    __I uint16_t r;
    struct { /* P7IV Bits */
      __I  uint16_t bP7IV               	:	5;  /* Port 7 interrupt vector value */
      __I  uint16_t bRESERVED0          	:	11;  /* Reserved */
    } b;
  } rP7IV;
  uint8_t  RESERVED3[6];
  union {    /* PDSELC Register */
    __IO uint16_t r;
    struct { /* PDSELC Bits */
      __IO uint16_t bP7SELC             	:	8;  /* Port 7 Complement Select */
      __IO uint16_t bP8SELC             	:	8;  /* Port 8 Complement Select */
    } b;
  } rPDSELC;
  union {    /* PDIES Register */
    __IO uint16_t r;
    struct { /* PDIES Bits */
      __IO uint16_t bP7IES              	:	8;  /* Port 7 Interrupt Edge Select */
      __IO uint16_t bP8IES              	:	8;  /* Port 8 Interrupt Edge Select */
    } b;
  } rPDIES;
  union {    /* PDIE Register */
    __IO uint16_t r;
    struct { /* PDIE Bits */
      __IO uint16_t bP7IE               	:	8;  /* Port 7 Interrupt Enable */
      __IO uint16_t bP8IE               	:	8;  /* Port 8 Interrupt Enable */
    } b;
  } rPDIE;
  union {    /* PDIFG Register */
    __IO uint16_t r;
    struct { /* PDIFG Bits */
      __IO uint16_t bP7IFG              	:	8;  /* Port 7 Interrupt Flag */
      __IO uint16_t bP8IFG              	:	8;  /* Port 8 Interrupt Flag */
    } b;
  } rPDIFG;
  union {    /* P8IV Register */
    __I uint16_t r;
    struct { /* P8IV Bits */
      __I  uint16_t bP8IV               	:	5;  /* Port 8 interrupt vector value */
      __I  uint16_t bRESERVED0          	:	11;  /* Reserved */
    } b;
  } rP8IV;
  union {    /* PEIN Register */
    __I uint16_t r;
    struct { /* PEIN Bits */
      __I  uint16_t bP9IN               	:	8;  /* Port 9 Input */
      __I  uint16_t bP10IN              	:	8;  /* Port 10 Input */
    } b;
  } rPEIN;
  union {    /* PEOUT Register */
    __IO uint16_t r;
    struct { /* PEOUT Bits */
      __IO uint16_t bP9OUT              	:	8;  /* Port 9 Output */
      __IO uint16_t bP10OUT             	:	8;  /* Port 10 Output */
    } b;
  } rPEOUT;
  union {    /* PEDIR Register */
    __IO uint16_t r;
    struct { /* PEDIR Bits */
      __IO uint16_t bP9DIR              	:	8;  /* Port 9 Direction */
      __IO uint16_t bP10DIR             	:	8;  /* Port 10 Direction */
    } b;
  } rPEDIR;
  union {    /* PEREN Register */
    __IO uint16_t r;
    struct { /* PEREN Bits */
      __IO uint16_t bP9REN              	:	8;  /* Port 9 Resistor Enable */
      __IO uint16_t bP10REN             	:	8;  /* Port 10 Resistor Enable */
    } b;
  } rPEREN;
  union {    /* PEDS Register */
    __IO uint16_t r;
    struct { /* PEDS Bits */
      __IO uint16_t bP9DS               	:	8;  /* Port 9 Drive Strength */
      __IO uint16_t bP10DS              	:	8;  /* Port 10 Drive Strength */
    } b;
  } rPEDS;
  union {    /* PESEL0 Register */
    __IO uint16_t r;
    struct { /* PESEL0 Bits */
      __IO uint16_t bP9SEL0             	:	8;  /* Port 9 Select 0 */
      __IO uint16_t bP10SEL0            	:	8;  /* Port 10 Select 0 */
    } b;
  } rPESEL0;
  union {    /* PESEL1 Register */
    __IO uint16_t r;
    struct { /* PESEL1 Bits */
      __IO uint16_t bP9SEL1             	:	8;  /* Port 9 Select 1 */
      __IO uint16_t bP10SEL1            	:	8;  /* Port 10 Select 1 */
    } b;
  } rPESEL1;
  union {    /* P9IV Register */
    __I uint16_t r;
    struct { /* P9IV Bits */
      __I  uint16_t bP9IV               	:	5;  /* Port 9 interrupt vector value */
      __I  uint16_t bRESERVED0          	:	11;  /* Reserved */
    } b;
  } rP9IV;
  uint8_t  RESERVED4[6];
  union {    /* PESELC Register */
    __IO uint16_t r;
    struct { /* PESELC Bits */
      __IO uint16_t bP9SELC             	:	8;  /* Port 9 Complement Select */
      __IO uint16_t bP10SELC            	:	8;  /* Port 10 Complement Select */
    } b;
  } rPESELC;
  union {    /* PEIES Register */
    __IO uint16_t r;
    struct { /* PEIES Bits */
      __IO uint16_t bP9IES              	:	8;  /* Port 9 Interrupt Edge Select */
      __IO uint16_t bP10IES             	:	8;  /* Port 10 Interrupt Edge Select */
    } b;
  } rPEIES;
  union {    /* PEIE Register */
    __IO uint16_t r;
    struct { /* PEIE Bits */
      __IO uint16_t bP9IE               	:	8;  /* Port 9 Interrupt Enable */
      __IO uint16_t bP10IE              	:	8;  /* Port 10 Interrupt Enable */
    } b;
  } rPEIE;
  union {    /* PEIFG Register */
    __IO uint16_t r;
    struct { /* PEIFG Bits */
      __IO uint16_t bP9IFG              	:	8;  /* Port 9 Interrupt Flag */
      __IO uint16_t bP10IFG             	:	8;  /* Port 10 Interrupt Flag */
    } b;
  } rPEIFG;
  union {    /* P10IV Register */
    __I uint16_t r;
    struct { /* P10IV Bits */
      __I  uint16_t bP10IV              	:	5;  /* Port 10 interrupt vector value */
      __I  uint16_t bRESERVED0          	:	11;  /* Reserved */
    } b;
  } rP10IV;
  uint8_t  RESERVED5[128];
  __I uint16_t rPJIN; /* Port J Input */
  __IO uint16_t rPJOUT; /* Port J Output */
  __IO uint16_t rPJDIR; /* Port J Direction */
  __IO uint16_t rPJREN; /* Port J Resistor Enable */
  __IO uint16_t rPJDS; /* Port J Drive Strength */
  __IO uint16_t rPJSEL0; /* Port J Select 0 */
  __IO uint16_t rPJSEL1; /* Port J Select 1 */
  uint8_t  RESERVED6[8];
  __IO uint16_t rPJSELC; /* Port J Complement Select */
} DIO_Type;


//*****************************************************************************
// DMA Registers
//*****************************************************************************
typedef struct {
  union {    /* DMA_DEVICE_CFG Register */
    __I uint32_t r;
    struct { /* DMA_DEVICE_CFG Bits */
      __I  uint32_t bNUM_DMA_CHANNELS   	:	8;  /* Number of DMA channels available */
      __I  uint32_t bNUM_SRC_PER_CHANNEL	:	8;  /* Number of DMA sources per channel */
      __I  uint32_t bRESERVED0          	:	16;  /* Reserved */
    } b;
  } rDEVICE_CFG;
  union {    /* DMA_SW_CHTRIG Register */
    __IO uint32_t r;
    struct { /* DMA_SW_CHTRIG Bits */
      __IO uint32_t bCH0                	:	1;  /* Write 1, triggers DMA_CHANNEL0 */
      __IO uint32_t bCH1                	:	1;  /* Write 1, triggers DMA_CHANNEL1 */
      __IO uint32_t bCH2                	:	1;  /* Write 1, triggers DMA_CHANNEL2 */
      __IO uint32_t bCH3                	:	1;  /* Write 1, triggers DMA_CHANNEL3 */
      __IO uint32_t bCH4                	:	1;  /* Write 1, triggers DMA_CHANNEL4 */
      __IO uint32_t bCH5                	:	1;  /* Write 1, triggers DMA_CHANNEL5 */
      __IO uint32_t bCH6                	:	1;  /* Write 1, triggers DMA_CHANNEL6 */
      __IO uint32_t bCH7                	:	1;  /* Write 1, triggers DMA_CHANNEL7 */
      __IO uint32_t bCH8                	:	1;  /* Write 1, triggers DMA_CHANNEL8 */
      __IO uint32_t bCH9                	:	1;  /* Write 1, triggers DMA_CHANNEL9 */
      __IO uint32_t bCH10               	:	1;  /* Write 1, triggers DMA_CHANNEL10 */
      __IO uint32_t bCH11               	:	1;  /* Write 1, triggers DMA_CHANNEL11 */
      __IO uint32_t bCH12               	:	1;  /* Write 1, triggers DMA_CHANNEL12 */
      __IO uint32_t bCH13               	:	1;  /* Write 1, triggers DMA_CHANNEL13 */
      __IO uint32_t bCH14               	:	1;  /* Write 1, triggers DMA_CHANNEL14 */
      __IO uint32_t bCH15               	:	1;  /* Write 1, triggers DMA_CHANNEL15 */
      __IO uint32_t bCH16               	:	1;  /* Write 1, triggers DMA_CHANNEL16 */
      __IO uint32_t bCH17               	:	1;  /* Write 1, triggers DMA_CHANNEL17 */
      __IO uint32_t bCH18               	:	1;  /* Write 1, triggers DMA_CHANNEL18 */
      __IO uint32_t bCH19               	:	1;  /* Write 1, triggers DMA_CHANNEL19 */
      __IO uint32_t bCH20               	:	1;  /* Write 1, triggers DMA_CHANNEL20 */
      __IO uint32_t bCH21               	:	1;  /* Write 1, triggers DMA_CHANNEL21 */
      __IO uint32_t bCH22               	:	1;  /* Write 1, triggers DMA_CHANNEL22 */
      __IO uint32_t bCH23               	:	1;  /* Write 1, triggers DMA_CHANNEL23 */
      __IO uint32_t bCH24               	:	1;  /* Write 1, triggers DMA_CHANNEL24 */
      __IO uint32_t bCH25               	:	1;  /* Write 1, triggers DMA_CHANNEL25 */
      __IO uint32_t bCH26               	:	1;  /* Write 1, triggers DMA_CHANNEL26 */
      __IO uint32_t bCH27               	:	1;  /* Write 1, triggers DMA_CHANNEL27 */
      __IO uint32_t bCH28               	:	1;  /* Write 1, triggers DMA_CHANNEL28 */
      __IO uint32_t bCH29               	:	1;  /* Write 1, triggers DMA_CHANNEL29 */
      __IO uint32_t bCH30               	:	1;  /* Write 1, triggers DMA_CHANNEL30 */
      __IO uint32_t bCH31               	:	1;  /* Write 1, triggers DMA_CHANNEL31 */
    } b;
  } rSW_CHTRIG;
  uint8_t  RESERVED0[8];
  union {    /* DMA_CH0_SRCCFG Register */
    __IO uint32_t r;
    struct { /* DMA_CH0_SRCCFG Bits */
      __IO uint32_t bDMA_SRC            	:	8;  /* Device level DMA source mapping to channel input */
      __I  uint32_t bRESERVED0          	:	24;  /* Reserved */
    } b;
  } rCH0_SRCCFG;
  union {    /* DMA_CH1_SRCCFG Register */
    __IO uint32_t r;
    struct { /* DMA_CH1_SRCCFG Bits */
      __IO uint32_t bDMA_SRC            	:	8;  /* Device level DMA source mapping to channel input */
      __I  uint32_t bRESERVED0          	:	24;  /* Reserved */
    } b;
  } rCH1_SRCCFG;
  union {    /* DMA_CH2_SRCCFG Register */
    __IO uint32_t r;
    struct { /* DMA_CH2_SRCCFG Bits */
      __IO uint32_t bDMA_SRC            	:	8;  /* Device level DMA source mapping to channel input */
      __I  uint32_t bRESERVED0          	:	24;  /* Reserved */
    } b;
  } rCH2_SRCCFG;
  union {    /* DMA_CH3_SRCCFG Register */
    __IO uint32_t r;
    struct { /* DMA_CH3_SRCCFG Bits */
      __IO uint32_t bDMA_SRC            	:	8;  /* Device level DMA source mapping to channel input */
      __I  uint32_t bRESERVED0          	:	24;  /* Reserved */
    } b;
  } rCH3_SRCCFG;
  union {    /* DMA_CH4_SRCCFG Register */
    __IO uint32_t r;
    struct { /* DMA_CH4_SRCCFG Bits */
      __IO uint32_t bDMA_SRC            	:	8;  /* Device level DMA source mapping to channel input */
      __I  uint32_t bRESERVED0          	:	24;  /* Reserved */
    } b;
  } rCH4_SRCCFG;
  union {    /* DMA_CH5_SRCCFG Register */
    __IO uint32_t r;
    struct { /* DMA_CH5_SRCCFG Bits */
      __IO uint32_t bDMA_SRC            	:	8;  /* Device level DMA source mapping to channel input */
      __I  uint32_t bRESERVED0          	:	24;  /* Reserved */
    } b;
  } rCH5_SRCCFG;
  union {    /* DMA_CH6_SRCCFG Register */
    __IO uint32_t r;
    struct { /* DMA_CH6_SRCCFG Bits */
      __IO uint32_t bDMA_SRC            	:	8;  /* Device level DMA source mapping to channel input */
      __I  uint32_t bRESERVED0          	:	24;  /* Reserved */
    } b;
  } rCH6_SRCCFG;
  union {    /* DMA_CH7_SRCCFG Register */
    __IO uint32_t r;
    struct { /* DMA_CH7_SRCCFG Bits */
      __IO uint32_t bDMA_SRC            	:	8;  /* Device level DMA source mapping to channel input */
      __I  uint32_t bRESERVED0          	:	24;  /* Reserved */
    } b;
  } rCH7_SRCCFG;
  union {    /* DMA_CH8_SRCCFG Register */
    __IO uint32_t r;
    struct { /* DMA_CH8_SRCCFG Bits */
      __IO uint32_t bDMA_SRC            	:	8;  /* Device level DMA source mapping to channel input */
      __I  uint32_t bRESERVED0          	:	24;  /* Reserved */
    } b;
  } rCH8_SRCCFG;
  union {    /* DMA_CH9_SRCCFG Register */
    __IO uint32_t r;
    struct { /* DMA_CH9_SRCCFG Bits */
      __IO uint32_t bDMA_SRC            	:	8;  /* Device level DMA source mapping to channel input */
      __I  uint32_t bRESERVED0          	:	24;  /* Reserved */
    } b;
  } rCH9_SRCCFG;
  union {    /* DMA_CH10_SRCCFG Register */
    __IO uint32_t r;
    struct { /* DMA_CH10_SRCCFG Bits */
      __IO uint32_t bDMA_SRC            	:	8;  /* Device level DMA source mapping to channel input */
      __I  uint32_t bRESERVED0          	:	24;  /* Reserved */
    } b;
  } rCH10_SRCCFG;
  union {    /* DMA_CH11_SRCCFG Register */
    __IO uint32_t r;
    struct { /* DMA_CH11_SRCCFG Bits */
      __IO uint32_t bDMA_SRC            	:	8;  /* Device level DMA source mapping to channel input */
      __I  uint32_t bRESERVED0          	:	24;  /* Reserved */
    } b;
  } rCH11_SRCCFG;
  union {    /* DMA_CH12_SRCCFG Register */
    __IO uint32_t r;
    struct { /* DMA_CH12_SRCCFG Bits */
      __IO uint32_t bDMA_SRC            	:	8;  /* Device level DMA source mapping to channel input */
      __I  uint32_t bRESERVED0          	:	24;  /* Reserved */
    } b;
  } rCH12_SRCCFG;
  union {    /* DMA_CH13_SRCCFG Register */
    __IO uint32_t r;
    struct { /* DMA_CH13_SRCCFG Bits */
      __IO uint32_t bDMA_SRC            	:	8;  /* Device level DMA source mapping to channel input */
      __I  uint32_t bRESERVED0          	:	24;  /* Reserved */
    } b;
  } rCH13_SRCCFG;
  union {    /* DMA_CH14_SRCCFG Register */
    __IO uint32_t r;
    struct { /* DMA_CH14_SRCCFG Bits */
      __IO uint32_t bDMA_SRC            	:	8;  /* Device level DMA source mapping to channel input */
      __I  uint32_t bRESERVED0          	:	24;  /* Reserved */
    } b;
  } rCH14_SRCCFG;
  union {    /* DMA_CH15_SRCCFG Register */
    __IO uint32_t r;
    struct { /* DMA_CH15_SRCCFG Bits */
      __IO uint32_t bDMA_SRC            	:	8;  /* Device level DMA source mapping to channel input */
      __I  uint32_t bRESERVED0          	:	24;  /* Reserved */
    } b;
  } rCH15_SRCCFG;
  union {    /* DMA_CH16_SRCCFG Register */
    __IO uint32_t r;
    struct { /* DMA_CH16_SRCCFG Bits */
      __IO uint32_t bDMA_SRC            	:	8;  /* Device level DMA source mapping to channel input */
      __I  uint32_t bRESERVED0          	:	24;  /* Reserved */
    } b;
  } rCH16_SRCCFG;
  union {    /* DMA_CH17_SRCCFG Register */
    __IO uint32_t r;
    struct { /* DMA_CH17_SRCCFG Bits */
      __IO uint32_t bDMA_SRC            	:	8;  /* Device level DMA source mapping to channel input */
      __I  uint32_t bRESERVED0          	:	24;  /* Reserved */
    } b;
  } rCH17_SRCCFG;
  union {    /* DMA_CH18_SRCCFG Register */
    __IO uint32_t r;
    struct { /* DMA_CH18_SRCCFG Bits */
      __IO uint32_t bDMA_SRC            	:	8;  /* Device level DMA source mapping to channel input */
      __I  uint32_t bRESERVED0          	:	24;  /* Reserved */
    } b;
  } rCH18_SRCCFG;
  union {    /* DMA_CH19_SRCCFG Register */
    __IO uint32_t r;
    struct { /* DMA_CH19_SRCCFG Bits */
      __IO uint32_t bDMA_SRC            	:	8;  /* Device level DMA source mapping to channel input */
      __I  uint32_t bRESERVED0          	:	24;  /* Reserved */
    } b;
  } rCH19_SRCCFG;
  union {    /* DMA_CH20_SRCCFG Register */
    __IO uint32_t r;
    struct { /* DMA_CH20_SRCCFG Bits */
      __IO uint32_t bDMA_SRC            	:	8;  /* Device level DMA source mapping to channel input */
      __I  uint32_t bRESERVED0          	:	24;  /* Reserved */
    } b;
  } rCH20_SRCCFG;
  union {    /* DMA_CH21_SRCCFG Register */
    __IO uint32_t r;
    struct { /* DMA_CH21_SRCCFG Bits */
      __IO uint32_t bDMA_SRC            	:	8;  /* Device level DMA source mapping to channel input */
      __I  uint32_t bRESERVED0          	:	24;  /* Reserved */
    } b;
  } rCH21_SRCCFG;
  union {    /* DMA_CH22_SRCCFG Register */
    __IO uint32_t r;
    struct { /* DMA_CH22_SRCCFG Bits */
      __IO uint32_t bDMA_SRC            	:	8;  /* Device level DMA source mapping to channel input */
      __I  uint32_t bRESERVED0          	:	24;  /* Reserved */
    } b;
  } rCH22_SRCCFG;
  union {    /* DMA_CH23_SRCCFG Register */
    __IO uint32_t r;
    struct { /* DMA_CH23_SRCCFG Bits */
      __IO uint32_t bDMA_SRC            	:	8;  /* Device level DMA source mapping to channel input */
      __I  uint32_t bRESERVED0          	:	24;  /* Reserved */
    } b;
  } rCH23_SRCCFG;
  union {    /* DMA_CH24_SRCCFG Register */
    __IO uint32_t r;
    struct { /* DMA_CH24_SRCCFG Bits */
      __IO uint32_t bDMA_SRC            	:	8;  /* Device level DMA source mapping to channel input */
      __I  uint32_t bRESERVED0          	:	24;  /* Reserved */
    } b;
  } rCH24_SRCCFG;
  union {    /* DMA_CH25_SRCCFG Register */
    __IO uint32_t r;
    struct { /* DMA_CH25_SRCCFG Bits */
      __IO uint32_t bDMA_SRC            	:	8;  /* Device level DMA source mapping to channel input */
      __I  uint32_t bRESERVED0          	:	24;  /* Reserved */
    } b;
  } rCH25_SRCCFG;
  union {    /* DMA_CH26_SRCCFG Register */
    __IO uint32_t r;
    struct { /* DMA_CH26_SRCCFG Bits */
      __IO uint32_t bDMA_SRC            	:	8;  /* Device level DMA source mapping to channel input */
      __I  uint32_t bRESERVED0          	:	24;  /* Reserved */
    } b;
  } rCH26_SRCCFG;
  union {    /* DMA_CH27_SRCCFG Register */
    __IO uint32_t r;
    struct { /* DMA_CH27_SRCCFG Bits */
      __IO uint32_t bDMA_SRC            	:	8;  /* Device level DMA source mapping to channel input */
      __I  uint32_t bRESERVED0          	:	24;  /* Reserved */
    } b;
  } rCH27_SRCCFG;
  union {    /* DMA_CH28_SRCCFG Register */
    __IO uint32_t r;
    struct { /* DMA_CH28_SRCCFG Bits */
      __IO uint32_t bDMA_SRC            	:	8;  /* Device level DMA source mapping to channel input */
      __I  uint32_t bRESERVED0          	:	24;  /* Reserved */
    } b;
  } rCH28_SRCCFG;
  union {    /* DMA_CH29_SRCCFG Register */
    __IO uint32_t r;
    struct { /* DMA_CH29_SRCCFG Bits */
      __IO uint32_t bDMA_SRC            	:	8;  /* Device level DMA source mapping to channel input */
      __I  uint32_t bRESERVED0          	:	24;  /* Reserved */
    } b;
  } rCH29_SRCCFG;
  union {    /* DMA_CH30_SRCCFG Register */
    __IO uint32_t r;
    struct { /* DMA_CH30_SRCCFG Bits */
      __IO uint32_t bDMA_SRC            	:	8;  /* Device level DMA source mapping to channel input */
      __I  uint32_t bRESERVED0          	:	24;  /* Reserved */
    } b;
  } rCH30_SRCCFG;
  union {    /* DMA_CH31_SRCCFG Register */
    __IO uint32_t r;
    struct { /* DMA_CH31_SRCCFG Bits */
      __IO uint32_t bDMA_SRC            	:	8;  /* Device level DMA source mapping to channel input */
      __I  uint32_t bRESERVED0          	:	24;  /* Reserved */
    } b;
  } rCH31_SRCCFG;
  uint8_t  RESERVED1[112];
  union {    /* DMA_INT1_SRCCFG Register */
    __IO uint32_t r;
    struct { /* DMA_INT1_SRCCFG Bits */
      __IO uint32_t bINT_SRC            	:	5;  /* Controls which channel's completion event is mapped as a source of this Interrupt */
      __IO uint32_t bEN                 	:	1;  /* Enables DMA_INT1 mapping */
      __I  uint32_t bRESERVED0          	:	26;  /* Reserved */
    } b;
  } rINT1_SRCCFG;
  union {    /* DMA_INT2_SRCCFG Register */
    __IO uint32_t r;
    struct { /* DMA_INT2_SRCCFG Bits */
      __IO uint32_t bINT_SRC            	:	5;  /* Controls which channel's completion event is mapped as a source of this Interrupt */
      __IO uint32_t bEN                 	:	1;  /* Enables DMA_INT2 mapping */
      __I  uint32_t bRESERVED0          	:	26;  /* Reserved */
    } b;
  } rINT2_SRCCFG;
  union {    /* DMA_INT3_SRCCFG Register */
    __IO uint32_t r;
    struct { /* DMA_INT3_SRCCFG Bits */
      __IO uint32_t bINT_SRC            	:	5;  /* Controls which channel's completion event is mapped as a source of this Interrupt */
      __IO uint32_t bEN                 	:	1;  /* Enables DMA_INT3 mapping */
      __I  uint32_t bRESERVED0          	:	26;  /* Reserved */
    } b;
  } rINT3_SRCCFG;
  uint8_t  RESERVED2[4];
  union {    /* DMA_INT0_SRCFLG Register */
    __I uint32_t r;
    struct { /* DMA_INT0_SRCFLG Bits */
      __I  uint32_t bCH0                	:	1;  /* Channel 0 was the source of DMA_INT0 */
      __I  uint32_t bCH1                	:	1;  /* Channel 1 was the source of DMA_INT0 */
      __I  uint32_t bCH2                	:	1;  /* Channel 2 was the source of DMA_INT0 */
      __I  uint32_t bCH3                	:	1;  /* Channel 3 was the source of DMA_INT0 */
      __I  uint32_t bCH4                	:	1;  /* Channel 4 was the source of DMA_INT0 */
      __I  uint32_t bCH5                	:	1;  /* Channel 5 was the source of DMA_INT0 */
      __I  uint32_t bCH6                	:	1;  /* Channel 6 was the source of DMA_INT0 */
      __I  uint32_t bCH7                	:	1;  /* Channel 7 was the source of DMA_INT0 */
      __I  uint32_t bCH8                	:	1;  /* Channel 8 was the source of DMA_INT0 */
      __I  uint32_t bCH9                	:	1;  /* Channel 9 was the source of DMA_INT0 */
      __I  uint32_t bCH10               	:	1;  /* Channel 10 was the source of DMA_INT0 */
      __I  uint32_t bCH11               	:	1;  /* Channel 11 was the source of DMA_INT0 */
      __I  uint32_t bCH12               	:	1;  /* Channel 12 was the source of DMA_INT0 */
      __I  uint32_t bCH13               	:	1;  /* Channel 13 was the source of DMA_INT0 */
      __I  uint32_t bCH14               	:	1;  /* Channel 14 was the source of DMA_INT0 */
      __I  uint32_t bCH15               	:	1;  /* Channel 15 was the source of DMA_INT0 */
      __I  uint32_t bCH16               	:	1;  /* Channel 16 was the source of DMA_INT0 */
      __I  uint32_t bCH17               	:	1;  /* Channel 17 was the source of DMA_INT0 */
      __I  uint32_t bCH18               	:	1;  /* Channel 18 was the source of DMA_INT0 */
      __I  uint32_t bCH19               	:	1;  /* Channel 19 was the source of DMA_INT0 */
      __I  uint32_t bCH20               	:	1;  /* Channel 20 was the source of DMA_INT0 */
      __I  uint32_t bCH21               	:	1;  /* Channel 21 was the source of DMA_INT0 */
      __I  uint32_t bCH22               	:	1;  /* Channel 22 was the source of DMA_INT0 */
      __I  uint32_t bCH23               	:	1;  /* Channel 23 was the source of DMA_INT0 */
      __I  uint32_t bCH24               	:	1;  /* Channel 24 was the source of DMA_INT0 */
      __I  uint32_t bCH25               	:	1;  /* Channel 25 was the source of DMA_INT0 */
      __I  uint32_t bCH26               	:	1;  /* Channel 26 was the source of DMA_INT0 */
      __I  uint32_t bCH27               	:	1;  /* Channel 27 was the source of DMA_INT0 */
      __I  uint32_t bCH28               	:	1;  /* Channel 28 was the source of DMA_INT0 */
      __I  uint32_t bCH29               	:	1;  /* Channel 29 was the source of DMA_INT0 */
      __I  uint32_t bCH30               	:	1;  /* Channel 30 was the source of DMA_INT0 */
      __I  uint32_t bCH31               	:	1;  /* Channel 31 was the source of DMA_INT0 */
    } b;
  } rINT0_SRCFLG;
  union {    /* DMA_INT0_CLRFLG Register */
    __O uint32_t r;
    struct { /* DMA_INT0_CLRFLG Bits */
      __O  uint32_t bCH0                	:	1;  /* Clear corresponding DMA_INT0_SRCFLG_REG */
      __O  uint32_t bCH1                	:	1;  /* Clear corresponding DMA_INT0_SRCFLG_REG */
      __O  uint32_t bCH2                	:	1;  /* Clear corresponding DMA_INT0_SRCFLG_REG */
      __O  uint32_t bCH3                	:	1;  /* Clear corresponding DMA_INT0_SRCFLG_REG */
      __O  uint32_t bCH4                	:	1;  /* Clear corresponding DMA_INT0_SRCFLG_REG */
      __O  uint32_t bCH5                	:	1;  /* Clear corresponding DMA_INT0_SRCFLG_REG */
      __O  uint32_t bCH6                	:	1;  /* Clear corresponding DMA_INT0_SRCFLG_REG */
      __O  uint32_t bCH7                	:	1;  /* Clear corresponding DMA_INT0_SRCFLG_REG */
      __O  uint32_t bCH8                	:	1;  /* Clear corresponding DMA_INT0_SRCFLG_REG */
      __O  uint32_t bCH9                	:	1;  /* Clear corresponding DMA_INT0_SRCFLG_REG */
      __O  uint32_t bCH10               	:	1;  /* Clear corresponding DMA_INT0_SRCFLG_REG */
      __O  uint32_t bCH11               	:	1;  /* Clear corresponding DMA_INT0_SRCFLG_REG */
      __O  uint32_t bCH12               	:	1;  /* Clear corresponding DMA_INT0_SRCFLG_REG */
      __O  uint32_t bCH13               	:	1;  /* Clear corresponding DMA_INT0_SRCFLG_REG */
      __O  uint32_t bCH14               	:	1;  /* Clear corresponding DMA_INT0_SRCFLG_REG */
      __O  uint32_t bCH15               	:	1;  /* Clear corresponding DMA_INT0_SRCFLG_REG */
      __O  uint32_t bCH16               	:	1;  /* Clear corresponding DMA_INT0_SRCFLG_REG */
      __O  uint32_t bCH17               	:	1;  /* Clear corresponding DMA_INT0_SRCFLG_REG */
      __O  uint32_t bCH18               	:	1;  /* Clear corresponding DMA_INT0_SRCFLG_REG */
      __O  uint32_t bCH19               	:	1;  /* Clear corresponding DMA_INT0_SRCFLG_REG */
      __O  uint32_t bCH20               	:	1;  /* Clear corresponding DMA_INT0_SRCFLG_REG */
      __O  uint32_t bCH21               	:	1;  /* Clear corresponding DMA_INT0_SRCFLG_REG */
      __O  uint32_t bCH22               	:	1;  /* Clear corresponding DMA_INT0_SRCFLG_REG */
      __O  uint32_t bCH23               	:	1;  /* Clear corresponding DMA_INT0_SRCFLG_REG */
      __O  uint32_t bCH24               	:	1;  /* Clear corresponding DMA_INT0_SRCFLG_REG */
      __O  uint32_t bCH25               	:	1;  /* Clear corresponding DMA_INT0_SRCFLG_REG */
      __O  uint32_t bCH26               	:	1;  /* Clear corresponding DMA_INT0_SRCFLG_REG */
      __O  uint32_t bCH27               	:	1;  /* Clear corresponding DMA_INT0_SRCFLG_REG */
      __O  uint32_t bCH28               	:	1;  /* Clear corresponding DMA_INT0_SRCFLG_REG */
      __O  uint32_t bCH29               	:	1;  /* Clear corresponding DMA_INT0_SRCFLG_REG */
      __O  uint32_t bCH30               	:	1;  /* Clear corresponding DMA_INT0_SRCFLG_REG */
      __O  uint32_t bCH31               	:	1;  /* Clear corresponding DMA_INT0_SRCFLG_REG */
    } b;
  } rINT0_CLRFLG;
  uint8_t  RESERVED3[3816];
  union {    /* DMA_STAT Register */
    __I uint32_t r;
    struct { /* DMA_STAT Bits */
      __I  uint32_t bMASTEN             	:	1;  /*  */
      __I  uint32_t bRESERVED0          	:	3;  /* Reserved */
      __I  uint32_t b                   	:	4;  /*  */
      __I  uint32_t bRESERVED1          	:	8;  /* Reserved */
      __I  uint32_t bRESERVED2          	:	7;  /* Reserved */
    } b;
  } rSTAT;
  union {    /* DMA_CFG Register */
    __O uint32_t r;
    struct { /* DMA_CFG Bits */
      __O  uint32_t b                   	:	1;  /*  */
      __O  uint32_t bRESERVED0          	:	4;  /* Reserved */
      __O  uint32_t bRESERVED1          	:	24;  /* Reserved */
    } b;
  } rCFG;
  union {    /* DMA_CTLBASE Register */
    __IO uint32_t r;
    struct { /* DMA_CTLBASE Bits */
      __I  uint32_t bRESERVED0          	:	5;  /* Reserved */
      __IO uint32_t b                   	:	27;  /*  */
    } b;
  } rCTLBASE;
  __I uint32_t rATLBASE; /* Channel Alternate Control Data Base Pointer Register */
  __I uint32_t rWAITSTAT; /* Channel Wait on Request Status Register */
  __O uint32_t rSWREQ; /* Channel Software Request Register */
  __IO uint32_t rUSEBURSTSET; /* Channel Useburst Set Register */
  __O uint32_t rUSEBURSTCLR; /* Channel Useburst Clear Register */
  __IO uint32_t rREQMASKSET; /* Channel Request Mask Set Register */
  __O uint32_t rREQMASKCLR; /* Channel Request Mask Clear Register */
  __IO uint32_t rENASET; /* Channel Enable Set Register */
  __O uint32_t rENACLR; /* Channel Enable Clear Register */
  __IO uint32_t rALTSET; /* Channel Primary-Alternate Set Register */
  __O uint32_t rALTCLR; /* Channel Primary-Alternate Clear Register */
  __IO uint32_t rPRIOSET; /* Channel Priority Set Register */
  __O uint32_t rPRIOCLR; /* Channel Priority Clear Register */
  uint8_t  RESERVED4[12];
  union {    /* DMA_ERRCLR Register */
    __IO uint32_t r;
    struct { /* DMA_ERRCLR Bits */
      __IO uint32_t b                   	:	1;  /*  */
      __I  uint32_t bRESERVED0          	:	31;  /* Reserved */
    } b;
  } rERRCLR;
} DMA_Type;


//*****************************************************************************
// EUSCI_A0 Registers
//*****************************************************************************
typedef struct {
  union {    /* UCA0CTLW0 Register */
    __IO uint16_t r;
    struct { /* UCA0CTLW0 Bits */
      __IO uint16_t bSWRST              	:	1;  /* Software reset enable */
      __IO uint16_t bTXBRK              	:	1;  /* Transmit break */
      __IO uint16_t bTXADDR             	:	1;  /* Transmit address */
      __IO uint16_t bDORM               	:	1;  /* Dormant */
      __IO uint16_t bBRKIE              	:	1;  /* Receive break character interrupt enable */
      __IO uint16_t bRXEIE              	:	1;  /* Receive erroneous-character interrupt enable */
      __IO uint16_t bSSEL               	:	2;  /* eUSCI_A clock source select */
      __IO uint16_t bSYNC               	:	1;  /* Synchronous mode enable */
      __IO uint16_t bMODE               	:	2;  /* eUSCI_A mode */
      __IO uint16_t bSPB                	:	1;  /* Stop bit select */
      __IO uint16_t b7BIT               	:	1;  /* Character length */
      __IO uint16_t bMSB                	:	1;  /* MSB first select */
      __IO uint16_t bPAR                	:	1;  /* Parity select */
      __IO uint16_t bPEN                	:	1;  /* Parity enable */
    } b;
    struct { /* UCA0CTLW0_SPI Bits */
      __IO uint16_t bSWRST              	:	1;  /* Software reset enable */
      __IO uint16_t bSTEM               	:	1;  /* STE mode select in master mode. */
      __I  uint16_t bRESERVED           	:	4;  /* Reserved */
      __IO uint16_t bSSEL               	:	2;  /* eUSCI_A clock source select */
      __IO uint16_t bSYNC               	:	1;  /* Synchronous mode enable */
      __IO uint16_t bMODE               	:	2;  /* eUSCI mode */
      __IO uint16_t bMST                	:	1;  /* Master mode select */
      __IO uint16_t b7BIT               	:	1;  /* Character length */
      __IO uint16_t bMSB                	:	1;  /* MSB first select */
      __IO uint16_t bCKPL               	:	1;  /* Clock polarity select */
      __IO uint16_t bCKPH               	:	1;  /* Clock phase select */
    } a;
  } rCTLW0;
  union {    /* UCA0CTLW1 Register */
    __IO uint16_t r;
    struct { /* UCA0CTLW1 Bits */
      __IO uint16_t bGLIT               	:	2;  /* Deglitch time */
      __I  uint16_t bRESERVED0          	:	14;  /* Reserved */
    } b;
  } rCTLW1;
  uint8_t  RESERVED0[2];
  __IO uint16_t rBRW; /* eUSCI_Ax Baud Rate Control Word Register */
  union {    /* UCA0MCTLW Register */
    __IO uint16_t r;
    struct { /* UCA0MCTLW Bits */
      __IO uint16_t bOS16               	:	1;  /* Oversampling mode enabled */
      __I  uint16_t bRESERVED0          	:	3;  /* Reserved */
      __IO uint16_t bBRF                	:	4;  /* First modulation stage select */
      __IO uint16_t bBRS                	:	8;  /* Second modulation stage select */
    } b;
  } rMCTLW;
  union {    /* UCA0STATW Register */
    __IO uint16_t r;
    struct { /* UCA0STATW Bits */
      __I  uint16_t bBUSY               	:	1;  /* eUSCI_A busy */
      __IO uint16_t bADDR_IDLE          	:	1;  /* Address received / Idle line detected */
      __IO uint16_t bRXERR              	:	1;  /* Receive error flag */
      __IO uint16_t bBRK                	:	1;  /* Break detect flag */
      __IO uint16_t bPE                 	:	1;  /*  */
      __IO uint16_t bOE                 	:	1;  /* Overrun error flag */
      __IO uint16_t bFE                 	:	1;  /* Framing error flag */
      __IO uint16_t bLISTEN             	:	1;  /* Listen enable */
      __I  uint16_t bRESERVED0          	:	8;  /* Reserved */
    } b;
    struct { /* UCA0STATW_SPI Bits */
      __I  uint16_t bBUSY               	:	1;  /* eUSCI_A busy */
      __IO uint16_t bRESERVED           	:	4;  /* Reserved */
      __IO uint16_t bOE                 	:	1;  /* Overrun error flag */
      __IO uint16_t bFE                 	:	1;  /* Framing error flag */
      __IO uint16_t bLISTEN             	:	1;  /* Listen enable */
    } a;
  } rSTATW;
  union {    /* UCA0RXBUF Register */
    __I uint16_t r;
    struct { /* UCA0RXBUF Bits */
      __I  uint16_t bRXBUF              	:	8;  /* Receive data buffer */
      __I  uint16_t bRESERVED0          	:	8;  /* Reserved */
    } b;
    struct { /* UCA0RXBUF_SPI Bits */
      __I  uint16_t bRXBUF              	:	8;  /* Receive data buffer */
      __I  uint16_t bRESERVED           	:	8;  /* Reserved */
    } a;
  } rRXBUF;
  union {    /* UCA0TXBUF Register */
    __IO uint16_t r;
    struct { /* UCA0TXBUF Bits */
      __IO uint16_t bTXBUF              	:	8;  /* Transmit data buffer */
      __I  uint16_t bRESERVED0          	:	8;  /* Reserved */
    } b;
    struct { /* UCA0TXBUF_SPI Bits */
      __IO uint16_t bTXBUF              	:	8;  /* Transmit data buffer */
      __I  uint16_t bRESERVED           	:	8;  /* Reserved */
    } a;
  } rTXBUF;
  union {    /* UCA0ABCTL Register */
    __IO uint16_t r;
    struct { /* UCA0ABCTL Bits */
      __IO uint16_t bABDEN              	:	1;  /* Automatic baud-rate detect enable */
      __I  uint16_t bRESERVED0          	:	1;  /* Reserved */
      __IO uint16_t bBTOE               	:	1;  /* Break time out error */
      __IO uint16_t bSTOE               	:	1;  /* Synch field time out error */
      __IO uint16_t bDELIM              	:	2;  /* Break/synch delimiter length */
      __I  uint16_t bRESERVED1          	:	10;  /* Reserved */
    } b;
  } rABCTL;
  union {    /* UCA0IRCTL Register */
    __IO uint16_t r;
    struct { /* UCA0IRCTL Bits */
      __IO uint16_t bIREN               	:	1;  /* IrDA encoder/decoder enable */
      __IO uint16_t bIRTXCLK            	:	1;  /* IrDA transmit pulse clock select */
      __IO uint16_t bIRTXPL             	:	6;  /* Transmit pulse length */
      __IO uint16_t bIRRXFE             	:	1;  /* IrDA receive filter enabled */
      __IO uint16_t bIRRXPL             	:	1;  /* IrDA receive input UCAxRXD polarity */
      __IO uint16_t bIRRXFL             	:	4;  /* Receive filter length */
    } b;
  } rIRCTL;
  uint8_t  RESERVED1[6];
  union {    /* UCA0IE Register */
    __IO uint16_t r;
    struct { /* UCA0IE Bits */
      __IO uint16_t bRXIE               	:	1;  /* Receive interrupt enable */
      __IO uint16_t bTXIE               	:	1;  /* Transmit interrupt enable */
      __IO uint16_t bSTTIE              	:	1;  /* Start bit interrupt enable */
      __IO uint16_t bTXCPTIE            	:	1;  /* Transmit complete interrupt enable */
      __I  uint16_t bRESERVED0          	:	12;  /* Reserved */
    } b;
    struct { /* UCA0IE_SPI Bits */
      __IO uint16_t bRXIE               	:	1;  /* Receive interrupt enable */
      __IO uint16_t bTXIE               	:	1;  /* Transmit interrupt enable */
      __I  uint16_t bRESERVED           	:	14;  /* Reserved */
    } a;
  } rIE;
  union {    /* UCA0IFG Register */
    __IO uint16_t r;
    struct { /* UCA0IFG Bits */
      __IO uint16_t bRXIFG              	:	1;  /* Receive interrupt flag */
      __IO uint16_t bTXIFG              	:	1;  /* Transmit interrupt flag */
      __IO uint16_t bSTTIFG             	:	1;  /* Start bit interrupt flag */
      __IO uint16_t bTXCPTIFG           	:	1;  /* Transmit ready interrupt enable */
      __I  uint16_t bRESERVED0          	:	12;  /* Reserved */
    } b;
    struct { /* UCA0IFG_SPI Bits */
      __IO uint16_t bRXIFG              	:	1;  /* Receive interrupt flag */
      __IO uint16_t bTXIFG              	:	1;  /* Transmit interrupt flag */
      __I  uint16_t bRESERVED           	:	14;  /* Reserved */
    } a;
  } rIFG;
  __I uint16_t rIV; /* eUSCI_Ax Interrupt Vector Register */
} EUSCI_A0_Type;


//*****************************************************************************
// EUSCI_A1 Registers
//*****************************************************************************
typedef struct {
  union {    /* UCA1CTLW0 Register */
    __IO uint16_t r;
    struct { /* UCA1CTLW0 Bits */
      __IO uint16_t bSWRST              	:	1;  /* Software reset enable */
      __IO uint16_t bTXBRK              	:	1;  /* Transmit break */
      __IO uint16_t bTXADDR             	:	1;  /* Transmit address */
      __IO uint16_t bDORM               	:	1;  /* Dormant */
      __IO uint16_t bBRKIE              	:	1;  /* Receive break character interrupt enable */
      __IO uint16_t bRXEIE              	:	1;  /* Receive erroneous-character interrupt enable */
      __IO uint16_t bSSEL               	:	2;  /* eUSCI_A clock source select */
      __IO uint16_t bSYNC               	:	1;  /* Synchronous mode enable */
      __IO uint16_t bMODE               	:	2;  /* eUSCI_A mode */
      __IO uint16_t bSPB                	:	1;  /* Stop bit select */
      __IO uint16_t b7BIT               	:	1;  /* Character length */
      __IO uint16_t bMSB                	:	1;  /* MSB first select */
      __IO uint16_t bPAR                	:	1;  /* Parity select */
      __IO uint16_t bPEN                	:	1;  /* Parity enable */
    } b;
    struct { /* UCA1CTLW0_SPI Bits */
      __IO uint16_t bSWRST              	:	1;  /* Software reset enable */
      __IO uint16_t bSTEM               	:	1;  /* STE mode select in master mode. */
      __I  uint16_t bRESERVED           	:	4;  /* Reserved */
      __IO uint16_t bSSEL               	:	2;  /* eUSCI_A clock source select */
      __IO uint16_t bSYNC               	:	1;  /* Synchronous mode enable */
      __IO uint16_t bMODE               	:	2;  /* eUSCI mode */
      __IO uint16_t bMST                	:	1;  /* Master mode select */
      __IO uint16_t b7BIT               	:	1;  /* Character length */
      __IO uint16_t bMSB                	:	1;  /* MSB first select */
      __IO uint16_t bCKPL               	:	1;  /* Clock polarity select */
      __IO uint16_t bCKPH               	:	1;  /* Clock phase select */
    } a;
  } rCTLW0;
  union {    /* UCA1CTLW1 Register */
    __IO uint16_t r;
    struct { /* UCA1CTLW1 Bits */
      __IO uint16_t bGLIT               	:	2;  /* Deglitch time */
      __I  uint16_t bRESERVED0          	:	14;  /* Reserved */
    } b;
  } rCTLW1;
  uint8_t  RESERVED0[2];
  __IO uint16_t rBRW; /* eUSCI_Ax Baud Rate Control Word Register */
  union {    /* UCA1MCTLW Register */
    __IO uint16_t r;
    struct { /* UCA1MCTLW Bits */
      __IO uint16_t bOS16               	:	1;  /* Oversampling mode enabled */
      __I  uint16_t bRESERVED0          	:	3;  /* Reserved */
      __IO uint16_t bBRF                	:	4;  /* First modulation stage select */
      __IO uint16_t bBRS                	:	8;  /* Second modulation stage select */
    } b;
  } rMCTLW;
  union {    /* UCA1STATW Register */
    __IO uint16_t r;
    struct { /* UCA1STATW Bits */
      __I  uint16_t bBUSY               	:	1;  /* eUSCI_A busy */
      __IO uint16_t bADDR_IDLE          	:	1;  /* Address received / Idle line detected */
      __IO uint16_t bRXERR              	:	1;  /* Receive error flag */
      __IO uint16_t bBRK                	:	1;  /* Break detect flag */
      __IO uint16_t bPE                 	:	1;  /*  */
      __IO uint16_t bOE                 	:	1;  /* Overrun error flag */
      __IO uint16_t bFE                 	:	1;  /* Framing error flag */
      __IO uint16_t bLISTEN             	:	1;  /* Listen enable */
      __I  uint16_t bRESERVED0          	:	8;  /* Reserved */
    } b;
    struct { /* UCA1STATW_SPI Bits */
      __I  uint16_t bBUSY               	:	1;  /* eUSCI_A busy */
      __IO uint16_t bRESERVED           	:	4;  /* Reserved */
      __IO uint16_t bOE                 	:	1;  /* Overrun error flag */
      __IO uint16_t bFE                 	:	1;  /* Framing error flag */
      __IO uint16_t bLISTEN             	:	1;  /* Listen enable */
    } a;
  } rSTATW;
  union {    /* UCA1RXBUF Register */
    __I uint16_t r;
    struct { /* UCA1RXBUF Bits */
      __I  uint16_t bRXBUF              	:	8;  /* Receive data buffer */
      __I  uint16_t bRESERVED0          	:	8;  /* Reserved */
    } b;
    struct { /* UCA1RXBUF_SPI Bits */
      __I  uint16_t bRXBUF              	:	8;  /* Receive data buffer */
      __I  uint16_t bRESERVED           	:	8;  /* Reserved */
    } a;
  } rRXBUF;
  union {    /* UCA1TXBUF Register */
    __IO uint16_t r;
    struct { /* UCA1TXBUF Bits */
      __IO uint16_t bTXBUF              	:	8;  /* Transmit data buffer */
      __I  uint16_t bRESERVED0          	:	8;  /* Reserved */
    } b;
    struct { /* UCA1TXBUF_SPI Bits */
      __IO uint16_t bTXBUF              	:	8;  /* Transmit data buffer */
      __I  uint16_t bRESERVED           	:	8;  /* Reserved */
    } a;
  } rTXBUF;
  union {    /* UCA1ABCTL Register */
    __IO uint16_t r;
    struct { /* UCA1ABCTL Bits */
      __IO uint16_t bABDEN              	:	1;  /* Automatic baud-rate detect enable */
      __I  uint16_t bRESERVED0          	:	1;  /* Reserved */
      __IO uint16_t bBTOE               	:	1;  /* Break time out error */
      __IO uint16_t bSTOE               	:	1;  /* Synch field time out error */
      __IO uint16_t bDELIM              	:	2;  /* Break/synch delimiter length */
      __I  uint16_t bRESERVED1          	:	10;  /* Reserved */
    } b;
  } rABCTL;
  union {    /* UCA1IRCTL Register */
    __IO uint16_t r;
    struct { /* UCA1IRCTL Bits */
      __IO uint16_t bIREN               	:	1;  /* IrDA encoder/decoder enable */
      __IO uint16_t bIRTXCLK            	:	1;  /* IrDA transmit pulse clock select */
      __IO uint16_t bIRTXPL             	:	6;  /* Transmit pulse length */
      __IO uint16_t bIRRXFE             	:	1;  /* IrDA receive filter enabled */
      __IO uint16_t bIRRXPL             	:	1;  /* IrDA receive input UCAxRXD polarity */
      __IO uint16_t bIRRXFL             	:	4;  /* Receive filter length */
    } b;
  } rIRCTL;
  uint8_t  RESERVED1[6];
  union {    /* UCA1IE Register */
    __IO uint16_t r;
    struct { /* UCA1IE Bits */
      __IO uint16_t bRXIE               	:	1;  /* Receive interrupt enable */
      __IO uint16_t bTXIE               	:	1;  /* Transmit interrupt enable */
      __IO uint16_t bSTTIE              	:	1;  /* Start bit interrupt enable */
      __IO uint16_t bTXCPTIE            	:	1;  /* Transmit complete interrupt enable */
      __I  uint16_t bRESERVED0          	:	12;  /* Reserved */
    } b;
    struct { /* UCA1IE_SPI Bits */
      __IO uint16_t bRXIE               	:	1;  /* Receive interrupt enable */
      __IO uint16_t bTXIE               	:	1;  /* Transmit interrupt enable */
      __I  uint16_t bRESERVED           	:	14;  /* Reserved */
    } a;
  } rIE;
  union {    /* UCA1IFG Register */
    __IO uint16_t r;
    struct { /* UCA1IFG Bits */
      __IO uint16_t bRXIFG              	:	1;  /* Receive interrupt flag */
      __IO uint16_t bTXIFG              	:	1;  /* Transmit interrupt flag */
      __IO uint16_t bSTTIFG             	:	1;  /* Start bit interrupt flag */
      __IO uint16_t bTXCPTIFG           	:	1;  /* Transmit ready interrupt enable */
      __I  uint16_t bRESERVED0          	:	12;  /* Reserved */
    } b;
    struct { /* UCA1IFG_SPI Bits */
      __IO uint16_t bRXIFG              	:	1;  /* Receive interrupt flag */
      __IO uint16_t bTXIFG              	:	1;  /* Transmit interrupt flag */
      __I  uint16_t bRESERVED           	:	14;  /* Reserved */
    } a;
  } rIFG;
  __I uint16_t rIV; /* eUSCI_Ax Interrupt Vector Register */
} EUSCI_A1_Type;


//*****************************************************************************
// EUSCI_A2 Registers
//*****************************************************************************
typedef struct {
  union {    /* UCA2CTLW0 Register */
    __IO uint16_t r;
    struct { /* UCA2CTLW0 Bits */
      __IO uint16_t bSWRST              	:	1;  /* Software reset enable */
      __IO uint16_t bTXBRK              	:	1;  /* Transmit break */
      __IO uint16_t bTXADDR             	:	1;  /* Transmit address */
      __IO uint16_t bDORM               	:	1;  /* Dormant */
      __IO uint16_t bBRKIE              	:	1;  /* Receive break character interrupt enable */
      __IO uint16_t bRXEIE              	:	1;  /* Receive erroneous-character interrupt enable */
      __IO uint16_t bSSEL               	:	2;  /* eUSCI_A clock source select */
      __IO uint16_t bSYNC               	:	1;  /* Synchronous mode enable */
      __IO uint16_t bMODE               	:	2;  /* eUSCI_A mode */
      __IO uint16_t bSPB                	:	1;  /* Stop bit select */
      __IO uint16_t b7BIT               	:	1;  /* Character length */
      __IO uint16_t bMSB                	:	1;  /* MSB first select */
      __IO uint16_t bPAR                	:	1;  /* Parity select */
      __IO uint16_t bPEN                	:	1;  /* Parity enable */
    } b;
    struct { /* UCA2CTLW0_SPI Bits */
      __IO uint16_t bSWRST              	:	1;  /* Software reset enable */
      __IO uint16_t bSTEM               	:	1;  /* STE mode select in master mode. */
      __I  uint16_t bRESERVED           	:	4;  /* Reserved */
      __IO uint16_t bSSEL               	:	2;  /* eUSCI_A clock source select */
      __IO uint16_t bSYNC               	:	1;  /* Synchronous mode enable */
      __IO uint16_t bMODE               	:	2;  /* eUSCI mode */
      __IO uint16_t bMST                	:	1;  /* Master mode select */
      __IO uint16_t b7BIT               	:	1;  /* Character length */
      __IO uint16_t bMSB                	:	1;  /* MSB first select */
      __IO uint16_t bCKPL               	:	1;  /* Clock polarity select */
      __IO uint16_t bCKPH               	:	1;  /* Clock phase select */
    } a;
  } rCTLW0;
  union {    /* UCA2CTLW1 Register */
    __IO uint16_t r;
    struct { /* UCA2CTLW1 Bits */
      __IO uint16_t bGLIT               	:	2;  /* Deglitch time */
      __I  uint16_t bRESERVED0          	:	14;  /* Reserved */
    } b;
  } rCTLW1;
  uint8_t  RESERVED0[2];
  __IO uint16_t rBRW; /* eUSCI_Ax Baud Rate Control Word Register */
  union {    /* UCA2MCTLW Register */
    __IO uint16_t r;
    struct { /* UCA2MCTLW Bits */
      __IO uint16_t bOS16               	:	1;  /* Oversampling mode enabled */
      __I  uint16_t bRESERVED0          	:	3;  /* Reserved */
      __IO uint16_t bBRF                	:	4;  /* First modulation stage select */
      __IO uint16_t bBRS                	:	8;  /* Second modulation stage select */
    } b;
  } rMCTLW;
  union {    /* UCA2STATW Register */
    __IO uint16_t r;
    struct { /* UCA2STATW Bits */
      __I  uint16_t bBUSY               	:	1;  /* eUSCI_A busy */
      __IO uint16_t bADDR_IDLE          	:	1;  /* Address received / Idle line detected */
      __IO uint16_t bRXERR              	:	1;  /* Receive error flag */
      __IO uint16_t bBRK                	:	1;  /* Break detect flag */
      __IO uint16_t bPE                 	:	1;  /*  */
      __IO uint16_t bOE                 	:	1;  /* Overrun error flag */
      __IO uint16_t bFE                 	:	1;  /* Framing error flag */
      __IO uint16_t bLISTEN             	:	1;  /* Listen enable */
      __I  uint16_t bRESERVED0          	:	8;  /* Reserved */
    } b;
    struct { /* UCA2STATW_SPI Bits */
      __I  uint16_t bBUSY               	:	1;  /* eUSCI_A busy */
      __IO uint16_t bRESERVED           	:	4;  /* Reserved */
      __IO uint16_t bOE                 	:	1;  /* Overrun error flag */
      __IO uint16_t bFE                 	:	1;  /* Framing error flag */
      __IO uint16_t bLISTEN             	:	1;  /* Listen enable */
    } a;
  } rSTATW;
  union {    /* UCA2RXBUF Register */
    __I uint16_t r;
    struct { /* UCA2RXBUF Bits */
      __I  uint16_t bRXBUF              	:	8;  /* Receive data buffer */
      __I  uint16_t bRESERVED0          	:	8;  /* Reserved */
    } b;
    struct { /* UCA2RXBUF_SPI Bits */
      __I  uint16_t bRXBUF              	:	8;  /* Receive data buffer */
      __I  uint16_t bRESERVED           	:	8;  /* Reserved */
    } a;
  } rRXBUF;
  union {    /* UCA2TXBUF Register */
    __IO uint16_t r;
    struct { /* UCA2TXBUF Bits */
      __IO uint16_t bTXBUF              	:	8;  /* Transmit data buffer */
      __I  uint16_t bRESERVED0          	:	8;  /* Reserved */
    } b;
    struct { /* UCA2TXBUF_SPI Bits */
      __IO uint16_t bTXBUF              	:	8;  /* Transmit data buffer */
      __I  uint16_t bRESERVED           	:	8;  /* Reserved */
    } a;
  } rTXBUF;
  union {    /* UCA2ABCTL Register */
    __IO uint16_t r;
    struct { /* UCA2ABCTL Bits */
      __IO uint16_t bABDEN              	:	1;  /* Automatic baud-rate detect enable */
      __I  uint16_t bRESERVED0          	:	1;  /* Reserved */
      __IO uint16_t bBTOE               	:	1;  /* Break time out error */
      __IO uint16_t bSTOE               	:	1;  /* Synch field time out error */
      __IO uint16_t bDELIM              	:	2;  /* Break/synch delimiter length */
      __I  uint16_t bRESERVED1          	:	10;  /* Reserved */
    } b;
  } rABCTL;
  union {    /* UCA2IRCTL Register */
    __IO uint16_t r;
    struct { /* UCA2IRCTL Bits */
      __IO uint16_t bIREN               	:	1;  /* IrDA encoder/decoder enable */
      __IO uint16_t bIRTXCLK            	:	1;  /* IrDA transmit pulse clock select */
      __IO uint16_t bIRTXPL             	:	6;  /* Transmit pulse length */
      __IO uint16_t bIRRXFE             	:	1;  /* IrDA receive filter enabled */
      __IO uint16_t bIRRXPL             	:	1;  /* IrDA receive input UCAxRXD polarity */
      __IO uint16_t bIRRXFL             	:	4;  /* Receive filter length */
    } b;
  } rIRCTL;
  uint8_t  RESERVED1[6];
  union {    /* UCA2IE Register */
    __IO uint16_t r;
    struct { /* UCA2IE Bits */
      __IO uint16_t bRXIE               	:	1;  /* Receive interrupt enable */
      __IO uint16_t bTXIE               	:	1;  /* Transmit interrupt enable */
      __IO uint16_t bSTTIE              	:	1;  /* Start bit interrupt enable */
      __IO uint16_t bTXCPTIE            	:	1;  /* Transmit complete interrupt enable */
      __I  uint16_t bRESERVED0          	:	12;  /* Reserved */
    } b;
    struct { /* UCA2IE_SPI Bits */
      __IO uint16_t bRXIE               	:	1;  /* Receive interrupt enable */
      __IO uint16_t bTXIE               	:	1;  /* Transmit interrupt enable */
      __I  uint16_t bRESERVED           	:	14;  /* Reserved */
    } a;
  } rIE;
  union {    /* UCA2IFG Register */
    __IO uint16_t r;
    struct { /* UCA2IFG Bits */
      __IO uint16_t bRXIFG              	:	1;  /* Receive interrupt flag */
      __IO uint16_t bTXIFG              	:	1;  /* Transmit interrupt flag */
      __IO uint16_t bSTTIFG             	:	1;  /* Start bit interrupt flag */
      __IO uint16_t bTXCPTIFG           	:	1;  /* Transmit ready interrupt enable */
      __I  uint16_t bRESERVED0          	:	12;  /* Reserved */
    } b;
    struct { /* UCA2IFG_SPI Bits */
      __IO uint16_t bRXIFG              	:	1;  /* Receive interrupt flag */
      __IO uint16_t bTXIFG              	:	1;  /* Transmit interrupt flag */
      __I  uint16_t bRESERVED           	:	14;  /* Reserved */
    } a;
  } rIFG;
  __I uint16_t rIV; /* eUSCI_Ax Interrupt Vector Register */
} EUSCI_A2_Type;


//*****************************************************************************
// EUSCI_A3 Registers
//*****************************************************************************
typedef struct {
  union {    /* UCA3CTLW0 Register */
    __IO uint16_t r;
    struct { /* UCA3CTLW0 Bits */
      __IO uint16_t bSWRST              	:	1;  /* Software reset enable */
      __IO uint16_t bTXBRK              	:	1;  /* Transmit break */
      __IO uint16_t bTXADDR             	:	1;  /* Transmit address */
      __IO uint16_t bDORM               	:	1;  /* Dormant */
      __IO uint16_t bBRKIE              	:	1;  /* Receive break character interrupt enable */
      __IO uint16_t bRXEIE              	:	1;  /* Receive erroneous-character interrupt enable */
      __IO uint16_t bSSEL               	:	2;  /* eUSCI_A clock source select */
      __IO uint16_t bSYNC               	:	1;  /* Synchronous mode enable */
      __IO uint16_t bMODE               	:	2;  /* eUSCI_A mode */
      __IO uint16_t bSPB                	:	1;  /* Stop bit select */
      __IO uint16_t b7BIT               	:	1;  /* Character length */
      __IO uint16_t bMSB                	:	1;  /* MSB first select */
      __IO uint16_t bPAR                	:	1;  /* Parity select */
      __IO uint16_t bPEN                	:	1;  /* Parity enable */
    } b;
    struct { /* UCA3CTLW0_SPI Bits */
      __IO uint16_t bSWRST              	:	1;  /* Software reset enable */
      __IO uint16_t bSTEM               	:	1;  /* STE mode select in master mode. */
      __I  uint16_t bRESERVED           	:	4;  /* Reserved */
      __IO uint16_t bSSEL               	:	2;  /* eUSCI_A clock source select */
      __IO uint16_t bSYNC               	:	1;  /* Synchronous mode enable */
      __IO uint16_t bMODE               	:	2;  /* eUSCI mode */
      __IO uint16_t bMST                	:	1;  /* Master mode select */
      __IO uint16_t b7BIT               	:	1;  /* Character length */
      __IO uint16_t bMSB                	:	1;  /* MSB first select */
      __IO uint16_t bCKPL               	:	1;  /* Clock polarity select */
      __IO uint16_t bCKPH               	:	1;  /* Clock phase select */
    } a;
  } rCTLW0;
  union {    /* UCA3CTLW1 Register */
    __IO uint16_t r;
    struct { /* UCA3CTLW1 Bits */
      __IO uint16_t bGLIT               	:	2;  /* Deglitch time */
      __I  uint16_t bRESERVED0          	:	14;  /* Reserved */
    } b;
  } rCTLW1;
  uint8_t  RESERVED0[2];
  __IO uint16_t rBRW; /* eUSCI_Ax Baud Rate Control Word Register */
  union {    /* UCA3MCTLW Register */
    __IO uint16_t r;
    struct { /* UCA3MCTLW Bits */
      __IO uint16_t bOS16               	:	1;  /* Oversampling mode enabled */
      __I  uint16_t bRESERVED0          	:	3;  /* Reserved */
      __IO uint16_t bBRF                	:	4;  /* First modulation stage select */
      __IO uint16_t bBRS                	:	8;  /* Second modulation stage select */
    } b;
  } rMCTLW;
  union {    /* UCA3STATW Register */
    __IO uint16_t r;
    struct { /* UCA3STATW Bits */
      __I  uint16_t bBUSY               	:	1;  /* eUSCI_A busy */
      __IO uint16_t bADDR_IDLE          	:	1;  /* Address received / Idle line detected */
      __IO uint16_t bRXERR              	:	1;  /* Receive error flag */
      __IO uint16_t bBRK                	:	1;  /* Break detect flag */
      __IO uint16_t bPE                 	:	1;  /*  */
      __IO uint16_t bOE                 	:	1;  /* Overrun error flag */
      __IO uint16_t bFE                 	:	1;  /* Framing error flag */
      __IO uint16_t bLISTEN             	:	1;  /* Listen enable */
      __I  uint16_t bRESERVED0          	:	8;  /* Reserved */
    } b;
    struct { /* UCA3STATW_SPI Bits */
      __I  uint16_t bBUSY               	:	1;  /* eUSCI_A busy */
      __IO uint16_t bRESERVED           	:	4;  /* Reserved */
      __IO uint16_t bOE                 	:	1;  /* Overrun error flag */
      __IO uint16_t bFE                 	:	1;  /* Framing error flag */
      __IO uint16_t bLISTEN             	:	1;  /* Listen enable */
    } a;
  } rSTATW;
  union {    /* UCA3RXBUF Register */
    __I uint16_t r;
    struct { /* UCA3RXBUF Bits */
      __I  uint16_t bRXBUF              	:	8;  /* Receive data buffer */
      __I  uint16_t bRESERVED0          	:	8;  /* Reserved */
    } b;
    struct { /* UCA3RXBUF_SPI Bits */
      __I  uint16_t bRXBUF              	:	8;  /* Receive data buffer */
      __I  uint16_t bRESERVED           	:	8;  /* Reserved */
    } a;
  } rRXBUF;
  union {    /* UCA3TXBUF Register */
    __IO uint16_t r;
    struct { /* UCA3TXBUF Bits */
      __IO uint16_t bTXBUF              	:	8;  /* Transmit data buffer */
      __I  uint16_t bRESERVED0          	:	8;  /* Reserved */
    } b;
    struct { /* UCA3TXBUF_SPI Bits */
      __IO uint16_t bTXBUF              	:	8;  /* Transmit data buffer */
      __I  uint16_t bRESERVED           	:	8;  /* Reserved */
    } a;
  } rTXBUF;
  union {    /* UCA3ABCTL Register */
    __IO uint16_t r;
    struct { /* UCA3ABCTL Bits */
      __IO uint16_t bABDEN              	:	1;  /* Automatic baud-rate detect enable */
      __I  uint16_t bRESERVED0          	:	1;  /* Reserved */
      __IO uint16_t bBTOE               	:	1;  /* Break time out error */
      __IO uint16_t bSTOE               	:	1;  /* Synch field time out error */
      __IO uint16_t bDELIM              	:	2;  /* Break/synch delimiter length */
      __I  uint16_t bRESERVED1          	:	10;  /* Reserved */
    } b;
  } rABCTL;
  union {    /* UCA3IRCTL Register */
    __IO uint16_t r;
    struct { /* UCA3IRCTL Bits */
      __IO uint16_t bIREN               	:	1;  /* IrDA encoder/decoder enable */
      __IO uint16_t bIRTXCLK            	:	1;  /* IrDA transmit pulse clock select */
      __IO uint16_t bIRTXPL             	:	6;  /* Transmit pulse length */
      __IO uint16_t bIRRXFE             	:	1;  /* IrDA receive filter enabled */
      __IO uint16_t bIRRXPL             	:	1;  /* IrDA receive input UCAxRXD polarity */
      __IO uint16_t bIRRXFL             	:	4;  /* Receive filter length */
    } b;
  } rIRCTL;
  uint8_t  RESERVED1[6];
  union {    /* UCA3IE Register */
    __IO uint16_t r;
    struct { /* UCA3IE Bits */
      __IO uint16_t bRXIE               	:	1;  /* Receive interrupt enable */
      __IO uint16_t bTXIE               	:	1;  /* Transmit interrupt enable */
      __IO uint16_t bSTTIE              	:	1;  /* Start bit interrupt enable */
      __IO uint16_t bTXCPTIE            	:	1;  /* Transmit complete interrupt enable */
      __I  uint16_t bRESERVED0          	:	12;  /* Reserved */
    } b;
    struct { /* UCA3IE_SPI Bits */
      __IO uint16_t bRXIE               	:	1;  /* Receive interrupt enable */
      __IO uint16_t bTXIE               	:	1;  /* Transmit interrupt enable */
      __I  uint16_t bRESERVED           	:	14;  /* Reserved */
    } a;
  } rIE;
  union {    /* UCA3IFG Register */
    __IO uint16_t r;
    struct { /* UCA3IFG Bits */
      __IO uint16_t bRXIFG              	:	1;  /* Receive interrupt flag */
      __IO uint16_t bTXIFG              	:	1;  /* Transmit interrupt flag */
      __IO uint16_t bSTTIFG             	:	1;  /* Start bit interrupt flag */
      __IO uint16_t bTXCPTIFG           	:	1;  /* Transmit ready interrupt enable */
      __I  uint16_t bRESERVED0          	:	12;  /* Reserved */
    } b;
    struct { /* UCA3IFG_SPI Bits */
      __IO uint16_t bRXIFG              	:	1;  /* Receive interrupt flag */
      __IO uint16_t bTXIFG              	:	1;  /* Transmit interrupt flag */
      __I  uint16_t bRESERVED           	:	14;  /* Reserved */
    } a;
  } rIFG;
  __I uint16_t rIV; /* eUSCI_Ax Interrupt Vector Register */
} EUSCI_A3_Type;


//*****************************************************************************
// EUSCI_B0 Registers
//*****************************************************************************
typedef struct {
  union {    /* UCB0CTLW0 Register */
    __IO uint16_t r;
    struct { /* UCB0CTLW0 Bits */
      __IO uint16_t bSWRST              	:	1;  /* Software reset enable */
      __IO uint16_t bTXSTT              	:	1;  /* Transmit START condition in master mode */
      __IO uint16_t bTXSTP              	:	1;  /* Transmit STOP condition in master mode */
      __IO uint16_t bTXNACK             	:	1;  /* Transmit a NACK */
      __IO uint16_t bTR                 	:	1;  /* Transmitter/receiver */
      __IO uint16_t bTXACK              	:	1;  /* Transmit ACK condition in slave mode */
      __IO uint16_t bSSEL               	:	2;  /* eUSCI_B clock source select */
      __IO uint16_t bSYNC               	:	1;  /* Synchronous mode enable */
      __IO uint16_t bMODE               	:	2;  /* eUSCI_B mode */
      __IO uint16_t bMST                	:	1;  /* Master mode select */
      __I  uint16_t bRESERVED0          	:	1;  /* Reserved */
      __IO uint16_t bMM                 	:	1;  /* Multi-master environment select */
      __IO uint16_t bSLA10              	:	1;  /* Slave addressing mode select */
      __IO uint16_t bA10                	:	1;  /* Own addressing mode select */
    } b;
    struct { /* UCB0CTLW0_SPI Bits */
      __IO uint16_t bSWRST              	:	1;  /* Software reset enable */
      __IO uint16_t bSTEM               	:	1;  /* STE mode select in master mode. */
      __I  uint16_t bRESERVED           	:	4;  /* Reserved */
      __IO uint16_t bSSEL               	:	2;  /* eUSCI_B clock source select */
      __IO uint16_t bSYNC               	:	1;  /* Synchronous mode enable */
      __IO uint16_t bMODE               	:	2;  /* eUSCI mode */
      __IO uint16_t bMST                	:	1;  /* Master mode select */
      __IO uint16_t b7BIT               	:	1;  /* Character length */
      __IO uint16_t bMSB                	:	1;  /* MSB first select */
      __IO uint16_t bCKPL               	:	1;  /* Clock polarity select */
      __IO uint16_t bCKPH               	:	1;  /* Clock phase select */
    } a;
  } rCTLW0;
  union {    /* UCB0CTLW1 Register */
    __IO uint16_t r;
    struct { /* UCB0CTLW1 Bits */
      __IO uint16_t bGLIT               	:	2;  /* Deglitch time */
      __IO uint16_t bASTP               	:	2;  /* Automatic STOP condition generation */
      __IO uint16_t bSWACK              	:	1;  /* SW or HW ACK control */
      __IO uint16_t bSTPNACK            	:	1;  /* ACK all master bytes */
      __IO uint16_t bCLTO               	:	2;  /* Clock low timeout select */
      __IO uint16_t bETXINT             	:	1;  /* Early UCTXIFG0 */
      __I  uint16_t bRESERVED0          	:	7;  /* Reserved */
    } b;
  } rCTLW1;
  uint8_t  RESERVED0[2];
  __IO uint16_t rBRW; /* eUSCI_Bx Baud Rate Control Word Register */
  union {    /* UCB0STATW Register */
    __IO uint16_t r;
    struct { /* UCB0STATW Bits */
      __I  uint16_t bRESERVED1          	:	4;  /* Reserved */
      __I  uint16_t bBBUSY              	:	1;  /* Bus busy */
      __I  uint16_t bGC                 	:	1;  /* General call address received */
      __I  uint16_t bSCLLOW             	:	1;  /* SCL low */
      __I  uint16_t bRESERVED0          	:	1;  /* Reserved */
      __I  uint16_t bBCNT               	:	8;  /* Hardware byte counter value */
    } b;
    struct { /* UCB0STATW_SPI Bits */
      __I  uint16_t bBUSY               	:	1;  /* eUSCI_B busy */
      __IO uint16_t bRESERVED           	:	4;  /* Reserved */
      __IO uint16_t bOE                 	:	1;  /* Overrun error flag */
      __IO uint16_t bFE                 	:	1;  /* Framing error flag */
      __IO uint16_t bLISTEN             	:	1;  /* Listen enable */
    } a;
  } rSTATW;
  union {    /* UCB0TBCNT Register */
    __IO uint16_t r;
    struct { /* UCB0TBCNT Bits */
      __IO uint16_t bTBCNT              	:	8;  /* Byte counter threshold value */
      __I  uint16_t bRESERVED0          	:	8;  /* Reserved */
    } b;
  } rTBCNT;
  union {    /* UCB0RXBUF Register */
    __I uint16_t r;
    struct { /* UCB0RXBUF Bits */
      __I  uint16_t bRXBUF              	:	8;  /* Receive data buffer */
      __I  uint16_t bRESERVED0          	:	8;  /* Reserved */
    } b;
    struct { /* UCB0RXBUF_SPI Bits */
      __I  uint16_t bRXBUF              	:	8;  /* Receive data buffer */
      __I  uint16_t bRESERVED           	:	8;  /* Reserved */
    } a;
  } rRXBUF;
  union {    /* UCB0TXBUF Register */
    __IO uint16_t r;
    struct { /* UCB0TXBUF Bits */
      __IO uint16_t bTXBUF              	:	8;  /* Transmit data buffer */
      __I  uint16_t bRESERVED0          	:	8;  /* Reserved */
    } b;
    struct { /* UCB0TXBUF_SPI Bits */
      __IO uint16_t bTXBUF              	:	8;  /* Transmit data buffer */
      __I  uint16_t bRESERVED           	:	8;  /* Reserved */
    } a;
  } rTXBUF;
  uint8_t  RESERVED1[4];
  union {    /* UCB0I2COA0 Register */
    __IO uint16_t r;
    struct { /* UCB0I2COA0 Bits */
      __IO uint16_t bI2COA0             	:	10;  /* I2C own address */
      __IO uint16_t bOAEN               	:	1;  /* Own Address enable register */
      __I  uint16_t bRESERVED0          	:	4;  /* Reserved */
      __IO uint16_t bGCEN               	:	1;  /* General call response enable */
    } b;
  } rI2COA0;
  union {    /* UCB0I2COA1 Register */
    __IO uint16_t r;
    struct { /* UCB0I2COA1 Bits */
      __IO uint16_t bI2COA1             	:	10;  /* I2C own address */
      __IO uint16_t bOAEN               	:	1;  /* Own Address enable register */
      __I  uint16_t bRESERVED0          	:	5;  /* Reserved */
    } b;
  } rI2COA1;
  union {    /* UCB0I2COA2 Register */
    __IO uint16_t r;
    struct { /* UCB0I2COA2 Bits */
      __IO uint16_t bI2COA2             	:	10;  /* I2C own address */
      __IO uint16_t bOAEN               	:	1;  /* Own Address enable register */
      __I  uint16_t bRESERVED0          	:	5;  /* Reserved */
    } b;
  } rI2COA2;
  union {    /* UCB0I2COA3 Register */
    __IO uint16_t r;
    struct { /* UCB0I2COA3 Bits */
      __IO uint16_t bI2COA3             	:	10;  /* I2C own address */
      __IO uint16_t bOAEN               	:	1;  /* Own Address enable register */
      __I  uint16_t bRESERVED0          	:	5;  /* Reserved */
    } b;
  } rI2COA3;
  union {    /* UCB0ADDRX Register */
    __I uint16_t r;
    struct { /* UCB0ADDRX Bits */
      __I  uint16_t bADDRX              	:	10;  /* Received Address Register */
      __I  uint16_t bRESERVED0          	:	6;  /* Reserved */
    } b;
  } rADDRX;
  union {    /* UCB0ADDMASK Register */
    __IO uint16_t r;
    struct { /* UCB0ADDMASK Bits */
      __IO uint16_t bADDMASK            	:	10;  /*  */
      __I  uint16_t bRESERVED0          	:	6;  /* Reserved */
    } b;
  } rADDMASK;
  union {    /* UCB0I2CSA Register */
    __IO uint16_t r;
    struct { /* UCB0I2CSA Bits */
      __IO uint16_t bI2CSA              	:	10;  /* I2C slave address */
      __I  uint16_t bRESERVED0          	:	6;  /* Reserved */
    } b;
  } rI2CSA;
  uint8_t  RESERVED2[8];
  union {    /* UCB0IE Register */
    __IO uint16_t r;
    struct { /* UCB0IE Bits */
      __IO uint16_t bRXIE0              	:	1;  /* Receive interrupt enable 0 */
      __IO uint16_t bTXIE0              	:	1;  /* Transmit interrupt enable 0 */
      __IO uint16_t bSTTIE              	:	1;  /* START condition interrupt enable */
      __IO uint16_t bSTPIE              	:	1;  /* STOP condition interrupt enable */
      __IO uint16_t bALIE               	:	1;  /* Arbitration lost interrupt enable */
      __IO uint16_t bNACKIE             	:	1;  /* Not-acknowledge interrupt enable */
      __IO uint16_t bBCNTIE             	:	1;  /* Byte counter interrupt enable */
      __IO uint16_t bCLTOIE             	:	1;  /* Clock low timeout interrupt enable */
      __IO uint16_t bRXIE1              	:	1;  /* Receive interrupt enable 1 */
      __IO uint16_t bTXIE1              	:	1;  /* Transmit interrupt enable 1 */
      __IO uint16_t bRXIE2              	:	1;  /* Receive interrupt enable 2 */
      __IO uint16_t bTXIE2              	:	1;  /* Transmit interrupt enable 2 */
      __IO uint16_t bRXIE3              	:	1;  /* Receive interrupt enable 3 */
      __IO uint16_t bTXIE3              	:	1;  /* Transmit interrupt enable 3 */
      __IO uint16_t bBIT9IE             	:	1;  /* Bit position 9 interrupt enable */
      __I  uint16_t bRESERVED0          	:	1;  /* Reserved */
    } b;
    struct { /* UCB0IE_SPI Bits */
      __IO uint16_t bRXIE               	:	1;  /* Receive interrupt enable */
      __IO uint16_t bTXIE               	:	1;  /* Transmit interrupt enable */
      __I  uint16_t bRESERVED           	:	14;  /* Reserved */
    } a;
  } rIE;
  union {    /* UCB0IFG Register */
    __IO uint16_t r;
    struct { /* UCB0IFG Bits */
      __IO uint16_t bRXIFG0             	:	1;  /* eUSCI_B receive interrupt flag 0 */
      __IO uint16_t bTXIFG0             	:	1;  /* eUSCI_B transmit interrupt flag 0 */
      __IO uint16_t bSTTIFG             	:	1;  /* START condition interrupt flag */
      __IO uint16_t bSTPIFG             	:	1;  /* STOP condition interrupt flag */
      __IO uint16_t bALIFG              	:	1;  /* Arbitration lost interrupt flag */
      __IO uint16_t bNACKIFG            	:	1;  /* Not-acknowledge received interrupt flag */
      __IO uint16_t bBCNTIFG            	:	1;  /* Byte counter interrupt flag */
      __IO uint16_t bCLTOIFG            	:	1;  /* Clock low timeout interrupt flag */
      __IO uint16_t bRXIFG1             	:	1;  /* eUSCI_B receive interrupt flag 1 */
      __IO uint16_t bTXIFG1             	:	1;  /* eUSCI_B transmit interrupt flag 1 */
      __IO uint16_t bRXIFG2             	:	1;  /* eUSCI_B receive interrupt flag 2 */
      __IO uint16_t bTXIFG2             	:	1;  /* eUSCI_B transmit interrupt flag 2 */
      __IO uint16_t bRXIFG3             	:	1;  /* eUSCI_B receive interrupt flag 3 */
      __IO uint16_t bTXIFG3             	:	1;  /* eUSCI_B transmit interrupt flag 3 */
      __IO uint16_t bBIT9IFG            	:	1;  /* Bit position 9 interrupt flag */
      __I  uint16_t bRESERVED0          	:	1;  /* Reserved */
    } b;
    struct { /* UCB0IFG_SPI Bits */
      __IO uint16_t bRXIFG              	:	1;  /* Receive interrupt flag */
      __IO uint16_t bTXIFG              	:	1;  /* Transmit interrupt flag */
      __I  uint16_t bRESERVED           	:	14;  /* Reserved */
    } a;
  } rIFG;
  __I uint16_t rIV; /* eUSCI_Bx Interrupt Vector Register */
} EUSCI_B0_Type;


//*****************************************************************************
// EUSCI_B1 Registers
//*****************************************************************************
typedef struct {
  union {    /* UCB1CTLW0 Register */
    __IO uint16_t r;
    struct { /* UCB1CTLW0 Bits */
      __IO uint16_t bSWRST              	:	1;  /* Software reset enable */
      __IO uint16_t bTXSTT              	:	1;  /* Transmit START condition in master mode */
      __IO uint16_t bTXSTP              	:	1;  /* Transmit STOP condition in master mode */
      __IO uint16_t bTXNACK             	:	1;  /* Transmit a NACK */
      __IO uint16_t bTR                 	:	1;  /* Transmitter/receiver */
      __IO uint16_t bTXACK              	:	1;  /* Transmit ACK condition in slave mode */
      __IO uint16_t bSSEL               	:	2;  /* eUSCI_B clock source select */
      __IO uint16_t bSYNC               	:	1;  /* Synchronous mode enable */
      __IO uint16_t bMODE               	:	2;  /* eUSCI_B mode */
      __IO uint16_t bMST                	:	1;  /* Master mode select */
      __I  uint16_t bRESERVED0          	:	1;  /* Reserved */
      __IO uint16_t bMM                 	:	1;  /* Multi-master environment select */
      __IO uint16_t bSLA10              	:	1;  /* Slave addressing mode select */
      __IO uint16_t bA10                	:	1;  /* Own addressing mode select */
    } b;
    struct { /* UCB1CTLW0_SPI Bits */
      __IO uint16_t bSWRST              	:	1;  /* Software reset enable */
      __IO uint16_t bSTEM               	:	1;  /* STE mode select in master mode. */
      __I  uint16_t bRESERVED           	:	4;  /* Reserved */
      __IO uint16_t bSSEL               	:	2;  /* eUSCI_B clock source select */
      __IO uint16_t bSYNC               	:	1;  /* Synchronous mode enable */
      __IO uint16_t bMODE               	:	2;  /* eUSCI mode */
      __IO uint16_t bMST                	:	1;  /* Master mode select */
      __IO uint16_t b7BIT               	:	1;  /* Character length */
      __IO uint16_t bMSB                	:	1;  /* MSB first select */
      __IO uint16_t bCKPL               	:	1;  /* Clock polarity select */
      __IO uint16_t bCKPH               	:	1;  /* Clock phase select */
    } a;
  } rCTLW0;
  union {    /* UCB1CTLW1 Register */
    __IO uint16_t r;
    struct { /* UCB1CTLW1 Bits */
      __IO uint16_t bGLIT               	:	2;  /* Deglitch time */
      __IO uint16_t bASTP               	:	2;  /* Automatic STOP condition generation */
      __IO uint16_t bSWACK              	:	1;  /* SW or HW ACK control */
      __IO uint16_t bSTPNACK            	:	1;  /* ACK all master bytes */
      __IO uint16_t bCLTO               	:	2;  /* Clock low timeout select */
      __IO uint16_t bETXINT             	:	1;  /* Early UCTXIFG0 */
      __I  uint16_t bRESERVED0          	:	7;  /* Reserved */
    } b;
  } rCTLW1;
  uint8_t  RESERVED0[2];
  __IO uint16_t rBRW; /* eUSCI_Bx Baud Rate Control Word Register */
  union {    /* UCB1STATW Register */
    __IO uint16_t r;
    struct { /* UCB1STATW Bits */
      __I  uint16_t bRESERVED1          	:	4;  /* Reserved */
      __I  uint16_t bBBUSY              	:	1;  /* Bus busy */
      __I  uint16_t bGC                 	:	1;  /* General call address received */
      __I  uint16_t bSCLLOW             	:	1;  /* SCL low */
      __I  uint16_t bRESERVED0          	:	1;  /* Reserved */
      __I  uint16_t bBCNT               	:	8;  /* Hardware byte counter value */
    } b;
    struct { /* UCB1STATW_SPI Bits */
      __I  uint16_t bBUSY               	:	1;  /* eUSCI_B busy */
      __IO uint16_t bRESERVED           	:	4;  /* Reserved */
      __IO uint16_t bOE                 	:	1;  /* Overrun error flag */
      __IO uint16_t bFE                 	:	1;  /* Framing error flag */
      __IO uint16_t bLISTEN             	:	1;  /* Listen enable */
    } a;
  } rSTATW;
  union {    /* UCB1TBCNT Register */
    __IO uint16_t r;
    struct { /* UCB1TBCNT Bits */
      __IO uint16_t bTBCNT              	:	8;  /* Byte counter threshold value */
      __I  uint16_t bRESERVED0          	:	8;  /* Reserved */
    } b;
  } rTBCNT;
  union {    /* UCB1RXBUF Register */
    __I uint16_t r;
    struct { /* UCB1RXBUF Bits */
      __I  uint16_t bRXBUF              	:	8;  /* Receive data buffer */
      __I  uint16_t bRESERVED0          	:	8;  /* Reserved */
    } b;
    struct { /* UCB1RXBUF_SPI Bits */
      __I  uint16_t bRXBUF              	:	8;  /* Receive data buffer */
      __I  uint16_t bRESERVED           	:	8;  /* Reserved */
    } a;
  } rRXBUF;
  union {    /* UCB1TXBUF Register */
    __IO uint16_t r;
    struct { /* UCB1TXBUF Bits */
      __IO uint16_t bTXBUF              	:	8;  /* Transmit data buffer */
      __I  uint16_t bRESERVED0          	:	8;  /* Reserved */
    } b;
    struct { /* UCB1TXBUF_SPI Bits */
      __IO uint16_t bTXBUF              	:	8;  /* Transmit data buffer */
      __I  uint16_t bRESERVED           	:	8;  /* Reserved */
    } a;
  } rTXBUF;
  uint8_t  RESERVED1[4];
  union {    /* UCB1I2COA0 Register */
    __IO uint16_t r;
    struct { /* UCB1I2COA0 Bits */
      __IO uint16_t bI2COA0             	:	10;  /* I2C own address */
      __IO uint16_t bOAEN               	:	1;  /* Own Address enable register */
      __I  uint16_t bRESERVED0          	:	4;  /* Reserved */
      __IO uint16_t bGCEN               	:	1;  /* General call response enable */
    } b;
  } rI2COA0;
  union {    /* UCB1I2COA1 Register */
    __IO uint16_t r;
    struct { /* UCB1I2COA1 Bits */
      __IO uint16_t bI2COA1             	:	10;  /* I2C own address */
      __IO uint16_t bOAEN               	:	1;  /* Own Address enable register */
      __I  uint16_t bRESERVED0          	:	5;  /* Reserved */
    } b;
  } rI2COA1;
  union {    /* UCB1I2COA2 Register */
    __IO uint16_t r;
    struct { /* UCB1I2COA2 Bits */
      __IO uint16_t bI2COA2             	:	10;  /* I2C own address */
      __IO uint16_t bOAEN               	:	1;  /* Own Address enable register */
      __I  uint16_t bRESERVED0          	:	5;  /* Reserved */
    } b;
  } rI2COA2;
  union {    /* UCB1I2COA3 Register */
    __IO uint16_t r;
    struct { /* UCB1I2COA3 Bits */
      __IO uint16_t bI2COA3             	:	10;  /* I2C own address */
      __IO uint16_t bOAEN               	:	1;  /* Own Address enable register */
      __I  uint16_t bRESERVED0          	:	5;  /* Reserved */
    } b;
  } rI2COA3;
  union {    /* UCB1ADDRX Register */
    __I uint16_t r;
    struct { /* UCB1ADDRX Bits */
      __I  uint16_t bADDRX              	:	10;  /* Received Address Register */
      __I  uint16_t bRESERVED0          	:	6;  /* Reserved */
    } b;
  } rADDRX;
  union {    /* UCB1ADDMASK Register */
    __IO uint16_t r;
    struct { /* UCB1ADDMASK Bits */
      __IO uint16_t bADDMASK            	:	10;  /*  */
      __I  uint16_t bRESERVED0          	:	6;  /* Reserved */
    } b;
  } rADDMASK;
  union {    /* UCB1I2CSA Register */
    __IO uint16_t r;
    struct { /* UCB1I2CSA Bits */
      __IO uint16_t bI2CSA              	:	10;  /* I2C slave address */
      __I  uint16_t bRESERVED0          	:	6;  /* Reserved */
    } b;
  } rI2CSA;
  uint8_t  RESERVED2[8];
  union {    /* UCB1IE Register */
    __IO uint16_t r;
    struct { /* UCB1IE Bits */
      __IO uint16_t bRXIE0              	:	1;  /* Receive interrupt enable 0 */
      __IO uint16_t bTXIE0              	:	1;  /* Transmit interrupt enable 0 */
      __IO uint16_t bSTTIE              	:	1;  /* START condition interrupt enable */
      __IO uint16_t bSTPIE              	:	1;  /* STOP condition interrupt enable */
      __IO uint16_t bALIE               	:	1;  /* Arbitration lost interrupt enable */
      __IO uint16_t bNACKIE             	:	1;  /* Not-acknowledge interrupt enable */
      __IO uint16_t bBCNTIE             	:	1;  /* Byte counter interrupt enable */
      __IO uint16_t bCLTOIE             	:	1;  /* Clock low timeout interrupt enable */
      __IO uint16_t bRXIE1              	:	1;  /* Receive interrupt enable 1 */
      __IO uint16_t bTXIE1              	:	1;  /* Transmit interrupt enable 1 */
      __IO uint16_t bRXIE2              	:	1;  /* Receive interrupt enable 2 */
      __IO uint16_t bTXIE2              	:	1;  /* Transmit interrupt enable 2 */
      __IO uint16_t bRXIE3              	:	1;  /* Receive interrupt enable 3 */
      __IO uint16_t bTXIE3              	:	1;  /* Transmit interrupt enable 3 */
      __IO uint16_t bBIT9IE             	:	1;  /* Bit position 9 interrupt enable */
      __I  uint16_t bRESERVED0          	:	1;  /* Reserved */
    } b;
    struct { /* UCB1IE_SPI Bits */
      __IO uint16_t bRXIE               	:	1;  /* Receive interrupt enable */
      __IO uint16_t bTXIE               	:	1;  /* Transmit interrupt enable */
      __I  uint16_t bRESERVED           	:	14;  /* Reserved */
    } a;
  } rIE;
  union {    /* UCB1IFG Register */
    __IO uint16_t r;
    struct { /* UCB1IFG Bits */
      __IO uint16_t bRXIFG0             	:	1;  /* eUSCI_B receive interrupt flag 0 */
      __IO uint16_t bTXIFG0             	:	1;  /* eUSCI_B transmit interrupt flag 0 */
      __IO uint16_t bSTTIFG             	:	1;  /* START condition interrupt flag */
      __IO uint16_t bSTPIFG             	:	1;  /* STOP condition interrupt flag */
      __IO uint16_t bALIFG              	:	1;  /* Arbitration lost interrupt flag */
      __IO uint16_t bNACKIFG            	:	1;  /* Not-acknowledge received interrupt flag */
      __IO uint16_t bBCNTIFG            	:	1;  /* Byte counter interrupt flag */
      __IO uint16_t bCLTOIFG            	:	1;  /* Clock low timeout interrupt flag */
      __IO uint16_t bRXIFG1             	:	1;  /* eUSCI_B receive interrupt flag 1 */
      __IO uint16_t bTXIFG1             	:	1;  /* eUSCI_B transmit interrupt flag 1 */
      __IO uint16_t bRXIFG2             	:	1;  /* eUSCI_B receive interrupt flag 2 */
      __IO uint16_t bTXIFG2             	:	1;  /* eUSCI_B transmit interrupt flag 2 */
      __IO uint16_t bRXIFG3             	:	1;  /* eUSCI_B receive interrupt flag 3 */
      __IO uint16_t bTXIFG3             	:	1;  /* eUSCI_B transmit interrupt flag 3 */
      __IO uint16_t bBIT9IFG            	:	1;  /* Bit position 9 interrupt flag */
      __I  uint16_t bRESERVED0          	:	1;  /* Reserved */
    } b;
    struct { /* UCB1IFG_SPI Bits */
      __IO uint16_t bRXIFG              	:	1;  /* Receive interrupt flag */
      __IO uint16_t bTXIFG              	:	1;  /* Transmit interrupt flag */
      __I  uint16_t bRESERVED           	:	14;  /* Reserved */
    } a;
  } rIFG;
  __I uint16_t rIV; /* eUSCI_Bx Interrupt Vector Register */
} EUSCI_B1_Type;


//*****************************************************************************
// EUSCI_B2 Registers
//*****************************************************************************
typedef struct {
  union {    /* UCB2CTLW0 Register */
    __IO uint16_t r;
    struct { /* UCB2CTLW0 Bits */
      __IO uint16_t bSWRST              	:	1;  /* Software reset enable */
      __IO uint16_t bTXSTT              	:	1;  /* Transmit START condition in master mode */
      __IO uint16_t bTXSTP              	:	1;  /* Transmit STOP condition in master mode */
      __IO uint16_t bTXNACK             	:	1;  /* Transmit a NACK */
      __IO uint16_t bTR                 	:	1;  /* Transmitter/receiver */
      __IO uint16_t bTXACK              	:	1;  /* Transmit ACK condition in slave mode */
      __IO uint16_t bSSEL               	:	2;  /* eUSCI_B clock source select */
      __IO uint16_t bSYNC               	:	1;  /* Synchronous mode enable */
      __IO uint16_t bMODE               	:	2;  /* eUSCI_B mode */
      __IO uint16_t bMST                	:	1;  /* Master mode select */
      __I  uint16_t bRESERVED0          	:	1;  /* Reserved */
      __IO uint16_t bMM                 	:	1;  /* Multi-master environment select */
      __IO uint16_t bSLA10              	:	1;  /* Slave addressing mode select */
      __IO uint16_t bA10                	:	1;  /* Own addressing mode select */
    } b;
    struct { /* UCB2CTLW0_SPI Bits */
      __IO uint16_t bSWRST              	:	1;  /* Software reset enable */
      __IO uint16_t bSTEM               	:	1;  /* STE mode select in master mode. */
      __I  uint16_t bRESERVED           	:	4;  /* Reserved */
      __IO uint16_t bSSEL               	:	2;  /* eUSCI_B clock source select */
      __IO uint16_t bSYNC               	:	1;  /* Synchronous mode enable */
      __IO uint16_t bMODE               	:	2;  /* eUSCI mode */
      __IO uint16_t bMST                	:	1;  /* Master mode select */
      __IO uint16_t b7BIT               	:	1;  /* Character length */
      __IO uint16_t bMSB                	:	1;  /* MSB first select */
      __IO uint16_t bCKPL               	:	1;  /* Clock polarity select */
      __IO uint16_t bCKPH               	:	1;  /* Clock phase select */
    } a;
  } rCTLW0;
  union {    /* UCB2CTLW1 Register */
    __IO uint16_t r;
    struct { /* UCB2CTLW1 Bits */
      __IO uint16_t bGLIT               	:	2;  /* Deglitch time */
      __IO uint16_t bASTP               	:	2;  /* Automatic STOP condition generation */
      __IO uint16_t bSWACK              	:	1;  /* SW or HW ACK control */
      __IO uint16_t bSTPNACK            	:	1;  /* ACK all master bytes */
      __IO uint16_t bCLTO               	:	2;  /* Clock low timeout select */
      __IO uint16_t bETXINT             	:	1;  /* Early UCTXIFG0 */
      __I  uint16_t bRESERVED0          	:	7;  /* Reserved */
    } b;
  } rCTLW1;
  uint8_t  RESERVED0[2];
  __IO uint16_t rBRW; /* eUSCI_Bx Baud Rate Control Word Register */
  union {    /* UCB2STATW Register */
    __IO uint16_t r;
    struct { /* UCB2STATW Bits */
      __I  uint16_t bRESERVED1          	:	4;  /* Reserved */
      __I  uint16_t bBBUSY              	:	1;  /* Bus busy */
      __I  uint16_t bGC                 	:	1;  /* General call address received */
      __I  uint16_t bSCLLOW             	:	1;  /* SCL low */
      __I  uint16_t bRESERVED0          	:	1;  /* Reserved */
      __I  uint16_t bBCNT               	:	8;  /* Hardware byte counter value */
    } b;
    struct { /* UCB2STATW_SPI Bits */
      __I  uint16_t bBUSY               	:	1;  /* eUSCI_B busy */
      __IO uint16_t bRESERVED           	:	4;  /* Reserved */
      __IO uint16_t bOE                 	:	1;  /* Overrun error flag */
      __IO uint16_t bFE                 	:	1;  /* Framing error flag */
      __IO uint16_t bLISTEN             	:	1;  /* Listen enable */
    } a;
  } rSTATW;
  union {    /* UCB2TBCNT Register */
    __IO uint16_t r;
    struct { /* UCB2TBCNT Bits */
      __IO uint16_t bTBCNT              	:	8;  /* Byte counter threshold value */
      __I  uint16_t bRESERVED0          	:	8;  /* Reserved */
    } b;
  } rTBCNT;
  union {    /* UCB2RXBUF Register */
    __I uint16_t r;
    struct { /* UCB2RXBUF Bits */
      __I  uint16_t bRXBUF              	:	8;  /* Receive data buffer */
      __I  uint16_t bRESERVED0          	:	8;  /* Reserved */
    } b;
    struct { /* UCB2RXBUF_SPI Bits */
      __I  uint16_t bRXBUF              	:	8;  /* Receive data buffer */
      __I  uint16_t bRESERVED           	:	8;  /* Reserved */
    } a;
  } rRXBUF;
  union {    /* UCB2TXBUF Register */
    __IO uint16_t r;
    struct { /* UCB2TXBUF Bits */
      __IO uint16_t bTXBUF              	:	8;  /* Transmit data buffer */
      __I  uint16_t bRESERVED0          	:	8;  /* Reserved */
    } b;
    struct { /* UCB2TXBUF_SPI Bits */
      __IO uint16_t bTXBUF              	:	8;  /* Transmit data buffer */
      __I  uint16_t bRESERVED           	:	8;  /* Reserved */
    } a;
  } rTXBUF;
  uint8_t  RESERVED1[4];
  union {    /* UCB2I2COA0 Register */
    __IO uint16_t r;
    struct { /* UCB2I2COA0 Bits */
      __IO uint16_t bI2COA0             	:	10;  /* I2C own address */
      __IO uint16_t bOAEN               	:	1;  /* Own Address enable register */
      __I  uint16_t bRESERVED0          	:	4;  /* Reserved */
      __IO uint16_t bGCEN               	:	1;  /* General call response enable */
    } b;
  } rI2COA0;
  union {    /* UCB2I2COA1 Register */
    __IO uint16_t r;
    struct { /* UCB2I2COA1 Bits */
      __IO uint16_t bI2COA1             	:	10;  /* I2C own address */
      __IO uint16_t bOAEN               	:	1;  /* Own Address enable register */
      __I  uint16_t bRESERVED0          	:	5;  /* Reserved */
    } b;
  } rI2COA1;
  union {    /* UCB2I2COA2 Register */
    __IO uint16_t r;
    struct { /* UCB2I2COA2 Bits */
      __IO uint16_t bI2COA2             	:	10;  /* I2C own address */
      __IO uint16_t bOAEN               	:	1;  /* Own Address enable register */
      __I  uint16_t bRESERVED0          	:	5;  /* Reserved */
    } b;
  } rI2COA2;
  union {    /* UCB2I2COA3 Register */
    __IO uint16_t r;
    struct { /* UCB2I2COA3 Bits */
      __IO uint16_t bI2COA3             	:	10;  /* I2C own address */
      __IO uint16_t bOAEN               	:	1;  /* Own Address enable register */
      __I  uint16_t bRESERVED0          	:	5;  /* Reserved */
    } b;
  } rI2COA3;
  union {    /* UCB2ADDRX Register */
    __I uint16_t r;
    struct { /* UCB2ADDRX Bits */
      __I  uint16_t bADDRX              	:	10;  /* Received Address Register */
      __I  uint16_t bRESERVED0          	:	6;  /* Reserved */
    } b;
  } rADDRX;
  union {    /* UCB2ADDMASK Register */
    __IO uint16_t r;
    struct { /* UCB2ADDMASK Bits */
      __IO uint16_t bADDMASK            	:	10;  /*  */
      __I  uint16_t bRESERVED0          	:	6;  /* Reserved */
    } b;
  } rADDMASK;
  union {    /* UCB2I2CSA Register */
    __IO uint16_t r;
    struct { /* UCB2I2CSA Bits */
      __IO uint16_t bI2CSA              	:	10;  /* I2C slave address */
      __I  uint16_t bRESERVED0          	:	6;  /* Reserved */
    } b;
  } rI2CSA;
  uint8_t  RESERVED2[8];
  union {    /* UCB2IE Register */
    __IO uint16_t r;
    struct { /* UCB2IE Bits */
      __IO uint16_t bRXIE0              	:	1;  /* Receive interrupt enable 0 */
      __IO uint16_t bTXIE0              	:	1;  /* Transmit interrupt enable 0 */
      __IO uint16_t bSTTIE              	:	1;  /* START condition interrupt enable */
      __IO uint16_t bSTPIE              	:	1;  /* STOP condition interrupt enable */
      __IO uint16_t bALIE               	:	1;  /* Arbitration lost interrupt enable */
      __IO uint16_t bNACKIE             	:	1;  /* Not-acknowledge interrupt enable */
      __IO uint16_t bBCNTIE             	:	1;  /* Byte counter interrupt enable */
      __IO uint16_t bCLTOIE             	:	1;  /* Clock low timeout interrupt enable */
      __IO uint16_t bRXIE1              	:	1;  /* Receive interrupt enable 1 */
      __IO uint16_t bTXIE1              	:	1;  /* Transmit interrupt enable 1 */
      __IO uint16_t bRXIE2              	:	1;  /* Receive interrupt enable 2 */
      __IO uint16_t bTXIE2              	:	1;  /* Transmit interrupt enable 2 */
      __IO uint16_t bRXIE3              	:	1;  /* Receive interrupt enable 3 */
      __IO uint16_t bTXIE3              	:	1;  /* Transmit interrupt enable 3 */
      __IO uint16_t bBIT9IE             	:	1;  /* Bit position 9 interrupt enable */
      __I  uint16_t bRESERVED0          	:	1;  /* Reserved */
    } b;
    struct { /* UCB2IE_SPI Bits */
      __IO uint16_t bRXIE               	:	1;  /* Receive interrupt enable */
      __IO uint16_t bTXIE               	:	1;  /* Transmit interrupt enable */
      __I  uint16_t bRESERVED           	:	14;  /* Reserved */
    } a;
  } rIE;
  union {    /* UCB2IFG Register */
    __IO uint16_t r;
    struct { /* UCB2IFG Bits */
      __IO uint16_t bRXIFG0             	:	1;  /* eUSCI_B receive interrupt flag 0 */
      __IO uint16_t bTXIFG0             	:	1;  /* eUSCI_B transmit interrupt flag 0 */
      __IO uint16_t bSTTIFG             	:	1;  /* START condition interrupt flag */
      __IO uint16_t bSTPIFG             	:	1;  /* STOP condition interrupt flag */
      __IO uint16_t bALIFG              	:	1;  /* Arbitration lost interrupt flag */
      __IO uint16_t bNACKIFG            	:	1;  /* Not-acknowledge received interrupt flag */
      __IO uint16_t bBCNTIFG            	:	1;  /* Byte counter interrupt flag */
      __IO uint16_t bCLTOIFG            	:	1;  /* Clock low timeout interrupt flag */
      __IO uint16_t bRXIFG1             	:	1;  /* eUSCI_B receive interrupt flag 1 */
      __IO uint16_t bTXIFG1             	:	1;  /* eUSCI_B transmit interrupt flag 1 */
      __IO uint16_t bRXIFG2             	:	1;  /* eUSCI_B receive interrupt flag 2 */
      __IO uint16_t bTXIFG2             	:	1;  /* eUSCI_B transmit interrupt flag 2 */
      __IO uint16_t bRXIFG3             	:	1;  /* eUSCI_B receive interrupt flag 3 */
      __IO uint16_t bTXIFG3             	:	1;  /* eUSCI_B transmit interrupt flag 3 */
      __IO uint16_t bBIT9IFG            	:	1;  /* Bit position 9 interrupt flag */
      __I  uint16_t bRESERVED0          	:	1;  /* Reserved */
    } b;
    struct { /* UCB2IFG_SPI Bits */
      __IO uint16_t bRXIFG              	:	1;  /* Receive interrupt flag */
      __IO uint16_t bTXIFG              	:	1;  /* Transmit interrupt flag */
      __I  uint16_t bRESERVED           	:	14;  /* Reserved */
    } a;
  } rIFG;
  __I uint16_t rIV; /* eUSCI_Bx Interrupt Vector Register */
} EUSCI_B2_Type;


//*****************************************************************************
// EUSCI_B3 Registers
//*****************************************************************************
typedef struct {
  union {    /* UCB3CTLW0 Register */
    __IO uint16_t r;
    struct { /* UCB3CTLW0 Bits */
      __IO uint16_t bSWRST              	:	1;  /* Software reset enable */
      __IO uint16_t bTXSTT              	:	1;  /* Transmit START condition in master mode */
      __IO uint16_t bTXSTP              	:	1;  /* Transmit STOP condition in master mode */
      __IO uint16_t bTXNACK             	:	1;  /* Transmit a NACK */
      __IO uint16_t bTR                 	:	1;  /* Transmitter/receiver */
      __IO uint16_t bTXACK              	:	1;  /* Transmit ACK condition in slave mode */
      __IO uint16_t bSSEL               	:	2;  /* eUSCI_B clock source select */
      __IO uint16_t bSYNC               	:	1;  /* Synchronous mode enable */
      __IO uint16_t bMODE               	:	2;  /* eUSCI_B mode */
      __IO uint16_t bMST                	:	1;  /* Master mode select */
      __I  uint16_t bRESERVED0          	:	1;  /* Reserved */
      __IO uint16_t bMM                 	:	1;  /* Multi-master environment select */
      __IO uint16_t bSLA10              	:	1;  /* Slave addressing mode select */
      __IO uint16_t bA10                	:	1;  /* Own addressing mode select */
    } b;
    struct { /* UCB3CTLW0_SPI Bits */
      __IO uint16_t bSWRST              	:	1;  /* Software reset enable */
      __IO uint16_t bSTEM               	:	1;  /* STE mode select in master mode. */
      __I  uint16_t bRESERVED           	:	4;  /* Reserved */
      __IO uint16_t bSSEL               	:	2;  /* eUSCI_B clock source select */
      __IO uint16_t bSYNC               	:	1;  /* Synchronous mode enable */
      __IO uint16_t bMODE               	:	2;  /* eUSCI mode */
      __IO uint16_t bMST                	:	1;  /* Master mode select */
      __IO uint16_t b7BIT               	:	1;  /* Character length */
      __IO uint16_t bMSB                	:	1;  /* MSB first select */
      __IO uint16_t bCKPL               	:	1;  /* Clock polarity select */
      __IO uint16_t bCKPH               	:	1;  /* Clock phase select */
    } a;
  } rCTLW0;
  union {    /* UCB3CTLW1 Register */
    __IO uint16_t r;
    struct { /* UCB3CTLW1 Bits */
      __IO uint16_t bGLIT               	:	2;  /* Deglitch time */
      __IO uint16_t bASTP               	:	2;  /* Automatic STOP condition generation */
      __IO uint16_t bSWACK              	:	1;  /* SW or HW ACK control */
      __IO uint16_t bSTPNACK            	:	1;  /* ACK all master bytes */
      __IO uint16_t bCLTO               	:	2;  /* Clock low timeout select */
      __IO uint16_t bETXINT             	:	1;  /* Early UCTXIFG0 */
      __I  uint16_t bRESERVED0          	:	7;  /* Reserved */
    } b;
  } rCTLW1;
  uint8_t  RESERVED0[2];
  __IO uint16_t rBRW; /* eUSCI_Bx Baud Rate Control Word Register */
  union {    /* UCB3STATW Register */
    __IO uint16_t r;
    struct { /* UCB3STATW Bits */
      __I  uint16_t bRESERVED1          	:	4;  /* Reserved */
      __I  uint16_t bBBUSY              	:	1;  /* Bus busy */
      __I  uint16_t bGC                 	:	1;  /* General call address received */
      __I  uint16_t bSCLLOW             	:	1;  /* SCL low */
      __I  uint16_t bRESERVED0          	:	1;  /* Reserved */
      __I  uint16_t bBCNT               	:	8;  /* Hardware byte counter value */
    } b;
    struct { /* UCB3STATW_SPI Bits */
      __I  uint16_t bBUSY               	:	1;  /* eUSCI_B busy */
      __IO uint16_t bRESERVED           	:	4;  /* Reserved */
      __IO uint16_t bOE                 	:	1;  /* Overrun error flag */
      __IO uint16_t bFE                 	:	1;  /* Framing error flag */
      __IO uint16_t bLISTEN             	:	1;  /* Listen enable */
    } a;
  } rSTATW;
  union {    /* UCB3TBCNT Register */
    __IO uint16_t r;
    struct { /* UCB3TBCNT Bits */
      __IO uint16_t bTBCNT              	:	8;  /* Byte counter threshold value */
      __I  uint16_t bRESERVED0          	:	8;  /* Reserved */
    } b;
  } rTBCNT;
  union {    /* UCB3RXBUF Register */
    __I uint16_t r;
    struct { /* UCB3RXBUF Bits */
      __I  uint16_t bRXBUF              	:	8;  /* Receive data buffer */
      __I  uint16_t bRESERVED0          	:	8;  /* Reserved */
    } b;
    struct { /* UCB3RXBUF_SPI Bits */
      __I  uint16_t bRXBUF              	:	8;  /* Receive data buffer */
      __I  uint16_t bRESERVED           	:	8;  /* Reserved */
    } a;
  } rRXBUF;
  union {    /* UCB3TXBUF Register */
    __IO uint16_t r;
    struct { /* UCB3TXBUF Bits */
      __IO uint16_t bTXBUF              	:	8;  /* Transmit data buffer */
      __I  uint16_t bRESERVED0          	:	8;  /* Reserved */
    } b;
    struct { /* UCB3TXBUF_SPI Bits */
      __IO uint16_t bTXBUF              	:	8;  /* Transmit data buffer */
      __I  uint16_t bRESERVED           	:	8;  /* Reserved */
    } a;
  } rTXBUF;
  uint8_t  RESERVED1[4];
  union {    /* UCB3I2COA0 Register */
    __IO uint16_t r;
    struct { /* UCB3I2COA0 Bits */
      __IO uint16_t bI2COA0             	:	10;  /* I2C own address */
      __IO uint16_t bOAEN               	:	1;  /* Own Address enable register */
      __I  uint16_t bRESERVED0          	:	4;  /* Reserved */
      __IO uint16_t bGCEN               	:	1;  /* General call response enable */
    } b;
  } rI2COA0;
  union {    /* UCB3I2COA1 Register */
    __IO uint16_t r;
    struct { /* UCB3I2COA1 Bits */
      __IO uint16_t bI2COA1             	:	10;  /* I2C own address */
      __IO uint16_t bOAEN               	:	1;  /* Own Address enable register */
      __I  uint16_t bRESERVED0          	:	5;  /* Reserved */
    } b;
  } rI2COA1;
  union {    /* UCB3I2COA2 Register */
    __IO uint16_t r;
    struct { /* UCB3I2COA2 Bits */
      __IO uint16_t bI2COA2             	:	10;  /* I2C own address */
      __IO uint16_t bOAEN               	:	1;  /* Own Address enable register */
      __I  uint16_t bRESERVED0          	:	5;  /* Reserved */
    } b;
  } rI2COA2;
  union {    /* UCB3I2COA3 Register */
    __IO uint16_t r;
    struct { /* UCB3I2COA3 Bits */
      __IO uint16_t bI2COA3             	:	10;  /* I2C own address */
      __IO uint16_t bOAEN               	:	1;  /* Own Address enable register */
      __I  uint16_t bRESERVED0          	:	5;  /* Reserved */
    } b;
  } rI2COA3;
  union {    /* UCB3ADDRX Register */
    __I uint16_t r;
    struct { /* UCB3ADDRX Bits */
      __I  uint16_t bADDRX              	:	10;  /* Received Address Register */
      __I  uint16_t bRESERVED0          	:	6;  /* Reserved */
    } b;
  } rADDRX;
  union {    /* UCB3ADDMASK Register */
    __IO uint16_t r;
    struct { /* UCB3ADDMASK Bits */
      __IO uint16_t bADDMASK            	:	10;  /*  */
      __I  uint16_t bRESERVED0          	:	6;  /* Reserved */
    } b;
  } rADDMASK;
  union {    /* UCB3I2CSA Register */
    __IO uint16_t r;
    struct { /* UCB3I2CSA Bits */
      __IO uint16_t bI2CSA              	:	10;  /* I2C slave address */
      __I  uint16_t bRESERVED0          	:	6;  /* Reserved */
    } b;
  } rI2CSA;
  uint8_t  RESERVED2[8];
  union {    /* UCB3IE Register */
    __IO uint16_t r;
    struct { /* UCB3IE Bits */
      __IO uint16_t bRXIE0              	:	1;  /* Receive interrupt enable 0 */
      __IO uint16_t bTXIE0              	:	1;  /* Transmit interrupt enable 0 */
      __IO uint16_t bSTTIE              	:	1;  /* START condition interrupt enable */
      __IO uint16_t bSTPIE              	:	1;  /* STOP condition interrupt enable */
      __IO uint16_t bALIE               	:	1;  /* Arbitration lost interrupt enable */
      __IO uint16_t bNACKIE             	:	1;  /* Not-acknowledge interrupt enable */
      __IO uint16_t bBCNTIE             	:	1;  /* Byte counter interrupt enable */
      __IO uint16_t bCLTOIE             	:	1;  /* Clock low timeout interrupt enable */
      __IO uint16_t bRXIE1              	:	1;  /* Receive interrupt enable 1 */
      __IO uint16_t bTXIE1              	:	1;  /* Transmit interrupt enable 1 */
      __IO uint16_t bRXIE2              	:	1;  /* Receive interrupt enable 2 */
      __IO uint16_t bTXIE2              	:	1;  /* Transmit interrupt enable 2 */
      __IO uint16_t bRXIE3              	:	1;  /* Receive interrupt enable 3 */
      __IO uint16_t bTXIE3              	:	1;  /* Transmit interrupt enable 3 */
      __IO uint16_t bBIT9IE             	:	1;  /* Bit position 9 interrupt enable */
      __I  uint16_t bRESERVED0          	:	1;  /* Reserved */
    } b;
    struct { /* UCB3IE_SPI Bits */
      __IO uint16_t bRXIE               	:	1;  /* Receive interrupt enable */
      __IO uint16_t bTXIE               	:	1;  /* Transmit interrupt enable */
      __I  uint16_t bRESERVED           	:	14;  /* Reserved */
    } a;
  } rIE;
  union {    /* UCB3IFG Register */
    __IO uint16_t r;
    struct { /* UCB3IFG Bits */
      __IO uint16_t bRXIFG0             	:	1;  /* eUSCI_B receive interrupt flag 0 */
      __IO uint16_t bTXIFG0             	:	1;  /* eUSCI_B transmit interrupt flag 0 */
      __IO uint16_t bSTTIFG             	:	1;  /* START condition interrupt flag */
      __IO uint16_t bSTPIFG             	:	1;  /* STOP condition interrupt flag */
      __IO uint16_t bALIFG              	:	1;  /* Arbitration lost interrupt flag */
      __IO uint16_t bNACKIFG            	:	1;  /* Not-acknowledge received interrupt flag */
      __IO uint16_t bBCNTIFG            	:	1;  /* Byte counter interrupt flag */
      __IO uint16_t bCLTOIFG            	:	1;  /* Clock low timeout interrupt flag */
      __IO uint16_t bRXIFG1             	:	1;  /* eUSCI_B receive interrupt flag 1 */
      __IO uint16_t bTXIFG1             	:	1;  /* eUSCI_B transmit interrupt flag 1 */
      __IO uint16_t bRXIFG2             	:	1;  /* eUSCI_B receive interrupt flag 2 */
      __IO uint16_t bTXIFG2             	:	1;  /* eUSCI_B transmit interrupt flag 2 */
      __IO uint16_t bRXIFG3             	:	1;  /* eUSCI_B receive interrupt flag 3 */
      __IO uint16_t bTXIFG3             	:	1;  /* eUSCI_B transmit interrupt flag 3 */
      __IO uint16_t bBIT9IFG            	:	1;  /* Bit position 9 interrupt flag */
      __I  uint16_t bRESERVED0          	:	1;  /* Reserved */
    } b;
    struct { /* UCB3IFG_SPI Bits */
      __IO uint16_t bRXIFG              	:	1;  /* Receive interrupt flag */
      __IO uint16_t bTXIFG              	:	1;  /* Transmit interrupt flag */
      __I  uint16_t bRESERVED           	:	14;  /* Reserved */
    } a;
  } rIFG;
  __I uint16_t rIV; /* eUSCI_Bx Interrupt Vector Register */
} EUSCI_B3_Type;


//*****************************************************************************
// FLCTL Registers
//*****************************************************************************
typedef struct {
  union {    /* FLCTL_POWER_STAT Register */
    __I uint32_t r;
    struct { /* FLCTL_POWER_STAT Bits */
      __I  uint32_t bPSTAT              	:	3;  /*  */
      __I  uint32_t bLDOSTAT            	:	1;  /* PSS FLDO GOOD status */
      __I  uint32_t bVREFSTAT           	:	1;  /* PSS VREF stable status */
      __I  uint32_t bIREFSTAT           	:	1;  /* PSS IREF stable status */
      __I  uint32_t bTRIMSTAT           	:	1;  /* PSS trim done status */
      __I  uint32_t bRD_2T              	:	1;  /* Indicates if Flash is being accessed in 2T mode */
      __I  uint32_t bRESERVED0          	:	24;  /* Reserved */
    } b;
  } rPOWER_STAT;
  uint8_t  RESERVED0[12];
  union {    /* FLCTL_BANK0_RDCTL Register */
    __IO uint32_t r;
    struct { /* FLCTL_BANK0_RDCTL Bits */
      __IO uint32_t bRD_MODE            	:	4;  /* Flash read mode control setting for Bank 0 */
      __IO uint32_t bBUFI               	:	1;  /* Enables read buffering feature for instruction fetches to this Bank */
      __IO uint32_t bBUFD               	:	1;  /* Enables read buffering feature for data reads to this Bank */
      __I  uint32_t bRESERVED0          	:	2;  /* Reserved */
      __IO uint32_t bRESERVED1          	:	1;  /* Reserved */
      __IO uint32_t bRESERVED2          	:	1;  /* Reserved */
      __IO uint32_t bRESERVED3          	:	1;  /* Reserved */
      __IO uint32_t bRESERVED4          	:	1;  /* Reserved */
      __IO uint32_t bWAIT               	:	4;  /* Number of wait states for read */
      __I  uint32_t bRD_MODE_STATUS     	:	4;  /* Read mode */
      __I  uint32_t bRESERVED5          	:	12;  /* Reserved */
    } b;
  } rBANK0_RDCTL;
  union {    /* FLCTL_BANK1_RDCTL Register */
    __IO uint32_t r;
    struct { /* FLCTL_BANK1_RDCTL Bits */
      __IO uint32_t bRD_MODE            	:	4;  /* Flash read mode control setting for Bank 0 */
      __IO uint32_t bBUFI               	:	1;  /* Enables read buffering feature for instruction fetches to this Bank */
      __IO uint32_t bBUFD               	:	1;  /* Enables read buffering feature for data reads to this Bank */
      __I  uint32_t bRESERVED0          	:	2;  /* Reserved */
      __IO uint32_t bRESERVED1          	:	1;  /* Reserved */
      __IO uint32_t bRESERVED2          	:	1;  /* Reserved */
      __IO uint32_t bRESERVED3          	:	1;  /* Reserved */
      __IO uint32_t bRESERVED4          	:	1;  /* Reserved */
      __IO uint32_t bWAIT               	:	4;  /* Number of wait states for read */
      __I  uint32_t bRD_MODE_STATUS     	:	4;  /* Read mode */
      __I  uint32_t bRESERVED5          	:	12;  /* Reserved */
    } b;
  } rBANK1_RDCTL;
  uint8_t  RESERVED1[8];
  union {    /* FLCTL_RDBRST_CTLSTAT Register */
    __IO uint32_t r;
    struct { /* FLCTL_RDBRST_CTLSTAT Bits */
      __O  uint32_t bSTART              	:	1;  /* Start of burst/compare operation */
      __IO uint32_t bMEM_TYPE           	:	2;  /* Type of memory that burst is carried out on */
      __IO uint32_t bSTOP_FAIL          	:	1;  /* Terminate burst/compare operation */
      __IO uint32_t bDATA_CMP           	:	1;  /* Data pattern used for comparison against memory read data */
      __IO uint32_t bRESERVED0          	:	1;  /* Reserved */
      __IO uint32_t bTEST_EN            	:	1;  /* Enable comparison against test data compare registers */
      __I  uint32_t bRESERVED1          	:	9;  /* Reserved */
      __I  uint32_t bBRST_STAT          	:	2;  /* Status of Burst/Compare operation */
      __I  uint32_t bCMP_ERR            	:	1;  /* Burst/Compare Operation encountered atleast one data */
      __I  uint32_t bADDR_ERR           	:	1;  /* Burst/Compare Operation was terminated due to access to */
      __I  uint32_t bRESERVED2          	:	3;  /* Reserved */
      __O  uint32_t bCLR_STAT           	:	1;  /* Clear status bits 19-16 of this register */
      __I  uint32_t bRESERVED3          	:	8;  /* Reserved */
    } b;
  } rRDBRST_CTLSTAT;
  union {    /* FLCTL_RDBRST_STARTADDR Register */
    __IO uint32_t r;
    struct { /* FLCTL_RDBRST_STARTADDR Bits */
      __IO uint32_t bSTART_ADDRESS      	:	21;  /* Start Address of Burst Operation */
      __I  uint32_t bRESERVED0          	:	11;  /* Reserved */
    } b;
  } rRDBRST_STARTADDR;
  union {    /* FLCTL_RDBRST_LEN Register */
    __IO uint32_t r;
    struct { /* FLCTL_RDBRST_LEN Bits */
      __IO uint32_t bBURST_LENGTH       	:	21;  /* Length of Burst Operation */
      __I  uint32_t bRESERVED0          	:	11;  /* Reserved */
    } b;
  } rRDBRST_LEN;
  uint8_t  RESERVED2[16];
  union {    /* FLCTL_RDBRST_FAILADDR Register */
    __IO uint32_t r;
    struct { /* FLCTL_RDBRST_FAILADDR Bits */
      __IO uint32_t bFAIL_ADDRESS       	:	21;  /* Reflects address of last failed compare */
      __I  uint32_t bRESERVED0          	:	11;  /* Reserved */
    } b;
  } rRDBRST_FAILADDR;
  union {    /* FLCTL_RDBRST_FAILCNT Register */
    __IO uint32_t r;
    struct { /* FLCTL_RDBRST_FAILCNT Bits */
      __IO uint32_t bFAIL_COUNT         	:	17;  /* Number of failures encountered in burst operation */
      __I  uint32_t bRESERVED0          	:	15;  /* Reserved */
    } b;
  } rRDBRST_FAILCNT;
  uint8_t  RESERVED3[12];
  union {    /* FLCTL_PRG_CTLSTAT Register */
    __IO uint32_t r;
    struct { /* FLCTL_PRG_CTLSTAT Bits */
      __IO uint32_t bENABLE             	:	1;  /* Master control for all word program operations */
      __IO uint32_t bMODE               	:	1;  /* Write mode */
      __IO uint32_t bVER_PRE            	:	1;  /* Controls automatic pre program verify operations */
      __IO uint32_t bVER_PST            	:	1;  /* Controls automatic post program verify operations */
      __I  uint32_t bRESERVED0          	:	12;  /* Reserved */
      __I  uint32_t bSTATUS             	:	2;  /* Status of program operations in the Flash memory */
      __I  uint32_t bBNK_ACT            	:	1;  /* Bank active */
      __I  uint32_t bRESERVED1          	:	13;  /* Reserved */
    } b;
  } rPRG_CTLSTAT;
  union {    /* FLCTL_PRGBRST_CTLSTAT Register */
    __IO uint32_t r;
    struct { /* FLCTL_PRGBRST_CTLSTAT Bits */
      __O  uint32_t bSTART              	:	1;  /* Trigger start of burst program operation */
      __IO uint32_t bTYPE               	:	2;  /* Type of memory that burst program is carried out on */
      __IO uint32_t bLEN                	:	3;  /* Length of burst */
      __IO uint32_t bAUTO_PRE           	:	1;  /* Auto-Verify operation before the Burst Program */
      __IO uint32_t bAUTO_PST           	:	1;  /* Auto-Verify operation after the Burst Program */
      __I  uint32_t bRESERVED0          	:	8;  /* Reserved */
      __I  uint32_t bBURST_STATUS       	:	3;  /* Status of a Burst Operation */
      __I  uint32_t bPRE_ERR            	:	1;  /* Burst Operation encountered preprogram auto-verify errors */
      __I  uint32_t bPST_ERR            	:	1;  /* Burst Operation encountered postprogram auto-verify errors */
      __I  uint32_t bADDR_ERR           	:	1;  /* Burst Operation was terminated due to attempted program of reserved memory */
      __I  uint32_t bRESERVED1          	:	1;  /* Reserved */
      __O  uint32_t bCLR_STAT           	:	1;  /* Clear status bits 21-16 of this register */
      __I  uint32_t bRESERVED2          	:	8;  /* Reserved */
    } b;
  } rPRGBRST_CTLSTAT;
  union {    /* FLCTL_PRGBRST_STARTADDR Register */
    __IO uint32_t r;
    struct { /* FLCTL_PRGBRST_STARTADDR Bits */
      __IO uint32_t bSTART_ADDRESS      	:	22;  /* Start Address of Program Burst Operation */
      __I  uint32_t bRESERVED0          	:	10;  /* Reserved */
    } b;
  } rPRGBRST_STARTADDR;
  uint8_t  RESERVED4[4];
  __IO uint32_t rPRGBRST_DATA0_0; /* Program Burst Data0 Register0 */
  __IO uint32_t rPRGBRST_DATA0_1; /* Program Burst Data0 Register1 */
  __IO uint32_t rPRGBRST_DATA0_2; /* Program Burst Data0 Register2 */
  __IO uint32_t rPRGBRST_DATA0_3; /* Program Burst Data0 Register3 */
  __IO uint32_t rPRGBRST_DATA1_0; /* Program Burst Data1 Register0 */
  __IO uint32_t rPRGBRST_DATA1_1; /* Program Burst Data1 Register1 */
  __IO uint32_t rPRGBRST_DATA1_2; /* Program Burst Data1 Register2 */
  __IO uint32_t rPRGBRST_DATA1_3; /* Program Burst Data1 Register3 */
  __IO uint32_t rPRGBRST_DATA2_0; /* Program Burst Data2 Register0 */
  __IO uint32_t rPRGBRST_DATA2_1; /* Program Burst Data2 Register1 */
  __IO uint32_t rPRGBRST_DATA2_2; /* Program Burst Data2 Register2 */
  __IO uint32_t rPRGBRST_DATA2_3; /* Program Burst Data2 Register3 */
  __IO uint32_t rPRGBRST_DATA3_0; /* Program Burst Data3 Register0 */
  __IO uint32_t rPRGBRST_DATA3_1; /* Program Burst Data3 Register1 */
  __IO uint32_t rPRGBRST_DATA3_2; /* Program Burst Data3 Register2 */
  __IO uint32_t rPRGBRST_DATA3_3; /* Program Burst Data3 Register3 */
  union {    /* FLCTL_ERASE_CTLSTAT Register */
    __IO uint32_t r;
    struct { /* FLCTL_ERASE_CTLSTAT Bits */
      __O  uint32_t bSTART              	:	1;  /* Start of Erase operation */
      __IO uint32_t bMODE               	:	1;  /* Erase mode selected by application */
      __IO uint32_t bTYPE               	:	2;  /* Type of memory that erase operation is carried out on */
      __I  uint32_t bRESERVED0          	:	12;  /* Reserved */
      __I  uint32_t bSTATUS             	:	2;  /* Status of erase operations in the Flash memory */
      __I  uint32_t bADDR_ERR           	:	1;  /* Erase Operation was terminated due to attempted erase of reserved memory address */
      __O  uint32_t bCLR_STAT           	:	1;  /* Clear status bits 18-16 of this register */
      __I  uint32_t bRESERVED1          	:	12;  /* Reserved */
    } b;
  } rERASE_CTLSTAT;
  union {    /* FLCTL_ERASE_SECTADDR Register */
    __IO uint32_t r;
    struct { /* FLCTL_ERASE_SECTADDR Bits */
      __IO uint32_t bSECT_ADDRESS       	:	22;  /* Address of Sector being Erased */
      __I  uint32_t bRESERVED0          	:	10;  /* Reserved */
    } b;
  } rERASE_SECTADDR;
  uint8_t  RESERVED5[8];
  union {    /* FLCTL_BANK0_INFO_WEPROT Register */
    __IO uint32_t r;
    struct { /* FLCTL_BANK0_INFO_WEPROT Bits */
      __IO uint32_t bPROT0              	:	1;  /* Protects Sector 0 from program or erase */
      __IO uint32_t bPROT1              	:	1;  /* Protects Sector 1 from program or erase */
      __I  uint32_t bRESERVED0          	:	30;  /* Reserved */
    } b;
  } rBANK0_INFO_WEPROT;
  union {    /* FLCTL_BANK0_MAIN_WEPROT Register */
    __IO uint32_t r;
    struct { /* FLCTL_BANK0_MAIN_WEPROT Bits */
      __IO uint32_t bPROT0              	:	1;  /* Protects Sector 0 from program or erase */
      __IO uint32_t bPROT1              	:	1;  /* Protects Sector 1 from program or erase */
      __IO uint32_t bPROT2              	:	1;  /* Protects Sector 2 from program or erase */
      __IO uint32_t bPROT3              	:	1;  /* Protects Sector 3 from program or erase */
      __IO uint32_t bPROT4              	:	1;  /* Protects Sector 4 from program or erase */
      __IO uint32_t bPROT5              	:	1;  /* Protects Sector 5 from program or erase */
      __IO uint32_t bPROT6              	:	1;  /* Protects Sector 6 from program or erase */
      __IO uint32_t bPROT7              	:	1;  /* Protects Sector 7 from program or erase */
      __IO uint32_t bPROT8              	:	1;  /* Protects Sector 8 from program or erase */
      __IO uint32_t bPROT9              	:	1;  /* Protects Sector 9 from program or erase */
      __IO uint32_t bPROT10             	:	1;  /* Protects Sector 10 from program or erase */
      __IO uint32_t bPROT11             	:	1;  /* Protects Sector 11 from program or erase */
      __IO uint32_t bPROT12             	:	1;  /* Protects Sector 12 from program or erase */
      __IO uint32_t bPROT13             	:	1;  /* Protects Sector 13 from program or erase */
      __IO uint32_t bPROT14             	:	1;  /* Protects Sector 14 from program or erase */
      __IO uint32_t bPROT15             	:	1;  /* Protects Sector 15 from program or erase */
      __IO uint32_t bPROT16             	:	1;  /* Protects Sector 16 from program or erase */
      __IO uint32_t bPROT17             	:	1;  /* Protects Sector 17 from program or erase */
      __IO uint32_t bPROT18             	:	1;  /* Protects Sector 18 from program or erase */
      __IO uint32_t bPROT19             	:	1;  /* Protects Sector 19 from program or erase */
      __IO uint32_t bPROT20             	:	1;  /* Protects Sector 20 from program or erase */
      __IO uint32_t bPROT21             	:	1;  /* Protects Sector 21 from program or erase */
      __IO uint32_t bPROT22             	:	1;  /* Protects Sector 22 from program or erase */
      __IO uint32_t bPROT23             	:	1;  /* Protects Sector 23 from program or erase */
      __IO uint32_t bPROT24             	:	1;  /* Protects Sector 24 from program or erase */
      __IO uint32_t bPROT25             	:	1;  /* Protects Sector 25 from program or erase */
      __IO uint32_t bPROT26             	:	1;  /* Protects Sector 26 from program or erase */
      __IO uint32_t bPROT27             	:	1;  /* Protects Sector 27 from program or erase */
      __IO uint32_t bPROT28             	:	1;  /* Protects Sector 28 from program or erase */
      __IO uint32_t bPROT29             	:	1;  /* Protects Sector 29 from program or erase */
      __IO uint32_t bPROT30             	:	1;  /* Protects Sector 30 from program or erase */
      __IO uint32_t bPROT31             	:	1;  /* Protects Sector 31 from program or erase */
    } b;
  } rBANK0_MAIN_WEPROT;
  uint8_t  RESERVED6[8];
  union {    /* FLCTL_BANK1_INFO_WEPROT Register */
    __IO uint32_t r;
    struct { /* FLCTL_BANK1_INFO_WEPROT Bits */
      __IO uint32_t bPROT0              	:	1;  /* Protects Sector 0 from program or erase operations */
      __IO uint32_t bPROT1              	:	1;  /* Protects Sector 1 from program or erase operations */
      __I  uint32_t bRESERVED0          	:	30;  /* Reserved */
    } b;
  } rBANK1_INFO_WEPROT;
  union {    /* FLCTL_BANK1_MAIN_WEPROT Register */
    __IO uint32_t r;
    struct { /* FLCTL_BANK1_MAIN_WEPROT Bits */
      __IO uint32_t bPROT0              	:	1;  /* Protects Sector 0 from program or erase operations */
      __IO uint32_t bPROT1              	:	1;  /* Protects Sector 1 from program or erase operations */
      __IO uint32_t bPROT2              	:	1;  /* Protects Sector 2 from program or erase operations */
      __IO uint32_t bPROT3              	:	1;  /* Protects Sector 3 from program or erase operations */
      __IO uint32_t bPROT4              	:	1;  /* Protects Sector 4 from program or erase operations */
      __IO uint32_t bPROT5              	:	1;  /* Protects Sector 5 from program or erase operations */
      __IO uint32_t bPROT6              	:	1;  /* Protects Sector 6 from program or erase operations */
      __IO uint32_t bPROT7              	:	1;  /* Protects Sector 7 from program or erase operations */
      __IO uint32_t bPROT8              	:	1;  /* Protects Sector 8 from program or erase operations */
      __IO uint32_t bPROT9              	:	1;  /* Protects Sector 9 from program or erase operations */
      __IO uint32_t bPROT10             	:	1;  /* Protects Sector 10 from program or erase operations */
      __IO uint32_t bPROT11             	:	1;  /* Protects Sector 11 from program or erase operations */
      __IO uint32_t bPROT12             	:	1;  /* Protects Sector 12 from program or erase operations */
      __IO uint32_t bPROT13             	:	1;  /* Protects Sector 13 from program or erase operations */
      __IO uint32_t bPROT14             	:	1;  /* Protects Sector 14 from program or erase operations */
      __IO uint32_t bPROT15             	:	1;  /* Protects Sector 15 from program or erase operations */
      __IO uint32_t bPROT16             	:	1;  /* Protects Sector 16 from program or erase operations */
      __IO uint32_t bPROT17             	:	1;  /* Protects Sector 17 from program or erase operations */
      __IO uint32_t bPROT18             	:	1;  /* Protects Sector 18 from program or erase operations */
      __IO uint32_t bPROT19             	:	1;  /* Protects Sector 19 from program or erase operations */
      __IO uint32_t bPROT20             	:	1;  /* Protects Sector 20 from program or erase operations */
      __IO uint32_t bPROT21             	:	1;  /* Protects Sector 21 from program or erase operations */
      __IO uint32_t bPROT22             	:	1;  /* Protects Sector 22 from program or erase operations */
      __IO uint32_t bPROT23             	:	1;  /* Protects Sector 23 from program or erase operations */
      __IO uint32_t bPROT24             	:	1;  /* Protects Sector 24 from program or erase operations */
      __IO uint32_t bPROT25             	:	1;  /* Protects Sector 25 from program or erase operations */
      __IO uint32_t bPROT26             	:	1;  /* Protects Sector 26 from program or erase operations */
      __IO uint32_t bPROT27             	:	1;  /* Protects Sector 27 from program or erase operations */
      __IO uint32_t bPROT28             	:	1;  /* Protects Sector 28 from program or erase operations */
      __IO uint32_t bPROT29             	:	1;  /* Protects Sector 29 from program or erase operations */
      __IO uint32_t bPROT30             	:	1;  /* Protects Sector 30 from program or erase operations */
      __IO uint32_t bPROT31             	:	1;  /* Protects Sector 31 from program or erase operations */
    } b;
  } rBANK1_MAIN_WEPROT;
  uint8_t  RESERVED7[8];
  union {    /* FLCTL_BMRK_CTLSTAT Register */
    __IO uint32_t r;
    struct { /* FLCTL_BMRK_CTLSTAT Bits */
      __IO uint32_t bI_BMRK             	:	1;  /*  */
      __IO uint32_t bD_BMRK             	:	1;  /*  */
      __IO uint32_t bCMP_EN             	:	1;  /*  */
      __IO uint32_t bCMP_SEL            	:	1;  /*  */
      __I  uint32_t bRESERVED0          	:	28;  /* Reserved */
    } b;
  } rBMRK_CTLSTAT;
  __IO uint32_t rBMRK_IFETCH; /* Benchmark Instruction Fetch Count Register */
  __IO uint32_t rBMRK_DREAD; /* Benchmark Data Read Count Register */
  __IO uint32_t rBMRK_CMP; /* Benchmark Count Compare Register */
  uint8_t  RESERVED8[16];
  union {    /* FLCTL_IFG Register */
    __IO uint32_t r;
    struct { /* FLCTL_IFG Bits */
      __I  uint32_t bRDBRST             	:	1;  /*  */
      __I  uint32_t bAVPRE              	:	1;  /*  */
      __I  uint32_t bAVPST              	:	1;  /*  */
      __I  uint32_t bPRG                	:	1;  /*  */
      __I  uint32_t bPRGB               	:	1;  /*  */
      __I  uint32_t bERASE              	:	1;  /*  */
      __I  uint32_t bRESERVED0          	:	1;  /* Reserved */
      __I  uint32_t bRESERVED1          	:	1;  /* Reserved */
      __I  uint32_t bBMRK               	:	1;  /*  */
      __I  uint32_t bPRG_ERR            	:	1;  /*  */
      __I  uint32_t bRESERVED2          	:	22;  /* Reserved */
    } b;
  } rIFG;
  union {    /* FLCTL_IE Register */
    __IO uint32_t r;
    struct { /* FLCTL_IE Bits */
      __IO uint32_t bRDBRST             	:	1;  /*  */
      __IO uint32_t bAVPRE              	:	1;  /*  */
      __IO uint32_t bAVPST              	:	1;  /*  */
      __IO uint32_t bPRG                	:	1;  /*  */
      __IO uint32_t bPRGB               	:	1;  /*  */
      __IO uint32_t bERASE              	:	1;  /*  */
      __IO uint32_t bRESERVED0          	:	1;  /* Reserved */
      __IO uint32_t bRESERVED1          	:	1;  /* Reserved */
      __IO uint32_t bBMRK               	:	1;  /*  */
      __IO uint32_t bPRG_ERR            	:	1;  /*  */
      __I  uint32_t bRESERVED2          	:	22;  /* Reserved */
    } b;
  } rIE;
  union {    /* FLCTL_CLRIFG Register */
    __IO uint32_t r;
    struct { /* FLCTL_CLRIFG Bits */
      __O  uint32_t bRDBRST             	:	1;  /*  */
      __O  uint32_t bAVPRE              	:	1;  /*  */
      __O  uint32_t bAVPST              	:	1;  /*  */
      __O  uint32_t bPRG                	:	1;  /*  */
      __O  uint32_t bPRGB               	:	1;  /*  */
      __O  uint32_t bERASE              	:	1;  /*  */
      __O  uint32_t bRESERVED0          	:	1;  /* Reserved */
      __O  uint32_t bRESERVED1          	:	1;  /* Reserved */
      __O  uint32_t bBMRK               	:	1;  /*  */
      __O  uint32_t bPRG_ERR            	:	1;  /*  */
      __I  uint32_t bRESERVED2          	:	22;  /* Reserved */
    } b;
  } rCLRIFG;
  union {    /* FLCTL_SETIFG Register */
    __IO uint32_t r;
    struct { /* FLCTL_SETIFG Bits */
      __O  uint32_t bRDBRST             	:	1;  /*  */
      __O  uint32_t bAVPRE              	:	1;  /*  */
      __O  uint32_t bAVPST              	:	1;  /*  */
      __O  uint32_t bPRG                	:	1;  /*  */
      __O  uint32_t bPRGB               	:	1;  /*  */
      __O  uint32_t bERASE              	:	1;  /*  */
      __O  uint32_t bRESERVED0          	:	1;  /* Reserved */
      __O  uint32_t bRESERVED1          	:	1;  /* Reserved */
      __O  uint32_t bBMRK               	:	1;  /*  */
      __O  uint32_t bPRG_ERR            	:	1;  /*  */
      __I  uint32_t bRESERVED2          	:	22;  /* Reserved */
    } b;
  } rSETIFG;
  union {    /* FLCTL_READ_TIMCTL Register */
    __IO uint32_t r;
    struct { /* FLCTL_READ_TIMCTL Bits */
      __IO uint32_t bSETUP              	:	8;  /*  */
      __IO uint32_t bHOLD               	:	4;  /*  */
      __IO uint32_t bIREF_BOOST1        	:	4;  /*  */
      __IO uint32_t bSETUP_LONG         	:	8;  /*  */
      __I  uint32_t bRESERVED0          	:	8;  /* Reserved */
    } b;
  } rREAD_TIMCTL;
  union {    /* FLCTL_READMARGIN_TIMCTL Register */
    __IO uint32_t r;
    struct { /* FLCTL_READMARGIN_TIMCTL Bits */
      __IO uint32_t bSETUP              	:	8;  /*  */
      __IO uint32_t bHOLD               	:	4;  /*  */
      __I  uint32_t bRESERVED0          	:	4;  /* Reserved */
      __I  uint32_t bRESERVED1          	:	16;  /* Reserved */
    } b;
  } rREADMARGIN_TIMCTL;
  union {    /* FLCTL_PRGVER_TIMCTL Register */
    __IO uint32_t r;
    struct { /* FLCTL_PRGVER_TIMCTL Bits */
      __IO uint32_t bSETUP              	:	8;  /*  */
      __IO uint32_t bACTIVE             	:	4;  /*  */
      __IO uint32_t bHOLD               	:	4;  /*  */
      __I  uint32_t bRESERVED0          	:	16;  /* Reserved */
    } b;
  } rPRGVER_TIMCTL;
  union {    /* FLCTL_ERSVER_TIMCTL Register */
    __IO uint32_t r;
    struct { /* FLCTL_ERSVER_TIMCTL Bits */
      __IO uint32_t bSETUP              	:	8;  /*  */
      __IO uint32_t bHOLD               	:	4;  /*  */
      __I  uint32_t bRESERVED0          	:	4;  /* Reserved */
      __I  uint32_t bRESERVED1          	:	16;  /* Reserved */
    } b;
  } rERSVER_TIMCTL;
  union {    /* FLCTL_LKGVER_TIMCTL Register */
    __IO uint32_t r;
    struct { /* FLCTL_LKGVER_TIMCTL Bits */
      __IO uint32_t bSETUP              	:	8;  /*  */
      __IO uint32_t bHOLD               	:	4;  /*  */
      __I  uint32_t bRESERVED0          	:	4;  /* Reserved */
      __I  uint32_t bRESERVED1          	:	16;  /* Reserved */
    } b;
  } rLKGVER_TIMCTL;
  union {    /* FLCTL_PROGRAM_TIMCTL Register */
    __IO uint32_t r;
    struct { /* FLCTL_PROGRAM_TIMCTL Bits */
      __IO uint32_t bSETUP              	:	8;  /*  */
      __IO uint32_t bACTIVE             	:	20;  /*  */
      __IO uint32_t bHOLD               	:	4;  /*  */
    } b;
  } rPROGRAM_TIMCTL;
  union {    /* FLCTL_ERASE_TIMCTL Register */
    __IO uint32_t r;
    struct { /* FLCTL_ERASE_TIMCTL Bits */
      __IO uint32_t bSETUP              	:	8;  /*  */
      __IO uint32_t bACTIVE             	:	20;  /*  */
      __IO uint32_t bHOLD               	:	4;  /*  */
    } b;
  } rERASE_TIMCTL;
  union {    /* FLCTL_MASSERASE_TIMCTL Register */
    __IO uint32_t r;
    struct { /* FLCTL_MASSERASE_TIMCTL Bits */
      __IO uint32_t bBOOST_ACTIVE       	:	8;  /*  */
      __IO uint32_t bBOOST_HOLD         	:	8;  /*  */
      __I  uint32_t bRESERVED0          	:	16;  /* Reserved */
    } b;
  } rMASSERASE_TIMCTL;
  union {    /* FLCTL_BURSTPRG_TIMCTL Register */
    __IO uint32_t r;
    struct { /* FLCTL_BURSTPRG_TIMCTL Bits */
      __I  uint32_t bRESERVED0          	:	8;  /* Reserved */
      __IO uint32_t bACTIVE             	:	20;  /*  */
      __I  uint32_t bRESERVED1          	:	4;  /* Reserved */
    } b;
  } rBURSTPRG_TIMCTL;
} FLCTL_Type;


//*****************************************************************************
// PCM Registers
//*****************************************************************************
typedef struct {
  union {    /* PCMCTL0 Register */
    __IO uint32_t r;
    struct { /* PCMCTL0 Bits */
      __IO uint32_t bAMR                	:	4;  /* Active Mode Request */
      __IO uint32_t bLPMR               	:	4;  /* Low Power Mode Request */
      __I  uint32_t bCPM                	:	6;  /* Current Power Mode */
      __I  uint32_t bRESERVED0          	:	2;  /* Reserved */
      __IO uint32_t bKEY                	:	16;  /* PCM key */
    } b;
  } rCTL0;
  union {    /* PCMCTL1 Register */
    __IO uint32_t r;
    struct { /* PCMCTL1 Bits */
      __IO uint32_t bLOCKLPM5           	:	1;  /* Lock LPM5 */
      __IO uint32_t bLOCKBKUP           	:	1;  /* Lock Backup */
      __IO uint32_t bFORCE_LPM_ENTRY    	:	1;  /* Force LPM entry */
      __I  uint32_t bRESERVED0          	:	5;  /* Reserved */
      __IO uint32_t bPMR_BUSY           	:	1;  /* Power mode request busy flag */
      __I  uint32_t bRESERVED1          	:	7;  /* Reserved */
      __IO uint32_t bKEY                	:	16;  /* PCM key */
    } b;
  } rCTL1;
  union {    /* PCMIE Register */
    __IO uint32_t r;
    struct { /* PCMIE Bits */
      __IO uint32_t bLPM_INVALID_TR_IE  	:	1;  /* LPM invalid transition interrupt enable */
      __IO uint32_t bLPM_INVALID_CLK_IE 	:	1;  /* LPM invalid clock interrupt enable */
      __IO uint32_t bAM_INVALID_TR_IE   	:	1;  /* Active mode invalid transition interrupt enable */
      __I  uint32_t bRESERVED0          	:	3;  /* Reserved */
      __IO uint32_t bDCDC_ERROR_IE      	:	1;  /* DC-DC error interrupt enable */
      __I  uint32_t bRESERVED1          	:	25;  /* Reserved */
    } b;
  } rIE;
  union {    /* PCMIFG Register */
    __I uint32_t r;
    struct { /* PCMIFG Bits */
      __I  uint32_t bLPM_INVALID_TR_IFG 	:	1;  /* LPM invalid transition flag */
      __I  uint32_t bLPM_INVALID_CLK_IFG	:	1;  /* LPM invalid clock flag */
      __I  uint32_t bAM_INVALID_TR_IFG  	:	1;  /* Active mode invalid transition flag */
      __I  uint32_t bRESERVED0          	:	3;  /* Reserved */
      __I  uint32_t bDCDC_ERROR_IFG     	:	1;  /* DC-DC error flag */
      __I  uint32_t bRESERVED1          	:	25;  /* Reserved */
    } b;
  } rIFG;
  union {    /* PCMCLRIFG Register */
    __O uint32_t r;
    struct { /* PCMCLRIFG Bits */
      __O  uint32_t bCLR_LPM_INVALID_TR_IFG	:	1;  /* Clear LPM invalid transition flag */
      __O  uint32_t bCLR_LPM_INVALID_CLK_IFG	:	1;  /* Clear LPM invalid clock flag */
      __O  uint32_t bCLR_AM_INVALID_TR_IFG	:	1;  /* Clear active mode invalid transition flag */
      __O  uint32_t bRESERVED0          	:	3;  /* Reserved */
      __O  uint32_t bCLR_DCDC_ERROR_IFG 	:	1;  /* Clear DC-DC error flag */
      __O  uint32_t bRESERVED1          	:	25;  /* Reserved */
    } b;
  } rCLRIFG;
} PCM_Type;


//*****************************************************************************
// PMAP Registers
//*****************************************************************************
typedef struct {
  __IO uint16_t rKEYID; /* Port Mapping Key Register */
  union {    /* PMAPCTL Register */
    __IO uint16_t r;
    struct { /* PMAPCTL Bits */
      __I  uint16_t bLOCKED             	:	1;  /* Port mapping lock bit */
      __IO uint16_t bPRECFG             	:	1;  /* Port mapping reconfiguration control bit */
      __I  uint16_t bRESERVED0          	:	14;  /* Reserved */
    } b;
  } rCTL;
  uint8_t  RESERVED0[4];
  __IO uint16_t rP1MAP01; /* Port mapping register, P1.0 and P1.1 */
  __IO uint16_t rP1MAP23; /* Port mapping register, P1.2 and P1.3 */
  __IO uint16_t rP1MAP45; /* Port mapping register, P1.4 and P1.5 */
  __IO uint16_t rP1MAP67; /* Port mapping register, P1.6 and P1.7 */
  __IO uint16_t rP2MAP01; /* Port mapping register, P2.0 and P2.1 */
  __IO uint16_t rP2MAP23; /* Port mapping register, P2.2 and P2.3 */
  __IO uint16_t rP2MAP45; /* Port mapping register, P2.4 and P2.5 */
  __IO uint16_t rP2MAP67; /* Port mapping register, P2.6 and P2.7 */
  __IO uint16_t rP3MAP01; /* Port mapping register, P3.0 and P3.1 */
  __IO uint16_t rP3MAP23; /* Port mapping register, P3.2 and P3.3 */
  __IO uint16_t rP3MAP45; /* Port mapping register, P3.4 and P3.5 */
  __IO uint16_t rP3MAP67; /* Port mapping register, P3.6 and P3.7 */
  __IO uint16_t rP4MAP01; /* Port mapping register, P4.0 and P4.1 */
  __IO uint16_t rP4MAP23; /* Port mapping register, P4.2 and P4.3 */
  __IO uint16_t rP4MAP45; /* Port mapping register, P4.4 and P4.5 */
  __IO uint16_t rP4MAP67; /* Port mapping register, P4.6 and P4.7 */
  __IO uint16_t rP5MAP01; /* Port mapping register, P5.0 and P5.1 */
  __IO uint16_t rP5MAP23; /* Port mapping register, P5.2 and P5.3 */
  __IO uint16_t rP5MAP45; /* Port mapping register, P5.4 and P5.5 */
  __IO uint16_t rP5MAP67; /* Port mapping register, P5.6 and P5.7 */
  __IO uint16_t rP6MAP01; /* Port mapping register, P6.0 and P6.1 */
  __IO uint16_t rP6MAP23; /* Port mapping register, P6.2 and P6.3 */
  __IO uint16_t rP6MAP45; /* Port mapping register, P6.4 and P6.5 */
  __IO uint16_t rP6MAP67; /* Port mapping register, P6.6 and P6.7 */
  __IO uint16_t rP7MAP01; /* Port mapping register, P7.0 and P7.1 */
  __IO uint16_t rP7MAP23; /* Port mapping register, P7.2 and P7.3 */
  __IO uint16_t rP7MAP45; /* Port mapping register, P7.4 and P7.5 */
  __IO uint16_t rP7MAP67; /* Port mapping register, P7.6 and P7.7 */
} PMAP_Type;


//*****************************************************************************
// PSS Registers
//*****************************************************************************
typedef struct {
  union {    /* PSSKEY Register */
    __IO uint32_t r;
    struct { /* PSSKEY Bits */
      __IO uint32_t bKEY                	:	16;  /* PSS control key */
      __I  uint32_t bRESERVED0          	:	16;  /* Reserved */
    } b;
  } rKEY;
  union {    /* PSSCTL0 Register */
    __IO uint32_t r;
    struct { /* PSSCTL0 Bits */
      __IO uint32_t bSVSMHOFF           	:	1;  /* SVSM high-side off */
      __IO uint32_t bSVSMHLP            	:	1;  /* SVSM high-side low power normal performance mode */
      __IO uint32_t bSVSMHS             	:	1;  /* Supply supervisor or monitor selection for the high-side */
      __IO uint32_t bSVSMHTH            	:	3;  /* SVSM high-side reset voltage level */
      __IO uint32_t bSVMHOE             	:	1;  /* SVSM high-side output enable */
      __IO uint32_t bSVMHOUTPOLAL       	:	1;  /* SVMHOUT pin polarity active low */
      __IO uint32_t bSVSLOFF            	:	1;  /* SVS low-side off */
      __IO uint32_t bSVSLLP             	:	1;  /* SVS low-side low power normal performance mode */
      __IO uint32_t bDCDC_FORCE         	:	1;  /* Disables automatic supply voltage detection */
      __I  uint32_t bRESERVED0          	:	1;  /* Reserved */
      __IO uint32_t bVCORETRAN          	:	2;  /* Controls VCORE Level Transition time */
      __I  uint32_t bRESERVED1          	:	18;  /* Reserved */
    } b;
  } rCTL0;
  uint8_t  RESERVED0[44];
  union {    /* PSSIE Register */
    __IO uint32_t r;
    struct { /* PSSIE Bits */
      __I  uint32_t bRESERVED0          	:	1;  /* Reserved */
      __IO uint32_t bSVSMHIE            	:	1;  /* High-side SVSM interrupt enable */
      __I  uint32_t bRESERVED1          	:	30;  /* Reserved */
    } b;
  } rIE;
  union {    /* PSSIFG Register */
    __I uint32_t r;
    struct { /* PSSIFG Bits */
      __I  uint32_t bRESERVED0          	:	1;  /* Reserved */
      __I  uint32_t bSVSMHIFG           	:	1;  /* High-side SVSM interrupt flag */
      __I  uint32_t bRESERVED1          	:	30;  /* Reserved */
    } b;
  } rIFG;
  union {    /* PSSCLRIFG Register */
    __IO uint32_t r;
    struct { /* PSSCLRIFG Bits */
      __I  uint32_t bRESERVED0          	:	1;  /* Reserved */
      __O  uint32_t bCLRSVSMHIFG        	:	1;  /* SVSMH clear interrupt flag */
      __I  uint32_t bRESERVED1          	:	30;  /* Reserved */
    } b;
  } rCLRIFG;
} PSS_Type;


//*****************************************************************************
// REF_A Registers
//*****************************************************************************
typedef struct {
  union {    /* REFCTL0 Register */
    __IO uint16_t r;
    struct { /* REFCTL0 Bits */
      __IO uint16_t bON                 	:	1;  /* Reference enable */
      __IO uint16_t bOUT                	:	1;  /* Reference output buffer */
      __IO uint16_t bRESERVED0          	:	1;  /* Reserved */
      __IO uint16_t bTCOFF              	:	1;  /* Temperature sensor disabled */
      __IO uint16_t bVSEL               	:	2;  /* Reference voltage level select */
      __IO uint16_t bGENOT              	:	1;  /* Reference generator one-time trigger */
      __IO uint16_t bBGOT               	:	1;  /* Bandgap and bandgap buffer one-time trigger */
      __I  uint16_t bGENACT             	:	1;  /* Reference generator active */
      __I  uint16_t bBGACT              	:	1;  /* Reference bandgap active */
      __I  uint16_t bGENBUSY            	:	1;  /* Reference generator busy */
      __I  uint16_t bBGMODE             	:	1;  /* Bandgap mode */
      __I  uint16_t bGENRDY             	:	1;  /* Variable reference voltage ready status */
      __I  uint16_t bBGRDY              	:	1;  /* Buffered bandgap voltage ready status */
      __I  uint16_t bRESERVED1          	:	2;  /* Reserved */
    } b;
  } rCTL0;
} REF_A_Type;


//*****************************************************************************
// RSTCTL Registers
//*****************************************************************************
typedef struct {
  union {    /* RSTCTL_RESET_REQ Register */
    __IO uint32_t r;
    struct { /* RSTCTL_RESET_REQ Bits */
      __O  uint32_t bSOFT_REQ           	:	1;  /* Soft Reset request */
      __O  uint32_t bHARD_REQ           	:	1;  /* Hard Reset request */
      __I  uint32_t bRESERVED0          	:	6;  /* Reserved */
      __O  uint32_t bRSTKEY             	:	8;  /* Write key to unlock reset request bits */
      __I  uint32_t bRESERVED1          	:	16;  /* Reserved */
    } b;
  } rRESET_REQ;
  union {    /* RSTCTL_HARDRESET_STAT Register */
    __I uint32_t r;
    struct { /* RSTCTL_HARDRESET_STAT Bits */
      __I  uint32_t bSRC0               	:	1;  /* Indicates that SRC0 was the source of the Hard Reset */
      __I  uint32_t bSRC1               	:	1;  /* Indicates that SRC1 was the source of the Hard Reset */
      __I  uint32_t bSRC2               	:	1;  /* Indicates that SRC2 was the source of the Hard Reset */
      __I  uint32_t bSRC3               	:	1;  /* Indicates that SRC3 was the source of the Hard Reset */
      __I  uint32_t bSRC4               	:	1;  /* Indicates that SRC4 was the source of the Hard Reset */
      __I  uint32_t bSRC5               	:	1;  /* Indicates that SRC5 was the source of the Hard Reset */
      __I  uint32_t bSRC6               	:	1;  /* Indicates that SRC6 was the source of the Hard Reset */
      __I  uint32_t bSRC7               	:	1;  /* Indicates that SRC7 was the source of the Hard Reset */
      __I  uint32_t bSRC8               	:	1;  /* Indicates that SRC8 was the source of the Hard Reset */
      __I  uint32_t bSRC9               	:	1;  /* Indicates that SRC9 was the source of the Hard Reset */
      __I  uint32_t bSRC10              	:	1;  /* Indicates that SRC10 was the source of the Hard Reset */
      __I  uint32_t bSRC11              	:	1;  /* Indicates that SRC11 was the source of the Hard Reset */
      __I  uint32_t bSRC12              	:	1;  /* Indicates that SRC12 was the source of the Hard Reset */
      __I  uint32_t bSRC13              	:	1;  /* Indicates that SRC13 was the source of the Hard Reset */
      __I  uint32_t bSRC14              	:	1;  /* Indicates that SRC14 was the source of the Hard Reset */
      __I  uint32_t bSRC15              	:	1;  /* Indicates that SRC15 was the source of the Hard Reset */
      __I  uint32_t bRESERVED0          	:	16;  /* Reserved */
    } b;
  } rHARDRESET_STAT;
  union {    /* RSTCTL_HARDRESET_CLR Register */
    __IO uint32_t r;
    struct { /* RSTCTL_HARDRESET_CLR Bits */
      __O  uint32_t bSRC0               	:	1;  /* Write 1 clears the corresponding bit in the RSTCTL_HARDRESET_STAT */
      __O  uint32_t bSRC1               	:	1;  /* Write 1 clears the corresponding bit in the RSTCTL_HARDRESET_STAT */
      __O  uint32_t bSRC2               	:	1;  /* Write 1 clears the corresponding bit in the RSTCTL_HARDRESET_STAT */
      __O  uint32_t bSRC3               	:	1;  /* Write 1 clears the corresponding bit in the RSTCTL_HARDRESET_STAT */
      __O  uint32_t bSRC4               	:	1;  /* Write 1 clears the corresponding bit in the RSTCTL_HARDRESET_STAT */
      __O  uint32_t bSRC5               	:	1;  /* Write 1 clears the corresponding bit in the RSTCTL_HARDRESET_STAT */
      __O  uint32_t bSRC6               	:	1;  /* Write 1 clears the corresponding bit in the RSTCTL_HARDRESET_STAT */
      __O  uint32_t bSRC7               	:	1;  /* Write 1 clears the corresponding bit in the RSTCTL_HARDRESET_STAT */
      __O  uint32_t bSRC8               	:	1;  /* Write 1 clears the corresponding bit in the RSTCTL_HARDRESET_STAT  */
      __O  uint32_t bSRC9               	:	1;  /* Write 1 clears the corresponding bit in the RSTCTL_HARDRESET_STAT */
      __O  uint32_t bSRC10              	:	1;  /* Write 1 clears the corresponding bit in the RSTCTL_HARDRESET_STAT */
      __O  uint32_t bSRC11              	:	1;  /* Write 1 clears the corresponding bit in the RSTCTL_HARDRESET_STAT */
      __O  uint32_t bSRC12              	:	1;  /* Write 1 clears the corresponding bit in the RSTCTL_HARDRESET_STAT */
      __O  uint32_t bSRC13              	:	1;  /* Write 1 clears the corresponding bit in the RSTCTL_HARDRESET_STAT */
      __O  uint32_t bSRC14              	:	1;  /* Write 1 clears the corresponding bit in the RSTCTL_HARDRESET_STAT */
      __O  uint32_t bSRC15              	:	1;  /* Write 1 clears the corresponding bit in the RSTCTL_HRDRESETSTAT_REG */
      __I  uint32_t bRESERVED0          	:	16;  /* Reserved */
    } b;
  } rHARDRESET_CLR;
  union {    /* RSTCTL_HARDRESET_SET Register */
    __IO uint32_t r;
    struct { /* RSTCTL_HARDRESET_SET Bits */
      __O  uint32_t bSRC0               	:	1;  /* Write 1 sets the corresponding bit in the RSTCTL_HARDRESET_STAT (and initiates a Hard Reset) */
      __O  uint32_t bSRC1               	:	1;  /* Write 1 sets the corresponding bit in the RSTCTL_HARDRESET_STAT (and initiates a Hard Reset) */
      __O  uint32_t bSRC2               	:	1;  /* Write 1 sets the corresponding bit in the RSTCTL_HARDRESET_STAT (and initiates a Hard Reset) */
      __O  uint32_t bSRC3               	:	1;  /* Write 1 sets the corresponding bit in the RSTCTL_HARDRESET_STAT (and initiates a Hard Reset) */
      __O  uint32_t bSRC4               	:	1;  /* Write 1 sets the corresponding bit in the RSTCTL_HARDRESET_STAT (and initiates a Hard Reset) */
      __O  uint32_t bSRC5               	:	1;  /* Write 1 sets the corresponding bit in the RSTCTL_HARDRESET_STAT (and initiates a Hard Reset) */
      __O  uint32_t bSRC6               	:	1;  /* Write 1 sets the corresponding bit in the RSTCTL_HARDRESET_STAT (and initiates a Hard Reset) */
      __O  uint32_t bSRC7               	:	1;  /* Write 1 sets the corresponding bit in the RSTCTL_HARDRESET_STAT (and initiates a Hard Reset) */
      __O  uint32_t bSRC8               	:	1;  /* Write 1 sets the corresponding bit in the RSTCTL_HARDRESET_STAT (and initiates a Hard Reset) */
      __O  uint32_t bSRC9               	:	1;  /* Write 1 sets the corresponding bit in the RSTCTL_HARDRESET_STAT (and initiates a Hard Reset) */
      __O  uint32_t bSRC10              	:	1;  /* Write 1 sets the corresponding bit in the RSTCTL_HARDRESET_STAT (and initiates a Hard Reset) */
      __O  uint32_t bSRC11              	:	1;  /* Write 1 sets the corresponding bit in the RSTCTL_HARDRESET_STAT (and initiates a Hard Reset) */
      __O  uint32_t bSRC12              	:	1;  /* Write 1 sets the corresponding bit in the RSTCTL_HARDRESET_STAT (and initiates a Hard Reset) */
      __O  uint32_t bSRC13              	:	1;  /* Write 1 sets the corresponding bit in the RSTCTL_HARDRESET_STAT (and initiates a Hard Reset) */
      __O  uint32_t bSRC14              	:	1;  /* Write 1 sets the corresponding bit in the RSTCTL_HARDRESET_STAT (and initiates a Hard Reset) */
      __O  uint32_t bSRC15              	:	1;  /* Write 1 sets the corresponding bit in the RSTCTL_HARDRESET_STAT (and initiates a Hard Reset) */
      __I  uint32_t bRESERVED0          	:	16;  /* Reserved */
    } b;
  } rHARDRESET_SET;
  union {    /* RSTCTL_SOFTRESET_STAT Register */
    __I uint32_t r;
    struct { /* RSTCTL_SOFTRESET_STAT Bits */
      __I  uint32_t bSRC0               	:	1;  /* If 1, indicates that SRC0 was the source of the Soft Reset */
      __I  uint32_t bSRC1               	:	1;  /* If 1, indicates that SRC1 was the source of the Soft Reset */
      __I  uint32_t bSRC2               	:	1;  /* If 1, indicates that SRC2 was the source of the Soft Reset */
      __I  uint32_t bSRC3               	:	1;  /* If 1, indicates that SRC3 was the source of the Soft Reset */
      __I  uint32_t bSRC4               	:	1;  /* If 1, indicates that SRC4 was the source of the Soft Reset */
      __I  uint32_t bSRC5               	:	1;  /* If 1, indicates that SRC5 was the source of the Soft Reset */
      __I  uint32_t bSRC6               	:	1;  /* If 1, indicates that SRC6 was the source of the Soft Reset */
      __I  uint32_t bSRC7               	:	1;  /* If 1, indicates that SRC7 was the source of the Soft Reset */
      __I  uint32_t bSRC8               	:	1;  /* If 1, indicates that SRC8 was the source of the Soft Reset */
      __I  uint32_t bSRC9               	:	1;  /* If 1, indicates that SRC9 was the source of the Soft Reset */
      __I  uint32_t bSRC10              	:	1;  /* If 1, indicates that SRC10 was the source of the Soft Reset */
      __I  uint32_t bSRC11              	:	1;  /* If 1, indicates that SRC11 was the source of the Soft Reset */
      __I  uint32_t bSRC12              	:	1;  /* If 1, indicates that SRC12 was the source of the Soft Reset */
      __I  uint32_t bSRC13              	:	1;  /* If 1, indicates that SRC13 was the source of the Soft Reset */
      __I  uint32_t bSRC14              	:	1;  /* If 1, indicates that SRC14 was the source of the Soft Reset */
      __I  uint32_t bSRC15              	:	1;  /* If 1, indicates that SRC15 was the source of the Soft Reset */
      __I  uint32_t bRESERVED0          	:	16;  /* Reserved */
    } b;
  } rSOFTRESET_STAT;
  union {    /* RSTCTL_SOFTRESET_CLR Register */
    __IO uint32_t r;
    struct { /* RSTCTL_SOFTRESET_CLR Bits */
      __O  uint32_t bSRC0               	:	1;  /* Write 1 clears the corresponding bit in the RSTCTL_SOFTRESET_STAT */
      __O  uint32_t bSRC1               	:	1;  /* Write 1 clears the corresponding bit in the RSTCTL_SOFTRESET_STAT */
      __O  uint32_t bSRC2               	:	1;  /* Write 1 clears the corresponding bit in the RSTCTL_SOFTRESET_STAT */
      __O  uint32_t bSRC3               	:	1;  /* Write 1 clears the corresponding bit in the RSTCTL_SOFTRESET_STAT */
      __O  uint32_t bSRC4               	:	1;  /* Write 1 clears the corresponding bit in the RSTCTL_SOFTRESET_STAT */
      __O  uint32_t bSRC5               	:	1;  /* Write 1 clears the corresponding bit in the RSTCTL_SOFTRESET_STAT */
      __O  uint32_t bSRC6               	:	1;  /* Write 1 clears the corresponding bit in the RSTCTL_SOFTRESET_STAT */
      __O  uint32_t bSRC7               	:	1;  /* Write 1 clears the corresponding bit in the RSTCTL_SOFTRESET_STAT */
      __O  uint32_t bSRC8               	:	1;  /* Write 1 clears the corresponding bit in the RSTCTL_SOFTRESET_STAT */
      __O  uint32_t bSRC9               	:	1;  /* Write 1 clears the corresponding bit in the RSTCTL_SOFTRESET_STAT */
      __O  uint32_t bSRC10              	:	1;  /* Write 1 clears the corresponding bit in the RSTCTL_SOFTRESET_STAT */
      __O  uint32_t bSRC11              	:	1;  /* Write 1 clears the corresponding bit in the RSTCTL_SOFTRESET_STAT */
      __O  uint32_t bSRC12              	:	1;  /* Write 1 clears the corresponding bit in the RSTCTL_SOFTRESET_STAT */
      __O  uint32_t bSRC13              	:	1;  /* Write 1 clears the corresponding bit in the RSTCTL_SOFTRESET_STAT */
      __O  uint32_t bSRC14              	:	1;  /* Write 1 clears the corresponding bit in the RSTCTL_SOFTRESET_STAT */
      __O  uint32_t bSRC15              	:	1;  /* Write 1 clears the corresponding bit in the RSTCTL_SOFTRESET_STAT */
      __I  uint32_t bRESERVED0          	:	16;  /* Reserved */
    } b;
  } rSOFTRESET_CLR;
  union {    /* RSTCTL_SOFTRESET_SET Register */
    __IO uint32_t r;
    struct { /* RSTCTL_SOFTRESET_SET Bits */
      __O  uint32_t bSRC0               	:	1;  /* Write 1 sets the corresponding bit in the RSTCTL_SOFTRESET_STAT (and initiates a Soft Reset) */
      __O  uint32_t bSRC1               	:	1;  /* Write 1 sets the corresponding bit in the RSTCTL_SOFTRESET_STAT (and initiates a Soft Reset) */
      __O  uint32_t bSRC2               	:	1;  /* Write 1 sets the corresponding bit in the RSTCTL_SOFTRESET_STAT (and initiates a Soft Reset) */
      __O  uint32_t bSRC3               	:	1;  /* Write 1 sets the corresponding bit in the RSTCTL_SOFTRESET_STAT (and initiates a Soft Reset) */
      __O  uint32_t bSRC4               	:	1;  /* Write 1 sets the corresponding bit in the RSTCTL_SOFTRESET_STAT (and initiates a Soft Reset) */
      __O  uint32_t bSRC5               	:	1;  /* Write 1 sets the corresponding bit in the RSTCTL_SOFTRESET_STAT (and initiates a Soft Reset) */
      __O  uint32_t bSRC6               	:	1;  /* Write 1 sets the corresponding bit in the RSTCTL_SOFTRESET_STAT (and initiates a Soft Reset) */
      __O  uint32_t bSRC7               	:	1;  /* Write 1 sets the corresponding bit in the RSTCTL_SOFTRESET_STAT (and initiates a Soft Reset) */
      __O  uint32_t bSRC8               	:	1;  /* Write 1 sets the corresponding bit in the RSTCTL_SOFTRESET_STAT (and initiates a Soft Reset) */
      __O  uint32_t bSRC9               	:	1;  /* Write 1 sets the corresponding bit in the RSTCTL_SOFTRESET_STAT (and initiates a Soft Reset) */
      __O  uint32_t bSRC10              	:	1;  /* Write 1 sets the corresponding bit in the RSTCTL_SOFTRESET_STAT (and initiates a Soft Reset) */
      __O  uint32_t bSRC11              	:	1;  /* Write 1 sets the corresponding bit in the RSTCTL_SOFTRESET_STAT (and initiates a Soft Reset) */
      __O  uint32_t bSRC12              	:	1;  /* Write 1 sets the corresponding bit in the RSTCTL_SOFTRESET_STAT (and initiates a Soft Reset) */
      __O  uint32_t bSRC13              	:	1;  /* Write 1 sets the corresponding bit in the RSTCTL_SOFTRESET_STAT (and initiates a Soft Reset) */
      __O  uint32_t bSRC14              	:	1;  /* Write 1 sets the corresponding bit in the RSTCTL_SOFTRESET_STAT (and initiates a Soft Reset) */
      __O  uint32_t bSRC15              	:	1;  /* Write 1 sets the corresponding bit in the RSTCTL_SOFTRESET_STAT (and initiates a Soft Reset) */
      __I  uint32_t bRESERVED0          	:	16;  /* Reserved */
    } b;
  } rSOFTRESET_SET;
  uint8_t  RESERVED0[228];
  union {    /* RSTCTL_PSSRESET_STAT Register */
    __I uint32_t r;
    struct { /* RSTCTL_PSSRESET_STAT Bits */
      __I  uint32_t bSVSL               	:	1;  /* Indicates if POR was caused by an SVSL trip condition in the PSS */
      __I  uint32_t bSVSMH              	:	1;  /* Indicates if POR was caused by an SVSMH trip condition int the PSS */
      __I  uint32_t bBGREF              	:	1;  /* Indicates if POR was caused by a BGREF not okay condition in the PSS */
      __I  uint32_t bVCCDET             	:	1;  /* Indicates if POR was caused by a VCCDET trip condition in the PSS */
      __I  uint32_t bRESERVED0          	:	28;  /* Reserved */
    } b;
  } rPSSRESET_STAT;
  union {    /* RSTCTL_PSSRESET_CLR Register */
    __IO uint32_t r;
    struct { /* RSTCTL_PSSRESET_CLR Bits */
      __O  uint32_t bCLR                	:	1;  /* Write 1 clears all PSS Reset Flags in the RSTCTL_PSSRESET_STAT */
      __I  uint32_t bRESERVED0          	:	31;  /* Reserved */
    } b;
  } rPSSRESET_CLR;
  union {    /* RSTCTL_PCMRESET_STAT Register */
    __I uint32_t r;
    struct { /* RSTCTL_PCMRESET_STAT Bits */
      __I  uint32_t bLPM35              	:	1;  /* Indicates if POR was caused by PCM due to an exit from LPM3.5 */
      __I  uint32_t bLPM45              	:	1;  /* Indicates if POR was caused by PCM due to an exit from LPM4.5 */
      __I  uint32_t bRESERVED0          	:	30;  /* Reserved */
    } b;
  } rPCMRESET_STAT;
  union {    /* RSTCTL_PCMRESET_CLR Register */
    __IO uint32_t r;
    struct { /* RSTCTL_PCMRESET_CLR Bits */
      __O  uint32_t bCLR                	:	1;  /* Write 1 clears all PCM Reset Flags in the RSTCTL_PCMRESET_STAT */
      __I  uint32_t bRESERVED0          	:	31;  /* Reserved */
    } b;
  } rPCMRESET_CLR;
  union {    /* RSTCTL_PINRESET_STAT Register */
    __I uint32_t r;
    struct { /* RSTCTL_PINRESET_STAT Bits */
      __I  uint32_t bRSTNMI             	:	1;  /* POR was caused by RSTn/NMI pin based reset event */
      __I  uint32_t bRESERVED0          	:	31;  /* Reserved */
    } b;
  } rPINRESET_STAT;
  union {    /* RSTCTL_PINRESET_CLR Register */
    __IO uint32_t r;
    struct { /* RSTCTL_PINRESET_CLR Bits */
      __O  uint32_t bCLR                	:	1;  /* Write 1 clears the RSTn/NMI Pin Reset Flag in RSTCTL_PINRESET_STAT */
      __I  uint32_t bRESERVED0          	:	31;  /* Reserved */
    } b;
  } rPINRESET_CLR;
  union {    /* RSTCTL_REBOOTRESET_STAT Register */
    __I uint32_t r;
    struct { /* RSTCTL_REBOOTRESET_STAT Bits */
      __I  uint32_t bREBOOT             	:	1;  /* Indicates if Reboot reset was caused by the SYSCTL module. */
      __I  uint32_t bRESERVED0          	:	31;  /* Reserved */
    } b;
  } rREBOOTRESET_STAT;
  union {    /* RSTCTL_REBOOTRESET_CLR Register */
    __IO uint32_t r;
    struct { /* RSTCTL_REBOOTRESET_CLR Bits */
      __O  uint32_t bCLR                	:	1;  /* Write 1 clears the Reboot Reset Flag in RSTCTL_REBOOTRESET_STAT */
      __I  uint32_t bRESERVED0          	:	31;  /* Reserved */
    } b;
  } rREBOOTRESET_CLR;
} RSTCTL_Type;


//*****************************************************************************
// RTC_C Registers
//*****************************************************************************
typedef struct {
  union {    /* RTCCTL0 Register */
    __IO uint16_t r;
    struct { /* RTCCTL0 Bits */
      __IO uint16_t bRDYIFG             	:	1;  /* Real-time clock ready interrupt flag */
      __IO uint16_t bAIFG               	:	1;  /* Real-time clock alarm interrupt flag */
      __IO uint16_t bTEVIFG             	:	1;  /* Real-time clock time event interrupt flag */
      __IO uint16_t bOFIFG              	:	1;  /* 32-kHz crystal oscillator fault interrupt flag */
      __IO uint16_t bRDYIE              	:	1;  /* Real-time clock ready interrupt enable */
      __IO uint16_t bAIE                	:	1;  /* Real-time clock alarm interrupt enable */
      __IO uint16_t bTEVIE              	:	1;  /* Real-time clock time event interrupt enable */
      __IO uint16_t bOFIE               	:	1;  /* 32-kHz crystal oscillator fault interrupt enable */
      __IO uint16_t bKEY                	:	8;  /* Real-time clock key */
    } b;
  } rCTL0;
  union {    /* RTCCTL13 Register */
    __IO uint16_t r;
    struct { /* RTCCTL13 Bits */
      __IO uint16_t bTEV                	:	2;  /* Real-time clock time event */
      __IO uint16_t bSSEL               	:	2;  /* Real-time clock source select */
      __I  uint16_t bRDY                	:	1;  /* Real-time clock ready */
      __I  uint16_t bMODE               	:	1;  /*  */
      __IO uint16_t bHOLD               	:	1;  /* Real-time clock hold */
      __IO uint16_t bBCD                	:	1;  /* Real-time clock BCD select */
      __IO uint16_t bCALF               	:	2;  /* Real-time clock calibration frequency */
      __I  uint16_t bRESERVED0          	:	6;  /* Reserved */
    } b;
  } rCTL13;
  union {    /* RTCOCAL Register */
    __IO uint16_t r;
    struct { /* RTCOCAL Bits */
      __IO uint16_t bOCAL               	:	8;  /* Real-time clock offset error calibration */
      __I  uint16_t bRESERVED0          	:	7;  /* Reserved */
      __IO uint16_t bOCALS              	:	1;  /* Real-time clock offset error calibration sign */
    } b;
  } rOCAL;
  union {    /* RTCTCMP Register */
    __IO uint16_t r;
    struct { /* RTCTCMP Bits */
      __IO uint16_t bTCMP               	:	8;  /* Real-time clock temperature compensation */
      __I  uint16_t bRESERVED0          	:	5;  /* Reserved */
      __I  uint16_t bTCOK               	:	1;  /* Real-time clock temperature compensation write OK */
      __I  uint16_t bTCRDY              	:	1;  /* Real-time clock temperature compensation ready */
      __IO uint16_t bTCMPS              	:	1;  /* Real-time clock temperature compensation sign */
    } b;
  } rTCMP;
  union {    /* RTCPS0CTL Register */
    __IO uint16_t r;
    struct { /* RTCPS0CTL Bits */
      __IO uint16_t bRT0PSIFG           	:	1;  /* Prescale timer 0 interrupt flag */
      __IO uint16_t bRT0PSIE            	:	1;  /* Prescale timer 0 interrupt enable */
      __IO uint16_t bRT0IP              	:	3;  /* Prescale timer 0 interrupt interval */
      __I  uint16_t bRESERVED0          	:	11;  /* Reserved */
    } b;
  } rPS0CTL;
  union {    /* RTCPS1CTL Register */
    __IO uint16_t r;
    struct { /* RTCPS1CTL Bits */
      __IO uint16_t bRT1PSIFG           	:	1;  /* Prescale timer 1 interrupt flag */
      __IO uint16_t bRT1PSIE            	:	1;  /* Prescale timer 1 interrupt enable */
      __IO uint16_t bRT1IP              	:	3;  /* Prescale timer 1 interrupt interval */
      __I  uint16_t bRESERVED0          	:	11;  /* Reserved */
    } b;
  } rPS1CTL;
  union {    /* RTCPS Register */
    __IO uint16_t r;
    struct { /* RTCPS Bits */
      __IO uint16_t bRT0PS              	:	8;  /* Prescale timer 0 counter value */
      __IO uint16_t bRT1PS              	:	8;  /* Prescale timer 1 counter value */
    } b;
  } rPS;
  __I uint16_t rIV; /* Real-Time Clock Interrupt Vector Register */
  union {    /* RTCTIM0 Register */
    __IO uint16_t r;
    struct { /* RTCTIM0 Bits */
      __IO uint16_t bSEC                	:	6;  /* Seconds (0 to 59) */
      __I  uint16_t bRESERVED0          	:	2;  /* Reserved */
      __IO uint16_t bMIN                	:	6;  /* Minutes (0 to 59) */
      __I  uint16_t bRESERVED1          	:	2;  /* Reserved */
    } b;
    struct { /* RTCTIM0_BCD Bits */
      __IO uint16_t bSEC_LD             	:	4;  /* Seconds ? low digit (0 to 9) */
      __IO uint16_t bSEC_HD             	:	3;  /* Seconds ? high digit (0 to 5) */
      __I  uint16_t bRESERVED           	:	1;  /* Reserved */
      __IO uint16_t bMIN_LD             	:	4;  /* Minutes ? low digit (0 to 9) */
      __IO uint16_t bMIN_HD             	:	3;  /* Minutes ? high digit (0 to 5) */
    } a;
  } rTIM0;
  union {    /* RTCTIM1 Register */
    __IO uint16_t r;
    struct { /* RTCTIM1 Bits */
      __IO uint16_t bHOUR               	:	5;  /* Hours (0 to 23) */
      __I  uint16_t bRESERVED0          	:	3;  /* Reserved */
      __IO uint16_t bDOW                	:	3;  /* Day of week (0 to 6) */
      __I  uint16_t bRESERVED1          	:	5;  /* Reserved */
    } b;
    struct { /* RTCTIM1_BCD Bits */
      __IO uint16_t bHOUR_LD            	:	4;  /* Hours ? low digit (0 to 9) */
      __IO uint16_t bHOUR_HD            	:	2;  /* Hours ? high digit (0 to 2) */
      __I  uint16_t bRESERVED           	:	2;  /* Reserved */
      __IO uint16_t bDOW                	:	3;  /* Day of week (0 to 6) */
    } a;
  } rTIM1;
  union {    /* RTCDATE Register */
    __IO uint16_t r;
    struct { /* RTCDATE Bits */
      __IO uint16_t bDAY                	:	5;  /* Day of month (1 to 28, 29, 30, 31) */
      __I  uint16_t bRESERVED0          	:	3;  /* Reserved */
      __IO uint16_t bMON                	:	4;  /* Month (1 to 12) */
      __I  uint16_t bRESERVED1          	:	4;  /* Reserved */
    } b;
    struct { /* RTCDATE_BCD Bits */
      __IO uint16_t bDAY_LD             	:	4;  /* Day of month ? low digit (0 to 9) */
      __IO uint16_t bDAY_HD             	:	2;  /* Day of month ? high digit (0 to 3) */
      __I  uint16_t bRESERVED           	:	2;  /* Reserved */
      __IO uint16_t bMON_LD             	:	4;  /* Month ? low digit (0 to 9) */
      __IO uint16_t bMON_HD             	:	1;  /* Month ? high digit (0 or 1) */
    } a;
  } rDATE;
  union {    /* RTCYEAR Register */
    __IO uint16_t r;
    struct { /* RTCYEAR Bits */
      __IO uint16_t bYEAR_LB            	:	8;  /* Year ? low byte. Valid values for Year are 0 to 4095. */
      __IO uint16_t bYEAR_HB            	:	4;  /* Year ? high byte. Valid values for Year are 0 to 4095. */
      __I  uint16_t bRESERVED0          	:	4;  /* Reserved */
    } b;
    struct { /* RTCYEAR_BCD Bits */
      __IO uint16_t bYEAR               	:	4;  /* Year ? lowest digit (0 to 9) */
      __IO uint16_t bDEC                	:	4;  /* Decade (0 to 9) */
      __IO uint16_t bCENT_LD            	:	4;  /* Century ? low digit (0 to 9) */
      __IO uint16_t bCENT_HD            	:	3;  /* Century ? high digit (0 to 4) */
      __I  uint16_t bRESERVED           	:	1;  /* Reserved */
    } a;
  } rYEAR;
  union {    /* RTCAMINHR Register */
    __IO uint16_t r;
    struct { /* RTCAMINHR Bits */
      __IO uint16_t bMIN                	:	6;  /* Minutes (0 to 59) */
      __I  uint16_t bRESERVED0          	:	1;  /* Reserved */
      __IO uint16_t bMINAE              	:	1;  /* Alarm enable */
      __IO uint16_t bHOUR               	:	5;  /* Hours (0 to 23) */
      __I  uint16_t bRESERVED1          	:	2;  /* Reserved */
      __IO uint16_t bHOURAE             	:	1;  /* Alarm enable */
    } b;
    struct { /* RTCAMINHR_BCD Bits */
      __IO uint16_t bMIN_LD             	:	4;  /* Minutes ? low digit (0 to 9) */
      __IO uint16_t bMIN_HD             	:	3;  /* Minutes ? high digit (0 to 5) */
      __IO uint16_t b                   	:	1;  /* Alarm enable */
      __IO uint16_t bHOUR_LD            	:	4;  /* Hours ? low digit (0 to 9) */
      __IO uint16_t bHOUR_HD            	:	2;  /* Hours ? high digit (0 to 2) */
      __I  uint16_t bRESERVED           	:	1;  /* Reserved */
      __IO uint16_t bHOURAE             	:	1;  /* Alarm enable */
    } a;
  } rAMINHR;
  union {    /* RTCADOWDAY Register */
    __IO uint16_t r;
    struct { /* RTCADOWDAY Bits */
      __IO uint16_t bDOW                	:	3;  /* Day of week (0 to 6) */
      __I  uint16_t bRESERVED0          	:	4;  /* Reserved */
      __IO uint16_t bDOWAE              	:	1;  /* Alarm enable */
      __IO uint16_t bDAY                	:	5;  /* Day of month (1 to 28, 29, 30, 31) */
      __I  uint16_t bRESERVED1          	:	2;  /* Reserved */
      __IO uint16_t bDAYAE              	:	1;  /* Alarm enable */
    } b;
    struct { /* RTCADOWDAY_BCD Bits */
      __IO uint16_t bDOW                	:	3;  /* Day of week (0 to 6) */
      __I  uint16_t bRESERVED           	:	4;  /* Reserved */
      __IO uint16_t bDOWAE              	:	1;  /* Alarm enable */
      __IO uint16_t bDAY_LD             	:	4;  /* Day of month ? low digit (0 to 9) */
      __IO uint16_t bDAY_HD             	:	2;  /* Day of month ? high digit (0 to 3) */
      __IO uint16_t bDAYAE              	:	1;  /* Alarm enable */
    } a;
  } rADOWDAY;
  __IO uint16_t rBIN2BCD; /* Binary-to-BCD Conversion Register */
  __IO uint16_t rBCD2BIN; /* BCD-to-Binary Conversion Register */
} RTC_C_Type;


//*****************************************************************************
// SYSCTL Registers
//*****************************************************************************
typedef struct {
  union {    /* SYS_REBOOT_CTL Register */
    __IO uint32_t r;
    struct { /* SYS_REBOOT_CTL Bits */
      __IO uint32_t bREBOOT             	:	1;  /* Write 1 initiates a Reboot of the device */
      __I  uint32_t bRESERVED0          	:	7;  /* Reserved */
      __O  uint32_t bWKEY               	:	8;  /* Key to enable writes to bit 0 */
      __I  uint32_t bRESERVED1          	:	16;  /* Reserved */
    } b;
  } rREBOOT_CTL;
  union {    /* SYS_NMI_CTLSTAT Register */
    __IO uint32_t r;
    struct { /* SYS_NMI_CTLSTAT Bits */
      __IO uint32_t bCS_SRC             	:	1;  /* CS interrupt as a source of NMI */
      __IO uint32_t bPSS_SRC            	:	1;  /* PSS interrupt as a source of NMI */
      __IO uint32_t bPCM_SRC            	:	1;  /* PCM interrupt as a source of NMI */
      __IO uint32_t bPIN_SRC            	:	1;  /*  */
      __I  uint32_t bRESERVED0          	:	12;  /* Reserved */
      __I  uint32_t bCS_FLG             	:	1;  /* CS interrupt was the source of NMI */
      __I  uint32_t bPSS_FLG            	:	1;  /* PSS interrupt was the source of NMI */
      __I  uint32_t bPCM_FLG            	:	1;  /* PCM interrupt was the source of NMI */
      __IO uint32_t bPIN_FLG            	:	1;  /* RSTn/NMI pin was the source of NMI */
      __I  uint32_t bRESERVED1          	:	12;  /* Reserved */
    } b;
  } rNMI_CTLSTAT;
  union {    /* SYS_WDTRESET_CTL Register */
    __IO uint32_t r;
    struct { /* SYS_WDTRESET_CTL Bits */
      __IO uint32_t bTIMEOUT            	:	1;  /* WDT timeout reset type */
      __IO uint32_t bVIOLATION          	:	1;  /* WDT password violation reset type */
      __I  uint32_t bRESERVED0          	:	30;  /* Reserved */
    } b;
  } rWDTRESET_CTL;
  union {    /* SYS_PERIHALT_CTL Register */
    __IO uint32_t r;
    struct { /* SYS_PERIHALT_CTL Bits */
      __IO uint32_t bT16_0              	:	1;  /* Freezes IP operation when CPU is halted */
      __IO uint32_t bT16_1              	:	1;  /* Freezes IP operation when CPU is halted */
      __IO uint32_t bT16_2              	:	1;  /* Freezes IP operation when CPU is halted */
      __IO uint32_t bT16_3              	:	1;  /* Freezes IP operation when CPU is halted */
      __IO uint32_t bT32_0              	:	1;  /* Freezes IP operation when CPU is halted */
      __IO uint32_t bEUA0               	:	1;  /* Freezes IP operation when CPU is halted */
      __IO uint32_t bEUA1               	:	1;  /* Freezes IP operation when CPU is halted */
      __IO uint32_t bEUA2               	:	1;  /* Freezes IP operation when CPU is halted */
      __IO uint32_t bEUA3               	:	1;  /* Freezes IP operation when CPU is halted */
      __IO uint32_t bEUB0               	:	1;  /* Freezes IP operation when CPU is halted */
      __IO uint32_t bEUB1               	:	1;  /* Freezes IP operation when CPU is halted */
      __IO uint32_t bEUB2               	:	1;  /* Freezes IP operation when CPU is halted */
      __IO uint32_t bEUB3               	:	1;  /* Freezes IP operation when CPU is halted */
      __IO uint32_t bADC                	:	1;  /* Freezes IP operation when CPU is halted */
      __IO uint32_t bWDT                	:	1;  /* Freezes IP operation when CPU is halted */
      __IO uint32_t bDMA                	:	1;  /* Freezes IP operation when CPU is halted */
      __I  uint32_t bRESERVED0          	:	16;  /* Reserved */
    } b;
  } rPERIHALT_CTL;
  __I uint32_t rSRAM_SIZE; /* SRAM Size Register */
  union {    /* SYS_SRAM_BANKEN Register */
    __IO uint32_t r;
    struct { /* SYS_SRAM_BANKEN Bits */
      __I  uint32_t bBNK0_EN            	:	1;  /* SRAM Bank0 enable */
      __IO uint32_t bBNK1_EN            	:	1;  /* SRAM Bank1 enable */
      __IO uint32_t bBNK2_EN            	:	1;  /* SRAM Bank1 enable */
      __IO uint32_t bBNK3_EN            	:	1;  /* SRAM Bank1 enable */
      __IO uint32_t bBNK4_EN            	:	1;  /* SRAM Bank1 enable */
      __IO uint32_t bBNK5_EN            	:	1;  /* SRAM Bank1 enable */
      __IO uint32_t bBNK6_EN            	:	1;  /* SRAM Bank1 enable */
      __IO uint32_t bBNK7_EN            	:	1;  /* SRAM Bank1 enable */
      __I  uint32_t bRESERVED0          	:	8;  /* Reserved */
      __I  uint32_t bSRAM_RDY           	:	1;  /* SRAM ready */
      __I  uint32_t bRESERVED1          	:	15;  /* Reserved */
    } b;
  } rSRAM_BANKEN;
  union {    /* SYS_SRAM_BANKRET Register */
    __IO uint32_t r;
    struct { /* SYS_SRAM_BANKRET Bits */
      __I  uint32_t bBNK0_RET           	:	1;  /* Bank0 retention */
      __IO uint32_t bBNK1_RET           	:	1;  /* Bank1 retention */
      __IO uint32_t bBNK2_RET           	:	1;  /* Bank2 retention */
      __IO uint32_t bBNK3_RET           	:	1;  /* Bank3 retention */
      __IO uint32_t bBNK4_RET           	:	1;  /* Bank4 retention */
      __IO uint32_t bBNK5_RET           	:	1;  /* Bank5 retention */
      __IO uint32_t bBNK6_RET           	:	1;  /* Bank6 retention */
      __IO uint32_t bBNK7_RET           	:	1;  /* Bank7 retention */
      __I  uint32_t bRESERVED0          	:	8;  /* Reserved */
      __I  uint32_t bSRAM_RDY           	:	1;  /* SRAM ready */
      __I  uint32_t bRESERVED1          	:	15;  /* Reserved */
    } b;
  } rSRAM_BANKRET;
  uint8_t  RESERVED0[4];
  __I uint32_t rFLASH_SIZE; /* Flash Size Register */
  uint8_t  RESERVED1[12];
  union {    /* SYS_DIO_GLTFLT_CTL Register */
    __IO uint32_t r;
    struct { /* SYS_DIO_GLTFLT_CTL Bits */
      __IO uint32_t bGLTCH_EN           	:	1;  /* Glitch filter enable */
      __I  uint32_t bRESERVED0          	:	31;  /* Reserved */
    } b;
  } rDIO_GLTFLT_CTL;
  uint8_t  RESERVED2[12];
  union {    /* SYS_SECDATA_UNLOCK Register */
    __IO uint32_t r;
    struct { /* SYS_SECDATA_UNLOCK Bits */
      __IO uint32_t bUNLKEY             	:	16;  /* Unlock key */
      __I  uint32_t bRESERVED0          	:	16;  /* Reserved */
    } b;
  } rSECDATA_UNLOCK;
  uint8_t  RESERVED3[4028];
  union {    /* SYS_MASTER_UNLOCK Register */
    __IO uint32_t r;
    struct { /* SYS_MASTER_UNLOCK Bits */
      __IO uint32_t bUNLKEY             	:	16;  /* Unlock Key */
      __I  uint32_t bRESERVED0          	:	16;  /* Reserved */
    } b;
  } rMASTER_UNLOCK;
  __IO uint32_t rBOOTOVER_REQ0; /* Boot Override Request Register */
  __IO uint32_t rBOOTOVER_REQ1; /* Boot Override Request Register */
  __IO uint32_t rBOOTOVER_ACK; /* Boot Override Acknowledge Register */
  union {    /* SYS_RESET_REQ Register */
    __IO uint32_t r;
    struct { /* SYS_RESET_REQ Bits */
      __O  uint32_t bPOR                	:	1;  /* Generate POR */
      __O  uint32_t bREBOOT             	:	1;  /* Generate Reboot_Reset */
      __I  uint32_t bRESERVED0          	:	6;  /* Reserved */
      __O  uint32_t bWKEY               	:	8;  /* Write key */
      __I  uint32_t bRESERVED1          	:	16;  /* Reserved */
    } b;
  } rRESET_REQ;
  union {    /* SYS_RESET_STATOVER Register */
    __IO uint32_t r;
    struct { /* SYS_RESET_STATOVER Bits */
      __I  uint32_t bSOFT               	:	1;  /* Indicates if SOFT Reset is active */
      __I  uint32_t bHARD               	:	1;  /* Indicates if HARD Reset is active */
      __I  uint32_t bREBOOT             	:	1;  /* Indicates if Reboot Reset is active */
      __I  uint32_t bRESERVED0          	:	5;  /* Reserved */
      __IO uint32_t bSOFT_OVER          	:	1;  /* SOFT_Reset overwrite request */
      __IO uint32_t bHARD_OVER          	:	1;  /* HARD_Reset overwrite request */
      __IO uint32_t bRBT_OVER           	:	1;  /* Reboot Reset overwrite request */
      __I  uint32_t bRESERVED1          	:	21;  /* Reserved */
    } b;
  } rRESET_STATOVER;
  uint8_t  RESERVED4[8];
  union {    /* SYS_SYSTEM_STAT Register */
    __I uint32_t r;
    struct { /* SYS_SYSTEM_STAT Bits */
      __I  uint32_t bRESERVED0          	:	3;  /* Reserved */
      __I  uint32_t bDBG_SEC_ACT        	:	1;  /* Debug Security active */
      __I  uint32_t bJTAG_SWD_LOCK_ACT  	:	1;  /* Indicates if JTAG and SWD Lock is active */
      __I  uint32_t bIP_PROT_ACT        	:	1;  /* Indicates if IP protection is active */
      __I  uint32_t bRESERVED1          	:	26;  /* Reserved */
    } b;
  } rSYSTEM_STAT;
} SYSCTL_Type;


//*****************************************************************************
// TIMER32 Registers
//*****************************************************************************
typedef struct {
  __IO uint32_t rLOAD1; /* Timer 1 Load Register */
  __I uint32_t rVALUE1; /* Timer 1 Current Value Register */
  union {    /* T32CONTROL1 Register */
    __IO uint32_t r;
    struct { /* T32CONTROL1 Bits */
      __IO uint32_t bONESHOT            	:	1;  /* Selects one-shot or wrapping counter mode */
      __IO uint32_t bSIZE               	:	1;  /* Selects 16 or 32 bit counter operation */
      __IO uint32_t bPRESCALE           	:	2;  /* Prescale bits */
      __I  uint32_t bRESERVED0          	:	1;  /* Reserved */
      __IO uint32_t bIE                 	:	1;  /* Interrupt enable bit */
      __IO uint32_t bMODE               	:	1;  /* Mode bit */
      __IO uint32_t bENABLE             	:	1;  /*  */
      __I  uint32_t bRESERVED1          	:	24;  /* Reserved */
    } b;
  } rCONTROL1;
  __O uint32_t rINTCLR1; /* Timer 1 Interrupt Clear Register */
  union {    /* T32RIS1 Register */
    __I uint32_t r;
    struct { /* T32RIS1 Bits */
      __I  uint32_t bRAW_IFG            	:	1;  /* Raw interrupt status */
      __I  uint32_t b                   	:	31;  /*  */
    } b;
  } rRIS1;
  union {    /* T32MIS1 Register */
    __I uint32_t r;
    struct { /* T32MIS1 Bits */
      __I  uint32_t b                   	:	1;  /* Enabled interrupt status */
      __I  uint32_t bRESERVED0          	:	31;  /* Reserved */
    } b;
  } rMIS1;
  __IO uint32_t rBGLOAD1; /* Timer 1 Background Load Register */
  uint8_t  RESERVED0[4];
  __IO uint32_t rLOAD2; /* Timer 2 Load Register */
  __I uint32_t rVALUE2; /* Timer 2 Current Value Register */
  union {    /* T32CONTROL2 Register */
    __IO uint32_t r;
    struct { /* T32CONTROL2 Bits */
      __IO uint32_t bONESHOT            	:	1;  /* Selects one-shot or wrapping counter mode */
      __IO uint32_t bSIZE               	:	1;  /* Selects 16 or 32 bit counter operation */
      __IO uint32_t bPRESCALE           	:	2;  /* Prescale bits */
      __I  uint32_t bRESERVED0          	:	1;  /* Reserved */
      __IO uint32_t bIE                 	:	1;  /* Interrupt enable bit */
      __IO uint32_t bMODE               	:	1;  /* Mode bit */
      __IO uint32_t bENABLE             	:	1;  /*  */
      __I  uint32_t bRESERVED1          	:	24;  /* Reserved */
    } b;
  } rCONTROL2;
  __O uint32_t rINTCLR2; /* Timer 2 Interrupt Clear Register */
  union {    /* T32RIS2 Register */
    __I uint32_t r;
    struct { /* T32RIS2 Bits */
      __I  uint32_t bRAW_IFG            	:	1;  /* Raw interrupt status */
      __I  uint32_t bRESERVED0          	:	31;  /* Reserved */
    } b;
  } rRIS2;
  union {    /* T32MIS2 Register */
    __I uint32_t r;
    struct { /* T32MIS2 Bits */
      __I  uint32_t bIFG                	:	1;  /* Enabled interrupt status */
      __I  uint32_t bRESERVED0          	:	31;  /* Reserved */
    } b;
  } rMIS2;
  __IO uint32_t rBGLOAD2; /* Timer 2 Background Load Register */
} TIMER32_Type;


//*****************************************************************************
// TIMER_A0 Registers
//*****************************************************************************
typedef struct {
  union {    /* TA0CTL Register */
    __IO uint16_t r;
    struct { /* TA0CTL Bits */
      __IO uint16_t bIFG                	:	1;  /* TimerA interrupt flag */
      __IO uint16_t bIE                 	:	1;  /* TimerA interrupt enable */
      __IO uint16_t bCLR                	:	1;  /* TimerA clear */
      __IO uint16_t bRESERVED0          	:	1;  /* Reserved */
      __IO uint16_t bMC                 	:	2;  /* Mode control */
      __IO uint16_t bID                 	:	2;  /* Input divider */
      __IO uint16_t bSSEL               	:	2;  /* TimerA clock source select */
      __IO uint16_t bRESERVED1          	:	6;  /* Reserved */
    } b;
  } rCTL;
  union {    /* TA0CCTL0 Register */
    __IO uint16_t r;
    struct { /* TA0CCTL0 Bits */
      __IO uint16_t bCCIFG              	:	1;  /* Capture/compare interrupt flag */
      __IO uint16_t bCOV                	:	1;  /* Capture overflow */
      __IO uint16_t bOUT                	:	1;  /* Output */
      __I  uint16_t bCCI                	:	1;  /* Capture/compare input */
      __IO uint16_t bCCIE               	:	1;  /* Capture/compare interrupt enable */
      __IO uint16_t bOUTMOD             	:	3;  /* Output mode */
      __IO uint16_t bCAP                	:	1;  /* Capture mode */
      __I  uint16_t bRESERVED0          	:	1;  /* Reserved */
      __IO uint16_t bSCCI               	:	1;  /* Synchronized capture/compare input */
      __IO uint16_t bSCS                	:	1;  /* Synchronize capture source */
      __IO uint16_t bCCIS               	:	2;  /* Capture/compare input select */
      __IO uint16_t bCM                 	:	2;  /* Capture mode */
    } b;
  } rCCTL0;
  union {    /* TA0CCTL1 Register */
    __IO uint16_t r;
    struct { /* TA0CCTL1 Bits */
      __IO uint16_t bCCIFG              	:	1;  /* Capture/compare interrupt flag */
      __IO uint16_t bCOV                	:	1;  /* Capture overflow */
      __IO uint16_t bOUT                	:	1;  /* Output */
      __I  uint16_t bCCI                	:	1;  /* Capture/compare input */
      __IO uint16_t bCCIE               	:	1;  /* Capture/compare interrupt enable */
      __IO uint16_t bOUTMOD             	:	3;  /* Output mode */
      __IO uint16_t bCAP                	:	1;  /* Capture mode */
      __I  uint16_t bRESERVED0          	:	1;  /* Reserved */
      __IO uint16_t bSCCI               	:	1;  /* Synchronized capture/compare input */
      __IO uint16_t bSCS                	:	1;  /* Synchronize capture source */
      __IO uint16_t bCCIS               	:	2;  /* Capture/compare input select */
      __IO uint16_t bCM                 	:	2;  /* Capture mode */
    } b;
  } rCCTL1;
  union {    /* TA0CCTL2 Register */
    __IO uint16_t r;
    struct { /* TA0CCTL2 Bits */
      __IO uint16_t bCCIFG              	:	1;  /* Capture/compare interrupt flag */
      __IO uint16_t bCOV                	:	1;  /* Capture overflow */
      __IO uint16_t bOUT                	:	1;  /* Output */
      __I  uint16_t bCCI                	:	1;  /* Capture/compare input */
      __IO uint16_t bCCIE               	:	1;  /* Capture/compare interrupt enable */
      __IO uint16_t bOUTMOD             	:	3;  /* Output mode */
      __IO uint16_t bCAP                	:	1;  /* Capture mode */
      __I  uint16_t bRESERVED0          	:	1;  /* Reserved */
      __IO uint16_t bSCCI               	:	1;  /* Synchronized capture/compare input */
      __IO uint16_t bSCS                	:	1;  /* Synchronize capture source */
      __IO uint16_t bCCIS               	:	2;  /* Capture/compare input select */
      __IO uint16_t bCM                 	:	2;  /* Capture mode */
    } b;
  } rCCTL2;
  union {    /* TA0CCTL3 Register */
    __IO uint16_t r;
    struct { /* TA0CCTL3 Bits */
      __IO uint16_t bCCIFG              	:	1;  /* Capture/compare interrupt flag */
      __IO uint16_t bCOV                	:	1;  /* Capture overflow */
      __IO uint16_t bOUT                	:	1;  /* Output */
      __I  uint16_t bCCI                	:	1;  /* Capture/compare input */
      __IO uint16_t bCCIE               	:	1;  /* Capture/compare interrupt enable */
      __IO uint16_t bOUTMOD             	:	3;  /* Output mode */
      __IO uint16_t bCAP                	:	1;  /* Capture mode */
      __I  uint16_t bRESERVED0          	:	1;  /* Reserved */
      __IO uint16_t bSCCI               	:	1;  /* Synchronized capture/compare input */
      __IO uint16_t bSCS                	:	1;  /* Synchronize capture source */
      __IO uint16_t bCCIS               	:	2;  /* Capture/compare input select */
      __IO uint16_t bCM                 	:	2;  /* Capture mode */
    } b;
  } rCCTL3;
  union {    /* TA0CCTL4 Register */
    __IO uint16_t r;
    struct { /* TA0CCTL4 Bits */
      __IO uint16_t bCCIFG              	:	1;  /* Capture/compare interrupt flag */
      __IO uint16_t bCOV                	:	1;  /* Capture overflow */
      __IO uint16_t bOUT                	:	1;  /* Output */
      __I  uint16_t bCCI                	:	1;  /* Capture/compare input */
      __IO uint16_t bCCIE               	:	1;  /* Capture/compare interrupt enable */
      __IO uint16_t bOUTMOD             	:	3;  /* Output mode */
      __IO uint16_t bCAP                	:	1;  /* Capture mode */
      __I  uint16_t bRESERVED0          	:	1;  /* Reserved */
      __IO uint16_t bSCCI               	:	1;  /* Synchronized capture/compare input */
      __IO uint16_t bSCS                	:	1;  /* Synchronize capture source */
      __IO uint16_t bCCIS               	:	2;  /* Capture/compare input select */
      __IO uint16_t bCM                 	:	2;  /* Capture mode */
    } b;
  } rCCTL4;
  union {    /* TA0CCTL5 Register */
    __IO uint16_t r;
    struct { /* TA0CCTL5 Bits */
      __IO uint16_t bCCIFG              	:	1;  /* Capture/compare interrupt flag */
      __IO uint16_t bCOV                	:	1;  /* Capture overflow */
      __IO uint16_t bOUT                	:	1;  /* Output */
      __I  uint16_t bCCI                	:	1;  /* Capture/compare input */
      __IO uint16_t bCCIE               	:	1;  /* Capture/compare interrupt enable */
      __IO uint16_t bOUTMOD             	:	3;  /* Output mode */
      __IO uint16_t bCAP                	:	1;  /* Capture mode */
      __I  uint16_t bRESERVED0          	:	1;  /* Reserved */
      __IO uint16_t bSCCI               	:	1;  /* Synchronized capture/compare input */
      __IO uint16_t bSCS                	:	1;  /* Synchronize capture source */
      __IO uint16_t bCCIS               	:	2;  /* Capture/compare input select */
      __IO uint16_t bCM                 	:	2;  /* Capture mode */
    } b;
  } rCCTL5;
  union {    /* TA0CCTL6 Register */
    __IO uint16_t r;
    struct { /* TA0CCTL6 Bits */
      __IO uint16_t bCCIFG              	:	1;  /* Capture/compare interrupt flag */
      __IO uint16_t bCOV                	:	1;  /* Capture overflow */
      __IO uint16_t bOUT                	:	1;  /* Output */
      __I  uint16_t bCCI                	:	1;  /* Capture/compare input */
      __IO uint16_t bCCIE               	:	1;  /* Capture/compare interrupt enable */
      __IO uint16_t bOUTMOD             	:	3;  /* Output mode */
      __IO uint16_t bCAP                	:	1;  /* Capture mode */
      __I  uint16_t bRESERVED0          	:	1;  /* Reserved */
      __IO uint16_t bSCCI               	:	1;  /* Synchronized capture/compare input */
      __IO uint16_t bSCS                	:	1;  /* Synchronize capture source */
      __IO uint16_t bCCIS               	:	2;  /* Capture/compare input select */
      __IO uint16_t bCM                 	:	2;  /* Capture mode */
    } b;
  } rCCTL6;
  __IO uint16_t rR; /* TimerA register */
  __IO uint16_t rCCR0; /* Timer_A Capture/Compare  Register */
  __IO uint16_t rCCR1; /* Timer_A Capture/Compare  Register */
  __IO uint16_t rCCR2; /* Timer_A Capture/Compare  Register */
  __IO uint16_t rCCR3; /* Timer_A Capture/Compare  Register */
  __IO uint16_t rCCR4; /* Timer_A Capture/Compare  Register */
  __IO uint16_t rCCR5; /* Timer_A Capture/Compare  Register */
  __IO uint16_t rCCR6; /* Timer_A Capture/Compare  Register */
  union {    /* TA0EX0 Register */
    __IO uint16_t r;
    struct { /* TA0EX0 Bits */
      __IO uint16_t bIDEX               	:	3;  /* Input divider expansion */
      __I  uint16_t bRESERVED0          	:	13;  /* Reserved */
    } b;
  } rEX0;
  uint8_t  RESERVED0[12];
  __I uint16_t rIV; /* TimerAx Interrupt Vector Register */
} TIMER_A0_Type;


//*****************************************************************************
// TIMER_A1 Registers
//*****************************************************************************
typedef struct {
  union {    /* TA1CTL Register */
    __IO uint16_t r;
    struct { /* TA1CTL Bits */
      __IO uint16_t bIFG                	:	1;  /* TimerA interrupt flag */
      __IO uint16_t bIE                 	:	1;  /* TimerA interrupt enable */
      __IO uint16_t bCLR                	:	1;  /* TimerA clear */
      __IO uint16_t bRESERVED0          	:	1;  /* Reserved */
      __IO uint16_t bMC                 	:	2;  /* Mode control */
      __IO uint16_t bID                 	:	2;  /* Input divider */
      __IO uint16_t bSSEL               	:	2;  /* TimerA clock source select */
      __IO uint16_t bRESERVED1          	:	6;  /* Reserved */
    } b;
  } rCTL;
  union {    /* TA1CCTL0 Register */
    __IO uint16_t r;
    struct { /* TA1CCTL0 Bits */
      __IO uint16_t bCCIFG              	:	1;  /* Capture/compare interrupt flag */
      __IO uint16_t bCOV                	:	1;  /* Capture overflow */
      __IO uint16_t bOUT                	:	1;  /* Output */
      __I  uint16_t bCCI                	:	1;  /* Capture/compare input */
      __IO uint16_t bCCIE               	:	1;  /* Capture/compare interrupt enable */
      __IO uint16_t bOUTMOD             	:	3;  /* Output mode */
      __IO uint16_t bCAP                	:	1;  /* Capture mode */
      __I  uint16_t bRESERVED0          	:	1;  /* Reserved */
      __IO uint16_t bSCCI               	:	1;  /* Synchronized capture/compare input */
      __IO uint16_t bSCS                	:	1;  /* Synchronize capture source */
      __IO uint16_t bCCIS               	:	2;  /* Capture/compare input select */
      __IO uint16_t bCM                 	:	2;  /* Capture mode */
    } b;
  } rCCTL0;
  union {    /* TA1CCTL1 Register */
    __IO uint16_t r;
    struct { /* TA1CCTL1 Bits */
      __IO uint16_t bCCIFG              	:	1;  /* Capture/compare interrupt flag */
      __IO uint16_t bCOV                	:	1;  /* Capture overflow */
      __IO uint16_t bOUT                	:	1;  /* Output */
      __I  uint16_t bCCI                	:	1;  /* Capture/compare input */
      __IO uint16_t bCCIE               	:	1;  /* Capture/compare interrupt enable */
      __IO uint16_t bOUTMOD             	:	3;  /* Output mode */
      __IO uint16_t bCAP                	:	1;  /* Capture mode */
      __I  uint16_t bRESERVED0          	:	1;  /* Reserved */
      __IO uint16_t bSCCI               	:	1;  /* Synchronized capture/compare input */
      __IO uint16_t bSCS                	:	1;  /* Synchronize capture source */
      __IO uint16_t bCCIS               	:	2;  /* Capture/compare input select */
      __IO uint16_t bCM                 	:	2;  /* Capture mode */
    } b;
  } rCCTL1;
  union {    /* TA1CCTL2 Register */
    __IO uint16_t r;
    struct { /* TA1CCTL2 Bits */
      __IO uint16_t bCCIFG              	:	1;  /* Capture/compare interrupt flag */
      __IO uint16_t bCOV                	:	1;  /* Capture overflow */
      __IO uint16_t bOUT                	:	1;  /* Output */
      __I  uint16_t bCCI                	:	1;  /* Capture/compare input */
      __IO uint16_t bCCIE               	:	1;  /* Capture/compare interrupt enable */
      __IO uint16_t bOUTMOD             	:	3;  /* Output mode */
      __IO uint16_t bCAP                	:	1;  /* Capture mode */
      __I  uint16_t bRESERVED0          	:	1;  /* Reserved */
      __IO uint16_t bSCCI               	:	1;  /* Synchronized capture/compare input */
      __IO uint16_t bSCS                	:	1;  /* Synchronize capture source */
      __IO uint16_t bCCIS               	:	2;  /* Capture/compare input select */
      __IO uint16_t bCM                 	:	2;  /* Capture mode */
    } b;
  } rCCTL2;
  union {    /* TA1CCTL3 Register */
    __IO uint16_t r;
    struct { /* TA1CCTL3 Bits */
      __IO uint16_t bCCIFG              	:	1;  /* Capture/compare interrupt flag */
      __IO uint16_t bCOV                	:	1;  /* Capture overflow */
      __IO uint16_t bOUT                	:	1;  /* Output */
      __I  uint16_t bCCI                	:	1;  /* Capture/compare input */
      __IO uint16_t bCCIE               	:	1;  /* Capture/compare interrupt enable */
      __IO uint16_t bOUTMOD             	:	3;  /* Output mode */
      __IO uint16_t bCAP                	:	1;  /* Capture mode */
      __I  uint16_t bRESERVED0          	:	1;  /* Reserved */
      __IO uint16_t bSCCI               	:	1;  /* Synchronized capture/compare input */
      __IO uint16_t bSCS                	:	1;  /* Synchronize capture source */
      __IO uint16_t bCCIS               	:	2;  /* Capture/compare input select */
      __IO uint16_t bCM                 	:	2;  /* Capture mode */
    } b;
  } rCCTL3;
  union {    /* TA1CCTL4 Register */
    __IO uint16_t r;
    struct { /* TA1CCTL4 Bits */
      __IO uint16_t bCCIFG              	:	1;  /* Capture/compare interrupt flag */
      __IO uint16_t bCOV                	:	1;  /* Capture overflow */
      __IO uint16_t bOUT                	:	1;  /* Output */
      __I  uint16_t bCCI                	:	1;  /* Capture/compare input */
      __IO uint16_t bCCIE               	:	1;  /* Capture/compare interrupt enable */
      __IO uint16_t bOUTMOD             	:	3;  /* Output mode */
      __IO uint16_t bCAP                	:	1;  /* Capture mode */
      __I  uint16_t bRESERVED0          	:	1;  /* Reserved */
      __IO uint16_t bSCCI               	:	1;  /* Synchronized capture/compare input */
      __IO uint16_t bSCS                	:	1;  /* Synchronize capture source */
      __IO uint16_t bCCIS               	:	2;  /* Capture/compare input select */
      __IO uint16_t bCM                 	:	2;  /* Capture mode */
    } b;
  } rCCTL4;
  union {    /* TA1CCTL5 Register */
    __IO uint16_t r;
    struct { /* TA1CCTL5 Bits */
      __IO uint16_t bCCIFG              	:	1;  /* Capture/compare interrupt flag */
      __IO uint16_t bCOV                	:	1;  /* Capture overflow */
      __IO uint16_t bOUT                	:	1;  /* Output */
      __I  uint16_t bCCI                	:	1;  /* Capture/compare input */
      __IO uint16_t bCCIE               	:	1;  /* Capture/compare interrupt enable */
      __IO uint16_t bOUTMOD             	:	3;  /* Output mode */
      __IO uint16_t bCAP                	:	1;  /* Capture mode */
      __I  uint16_t bRESERVED0          	:	1;  /* Reserved */
      __IO uint16_t bSCCI               	:	1;  /* Synchronized capture/compare input */
      __IO uint16_t bSCS                	:	1;  /* Synchronize capture source */
      __IO uint16_t bCCIS               	:	2;  /* Capture/compare input select */
      __IO uint16_t bCM                 	:	2;  /* Capture mode */
    } b;
  } rCCTL5;
  union {    /* TA1CCTL6 Register */
    __IO uint16_t r;
    struct { /* TA1CCTL6 Bits */
      __IO uint16_t bCCIFG              	:	1;  /* Capture/compare interrupt flag */
      __IO uint16_t bCOV                	:	1;  /* Capture overflow */
      __IO uint16_t bOUT                	:	1;  /* Output */
      __I  uint16_t bCCI                	:	1;  /* Capture/compare input */
      __IO uint16_t bCCIE               	:	1;  /* Capture/compare interrupt enable */
      __IO uint16_t bOUTMOD             	:	3;  /* Output mode */
      __IO uint16_t bCAP                	:	1;  /* Capture mode */
      __I  uint16_t bRESERVED0          	:	1;  /* Reserved */
      __IO uint16_t bSCCI               	:	1;  /* Synchronized capture/compare input */
      __IO uint16_t bSCS                	:	1;  /* Synchronize capture source */
      __IO uint16_t bCCIS               	:	2;  /* Capture/compare input select */
      __IO uint16_t bCM                 	:	2;  /* Capture mode */
    } b;
  } rCCTL6;
  __IO uint16_t rR; /* TimerA register */
  __IO uint16_t rCCR0; /* Timer_A Capture/Compare  Register */
  __IO uint16_t rCCR1; /* Timer_A Capture/Compare  Register */
  __IO uint16_t rCCR2; /* Timer_A Capture/Compare  Register */
  __IO uint16_t rCCR3; /* Timer_A Capture/Compare  Register */
  __IO uint16_t rCCR4; /* Timer_A Capture/Compare  Register */
  __IO uint16_t rCCR5; /* Timer_A Capture/Compare  Register */
  __IO uint16_t rCCR6; /* Timer_A Capture/Compare  Register */
  union {    /* TA1EX0 Register */
    __IO uint16_t r;
    struct { /* TA1EX0 Bits */
      __IO uint16_t bIDEX               	:	3;  /* Input divider expansion */
      __I  uint16_t bRESERVED0          	:	13;  /* Reserved */
    } b;
  } rEX0;
  uint8_t  RESERVED0[12];
  __I uint16_t rIV; /* TimerAx Interrupt Vector Register */
} TIMER_A1_Type;


//*****************************************************************************
// TIMER_A2 Registers
//*****************************************************************************
typedef struct {
  union {    /* TA2CTL Register */
    __IO uint16_t r;
    struct { /* TA2CTL Bits */
      __IO uint16_t bIFG                	:	1;  /* TimerA interrupt flag */
      __IO uint16_t bIE                 	:	1;  /* TimerA interrupt enable */
      __IO uint16_t bCLR                	:	1;  /* TimerA clear */
      __IO uint16_t bRESERVED0          	:	1;  /* Reserved */
      __IO uint16_t bMC                 	:	2;  /* Mode control */
      __IO uint16_t bID                 	:	2;  /* Input divider */
      __IO uint16_t bSSEL               	:	2;  /* TimerA clock source select */
      __IO uint16_t bRESERVED1          	:	6;  /* Reserved */
    } b;
  } rCTL;
  union {    /* TA2CCTL0 Register */
    __IO uint16_t r;
    struct { /* TA2CCTL0 Bits */
      __IO uint16_t bCCIFG              	:	1;  /* Capture/compare interrupt flag */
      __IO uint16_t bCOV                	:	1;  /* Capture overflow */
      __IO uint16_t bOUT                	:	1;  /* Output */
      __I  uint16_t bCCI                	:	1;  /* Capture/compare input */
      __IO uint16_t bCCIE               	:	1;  /* Capture/compare interrupt enable */
      __IO uint16_t bOUTMOD             	:	3;  /* Output mode */
      __IO uint16_t bCAP                	:	1;  /* Capture mode */
      __I  uint16_t bRESERVED0          	:	1;  /* Reserved */
      __IO uint16_t bSCCI               	:	1;  /* Synchronized capture/compare input */
      __IO uint16_t bSCS                	:	1;  /* Synchronize capture source */
      __IO uint16_t bCCIS               	:	2;  /* Capture/compare input select */
      __IO uint16_t bCM                 	:	2;  /* Capture mode */
    } b;
  } rCCTL0;
  union {    /* TA2CCTL1 Register */
    __IO uint16_t r;
    struct { /* TA2CCTL1 Bits */
      __IO uint16_t bCCIFG              	:	1;  /* Capture/compare interrupt flag */
      __IO uint16_t bCOV                	:	1;  /* Capture overflow */
      __IO uint16_t bOUT                	:	1;  /* Output */
      __I  uint16_t bCCI                	:	1;  /* Capture/compare input */
      __IO uint16_t bCCIE               	:	1;  /* Capture/compare interrupt enable */
      __IO uint16_t bOUTMOD             	:	3;  /* Output mode */
      __IO uint16_t bCAP                	:	1;  /* Capture mode */
      __I  uint16_t bRESERVED0          	:	1;  /* Reserved */
      __IO uint16_t bSCCI               	:	1;  /* Synchronized capture/compare input */
      __IO uint16_t bSCS                	:	1;  /* Synchronize capture source */
      __IO uint16_t bCCIS               	:	2;  /* Capture/compare input select */
      __IO uint16_t bCM                 	:	2;  /* Capture mode */
    } b;
  } rCCTL1;
  union {    /* TA2CCTL2 Register */
    __IO uint16_t r;
    struct { /* TA2CCTL2 Bits */
      __IO uint16_t bCCIFG              	:	1;  /* Capture/compare interrupt flag */
      __IO uint16_t bCOV                	:	1;  /* Capture overflow */
      __IO uint16_t bOUT                	:	1;  /* Output */
      __I  uint16_t bCCI                	:	1;  /* Capture/compare input */
      __IO uint16_t bCCIE               	:	1;  /* Capture/compare interrupt enable */
      __IO uint16_t bOUTMOD             	:	3;  /* Output mode */
      __IO uint16_t bCAP                	:	1;  /* Capture mode */
      __I  uint16_t bRESERVED0          	:	1;  /* Reserved */
      __IO uint16_t bSCCI               	:	1;  /* Synchronized capture/compare input */
      __IO uint16_t bSCS                	:	1;  /* Synchronize capture source */
      __IO uint16_t bCCIS               	:	2;  /* Capture/compare input select */
      __IO uint16_t bCM                 	:	2;  /* Capture mode */
    } b;
  } rCCTL2;
  union {    /* TA2CCTL3 Register */
    __IO uint16_t r;
    struct { /* TA2CCTL3 Bits */
      __IO uint16_t bCCIFG              	:	1;  /* Capture/compare interrupt flag */
      __IO uint16_t bCOV                	:	1;  /* Capture overflow */
      __IO uint16_t bOUT                	:	1;  /* Output */
      __I  uint16_t bCCI                	:	1;  /* Capture/compare input */
      __IO uint16_t bCCIE               	:	1;  /* Capture/compare interrupt enable */
      __IO uint16_t bOUTMOD             	:	3;  /* Output mode */
      __IO uint16_t bCAP                	:	1;  /* Capture mode */
      __I  uint16_t bRESERVED0          	:	1;  /* Reserved */
      __IO uint16_t bSCCI               	:	1;  /* Synchronized capture/compare input */
      __IO uint16_t bSCS                	:	1;  /* Synchronize capture source */
      __IO uint16_t bCCIS               	:	2;  /* Capture/compare input select */
      __IO uint16_t bCM                 	:	2;  /* Capture mode */
    } b;
  } rCCTL3;
  union {    /* TA2CCTL4 Register */
    __IO uint16_t r;
    struct { /* TA2CCTL4 Bits */
      __IO uint16_t bCCIFG              	:	1;  /* Capture/compare interrupt flag */
      __IO uint16_t bCOV                	:	1;  /* Capture overflow */
      __IO uint16_t bOUT                	:	1;  /* Output */
      __I  uint16_t bCCI                	:	1;  /* Capture/compare input */
      __IO uint16_t bCCIE               	:	1;  /* Capture/compare interrupt enable */
      __IO uint16_t bOUTMOD             	:	3;  /* Output mode */
      __IO uint16_t bCAP                	:	1;  /* Capture mode */
      __I  uint16_t bRESERVED0          	:	1;  /* Reserved */
      __IO uint16_t bSCCI               	:	1;  /* Synchronized capture/compare input */
      __IO uint16_t bSCS                	:	1;  /* Synchronize capture source */
      __IO uint16_t bCCIS               	:	2;  /* Capture/compare input select */
      __IO uint16_t bCM                 	:	2;  /* Capture mode */
    } b;
  } rCCTL4;
  union {    /* TA2CCTL5 Register */
    __IO uint16_t r;
    struct { /* TA2CCTL5 Bits */
      __IO uint16_t bCCIFG              	:	1;  /* Capture/compare interrupt flag */
      __IO uint16_t bCOV                	:	1;  /* Capture overflow */
      __IO uint16_t bOUT                	:	1;  /* Output */
      __I  uint16_t bCCI                	:	1;  /* Capture/compare input */
      __IO uint16_t bCCIE               	:	1;  /* Capture/compare interrupt enable */
      __IO uint16_t bOUTMOD             	:	3;  /* Output mode */
      __IO uint16_t bCAP                	:	1;  /* Capture mode */
      __I  uint16_t bRESERVED0          	:	1;  /* Reserved */
      __IO uint16_t bSCCI               	:	1;  /* Synchronized capture/compare input */
      __IO uint16_t bSCS                	:	1;  /* Synchronize capture source */
      __IO uint16_t bCCIS               	:	2;  /* Capture/compare input select */
      __IO uint16_t bCM                 	:	2;  /* Capture mode */
    } b;
  } rCCTL5;
  union {    /* TA2CCTL6 Register */
    __IO uint16_t r;
    struct { /* TA2CCTL6 Bits */
      __IO uint16_t bCCIFG              	:	1;  /* Capture/compare interrupt flag */
      __IO uint16_t bCOV                	:	1;  /* Capture overflow */
      __IO uint16_t bOUT                	:	1;  /* Output */
      __I  uint16_t bCCI                	:	1;  /* Capture/compare input */
      __IO uint16_t bCCIE               	:	1;  /* Capture/compare interrupt enable */
      __IO uint16_t bOUTMOD             	:	3;  /* Output mode */
      __IO uint16_t bCAP                	:	1;  /* Capture mode */
      __I  uint16_t bRESERVED0          	:	1;  /* Reserved */
      __IO uint16_t bSCCI               	:	1;  /* Synchronized capture/compare input */
      __IO uint16_t bSCS                	:	1;  /* Synchronize capture source */
      __IO uint16_t bCCIS               	:	2;  /* Capture/compare input select */
      __IO uint16_t bCM                 	:	2;  /* Capture mode */
    } b;
  } rCCTL6;
  __IO uint16_t rR; /* TimerA register */
  __IO uint16_t rCCR0; /* Timer_A Capture/Compare  Register */
  __IO uint16_t rCCR1; /* Timer_A Capture/Compare  Register */
  __IO uint16_t rCCR2; /* Timer_A Capture/Compare  Register */
  __IO uint16_t rCCR3; /* Timer_A Capture/Compare  Register */
  __IO uint16_t rCCR4; /* Timer_A Capture/Compare  Register */
  __IO uint16_t rCCR5; /* Timer_A Capture/Compare  Register */
  __IO uint16_t rCCR6; /* Timer_A Capture/Compare  Register */
  union {    /* TA2EX0 Register */
    __IO uint16_t r;
    struct { /* TA2EX0 Bits */
      __IO uint16_t bIDEX               	:	3;  /* Input divider expansion */
      __I  uint16_t bRESERVED0          	:	13;  /* Reserved */
    } b;
  } rEX0;
  uint8_t  RESERVED0[12];
  __I uint16_t rIV; /* TimerAx Interrupt Vector Register */
} TIMER_A2_Type;


//*****************************************************************************
// TIMER_A3 Registers
//*****************************************************************************
typedef struct {
  union {    /* TA3CTL Register */
    __IO uint16_t r;
    struct { /* TA3CTL Bits */
      __IO uint16_t bIFG                	:	1;  /* TimerA interrupt flag */
      __IO uint16_t bIE                 	:	1;  /* TimerA interrupt enable */
      __IO uint16_t bCLR                	:	1;  /* TimerA clear */
      __IO uint16_t bRESERVED0          	:	1;  /* Reserved */
      __IO uint16_t bMC                 	:	2;  /* Mode control */
      __IO uint16_t bID                 	:	2;  /* Input divider */
      __IO uint16_t bSSEL               	:	2;  /* TimerA clock source select */
      __IO uint16_t bRESERVED1          	:	6;  /* Reserved */
    } b;
  } rCTL;
  union {    /* TA3CCTL0 Register */
    __IO uint16_t r;
    struct { /* TA3CCTL0 Bits */
      __IO uint16_t bCCIFG              	:	1;  /* Capture/compare interrupt flag */
      __IO uint16_t bCOV                	:	1;  /* Capture overflow */
      __IO uint16_t bOUT                	:	1;  /* Output */
      __I  uint16_t bCCI                	:	1;  /* Capture/compare input */
      __IO uint16_t bCCIE               	:	1;  /* Capture/compare interrupt enable */
      __IO uint16_t bOUTMOD             	:	3;  /* Output mode */
      __IO uint16_t bCAP                	:	1;  /* Capture mode */
      __I  uint16_t bRESERVED0          	:	1;  /* Reserved */
      __IO uint16_t bSCCI               	:	1;  /* Synchronized capture/compare input */
      __IO uint16_t bSCS                	:	1;  /* Synchronize capture source */
      __IO uint16_t bCCIS               	:	2;  /* Capture/compare input select */
      __IO uint16_t bCM                 	:	2;  /* Capture mode */
    } b;
  } rCCTL0;
  union {    /* TA3CCTL1 Register */
    __IO uint16_t r;
    struct { /* TA3CCTL1 Bits */
      __IO uint16_t bCCIFG              	:	1;  /* Capture/compare interrupt flag */
      __IO uint16_t bCOV                	:	1;  /* Capture overflow */
      __IO uint16_t bOUT                	:	1;  /* Output */
      __I  uint16_t bCCI                	:	1;  /* Capture/compare input */
      __IO uint16_t bCCIE               	:	1;  /* Capture/compare interrupt enable */
      __IO uint16_t bOUTMOD             	:	3;  /* Output mode */
      __IO uint16_t bCAP                	:	1;  /* Capture mode */
      __I  uint16_t bRESERVED0          	:	1;  /* Reserved */
      __IO uint16_t bSCCI               	:	1;  /* Synchronized capture/compare input */
      __IO uint16_t bSCS                	:	1;  /* Synchronize capture source */
      __IO uint16_t bCCIS               	:	2;  /* Capture/compare input select */
      __IO uint16_t bCM                 	:	2;  /* Capture mode */
    } b;
  } rCCTL1;
  union {    /* TA3CCTL2 Register */
    __IO uint16_t r;
    struct { /* TA3CCTL2 Bits */
      __IO uint16_t bCCIFG              	:	1;  /* Capture/compare interrupt flag */
      __IO uint16_t bCOV                	:	1;  /* Capture overflow */
      __IO uint16_t bOUT                	:	1;  /* Output */
      __I  uint16_t bCCI                	:	1;  /* Capture/compare input */
      __IO uint16_t bCCIE               	:	1;  /* Capture/compare interrupt enable */
      __IO uint16_t bOUTMOD             	:	3;  /* Output mode */
      __IO uint16_t bCAP                	:	1;  /* Capture mode */
      __I  uint16_t bRESERVED0          	:	1;  /* Reserved */
      __IO uint16_t bSCCI               	:	1;  /* Synchronized capture/compare input */
      __IO uint16_t bSCS                	:	1;  /* Synchronize capture source */
      __IO uint16_t bCCIS               	:	2;  /* Capture/compare input select */
      __IO uint16_t bCM                 	:	2;  /* Capture mode */
    } b;
  } rCCTL2;
  union {    /* TA3CCTL3 Register */
    __IO uint16_t r;
    struct { /* TA3CCTL3 Bits */
      __IO uint16_t bCCIFG              	:	1;  /* Capture/compare interrupt flag */
      __IO uint16_t bCOV                	:	1;  /* Capture overflow */
      __IO uint16_t bOUT                	:	1;  /* Output */
      __I  uint16_t bCCI                	:	1;  /* Capture/compare input */
      __IO uint16_t bCCIE               	:	1;  /* Capture/compare interrupt enable */
      __IO uint16_t bOUTMOD             	:	3;  /* Output mode */
      __IO uint16_t bCAP                	:	1;  /* Capture mode */
      __I  uint16_t bRESERVED0          	:	1;  /* Reserved */
      __IO uint16_t bSCCI               	:	1;  /* Synchronized capture/compare input */
      __IO uint16_t bSCS                	:	1;  /* Synchronize capture source */
      __IO uint16_t bCCIS               	:	2;  /* Capture/compare input select */
      __IO uint16_t bCM                 	:	2;  /* Capture mode */
    } b;
  } rCCTL3;
  union {    /* TA3CCTL4 Register */
    __IO uint16_t r;
    struct { /* TA3CCTL4 Bits */
      __IO uint16_t bCCIFG              	:	1;  /* Capture/compare interrupt flag */
      __IO uint16_t bCOV                	:	1;  /* Capture overflow */
      __IO uint16_t bOUT                	:	1;  /* Output */
      __I  uint16_t bCCI                	:	1;  /* Capture/compare input */
      __IO uint16_t bCCIE               	:	1;  /* Capture/compare interrupt enable */
      __IO uint16_t bOUTMOD             	:	3;  /* Output mode */
      __IO uint16_t bCAP                	:	1;  /* Capture mode */
      __I  uint16_t bRESERVED0          	:	1;  /* Reserved */
      __IO uint16_t bSCCI               	:	1;  /* Synchronized capture/compare input */
      __IO uint16_t bSCS                	:	1;  /* Synchronize capture source */
      __IO uint16_t bCCIS               	:	2;  /* Capture/compare input select */
      __IO uint16_t bCM                 	:	2;  /* Capture mode */
    } b;
  } rCCTL4;
  union {    /* TA3CCTL5 Register */
    __IO uint16_t r;
    struct { /* TA3CCTL5 Bits */
      __IO uint16_t bCCIFG              	:	1;  /* Capture/compare interrupt flag */
      __IO uint16_t bCOV                	:	1;  /* Capture overflow */
      __IO uint16_t bOUT                	:	1;  /* Output */
      __I  uint16_t bCCI                	:	1;  /* Capture/compare input */
      __IO uint16_t bCCIE               	:	1;  /* Capture/compare interrupt enable */
      __IO uint16_t bOUTMOD             	:	3;  /* Output mode */
      __IO uint16_t bCAP                	:	1;  /* Capture mode */
      __I  uint16_t bRESERVED0          	:	1;  /* Reserved */
      __IO uint16_t bSCCI               	:	1;  /* Synchronized capture/compare input */
      __IO uint16_t bSCS                	:	1;  /* Synchronize capture source */
      __IO uint16_t bCCIS               	:	2;  /* Capture/compare input select */
      __IO uint16_t bCM                 	:	2;  /* Capture mode */
    } b;
  } rCCTL5;
  union {    /* TA3CCTL6 Register */
    __IO uint16_t r;
    struct { /* TA3CCTL6 Bits */
      __IO uint16_t bCCIFG              	:	1;  /* Capture/compare interrupt flag */
      __IO uint16_t bCOV                	:	1;  /* Capture overflow */
      __IO uint16_t bOUT                	:	1;  /* Output */
      __I  uint16_t bCCI                	:	1;  /* Capture/compare input */
      __IO uint16_t bCCIE               	:	1;  /* Capture/compare interrupt enable */
      __IO uint16_t bOUTMOD             	:	3;  /* Output mode */
      __IO uint16_t bCAP                	:	1;  /* Capture mode */
      __I  uint16_t bRESERVED0          	:	1;  /* Reserved */
      __IO uint16_t bSCCI               	:	1;  /* Synchronized capture/compare input */
      __IO uint16_t bSCS                	:	1;  /* Synchronize capture source */
      __IO uint16_t bCCIS               	:	2;  /* Capture/compare input select */
      __IO uint16_t bCM                 	:	2;  /* Capture mode */
    } b;
  } rCCTL6;
  __IO uint16_t rR; /* TimerA register */
  __IO uint16_t rCCR0; /* Timer_A Capture/Compare  Register */
  __IO uint16_t rCCR1; /* Timer_A Capture/Compare  Register */
  __IO uint16_t rCCR2; /* Timer_A Capture/Compare  Register */
  __IO uint16_t rCCR3; /* Timer_A Capture/Compare  Register */
  __IO uint16_t rCCR4; /* Timer_A Capture/Compare  Register */
  __IO uint16_t rCCR5; /* Timer_A Capture/Compare  Register */
  __IO uint16_t rCCR6; /* Timer_A Capture/Compare  Register */
  union {    /* TA3EX0 Register */
    __IO uint16_t r;
    struct { /* TA3EX0 Bits */
      __IO uint16_t bIDEX               	:	3;  /* Input divider expansion */
      __I  uint16_t bRESERVED0          	:	13;  /* Reserved */
    } b;
  } rEX0;
  uint8_t  RESERVED0[12];
  __I uint16_t rIV; /* TimerAx Interrupt Vector Register */
} TIMER_A3_Type;


//*****************************************************************************
// TLV Registers
//*****************************************************************************
typedef struct {
  __IO uint32_t rTLV_CHECKSUM; /* TLV Checksum */
  __IO uint32_t rDEVICE_INFO_TAG; /* Device Info Tag */
  __IO uint32_t rDEVICE_INFO_LEN; /* Device Info Length */
  __IO uint32_t rDEVICE_ID; /* Device ID */
  __IO uint32_t rHWREV; /* HW Revision */
  __IO uint32_t rBCREV; /* Boot Code Revision */
  __IO uint32_t rROM_DRVLIB_REV; /* ROM Driver Library Revision */
  __IO uint32_t rDIE_REC_TAG; /* Die Record Tag */
  __IO uint32_t rDIE_REC_LEN; /* Die Record Length */
  __IO uint32_t rDIE_XPOS; /* Die X-Position */
  __IO uint32_t rDIE_YPOS; /* Die Y-Position */
  __IO uint32_t rWAFER_ID; /* Wafer ID */
  __IO uint32_t rLOT_ID; /* Lot ID */
  __IO uint32_t rRESERVED0; /* Reserved */
  __IO uint32_t rRESERVED1; /* Reserved */
  __IO uint32_t rRESERVED2; /* Reserved */
  __IO uint32_t rTEST_RESULTS; /* Test Results */
  __IO uint32_t rCS_CAL_TAG; /* Clock System Calibration Tag */
  __IO uint32_t rCS_CAL_LEN; /* Clock System Calibration Length */
  __IO uint32_t rDCOIR_FCAL_RSEL04; /* DCO IR mode: Frequency calibration for DCORSEL 0 to 4 */
  __IO uint32_t rDCOIR_FCAL_RSEL5; /* DCO IR mode: Frequency calibration for DCORSEL 5 */
  __IO uint32_t rDCOIR_MAXPOSTUNE_RSEL04; /* DCO IR mode: Max Positive Tune for DCORSEL 0 to 4 */
  __IO uint32_t rDCOIR_MAXNEGTUNE_RSEL04; /* DCO IR mode: Max Negative Tune for DCORSEL 0 to 4 */
  __IO uint32_t rDCOIR_MAXPOSTUNE_RSEL5; /* DCO IR mode: Max Positive Tune for DCORSEL 5 */
  __IO uint32_t rDCOIR_MAXNEGTUNE_RSEL5; /* DCO IR mode: Max Negative Tune for DCORSEL 5 */
  __IO uint32_t rDCOIR_CONSTK_RSEL04; /* DCO IR mode: DCO Constant (K) for DCORSEL 0 to 4 */
  __IO uint32_t rDCOIR_CONSTK_RSEL5; /* DCO IR mode: DCO Constant (K) for DCORSEL 5 */
  __IO uint32_t rDCOER_FCAL_RSEL04; /* DCO ER mode: Frequency calibration for DCORSEL 0 to 4 */
  __IO uint32_t rDCOER_FCAL_RSEL5; /* DCO ER mode: Frequency calibration for DCORSEL 5 */
  __IO uint32_t rDCOER_MAXPOSTUNE_RSEL04; /* DCO ER mode: Max Positive Tune for DCORSEL 0 to 4 */
  __IO uint32_t rDCOER_MAXNEGTUNE_RSEL04; /* DCO ER mode: Max Negative Tune for DCORSEL 0 to 4 */
  __IO uint32_t rDCOER_MAXPOSTUNE_RSEL5; /* DCO ER mode: Max Positive Tune for DCORSEL 5 */
  __IO uint32_t rDCOER_MAXNEGTUNE_RSEL5; /* DCO ER mode: Max Negative Tune for DCORSEL 5 */
  __IO uint32_t rDCOER_CONSTK_RSEL04; /* DCO ER mode: DCO Constant (K) for DCORSEL 0 to 4 */
  __IO uint32_t rDCOER_CONSTK_RSEL5; /* DCO ER mode: DCO Constant (K) for DCORSEL 5 */
  __IO uint32_t rADC14_CAL_TAG; /* ADC14 Calibration Tag */
  __IO uint32_t rADC14_CAL_LEN; /* ADC14 Calibration Length */
  __IO uint32_t rADC14_GF_EXTREF30C; /* ADC14 Gain Factor for External Reference 30°C */
  __IO uint32_t rADC14_GF_EXTREF85C; /* ADC14 Gain Factor for External Reference 85°C */
  __IO uint32_t rADC14_GF_BUF_EXTREF30C; /* ADC14 Gain Factor for Buffered External Reference 30°C */
  __IO uint32_t rADC14_GF_BUF_EXTREF85C; /* ADC14 Gain Factor for Buffered External Reference 85°C */
  __IO uint32_t rADC14_GF_BUF1P2V_INTREF30C_REFOUT0; /* ADC14 Gain Factor for Buffered 1.2V Internal Reference 30°C (REFOUT = 0) */
  __IO uint32_t rADC14_GF_BUF1P2V_INTREF85C_REFOUT0; /* ADC14 Gain Factor for Buffered 1.2V Internal Reference 85°C (REFOUT = 0) */
  __IO uint32_t rADC14_GF_BUF1P2V_INTREF30C_REFOUT1; /* ADC14 Gain Factor for Buffered 1.2V Internal Reference 30°C (REFOUT = 1) */
  __IO uint32_t rADC14_GF_BUF1P2V_INTREF85C_REFOUT1; /* ADC14 Gain Factor for Buffered 1.2V Internal Reference 85°C (REFOUT = 1) */
  __IO uint32_t rADC14_GF_BUF1P45V_INTREF30C_REFOUT0; /* ADC14 Gain Factor for Buffered 1.45V Internal Reference 30°C (REFOUT = 0) */
  __IO uint32_t rADC14_GF_BUF1P45V_INTREF85C_REFOUT0; /* ADC14 Gain Factor for Buffered 1.45V Internal Reference 85°C (REFOUT = 0) */
  __IO uint32_t rADC14_GF_BUF1P45V_INTREF30C_REFOUT1; /* ADC14 Gain Factor for Buffered 1.45V Internal Reference 30°C (REFOUT = 1) */
  __IO uint32_t rADC14_GF_BUF1P45V_INTREF85C_REFOUT1; /* ADC14 Gain Factor for Buffered 1.45V Internal Reference 85°C (REFOUT = 1) */
  __IO uint32_t rADC14_GF_BUF2P5V_INTREF30C_REFOUT0; /* ADC14 Gain Factor for Buffered 2.5V Internal Reference 30°C (REFOUT = 0) */
  __IO uint32_t rADC14_GF_BUF2P5V_INTREF85C_REFOUT0; /* ADC14 Gain Factor for Buffered 2.5V Internal Reference 85°C (REFOUT = 0) */
  __IO uint32_t rADC14_GF_BUF2P5V_INTREF30C_REFOUT1; /* ADC14 Gain Factor for Buffered 2.5V Internal Reference 30°C (REFOUT = 1) */
  __IO uint32_t rADC14_GF_BUF2P5V_INTREF85C_REFOUT1; /* ADC14 Gain Factor for Buffered 2.5V Internal Reference 85°C (REFOUT = 1) */
  __IO uint32_t rADC14_OFFSET_VRSEL_1; /* ADC14 Offset (ADC14VRSEL = 1h) */
  __IO uint32_t rADC14_OFFSET_VRSEL_E; /* ADC14 Offset (ADC14VRSEL = Eh) */
  __IO uint32_t rADC14_REF1P2V_TS30C; /* ADC14 1.2V Reference Temp. Sensor 30°C */
  __IO uint32_t rADC14_REF1P2V_TS85C; /* ADC14 1.2V Reference Temp. Sensor 85°C */
  __IO uint32_t rADC14_REF1P45V_TS30C; /* ADC14 1.45V Reference Temp. Sensor 30°C */
  __IO uint32_t rADC14_REF1P45V_TS85C; /* ADC14 1.45V Reference Temp. Sensor 85°C */
  __IO uint32_t rADC14_REF2P5V_TS30C; /* ADC14 2.5V Reference Temp. Sensor 30°C */
  __IO uint32_t rADC14_REF2P5V_TS85C; /* ADC14 2.5V Reference Temp. Sensor 85°C */
  __IO uint32_t rREF_CAL_TAG; /* REF Calibration Tag */
  __IO uint32_t rREF_CAL_LEN; /* REF Calibration Length */
  __IO uint32_t rREF_1P2V; /* REF 1.2V Reference */
  __IO uint32_t rREF_1P45V; /* REF 1.45V Reference */
  __IO uint32_t rREF_2P5V; /* REF 2.5V Reference */
  __IO uint32_t rRANDOM_NUM_TAG; /* 128-bit Random Number Tag */
  __IO uint32_t rRANDOM_NUM_LEN; /* 128-bit Random Number Length */
  __IO uint32_t rRANDOM_NUM_1; /* 32-bit Random Number 1 */
  __IO uint32_t rRANDOM_NUM_2; /* 32-bit Random Number 2 */
  __IO uint32_t rRANDOM_NUM_3; /* 32-bit Random Number 3 */
  __IO uint32_t rRANDOM_NUM_4; /* 32-bit Random Number 4 */
  __IO uint32_t rBSL_CFG_TAG; /* BSL Configuration Tag */
  __IO uint32_t rBSL_CFG_LEN; /* BSL Configuration Length */
  __IO uint32_t rBSL_PERIPHIF_SEL; /* BSL Peripheral Interface Selection */
  __IO uint32_t rBSL_PORTIF_CFG_UART; /* BSL Port Interface Configuration for UART */
  __IO uint32_t rBSL_PORTIF_CFG_SPI; /* BSL Port Interface Configuration for SPI */
  __IO uint32_t rBSL_PORTIF_CFG_I2C; /* BSL Port Interface Configuration for I2C */
  __IO uint32_t rTLV_END; /* TLV End Word */
} TLV_Type;


//*****************************************************************************
// WDT_A Registers
//*****************************************************************************
typedef struct {
  uint8_t  RESERVED0[12];
  union {    /* WDTCTL Register */
    __IO uint16_t r;
    struct { /* WDTCTL Bits */
      __IO uint16_t bIS                 	:	3;  /* Watchdog timer interval select */
      __O  uint16_t bCNTCL              	:	1;  /* Watchdog timer counter clear */
      __IO uint16_t bTMSEL              	:	1;  /* Watchdog timer mode select */
      __IO uint16_t bSSEL               	:	2;  /* Watchdog timer clock source select */
      __IO uint16_t bHOLD               	:	1;  /* Watchdog timer hold */
      __IO uint16_t bPW                 	:	8;  /* Watchdog timer password */
    } b;
  } rCTL;
} WDT_A_Type;


//*****************************************************************************
// Peripheral register control bits
//*****************************************************************************

//*****************************************************************************
// ADC14 Bits
//*****************************************************************************
/* ADC14CTL0[ADC14SC] Bits */
#define ADC14SC_OFS                                        ( 0)                  /* ADC14SC Offset */
#define ADC14SC                                            (0x00000001)          /* ADC14 start conversion */
/* ADC14CTL0[ADC14ENC] Bits */
#define ADC14ENC_OFS                                       ( 1)                  /* ADC14ENC Offset */
#define ADC14ENC                                           (0x00000002)          /* ADC14 enable conversion */
/* ADC14CTL0[ADC14ON] Bits */
#define ADC14ON_OFS                                        ( 4)                  /* ADC14ON Offset */
#define ADC14ON                                            (0x00000010)          /* ADC14 on */
/* ADC14CTL0[ADC14MSC] Bits */
#define ADC14MSC_OFS                                       ( 7)                  /* ADC14MSC Offset */
#define ADC14MSC                                           (0x00000080)          /* ADC14 multiple sample and conversion */
/* ADC14CTL0[ADC14SHT0] Bits */
#define ADC14SHT0_OFS                                      ( 8)                  /* ADC14SHT0 Offset */
#define ADC14SHT0_M                                        (0x00000f00)          /* ADC14 sample-and-hold time */
#define ADC14SHT00                                         (0x00000100)          /* ADC14 sample-and-hold time */
#define ADC14SHT01                                         (0x00000200)          /* ADC14 sample-and-hold time */
#define ADC14SHT02                                         (0x00000400)          /* ADC14 sample-and-hold time */
#define ADC14SHT03                                         (0x00000800)          /* ADC14 sample-and-hold time */
#define ADC14SHT0_0                                        (0x00000000)          /* 4 */
#define ADC14SHT0_1                                        (0x00000100)          /* 8 */
#define ADC14SHT0_2                                        (0x00000200)          /* 16 */
#define ADC14SHT0_3                                        (0x00000300)          /* 32 */
#define ADC14SHT0_4                                        (0x00000400)          /* 64 */
#define ADC14SHT0_5                                        (0x00000500)          /* 96 */
#define ADC14SHT0_6                                        (0x00000600)          /* 128 */
#define ADC14SHT0_7                                        (0x00000700)          /* 192 */
#define ADC14SHT0__4                                       (0x00000000)          /* 4 */
#define ADC14SHT0__8                                       (0x00000100)          /* 8 */
#define ADC14SHT0__16                                      (0x00000200)          /* 16 */
#define ADC14SHT0__32                                      (0x00000300)          /* 32 */
#define ADC14SHT0__64                                      (0x00000400)          /* 64 */
#define ADC14SHT0__96                                      (0x00000500)          /* 96 */
#define ADC14SHT0__128                                     (0x00000600)          /* 128 */
#define ADC14SHT0__192                                     (0x00000700)          /* 192 */
/* ADC14CTL0[ADC14SHT1] Bits */
#define ADC14SHT1_OFS                                      (12)                  /* ADC14SHT1 Offset */
#define ADC14SHT1_M                                        (0x0000f000)          /* ADC14 sample-and-hold time */
#define ADC14SHT10                                         (0x00001000)          /* ADC14 sample-and-hold time */
#define ADC14SHT11                                         (0x00002000)          /* ADC14 sample-and-hold time */
#define ADC14SHT12                                         (0x00004000)          /* ADC14 sample-and-hold time */
#define ADC14SHT13                                         (0x00008000)          /* ADC14 sample-and-hold time */
#define ADC14SHT1_0                                        (0x00000000)          /* 4 */
#define ADC14SHT1_1                                        (0x00001000)          /* 8 */
#define ADC14SHT1_2                                        (0x00002000)          /* 16 */
#define ADC14SHT1_3                                        (0x00003000)          /* 32 */
#define ADC14SHT1_4                                        (0x00004000)          /* 64 */
#define ADC14SHT1_5                                        (0x00005000)          /* 96 */
#define ADC14SHT1_6                                        (0x00006000)          /* 128 */
#define ADC14SHT1_7                                        (0x00007000)          /* 192 */
#define ADC14SHT1__4                                       (0x00000000)          /* 4 */
#define ADC14SHT1__8                                       (0x00001000)          /* 8 */
#define ADC14SHT1__16                                      (0x00002000)          /* 16 */
#define ADC14SHT1__32                                      (0x00003000)          /* 32 */
#define ADC14SHT1__64                                      (0x00004000)          /* 64 */
#define ADC14SHT1__96                                      (0x00005000)          /* 96 */
#define ADC14SHT1__128                                     (0x00006000)          /* 128 */
#define ADC14SHT1__192                                     (0x00007000)          /* 192 */
/* ADC14CTL0[ADC14BUSY] Bits */
#define ADC14BUSY_OFS                                      (16)                  /* ADC14BUSY Offset */
#define ADC14BUSY                                          (0x00010000)          /* ADC14 busy */
/* ADC14CTL0[ADC14CONSEQ] Bits */
#define ADC14CONSEQ_OFS                                    (17)                  /* ADC14CONSEQ Offset */
#define ADC14CONSEQ_M                                      (0x00060000)          /* ADC14 conversion sequence mode select */
#define ADC14CONSEQ0                                       (0x00020000)          /* ADC14 conversion sequence mode select */
#define ADC14CONSEQ1                                       (0x00040000)          /* ADC14 conversion sequence mode select */
#define ADC14CONSEQ_0                                      (0x00000000)          /* Single-channel, single-conversion */
#define ADC14CONSEQ_1                                      (0x00020000)          /* Sequence-of-channels */
#define ADC14CONSEQ_2                                      (0x00040000)          /* Repeat-single-channel */
#define ADC14CONSEQ_3                                      (0x00060000)          /* Repeat-sequence-of-channels */
/* ADC14CTL0[ADC14SSEL] Bits */
#define ADC14SSEL_OFS                                      (19)                  /* ADC14SSEL Offset */
#define ADC14SSEL_M                                        (0x00380000)          /* ADC14 clock source select */
#define ADC14SSEL0                                         (0x00080000)          /* ADC14 clock source select */
#define ADC14SSEL1                                         (0x00100000)          /* ADC14 clock source select */
#define ADC14SSEL2                                         (0x00200000)          /* ADC14 clock source select */
#define ADC14SSEL_0                                        (0x00000000)          /* MODCLK */
#define ADC14SSEL_1                                        (0x00080000)          /* SYSCLK */
#define ADC14SSEL_2                                        (0x00100000)          /* ACLK */
#define ADC14SSEL_3                                        (0x00180000)          /* MCLK */
#define ADC14SSEL_4                                        (0x00200000)          /* SMCLK */
#define ADC14SSEL_5                                        (0x00280000)          /* HSMCLK */
#define ADC14SSEL__MODCLK                                  (0x00000000)          /* MODCLK */
#define ADC14SSEL__SYSCLK                                  (0x00080000)          /* SYSCLK */
#define ADC14SSEL__ACLK                                    (0x00100000)          /* ACLK */
#define ADC14SSEL__MCLK                                    (0x00180000)          /* MCLK */
#define ADC14SSEL__SMCLK                                   (0x00200000)          /* SMCLK */
#define ADC14SSEL__HSMCLK                                  (0x00280000)          /* HSMCLK */
/* ADC14CTL0[ADC14DIV] Bits */
#define ADC14DIV_OFS                                       (22)                  /* ADC14DIV Offset */
#define ADC14DIV_M                                         (0x01c00000)          /* ADC14 clock divider */
#define ADC14DIV0                                          (0x00400000)          /* ADC14 clock divider */
#define ADC14DIV1                                          (0x00800000)          /* ADC14 clock divider */
#define ADC14DIV2                                          (0x01000000)          /* ADC14 clock divider */
#define ADC14DIV_0                                         (0x00000000)          /* /1 */
#define ADC14DIV_1                                         (0x00400000)          /* /2 */
#define ADC14DIV_2                                         (0x00800000)          /* /3 */
#define ADC14DIV_3                                         (0x00c00000)          /* /4 */
#define ADC14DIV_4                                         (0x01000000)          /* /5 */
#define ADC14DIV_5                                         (0x01400000)          /* /6 */
#define ADC14DIV_6                                         (0x01800000)          /* /7 */
#define ADC14DIV_7                                         (0x01c00000)          /* /8 */
#define ADC14DIV__1                                        (0x00000000)          /* /1 */
#define ADC14DIV__2                                        (0x00400000)          /* /2 */
#define ADC14DIV__3                                        (0x00800000)          /* /3 */
#define ADC14DIV__4                                        (0x00c00000)          /* /4 */
#define ADC14DIV__5                                        (0x01000000)          /* /5 */
#define ADC14DIV__6                                        (0x01400000)          /* /6 */
#define ADC14DIV__7                                        (0x01800000)          /* /7 */
#define ADC14DIV__8                                        (0x01c00000)          /* /8 */
/* ADC14CTL0[ADC14ISSH] Bits */
#define ADC14ISSH_OFS                                      (25)                  /* ADC14ISSH Offset */
#define ADC14ISSH                                          (0x02000000)          /* ADC14 invert signal sample-and-hold */
/* ADC14CTL0[ADC14SHP] Bits */
#define ADC14SHP_OFS                                       (26)                  /* ADC14SHP Offset */
#define ADC14SHP                                           (0x04000000)          /* ADC14 sample-and-hold pulse-mode select */
/* ADC14CTL0[ADC14SHS] Bits */
#define ADC14SHS_OFS                                       (27)                  /* ADC14SHS Offset */
#define ADC14SHS_M                                         (0x38000000)          /* ADC14 sample-and-hold source select */
#define ADC14SHS0                                          (0x08000000)          /* ADC14 sample-and-hold source select */
#define ADC14SHS1                                          (0x10000000)          /* ADC14 sample-and-hold source select */
#define ADC14SHS2                                          (0x20000000)          /* ADC14 sample-and-hold source select */
#define ADC14SHS_0                                         (0x00000000)          /* ADC14SC bit */
#define ADC14SHS_1                                         (0x08000000)          /* See device-specific data sheet for source */
#define ADC14SHS_2                                         (0x10000000)          /* See device-specific data sheet for source */
#define ADC14SHS_3                                         (0x18000000)          /* See device-specific data sheet for source */
#define ADC14SHS_4                                         (0x20000000)          /* See device-specific data sheet for source */
#define ADC14SHS_5                                         (0x28000000)          /* See device-specific data sheet for source */
#define ADC14SHS_6                                         (0x30000000)          /* See device-specific data sheet for source */
#define ADC14SHS_7                                         (0x38000000)          /* See device-specific data sheet for source */
/* ADC14CTL0[ADC14PDIV] Bits */
#define ADC14PDIV_OFS                                      (30)                  /* ADC14PDIV Offset */
#define ADC14PDIV_M                                        (0xc0000000)          /* ADC14 predivider */
#define ADC14PDIV0                                         (0x40000000)          /* ADC14 predivider */
#define ADC14PDIV1                                         (0x80000000)          /* ADC14 predivider */
#define ADC14PDIV_0                                        (0x00000000)          /* Predivide by 1 */
#define ADC14PDIV_1                                        (0x40000000)          /* Predivide by 4 */
#define ADC14PDIV_2                                        (0x80000000)          /* Predivide by 32 */
#define ADC14PDIV_3                                        (0xc0000000)          /* Predivide by 64 */
#define ADC14PDIV__1                                       (0x00000000)          /* Predivide by 1 */
#define ADC14PDIV__4                                       (0x40000000)          /* Predivide by 4 */
#define ADC14PDIV__32                                      (0x80000000)          /* Predivide by 32 */
#define ADC14PDIV__64                                      (0xc0000000)          /* Predivide by 64 */
/* ADC14CTL1[ADC14PWRMD] Bits */
#define ADC14PWRMD_OFS                                     ( 0)                  /* ADC14PWRMD Offset */
#define ADC14PWRMD_M                                       (0x00000003)          /* ADC14 power modes */
#define ADC14PWRMD0                                        (0x00000001)          /* ADC14 power modes */
#define ADC14PWRMD1                                        (0x00000002)          /* ADC14 power modes */
#define ADC14PWRMD_0                                       (0x00000000)          /* Regular power mode for use with any resolution setting. Sample rate can be up to 1 Msps. */
#define ADC14PWRMD_2                                       (0x00000002)          /* Low-power mode for 12-bit, 10-bit, and 8-bit resolution settings. Sample rate must not exceed 200 ksps. */
/* ADC14CTL1[ADC14REFBURST] Bits */
#define ADC14REFBURST_OFS                                  ( 2)                  /* ADC14REFBURST Offset */
#define ADC14REFBURST                                      (0x00000004)          /* ADC14 reference buffer burst */
/* ADC14CTL1[ADC14DF] Bits */
#define ADC14DF_OFS                                        ( 3)                  /* ADC14DF Offset */
#define ADC14DF                                            (0x00000008)          /* ADC14 data read-back format */
/* ADC14CTL1[ADC14RES] Bits */
#define ADC14RES_OFS                                       ( 4)                  /* ADC14RES Offset */
#define ADC14RES_M                                         (0x00000030)          /* ADC14 resolution */
#define ADC14RES0                                          (0x00000010)          /* ADC14 resolution */
#define ADC14RES1                                          (0x00000020)          /* ADC14 resolution */
#define ADC14RES_0                                         (0x00000000)          /* 8 bit (9 clock cycle conversion time) */
#define ADC14RES_1                                         (0x00000010)          /* 10 bit (11 clock cycle conversion time) */
#define ADC14RES_2                                         (0x00000020)          /* 12 bit (14 clock cycle conversion time) */
#define ADC14RES_3                                         (0x00000030)          /* 14 bit (16 clock cycle conversion time) */
#define ADC14RES__8BIT                                     (0x00000000)          /* 8 bit (9 clock cycle conversion time) */
#define ADC14RES__10BIT                                    (0x00000010)          /* 10 bit (11 clock cycle conversion time) */
#define ADC14RES__12BIT                                    (0x00000020)          /* 12 bit (14 clock cycle conversion time) */
#define ADC14RES__14BIT                                    (0x00000030)          /* 14 bit (16 clock cycle conversion time) */
/* ADC14CTL1[ADC14CSTARTADD] Bits */
#define ADC14CSTARTADD_OFS                                 (16)                  /* ADC14CSTARTADD Offset */
#define ADC14CSTARTADD_M                                   (0x001f0000)          /* ADC14 conversion start address */
/* ADC14CTL1[ADC14BATMAP] Bits */
#define ADC14BATMAP_OFS                                    (22)                  /* ADC14BATMAP Offset */
#define ADC14BATMAP                                        (0x00400000)          /* Controls 1/2 AVCC ADC input channel selection */
/* ADC14CTL1[ADC14TCMAP] Bits */
#define ADC14TCMAP_OFS                                     (23)                  /* ADC14TCMAP Offset */
#define ADC14TCMAP                                         (0x00800000)          /* Controls temperature sensor ADC input channel selection */
/* ADC14CTL1[ADC14CH0MAP] Bits */
#define ADC14CH0MAP_OFS                                    (24)                  /* ADC14CH0MAP Offset */
#define ADC14CH0MAP                                        (0x01000000)          /* Controls internal channel 0 selection to ADC input channel MAX-2 */
/* ADC14CTL1[ADC14CH1MAP] Bits */
#define ADC14CH1MAP_OFS                                    (25)                  /* ADC14CH1MAP Offset */
#define ADC14CH1MAP                                        (0x02000000)          /* Controls internal channel 1 selection to ADC input channel MAX-3 */
/* ADC14CTL1[ADC14CH2MAP] Bits */
#define ADC14CH2MAP_OFS                                    (26)                  /* ADC14CH2MAP Offset */
#define ADC14CH2MAP                                        (0x04000000)          /* Controls internal channel 2 selection to ADC input channel MAX-4 */
/* ADC14CTL1[ADC14CH3MAP] Bits */
#define ADC14CH3MAP_OFS                                    (27)                  /* ADC14CH3MAP Offset */
#define ADC14CH3MAP                                        (0x08000000)          /* Controls internal channel 3 selection to ADC input channel MAX-5 */
/* ADC14LO0[ADC14LO0] Bits */
#define ADC14LO0_OFS                                       ( 0)                  /* ADC14LO0 Offset */
#define ADC14LO0_M                                         (0x0000ffff)          /* Low threshold 0 */
/* ADC14HI0[ADC14HI0] Bits */
#define ADC14HI0_OFS                                       ( 0)                  /* ADC14HI0 Offset */
#define ADC14HI0_M                                         (0x0000ffff)          /* High threshold 0 */
/* ADC14LO1[ADC14LO1] Bits */
#define ADC14LO1_OFS                                       ( 0)                  /* ADC14LO1 Offset */
#define ADC14LO1_M                                         (0x0000ffff)          /* Low threshold 1 */
/* ADC14HI1[ADC14HI1] Bits */
#define ADC14HI1_OFS                                       ( 0)                  /* ADC14HI1 Offset */
#define ADC14HI1_M                                         (0x0000ffff)          /* High threshold 1 */
/* ADC14MCTL[ADC14INCH] Bits */
#define ADC14INCH_OFS                                      ( 0)                  /* ADC14INCH Offset */
#define ADC14INCH_M                                        (0x0000001f)          /* Input channel select */
#define ADC14INCH0                                         (0x00000001)          /* Input channel select */
#define ADC14INCH1                                         (0x00000002)          /* Input channel select */
#define ADC14INCH2                                         (0x00000004)          /* Input channel select */
#define ADC14INCH3                                         (0x00000008)          /* Input channel select */
#define ADC14INCH4                                         (0x00000010)          /* Input channel select */
#define ADC14INCH_0                                        (0x00000000)          /* If ADC14DIF = 0: A0; If ADC14DIF = 1: Ain+ = A0, Ain- = A1 */
#define ADC14INCH_1                                        (0x00000001)          /* If ADC14DIF = 0: A1; If ADC14DIF = 1: Ain+ = A0, Ain- = A1 */
#define ADC14INCH_2                                        (0x00000002)          /* If ADC14DIF = 0: A2; If ADC14DIF = 1: Ain+ = A2, Ain- = A3 */
#define ADC14INCH_3                                        (0x00000003)          /* If ADC14DIF = 0: A3; If ADC14DIF = 1: Ain+ = A2, Ain- = A3 */
#define ADC14INCH_4                                        (0x00000004)          /* If ADC14DIF = 0: A4; If ADC14DIF = 1: Ain+ = A4, Ain- = A5 */
#define ADC14INCH_5                                        (0x00000005)          /* If ADC14DIF = 0: A5; If ADC14DIF = 1: Ain+ = A4, Ain- = A5 */
#define ADC14INCH_6                                        (0x00000006)          /* If ADC14DIF = 0: A6; If ADC14DIF = 1: Ain+ = A6, Ain- = A7 */
#define ADC14INCH_7                                        (0x00000007)          /* If ADC14DIF = 0: A7; If ADC14DIF = 1: Ain+ = A6, Ain- = A7 */
#define ADC14INCH_8                                        (0x00000008)          /* If ADC14DIF = 0: A8; If ADC14DIF = 1: Ain+ = A8, Ain- = A9 */
#define ADC14INCH_9                                        (0x00000009)          /* If ADC14DIF = 0: A9; If ADC14DIF = 1: Ain+ = A8, Ain- = A9 */
#define ADC14INCH_10                                       (0x0000000a)          /* If ADC14DIF = 0: A10; If ADC14DIF = 1: Ain+ = A10, Ain- = A11 */
#define ADC14INCH_11                                       (0x0000000b)          /* If ADC14DIF = 0: A11; If ADC14DIF = 1: Ain+ = A10, Ain- = A11 */
#define ADC14INCH_12                                       (0x0000000c)          /* If ADC14DIF = 0: A12; If ADC14DIF = 1: Ain+ = A12, Ain- = A13 */
#define ADC14INCH_13                                       (0x0000000d)          /* If ADC14DIF = 0: A13; If ADC14DIF = 1: Ain+ = A12, Ain- = A13 */
#define ADC14INCH_14                                       (0x0000000e)          /* If ADC14DIF = 0: A14; If ADC14DIF = 1: Ain+ = A14, Ain- = A15 */
#define ADC14INCH_15                                       (0x0000000f)          /* If ADC14DIF = 0: A15; If ADC14DIF = 1: Ain+ = A14, Ain- = A15 */
#define ADC14INCH_16                                       (0x00000010)          /* If ADC14DIF = 0: A16; If ADC14DIF = 1: Ain+ = A16, Ain- = A17 */
#define ADC14INCH_17                                       (0x00000011)          /* If ADC14DIF = 0: A17; If ADC14DIF = 1: Ain+ = A16, Ain- = A17 */
#define ADC14INCH_18                                       (0x00000012)          /* If ADC14DIF = 0: A18; If ADC14DIF = 1: Ain+ = A18, Ain- = A19 */
#define ADC14INCH_19                                       (0x00000013)          /* If ADC14DIF = 0: A19; If ADC14DIF = 1: Ain+ = A18, Ain- = A19 */
#define ADC14INCH_20                                       (0x00000014)          /* If ADC14DIF = 0: A20; If ADC14DIF = 1: Ain+ = A20, Ain- = A21 */
#define ADC14INCH_21                                       (0x00000015)          /* If ADC14DIF = 0: A21; If ADC14DIF = 1: Ain+ = A20, Ain- = A21 */
#define ADC14INCH_22                                       (0x00000016)          /* If ADC14DIF = 0: A22; If ADC14DIF = 1: Ain+ = A22, Ain- = A23 */
#define ADC14INCH_23                                       (0x00000017)          /* If ADC14DIF = 0: A23; If ADC14DIF = 1: Ain+ = A22, Ain- = A23 */
#define ADC14INCH_24                                       (0x00000018)          /* If ADC14DIF = 0: A24; If ADC14DIF = 1: Ain+ = A24, Ain- = A25 */
#define ADC14INCH_25                                       (0x00000019)          /* If ADC14DIF = 0: A25; If ADC14DIF = 1: Ain+ = A24, Ain- = A25 */
#define ADC14INCH_26                                       (0x0000001a)          /* If ADC14DIF = 0: A26; If ADC14DIF = 1: Ain+ = A26, Ain- = A27 */
#define ADC14INCH_27                                       (0x0000001b)          /* If ADC14DIF = 0: A27; If ADC14DIF = 1: Ain+ = A26, Ain- = A27 */
#define ADC14INCH_28                                       (0x0000001c)          /* If ADC14DIF = 0: A28; If ADC14DIF = 1: Ain+ = A28, Ain- = A29 */
#define ADC14INCH_29                                       (0x0000001d)          /* If ADC14DIF = 0: A29; If ADC14DIF = 1: Ain+ = A28, Ain- = A29 */
#define ADC14INCH_30                                       (0x0000001e)          /* If ADC14DIF = 0: A30; If ADC14DIF = 1: Ain+ = A30, Ain- = A31 */
#define ADC14INCH_31                                       (0x0000001f)          /* If ADC14DIF = 0: A31; If ADC14DIF = 1: Ain+ = A30, Ain- = A31 */
/* ADC14MCTL[ADC14EOS] Bits */
#define ADC14EOS_OFS                                       ( 7)                  /* ADC14EOS Offset */
#define ADC14EOS                                           (0x00000080)          /* End of sequence */
/* ADC14MCTL[ADC14VRSEL] Bits */
#define ADC14VRSEL_OFS                                     ( 8)                  /* ADC14VRSEL Offset */
#define ADC14VRSEL_M                                       (0x00000f00)          /* Selects combinations of V(R+) and V(R-) sources */
#define ADC14VRSEL0                                        (0x00000100)          /* Selects combinations of V(R+) and V(R-) sources */
#define ADC14VRSEL1                                        (0x00000200)          /* Selects combinations of V(R+) and V(R-) sources */
#define ADC14VRSEL2                                        (0x00000400)          /* Selects combinations of V(R+) and V(R-) sources */
#define ADC14VRSEL3                                        (0x00000800)          /* Selects combinations of V(R+) and V(R-) sources */
#define ADC14VRSEL_0                                       (0x00000000)          /* V(R+) = AVCC, V(R-) = AVSS */
#define ADC14VRSEL_1                                       (0x00000100)          /* V(R+) = VREF buffered, V(R-) = AVSS */
#define ADC14VRSEL_14                                      (0x00000e00)          /* V(R+) = VeREF+, V(R-) = VeREF- */
#define ADC14VRSEL_15                                      (0x00000f00)          /* V(R+) = VeREF+ buffered, V(R-) = VeREF */
/* ADC14MCTL[ADC14DIF] Bits */
#define ADC14DIF_OFS                                       (13)                  /* ADC14DIF Offset */
#define ADC14DIF                                           (0x00002000)          /* Differential mode */
/* ADC14MCTL[ADC14WINC] Bits */
#define ADC14WINC_OFS                                      (14)                  /* ADC14WINC Offset */
#define ADC14WINC                                          (0x00004000)          /* Comparator window enable */
/* ADC14MCTL[ADC14WINCTH] Bits */
#define ADC14WINCTH_OFS                                    (15)                  /* ADC14WINCTH Offset */
#define ADC14WINCTH                                        (0x00008000)          /* Window comparator threshold register selection */
/* ADC14MEM[CONVERSION_RESULTS] Bits */
#define CONVERSION_RESULTS_OFS                             ( 0)                  /* Conversion_Results Offset */
#define CONVERSION_RESULTS_M                               (0x0000ffff)          /* Conversion Result */
/* ADC14IER0[ADC14IE0] Bits */
#define ADC14IE0_OFS                                       ( 0)                  /* ADC14IE0 Offset */
#define ADC14IE0                                           (0x00000001)          /* Interrupt enable */
/* ADC14IER0[ADC14IE1] Bits */
#define ADC14IE1_OFS                                       ( 1)                  /* ADC14IE1 Offset */
#define ADC14IE1                                           (0x00000002)          /* Interrupt enable */
/* ADC14IER0[ADC14IE2] Bits */
#define ADC14IE2_OFS                                       ( 2)                  /* ADC14IE2 Offset */
#define ADC14IE2                                           (0x00000004)          /* Interrupt enable */
/* ADC14IER0[ADC14IE3] Bits */
#define ADC14IE3_OFS                                       ( 3)                  /* ADC14IE3 Offset */
#define ADC14IE3                                           (0x00000008)          /* Interrupt enable */
/* ADC14IER0[ADC14IE4] Bits */
#define ADC14IE4_OFS                                       ( 4)                  /* ADC14IE4 Offset */
#define ADC14IE4                                           (0x00000010)          /* Interrupt enable */
/* ADC14IER0[ADC14IE5] Bits */
#define ADC14IE5_OFS                                       ( 5)                  /* ADC14IE5 Offset */
#define ADC14IE5                                           (0x00000020)          /* Interrupt enable */
/* ADC14IER0[ADC14IE6] Bits */
#define ADC14IE6_OFS                                       ( 6)                  /* ADC14IE6 Offset */
#define ADC14IE6                                           (0x00000040)          /* Interrupt enable */
/* ADC14IER0[ADC14IE7] Bits */
#define ADC14IE7_OFS                                       ( 7)                  /* ADC14IE7 Offset */
#define ADC14IE7                                           (0x00000080)          /* Interrupt enable */
/* ADC14IER0[ADC14IE8] Bits */
#define ADC14IE8_OFS                                       ( 8)                  /* ADC14IE8 Offset */
#define ADC14IE8                                           (0x00000100)          /* Interrupt enable */
/* ADC14IER0[ADC14IE9] Bits */
#define ADC14IE9_OFS                                       ( 9)                  /* ADC14IE9 Offset */
#define ADC14IE9                                           (0x00000200)          /* Interrupt enable */
/* ADC14IER0[ADC14IE10] Bits */
#define ADC14IE10_OFS                                      (10)                  /* ADC14IE10 Offset */
#define ADC14IE10                                          (0x00000400)          /* Interrupt enable */
/* ADC14IER0[ADC14IE11] Bits */
#define ADC14IE11_OFS                                      (11)                  /* ADC14IE11 Offset */
#define ADC14IE11                                          (0x00000800)          /* Interrupt enable */
/* ADC14IER0[ADC14IE12] Bits */
#define ADC14IE12_OFS                                      (12)                  /* ADC14IE12 Offset */
#define ADC14IE12                                          (0x00001000)          /* Interrupt enable */
/* ADC14IER0[ADC14IE13] Bits */
#define ADC14IE13_OFS                                      (13)                  /* ADC14IE13 Offset */
#define ADC14IE13                                          (0x00002000)          /* Interrupt enable */
/* ADC14IER0[ADC14IE14] Bits */
#define ADC14IE14_OFS                                      (14)                  /* ADC14IE14 Offset */
#define ADC14IE14                                          (0x00004000)          /* Interrupt enable */
/* ADC14IER0[ADC14IE15] Bits */
#define ADC14IE15_OFS                                      (15)                  /* ADC14IE15 Offset */
#define ADC14IE15                                          (0x00008000)          /* Interrupt enable */
/* ADC14IER0[ADC14IE16] Bits */
#define ADC14IE16_OFS                                      (16)                  /* ADC14IE16 Offset */
#define ADC14IE16                                          (0x00010000)          /* Interrupt enable */
/* ADC14IER0[ADC14IE17] Bits */
#define ADC14IE17_OFS                                      (17)                  /* ADC14IE17 Offset */
#define ADC14IE17                                          (0x00020000)          /* Interrupt enable */
/* ADC14IER0[ADC14IE19] Bits */
#define ADC14IE19_OFS                                      (19)                  /* ADC14IE19 Offset */
#define ADC14IE19                                          (0x00080000)          /* Interrupt enable */
/* ADC14IER0[ADC14IE18] Bits */
#define ADC14IE18_OFS                                      (18)                  /* ADC14IE18 Offset */
#define ADC14IE18                                          (0x00040000)          /* Interrupt enable */
/* ADC14IER0[ADC14IE20] Bits */
#define ADC14IE20_OFS                                      (20)                  /* ADC14IE20 Offset */
#define ADC14IE20                                          (0x00100000)          /* Interrupt enable */
/* ADC14IER0[ADC14IE21] Bits */
#define ADC14IE21_OFS                                      (21)                  /* ADC14IE21 Offset */
#define ADC14IE21                                          (0x00200000)          /* Interrupt enable */
/* ADC14IER0[ADC14IE22] Bits */
#define ADC14IE22_OFS                                      (22)                  /* ADC14IE22 Offset */
#define ADC14IE22                                          (0x00400000)          /* Interrupt enable */
/* ADC14IER0[ADC14IE23] Bits */
#define ADC14IE23_OFS                                      (23)                  /* ADC14IE23 Offset */
#define ADC14IE23                                          (0x00800000)          /* Interrupt enable */
/* ADC14IER0[ADC14IE24] Bits */
#define ADC14IE24_OFS                                      (24)                  /* ADC14IE24 Offset */
#define ADC14IE24                                          (0x01000000)          /* Interrupt enable */
/* ADC14IER0[ADC14IE25] Bits */
#define ADC14IE25_OFS                                      (25)                  /* ADC14IE25 Offset */
#define ADC14IE25                                          (0x02000000)          /* Interrupt enable */
/* ADC14IER0[ADC14IE26] Bits */
#define ADC14IE26_OFS                                      (26)                  /* ADC14IE26 Offset */
#define ADC14IE26                                          (0x04000000)          /* Interrupt enable */
/* ADC14IER0[ADC14IE27] Bits */
#define ADC14IE27_OFS                                      (27)                  /* ADC14IE27 Offset */
#define ADC14IE27                                          (0x08000000)          /* Interrupt enable */
/* ADC14IER0[ADC14IE28] Bits */
#define ADC14IE28_OFS                                      (28)                  /* ADC14IE28 Offset */
#define ADC14IE28                                          (0x10000000)          /* Interrupt enable */
/* ADC14IER0[ADC14IE29] Bits */
#define ADC14IE29_OFS                                      (29)                  /* ADC14IE29 Offset */
#define ADC14IE29                                          (0x20000000)          /* Interrupt enable */
/* ADC14IER0[ADC14IE30] Bits */
#define ADC14IE30_OFS                                      (30)                  /* ADC14IE30 Offset */
#define ADC14IE30                                          (0x40000000)          /* Interrupt enable */
/* ADC14IER0[ADC14IE31] Bits */
#define ADC14IE31_OFS                                      (31)                  /* ADC14IE31 Offset */
#define ADC14IE31                                          (0x80000000)          /* Interrupt enable */
/* ADC14IER1[ADC14INIE] Bits */
#define ADC14INIE_OFS                                      ( 1)                  /* ADC14INIE Offset */
#define ADC14INIE                                          (0x00000002)          /* Interrupt enable for ADC14MEMx within comparator window */
/* ADC14IER1[ADC14LOIE] Bits */
#define ADC14LOIE_OFS                                      ( 2)                  /* ADC14LOIE Offset */
#define ADC14LOIE                                          (0x00000004)          /* Interrupt enable for ADC14MEMx below comparator window */
/* ADC14IER1[ADC14HIIE] Bits */
#define ADC14HIIE_OFS                                      ( 3)                  /* ADC14HIIE Offset */
#define ADC14HIIE                                          (0x00000008)          /* Interrupt enable for ADC14MEMx above comparator window */
/* ADC14IER1[ADC14OVIE] Bits */
#define ADC14OVIE_OFS                                      ( 4)                  /* ADC14OVIE Offset */
#define ADC14OVIE                                          (0x00000010)          /* ADC14MEMx overflow-interrupt enable */
/* ADC14IER1[ADC14TOVIE] Bits */
#define ADC14TOVIE_OFS                                     ( 5)                  /* ADC14TOVIE Offset */
#define ADC14TOVIE                                         (0x00000020)          /* ADC14 conversion-time-overflow interrupt enable */
/* ADC14IER1[ADC14RDYIE] Bits */
#define ADC14RDYIE_OFS                                     ( 6)                  /* ADC14RDYIE Offset */
#define ADC14RDYIE                                         (0x00000040)          /* ADC14 local buffered reference ready interrupt enable */
/* ADC14IFGR0[ADC14IFG0] Bits */
#define ADC14IFG0_OFS                                      ( 0)                  /* ADC14IFG0 Offset */
#define ADC14IFG0                                          (0x00000001)          /* ADC14MEM0 interrupt flag */
/* ADC14IFGR0[ADC14IFG1] Bits */
#define ADC14IFG1_OFS                                      ( 1)                  /* ADC14IFG1 Offset */
#define ADC14IFG1                                          (0x00000002)          /* ADC14MEM1 interrupt flag */
/* ADC14IFGR0[ADC14IFG2] Bits */
#define ADC14IFG2_OFS                                      ( 2)                  /* ADC14IFG2 Offset */
#define ADC14IFG2                                          (0x00000004)          /* ADC14MEM2 interrupt flag */
/* ADC14IFGR0[ADC14IFG3] Bits */
#define ADC14IFG3_OFS                                      ( 3)                  /* ADC14IFG3 Offset */
#define ADC14IFG3                                          (0x00000008)          /* ADC14MEM3 interrupt flag */
/* ADC14IFGR0[ADC14IFG4] Bits */
#define ADC14IFG4_OFS                                      ( 4)                  /* ADC14IFG4 Offset */
#define ADC14IFG4                                          (0x00000010)          /* ADC14MEM4 interrupt flag */
/* ADC14IFGR0[ADC14IFG5] Bits */
#define ADC14IFG5_OFS                                      ( 5)                  /* ADC14IFG5 Offset */
#define ADC14IFG5                                          (0x00000020)          /* ADC14MEM5 interrupt flag */
/* ADC14IFGR0[ADC14IFG6] Bits */
#define ADC14IFG6_OFS                                      ( 6)                  /* ADC14IFG6 Offset */
#define ADC14IFG6                                          (0x00000040)          /* ADC14MEM6 interrupt flag */
/* ADC14IFGR0[ADC14IFG7] Bits */
#define ADC14IFG7_OFS                                      ( 7)                  /* ADC14IFG7 Offset */
#define ADC14IFG7                                          (0x00000080)          /* ADC14MEM7 interrupt flag */
/* ADC14IFGR0[ADC14IFG8] Bits */
#define ADC14IFG8_OFS                                      ( 8)                  /* ADC14IFG8 Offset */
#define ADC14IFG8                                          (0x00000100)          /* ADC14MEM8 interrupt flag */
/* ADC14IFGR0[ADC14IFG9] Bits */
#define ADC14IFG9_OFS                                      ( 9)                  /* ADC14IFG9 Offset */
#define ADC14IFG9                                          (0x00000200)          /* ADC14MEM9 interrupt flag */
/* ADC14IFGR0[ADC14IFG10] Bits */
#define ADC14IFG10_OFS                                     (10)                  /* ADC14IFG10 Offset */
#define ADC14IFG10                                         (0x00000400)          /* ADC14MEM10 interrupt flag */
/* ADC14IFGR0[ADC14IFG11] Bits */
#define ADC14IFG11_OFS                                     (11)                  /* ADC14IFG11 Offset */
#define ADC14IFG11                                         (0x00000800)          /* ADC14MEM11 interrupt flag */
/* ADC14IFGR0[ADC14IFG12] Bits */
#define ADC14IFG12_OFS                                     (12)                  /* ADC14IFG12 Offset */
#define ADC14IFG12                                         (0x00001000)          /* ADC14MEM12 interrupt flag */
/* ADC14IFGR0[ADC14IFG13] Bits */
#define ADC14IFG13_OFS                                     (13)                  /* ADC14IFG13 Offset */
#define ADC14IFG13                                         (0x00002000)          /* ADC14MEM13 interrupt flag */
/* ADC14IFGR0[ADC14IFG14] Bits */
#define ADC14IFG14_OFS                                     (14)                  /* ADC14IFG14 Offset */
#define ADC14IFG14                                         (0x00004000)          /* ADC14MEM14 interrupt flag */
/* ADC14IFGR0[ADC14IFG15] Bits */
#define ADC14IFG15_OFS                                     (15)                  /* ADC14IFG15 Offset */
#define ADC14IFG15                                         (0x00008000)          /* ADC14MEM15 interrupt flag */
/* ADC14IFGR0[ADC14IFG16] Bits */
#define ADC14IFG16_OFS                                     (16)                  /* ADC14IFG16 Offset */
#define ADC14IFG16                                         (0x00010000)          /* ADC14MEM16 interrupt flag */
/* ADC14IFGR0[ADC14IFG17] Bits */
#define ADC14IFG17_OFS                                     (17)                  /* ADC14IFG17 Offset */
#define ADC14IFG17                                         (0x00020000)          /* ADC14MEM17 interrupt flag */
/* ADC14IFGR0[ADC14IFG18] Bits */
#define ADC14IFG18_OFS                                     (18)                  /* ADC14IFG18 Offset */
#define ADC14IFG18                                         (0x00040000)          /* ADC14MEM18 interrupt flag */
/* ADC14IFGR0[ADC14IFG19] Bits */
#define ADC14IFG19_OFS                                     (19)                  /* ADC14IFG19 Offset */
#define ADC14IFG19                                         (0x00080000)          /* ADC14MEM19 interrupt flag */
/* ADC14IFGR0[ADC14IFG20] Bits */
#define ADC14IFG20_OFS                                     (20)                  /* ADC14IFG20 Offset */
#define ADC14IFG20                                         (0x00100000)          /* ADC14MEM20 interrupt flag */
/* ADC14IFGR0[ADC14IFG21] Bits */
#define ADC14IFG21_OFS                                     (21)                  /* ADC14IFG21 Offset */
#define ADC14IFG21                                         (0x00200000)          /* ADC14MEM21 interrupt flag */
/* ADC14IFGR0[ADC14IFG22] Bits */
#define ADC14IFG22_OFS                                     (22)                  /* ADC14IFG22 Offset */
#define ADC14IFG22                                         (0x00400000)          /* ADC14MEM22 interrupt flag */
/* ADC14IFGR0[ADC14IFG23] Bits */
#define ADC14IFG23_OFS                                     (23)                  /* ADC14IFG23 Offset */
#define ADC14IFG23                                         (0x00800000)          /* ADC14MEM23 interrupt flag */
/* ADC14IFGR0[ADC14IFG24] Bits */
#define ADC14IFG24_OFS                                     (24)                  /* ADC14IFG24 Offset */
#define ADC14IFG24                                         (0x01000000)          /* ADC14MEM24 interrupt flag */
/* ADC14IFGR0[ADC14IFG25] Bits */
#define ADC14IFG25_OFS                                     (25)                  /* ADC14IFG25 Offset */
#define ADC14IFG25                                         (0x02000000)          /* ADC14MEM25 interrupt flag */
/* ADC14IFGR0[ADC14IFG26] Bits */
#define ADC14IFG26_OFS                                     (26)                  /* ADC14IFG26 Offset */
#define ADC14IFG26                                         (0x04000000)          /* ADC14MEM26 interrupt flag */
/* ADC14IFGR0[ADC14IFG27] Bits */
#define ADC14IFG27_OFS                                     (27)                  /* ADC14IFG27 Offset */
#define ADC14IFG27                                         (0x08000000)          /* ADC14MEM27 interrupt flag */
/* ADC14IFGR0[ADC14IFG28] Bits */
#define ADC14IFG28_OFS                                     (28)                  /* ADC14IFG28 Offset */
#define ADC14IFG28                                         (0x10000000)          /* ADC14MEM28 interrupt flag */
/* ADC14IFGR0[ADC14IFG29] Bits */
#define ADC14IFG29_OFS                                     (29)                  /* ADC14IFG29 Offset */
#define ADC14IFG29                                         (0x20000000)          /* ADC14MEM29 interrupt flag */
/* ADC14IFGR0[ADC14IFG30] Bits */
#define ADC14IFG30_OFS                                     (30)                  /* ADC14IFG30 Offset */
#define ADC14IFG30                                         (0x40000000)          /* ADC14MEM30 interrupt flag */
/* ADC14IFGR0[ADC14IFG31] Bits */
#define ADC14IFG31_OFS                                     (31)                  /* ADC14IFG31 Offset */
#define ADC14IFG31                                         (0x80000000)          /* ADC14MEM31 interrupt flag */
/* ADC14IFGR1[ADC14INIFG] Bits */
#define ADC14INIFG_OFS                                     ( 1)                  /* ADC14INIFG Offset */
#define ADC14INIFG                                         (0x00000002)          /* Interrupt flag for ADC14MEMx within comparator window */
/* ADC14IFGR1[ADC14LOIFG] Bits */
#define ADC14LOIFG_OFS                                     ( 2)                  /* ADC14LOIFG Offset */
#define ADC14LOIFG                                         (0x00000004)          /* Interrupt flag for ADC14MEMx below comparator window */
/* ADC14IFGR1[ADC14HIIFG] Bits */
#define ADC14HIIFG_OFS                                     ( 3)                  /* ADC14HIIFG Offset */
#define ADC14HIIFG                                         (0x00000008)          /* Interrupt flag for ADC14MEMx above comparator window */
/* ADC14IFGR1[ADC14OVIFG] Bits */
#define ADC14OVIFG_OFS                                     ( 4)                  /* ADC14OVIFG Offset */
#define ADC14OVIFG                                         (0x00000010)          /* ADC14MEMx overflow interrupt flag */
/* ADC14IFGR1[ADC14TOVIFG] Bits */
#define ADC14TOVIFG_OFS                                    ( 5)                  /* ADC14TOVIFG Offset */
#define ADC14TOVIFG                                        (0x00000020)          /* ADC14 conversion time overflow interrupt flag */
/* ADC14IFGR1[ADC14RDYIFG] Bits */
#define ADC14RDYIFG_OFS                                    ( 6)                  /* ADC14RDYIFG Offset */
#define ADC14RDYIFG                                        (0x00000040)          /* ADC14 local buffered reference ready interrupt flag */
/* ADC14CLRIFGR0[CLRADC14IFG0] Bits */
#define CLRADC14IFG0_OFS                                   ( 0)                  /* CLRADC14IFG0 Offset */
#define CLRADC14IFG0                                       (0x00000001)          /* clear ADC14IFG0 */
/* ADC14CLRIFGR0[CLRADC14IFG1] Bits */
#define CLRADC14IFG1_OFS                                   ( 1)                  /* CLRADC14IFG1 Offset */
#define CLRADC14IFG1                                       (0x00000002)          /* clear ADC14IFG1 */
/* ADC14CLRIFGR0[CLRADC14IFG2] Bits */
#define CLRADC14IFG2_OFS                                   ( 2)                  /* CLRADC14IFG2 Offset */
#define CLRADC14IFG2                                       (0x00000004)          /* clear ADC14IFG2 */
/* ADC14CLRIFGR0[CLRADC14IFG3] Bits */
#define CLRADC14IFG3_OFS                                   ( 3)                  /* CLRADC14IFG3 Offset */
#define CLRADC14IFG3                                       (0x00000008)          /* clear ADC14IFG3 */
/* ADC14CLRIFGR0[CLRADC14IFG4] Bits */
#define CLRADC14IFG4_OFS                                   ( 4)                  /* CLRADC14IFG4 Offset */
#define CLRADC14IFG4                                       (0x00000010)          /* clear ADC14IFG4 */
/* ADC14CLRIFGR0[CLRADC14IFG5] Bits */
#define CLRADC14IFG5_OFS                                   ( 5)                  /* CLRADC14IFG5 Offset */
#define CLRADC14IFG5                                       (0x00000020)          /* clear ADC14IFG5 */
/* ADC14CLRIFGR0[CLRADC14IFG6] Bits */
#define CLRADC14IFG6_OFS                                   ( 6)                  /* CLRADC14IFG6 Offset */
#define CLRADC14IFG6                                       (0x00000040)          /* clear ADC14IFG6 */
/* ADC14CLRIFGR0[CLRADC14IFG7] Bits */
#define CLRADC14IFG7_OFS                                   ( 7)                  /* CLRADC14IFG7 Offset */
#define CLRADC14IFG7                                       (0x00000080)          /* clear ADC14IFG7 */
/* ADC14CLRIFGR0[CLRADC14IFG8] Bits */
#define CLRADC14IFG8_OFS                                   ( 8)                  /* CLRADC14IFG8 Offset */
#define CLRADC14IFG8                                       (0x00000100)          /* clear ADC14IFG8 */
/* ADC14CLRIFGR0[CLRADC14IFG9] Bits */
#define CLRADC14IFG9_OFS                                   ( 9)                  /* CLRADC14IFG9 Offset */
#define CLRADC14IFG9                                       (0x00000200)          /* clear ADC14IFG9 */
/* ADC14CLRIFGR0[CLRADC14IFG10] Bits */
#define CLRADC14IFG10_OFS                                  (10)                  /* CLRADC14IFG10 Offset */
#define CLRADC14IFG10                                      (0x00000400)          /* clear ADC14IFG10 */
/* ADC14CLRIFGR0[CLRADC14IFG11] Bits */
#define CLRADC14IFG11_OFS                                  (11)                  /* CLRADC14IFG11 Offset */
#define CLRADC14IFG11                                      (0x00000800)          /* clear ADC14IFG11 */
/* ADC14CLRIFGR0[CLRADC14IFG12] Bits */
#define CLRADC14IFG12_OFS                                  (12)                  /* CLRADC14IFG12 Offset */
#define CLRADC14IFG12                                      (0x00001000)          /* clear ADC14IFG12 */
/* ADC14CLRIFGR0[CLRADC14IFG13] Bits */
#define CLRADC14IFG13_OFS                                  (13)                  /* CLRADC14IFG13 Offset */
#define CLRADC14IFG13                                      (0x00002000)          /* clear ADC14IFG13 */
/* ADC14CLRIFGR0[CLRADC14IFG14] Bits */
#define CLRADC14IFG14_OFS                                  (14)                  /* CLRADC14IFG14 Offset */
#define CLRADC14IFG14                                      (0x00004000)          /* clear ADC14IFG14 */
/* ADC14CLRIFGR0[CLRADC14IFG15] Bits */
#define CLRADC14IFG15_OFS                                  (15)                  /* CLRADC14IFG15 Offset */
#define CLRADC14IFG15                                      (0x00008000)          /* clear ADC14IFG15 */
/* ADC14CLRIFGR0[CLRADC14IFG16] Bits */
#define CLRADC14IFG16_OFS                                  (16)                  /* CLRADC14IFG16 Offset */
#define CLRADC14IFG16                                      (0x00010000)          /* clear ADC14IFG16 */
/* ADC14CLRIFGR0[CLRADC14IFG17] Bits */
#define CLRADC14IFG17_OFS                                  (17)                  /* CLRADC14IFG17 Offset */
#define CLRADC14IFG17                                      (0x00020000)          /* clear ADC14IFG17 */
/* ADC14CLRIFGR0[CLRADC14IFG18] Bits */
#define CLRADC14IFG18_OFS                                  (18)                  /* CLRADC14IFG18 Offset */
#define CLRADC14IFG18                                      (0x00040000)          /* clear ADC14IFG18 */
/* ADC14CLRIFGR0[CLRADC14IFG19] Bits */
#define CLRADC14IFG19_OFS                                  (19)                  /* CLRADC14IFG19 Offset */
#define CLRADC14IFG19                                      (0x00080000)          /* clear ADC14IFG19 */
/* ADC14CLRIFGR0[CLRADC14IFG20] Bits */
#define CLRADC14IFG20_OFS                                  (20)                  /* CLRADC14IFG20 Offset */
#define CLRADC14IFG20                                      (0x00100000)          /* clear ADC14IFG20 */
/* ADC14CLRIFGR0[CLRADC14IFG21] Bits */
#define CLRADC14IFG21_OFS                                  (21)                  /* CLRADC14IFG21 Offset */
#define CLRADC14IFG21                                      (0x00200000)          /* clear ADC14IFG21 */
/* ADC14CLRIFGR0[CLRADC14IFG22] Bits */
#define CLRADC14IFG22_OFS                                  (22)                  /* CLRADC14IFG22 Offset */
#define CLRADC14IFG22                                      (0x00400000)          /* clear ADC14IFG22 */
/* ADC14CLRIFGR0[CLRADC14IFG23] Bits */
#define CLRADC14IFG23_OFS                                  (23)                  /* CLRADC14IFG23 Offset */
#define CLRADC14IFG23                                      (0x00800000)          /* clear ADC14IFG23 */
/* ADC14CLRIFGR0[CLRADC14IFG24] Bits */
#define CLRADC14IFG24_OFS                                  (24)                  /* CLRADC14IFG24 Offset */
#define CLRADC14IFG24                                      (0x01000000)          /* clear ADC14IFG24 */
/* ADC14CLRIFGR0[CLRADC14IFG25] Bits */
#define CLRADC14IFG25_OFS                                  (25)                  /* CLRADC14IFG25 Offset */
#define CLRADC14IFG25                                      (0x02000000)          /* clear ADC14IFG25 */
/* ADC14CLRIFGR0[CLRADC14IFG26] Bits */
#define CLRADC14IFG26_OFS                                  (26)                  /* CLRADC14IFG26 Offset */
#define CLRADC14IFG26                                      (0x04000000)          /* clear ADC14IFG26 */
/* ADC14CLRIFGR0[CLRADC14IFG27] Bits */
#define CLRADC14IFG27_OFS                                  (27)                  /* CLRADC14IFG27 Offset */
#define CLRADC14IFG27                                      (0x08000000)          /* clear ADC14IFG27 */
/* ADC14CLRIFGR0[CLRADC14IFG28] Bits */
#define CLRADC14IFG28_OFS                                  (28)                  /* CLRADC14IFG28 Offset */
#define CLRADC14IFG28                                      (0x10000000)          /* clear ADC14IFG28 */
/* ADC14CLRIFGR0[CLRADC14IFG29] Bits */
#define CLRADC14IFG29_OFS                                  (29)                  /* CLRADC14IFG29 Offset */
#define CLRADC14IFG29                                      (0x20000000)          /* clear ADC14IFG29 */
/* ADC14CLRIFGR0[CLRADC14IFG30] Bits */
#define CLRADC14IFG30_OFS                                  (30)                  /* CLRADC14IFG30 Offset */
#define CLRADC14IFG30                                      (0x40000000)          /* clear ADC14IFG30 */
/* ADC14CLRIFGR0[CLRADC14IFG31] Bits */
#define CLRADC14IFG31_OFS                                  (31)                  /* CLRADC14IFG31 Offset */
#define CLRADC14IFG31                                      (0x80000000)          /* clear ADC14IFG31 */
/* ADC14CLRIFGR1[CLRADC14INIFG] Bits */
#define CLRADC14INIFG_OFS                                  ( 1)                  /* CLRADC14INIFG Offset */
#define CLRADC14INIFG                                      (0x00000002)          /* clear ADC14INIFG */
/* ADC14CLRIFGR1[CLRADC14LOIFG] Bits */
#define CLRADC14LOIFG_OFS                                  ( 2)                  /* CLRADC14LOIFG Offset */
#define CLRADC14LOIFG                                      (0x00000004)          /* clear ADC14LOIFG */
/* ADC14CLRIFGR1[CLRADC14HIIFG] Bits */
#define CLRADC14HIIFG_OFS                                  ( 3)                  /* CLRADC14HIIFG Offset */
#define CLRADC14HIIFG                                      (0x00000008)          /* clear ADC14HIIFG */
/* ADC14CLRIFGR1[CLRADC14OVIFG] Bits */
#define CLRADC14OVIFG_OFS                                  ( 4)                  /* CLRADC14OVIFG Offset */
#define CLRADC14OVIFG                                      (0x00000010)          /* clear ADC14OVIFG */
/* ADC14CLRIFGR1[CLRADC14TOVIFG] Bits */
#define CLRADC14TOVIFG_OFS                                 ( 5)                  /* CLRADC14TOVIFG Offset */
#define CLRADC14TOVIFG                                     (0x00000020)          /* clear ADC14TOVIFG */
/* ADC14CLRIFGR1[CLRADC14RDYIFG] Bits */
#define CLRADC14RDYIFG_OFS                                 ( 6)                  /* CLRADC14RDYIFG Offset */
#define CLRADC14RDYIFG                                     (0x00000040)          /* clear ADC14RDYIFG */


//*****************************************************************************
// AES256 Bits
//*****************************************************************************
/* AESACTL0[AESOP] Bits */
#define AESOP0                                             (0x0001)              /* AESOP Bit 0 */
#define AESOP1                                             (0x0002)              /* AESOP Bit 1 */
/* AESACTL0[AESOP] Bits */
#define AESOP_OFS                                          ( 0)                  /* AESOPx Offset */
#define AESOP_M                                            (0x0003)              /* AES operation */
//#define AESOP0                                             (0x0001)              /* AES operation */
//#define AESOP1                                             (0x0002)              /* AES operation */
#define AESOP_0                                            (0x0000)              /* Encryption */
#define AESOP_1                                            (0x0001)              /* Decryption. The provided key is the same key used for encryption */
#define AESOP_2                                            (0x0002)              /* Generate first round key required for decryption */
#define AESOP_3                                            (0x0003)              /* Decryption. The provided key is the first round key required for decryption */
/* AESACTL0[AESKL] Bits */
#define AESKL0                                             (0x0004)              /* AESKL Bit 0 */
#define AESKL1                                             (0x0008)              /* AESKL Bit 1 */
/* AESACTL0[AESKL] Bits */
#define AESKL_OFS                                          ( 2)                  /* AESKLx Offset */
#define AESKL_M                                            (0x000c)              /* AES key length */
//#define AESKL0                                             (0x0004)              /* AES key length */
//#define AESKL1                                             (0x0008)              /* AES key length */
#define AESKL_0                                            (0x0000)              /* AES128. The key size is 128 bit */
#define AESKL_1                                            (0x0004)              /* AES192. The key size is 192 bit. */
#define AESKL_2                                            (0x0008)              /* AES256. The key size is 256 bit */
#define AESKL__128BIT                                      (0x0000)              /* AES128. The key size is 128 bit */
#define AESKL__192BIT                                      (0x0004)              /* AES192. The key size is 192 bit. */
#define AESKL__256BIT                                      (0x0008)              /* AES256. The key size is 256 bit */
/* AESACTL0[AESCM] Bits */
#define AESCM0                                             (0x0020)              /* AESCM Bit 0 */
#define AESCM1                                             (0x0040)              /* AESCM Bit 1 */
/* AESACTL0[AESCM] Bits */
#define AESCM_OFS                                          ( 5)                  /* AESCMx Offset */
#define AESCM_M                                            (0x0060)              /* AES cipher mode select */
//#define AESCM0                                             (0x0020)              /* AES cipher mode select */
//#define AESCM1                                             (0x0040)              /* AES cipher mode select */
#define AESCM_0                                            (0x0000)              /* ECB */
#define AESCM_1                                            (0x0020)              /* CBC */
#define AESCM_2                                            (0x0040)              /* OFB */
#define AESCM_3                                            (0x0060)              /* CFB */
#define AESCM__ECB                                         (0x0000)              /* ECB */
#define AESCM__CBC                                         (0x0020)              /* CBC */
#define AESCM__OFB                                         (0x0040)              /* OFB */
#define AESCM__CFB                                         (0x0060)              /* CFB */
/* AESACTL0[AESSWRST] Bits */
#define AESSWRST_OFS                                       ( 7)                  /* AESSWRST Offset */
#define AESSWRST                                           (0x0080)              /* AES software reset */
/* AESACTL0[AESRDYIFG] Bits */
#define AESRDYIFG_OFS                                      ( 8)                  /* AESRDYIFG Offset */
#define AESRDYIFG                                          (0x0100)              /* AES ready interrupt flag */
/* AESACTL0[AESERRFG] Bits */
#define AESERRFG_OFS                                       (11)                  /* AESERRFG Offset */
#define AESERRFG                                           (0x0800)              /* AES error flag */
/* AESACTL0[AESRDYIE] Bits */
#define AESRDYIE_OFS                                       (12)                  /* AESRDYIE Offset */
#define AESRDYIE                                           (0x1000)              /* AES ready interrupt enable */
/* AESACTL0[AESCMEN] Bits */
#define AESCMEN_OFS                                        (15)                  /* AESCMEN Offset */
#define AESCMEN                                            (0x8000)              /* AES cipher mode enable */
/* AESACTL1[AESBLKCNT] Bits */
#define AESBLKCNT0                                         (0x0001)              /* AESBLKCNT Bit 0 */
#define AESBLKCNT1                                         (0x0002)              /* AESBLKCNT Bit 1 */
#define AESBLKCNT2                                         (0x0004)              /* AESBLKCNT Bit 2 */
#define AESBLKCNT3                                         (0x0008)              /* AESBLKCNT Bit 3 */
#define AESBLKCNT4                                         (0x0010)              /* AESBLKCNT Bit 4 */
#define AESBLKCNT5                                         (0x0020)              /* AESBLKCNT Bit 5 */
#define AESBLKCNT6                                         (0x0040)              /* AESBLKCNT Bit 6 */
#define AESBLKCNT7                                         (0x0080)              /* AESBLKCNT Bit 7 */
/* AESACTL1[AESBLKCNT] Bits */
#define AESBLKCNT_OFS                                      ( 0)                  /* AESBLKCNTx Offset */
#define AESBLKCNT_M                                        (0x00ff)              /* Cipher Block Counter */
/* AESASTAT[AESBUSY] Bits */
#define AESBUSY_OFS                                        ( 0)                  /* AESBUSY Offset */
#define AESBUSY                                            (0x0001)              /* AES accelerator module busy */
/* AESASTAT[AESKEYWR] Bits */
#define AESKEYWR_OFS                                       ( 1)                  /* AESKEYWR Offset */
#define AESKEYWR                                           (0x0002)              /* All 16 bytes written to AESAKEY */
/* AESASTAT[AESDINWR] Bits */
#define AESDINWR_OFS                                       ( 2)                  /* AESDINWR Offset */
#define AESDINWR                                           (0x0004)              /* All 16 bytes written to AESADIN, AESAXDIN or AESAXIN */
/* AESASTAT[AESDOUTRD] Bits */
#define AESDOUTRD_OFS                                      ( 3)                  /* AESDOUTRD Offset */
#define AESDOUTRD                                          (0x0008)              /* All 16 bytes read from AESADOUT */
/* AESASTAT[AESKEYCNT] Bits */
#define AESKEYCNT0                                         (0x0010)              /* AESKEYCNT Bit 0 */
#define AESKEYCNT1                                         (0x0020)              /* AESKEYCNT Bit 1 */
#define AESKEYCNT2                                         (0x0040)              /* AESKEYCNT Bit 2 */
#define AESKEYCNT3                                         (0x0080)              /* AESKEYCNT Bit 3 */
/* AESASTAT[AESKEYCNT] Bits */
#define AESKEYCNT_OFS                                      ( 4)                  /* AESKEYCNTx Offset */
#define AESKEYCNT_M                                        (0x00f0)              /* Bytes written via AESAKEY for AESKLx=00, half-words written via AESAKEY */
/* AESASTAT[AESDINCNT] Bits */
#define AESDINCNT0                                         (0x0100)              /* AESDINCNT Bit 0 */
#define AESDINCNT1                                         (0x0200)              /* AESDINCNT Bit 1 */
#define AESDINCNT2                                         (0x0400)              /* AESDINCNT Bit 2 */
#define AESDINCNT3                                         (0x0800)              /* AESDINCNT Bit 3 */
/* AESASTAT[AESDINCNT] Bits */
#define AESDINCNT_OFS                                      ( 8)                  /* AESDINCNTx Offset */
#define AESDINCNT_M                                        (0x0f00)              /* Bytes written via AESADIN, AESAXDIN or AESAXIN */
/* AESASTAT[AESDOUTCNT] Bits */
#define AESDOUTCNT0                                        (0x1000)              /* AESDOUTCNT Bit 0 */
#define AESDOUTCNT1                                        (0x2000)              /* AESDOUTCNT Bit 1 */
#define AESDOUTCNT2                                        (0x4000)              /* AESDOUTCNT Bit 2 */
#define AESDOUTCNT3                                        (0x8000)              /* AESDOUTCNT Bit 3 */
/* AESASTAT[AESDOUTCNT] Bits */
#define AESDOUTCNT_OFS                                     (12)                  /* AESDOUTCNTx Offset */
#define AESDOUTCNT_M                                       (0xf000)              /* Bytes read via AESADOUT */
/* AESAKEY[AESKEY0] Bits */
#define AESKEY00                                           (0x0001)              /* AESKEY0 Bit 0 */
#define AESKEY01                                           (0x0002)              /* AESKEY0 Bit 1 */
#define AESKEY02                                           (0x0004)              /* AESKEY0 Bit 2 */
#define AESKEY03                                           (0x0008)              /* AESKEY0 Bit 3 */
#define AESKEY04                                           (0x0010)              /* AESKEY0 Bit 4 */
#define AESKEY05                                           (0x0020)              /* AESKEY0 Bit 5 */
#define AESKEY06                                           (0x0040)              /* AESKEY0 Bit 6 */
#define AESKEY07                                           (0x0080)              /* AESKEY0 Bit 7 */
/* AESAKEY[AESKEY0] Bits */
#define AESKEY0_OFS                                        ( 0)                  /* AESKEY0x Offset */
#define AESKEY0_M                                          (0x00ff)              /* AES key byte n when AESAKEY is written as half-word */
/* AESAKEY[AESKEY1] Bits */
#define AESKEY10                                           (0x0100)              /* AESKEY1 Bit 0 */
#define AESKEY11                                           (0x0200)              /* AESKEY1 Bit 1 */
#define AESKEY12                                           (0x0400)              /* AESKEY1 Bit 2 */
#define AESKEY13                                           (0x0800)              /* AESKEY1 Bit 3 */
#define AESKEY14                                           (0x1000)              /* AESKEY1 Bit 4 */
#define AESKEY15                                           (0x2000)              /* AESKEY1 Bit 5 */
#define AESKEY16                                           (0x4000)              /* AESKEY1 Bit 6 */
#define AESKEY17                                           (0x8000)              /* AESKEY1 Bit 7 */
/* AESAKEY[AESKEY1] Bits */
#define AESKEY1_OFS                                        ( 8)                  /* AESKEY1x Offset */
#define AESKEY1_M                                          (0xff00)              /* AES key byte n+1 when AESAKEY is written as half-word */
/* AESADIN[AESDIN0] Bits */
#define AESDIN00                                           (0x0001)              /* AESDIN0 Bit 0 */
#define AESDIN01                                           (0x0002)              /* AESDIN0 Bit 1 */
#define AESDIN02                                           (0x0004)              /* AESDIN0 Bit 2 */
#define AESDIN03                                           (0x0008)              /* AESDIN0 Bit 3 */
#define AESDIN04                                           (0x0010)              /* AESDIN0 Bit 4 */
#define AESDIN05                                           (0x0020)              /* AESDIN0 Bit 5 */
#define AESDIN06                                           (0x0040)              /* AESDIN0 Bit 6 */
#define AESDIN07                                           (0x0080)              /* AESDIN0 Bit 7 */
/* AESADIN[AESDIN0] Bits */
#define AESDIN0_OFS                                        ( 0)                  /* AESDIN0x Offset */
#define AESDIN0_M                                          (0x00ff)              /* AES data in byte n when AESADIN is written as half-word */
/* AESADIN[AESDIN1] Bits */
#define AESDIN10                                           (0x0100)              /* AESDIN1 Bit 0 */
#define AESDIN11                                           (0x0200)              /* AESDIN1 Bit 1 */
#define AESDIN12                                           (0x0400)              /* AESDIN1 Bit 2 */
#define AESDIN13                                           (0x0800)              /* AESDIN1 Bit 3 */
#define AESDIN14                                           (0x1000)              /* AESDIN1 Bit 4 */
#define AESDIN15                                           (0x2000)              /* AESDIN1 Bit 5 */
#define AESDIN16                                           (0x4000)              /* AESDIN1 Bit 6 */
#define AESDIN17                                           (0x8000)              /* AESDIN1 Bit 7 */
/* AESADIN[AESDIN1] Bits */
#define AESDIN1_OFS                                        ( 8)                  /* AESDIN1x Offset */
#define AESDIN1_M                                          (0xff00)              /* AES data in byte n+1 when AESADIN is written as half-word */
/* AESADOUT[AESDOUT0] Bits */
#define AESDOUT00                                          (0x0001)              /* AESDOUT0 Bit 0 */
#define AESDOUT01                                          (0x0002)              /* AESDOUT0 Bit 1 */
#define AESDOUT02                                          (0x0004)              /* AESDOUT0 Bit 2 */
#define AESDOUT03                                          (0x0008)              /* AESDOUT0 Bit 3 */
#define AESDOUT04                                          (0x0010)              /* AESDOUT0 Bit 4 */
#define AESDOUT05                                          (0x0020)              /* AESDOUT0 Bit 5 */
#define AESDOUT06                                          (0x0040)              /* AESDOUT0 Bit 6 */
#define AESDOUT07                                          (0x0080)              /* AESDOUT0 Bit 7 */
/* AESADOUT[AESDOUT0] Bits */
#define AESDOUT0_OFS                                       ( 0)                  /* AESDOUT0x Offset */
#define AESDOUT0_M                                         (0x00ff)              /* AES data out byte n when AESADOUT is read as half-word */
/* AESADOUT[AESDOUT1] Bits */
#define AESDOUT10                                          (0x0100)              /* AESDOUT1 Bit 0 */
#define AESDOUT11                                          (0x0200)              /* AESDOUT1 Bit 1 */
#define AESDOUT12                                          (0x0400)              /* AESDOUT1 Bit 2 */
#define AESDOUT13                                          (0x0800)              /* AESDOUT1 Bit 3 */
#define AESDOUT14                                          (0x1000)              /* AESDOUT1 Bit 4 */
#define AESDOUT15                                          (0x2000)              /* AESDOUT1 Bit 5 */
#define AESDOUT16                                          (0x4000)              /* AESDOUT1 Bit 6 */
#define AESDOUT17                                          (0x8000)              /* AESDOUT1 Bit 7 */
/* AESADOUT[AESDOUT1] Bits */
#define AESDOUT1_OFS                                       ( 8)                  /* AESDOUT1x Offset */
#define AESDOUT1_M                                         (0xff00)              /* AES data out byte n+1 when AESADOUT is read as half-word */
/* AESAXDIN[AESXDIN0] Bits */
#define AESXDIN00                                          (0x0001)              /* AESXDIN0 Bit 0 */
#define AESXDIN01                                          (0x0002)              /* AESXDIN0 Bit 1 */
#define AESXDIN02                                          (0x0004)              /* AESXDIN0 Bit 2 */
#define AESXDIN03                                          (0x0008)              /* AESXDIN0 Bit 3 */
#define AESXDIN04                                          (0x0010)              /* AESXDIN0 Bit 4 */
#define AESXDIN05                                          (0x0020)              /* AESXDIN0 Bit 5 */
#define AESXDIN06                                          (0x0040)              /* AESXDIN0 Bit 6 */
#define AESXDIN07                                          (0x0080)              /* AESXDIN0 Bit 7 */
/* AESAXDIN[AESXDIN0] Bits */
#define AESXDIN0_OFS                                       ( 0)                  /* AESXDIN0x Offset */
#define AESXDIN0_M                                         (0x00ff)              /* AES data in byte n when AESAXDIN is written as half-word */
/* AESAXDIN[AESXDIN1] Bits */
#define AESXDIN10                                          (0x0100)              /* AESXDIN1 Bit 0 */
#define AESXDIN11                                          (0x0200)              /* AESXDIN1 Bit 1 */
#define AESXDIN12                                          (0x0400)              /* AESXDIN1 Bit 2 */
#define AESXDIN13                                          (0x0800)              /* AESXDIN1 Bit 3 */
#define AESXDIN14                                          (0x1000)              /* AESXDIN1 Bit 4 */
#define AESXDIN15                                          (0x2000)              /* AESXDIN1 Bit 5 */
#define AESXDIN16                                          (0x4000)              /* AESXDIN1 Bit 6 */
#define AESXDIN17                                          (0x8000)              /* AESXDIN1 Bit 7 */
/* AESAXDIN[AESXDIN1] Bits */
#define AESXDIN1_OFS                                       ( 8)                  /* AESXDIN1x Offset */
#define AESXDIN1_M                                         (0xff00)              /* AES data in byte n+1 when AESAXDIN is written as half-word */
/* AESAXIN[AESXIN0] Bits */
#define AESXIN00                                           (0x0001)              /* AESXIN0 Bit 0 */
#define AESXIN01                                           (0x0002)              /* AESXIN0 Bit 1 */
#define AESXIN02                                           (0x0004)              /* AESXIN0 Bit 2 */
#define AESXIN03                                           (0x0008)              /* AESXIN0 Bit 3 */
#define AESXIN04                                           (0x0010)              /* AESXIN0 Bit 4 */
#define AESXIN05                                           (0x0020)              /* AESXIN0 Bit 5 */
#define AESXIN06                                           (0x0040)              /* AESXIN0 Bit 6 */
#define AESXIN07                                           (0x0080)              /* AESXIN0 Bit 7 */
/* AESAXIN[AESXIN0] Bits */
#define AESXIN0_OFS                                        ( 0)                  /* AESXIN0x Offset */
#define AESXIN0_M                                          (0x00ff)              /* AES data in byte n when AESAXIN is written as half-word */
/* AESAXIN[AESXIN1] Bits */
#define AESXIN10                                           (0x0100)              /* AESXIN1 Bit 0 */
#define AESXIN11                                           (0x0200)              /* AESXIN1 Bit 1 */
#define AESXIN12                                           (0x0400)              /* AESXIN1 Bit 2 */
#define AESXIN13                                           (0x0800)              /* AESXIN1 Bit 3 */
#define AESXIN14                                           (0x1000)              /* AESXIN1 Bit 4 */
#define AESXIN15                                           (0x2000)              /* AESXIN1 Bit 5 */
#define AESXIN16                                           (0x4000)              /* AESXIN1 Bit 6 */
#define AESXIN17                                           (0x8000)              /* AESXIN1 Bit 7 */
/* AESAXIN[AESXIN1] Bits */
#define AESXIN1_OFS                                        ( 8)                  /* AESXIN1x Offset */
#define AESXIN1_M                                          (0xff00)              /* AES data in byte n+1 when AESAXIN is written as half-word */


//*****************************************************************************
// CAPTIO0 Bits
//*****************************************************************************
/* CAPTIO0CTL[CAPTIOPISEL] Bits */
#define CAPTIOPISEL0                                       (0x0002)              /* CAPTIOPISEL Bit 0 */
#define CAPTIOPISEL1                                       (0x0004)              /* CAPTIOPISEL Bit 1 */
#define CAPTIOPISEL2                                       (0x0008)              /* CAPTIOPISEL Bit 2 */
/* CAPTIO0CTL[CAPTIOPISEL] Bits */
#define CAPTIOPISEL_OFS                                    ( 1)                  /* CAPTIOPISELx Offset */
#define CAPTIOPISEL_M                                      (0x000e)              /* Capacitive Touch IO pin select */
//#define CAPTIOPISEL0                                       (0x0002)              /* Capacitive Touch IO pin select */
//#define CAPTIOPISEL1                                       (0x0004)              /* Capacitive Touch IO pin select */
//#define CAPTIOPISEL2                                       (0x0008)              /* Capacitive Touch IO pin select */
#define CAPTIOPISEL_0                                      (0x0000)              /* Px.0 */
#define CAPTIOPISEL_1                                      (0x0002)              /* Px.1 */
#define CAPTIOPISEL_2                                      (0x0004)              /* Px.2 */
#define CAPTIOPISEL_3                                      (0x0006)              /* Px.3 */
#define CAPTIOPISEL_4                                      (0x0008)              /* Px.4 */
#define CAPTIOPISEL_5                                      (0x000a)              /* Px.5 */
#define CAPTIOPISEL_6                                      (0x000c)              /* Px.6 */
#define CAPTIOPISEL_7                                      (0x000e)              /* Px.7 */
/* CAPTIO0CTL[CAPTIOPOSEL] Bits */
#define CAPTIOPOSEL0                                       (0x0010)              /* CAPTIOPOSEL Bit 0 */
#define CAPTIOPOSEL1                                       (0x0020)              /* CAPTIOPOSEL Bit 1 */
#define CAPTIOPOSEL2                                       (0x0040)              /* CAPTIOPOSEL Bit 2 */
#define CAPTIOPOSEL3                                       (0x0080)              /* CAPTIOPOSEL Bit 3 */
/* CAPTIO0CTL[CAPTIOPOSEL] Bits */
#define CAPTIOPOSEL_OFS                                    ( 4)                  /* CAPTIOPOSELx Offset */
#define CAPTIOPOSEL_M                                      (0x00f0)              /* Capacitive Touch IO port select */
//#define CAPTIOPOSEL0                                       (0x0010)              /* Capacitive Touch IO port select */
//#define CAPTIOPOSEL1                                       (0x0020)              /* Capacitive Touch IO port select */
//#define CAPTIOPOSEL2                                       (0x0040)              /* Capacitive Touch IO port select */
//#define CAPTIOPOSEL3                                       (0x0080)              /* Capacitive Touch IO port select */
#define CAPTIOPOSEL_0                                      (0x0000)              /* Px = PJ */
#define CAPTIOPOSEL_1                                      (0x0010)              /* Px = P1 */
#define CAPTIOPOSEL_2                                      (0x0020)              /* Px = P2 */
#define CAPTIOPOSEL_3                                      (0x0030)              /* Px = P3 */
#define CAPTIOPOSEL_4                                      (0x0040)              /* Px = P4 */
#define CAPTIOPOSEL_5                                      (0x0050)              /* Px = P5 */
#define CAPTIOPOSEL_6                                      (0x0060)              /* Px = P6 */
#define CAPTIOPOSEL_7                                      (0x0070)              /* Px = P7 */
#define CAPTIOPOSEL_8                                      (0x0080)              /* Px = P8 */
#define CAPTIOPOSEL_9                                      (0x0090)              /* Px = P9 */
#define CAPTIOPOSEL_10                                     (0x00a0)              /* Px = P10 */
#define CAPTIOPOSEL_11                                     (0x00b0)              /* Px = P11 */
#define CAPTIOPOSEL_12                                     (0x00c0)              /* Px = P12 */
#define CAPTIOPOSEL_13                                     (0x00d0)              /* Px = P13 */
#define CAPTIOPOSEL_14                                     (0x00e0)              /* Px = P14 */
#define CAPTIOPOSEL_15                                     (0x00f0)              /* Px = P15 */
#define CAPTIOPOSEL__PJ                                    (0x0000)              /* Px = PJ */
#define CAPTIOPOSEL__P1                                    (0x0010)              /* Px = P1 */
#define CAPTIOPOSEL__P2                                    (0x0020)              /* Px = P2 */
#define CAPTIOPOSEL__P3                                    (0x0030)              /* Px = P3 */
#define CAPTIOPOSEL__P4                                    (0x0040)              /* Px = P4 */
#define CAPTIOPOSEL__P5                                    (0x0050)              /* Px = P5 */
#define CAPTIOPOSEL__P6                                    (0x0060)              /* Px = P6 */
#define CAPTIOPOSEL__P7                                    (0x0070)              /* Px = P7 */
#define CAPTIOPOSEL__P8                                    (0x0080)              /* Px = P8 */
#define CAPTIOPOSEL__P9                                    (0x0090)              /* Px = P9 */
#define CAPTIOPOSEL__P10                                   (0x00a0)              /* Px = P10 */
#define CAPTIOPOSEL__P11                                   (0x00b0)              /* Px = P11 */
#define CAPTIOPOSEL__P12                                   (0x00c0)              /* Px = P12 */
#define CAPTIOPOSEL__P13                                   (0x00d0)              /* Px = P13 */
#define CAPTIOPOSEL__P14                                   (0x00e0)              /* Px = P14 */
#define CAPTIOPOSEL__P15                                   (0x00f0)              /* Px = P15 */
/* CAPTIO0CTL[CAPTIOEN] Bits */
#define CAPTIOEN_OFS                                       ( 8)                  /* CAPTIOEN Offset */
#define CAPTIOEN                                           (0x0100)              /* Capacitive Touch IO enable */
/* CAPTIO0CTL[CAPTIOSTATE] Bits */
#define CAPTIOSTATE_OFS                                    ( 9)                  /* CAPTIOSTATE Offset */
#define CAPTIOSTATE                                        (0x0200)              /* Capacitive Touch IO state */


//*****************************************************************************
// CAPTIO1 Bits
//*****************************************************************************
/* CAPTIO1CTL[CAPTIOPISEL] Bits */
//#define CAPTIOPISEL0                                       (0x0002)              /* CAPTIOPISEL Bit 0 */
//#define CAPTIOPISEL1                                       (0x0004)              /* CAPTIOPISEL Bit 1 */
//#define CAPTIOPISEL2                                       (0x0008)              /* CAPTIOPISEL Bit 2 */
/* CAPTIO1CTL[CAPTIOPISEL] Bits */
//#define CAPTIOPISEL_OFS                                    ( 1)                  /* CAPTIOPISELx Offset */
//#define CAPTIOPISEL_M                                      (0x000e)              /* Capacitive Touch IO pin select */
//#define CAPTIOPISEL0                                       (0x0002)              /* Capacitive Touch IO pin select */
//#define CAPTIOPISEL1                                       (0x0004)              /* Capacitive Touch IO pin select */
//#define CAPTIOPISEL2                                       (0x0008)              /* Capacitive Touch IO pin select */
//#define CAPTIOPISEL_0                                      (0x0000)              /* Px.0 */
//#define CAPTIOPISEL_1                                      (0x0002)              /* Px.1 */
//#define CAPTIOPISEL_2                                      (0x0004)              /* Px.2 */
//#define CAPTIOPISEL_3                                      (0x0006)              /* Px.3 */
//#define CAPTIOPISEL_4                                      (0x0008)              /* Px.4 */
//#define CAPTIOPISEL_5                                      (0x000a)              /* Px.5 */
//#define CAPTIOPISEL_6                                      (0x000c)              /* Px.6 */
//#define CAPTIOPISEL_7                                      (0x000e)              /* Px.7 */
/* CAPTIO1CTL[CAPTIOPOSEL] Bits */
//#define CAPTIOPOSEL0                                       (0x0010)              /* CAPTIOPOSEL Bit 0 */
//#define CAPTIOPOSEL1                                       (0x0020)              /* CAPTIOPOSEL Bit 1 */
//#define CAPTIOPOSEL2                                       (0x0040)              /* CAPTIOPOSEL Bit 2 */
//#define CAPTIOPOSEL3                                       (0x0080)              /* CAPTIOPOSEL Bit 3 */
/* CAPTIO1CTL[CAPTIOPOSEL] Bits */
//#define CAPTIOPOSEL_OFS                                    ( 4)                  /* CAPTIOPOSELx Offset */
//#define CAPTIOPOSEL_M                                      (0x00f0)              /* Capacitive Touch IO port select */
//#define CAPTIOPOSEL0                                       (0x0010)              /* Capacitive Touch IO port select */
//#define CAPTIOPOSEL1                                       (0x0020)              /* Capacitive Touch IO port select */
//#define CAPTIOPOSEL2                                       (0x0040)              /* Capacitive Touch IO port select */
//#define CAPTIOPOSEL3                                       (0x0080)              /* Capacitive Touch IO port select */
//#define CAPTIOPOSEL_0                                      (0x0000)              /* Px = PJ */
//#define CAPTIOPOSEL_1                                      (0x0010)              /* Px = P1 */
//#define CAPTIOPOSEL_2                                      (0x0020)              /* Px = P2 */
//#define CAPTIOPOSEL_3                                      (0x0030)              /* Px = P3 */
//#define CAPTIOPOSEL_4                                      (0x0040)              /* Px = P4 */
//#define CAPTIOPOSEL_5                                      (0x0050)              /* Px = P5 */
//#define CAPTIOPOSEL_6                                      (0x0060)              /* Px = P6 */
//#define CAPTIOPOSEL_7                                      (0x0070)              /* Px = P7 */
//#define CAPTIOPOSEL_8                                      (0x0080)              /* Px = P8 */
//#define CAPTIOPOSEL_9                                      (0x0090)              /* Px = P9 */
//#define CAPTIOPOSEL_10                                     (0x00a0)              /* Px = P10 */
//#define CAPTIOPOSEL_11                                     (0x00b0)              /* Px = P11 */
//#define CAPTIOPOSEL_12                                     (0x00c0)              /* Px = P12 */
//#define CAPTIOPOSEL_13                                     (0x00d0)              /* Px = P13 */
//#define CAPTIOPOSEL_14                                     (0x00e0)              /* Px = P14 */
//#define CAPTIOPOSEL_15                                     (0x00f0)              /* Px = P15 */
//#define CAPTIOPOSEL__PJ                                    (0x0000)              /* Px = PJ */
//#define CAPTIOPOSEL__P1                                    (0x0010)              /* Px = P1 */
//#define CAPTIOPOSEL__P2                                    (0x0020)              /* Px = P2 */
//#define CAPTIOPOSEL__P3                                    (0x0030)              /* Px = P3 */
//#define CAPTIOPOSEL__P4                                    (0x0040)              /* Px = P4 */
//#define CAPTIOPOSEL__P5                                    (0x0050)              /* Px = P5 */
//#define CAPTIOPOSEL__P6                                    (0x0060)              /* Px = P6 */
//#define CAPTIOPOSEL__P7                                    (0x0070)              /* Px = P7 */
//#define CAPTIOPOSEL__P8                                    (0x0080)              /* Px = P8 */
//#define CAPTIOPOSEL__P9                                    (0x0090)              /* Px = P9 */
//#define CAPTIOPOSEL__P10                                   (0x00a0)              /* Px = P10 */
//#define CAPTIOPOSEL__P11                                   (0x00b0)              /* Px = P11 */
//#define CAPTIOPOSEL__P12                                   (0x00c0)              /* Px = P12 */
//#define CAPTIOPOSEL__P13                                   (0x00d0)              /* Px = P13 */
//#define CAPTIOPOSEL__P14                                   (0x00e0)              /* Px = P14 */
//#define CAPTIOPOSEL__P15                                   (0x00f0)              /* Px = P15 */
/* CAPTIO1CTL[CAPTIOEN] Bits */
//#define CAPTIOEN_OFS                                       ( 8)                  /* CAPTIOEN Offset */
//#define CAPTIOEN                                           (0x0100)              /* Capacitive Touch IO enable */
/* CAPTIO1CTL[CAPTIOSTATE] Bits */
//#define CAPTIOSTATE_OFS                                    ( 9)                  /* CAPTIOSTATE Offset */
//#define CAPTIOSTATE                                        (0x0200)              /* Capacitive Touch IO state */


//*****************************************************************************
// COMP_E0 Bits
//*****************************************************************************
/* CE0CTL0[CEIPSEL] Bits */
#define CEIPSEL_OFS                                        ( 0)                  /* CEIPSEL Offset */
#define CEIPSEL_M                                          (0x000f)              /* Channel input selected for the V+ terminal */
#define CEIPSEL0                                           (0x0001)              /* Channel input selected for the V+ terminal */
#define CEIPSEL1                                           (0x0002)              /* Channel input selected for the V+ terminal */
#define CEIPSEL2                                           (0x0004)              /* Channel input selected for the V+ terminal */
#define CEIPSEL3                                           (0x0008)              /* Channel input selected for the V+ terminal */
#define CEIPSEL_0                                          (0x0000)              /* Channel 0 selected */
#define CEIPSEL_1                                          (0x0001)              /* Channel 1 selected */
#define CEIPSEL_2                                          (0x0002)              /* Channel 2 selected */
#define CEIPSEL_3                                          (0x0003)              /* Channel 3 selected */
#define CEIPSEL_4                                          (0x0004)              /* Channel 4 selected */
#define CEIPSEL_5                                          (0x0005)              /* Channel 5 selected */
#define CEIPSEL_6                                          (0x0006)              /* Channel 6 selected */
#define CEIPSEL_7                                          (0x0007)              /* Channel 7 selected */
#define CEIPSEL_8                                          (0x0008)              /* Channel 8 selected */
#define CEIPSEL_9                                          (0x0009)              /* Channel 9 selected */
#define CEIPSEL_10                                         (0x000a)              /* Channel 10 selected */
#define CEIPSEL_11                                         (0x000b)              /* Channel 11 selected */
#define CEIPSEL_12                                         (0x000c)              /* Channel 12 selected */
#define CEIPSEL_13                                         (0x000d)              /* Channel 13 selected */
#define CEIPSEL_14                                         (0x000e)              /* Channel 14 selected */
#define CEIPSEL_15                                         (0x000f)              /* Channel 15 selected */
/* CE0CTL0[CEIPEN] Bits */
#define CEIPEN_OFS                                         ( 7)                  /* CEIPEN Offset */
#define CEIPEN                                             (0x0080)              /* Channel input enable for the V+ terminal */
/* CE0CTL0[CEIMSEL] Bits */
#define CEIMSEL_OFS                                        ( 8)                  /* CEIMSEL Offset */
#define CEIMSEL_M                                          (0x0f00)              /* Channel input selected for the - terminal */
#define CEIMSEL0                                           (0x0100)              /* Channel input selected for the - terminal */
#define CEIMSEL1                                           (0x0200)              /* Channel input selected for the - terminal */
#define CEIMSEL2                                           (0x0400)              /* Channel input selected for the - terminal */
#define CEIMSEL3                                           (0x0800)              /* Channel input selected for the - terminal */
#define CEIMSEL_0                                          (0x0000)              /* Channel 0 selected */
#define CEIMSEL_1                                          (0x0100)              /* Channel 1 selected */
#define CEIMSEL_2                                          (0x0200)              /* Channel 2 selected */
#define CEIMSEL_3                                          (0x0300)              /* Channel 3 selected */
#define CEIMSEL_4                                          (0x0400)              /* Channel 4 selected */
#define CEIMSEL_5                                          (0x0500)              /* Channel 5 selected */
#define CEIMSEL_6                                          (0x0600)              /* Channel 6 selected */
#define CEIMSEL_7                                          (0x0700)              /* Channel 7 selected */
#define CEIMSEL_8                                          (0x0800)              /* Channel 8 selected */
#define CEIMSEL_9                                          (0x0900)              /* Channel 9 selected */
#define CEIMSEL_10                                         (0x0a00)              /* Channel 10 selected */
#define CEIMSEL_11                                         (0x0b00)              /* Channel 11 selected */
#define CEIMSEL_12                                         (0x0c00)              /* Channel 12 selected */
#define CEIMSEL_13                                         (0x0d00)              /* Channel 13 selected */
#define CEIMSEL_14                                         (0x0e00)              /* Channel 14 selected */
#define CEIMSEL_15                                         (0x0f00)              /* Channel 15 selected */
/* CE0CTL0[CEIMEN] Bits */
#define CEIMEN_OFS                                         (15)                  /* CEIMEN Offset */
#define CEIMEN                                             (0x8000)              /* Channel input enable for the - terminal */
/* CE0CTL1[CEOUT] Bits */
#define CEOUT_OFS                                          ( 0)                  /* CEOUT Offset */
#define CEOUT                                              (0x0001)              /* Comparator output value */
/* CE0CTL1[CEOUTPOL] Bits */
#define CEOUTPOL_OFS                                       ( 1)                  /* CEOUTPOL Offset */
#define CEOUTPOL                                           (0x0002)              /* Comparator output polarity */
/* CE0CTL1[CEF] Bits */
#define CEF_OFS                                            ( 2)                  /* CEF Offset */
#define CEF                                                (0x0004)              /* Comparator output filter */
/* CE0CTL1[CEIES] Bits */
#define CEIES_OFS                                          ( 3)                  /* CEIES Offset */
#define CEIES                                              (0x0008)              /* Interrupt edge select for CEIIFG and CEIFG */
/* CE0CTL1[CESHORT] Bits */
#define CESHORT_OFS                                        ( 4)                  /* CESHORT Offset */
#define CESHORT                                            (0x0010)              /* Input short */
/* CE0CTL1[CEEX] Bits */
#define CEEX_OFS                                           ( 5)                  /* CEEX Offset */
#define CEEX                                               (0x0020)              /* Exchange */
/* CE0CTL1[CEFDLY] Bits */
#define CEFDLY_OFS                                         ( 6)                  /* CEFDLY Offset */
#define CEFDLY_M                                           (0x00c0)              /* Filter delay */
#define CEFDLY0                                            (0x0040)              /* Filter delay */
#define CEFDLY1                                            (0x0080)              /* Filter delay */
#define CEFDLY_0                                           (0x0000)              /* Typical filter delay of TBD (450) ns */
#define CEFDLY_1                                           (0x0040)              /* Typical filter delay of TBD (900) ns */
#define CEFDLY_2                                           (0x0080)              /* Typical filter delay of TBD (1800) ns */
#define CEFDLY_3                                           (0x00c0)              /* Typical filter delay of TBD (3600) ns */
/* CE0CTL1[CEPWRMD] Bits */
#define CEPWRMD_OFS                                        ( 8)                  /* CEPWRMD Offset */
#define CEPWRMD_M                                          (0x0300)              /* Power Mode */
#define CEPWRMD0                                           (0x0100)              /* Power Mode */
#define CEPWRMD1                                           (0x0200)              /* Power Mode */
#define CEPWRMD_0                                          (0x0000)              /* High-speed mode */
#define CEPWRMD_1                                          (0x0100)              /* Normal mode */
#define CEPWRMD_2                                          (0x0200)              /* Ultra-low power mode */
/* CE0CTL1[CEON] Bits */
#define CEON_OFS                                           (10)                  /* CEON Offset */
#define CEON                                               (0x0400)              /* Comparator On */
/* CE0CTL1[CEMRVL] Bits */
#define CEMRVL_OFS                                         (11)                  /* CEMRVL Offset */
#define CEMRVL                                             (0x0800)              /* This bit is valid of CEMRVS is set to 1 */
/* CE0CTL1[CEMRVS] Bits */
#define CEMRVS_OFS                                         (12)                  /* CEMRVS Offset */
#define CEMRVS                                             (0x1000)              /*  */
/* CE0CTL2[CEREF0] Bits */
#define CEREF0_OFS                                         ( 0)                  /* CEREF0 Offset */
#define CEREF0_M                                           (0x001f)              /* Reference resistor tap 0 */
/* CE0CTL2[CERSEL] Bits */
#define CERSEL_OFS                                         ( 5)                  /* CERSEL Offset */
#define CERSEL                                             (0x0020)              /* Reference select */
/* CE0CTL2[CERS] Bits */
#define CERS_OFS                                           ( 6)                  /* CERS Offset */
#define CERS_M                                             (0x00c0)              /* Reference source */
#define CERS0                                              (0x0040)              /* Reference source */
#define CERS1                                              (0x0080)              /* Reference source */
#define CERS_0                                             (0x0000)              /* No current is drawn by the reference circuitry */
#define CERS_1                                             (0x0040)              /* VCC applied to the resistor ladder */
#define CERS_2                                             (0x0080)              /* Shared reference voltage applied to the resistor ladder */
#define CERS_3                                             (0x00c0)              /* Shared reference voltage supplied to V(CREF). Resistor ladder is off */
/* CE0CTL2[CEREF1] Bits */
#define CEREF1_OFS                                         ( 8)                  /* CEREF1 Offset */
#define CEREF1_M                                           (0x1f00)              /* Reference resistor tap 1 */
/* CE0CTL2[CEREFL] Bits */
#define CEREFL_OFS                                         (13)                  /* CEREFL Offset */
#define CEREFL_M                                           (0x6000)              /* Reference voltage level */
#define CEREFL0                                            (0x2000)              /* Reference voltage level */
#define CEREFL1                                            (0x4000)              /* Reference voltage level */
#define CEREFL_0                                           (0x0000)              /* Reference amplifier is disabled. No reference voltage is requested */
#define CEREFL_1                                           (0x2000)              /* 1.2 V is selected as shared reference voltage input */
#define CEREFL_2                                           (0x4000)              /* 2.0 V is selected as shared reference voltage input */
#define CEREFL_3                                           (0x6000)              /* 2.5 V is selected as shared reference voltage input */
#define CEREFL__OFF                                        (0x0000)              /* Reference amplifier is disabled. No reference voltage is requested */
#define CEREFL__1P2V                                       (0x2000)              /* 1.2 V is selected as shared reference voltage input */
#define CEREFL__2P0V                                       (0x4000)              /* 2.0 V is selected as shared reference voltage input */
#define CEREFL__2P5V                                       (0x6000)              /* 2.5 V is selected as shared reference voltage input */
/* CE0CTL2[CEREFACC] Bits */
#define CEREFACC_OFS                                       (15)                  /* CEREFACC Offset */
#define CEREFACC                                           (0x8000)              /* Reference accuracy */
/* CE0CTL3[CEPD0] Bits */
#define CEPD0_OFS                                          ( 0)                  /* CEPD0 Offset */
#define CEPD0                                              (0x0001)              /* Port disable */
/* CE0CTL3[CEPD1] Bits */
#define CEPD1_OFS                                          ( 1)                  /* CEPD1 Offset */
#define CEPD1                                              (0x0002)              /* Port disable */
/* CE0CTL3[CEPD2] Bits */
#define CEPD2_OFS                                          ( 2)                  /* CEPD2 Offset */
#define CEPD2                                              (0x0004)              /* Port disable */
/* CE0CTL3[CEPD3] Bits */
#define CEPD3_OFS                                          ( 3)                  /* CEPD3 Offset */
#define CEPD3                                              (0x0008)              /* Port disable */
/* CE0CTL3[CEPD4] Bits */
#define CEPD4_OFS                                          ( 4)                  /* CEPD4 Offset */
#define CEPD4                                              (0x0010)              /* Port disable */
/* CE0CTL3[CEPD5] Bits */
#define CEPD5_OFS                                          ( 5)                  /* CEPD5 Offset */
#define CEPD5                                              (0x0020)              /* Port disable */
/* CE0CTL3[CEPD6] Bits */
#define CEPD6_OFS                                          ( 6)                  /* CEPD6 Offset */
#define CEPD6                                              (0x0040)              /* Port disable */
/* CE0CTL3[CEPD7] Bits */
#define CEPD7_OFS                                          ( 7)                  /* CEPD7 Offset */
#define CEPD7                                              (0x0080)              /* Port disable */
/* CE0CTL3[CEPD8] Bits */
#define CEPD8_OFS                                          ( 8)                  /* CEPD8 Offset */
#define CEPD8                                              (0x0100)              /* Port disable */
/* CE0CTL3[CEPD9] Bits */
#define CEPD9_OFS                                          ( 9)                  /* CEPD9 Offset */
#define CEPD9                                              (0x0200)              /* Port disable */
/* CE0CTL3[CEPD10] Bits */
#define CEPD10_OFS                                         (10)                  /* CEPD10 Offset */
#define CEPD10                                             (0x0400)              /* Port disable */
/* CE0CTL3[CEPD11] Bits */
#define CEPD11_OFS                                         (11)                  /* CEPD11 Offset */
#define CEPD11                                             (0x0800)              /* Port disable */
/* CE0CTL3[CEPD12] Bits */
#define CEPD12_OFS                                         (12)                  /* CEPD12 Offset */
#define CEPD12                                             (0x1000)              /* Port disable */
/* CE0CTL3[CEPD13] Bits */
#define CEPD13_OFS                                         (13)                  /* CEPD13 Offset */
#define CEPD13                                             (0x2000)              /* Port disable */
/* CE0CTL3[CEPD14] Bits */
#define CEPD14_OFS                                         (14)                  /* CEPD14 Offset */
#define CEPD14                                             (0x4000)              /* Port disable */
/* CE0CTL3[CEPD15] Bits */
#define CEPD15_OFS                                         (15)                  /* CEPD15 Offset */
#define CEPD15                                             (0x8000)              /* Port disable */
/* CE0INT[CEIFG] Bits */
#define CEIFG_OFS                                          ( 0)                  /* CEIFG Offset */
#define CEIFG                                              (0x0001)              /* Comparator output interrupt flag */
/* CE0INT[CEIIFG] Bits */
#define CEIIFG_OFS                                         ( 1)                  /* CEIIFG Offset */
#define CEIIFG                                             (0x0002)              /* Comparator output inverted interrupt flag */
/* CE0INT[CERDYIFG] Bits */
#define CERDYIFG_OFS                                       ( 4)                  /* CERDYIFG Offset */
#define CERDYIFG                                           (0x0010)              /* Comparator ready interrupt flag */
/* CE0INT[CEIE] Bits */
#define CEIE_OFS                                           ( 8)                  /* CEIE Offset */
#define CEIE                                               (0x0100)              /* Comparator output interrupt enable */
/* CE0INT[CEIIE] Bits */
#define CEIIE_OFS                                          ( 9)                  /* CEIIE Offset */
#define CEIIE                                              (0x0200)              /* Comparator output interrupt enable inverted polarity */
/* CE0INT[CERDYIE] Bits */
#define CERDYIE_OFS                                        (12)                  /* CERDYIE Offset */
#define CERDYIE                                            (0x1000)              /* Comparator ready interrupt enable */


//*****************************************************************************
// COMP_E1 Bits
//*****************************************************************************
/* CE1CTL0[CEIPSEL] Bits */
//#define CEIPSEL_OFS                                        ( 0)                  /* CEIPSEL Offset */
//#define CEIPSEL_M                                          (0x000f)              /* Channel input selected for the V+ terminal */
//#define CEIPSEL0                                           (0x0001)              /* Channel input selected for the V+ terminal */
//#define CEIPSEL1                                           (0x0002)              /* Channel input selected for the V+ terminal */
//#define CEIPSEL2                                           (0x0004)              /* Channel input selected for the V+ terminal */
//#define CEIPSEL3                                           (0x0008)              /* Channel input selected for the V+ terminal */
//#define CEIPSEL_0                                          (0x0000)              /* Channel 0 selected */
//#define CEIPSEL_1                                          (0x0001)              /* Channel 1 selected */
//#define CEIPSEL_2                                          (0x0002)              /* Channel 2 selected */
//#define CEIPSEL_3                                          (0x0003)              /* Channel 3 selected */
//#define CEIPSEL_4                                          (0x0004)              /* Channel 4 selected */
//#define CEIPSEL_5                                          (0x0005)              /* Channel 5 selected */
//#define CEIPSEL_6                                          (0x0006)              /* Channel 6 selected */
//#define CEIPSEL_7                                          (0x0007)              /* Channel 7 selected */
//#define CEIPSEL_8                                          (0x0008)              /* Channel 8 selected */
//#define CEIPSEL_9                                          (0x0009)              /* Channel 9 selected */
//#define CEIPSEL_10                                         (0x000a)              /* Channel 10 selected */
//#define CEIPSEL_11                                         (0x000b)              /* Channel 11 selected */
//#define CEIPSEL_12                                         (0x000c)              /* Channel 12 selected */
//#define CEIPSEL_13                                         (0x000d)              /* Channel 13 selected */
//#define CEIPSEL_14                                         (0x000e)              /* Channel 14 selected */
//#define CEIPSEL_15                                         (0x000f)              /* Channel 15 selected */
/* CE1CTL0[CEIPEN] Bits */
//#define CEIPEN_OFS                                         ( 7)                  /* CEIPEN Offset */
//#define CEIPEN                                             (0x0080)              /* Channel input enable for the V+ terminal */
/* CE1CTL0[CEIMSEL] Bits */
//#define CEIMSEL_OFS                                        ( 8)                  /* CEIMSEL Offset */
//#define CEIMSEL_M                                          (0x0f00)              /* Channel input selected for the - terminal */
//#define CEIMSEL0                                           (0x0100)              /* Channel input selected for the - terminal */
//#define CEIMSEL1                                           (0x0200)              /* Channel input selected for the - terminal */
//#define CEIMSEL2                                           (0x0400)              /* Channel input selected for the - terminal */
//#define CEIMSEL3                                           (0x0800)              /* Channel input selected for the - terminal */
//#define CEIMSEL_0                                          (0x0000)              /* Channel 0 selected */
//#define CEIMSEL_1                                          (0x0100)              /* Channel 1 selected */
//#define CEIMSEL_2                                          (0x0200)              /* Channel 2 selected */
//#define CEIMSEL_3                                          (0x0300)              /* Channel 3 selected */
//#define CEIMSEL_4                                          (0x0400)              /* Channel 4 selected */
//#define CEIMSEL_5                                          (0x0500)              /* Channel 5 selected */
//#define CEIMSEL_6                                          (0x0600)              /* Channel 6 selected */
//#define CEIMSEL_7                                          (0x0700)              /* Channel 7 selected */
//#define CEIMSEL_8                                          (0x0800)              /* Channel 8 selected */
//#define CEIMSEL_9                                          (0x0900)              /* Channel 9 selected */
//#define CEIMSEL_10                                         (0x0a00)              /* Channel 10 selected */
//#define CEIMSEL_11                                         (0x0b00)              /* Channel 11 selected */
//#define CEIMSEL_12                                         (0x0c00)              /* Channel 12 selected */
//#define CEIMSEL_13                                         (0x0d00)              /* Channel 13 selected */
//#define CEIMSEL_14                                         (0x0e00)              /* Channel 14 selected */
//#define CEIMSEL_15                                         (0x0f00)              /* Channel 15 selected */
/* CE1CTL0[CEIMEN] Bits */
//#define CEIMEN_OFS                                         (15)                  /* CEIMEN Offset */
//#define CEIMEN                                             (0x8000)              /* Channel input enable for the - terminal */
/* CE1CTL1[CEOUT] Bits */
//#define CEOUT_OFS                                          ( 0)                  /* CEOUT Offset */
//#define CEOUT                                              (0x0001)              /* Comparator output value */
/* CE1CTL1[CEOUTPOL] Bits */
//#define CEOUTPOL_OFS                                       ( 1)                  /* CEOUTPOL Offset */
//#define CEOUTPOL                                           (0x0002)              /* Comparator output polarity */
/* CE1CTL1[CEF] Bits */
//#define CEF_OFS                                            ( 2)                  /* CEF Offset */
//#define CEF                                                (0x0004)              /* Comparator output filter */
/* CE1CTL1[CEIES] Bits */
//#define CEIES_OFS                                          ( 3)                  /* CEIES Offset */
//#define CEIES                                              (0x0008)              /* Interrupt edge select for CEIIFG and CEIFG */
/* CE1CTL1[CESHORT] Bits */
//#define CESHORT_OFS                                        ( 4)                  /* CESHORT Offset */
//#define CESHORT                                            (0x0010)              /* Input short */
/* CE1CTL1[CEEX] Bits */
//#define CEEX_OFS                                           ( 5)                  /* CEEX Offset */
//#define CEEX                                               (0x0020)              /* Exchange */
/* CE1CTL1[CEFDLY] Bits */
//#define CEFDLY_OFS                                         ( 6)                  /* CEFDLY Offset */
//#define CEFDLY_M                                           (0x00c0)              /* Filter delay */
//#define CEFDLY0                                            (0x0040)              /* Filter delay */
//#define CEFDLY1                                            (0x0080)              /* Filter delay */
//#define CEFDLY_0                                           (0x0000)              /* Typical filter delay of TBD (450) ns */
//#define CEFDLY_1                                           (0x0040)              /* Typical filter delay of TBD (900) ns */
//#define CEFDLY_2                                           (0x0080)              /* Typical filter delay of TBD (1800) ns */
//#define CEFDLY_3                                           (0x00c0)              /* Typical filter delay of TBD (3600) ns */
/* CE1CTL1[CEPWRMD] Bits */
//#define CEPWRMD_OFS                                        ( 8)                  /* CEPWRMD Offset */
//#define CEPWRMD_M                                          (0x0300)              /* Power Mode */
//#define CEPWRMD0                                           (0x0100)              /* Power Mode */
//#define CEPWRMD1                                           (0x0200)              /* Power Mode */
//#define CEPWRMD_0                                          (0x0000)              /* High-speed mode */
//#define CEPWRMD_1                                          (0x0100)              /* Normal mode */
//#define CEPWRMD_2                                          (0x0200)              /* Ultra-low power mode */
/* CE1CTL1[CEON] Bits */
//#define CEON_OFS                                           (10)                  /* CEON Offset */
//#define CEON                                               (0x0400)              /* Comparator On */
/* CE1CTL1[CEMRVL] Bits */
//#define CEMRVL_OFS                                         (11)                  /* CEMRVL Offset */
//#define CEMRVL                                             (0x0800)              /* This bit is valid of CEMRVS is set to 1 */
/* CE1CTL1[CEMRVS] Bits */
//#define CEMRVS_OFS                                         (12)                  /* CEMRVS Offset */
//#define CEMRVS                                             (0x1000)              /*  */
/* CE1CTL2[CEREF0] Bits */
//#define CEREF0_OFS                                         ( 0)                  /* CEREF0 Offset */
//#define CEREF0_M                                           (0x001f)              /* Reference resistor tap 0 */
/* CE1CTL2[CERSEL] Bits */
//#define CERSEL_OFS                                         ( 5)                  /* CERSEL Offset */
//#define CERSEL                                             (0x0020)              /* Reference select */
/* CE1CTL2[CERS] Bits */
//#define CERS_OFS                                           ( 6)                  /* CERS Offset */
//#define CERS_M                                             (0x00c0)              /* Reference source */
//#define CERS0                                              (0x0040)              /* Reference source */
//#define CERS1                                              (0x0080)              /* Reference source */
//#define CERS_0                                             (0x0000)              /* No current is drawn by the reference circuitry */
//#define CERS_1                                             (0x0040)              /* VCC applied to the resistor ladder */
//#define CERS_2                                             (0x0080)              /* Shared reference voltage applied to the resistor ladder */
//#define CERS_3                                             (0x00c0)              /* Shared reference voltage supplied to V(CREF). Resistor ladder is off */
/* CE1CTL2[CEREF1] Bits */
//#define CEREF1_OFS                                         ( 8)                  /* CEREF1 Offset */
//#define CEREF1_M                                           (0x1f00)              /* Reference resistor tap 1 */
/* CE1CTL2[CEREFL] Bits */
//#define CEREFL_OFS                                         (13)                  /* CEREFL Offset */
//#define CEREFL_M                                           (0x6000)              /* Reference voltage level */
//#define CEREFL0                                            (0x2000)              /* Reference voltage level */
//#define CEREFL1                                            (0x4000)              /* Reference voltage level */
//#define CEREFL_0                                           (0x0000)              /* Reference amplifier is disabled. No reference voltage is requested */
//#define CEREFL_1                                           (0x2000)              /* 1.2 V is selected as shared reference voltage input */
//#define CEREFL_2                                           (0x4000)              /* 2.0 V is selected as shared reference voltage input */
//#define CEREFL_3                                           (0x6000)              /* 2.5 V is selected as shared reference voltage input */
//#define CEREFL__OFF                                        (0x0000)              /* Reference amplifier is disabled. No reference voltage is requested */
//#define CEREFL__1P2V                                       (0x2000)              /* 1.2 V is selected as shared reference voltage input */
//#define CEREFL__2P0V                                       (0x4000)              /* 2.0 V is selected as shared reference voltage input */
//#define CEREFL__2P5V                                       (0x6000)              /* 2.5 V is selected as shared reference voltage input */
/* CE1CTL2[CEREFACC] Bits */
//#define CEREFACC_OFS                                       (15)                  /* CEREFACC Offset */
//#define CEREFACC                                           (0x8000)              /* Reference accuracy */
/* CE1CTL3[CEPD0] Bits */
//#define CEPD0_OFS                                          ( 0)                  /* CEPD0 Offset */
//#define CEPD0                                              (0x0001)              /* Port disable */
/* CE1CTL3[CEPD1] Bits */
//#define CEPD1_OFS                                          ( 1)                  /* CEPD1 Offset */
//#define CEPD1                                              (0x0002)              /* Port disable */
/* CE1CTL3[CEPD2] Bits */
//#define CEPD2_OFS                                          ( 2)                  /* CEPD2 Offset */
//#define CEPD2                                              (0x0004)              /* Port disable */
/* CE1CTL3[CEPD3] Bits */
//#define CEPD3_OFS                                          ( 3)                  /* CEPD3 Offset */
//#define CEPD3                                              (0x0008)              /* Port disable */
/* CE1CTL3[CEPD4] Bits */
//#define CEPD4_OFS                                          ( 4)                  /* CEPD4 Offset */
//#define CEPD4                                              (0x0010)              /* Port disable */
/* CE1CTL3[CEPD5] Bits */
//#define CEPD5_OFS                                          ( 5)                  /* CEPD5 Offset */
//#define CEPD5                                              (0x0020)              /* Port disable */
/* CE1CTL3[CEPD6] Bits */
//#define CEPD6_OFS                                          ( 6)                  /* CEPD6 Offset */
//#define CEPD6                                              (0x0040)              /* Port disable */
/* CE1CTL3[CEPD7] Bits */
//#define CEPD7_OFS                                          ( 7)                  /* CEPD7 Offset */
//#define CEPD7                                              (0x0080)              /* Port disable */
/* CE1CTL3[CEPD8] Bits */
//#define CEPD8_OFS                                          ( 8)                  /* CEPD8 Offset */
//#define CEPD8                                              (0x0100)              /* Port disable */
/* CE1CTL3[CEPD9] Bits */
//#define CEPD9_OFS                                          ( 9)                  /* CEPD9 Offset */
//#define CEPD9                                              (0x0200)              /* Port disable */
/* CE1CTL3[CEPD10] Bits */
//#define CEPD10_OFS                                         (10)                  /* CEPD10 Offset */
//#define CEPD10                                             (0x0400)              /* Port disable */
/* CE1CTL3[CEPD11] Bits */
//#define CEPD11_OFS                                         (11)                  /* CEPD11 Offset */
//#define CEPD11                                             (0x0800)              /* Port disable */
/* CE1CTL3[CEPD12] Bits */
//#define CEPD12_OFS                                         (12)                  /* CEPD12 Offset */
//#define CEPD12                                             (0x1000)              /* Port disable */
/* CE1CTL3[CEPD13] Bits */
//#define CEPD13_OFS                                         (13)                  /* CEPD13 Offset */
//#define CEPD13                                             (0x2000)              /* Port disable */
/* CE1CTL3[CEPD14] Bits */
//#define CEPD14_OFS                                         (14)                  /* CEPD14 Offset */
//#define CEPD14                                             (0x4000)              /* Port disable */
/* CE1CTL3[CEPD15] Bits */
//#define CEPD15_OFS                                         (15)                  /* CEPD15 Offset */
//#define CEPD15                                             (0x8000)              /* Port disable */
/* CE1INT[CEIFG] Bits */
//#define CEIFG_OFS                                          ( 0)                  /* CEIFG Offset */
//#define CEIFG                                              (0x0001)              /* Comparator output interrupt flag */
/* CE1INT[CEIIFG] Bits */
//#define CEIIFG_OFS                                         ( 1)                  /* CEIIFG Offset */
//#define CEIIFG                                             (0x0002)              /* Comparator output inverted interrupt flag */
/* CE1INT[CERDYIFG] Bits */
//#define CERDYIFG_OFS                                       ( 4)                  /* CERDYIFG Offset */
//#define CERDYIFG                                           (0x0010)              /* Comparator ready interrupt flag */
/* CE1INT[CEIE] Bits */
//#define CEIE_OFS                                           ( 8)                  /* CEIE Offset */
//#define CEIE                                               (0x0100)              /* Comparator output interrupt enable */
/* CE1INT[CEIIE] Bits */
//#define CEIIE_OFS                                          ( 9)                  /* CEIIE Offset */
//#define CEIIE                                              (0x0200)              /* Comparator output interrupt enable inverted polarity */
/* CE1INT[CERDYIE] Bits */
//#define CERDYIE_OFS                                        (12)                  /* CERDYIE Offset */
//#define CERDYIE                                            (0x1000)              /* Comparator ready interrupt enable */


//*****************************************************************************
// COREDEBUG Bits
//*****************************************************************************
/* COREDEBUG_DHCSR[COREDEBUG_DHCSR_C_DEBUGEN] Bits */
#define COREDEBUG_DHCSR_C_DEBUGEN_OFS                      ( 0)                  /* C_DEBUGEN Offset */
#define COREDEBUG_DHCSR_C_DEBUGEN                          (0x00000001)          /*  */
/* COREDEBUG_DHCSR[COREDEBUG_DHCSR_C_HALT] Bits */
#define COREDEBUG_DHCSR_C_HALT_OFS                         ( 1)                  /* C_HALT Offset */
#define COREDEBUG_DHCSR_C_HALT                             (0x00000002)          /*  */
/* COREDEBUG_DHCSR[COREDEBUG_DHCSR_C_STEP] Bits */
#define COREDEBUG_DHCSR_C_STEP_OFS                         ( 2)                  /* C_STEP Offset */
#define COREDEBUG_DHCSR_C_STEP                             (0x00000004)          /*  */
/* COREDEBUG_DHCSR[COREDEBUG_DHCSR_C_MASKINTS] Bits */
#define COREDEBUG_DHCSR_C_MASKINTS_OFS                     ( 3)                  /* C_MASKINTS Offset */
#define COREDEBUG_DHCSR_C_MASKINTS                         (0x00000008)          /*  */
/* COREDEBUG_DHCSR[COREDEBUG_DHCSR_C_SNAPSTALL] Bits */
#define COREDEBUG_DHCSR_C_SNAPSTALL_OFS                    ( 5)                  /* C_SNAPSTALL Offset */
#define COREDEBUG_DHCSR_C_SNAPSTALL                        (0x00000020)          /*  */
/* COREDEBUG_DHCSR[COREDEBUG_DHCSR_S_REGRDY] Bits */
#define COREDEBUG_DHCSR_S_REGRDY_OFS                       (16)                  /* S_REGRDY Offset */
#define COREDEBUG_DHCSR_S_REGRDY                           (0x00010000)          /*  */
/* COREDEBUG_DHCSR[COREDEBUG_DHCSR_S_HALT] Bits */
#define COREDEBUG_DHCSR_S_HALT_OFS                         (17)                  /* S_HALT Offset */
#define COREDEBUG_DHCSR_S_HALT                             (0x00020000)          /*  */
/* COREDEBUG_DHCSR[COREDEBUG_DHCSR_S_SLEEP] Bits */
#define COREDEBUG_DHCSR_S_SLEEP_OFS                        (18)                  /* S_SLEEP Offset */
#define COREDEBUG_DHCSR_S_SLEEP                            (0x00040000)          /*  */
/* COREDEBUG_DHCSR[COREDEBUG_DHCSR_S_LOCKUP] Bits */
#define COREDEBUG_DHCSR_S_LOCKUP_OFS                       (19)                  /* S_LOCKUP Offset */
#define COREDEBUG_DHCSR_S_LOCKUP                           (0x00080000)          /*  */
/* COREDEBUG_DHCSR[COREDEBUG_DHCSR_S_RETIRE_ST] Bits */
#define COREDEBUG_DHCSR_S_RETIRE_ST_OFS                    (24)                  /* S_RETIRE_ST Offset */
#define COREDEBUG_DHCSR_S_RETIRE_ST                        (0x01000000)          /*  */
/* COREDEBUG_DHCSR[COREDEBUG_DHCSR_S_RESET_ST] Bits */
#define COREDEBUG_DHCSR_S_RESET_ST_OFS                     (25)                  /* S_RESET_ST Offset */
#define COREDEBUG_DHCSR_S_RESET_ST                         (0x02000000)          /*  */
/* COREDEBUG_DCRSR[COREDEBUG_DCRSR_REGSEL] Bits */
#define COREDEBUG_DCRSR_REGSEL_OFS                         ( 0)                  /* REGSEL Offset */
#define COREDEBUG_DCRSR_REGSEL_M                           (0x0000001f)          /*  */
#define COREDEBUG_DCRSR_REGSEL0                            (0x00000001)          /*  */
#define COREDEBUG_DCRSR_REGSEL1                            (0x00000002)          /*  */
#define COREDEBUG_DCRSR_REGSEL2                            (0x00000004)          /*  */
#define COREDEBUG_DCRSR_REGSEL3                            (0x00000008)          /*  */
#define COREDEBUG_DCRSR_REGSEL4                            (0x00000010)          /*  */
#define COREDEBUG_DCRSR_REGSEL_0                           (0x00000000)          /* R11 */
//#define COREDEBUG_DCRSR_REGSEL_0                           (0x00000000)          /* R0 */
#define COREDEBUG_DCRSR_REGSEL_1                           (0x00000001)          /* R1 */
#define COREDEBUG_DCRSR_REGSEL_2                           (0x00000002)          /* R2 */
#define COREDEBUG_DCRSR_REGSEL_3                           (0x00000003)          /* R3 */
#define COREDEBUG_DCRSR_REGSEL_4                           (0x00000004)          /* R4 */
#define COREDEBUG_DCRSR_REGSEL_5                           (0x00000005)          /* R5 */
#define COREDEBUG_DCRSR_REGSEL_6                           (0x00000006)          /* R6 */
#define COREDEBUG_DCRSR_REGSEL_7                           (0x00000007)          /* R7 */
#define COREDEBUG_DCRSR_REGSEL_8                           (0x00000008)          /* R8 */
#define COREDEBUG_DCRSR_REGSEL_9                           (0x00000009)          /* R9 */
#define COREDEBUG_DCRSR_REGSEL_10                          (0x0000000a)          /* R10 */
#define COREDEBUG_DCRSR_REGSEL_12                          (0x0000000c)          /* R12 */
#define COREDEBUG_DCRSR_REGSEL_13                          (0x0000000d)          /* Current SP */
#define COREDEBUG_DCRSR_REGSEL_14                          (0x0000000e)          /* LR */
#define COREDEBUG_DCRSR_REGSEL_15                          (0x0000000f)          /* DebugReturnAddress */
#define COREDEBUG_DCRSR_REGSEL_16                          (0x00000010)          /* xPSR/flags, execution state information, and exception number */
#define COREDEBUG_DCRSR_REGSEL_17                          (0x00000011)          /* MSP (Main SP) */
#define COREDEBUG_DCRSR_REGSEL_18                          (0x00000012)          /* PSP (Process SP) */
#define COREDEBUG_DCRSR_REGSEL_20                          (0x00000014)          /* CONTROL bits [31:24], FAULTMASK bits [23:16], BASEPRI bits [15:8], PRIMASK bits [7:0] */
/* COREDEBUG_DCRSR[COREDEBUG_DCRSR_REGWNR] Bits */
#define COREDEBUG_DCRSR_REGWNR_OFS                         (16)                  /* REGWNR Offset */
#define COREDEBUG_DCRSR_REGWNR                             (0x00010000)          /*  */
/* COREDEBUG_DEMCR[COREDEBUG_DEMCR_VC_CORERESET] Bits */
#define COREDEBUG_DEMCR_VC_CORERESET_OFS                   ( 0)                  /* VC_CORERESET Offset */
#define COREDEBUG_DEMCR_VC_CORERESET                       (0x00000001)          /*  */
/* COREDEBUG_DEMCR[COREDEBUG_DEMCR_VC_MMERR] Bits */
#define COREDEBUG_DEMCR_VC_MMERR_OFS                       ( 4)                  /* VC_MMERR Offset */
#define COREDEBUG_DEMCR_VC_MMERR                           (0x00000010)          /*  */
/* COREDEBUG_DEMCR[COREDEBUG_DEMCR_VC_NOCPERR] Bits */
#define COREDEBUG_DEMCR_VC_NOCPERR_OFS                     ( 5)                  /* VC_NOCPERR Offset */
#define COREDEBUG_DEMCR_VC_NOCPERR                         (0x00000020)          /*  */
/* COREDEBUG_DEMCR[COREDEBUG_DEMCR_VC_CHKERR] Bits */
#define COREDEBUG_DEMCR_VC_CHKERR_OFS                      ( 6)                  /* VC_CHKERR Offset */
#define COREDEBUG_DEMCR_VC_CHKERR                          (0x00000040)          /*  */
/* COREDEBUG_DEMCR[COREDEBUG_DEMCR_VC_STATERR] Bits */
#define COREDEBUG_DEMCR_VC_STATERR_OFS                     ( 7)                  /* VC_STATERR Offset */
#define COREDEBUG_DEMCR_VC_STATERR                         (0x00000080)          /*  */
/* COREDEBUG_DEMCR[COREDEBUG_DEMCR_VC_BUSERR] Bits */
#define COREDEBUG_DEMCR_VC_BUSERR_OFS                      ( 8)                  /* VC_BUSERR Offset */
#define COREDEBUG_DEMCR_VC_BUSERR                          (0x00000100)          /*  */
/* COREDEBUG_DEMCR[COREDEBUG_DEMCR_VC_INTERR] Bits */
#define COREDEBUG_DEMCR_VC_INTERR_OFS                      ( 9)                  /* VC_INTERR Offset */
#define COREDEBUG_DEMCR_VC_INTERR                          (0x00000200)          /*  */
/* COREDEBUG_DEMCR[COREDEBUG_DEMCR_VC_HARDERR] Bits */
#define COREDEBUG_DEMCR_VC_HARDERR_OFS                     (10)                  /* VC_HARDERR Offset */
#define COREDEBUG_DEMCR_VC_HARDERR                         (0x00000400)          /*  */
/* COREDEBUG_DEMCR[COREDEBUG_DEMCR_MON_EN] Bits */
#define COREDEBUG_DEMCR_MON_EN_OFS                         (16)                  /* MON_EN Offset */
#define COREDEBUG_DEMCR_MON_EN                             (0x00010000)          /*  */
/* COREDEBUG_DEMCR[COREDEBUG_DEMCR_MON_PEND] Bits */
#define COREDEBUG_DEMCR_MON_PEND_OFS                       (17)                  /* MON_PEND Offset */
#define COREDEBUG_DEMCR_MON_PEND                           (0x00020000)          /*  */
/* COREDEBUG_DEMCR[COREDEBUG_DEMCR_MON_STEP] Bits */
#define COREDEBUG_DEMCR_MON_STEP_OFS                       (18)                  /* MON_STEP Offset */
#define COREDEBUG_DEMCR_MON_STEP                           (0x00040000)          /*  */
/* COREDEBUG_DEMCR[COREDEBUG_DEMCR_MON_REQ] Bits */
#define COREDEBUG_DEMCR_MON_REQ_OFS                        (19)                  /* MON_REQ Offset */
#define COREDEBUG_DEMCR_MON_REQ                            (0x00080000)          /*  */
/* COREDEBUG_DEMCR[COREDEBUG_DEMCR_TRCENA] Bits */
#define COREDEBUG_DEMCR_TRCENA_OFS                         (24)                  /* TRCENA Offset */
#define COREDEBUG_DEMCR_TRCENA                             (0x01000000)          /*  */


//*****************************************************************************
// CRC32 Bits
//*****************************************************************************


//*****************************************************************************
// CS Bits
//*****************************************************************************
/* CSKEY[CSKEY] Bits */
#define CSKEY_OFS                                          ( 0)                  /* CSKEY Offset */
#define CSKEY_M                                            (0x0000ffff)          /* Write xxxx_695Ah to unlock */
/* CSCTL0[DCOTUNE] Bits */
#define DCOTUNE_OFS                                        ( 0)                  /* DCOTUNE Offset */
#define DCOTUNE_M                                          (0x00001fff)          /* DCO frequency tuning select */
/* CSCTL0[DCORSEL] Bits */
#define DCORSEL_OFS                                        (16)                  /* DCORSEL Offset */
#define DCORSEL_M                                          (0x00070000)          /* DCO frequency range select */
#define DCORSEL0                                           (0x00010000)          /* DCO frequency range select */
#define DCORSEL1                                           (0x00020000)          /* DCO frequency range select */
#define DCORSEL2                                           (0x00040000)          /* DCO frequency range select */
#define DCORSEL_0                                          (0x00000000)          /* Nominal DCO Frequency Range (MHz): 1 to 2 */
#define DCORSEL_1                                          (0x00010000)          /* Nominal DCO Frequency Range (MHz): 2 to 4 */
#define DCORSEL_2                                          (0x00020000)          /* Nominal DCO Frequency Range (MHz): 4 to 8 */
#define DCORSEL_3                                          (0x00030000)          /* Nominal DCO Frequency Range (MHz): 8 to 16 */
#define DCORSEL_4                                          (0x00040000)          /* Nominal DCO Frequency Range (MHz): 16 to 32 */
#define DCORSEL_5                                          (0x00050000)          /* Nominal DCO Frequency Range (MHz): 32 to 64 */
/* CSCTL0[DCORES] Bits */
#define DCORES_OFS                                         (22)                  /* DCORES Offset */
#define DCORES                                             (0x00400000)          /* Enables the DCO external resistor mode */
/* CSCTL0[DCOEN] Bits */
#define DCOEN_OFS                                          (23)                  /* DCOEN Offset */
#define DCOEN                                              (0x00800000)          /* Enables the DCO oscillator */
/* CSCTL0[DIS_DCO_DELAY_CNT] Bits */
#define DIS_DCO_DELAY_CNT_OFS                              (24)                  /* DIS_DCO_DELAY_CNT Offset */
#define DIS_DCO_DELAY_CNT                                  (0x01000000)          /*  */
/* CSCTL1[SELM] Bits */
#define SELM_OFS                                           ( 0)                  /* SELM Offset */
#define SELM_M                                             (0x00000007)          /* Selects the MCLK source */
#define SELM0                                              (0x00000001)          /* Selects the MCLK source */
#define SELM1                                              (0x00000002)          /* Selects the MCLK source */
#define SELM2                                              (0x00000004)          /* Selects the MCLK source */
#define SELM_0                                             (0x00000000)          /* when LFXT available, otherwise REFOCLK */
#define SELM_1                                             (0x00000001)          /*  */
#define SELM_2                                             (0x00000002)          /*  */
#define SELM_3                                             (0x00000003)          /*  */
#define SELM_4                                             (0x00000004)          /*  */
#define SELM_5                                             (0x00000005)          /* when HFXT available, otherwise DCOCLK */
#define SELM_6                                             (0x00000006)          /* when HFXT2 available, otherwise DCOCLK */
#define SELM__LFXTCLK                                      (0x00000000)          /* when LFXT available, otherwise REFOCLK */
#define SELM__VLOCLK                                       (0x00000001)          /*  */
#define SELM__REFOCLK                                      (0x00000002)          /*  */
#define SELM__DCOCLK                                       (0x00000003)          /*  */
#define SELM__MODOSC                                       (0x00000004)          /*  */
#define SELM__HFXTCLK                                      (0x00000005)          /* when HFXT available, otherwise DCOCLK */
#define SELM__HFXT2CLK                                     (0x00000006)          /* when HFXT2 available, otherwise DCOCLK */
#define SELM_7                                             (0x00000007)          /* for future use. Defaults to DCOCLK. Not recommended for use  to ensure future compatibilities. */
/* CSCTL1[SELS] Bits */
#define SELS_OFS                                           ( 4)                  /* SELS Offset */
#define SELS_M                                             (0x00000070)          /* Selects the SMCLK and HSMCLK source */
#define SELS0                                              (0x00000010)          /* Selects the SMCLK and HSMCLK source */
#define SELS1                                              (0x00000020)          /* Selects the SMCLK and HSMCLK source */
#define SELS2                                              (0x00000040)          /* Selects the SMCLK and HSMCLK source */
#define SELS_0                                             (0x00000000)          /* when LFXT available, otherwise REFOCLK */
#define SELS_1                                             (0x00000010)          /*  */
#define SELS_2                                             (0x00000020)          /*  */
#define SELS_3                                             (0x00000030)          /*  */
#define SELS_4                                             (0x00000040)          /*  */
#define SELS_5                                             (0x00000050)          /* when HFXT available, otherwise DCOCLK */
#define SELS_6                                             (0x00000060)          /* when HFXT2 available, otherwise DCOCLK */
#define SELS__LFXTCLK                                      (0x00000000)          /* when LFXT available, otherwise REFOCLK */
#define SELS__VLOCLK                                       (0x00000010)          /*  */
#define SELS__REFOCLK                                      (0x00000020)          /*  */
#define SELS__DCOCLK                                       (0x00000030)          /*  */
#define SELS__MODOSC                                       (0x00000040)          /*  */
#define SELS__HFXTCLK                                      (0x00000050)          /* when HFXT available, otherwise DCOCLK */
#define SELS__HFXT2CLK                                     (0x00000060)          /* when HFXT2 available, otherwise DCOCLK */
#define SELS_7                                             (0x00000070)          /* for furture use. Defaults to DCOCLK. Do not use to ensure future compatibilities. */
/* CSCTL1[SELA] Bits */
#define SELA_OFS                                           ( 8)                  /* SELA Offset */
#define SELA_M                                             (0x00000700)          /* Selects the ACLK source */
#define SELA0                                              (0x00000100)          /* Selects the ACLK source */
#define SELA1                                              (0x00000200)          /* Selects the ACLK source */
#define SELA2                                              (0x00000400)          /* Selects the ACLK source */
#define SELA_0                                             (0x00000000)          /* when LFXT available, otherwise REFOCLK */
#define SELA_1                                             (0x00000100)          /*  */
#define SELA_2                                             (0x00000200)          /*  */
#define SELA__LFXTCLK                                      (0x00000000)          /* when LFXT available, otherwise REFOCLK */
#define SELA__VLOCLK                                       (0x00000100)          /*  */
#define SELA__REFOCLK                                      (0x00000200)          /*  */
#define SELA_3                                             (0x00000300)          /* for future use. Defaults to REFOCLK. Not recommended  for use to ensure future compatibilities. */
#define SELA_4                                             (0x00000400)          /* for future use. Defaults to REFOCLK. Not recommended  for use to ensure future compatibilities. */
#define SELA_5                                             (0x00000500)          /* for future use. Defaults to REFOCLK. Not recommended  for use to ensure future compatibilities. */
#define SELA_6                                             (0x00000600)          /* for future use. Defaults to REFOCLK. Not recommended  for use to ensure future compatibilities. */
#define SELA_7                                             (0x00000700)          /* for future use. Defaults to REFOCLK. Not recommended  for use to ensure future compatibilities. */
/* CSCTL1[SELB] Bits */
#define SELB_OFS                                           (12)                  /* SELB Offset */
#define SELB                                               (0x00001000)          /* Selects the BCLK source */
/* CSCTL1[DIVM] Bits */
#define DIVM_OFS                                           (16)                  /* DIVM Offset */
#define DIVM_M                                             (0x00070000)          /* MCLK source divider */
#define DIVM0                                              (0x00010000)          /* MCLK source divider */
#define DIVM1                                              (0x00020000)          /* MCLK source divider */
#define DIVM2                                              (0x00040000)          /* MCLK source divider */
#define DIVM_0                                             (0x00000000)          /* f(MCLK)/1 */
#define DIVM_1                                             (0x00010000)          /* f(MCLK)/2 */
#define DIVM_2                                             (0x00020000)          /* f(MCLK)/4 */
#define DIVM_3                                             (0x00030000)          /* f(MCLK)/8 */
#define DIVM_4                                             (0x00040000)          /* f(MCLK)/16 */
#define DIVM_5                                             (0x00050000)          /* f(MCLK)/32 */
#define DIVM_6                                             (0x00060000)          /* f(MCLK)/64 */
#define DIVM_7                                             (0x00070000)          /* f(MCLK)/128 */
#define DIVM__1                                            (0x00000000)          /* f(MCLK)/1 */
#define DIVM__2                                            (0x00010000)          /* f(MCLK)/2 */
#define DIVM__4                                            (0x00020000)          /* f(MCLK)/4 */
#define DIVM__8                                            (0x00030000)          /* f(MCLK)/8 */
#define DIVM__16                                           (0x00040000)          /* f(MCLK)/16 */
#define DIVM__32                                           (0x00050000)          /* f(MCLK)/32 */
#define DIVM__64                                           (0x00060000)          /* f(MCLK)/64 */
#define DIVM__128                                          (0x00070000)          /* f(MCLK)/128 */
/* CSCTL1[DIVHS] Bits */
#define DIVHS_OFS                                          (20)                  /* DIVHS Offset */
#define DIVHS_M                                            (0x00700000)          /* HSMCLK source divider */
#define DIVHS0                                             (0x00100000)          /* HSMCLK source divider */
#define DIVHS1                                             (0x00200000)          /* HSMCLK source divider */
#define DIVHS2                                             (0x00400000)          /* HSMCLK source divider */
#define DIVHS_0                                            (0x00000000)          /* f(HSMCLK)/1 */
#define DIVHS_1                                            (0x00100000)          /* f(HSMCLK)/2 */
#define DIVHS_2                                            (0x00200000)          /* f(HSMCLK)/4 */
#define DIVHS_3                                            (0x00300000)          /* f(HSMCLK)/8 */
#define DIVHS_4                                            (0x00400000)          /* f(HSMCLK)/16 */
#define DIVHS_5                                            (0x00500000)          /* f(HSMCLK)/32 */
#define DIVHS_6                                            (0x00600000)          /* f(HSMCLK)/64 */
#define DIVHS_7                                            (0x00700000)          /* f(HSMCLK)/128 */
#define DIVHS__1                                           (0x00000000)          /* f(HSMCLK)/1 */
#define DIVHS__2                                           (0x00100000)          /* f(HSMCLK)/2 */
#define DIVHS__4                                           (0x00200000)          /* f(HSMCLK)/4 */
#define DIVHS__8                                           (0x00300000)          /* f(HSMCLK)/8 */
#define DIVHS__16                                          (0x00400000)          /* f(HSMCLK)/16 */
#define DIVHS__32                                          (0x00500000)          /* f(HSMCLK)/32 */
#define DIVHS__64                                          (0x00600000)          /* f(HSMCLK)/64 */
#define DIVHS__128                                         (0x00700000)          /* f(HSMCLK)/128 */
/* CSCTL1[DIVA] Bits */
#define DIVA_OFS                                           (24)                  /* DIVA Offset */
#define DIVA_M                                             (0x07000000)          /* ACLK source divider */
#define DIVA0                                              (0x01000000)          /* ACLK source divider */
#define DIVA1                                              (0x02000000)          /* ACLK source divider */
#define DIVA2                                              (0x04000000)          /* ACLK source divider */
#define DIVA_0                                             (0x00000000)          /* f(ACLK)/1 */
#define DIVA_1                                             (0x01000000)          /* f(ACLK)/2 */
#define DIVA_2                                             (0x02000000)          /* f(ACLK)/4 */
#define DIVA_3                                             (0x03000000)          /* f(ACLK)/8 */
#define DIVA_4                                             (0x04000000)          /* f(ACLK)/16 */
#define DIVA_5                                             (0x05000000)          /* f(ACLK)/32 */
#define DIVA_6                                             (0x06000000)          /* f(ACLK)/64 */
#define DIVA_7                                             (0x07000000)          /* f(ACLK)/128 */
#define DIVA__1                                            (0x00000000)          /* f(ACLK)/1 */
#define DIVA__2                                            (0x01000000)          /* f(ACLK)/2 */
#define DIVA__4                                            (0x02000000)          /* f(ACLK)/4 */
#define DIVA__8                                            (0x03000000)          /* f(ACLK)/8 */
#define DIVA__16                                           (0x04000000)          /* f(ACLK)/16 */
#define DIVA__32                                           (0x05000000)          /* f(ACLK)/32 */
#define DIVA__64                                           (0x06000000)          /* f(ACLK)/64 */
#define DIVA__128                                          (0x07000000)          /* f(ACLK)/128 */
/* CSCTL1[DIVS] Bits */
#define DIVS_OFS                                           (28)                  /* DIVS Offset */
#define DIVS_M                                             (0x70000000)          /* SMCLK source divider */
#define DIVS0                                              (0x10000000)          /* SMCLK source divider */
#define DIVS1                                              (0x20000000)          /* SMCLK source divider */
#define DIVS2                                              (0x40000000)          /* SMCLK source divider */
#define DIVS_0                                             (0x00000000)          /* f(SMCLK)/1 */
#define DIVS_1                                             (0x10000000)          /* f(SMCLK)/2 */
#define DIVS_2                                             (0x20000000)          /* f(SMCLK)/4 */
#define DIVS_3                                             (0x30000000)          /* f(SMCLK)/8 */
#define DIVS_4                                             (0x40000000)          /* f(SMCLK)/16 */
#define DIVS_5                                             (0x50000000)          /* f(SMCLK)/32 */
#define DIVS_6                                             (0x60000000)          /* f(SMCLK)/64 */
#define DIVS_7                                             (0x70000000)          /* f(SMCLK)/128 */
#define DIVS__1                                            (0x00000000)          /* f(SMCLK)/1 */
#define DIVS__2                                            (0x10000000)          /* f(SMCLK)/2 */
#define DIVS__4                                            (0x20000000)          /* f(SMCLK)/4 */
#define DIVS__8                                            (0x30000000)          /* f(SMCLK)/8 */
#define DIVS__16                                           (0x40000000)          /* f(SMCLK)/16 */
#define DIVS__32                                           (0x50000000)          /* f(SMCLK)/32 */
#define DIVS__64                                           (0x60000000)          /* f(SMCLK)/64 */
#define DIVS__128                                          (0x70000000)          /* f(SMCLK)/128 */
/* CSCTL2[LFXTDRIVE] Bits */
#define LFXTDRIVE_OFS                                      ( 0)                  /* LFXTDRIVE Offset */
#define LFXTDRIVE_M                                        (0x00000007)          /* LFXT oscillator current can be adjusted to its drive needs */
#define LFXTDRIVE0                                         (0x00000001)          /* LFXT oscillator current can be adjusted to its drive needs */
#define LFXTDRIVE1                                         (0x00000002)          /* LFXT oscillator current can be adjusted to its drive needs */
#define LFXTDRIVE2                                         (0x00000004)          /* LFXT oscillator current can be adjusted to its drive needs */
#define LFXTDRIVE_0                                        (0x00000000)          /* Lowest current consumption. */
#define LFXTDRIVE_1                                        (0x00000001)          /* Increased drive strength LFXT oscillator. */
#define LFXTDRIVE_2                                        (0x00000002)          /* Increased drive strength LFXT oscillator. */
#define LFXTDRIVE_3                                        (0x00000003)          /* Increased drive strength LFXT oscillator. */
#define LFXTDRIVE_4                                        (0x00000004)          /* Increased drive strength LFXT oscillator. */
#define LFXTDRIVE_5                                        (0x00000005)          /* Increased drive strength LFXT oscillator. */
#define LFXTDRIVE_6                                        (0x00000006)          /* Increased drive strength LFXT oscillator. */
#define LFXTDRIVE_7                                        (0x00000007)          /* Maximum drive strength LFXT oscillator. */
/* CSCTL2[LFXTAGCOFF] Bits */
#define LFXTAGCOFF_OFS                                     ( 7)                  /* LFXTAGCOFF Offset */
#define LFXTAGCOFF                                         (0x00000080)          /* Disables the automatic gain control of the LFXT crystal */
/* CSCTL2[LFXT_EN] Bits */
#define LFXT_EN_OFS                                        ( 8)                  /* LFXT_EN Offset */
#define LFXT_EN                                            (0x00000100)          /* Turns on the LFXT oscillator regardless if used as a clock resource */
/* CSCTL2[LFXTBYPASS] Bits */
#define LFXTBYPASS_OFS                                     ( 9)                  /* LFXTBYPASS Offset */
#define LFXTBYPASS                                         (0x00000200)          /* LFXT bypass select */
/* CSCTL2[HFXTDRIVE] Bits */
#define HFXTDRIVE_OFS                                      (16)                  /* HFXTDRIVE Offset */
#define HFXTDRIVE                                          (0x00010000)          /* HFXT oscillator drive selection */
/* CSCTL2[HFXTFREQ] Bits */
#define HFXTFREQ_OFS                                       (20)                  /* HFXTFREQ Offset */
#define HFXTFREQ_M                                         (0x00700000)          /* HFXT frequency selection */
#define HFXTFREQ0                                          (0x00100000)          /* HFXT frequency selection */
#define HFXTFREQ1                                          (0x00200000)          /* HFXT frequency selection */
#define HFXTFREQ2                                          (0x00400000)          /* HFXT frequency selection */
#define HFXTFREQ_0                                         (0x00000000)          /* 1 MHz to 4 MHz */
#define HFXTFREQ_1                                         (0x00100000)          /* >4 MHz to 8 MHz */
#define HFXTFREQ_2                                         (0x00200000)          /* >8 MHz to 16 MHz */
#define HFXTFREQ_3                                         (0x00300000)          /* >16 MHz to 24 MHz */
#define HFXTFREQ_4                                         (0x00400000)          /* >24 MHz to 32 MHz */
#define HFXTFREQ_5                                         (0x00500000)          /* >32 MHz to 40 MHz */
#define HFXTFREQ_6                                         (0x00600000)          /* >40 MHz to 48 MHz */
/* CSCTL2[HFXT_EN] Bits */
#define HFXT_EN_OFS                                        (24)                  /* HFXT_EN Offset */
#define HFXT_EN                                            (0x01000000)          /* Turns on the HFXT oscillator regardless if used as a clock resource */
/* CSCTL2[HFXTBYPASS] Bits */
#define HFXTBYPASS_OFS                                     (25)                  /* HFXTBYPASS Offset */
#define HFXTBYPASS                                         (0x02000000)          /* HFXT bypass select */
/* CSCTL3[FCNTLF] Bits */
#define FCNTLF_OFS                                         ( 0)                  /* FCNTLF Offset */
#define FCNTLF_M                                           (0x00000003)          /* Start flag counter for LFXT */
#define FCNTLF0                                            (0x00000001)          /* Start flag counter for LFXT */
#define FCNTLF1                                            (0x00000002)          /* Start flag counter for LFXT */
#define FCNTLF_0                                           (0x00000000)          /* 4096 cycles */
#define FCNTLF_1                                           (0x00000001)          /* 8192 cycles */
#define FCNTLF_2                                           (0x00000002)          /* 16384 cycles */
#define FCNTLF_3                                           (0x00000003)          /* 32768 cycles */
#define FCNTLF__4096                                       (0x00000000)          /* 4096 cycles */
#define FCNTLF__8192                                       (0x00000001)          /* 8192 cycles */
#define FCNTLF__16384                                      (0x00000002)          /* 16384 cycles */
#define FCNTLF__32768                                      (0x00000003)          /* 32768 cycles */
/* CSCTL3[RFCNTLF] Bits */
#define RFCNTLF_OFS                                        ( 2)                  /* RFCNTLF Offset */
#define RFCNTLF                                            (0x00000004)          /* Reset start fault counter for LFXT */
/* CSCTL3[FCNTLF_EN] Bits */
#define FCNTLF_EN_OFS                                      ( 3)                  /* FCNTLF_EN Offset */
#define FCNTLF_EN                                          (0x00000008)          /* Enable start fault counter for LFXT */
/* CSCTL3[FCNTHF] Bits */
#define FCNTHF_OFS                                         ( 4)                  /* FCNTHF Offset */
#define FCNTHF_M                                           (0x00000030)          /* Start flag counter for HFXT */
#define FCNTHF0                                            (0x00000010)          /* Start flag counter for HFXT */
#define FCNTHF1                                            (0x00000020)          /* Start flag counter for HFXT */
#define FCNTHF_0                                           (0x00000000)          /* 2048 cycles */
#define FCNTHF_1                                           (0x00000010)          /* 4096 cycles */
#define FCNTHF_2                                           (0x00000020)          /* 8192 cycles */
#define FCNTHF_3                                           (0x00000030)          /* 16384 cycles */
#define FCNTHF__2048                                       (0x00000000)          /* 2048 cycles */
#define FCNTHF__4096                                       (0x00000010)          /* 4096 cycles */
#define FCNTHF__8192                                       (0x00000020)          /* 8192 cycles */
#define FCNTHF__16384                                      (0x00000030)          /* 16384 cycles */
/* CSCTL3[RFCNTHF] Bits */
#define RFCNTHF_OFS                                        ( 6)                  /* RFCNTHF Offset */
#define RFCNTHF                                            (0x00000040)          /* Reset start fault counter for HFXT */
/* CSCTL3[FCNTHF_EN] Bits */
#define FCNTHF_EN_OFS                                      ( 7)                  /* FCNTHF_EN Offset */
#define FCNTHF_EN                                          (0x00000080)          /* Enable start fault counter for HFXT */
/* CSCTL3[FCNTHF2] Bits */
#define FCNTHF2_OFS                                        ( 8)                  /* FCNTHF2 Offset */
#define FCNTHF2_M                                          (0x00000300)          /* Start flag counter for HFXT2 */
#define FCNTHF20                                           (0x00000100)          /* Start flag counter for HFXT2 */
#define FCNTHF21                                           (0x00000200)          /* Start flag counter for HFXT2 */
#define FCNTHF2_0                                          (0x00000000)          /* 2048 cycles */
#define FCNTHF2_1                                          (0x00000100)          /* 4096 cycles */
#define FCNTHF2_2                                          (0x00000200)          /* 8192 cycles */
#define FCNTHF2_3                                          (0x00000300)          /* 16384 cycles */
#define FCNTHF2__2048                                      (0x00000000)          /* 2048 cycles */
#define FCNTHF2__4096                                      (0x00000100)          /* 4096 cycles */
#define FCNTHF2__8192                                      (0x00000200)          /* 8192 cycles */
#define FCNTHF2__16384                                     (0x00000300)          /* 16384 cycles */
/* CSCTL3[RFCNTHF2] Bits */
#define RFCNTHF2_OFS                                       (10)                  /* RFCNTHF2 Offset */
#define RFCNTHF2                                           (0x00000400)          /* Reset start fault counter for HFXT2 */
/* CSCTL3[FCNTHF2_EN] Bits */
#define FCNTHF2_EN_OFS                                     (11)                  /* FCNTHF2_EN Offset */
#define FCNTHF2_EN                                         (0x00000800)          /* Enable start fault counter for HFXT2 */
/* CSCTL4[HFXT2DRIVE] Bits */
#define HFXT2DRIVE_OFS                                     ( 0)                  /* HFXT2DRIVE Offset */
#define HFXT2DRIVE_M                                       (0x00000007)          /* HFXT2 oscillator current can be adjusted to its drive needs */
#define HFXT2DRIVE0                                        (0x00000001)          /* HFXT2 oscillator current can be adjusted to its drive needs */
#define HFXT2DRIVE1                                        (0x00000002)          /* HFXT2 oscillator current can be adjusted to its drive needs */
#define HFXT2DRIVE2                                        (0x00000004)          /* HFXT2 oscillator current can be adjusted to its drive needs */
#define HFXT2DRIVE_0                                       (0x00000000)          /* Lowest current consumption */
#define HFXT2DRIVE_1                                       (0x00000001)          /* Increased drive strength HFXT2 oscillator */
#define HFXT2DRIVE_2                                       (0x00000002)          /* Increased drive strength HFXT2 oscillator */
#define HFXT2DRIVE_3                                       (0x00000003)          /* Increased drive strength HFXT2 oscillator */
#define HFXT2DRIVE_4                                       (0x00000004)          /* Increased drive strength HFXT2 oscillator */
#define HFXT2DRIVE_5                                       (0x00000005)          /* Increased drive strength HFXT2 oscillator */
#define HFXT2DRIVE_6                                       (0x00000006)          /* Increased drive strength HFXT2 oscillator */
#define HFXT2DRIVE_7                                       (0x00000007)          /* Maximum drive strength HFXT2 oscillator */
/* CSCTL4[HFXT2FREQ] Bits */
#define HFXT2FREQ_OFS                                      ( 4)                  /* HFXT2FREQ Offset */
#define HFXT2FREQ_M                                        (0x00000070)          /* HFXT2 frequency selection */
/* CSCTL4[HFXT2_EN] Bits */
#define HFXT2_EN_OFS                                       ( 8)                  /* HFXT2_EN Offset */
#define HFXT2_EN                                           (0x00000100)          /* Turns on the HFXT2 oscillator */
/* CSCTL4[HFXT2BYPASS] Bits */
#define HFXT2BYPASS_OFS                                    ( 9)                  /* HFXT2BYPASS Offset */
#define HFXT2BYPASS                                        (0x00000200)          /* HFXT2 bypass select */
/* CSCTL5[REFCNTSEL] Bits */
#define REFCNTSEL_OFS                                      ( 0)                  /* REFCNTSEL Offset */
#define REFCNTSEL_M                                        (0x00000007)          /* Reference counter source select */
/* CSCTL5[REFCNTPS] Bits */
#define REFCNTPS_OFS                                       ( 3)                  /* REFCNTPS Offset */
#define REFCNTPS_M                                         (0x00000038)          /* Reference clock prescaler */
/* CSCTL5[CALSTART] Bits */
#define CALSTART_OFS                                       ( 7)                  /* CALSTART Offset */
#define CALSTART                                           (0x00000080)          /* Start clock calibration counters */
/* CSCTL5[PERCNTSEL] Bits */
#define PERCNTSEL_OFS                                      ( 8)                  /* PERCNTSEL Offset */
#define PERCNTSEL_M                                        (0x00000700)          /* Period counter source select */
/* CSCTL6[PERCNT] Bits */
#define PERCNT_OFS                                         ( 0)                  /* PERCNT Offset */
#define PERCNT_M                                           (0x0000ffff)          /* Calibration period counter */
/* CSCTL7[REFCNT] Bits */
#define REFCNT_OFS                                         ( 0)                  /* REFCNT Offset */
#define REFCNT_M                                           (0x0000ffff)          /* Calibration reference period counter */
/* CSCLKEN[ACLK_EN] Bits */
#define ACLK_EN_OFS                                        ( 0)                  /* ACLK_EN Offset */
#define ACLK_EN                                            (0x00000001)          /* ACLK system clock conditional request enable */
/* CSCLKEN[MCLK_EN] Bits */
#define MCLK_EN_OFS                                        ( 1)                  /* MCLK_EN Offset */
#define MCLK_EN                                            (0x00000002)          /* MCLK system clock conditional request enable */
/* CSCLKEN[HSMCLK_EN] Bits */
#define HSMCLK_EN_OFS                                      ( 2)                  /* HSMCLK_EN Offset */
#define HSMCLK_EN                                          (0x00000004)          /* HSMCLK system clock conditional request enable */
/* CSCLKEN[SMCLK_EN] Bits */
#define SMCLK_EN_OFS                                       ( 3)                  /* SMCLK_EN Offset */
#define SMCLK_EN                                           (0x00000008)          /* SMCLK system clock conditional request enable */
/* CSCLKEN[VLO_EN] Bits */
#define VLO_EN_OFS                                         ( 8)                  /* VLO_EN Offset */
#define VLO_EN                                             (0x00000100)          /* Turns on the VLO oscillator */
/* CSCLKEN[REFO_EN] Bits */
#define REFO_EN_OFS                                        ( 9)                  /* REFO_EN Offset */
#define REFO_EN                                            (0x00000200)          /* Turns on the REFO oscillator */
/* CSCLKEN[MODOSC_EN] Bits */
#define MODOSC_EN_OFS                                      (10)                  /* MODOSC_EN Offset */
#define MODOSC_EN                                          (0x00000400)          /* Turns on the MODOSC oscillator */
/* CSCLKEN[REFOFSEL] Bits */
#define REFOFSEL_OFS                                       (15)                  /* REFOFSEL Offset */
#define REFOFSEL                                           (0x00008000)          /* Selects REFO nominal frequency */
/* CSSTAT[DCO_ON] Bits */
#define DCO_ON_OFS                                         ( 0)                  /* DCO_ON Offset */
#define DCO_ON                                             (0x00000001)          /* DCO status */
/* CSSTAT[DCOBIAS_ON] Bits */
#define DCOBIAS_ON_OFS                                     ( 1)                  /* DCOBIAS_ON Offset */
#define DCOBIAS_ON                                         (0x00000002)          /* DCO bias status */
/* CSSTAT[HFXT_ON] Bits */
#define HFXT_ON_OFS                                        ( 2)                  /* HFXT_ON Offset */
#define HFXT_ON                                            (0x00000004)          /* HFXT status */
/* CSSTAT[HFXT2_ON] Bits */
#define HFXT2_ON_OFS                                       ( 3)                  /* HFXT2_ON Offset */
#define HFXT2_ON                                           (0x00000008)          /* HFXT2 status */
/* CSSTAT[MODOSC_ON] Bits */
#define MODOSC_ON_OFS                                      ( 4)                  /* MODOSC_ON Offset */
#define MODOSC_ON                                          (0x00000010)          /* MODOSC status */
/* CSSTAT[VLO_ON] Bits */
#define VLO_ON_OFS                                         ( 5)                  /* VLO_ON Offset */
#define VLO_ON                                             (0x00000020)          /* VLO status */
/* CSSTAT[LFXT_ON] Bits */
#define LFXT_ON_OFS                                        ( 6)                  /* LFXT_ON Offset */
#define LFXT_ON                                            (0x00000040)          /* LFXT status */
/* CSSTAT[REFO_ON] Bits */
#define REFO_ON_OFS                                        ( 7)                  /* REFO_ON Offset */
#define REFO_ON                                            (0x00000080)          /* REFO status */
/* CSSTAT[ACLK_ON] Bits */
#define ACLK_ON_OFS                                        (16)                  /* ACLK_ON Offset */
#define ACLK_ON                                            (0x00010000)          /* ACLK system clock status */
/* CSSTAT[MCLK_ON] Bits */
#define MCLK_ON_OFS                                        (17)                  /* MCLK_ON Offset */
#define MCLK_ON                                            (0x00020000)          /* MCLK system clock status */
/* CSSTAT[HSMCLK_ON] Bits */
#define HSMCLK_ON_OFS                                      (18)                  /* HSMCLK_ON Offset */
#define HSMCLK_ON                                          (0x00040000)          /* HSMCLK system clock status */
/* CSSTAT[SMCLK_ON] Bits */
#define SMCLK_ON_OFS                                       (19)                  /* SMCLK_ON Offset */
#define SMCLK_ON                                           (0x00080000)          /* SMCLK system clock status */
/* CSSTAT[MODCLK_ON] Bits */
#define MODCLK_ON_OFS                                      (20)                  /* MODCLK_ON Offset */
#define MODCLK_ON                                          (0x00100000)          /* MODCLK system clock status */
/* CSSTAT[VLOCLK_ON] Bits */
#define VLOCLK_ON_OFS                                      (21)                  /* VLOCLK_ON Offset */
#define VLOCLK_ON                                          (0x00200000)          /* VLOCLK system clock status */
/* CSSTAT[LFXTCLK_ON] Bits */
#define LFXTCLK_ON_OFS                                     (22)                  /* LFXTCLK_ON Offset */
#define LFXTCLK_ON                                         (0x00400000)          /* LFXTCLK system clock status */
/* CSSTAT[REFOCLK_ON] Bits */
#define REFOCLK_ON_OFS                                     (23)                  /* REFOCLK_ON Offset */
#define REFOCLK_ON                                         (0x00800000)          /* REFOCLK system clock status */
/* CSSTAT[ACLK_READY] Bits */
#define ACLK_READY_OFS                                     (24)                  /* ACLK_READY Offset */
#define ACLK_READY                                         (0x01000000)          /* ACLK Ready status */
/* CSSTAT[MCLK_READY] Bits */
#define MCLK_READY_OFS                                     (25)                  /* MCLK_READY Offset */
#define MCLK_READY                                         (0x02000000)          /* MCLK Ready status */
/* CSSTAT[HSMCLK_READY] Bits */
#define HSMCLK_READY_OFS                                   (26)                  /* HSMCLK_READY Offset */
#define HSMCLK_READY                                       (0x04000000)          /* HSMCLK Ready status */
/* CSSTAT[SMCLK_READY] Bits */
#define SMCLK_READY_OFS                                    (27)                  /* SMCLK_READY Offset */
#define SMCLK_READY                                        (0x08000000)          /* SMCLK Ready status */
/* CSSTAT[BCLK_READY] Bits */
#define BCLK_READY_OFS                                     (28)                  /* BCLK_READY Offset */
#define BCLK_READY                                         (0x10000000)          /* BCLK Ready status */
/* CSIE[LFXTIE] Bits */
#define LFXTIE_OFS                                         ( 0)                  /* LFXTIE Offset */
#define LFXTIE                                             (0x00000001)          /* LFXT oscillator fault flag interrupt enable */
/* CSIE[HFXTIE] Bits */
#define HFXTIE_OFS                                         ( 1)                  /* HFXTIE Offset */
#define HFXTIE                                             (0x00000002)          /* HFXT oscillator fault flag interrupt enable */
/* CSIE[HFXT2IE] Bits */
#define HFXT2IE_OFS                                        ( 2)                  /* HFXT2IE Offset */
#define HFXT2IE                                            (0x00000004)          /* HFXT2 oscillator fault flag interrupt enable */
/* CSIE[DCOMINIE] Bits */
#define DCOMINIE_OFS                                       ( 4)                  /* DCOMINIE Offset */
#define DCOMINIE                                           (0x00000010)          /* DCO minimum fault flag interrupt enable */
/* CSIE[DCOMAXIE] Bits */
#define DCOMAXIE_OFS                                       ( 5)                  /* DCOMAXIE Offset */
#define DCOMAXIE                                           (0x00000020)          /* DCO maximum fault flag interrupt enable */
/* CSIE[DCORIE] Bits */
#define DCORIE_OFS                                         ( 6)                  /* DCORIE Offset */
#define DCORIE                                             (0x00000040)          /* DCO external resistor fault flag interrupt enable */
/* CSIE[FCNTLFIE] Bits */
#define FCNTLFIE_OFS                                       ( 8)                  /* FCNTLFIE Offset */
#define FCNTLFIE                                           (0x00000100)          /* Start fault counter interrupt enable LFXT */
/* CSIE[FCNTHFIE] Bits */
#define FCNTHFIE_OFS                                       ( 9)                  /* FCNTHFIE Offset */
#define FCNTHFIE                                           (0x00000200)          /* Start fault counter interrupt enable HFXT */
/* CSIE[FCNTHF2IE] Bits */
#define FCNTHF2IE_OFS                                      (10)                  /* FCNTHF2IE Offset */
#define FCNTHF2IE                                          (0x00000400)          /* Start fault counter interrupt enable HFXT2 */
/* CSIE[PLLOOLIE] Bits */
#define PLLOOLIE_OFS                                       (12)                  /* PLLOOLIE Offset */
#define PLLOOLIE                                           (0x00001000)          /* PLL out-of-lock interrupt enable */
/* CSIE[PLLLOSIE] Bits */
#define PLLLOSIE_OFS                                       (13)                  /* PLLLOSIE Offset */
#define PLLLOSIE                                           (0x00002000)          /* PLL loss-of-signal interrupt enable */
/* CSIE[PLLOORIE] Bits */
#define PLLOORIE_OFS                                       (14)                  /* PLLOORIE Offset */
#define PLLOORIE                                           (0x00004000)          /* PLL out-of-range interrupt enable */
/* CSIE[CALIE] Bits */
#define CALIE_OFS                                          (15)                  /* CALIE Offset */
#define CALIE                                              (0x00008000)          /* REFCNT period counter interrupt enable */
/* CSIFG[LFXTIFG] Bits */
#define LFXTIFG_OFS                                        ( 0)                  /* LFXTIFG Offset */
#define LFXTIFG                                            (0x00000001)          /* LFXT oscillator fault flag */
/* CSIFG[HFXTIFG] Bits */
#define HFXTIFG_OFS                                        ( 1)                  /* HFXTIFG Offset */
#define HFXTIFG                                            (0x00000002)          /* HFXT oscillator fault flag */
/* CSIFG[HFXT2IFG] Bits */
#define HFXT2IFG_OFS                                       ( 2)                  /* HFXT2IFG Offset */
#define HFXT2IFG                                           (0x00000004)          /* HFXT2 oscillator fault flag */
/* CSIFG[DCOMINIFG] Bits */
#define DCOMINIFG_OFS                                      ( 4)                  /* DCOMINIFG Offset */
#define DCOMINIFG                                          (0x00000010)          /* DCO minimum fault flag */
/* CSIFG[DCOMAXIFG] Bits */
#define DCOMAXIFG_OFS                                      ( 5)                  /* DCOMAXIFG Offset */
#define DCOMAXIFG                                          (0x00000020)          /* DCO maximum fault flag */
/* CSIFG[DCORIFG] Bits */
#define DCORIFG_OFS                                        ( 6)                  /* DCORIFG Offset */
#define DCORIFG                                            (0x00000040)          /* DCO external resistor fault flag */
/* CSIFG[FCNTLFIFG] Bits */
#define FCNTLFIFG_OFS                                      ( 8)                  /* FCNTLFIFG Offset */
#define FCNTLFIFG                                          (0x00000100)          /* Start fault counter interrupt flag LFXT */
/* CSIFG[FCNTHFIFG] Bits */
#define FCNTHFIFG_OFS                                      ( 9)                  /* FCNTHFIFG Offset */
#define FCNTHFIFG                                          (0x00000200)          /* Start fault counter interrupt flag HFXT */
/* CSIFG[FCNTHF2IFG] Bits */
#define FCNTHF2IFG_OFS                                     (11)                  /* FCNTHF2IFG Offset */
#define FCNTHF2IFG                                         (0x00000800)          /* Start fault counter interrupt flag HFXT2 */
/* CSIFG[PLLOOLIFG] Bits */
#define PLLOOLIFG_OFS                                      (12)                  /* PLLOOLIFG Offset */
#define PLLOOLIFG                                          (0x00001000)          /* PLL out-of-lock interrupt flag */
/* CSIFG[PLLLOSIFG] Bits */
#define PLLLOSIFG_OFS                                      (13)                  /* PLLLOSIFG Offset */
#define PLLLOSIFG                                          (0x00002000)          /* PLL loss-of-signal interrupt flag */
/* CSIFG[PLLOORIFG] Bits */
#define PLLOORIFG_OFS                                      (14)                  /* PLLOORIFG Offset */
#define PLLOORIFG                                          (0x00004000)          /* PLL out-of-range interrupt flag */
/* CSIFG[CALIFG] Bits */
#define CALIFG_OFS                                         (15)                  /* CALIFG Offset */
#define CALIFG                                             (0x00008000)          /* REFCNT period counter expired */
/* CSCLRIFG[CLR_LFXTIFG] Bits */
#define CLR_LFXTIFG_OFS                                    ( 0)                  /* CLR_LFXTIFG Offset */
#define CLR_LFXTIFG                                        (0x00000001)          /* Clear LFXT oscillator fault interrupt flag */
/* CSCLRIFG[CLR_HFXTIFG] Bits */
#define CLR_HFXTIFG_OFS                                    ( 1)                  /* CLR_HFXTIFG Offset */
#define CLR_HFXTIFG                                        (0x00000002)          /* Clear HFXT oscillator fault interrupt flag */
/* CSCLRIFG[CLR_HFXT2IFG] Bits */
#define CLR_HFXT2IFG_OFS                                   ( 2)                  /* CLR_HFXT2IFG Offset */
#define CLR_HFXT2IFG                                       (0x00000004)          /* Clear HFXT2 oscillator fault interrupt flag */
/* CSCLRIFG[CLR_DCOMAXIFG] Bits */
#define CLR_DCOMAXIFG_OFS                                  ( 5)                  /* CLR_DCOMAXIFG Offset */
#define CLR_DCOMAXIFG                                      (0x00000020)          /* Clear DCO maximum fault interrupt flag */
/* CSCLRIFG[CLR_DCORIFG] Bits */
#define CLR_DCORIFG_OFS                                    ( 6)                  /* CLR_DCORIFG Offset */
#define CLR_DCORIFG                                        (0x00000040)          /* Clear DCO external resistor fault interrupt flag */
/* CSCLRIFG[CLR_CALIFG] Bits */
#define CLR_CALIFG_OFS                                     ( 7)                  /* CLR_CALIFG Offset */
#define CLR_CALIFG                                         (0x00000080)          /* REFCNT period counter clear interrupt flag */
/* CSCLRIFG[CLR_DCOMINIFG] Bits */
#define CLR_DCOMINIFG_OFS                                  ( 4)                  /* CLR_DCOMINIFG Offset */
#define CLR_DCOMINIFG                                      (0x00000010)          /* Clear DCO minimum fault interrupt flag */
/* CSCLRIFG[CLR_FCNTLFIFG] Bits */
#define CLR_FCNTLFIFG_OFS                                  ( 8)                  /* CLR_FCNTLFIFG Offset */
#define CLR_FCNTLFIFG                                      (0x00000100)          /* Start fault counter clear interrupt flag LFXT */
/* CSCLRIFG[CLR_FCNTHFIFG] Bits */
#define CLR_FCNTHFIFG_OFS                                  ( 9)                  /* CLR_FCNTHFIFG Offset */
#define CLR_FCNTHFIFG                                      (0x00000200)          /* Start fault counter clear interrupt flag HFXT */
/* CSCLRIFG[CLR_FCNTHF2IFG] Bits */
#define CLR_FCNTHF2IFG_OFS                                 (10)                  /* CLR_FCNTHF2IFG Offset */
#define CLR_FCNTHF2IFG                                     (0x00000400)          /* Start fault counter clear interrupt flag HFXT2 */
/* CSCLRIFG[CLR_PLLOOLIFG] Bits */
#define CLR_PLLOOLIFG_OFS                                  (12)                  /* CLR_PLLOOLIFG Offset */
#define CLR_PLLOOLIFG                                      (0x00001000)          /* PLL out-of-lock clear interrupt flag */
/* CSCLRIFG[CLR_PLLLOSIFG] Bits */
#define CLR_PLLLOSIFG_OFS                                  (13)                  /* CLR_PLLLOSIFG Offset */
#define CLR_PLLLOSIFG                                      (0x00002000)          /* PLL loss-of-signal clear interrupt flag */
/* CSCLRIFG[CLR_PLLOORIFG] Bits */
#define CLR_PLLOORIFG_OFS                                  (14)                  /* CLR_PLLOORIFG Offset */
#define CLR_PLLOORIFG                                      (0x00004000)          /* PLL out-of-range clear interrupt flag */
/* CSSETIFG[SET_LFXTIFG] Bits */
#define SET_LFXTIFG_OFS                                    ( 0)                  /* SET_LFXTIFG Offset */
#define SET_LFXTIFG                                        (0x00000001)          /* Set LFXT oscillator fault interrupt flag */
/* CSSETIFG[SET_HFXTIFG] Bits */
#define SET_HFXTIFG_OFS                                    ( 1)                  /* SET_HFXTIFG Offset */
#define SET_HFXTIFG                                        (0x00000002)          /* Set HFXT oscillator fault interrupt flag */
/* CSSETIFG[SET_HFXT2IFG] Bits */
#define SET_HFXT2IFG_OFS                                   ( 2)                  /* SET_HFXT2IFG Offset */
#define SET_HFXT2IFG                                       (0x00000004)          /* Set HFXT2 oscillator fault interrupt flag */
/* CSSETIFG[SET_DCOMINIFG] Bits */
#define SET_DCOMINIFG_OFS                                  ( 4)                  /* SET_DCOMINIFG Offset */
#define SET_DCOMINIFG                                      (0x00000010)          /* Set DCO minimum fault interrupt flag */
/* CSSETIFG[SET_DCOMAXIFG] Bits */
#define SET_DCOMAXIFG_OFS                                  ( 5)                  /* SET_DCOMAXIFG Offset */
#define SET_DCOMAXIFG                                      (0x00000020)          /* Set DCO maximum fault interrupt flag */
/* CSSETIFG[SET_DCORIFG] Bits */
#define SET_DCORIFG_OFS                                    ( 6)                  /* SET_DCORIFG Offset */
#define SET_DCORIFG                                        (0x00000040)          /* Set DCO external resistor fault interrupt flag */
/* CSSETIFG[SET_CALIFG] Bits */
#define SET_CALIFG_OFS                                     ( 7)                  /* SET_CALIFG Offset */
#define SET_CALIFG                                         (0x00000080)          /* REFCNT period counter set interrupt flag */
/* CSSETIFG[SET_FCNTHFIFG] Bits */
#define SET_FCNTHFIFG_OFS                                  ( 9)                  /* SET_FCNTHFIFG Offset */
#define SET_FCNTHFIFG                                      (0x00000200)          /* Start fault counter set interrupt flag HFXT */
/* CSSETIFG[SET_FCNTHF2IFG] Bits */
#define SET_FCNTHF2IFG_OFS                                 (10)                  /* SET_FCNTHF2IFG Offset */
#define SET_FCNTHF2IFG                                     (0x00000400)          /* Start fault counter set interrupt flag HFXT2 */
/* CSSETIFG[SET_FCNTLFIFG] Bits */
#define SET_FCNTLFIFG_OFS                                  ( 8)                  /* SET_FCNTLFIFG Offset */
#define SET_FCNTLFIFG                                      (0x00000100)          /* Start fault counter set interrupt flag LFXT */
/* CSSETIFG[SET_PLLOOLIFG] Bits */
#define SET_PLLOOLIFG_OFS                                  (12)                  /* SET_PLLOOLIFG Offset */
#define SET_PLLOOLIFG                                      (0x00001000)          /* PLL out-of-lock set interrupt flag */
/* CSSETIFG[SET_PLLLOSIFG] Bits */
#define SET_PLLLOSIFG_OFS                                  (13)                  /* SET_PLLLOSIFG Offset */
#define SET_PLLLOSIFG                                      (0x00002000)          /* PLL loss-of-signal set interrupt flag */
/* CSSETIFG[SET_PLLOORIFG] Bits */
#define SET_PLLOORIFG_OFS                                  (14)                  /* SET_PLLOORIFG Offset */
#define SET_PLLOORIFG                                      (0x00004000)          /* PLL out-of-range set interrupt flag */
/* CSDCOERCAL[DCO_TCTRIM] Bits */
#define DCO_TCTRIM_OFS                                     ( 0)                  /* DCO_TCTRIM Offset */
#define DCO_TCTRIM_M                                       (0x00000003)          /* DCO Temperature compensation Trim */
/* CSDCOERCAL[DCO_FTRIM] Bits */
#define DCO_FTRIM_OFS                                      (16)                  /* DCO_FTRIM Offset */
#define DCO_FTRIM_M                                        (0x07ff0000)          /* DCO frequency trim */

/* Pre-defined bitfield values */
#define CSKEY_VAL                                             (0x0000695A)          /* CS control key value */


//*****************************************************************************
// DIO Bits
//*****************************************************************************
/* PAIN[P1IN] Bits */
#define P1IN_OFS                                           ( 0)                  /* P1IN Offset */
#define P1IN_M                                             (0x00ff)              /* Port 1 Input */
/* PAIN[P2IN] Bits */
#define P2IN_OFS                                           ( 8)                  /* P2IN Offset */
#define P2IN_M                                             (0xff00)              /* Port 2 Input */
/* PAOUT[P2OUT] Bits */
#define P2OUT_OFS                                          ( 8)                  /* P2OUT Offset */
#define P2OUT_M                                            (0xff00)              /* Port 2 Output */
/* PAOUT[P1OUT] Bits */
#define P1OUT_OFS                                          ( 0)                  /* P1OUT Offset */
#define P1OUT_M                                            (0x00ff)              /* Port 1 Output */
/* PADIR[P1DIR] Bits */
#define P1DIR_OFS                                          ( 0)                  /* P1DIR Offset */
#define P1DIR_M                                            (0x00ff)              /* Port 1 Direction */
/* PADIR[P2DIR] Bits */
#define P2DIR_OFS                                          ( 8)                  /* P2DIR Offset */
#define P2DIR_M                                            (0xff00)              /* Port 2 Direction */
/* PAREN[P1REN] Bits */
#define P1REN_OFS                                          ( 0)                  /* P1REN Offset */
#define P1REN_M                                            (0x00ff)              /* Port 1 Resistor Enable */
/* PAREN[P2REN] Bits */
#define P2REN_OFS                                          ( 8)                  /* P2REN Offset */
#define P2REN_M                                            (0xff00)              /* Port 2 Resistor Enable */
/* PADS[P1DS] Bits */
#define P1DS_OFS                                           ( 0)                  /* P1DS Offset */
#define P1DS_M                                             (0x00ff)              /* Port 1 Drive Strength */
/* PADS[P2DS] Bits */
#define P2DS_OFS                                           ( 8)                  /* P2DS Offset */
#define P2DS_M                                             (0xff00)              /* Port 2 Drive Strength */
/* PASEL0[P1SEL0] Bits */
#define P1SEL0_OFS                                         ( 0)                  /* P1SEL0 Offset */
#define P1SEL0_M                                           (0x00ff)              /* Port 1 Select 0 */
/* PASEL0[P2SEL0] Bits */
#define P2SEL0_OFS                                         ( 8)                  /* P2SEL0 Offset */
#define P2SEL0_M                                           (0xff00)              /* Port 2 Select 0 */
/* PASEL1[P1SEL1] Bits */
#define P1SEL1_OFS                                         ( 0)                  /* P1SEL1 Offset */
#define P1SEL1_M                                           (0x00ff)              /* Port 1 Select 1 */
/* PASEL1[P2SEL1] Bits */
#define P2SEL1_OFS                                         ( 8)                  /* P2SEL1 Offset */
#define P2SEL1_M                                           (0xff00)              /* Port 2 Select 1 */
/* P1IV[P1IV] Bits */
#define P1IV_OFS                                           ( 0)                  /* P1IV Offset */
#define P1IV_M                                             (0x001f)              /* Port 1 interrupt vector value */
#define P1IV0                                              (0x0001)              /* Port 1 interrupt vector value */
#define P1IV1                                              (0x0002)              /* Port 1 interrupt vector value */
#define P1IV2                                              (0x0004)              /* Port 1 interrupt vector value */
#define P1IV3                                              (0x0008)              /* Port 1 interrupt vector value */
#define P1IV4                                              (0x0010)              /* Port 1 interrupt vector value */
#define P1IV_0                                             (0x0000)              /* No interrupt pending */
#define P1IV_2                                             (0x0002)              /* Interrupt Source: Port 1.0 interrupt; Interrupt Flag: P1IFG0; Interrupt Priority: Highest */
#define P1IV_4                                             (0x0004)              /* Interrupt Source: Port 1.1 interrupt; Interrupt Flag: P1IFG1 */
#define P1IV_6                                             (0x0006)              /* Interrupt Source: Port 1.2 interrupt; Interrupt Flag: P1IFG2 */
#define P1IV_8                                             (0x0008)              /* Interrupt Source: Port 1.3 interrupt; Interrupt Flag: P1IFG3 */
#define P1IV_10                                            (0x000a)              /* Interrupt Source: Port 1.4 interrupt; Interrupt Flag: P1IFG4 */
#define P1IV_12                                            (0x000c)              /* Interrupt Source: Port 1.5 interrupt; Interrupt Flag: P1IFG5 */
#define P1IV_14                                            (0x000e)              /* Interrupt Source: Port 1.6 interrupt; Interrupt Flag: P1IFG6 */
#define P1IV_16                                            (0x0010)              /* Interrupt Source: Port 1.7 interrupt; Interrupt Flag: P1IFG7; Interrupt Priority: Lowest */
#define P1IV__NONE                                         (0x0000)              /* No interrupt pending */
#define P1IV__P1IFG0                                       (0x0002)              /* Interrupt Source: Port 1.0 interrupt; Interrupt Flag: P1IFG0; Interrupt Priority: Highest */
#define P1IV__P1IFG1                                       (0x0004)              /* Interrupt Source: Port 1.1 interrupt; Interrupt Flag: P1IFG1 */
#define P1IV__P1IFG2                                       (0x0006)              /* Interrupt Source: Port 1.2 interrupt; Interrupt Flag: P1IFG2 */
#define P1IV__P1IFG3                                       (0x0008)              /* Interrupt Source: Port 1.3 interrupt; Interrupt Flag: P1IFG3 */
#define P1IV__P1IFG4                                       (0x000a)              /* Interrupt Source: Port 1.4 interrupt; Interrupt Flag: P1IFG4 */
#define P1IV__P1IFG5                                       (0x000c)              /* Interrupt Source: Port 1.5 interrupt; Interrupt Flag: P1IFG5 */
#define P1IV__P1IFG6                                       (0x000e)              /* Interrupt Source: Port 1.6 interrupt; Interrupt Flag: P1IFG6 */
#define P1IV__P1IFG7                                       (0x0010)              /* Interrupt Source: Port 1.7 interrupt; Interrupt Flag: P1IFG7; Interrupt Priority: Lowest */
/* PASELC[P1SELC] Bits */
#define P1SELC_OFS                                         ( 0)                  /* P1SELC Offset */
#define P1SELC_M                                           (0x00ff)              /* Port 1 Complement Select */
/* PASELC[P2SELC] Bits */
#define P2SELC_OFS                                         ( 8)                  /* P2SELC Offset */
#define P2SELC_M                                           (0xff00)              /* Port 2 Complement Select */
/* PAIES[P1IES] Bits */
#define P1IES_OFS                                          ( 0)                  /* P1IES Offset */
#define P1IES_M                                            (0x00ff)              /* Port 1 Interrupt Edge Select */
/* PAIES[P2IES] Bits */
#define P2IES_OFS                                          ( 8)                  /* P2IES Offset */
#define P2IES_M                                            (0xff00)              /* Port 2 Interrupt Edge Select */
/* PAIE[P1IE] Bits */
#define P1IE_OFS                                           ( 0)                  /* P1IE Offset */
#define P1IE_M                                             (0x00ff)              /* Port 1 Interrupt Enable */
/* PAIE[P2IE] Bits */
#define P2IE_OFS                                           ( 8)                  /* P2IE Offset */
#define P2IE_M                                             (0xff00)              /* Port 2 Interrupt Enable */
/* PAIFG[P1IFG] Bits */
#define P1IFG_OFS                                          ( 0)                  /* P1IFG Offset */
#define P1IFG_M                                            (0x00ff)              /* Port 1 Interrupt Flag */
/* PAIFG[P2IFG] Bits */
#define P2IFG_OFS                                          ( 8)                  /* P2IFG Offset */
#define P2IFG_M                                            (0xff00)              /* Port 2 Interrupt Flag */
/* P2IV[P2IV] Bits */
#define P2IV_OFS                                           ( 0)                  /* P2IV Offset */
#define P2IV_M                                             (0x001f)              /* Port 2 interrupt vector value */
#define P2IV0                                              (0x0001)              /* Port 2 interrupt vector value */
#define P2IV1                                              (0x0002)              /* Port 2 interrupt vector value */
#define P2IV2                                              (0x0004)              /* Port 2 interrupt vector value */
#define P2IV3                                              (0x0008)              /* Port 2 interrupt vector value */
#define P2IV4                                              (0x0010)              /* Port 2 interrupt vector value */
#define P2IV_0                                             (0x0000)              /* No interrupt pending */
#define P2IV_2                                             (0x0002)              /* Interrupt Source: Port 2.0 interrupt; Interrupt Flag: P2IFG0; Interrupt Priority: Highest */
#define P2IV_4                                             (0x0004)              /* Interrupt Source: Port 2.1 interrupt; Interrupt Flag: P2IFG1 */
#define P2IV_6                                             (0x0006)              /* Interrupt Source: Port 2.2 interrupt; Interrupt Flag: P2IFG2 */
#define P2IV_8                                             (0x0008)              /* Interrupt Source: Port 2.3 interrupt; Interrupt Flag: P2IFG3 */
#define P2IV_10                                            (0x000a)              /* Interrupt Source: Port 2.4 interrupt; Interrupt Flag: P2IFG4 */
#define P2IV_12                                            (0x000c)              /* Interrupt Source: Port 2.5 interrupt; Interrupt Flag: P2IFG5 */
#define P2IV_14                                            (0x000e)              /* Interrupt Source: Port 2.6 interrupt; Interrupt Flag: P2IFG6 */
#define P2IV_16                                            (0x0010)              /* Interrupt Source: Port 2.7 interrupt; Interrupt Flag: P2IFG7; Interrupt Priority: Lowest */
#define P2IV__NONE                                         (0x0000)              /* No interrupt pending */
#define P2IV__P2IFG0                                       (0x0002)              /* Interrupt Source: Port 2.0 interrupt; Interrupt Flag: P2IFG0; Interrupt Priority: Highest */
#define P2IV__P2IFG1                                       (0x0004)              /* Interrupt Source: Port 2.1 interrupt; Interrupt Flag: P2IFG1 */
#define P2IV__P2IFG2                                       (0x0006)              /* Interrupt Source: Port 2.2 interrupt; Interrupt Flag: P2IFG2 */
#define P2IV__P2IFG3                                       (0x0008)              /* Interrupt Source: Port 2.3 interrupt; Interrupt Flag: P2IFG3 */
#define P2IV__P2IFG4                                       (0x000a)              /* Interrupt Source: Port 2.4 interrupt; Interrupt Flag: P2IFG4 */
#define P2IV__P2IFG5                                       (0x000c)              /* Interrupt Source: Port 2.5 interrupt; Interrupt Flag: P2IFG5 */
#define P2IV__P2IFG6                                       (0x000e)              /* Interrupt Source: Port 2.6 interrupt; Interrupt Flag: P2IFG6 */
#define P2IV__P2IFG7                                       (0x0010)              /* Interrupt Source: Port 2.7 interrupt; Interrupt Flag: P2IFG7; Interrupt Priority: Lowest */
/* PBIN[P3IN] Bits */
#define P3IN_OFS                                           ( 0)                  /* P3IN Offset */
#define P3IN_M                                             (0x00ff)              /* Port 3 Input */
/* PBIN[P4IN] Bits */
#define P4IN_OFS                                           ( 8)                  /* P4IN Offset */
#define P4IN_M                                             (0xff00)              /* Port 4 Input */
/* PBOUT[P3OUT] Bits */
#define P3OUT_OFS                                          ( 0)                  /* P3OUT Offset */
#define P3OUT_M                                            (0x00ff)              /* Port 3 Output */
/* PBOUT[P4OUT] Bits */
#define P4OUT_OFS                                          ( 8)                  /* P4OUT Offset */
#define P4OUT_M                                            (0xff00)              /* Port 4 Output */
/* PBDIR[P3DIR] Bits */
#define P3DIR_OFS                                          ( 0)                  /* P3DIR Offset */
#define P3DIR_M                                            (0x00ff)              /* Port 3 Direction */
/* PBDIR[P4DIR] Bits */
#define P4DIR_OFS                                          ( 8)                  /* P4DIR Offset */
#define P4DIR_M                                            (0xff00)              /* Port 4 Direction */
/* PBREN[P3REN] Bits */
#define P3REN_OFS                                          ( 0)                  /* P3REN Offset */
#define P3REN_M                                            (0x00ff)              /* Port 3 Resistor Enable */
/* PBREN[P4REN] Bits */
#define P4REN_OFS                                          ( 8)                  /* P4REN Offset */
#define P4REN_M                                            (0xff00)              /* Port 4 Resistor Enable */
/* PBDS[P3DS] Bits */
#define P3DS_OFS                                           ( 0)                  /* P3DS Offset */
#define P3DS_M                                             (0x00ff)              /* Port 3 Drive Strength */
/* PBDS[P4DS] Bits */
#define P4DS_OFS                                           ( 8)                  /* P4DS Offset */
#define P4DS_M                                             (0xff00)              /* Port 4 Drive Strength */
/* PBSEL0[P4SEL0] Bits */
#define P4SEL0_OFS                                         ( 8)                  /* P4SEL0 Offset */
#define P4SEL0_M                                           (0xff00)              /* Port 4 Select 0 */
/* PBSEL0[P3SEL0] Bits */
#define P3SEL0_OFS                                         ( 0)                  /* P3SEL0 Offset */
#define P3SEL0_M                                           (0x00ff)              /* Port 3 Select 0 */
/* PBSEL1[P3SEL1] Bits */
#define P3SEL1_OFS                                         ( 0)                  /* P3SEL1 Offset */
#define P3SEL1_M                                           (0x00ff)              /* Port 3 Select 1 */
/* PBSEL1[P4SEL1] Bits */
#define P4SEL1_OFS                                         ( 8)                  /* P4SEL1 Offset */
#define P4SEL1_M                                           (0xff00)              /* Port 4 Select 1 */
/* P3IV[P3IV] Bits */
#define P3IV_OFS                                           ( 0)                  /* P3IV Offset */
#define P3IV_M                                             (0x001f)              /* Port 3 interrupt vector value */
#define P3IV0                                              (0x0001)              /* Port 3 interrupt vector value */
#define P3IV1                                              (0x0002)              /* Port 3 interrupt vector value */
#define P3IV2                                              (0x0004)              /* Port 3 interrupt vector value */
#define P3IV3                                              (0x0008)              /* Port 3 interrupt vector value */
#define P3IV4                                              (0x0010)              /* Port 3 interrupt vector value */
#define P3IV_0                                             (0x0000)              /* No interrupt pending */
#define P3IV_2                                             (0x0002)              /* Interrupt Source: Port 3.0 interrupt; Interrupt Flag: P3IFG0; Interrupt Priority: Highest */
#define P3IV_4                                             (0x0004)              /* Interrupt Source: Port 3.1 interrupt; Interrupt Flag: P3IFG1 */
#define P3IV_6                                             (0x0006)              /* Interrupt Source: Port 3.2 interrupt; Interrupt Flag: P3IFG2 */
#define P3IV_8                                             (0x0008)              /* Interrupt Source: Port 3.3 interrupt; Interrupt Flag: P3IFG3 */
#define P3IV_10                                            (0x000a)              /* Interrupt Source: Port 3.4 interrupt; Interrupt Flag: P3IFG4 */
#define P3IV_12                                            (0x000c)              /* Interrupt Source: Port 3.5 interrupt; Interrupt Flag: P3IFG5 */
#define P3IV_14                                            (0x000e)              /* Interrupt Source: Port 3.6 interrupt; Interrupt Flag: P3IFG6 */
#define P3IV_16                                            (0x0010)              /* Interrupt Source: Port 3.7 interrupt; Interrupt Flag: P3IFG7; Interrupt Priority: Lowest */
#define P3IV__NONE                                         (0x0000)              /* No interrupt pending */
#define P3IV__P3IFG0                                       (0x0002)              /* Interrupt Source: Port 3.0 interrupt; Interrupt Flag: P3IFG0; Interrupt Priority: Highest */
#define P3IV__P3IFG1                                       (0x0004)              /* Interrupt Source: Port 3.1 interrupt; Interrupt Flag: P3IFG1 */
#define P3IV__P3IFG2                                       (0x0006)              /* Interrupt Source: Port 3.2 interrupt; Interrupt Flag: P3IFG2 */
#define P3IV__P3IFG3                                       (0x0008)              /* Interrupt Source: Port 3.3 interrupt; Interrupt Flag: P3IFG3 */
#define P3IV__P3IFG4                                       (0x000a)              /* Interrupt Source: Port 3.4 interrupt; Interrupt Flag: P3IFG4 */
#define P3IV__P3IFG5                                       (0x000c)              /* Interrupt Source: Port 3.5 interrupt; Interrupt Flag: P3IFG5 */
#define P3IV__P3IFG6                                       (0x000e)              /* Interrupt Source: Port 3.6 interrupt; Interrupt Flag: P3IFG6 */
#define P3IV__P3IFG7                                       (0x0010)              /* Interrupt Source: Port 3.7 interrupt; Interrupt Flag: P3IFG7; Interrupt Priority: Lowest */
/* PBSELC[P3SELC] Bits */
#define P3SELC_OFS                                         ( 0)                  /* P3SELC Offset */
#define P3SELC_M                                           (0x00ff)              /* Port 3 Complement Select */
/* PBSELC[P4SELC] Bits */
#define P4SELC_OFS                                         ( 8)                  /* P4SELC Offset */
#define P4SELC_M                                           (0xff00)              /* Port 4 Complement Select */
/* PBIES[P3IES] Bits */
#define P3IES_OFS                                          ( 0)                  /* P3IES Offset */
#define P3IES_M                                            (0x00ff)              /* Port 3 Interrupt Edge Select */
/* PBIES[P4IES] Bits */
#define P4IES_OFS                                          ( 8)                  /* P4IES Offset */
#define P4IES_M                                            (0xff00)              /* Port 4 Interrupt Edge Select */
/* PBIE[P3IE] Bits */
#define P3IE_OFS                                           ( 0)                  /* P3IE Offset */
#define P3IE_M                                             (0x00ff)              /* Port 3 Interrupt Enable */
/* PBIE[P4IE] Bits */
#define P4IE_OFS                                           ( 8)                  /* P4IE Offset */
#define P4IE_M                                             (0xff00)              /* Port 4 Interrupt Enable */
/* PBIFG[P3IFG] Bits */
#define P3IFG_OFS                                          ( 0)                  /* P3IFG Offset */
#define P3IFG_M                                            (0x00ff)              /* Port 3 Interrupt Flag */
/* PBIFG[P4IFG] Bits */
#define P4IFG_OFS                                          ( 8)                  /* P4IFG Offset */
#define P4IFG_M                                            (0xff00)              /* Port 4 Interrupt Flag */
/* P4IV[P4IV] Bits */
#define P4IV_OFS                                           ( 0)                  /* P4IV Offset */
#define P4IV_M                                             (0x001f)              /* Port 4 interrupt vector value */
#define P4IV0                                              (0x0001)              /* Port 4 interrupt vector value */
#define P4IV1                                              (0x0002)              /* Port 4 interrupt vector value */
#define P4IV2                                              (0x0004)              /* Port 4 interrupt vector value */
#define P4IV3                                              (0x0008)              /* Port 4 interrupt vector value */
#define P4IV4                                              (0x0010)              /* Port 4 interrupt vector value */
#define P4IV_0                                             (0x0000)              /* No interrupt pending */
#define P4IV_2                                             (0x0002)              /* Interrupt Source: Port 4.0 interrupt; Interrupt Flag: P4IFG0; Interrupt Priority: Highest */
#define P4IV_4                                             (0x0004)              /* Interrupt Source: Port 4.1 interrupt; Interrupt Flag: P4IFG1 */
#define P4IV_6                                             (0x0006)              /* Interrupt Source: Port 4.2 interrupt; Interrupt Flag: P4IFG2 */
#define P4IV_8                                             (0x0008)              /* Interrupt Source: Port 4.3 interrupt; Interrupt Flag: P4IFG3 */
#define P4IV_10                                            (0x000a)              /* Interrupt Source: Port 4.4 interrupt; Interrupt Flag: P4IFG4 */
#define P4IV_12                                            (0x000c)              /* Interrupt Source: Port 4.5 interrupt; Interrupt Flag: P4IFG5 */
#define P4IV_14                                            (0x000e)              /* Interrupt Source: Port 4.6 interrupt; Interrupt Flag: P4IFG6 */
#define P4IV_16                                            (0x0010)              /* Interrupt Source: Port 4.7 interrupt; Interrupt Flag: P4IFG7; Interrupt Priority: Lowest */
#define P4IV__NONE                                         (0x0000)              /* No interrupt pending */
#define P4IV__P4IFG0                                       (0x0002)              /* Interrupt Source: Port 4.0 interrupt; Interrupt Flag: P4IFG0; Interrupt Priority: Highest */
#define P4IV__P4IFG1                                       (0x0004)              /* Interrupt Source: Port 4.1 interrupt; Interrupt Flag: P4IFG1 */
#define P4IV__P4IFG2                                       (0x0006)              /* Interrupt Source: Port 4.2 interrupt; Interrupt Flag: P4IFG2 */
#define P4IV__P4IFG3                                       (0x0008)              /* Interrupt Source: Port 4.3 interrupt; Interrupt Flag: P4IFG3 */
#define P4IV__P4IFG4                                       (0x000a)              /* Interrupt Source: Port 4.4 interrupt; Interrupt Flag: P4IFG4 */
#define P4IV__P4IFG5                                       (0x000c)              /* Interrupt Source: Port 4.5 interrupt; Interrupt Flag: P4IFG5 */
#define P4IV__P4IFG6                                       (0x000e)              /* Interrupt Source: Port 4.6 interrupt; Interrupt Flag: P4IFG6 */
#define P4IV__P4IFG7                                       (0x0010)              /* Interrupt Source: Port 4.7 interrupt; Interrupt Flag: P4IFG7; Interrupt Priority: Lowest */
/* PCIN[P5IN] Bits */
#define P5IN_OFS                                           ( 0)                  /* P5IN Offset */
#define P5IN_M                                             (0x00ff)              /* Port 5 Input */
/* PCIN[P6IN] Bits */
#define P6IN_OFS                                           ( 8)                  /* P6IN Offset */
#define P6IN_M                                             (0xff00)              /* Port 6 Input */
/* PCOUT[P5OUT] Bits */
#define P5OUT_OFS                                          ( 0)                  /* P5OUT Offset */
#define P5OUT_M                                            (0x00ff)              /* Port 5 Output */
/* PCOUT[P6OUT] Bits */
#define P6OUT_OFS                                          ( 8)                  /* P6OUT Offset */
#define P6OUT_M                                            (0xff00)              /* Port 6 Output */
/* PCDIR[P5DIR] Bits */
#define P5DIR_OFS                                          ( 0)                  /* P5DIR Offset */
#define P5DIR_M                                            (0x00ff)              /* Port 5 Direction */
/* PCDIR[P6DIR] Bits */
#define P6DIR_OFS                                          ( 8)                  /* P6DIR Offset */
#define P6DIR_M                                            (0xff00)              /* Port 6 Direction */
/* PCREN[P5REN] Bits */
#define P5REN_OFS                                          ( 0)                  /* P5REN Offset */
#define P5REN_M                                            (0x00ff)              /* Port 5 Resistor Enable */
/* PCREN[P6REN] Bits */
#define P6REN_OFS                                          ( 8)                  /* P6REN Offset */
#define P6REN_M                                            (0xff00)              /* Port 6 Resistor Enable */
/* PCDS[P5DS] Bits */
#define P5DS_OFS                                           ( 0)                  /* P5DS Offset */
#define P5DS_M                                             (0x00ff)              /* Port 5 Drive Strength */
/* PCDS[P6DS] Bits */
#define P6DS_OFS                                           ( 8)                  /* P6DS Offset */
#define P6DS_M                                             (0xff00)              /* Port 6 Drive Strength */
/* PCSEL0[P5SEL0] Bits */
#define P5SEL0_OFS                                         ( 0)                  /* P5SEL0 Offset */
#define P5SEL0_M                                           (0x00ff)              /* Port 5 Select 0 */
/* PCSEL0[P6SEL0] Bits */
#define P6SEL0_OFS                                         ( 8)                  /* P6SEL0 Offset */
#define P6SEL0_M                                           (0xff00)              /* Port 6 Select 0 */
/* PCSEL1[P5SEL1] Bits */
#define P5SEL1_OFS                                         ( 0)                  /* P5SEL1 Offset */
#define P5SEL1_M                                           (0x00ff)              /* Port 5 Select 1 */
/* PCSEL1[P6SEL1] Bits */
#define P6SEL1_OFS                                         ( 8)                  /* P6SEL1 Offset */
#define P6SEL1_M                                           (0xff00)              /* Port 6 Select 1 */
/* P5IV[P5IV] Bits */
#define P5IV_OFS                                           ( 0)                  /* P5IV Offset */
#define P5IV_M                                             (0x001f)              /* Port 5 interrupt vector value */
#define P5IV0                                              (0x0001)              /* Port 5 interrupt vector value */
#define P5IV1                                              (0x0002)              /* Port 5 interrupt vector value */
#define P5IV2                                              (0x0004)              /* Port 5 interrupt vector value */
#define P5IV3                                              (0x0008)              /* Port 5 interrupt vector value */
#define P5IV4                                              (0x0010)              /* Port 5 interrupt vector value */
#define P5IV_0                                             (0x0000)              /* No interrupt pending */
#define P5IV_2                                             (0x0002)              /* Interrupt Source: Port 5.0 interrupt; Interrupt Flag: P5IFG0; Interrupt Priority: Highest */
#define P5IV_4                                             (0x0004)              /* Interrupt Source: Port 5.1 interrupt; Interrupt Flag: P5IFG1 */
#define P5IV_6                                             (0x0006)              /* Interrupt Source: Port 5.2 interrupt; Interrupt Flag: P5IFG2 */
#define P5IV_8                                             (0x0008)              /* Interrupt Source: Port 5.3 interrupt; Interrupt Flag: P5IFG3 */
#define P5IV_10                                            (0x000a)              /* Interrupt Source: Port 5.4 interrupt; Interrupt Flag: P5IFG4 */
#define P5IV_12                                            (0x000c)              /* Interrupt Source: Port 5.5 interrupt; Interrupt Flag: P5IFG5 */
#define P5IV_14                                            (0x000e)              /* Interrupt Source: Port 5.6 interrupt; Interrupt Flag: P5IFG6 */
#define P5IV_16                                            (0x0010)              /* Interrupt Source: Port 5.7 interrupt; Interrupt Flag: P5IFG7; Interrupt Priority: Lowest */
#define P5IV__NONE                                         (0x0000)              /* No interrupt pending */
#define P5IV__P5IFG0                                       (0x0002)              /* Interrupt Source: Port 5.0 interrupt; Interrupt Flag: P5IFG0; Interrupt Priority: Highest */
#define P5IV__P5IFG1                                       (0x0004)              /* Interrupt Source: Port 5.1 interrupt; Interrupt Flag: P5IFG1 */
#define P5IV__P5IFG2                                       (0x0006)              /* Interrupt Source: Port 5.2 interrupt; Interrupt Flag: P5IFG2 */
#define P5IV__P5IFG3                                       (0x0008)              /* Interrupt Source: Port 5.3 interrupt; Interrupt Flag: P5IFG3 */
#define P5IV__P5IFG4                                       (0x000a)              /* Interrupt Source: Port 5.4 interrupt; Interrupt Flag: P5IFG4 */
#define P5IV__P5IFG5                                       (0x000c)              /* Interrupt Source: Port 5.5 interrupt; Interrupt Flag: P5IFG5 */
#define P5IV__P5IFG6                                       (0x000e)              /* Interrupt Source: Port 5.6 interrupt; Interrupt Flag: P5IFG6 */
#define P5IV__P5IFG7                                       (0x0010)              /* Interrupt Source: Port 5.7 interrupt; Interrupt Flag: P5IFG7; Interrupt Priority: Lowest */
/* PCSELC[P5SELC] Bits */
#define P5SELC_OFS                                         ( 0)                  /* P5SELC Offset */
#define P5SELC_M                                           (0x00ff)              /* Port 5 Complement Select */
/* PCSELC[P6SELC] Bits */
#define P6SELC_OFS                                         ( 8)                  /* P6SELC Offset */
#define P6SELC_M                                           (0xff00)              /* Port 6 Complement Select */
/* PCIES[P5IES] Bits */
#define P5IES_OFS                                          ( 0)                  /* P5IES Offset */
#define P5IES_M                                            (0x00ff)              /* Port 5 Interrupt Edge Select */
/* PCIES[P6IES] Bits */
#define P6IES_OFS                                          ( 8)                  /* P6IES Offset */
#define P6IES_M                                            (0xff00)              /* Port 6 Interrupt Edge Select */
/* PCIE[P5IE] Bits */
#define P5IE_OFS                                           ( 0)                  /* P5IE Offset */
#define P5IE_M                                             (0x00ff)              /* Port 5 Interrupt Enable */
/* PCIE[P6IE] Bits */
#define P6IE_OFS                                           ( 8)                  /* P6IE Offset */
#define P6IE_M                                             (0xff00)              /* Port 6 Interrupt Enable */
/* PCIFG[P5IFG] Bits */
#define P5IFG_OFS                                          ( 0)                  /* P5IFG Offset */
#define P5IFG_M                                            (0x00ff)              /* Port 5 Interrupt Flag */
/* PCIFG[P6IFG] Bits */
#define P6IFG_OFS                                          ( 8)                  /* P6IFG Offset */
#define P6IFG_M                                            (0xff00)              /* Port 6 Interrupt Flag */
/* P6IV[P6IV] Bits */
#define P6IV_OFS                                           ( 0)                  /* P6IV Offset */
#define P6IV_M                                             (0x001f)              /* Port 6 interrupt vector value */
#define P6IV0                                              (0x0001)              /* Port 6 interrupt vector value */
#define P6IV1                                              (0x0002)              /* Port 6 interrupt vector value */
#define P6IV2                                              (0x0004)              /* Port 6 interrupt vector value */
#define P6IV3                                              (0x0008)              /* Port 6 interrupt vector value */
#define P6IV4                                              (0x0010)              /* Port 6 interrupt vector value */
#define P6IV_0                                             (0x0000)              /* No interrupt pending */
#define P6IV_2                                             (0x0002)              /* Interrupt Source: Port 6.0 interrupt; Interrupt Flag: P6IFG0; Interrupt Priority: Highest */
#define P6IV_4                                             (0x0004)              /* Interrupt Source: Port 6.1 interrupt; Interrupt Flag: P6IFG1 */
#define P6IV_6                                             (0x0006)              /* Interrupt Source: Port 6.2 interrupt; Interrupt Flag: P6IFG2 */
#define P6IV_8                                             (0x0008)              /* Interrupt Source: Port 6.3 interrupt; Interrupt Flag: P6IFG3 */
#define P6IV_10                                            (0x000a)              /* Interrupt Source: Port 6.4 interrupt; Interrupt Flag: P6IFG4 */
#define P6IV_12                                            (0x000c)              /* Interrupt Source: Port 6.5 interrupt; Interrupt Flag: P6IFG5 */
#define P6IV_14                                            (0x000e)              /* Interrupt Source: Port 6.6 interrupt; Interrupt Flag: P6IFG6 */
#define P6IV_16                                            (0x0010)              /* Interrupt Source: Port 6.7 interrupt; Interrupt Flag: P6IFG7; Interrupt Priority: Lowest */
#define P6IV__NONE                                         (0x0000)              /* No interrupt pending */
#define P6IV__P6IFG0                                       (0x0002)              /* Interrupt Source: Port 6.0 interrupt; Interrupt Flag: P6IFG0; Interrupt Priority: Highest */
#define P6IV__P6IFG1                                       (0x0004)              /* Interrupt Source: Port 6.1 interrupt; Interrupt Flag: P6IFG1 */
#define P6IV__P6IFG2                                       (0x0006)              /* Interrupt Source: Port 6.2 interrupt; Interrupt Flag: P6IFG2 */
#define P6IV__P6IFG3                                       (0x0008)              /* Interrupt Source: Port 6.3 interrupt; Interrupt Flag: P6IFG3 */
#define P6IV__P6IFG4                                       (0x000a)              /* Interrupt Source: Port 6.4 interrupt; Interrupt Flag: P6IFG4 */
#define P6IV__P6IFG5                                       (0x000c)              /* Interrupt Source: Port 6.5 interrupt; Interrupt Flag: P6IFG5 */
#define P6IV__P6IFG6                                       (0x000e)              /* Interrupt Source: Port 6.6 interrupt; Interrupt Flag: P6IFG6 */
#define P6IV__P6IFG7                                       (0x0010)              /* Interrupt Source: Port 6.7 interrupt; Interrupt Flag: P6IFG7; Interrupt Priority: Lowest */
/* PDIN[P7IN] Bits */
#define P7IN_OFS                                           ( 0)                  /* P7IN Offset */
#define P7IN_M                                             (0x00ff)              /* Port 7 Input */
/* PDIN[P8IN] Bits */
#define P8IN_OFS                                           ( 8)                  /* P8IN Offset */
#define P8IN_M                                             (0xff00)              /* Port 8 Input */
/* PDOUT[P7OUT] Bits */
#define P7OUT_OFS                                          ( 0)                  /* P7OUT Offset */
#define P7OUT_M                                            (0x00ff)              /* Port 7 Output */
/* PDOUT[P8OUT] Bits */
#define P8OUT_OFS                                          ( 8)                  /* P8OUT Offset */
#define P8OUT_M                                            (0xff00)              /* Port 8 Output */
/* PDDIR[P7DIR] Bits */
#define P7DIR_OFS                                          ( 0)                  /* P7DIR Offset */
#define P7DIR_M                                            (0x00ff)              /* Port 7 Direction */
/* PDDIR[P8DIR] Bits */
#define P8DIR_OFS                                          ( 8)                  /* P8DIR Offset */
#define P8DIR_M                                            (0xff00)              /* Port 8 Direction */
/* PDREN[P7REN] Bits */
#define P7REN_OFS                                          ( 0)                  /* P7REN Offset */
#define P7REN_M                                            (0x00ff)              /* Port 7 Resistor Enable */
/* PDREN[P8REN] Bits */
#define P8REN_OFS                                          ( 8)                  /* P8REN Offset */
#define P8REN_M                                            (0xff00)              /* Port 8 Resistor Enable */
/* PDDS[P7DS] Bits */
#define P7DS_OFS                                           ( 0)                  /* P7DS Offset */
#define P7DS_M                                             (0x00ff)              /* Port 7 Drive Strength */
/* PDDS[P8DS] Bits */
#define P8DS_OFS                                           ( 8)                  /* P8DS Offset */
#define P8DS_M                                             (0xff00)              /* Port 8 Drive Strength */
/* PDSEL0[P7SEL0] Bits */
#define P7SEL0_OFS                                         ( 0)                  /* P7SEL0 Offset */
#define P7SEL0_M                                           (0x00ff)              /* Port 7 Select 0 */
/* PDSEL0[P8SEL0] Bits */
#define P8SEL0_OFS                                         ( 8)                  /* P8SEL0 Offset */
#define P8SEL0_M                                           (0xff00)              /* Port 8 Select 0 */
/* PDSEL1[P7SEL1] Bits */
#define P7SEL1_OFS                                         ( 0)                  /* P7SEL1 Offset */
#define P7SEL1_M                                           (0x00ff)              /* Port 7 Select 1 */
/* PDSEL1[P8SEL1] Bits */
#define P8SEL1_OFS                                         ( 8)                  /* P8SEL1 Offset */
#define P8SEL1_M                                           (0xff00)              /* Port 8 Select 1 */
/* P7IV[P7IV] Bits */
#define P7IV_OFS                                           ( 0)                  /* P7IV Offset */
#define P7IV_M                                             (0x001f)              /* Port 7 interrupt vector value */
#define P7IV0                                              (0x0001)              /* Port 7 interrupt vector value */
#define P7IV1                                              (0x0002)              /* Port 7 interrupt vector value */
#define P7IV2                                              (0x0004)              /* Port 7 interrupt vector value */
#define P7IV3                                              (0x0008)              /* Port 7 interrupt vector value */
#define P7IV4                                              (0x0010)              /* Port 7 interrupt vector value */
#define P7IV_0                                             (0x0000)              /* No interrupt pending */
#define P7IV_2                                             (0x0002)              /* Interrupt Source: Port 7.0 interrupt; Interrupt Flag: P7IFG0; Interrupt Priority: Highest */
#define P7IV_4                                             (0x0004)              /* Interrupt Source: Port 7.1 interrupt; Interrupt Flag: P7IFG1 */
#define P7IV_6                                             (0x0006)              /* Interrupt Source: Port 7.2 interrupt; Interrupt Flag: P7IFG2 */
#define P7IV_8                                             (0x0008)              /* Interrupt Source: Port 7.3 interrupt; Interrupt Flag: P7IFG3 */
#define P7IV_10                                            (0x000a)              /* Interrupt Source: Port 7.4 interrupt; Interrupt Flag: P7IFG4 */
#define P7IV_12                                            (0x000c)              /* Interrupt Source: Port 7.5 interrupt; Interrupt Flag: P7IFG5 */
#define P7IV_14                                            (0x000e)              /* Interrupt Source: Port 7.6 interrupt; Interrupt Flag: P7IFG6 */
#define P7IV_16                                            (0x0010)              /* Interrupt Source: Port 7.7 interrupt; Interrupt Flag: P7IFG7; Interrupt Priority: Lowest */
#define P7IV__NONE                                         (0x0000)              /* No interrupt pending */
#define P7IV__P7IFG0                                       (0x0002)              /* Interrupt Source: Port 7.0 interrupt; Interrupt Flag: P7IFG0; Interrupt Priority: Highest */
#define P7IV__P7IFG1                                       (0x0004)              /* Interrupt Source: Port 7.1 interrupt; Interrupt Flag: P7IFG1 */
#define P7IV__P7IFG2                                       (0x0006)              /* Interrupt Source: Port 7.2 interrupt; Interrupt Flag: P7IFG2 */
#define P7IV__P7IFG3                                       (0x0008)              /* Interrupt Source: Port 7.3 interrupt; Interrupt Flag: P7IFG3 */
#define P7IV__P7IFG4                                       (0x000a)              /* Interrupt Source: Port 7.4 interrupt; Interrupt Flag: P7IFG4 */
#define P7IV__P7IFG5                                       (0x000c)              /* Interrupt Source: Port 7.5 interrupt; Interrupt Flag: P7IFG5 */
#define P7IV__P7IFG6                                       (0x000e)              /* Interrupt Source: Port 7.6 interrupt; Interrupt Flag: P7IFG6 */
#define P7IV__P7IFG7                                       (0x0010)              /* Interrupt Source: Port 7.7 interrupt; Interrupt Flag: P7IFG7; Interrupt Priority: Lowest */
/* PDSELC[P7SELC] Bits */
#define P7SELC_OFS                                         ( 0)                  /* P7SELC Offset */
#define P7SELC_M                                           (0x00ff)              /* Port 7 Complement Select */
/* PDSELC[P8SELC] Bits */
#define P8SELC_OFS                                         ( 8)                  /* P8SELC Offset */
#define P8SELC_M                                           (0xff00)              /* Port 8 Complement Select */
/* PDIES[P7IES] Bits */
#define P7IES_OFS                                          ( 0)                  /* P7IES Offset */
#define P7IES_M                                            (0x00ff)              /* Port 7 Interrupt Edge Select */
/* PDIES[P8IES] Bits */
#define P8IES_OFS                                          ( 8)                  /* P8IES Offset */
#define P8IES_M                                            (0xff00)              /* Port 8 Interrupt Edge Select */
/* PDIE[P7IE] Bits */
#define P7IE_OFS                                           ( 0)                  /* P7IE Offset */
#define P7IE_M                                             (0x00ff)              /* Port 7 Interrupt Enable */
/* PDIE[P8IE] Bits */
#define P8IE_OFS                                           ( 8)                  /* P8IE Offset */
#define P8IE_M                                             (0xff00)              /* Port 8 Interrupt Enable */
/* PDIFG[P7IFG] Bits */
#define P7IFG_OFS                                          ( 0)                  /* P7IFG Offset */
#define P7IFG_M                                            (0x00ff)              /* Port 7 Interrupt Flag */
/* PDIFG[P8IFG] Bits */
#define P8IFG_OFS                                          ( 8)                  /* P8IFG Offset */
#define P8IFG_M                                            (0xff00)              /* Port 8 Interrupt Flag */
/* P8IV[P8IV] Bits */
#define P8IV_OFS                                           ( 0)                  /* P8IV Offset */
#define P8IV_M                                             (0x001f)              /* Port 8 interrupt vector value */
#define P8IV0                                              (0x0001)              /* Port 8 interrupt vector value */
#define P8IV1                                              (0x0002)              /* Port 8 interrupt vector value */
#define P8IV2                                              (0x0004)              /* Port 8 interrupt vector value */
#define P8IV3                                              (0x0008)              /* Port 8 interrupt vector value */
#define P8IV4                                              (0x0010)              /* Port 8 interrupt vector value */
#define P8IV_0                                             (0x0000)              /* No interrupt pending */
#define P8IV_2                                             (0x0002)              /* Interrupt Source: Port 8.0 interrupt; Interrupt Flag: P8IFG0; Interrupt Priority: Highest */
#define P8IV_4                                             (0x0004)              /* Interrupt Source: Port 8.1 interrupt; Interrupt Flag: P8IFG1 */
#define P8IV_6                                             (0x0006)              /* Interrupt Source: Port 8.2 interrupt; Interrupt Flag: P8IFG2 */
#define P8IV_8                                             (0x0008)              /* Interrupt Source: Port 8.3 interrupt; Interrupt Flag: P8IFG3 */
#define P8IV_10                                            (0x000a)              /* Interrupt Source: Port 8.4 interrupt; Interrupt Flag: P8IFG4 */
#define P8IV_12                                            (0x000c)              /* Interrupt Source: Port 8.5 interrupt; Interrupt Flag: P8IFG5 */
#define P8IV_14                                            (0x000e)              /* Interrupt Source: Port 8.6 interrupt; Interrupt Flag: P8IFG6 */
#define P8IV_16                                            (0x0010)              /* Interrupt Source: Port 8.7 interrupt; Interrupt Flag: P8IFG7; Interrupt Priority: Lowest */
#define P8IV__NONE                                         (0x0000)              /* No interrupt pending */
#define P8IV__P8IFG0                                       (0x0002)              /* Interrupt Source: Port 8.0 interrupt; Interrupt Flag: P8IFG0; Interrupt Priority: Highest */
#define P8IV__P8IFG1                                       (0x0004)              /* Interrupt Source: Port 8.1 interrupt; Interrupt Flag: P8IFG1 */
#define P8IV__P8IFG2                                       (0x0006)              /* Interrupt Source: Port 8.2 interrupt; Interrupt Flag: P8IFG2 */
#define P8IV__P8IFG3                                       (0x0008)              /* Interrupt Source: Port 8.3 interrupt; Interrupt Flag: P8IFG3 */
#define P8IV__P8IFG4                                       (0x000a)              /* Interrupt Source: Port 8.4 interrupt; Interrupt Flag: P8IFG4 */
#define P8IV__P8IFG5                                       (0x000c)              /* Interrupt Source: Port 8.5 interrupt; Interrupt Flag: P8IFG5 */
#define P8IV__P8IFG6                                       (0x000e)              /* Interrupt Source: Port 8.6 interrupt; Interrupt Flag: P8IFG6 */
#define P8IV__P8IFG7                                       (0x0010)              /* Interrupt Source: Port 8.7 interrupt; Interrupt Flag: P8IFG7; Interrupt Priority: Lowest */
/* PEIN[P9IN] Bits */
#define P9IN_OFS                                           ( 0)                  /* P9IN Offset */
#define P9IN_M                                             (0x00ff)              /* Port 9 Input */
/* PEIN[P10IN] Bits */
#define P10IN_OFS                                          ( 8)                  /* P10IN Offset */
#define P10IN_M                                            (0xff00)              /* Port 10 Input */
/* PEOUT[P9OUT] Bits */
#define P9OUT_OFS                                          ( 0)                  /* P9OUT Offset */
#define P9OUT_M                                            (0x00ff)              /* Port 9 Output */
/* PEOUT[P10OUT] Bits */
#define P10OUT_OFS                                         ( 8)                  /* P10OUT Offset */
#define P10OUT_M                                           (0xff00)              /* Port 10 Output */
/* PEDIR[P9DIR] Bits */
#define P9DIR_OFS                                          ( 0)                  /* P9DIR Offset */
#define P9DIR_M                                            (0x00ff)              /* Port 9 Direction */
/* PEDIR[P10DIR] Bits */
#define P10DIR_OFS                                         ( 8)                  /* P10DIR Offset */
#define P10DIR_M                                           (0xff00)              /* Port 10 Direction */
/* PEREN[P9REN] Bits */
#define P9REN_OFS                                          ( 0)                  /* P9REN Offset */
#define P9REN_M                                            (0x00ff)              /* Port 9 Resistor Enable */
/* PEREN[P10REN] Bits */
#define P10REN_OFS                                         ( 8)                  /* P10REN Offset */
#define P10REN_M                                           (0xff00)              /* Port 10 Resistor Enable */
/* PEDS[P9DS] Bits */
#define P9DS_OFS                                           ( 0)                  /* P9DS Offset */
#define P9DS_M                                             (0x00ff)              /* Port 9 Drive Strength */
/* PEDS[P10DS] Bits */
#define P10DS_OFS                                          ( 8)                  /* P10DS Offset */
#define P10DS_M                                            (0xff00)              /* Port 10 Drive Strength */
/* PESEL0[P9SEL0] Bits */
#define P9SEL0_OFS                                         ( 0)                  /* P9SEL0 Offset */
#define P9SEL0_M                                           (0x00ff)              /* Port 9 Select 0 */
/* PESEL0[P10SEL0] Bits */
#define P10SEL0_OFS                                        ( 8)                  /* P10SEL0 Offset */
#define P10SEL0_M                                          (0xff00)              /* Port 10 Select 0 */
/* PESEL1[P9SEL1] Bits */
#define P9SEL1_OFS                                         ( 0)                  /* P9SEL1 Offset */
#define P9SEL1_M                                           (0x00ff)              /* Port 9 Select 1 */
/* PESEL1[P10SEL1] Bits */
#define P10SEL1_OFS                                        ( 8)                  /* P10SEL1 Offset */
#define P10SEL1_M                                          (0xff00)              /* Port 10 Select 1 */
/* P9IV[P9IV] Bits */
#define P9IV_OFS                                           ( 0)                  /* P9IV Offset */
#define P9IV_M                                             (0x001f)              /* Port 9 interrupt vector value */
#define P9IV0                                              (0x0001)              /* Port 9 interrupt vector value */
#define P9IV1                                              (0x0002)              /* Port 9 interrupt vector value */
#define P9IV2                                              (0x0004)              /* Port 9 interrupt vector value */
#define P9IV3                                              (0x0008)              /* Port 9 interrupt vector value */
#define P9IV4                                              (0x0010)              /* Port 9 interrupt vector value */
#define P9IV_0                                             (0x0000)              /* No interrupt pending */
#define P9IV_2                                             (0x0002)              /* Interrupt Source: Port 9.0 interrupt; Interrupt Flag: P9IFG0; Interrupt Priority: Highest */
#define P9IV_4                                             (0x0004)              /* Interrupt Source: Port 9.1 interrupt; Interrupt Flag: P9IFG1 */
#define P9IV_6                                             (0x0006)              /* Interrupt Source: Port 9.2 interrupt; Interrupt Flag: P9IFG2 */
#define P9IV_8                                             (0x0008)              /* Interrupt Source: Port 9.3 interrupt; Interrupt Flag: P9IFG3 */
#define P9IV_10                                            (0x000a)              /* Interrupt Source: Port 9.4 interrupt; Interrupt Flag: P9IFG4 */
#define P9IV_12                                            (0x000c)              /* Interrupt Source: Port 9.5 interrupt; Interrupt Flag: P9IFG5 */
#define P9IV_14                                            (0x000e)              /* Interrupt Source: Port 9.6 interrupt; Interrupt Flag: P9IFG6 */
#define P9IV_16                                            (0x0010)              /* Interrupt Source: Port 9.7 interrupt; Interrupt Flag: P9IFG7; Interrupt Priority: Lowest */
#define P9IV__NONE                                         (0x0000)              /* No interrupt pending */
#define P9IV__P9IFG0                                       (0x0002)              /* Interrupt Source: Port 9.0 interrupt; Interrupt Flag: P9IFG0; Interrupt Priority: Highest */
#define P9IV__P9IFG1                                       (0x0004)              /* Interrupt Source: Port 9.1 interrupt; Interrupt Flag: P9IFG1 */
#define P9IV__P9IFG2                                       (0x0006)              /* Interrupt Source: Port 9.2 interrupt; Interrupt Flag: P9IFG2 */
#define P9IV__P9IFG3                                       (0x0008)              /* Interrupt Source: Port 9.3 interrupt; Interrupt Flag: P9IFG3 */
#define P9IV__P9IFG4                                       (0x000a)              /* Interrupt Source: Port 9.4 interrupt; Interrupt Flag: P9IFG4 */
#define P9IV__P9IFG5                                       (0x000c)              /* Interrupt Source: Port 9.5 interrupt; Interrupt Flag: P9IFG5 */
#define P9IV__P9IFG6                                       (0x000e)              /* Interrupt Source: Port 9.6 interrupt; Interrupt Flag: P9IFG6 */
#define P9IV__P9IFG7                                       (0x0010)              /* Interrupt Source: Port 9.7 interrupt; Interrupt Flag: P9IFG7; Interrupt Priority: Lowest */
/* PESELC[P9SELC] Bits */
#define P9SELC_OFS                                         ( 0)                  /* P9SELC Offset */
#define P9SELC_M                                           (0x00ff)              /* Port 9 Complement Select */
/* PESELC[P10SELC] Bits */
#define P10SELC_OFS                                        ( 8)                  /* P10SELC Offset */
#define P10SELC_M                                          (0xff00)              /* Port 10 Complement Select */
/* PEIES[P9IES] Bits */
#define P9IES_OFS                                          ( 0)                  /* P9IES Offset */
#define P9IES_M                                            (0x00ff)              /* Port 9 Interrupt Edge Select */
/* PEIES[P10IES] Bits */
#define P10IES_OFS                                         ( 8)                  /* P10IES Offset */
#define P10IES_M                                           (0xff00)              /* Port 10 Interrupt Edge Select */
/* PEIE[P9IE] Bits */
#define P9IE_OFS                                           ( 0)                  /* P9IE Offset */
#define P9IE_M                                             (0x00ff)              /* Port 9 Interrupt Enable */
/* PEIE[P10IE] Bits */
#define P10IE_OFS                                          ( 8)                  /* P10IE Offset */
#define P10IE_M                                            (0xff00)              /* Port 10 Interrupt Enable */
/* PEIFG[P9IFG] Bits */
#define P9IFG_OFS                                          ( 0)                  /* P9IFG Offset */
#define P9IFG_M                                            (0x00ff)              /* Port 9 Interrupt Flag */
/* PEIFG[P10IFG] Bits */
#define P10IFG_OFS                                         ( 8)                  /* P10IFG Offset */
#define P10IFG_M                                           (0xff00)              /* Port 10 Interrupt Flag */
/* P10IV[P10IV] Bits */
#define P10IV_OFS                                          ( 0)                  /* P10IV Offset */
#define P10IV_M                                            (0x001f)              /* Port 10 interrupt vector value */
#define P10IV0                                             (0x0001)              /* Port 10 interrupt vector value */
#define P10IV1                                             (0x0002)              /* Port 10 interrupt vector value */
#define P10IV2                                             (0x0004)              /* Port 10 interrupt vector value */
#define P10IV3                                             (0x0008)              /* Port 10 interrupt vector value */
#define P10IV4                                             (0x0010)              /* Port 10 interrupt vector value */
#define P10IV_0                                            (0x0000)              /* No interrupt pending */
#define P10IV_2                                            (0x0002)              /* Interrupt Source: Port 10.0 interrupt; Interrupt Flag: P10IFG0; Interrupt Priority: Highest */
#define P10IV_4                                            (0x0004)              /* Interrupt Source: Port 10.1 interrupt; Interrupt Flag: P10IFG1 */
#define P10IV_6                                            (0x0006)              /* Interrupt Source: Port 10.2 interrupt; Interrupt Flag: P10IFG2 */
#define P10IV_8                                            (0x0008)              /* Interrupt Source: Port 10.3 interrupt; Interrupt Flag: P10IFG3 */
#define P10IV_10                                           (0x000a)              /* Interrupt Source: Port 10.4 interrupt; Interrupt Flag: P10IFG4 */
#define P10IV_12                                           (0x000c)              /* Interrupt Source: Port 10.5 interrupt; Interrupt Flag: P10IFG5 */
#define P10IV_14                                           (0x000e)              /* Interrupt Source: Port 10.6 interrupt; Interrupt Flag: P10IFG6 */
#define P10IV_16                                           (0x0010)              /* Interrupt Source: Port 10.7 interrupt; Interrupt Flag: P10IFG7; Interrupt Priority: Lowest */
#define P10IV__NONE                                        (0x0000)              /* No interrupt pending */
#define P10IV__P10IFG0                                     (0x0002)              /* Interrupt Source: Port 10.0 interrupt; Interrupt Flag: P10IFG0; Interrupt Priority: Highest */
#define P10IV__P10IFG1                                     (0x0004)              /* Interrupt Source: Port 10.1 interrupt; Interrupt Flag: P10IFG1 */
#define P10IV__P10IFG2                                     (0x0006)              /* Interrupt Source: Port 10.2 interrupt; Interrupt Flag: P10IFG2 */
#define P10IV__P10IFG3                                     (0x0008)              /* Interrupt Source: Port 10.3 interrupt; Interrupt Flag: P10IFG3 */
#define P10IV__P10IFG4                                     (0x000a)              /* Interrupt Source: Port 10.4 interrupt; Interrupt Flag: P10IFG4 */
#define P10IV__P10IFG5                                     (0x000c)              /* Interrupt Source: Port 10.5 interrupt; Interrupt Flag: P10IFG5 */
#define P10IV__P10IFG6                                     (0x000e)              /* Interrupt Source: Port 10.6 interrupt; Interrupt Flag: P10IFG6 */
#define P10IV__P10IFG7                                     (0x0010)              /* Interrupt Source: Port 10.7 interrupt; Interrupt Flag: P10IFG7; Interrupt Priority: Lowest */


//*****************************************************************************
// DMA Bits
//*****************************************************************************
/* DMA_DEVICE_CFG[DMA_DEVICE_CFG_NUM_DMA_CHANNELS] Bits */
#define DMA_DEVICE_CFG_NUM_DMA_CHANNELS_OFS                ( 0)                  /* NUM_DMA_CHANNELS Offset */
#define DMA_DEVICE_CFG_NUM_DMA_CHANNELS_M                  (0x000000ff)          /* Number of DMA channels available */
/* DMA_DEVICE_CFG[DMA_DEVICE_CFG_NUM_SRC_PER_CHANNEL] Bits */
#define DMA_DEVICE_CFG_NUM_SRC_PER_CHANNEL_OFS             ( 8)                  /* NUM_SRC_PER_CHANNEL Offset */
#define DMA_DEVICE_CFG_NUM_SRC_PER_CHANNEL_M               (0x0000ff00)          /* Number of DMA sources per channel */
/* DMA_SW_CHTRIG[DMA_SW_CHTRIG_CH0] Bits */
#define DMA_SW_CHTRIG_CH0_OFS                              ( 0)                  /* CH0 Offset */
#define DMA_SW_CHTRIG_CH0                                  (0x00000001)          /* Write 1, triggers DMA_CHANNEL0 */
/* DMA_SW_CHTRIG[DMA_SW_CHTRIG_CH1] Bits */
#define DMA_SW_CHTRIG_CH1_OFS                              ( 1)                  /* CH1 Offset */
#define DMA_SW_CHTRIG_CH1                                  (0x00000002)          /* Write 1, triggers DMA_CHANNEL1 */
/* DMA_SW_CHTRIG[DMA_SW_CHTRIG_CH2] Bits */
#define DMA_SW_CHTRIG_CH2_OFS                              ( 2)                  /* CH2 Offset */
#define DMA_SW_CHTRIG_CH2                                  (0x00000004)          /* Write 1, triggers DMA_CHANNEL2 */
/* DMA_SW_CHTRIG[DMA_SW_CHTRIG_CH3] Bits */
#define DMA_SW_CHTRIG_CH3_OFS                              ( 3)                  /* CH3 Offset */
#define DMA_SW_CHTRIG_CH3                                  (0x00000008)          /* Write 1, triggers DMA_CHANNEL3 */
/* DMA_SW_CHTRIG[DMA_SW_CHTRIG_CH4] Bits */
#define DMA_SW_CHTRIG_CH4_OFS                              ( 4)                  /* CH4 Offset */
#define DMA_SW_CHTRIG_CH4                                  (0x00000010)          /* Write 1, triggers DMA_CHANNEL4 */
/* DMA_SW_CHTRIG[DMA_SW_CHTRIG_CH5] Bits */
#define DMA_SW_CHTRIG_CH5_OFS                              ( 5)                  /* CH5 Offset */
#define DMA_SW_CHTRIG_CH5                                  (0x00000020)          /* Write 1, triggers DMA_CHANNEL5 */
/* DMA_SW_CHTRIG[DMA_SW_CHTRIG_CH6] Bits */
#define DMA_SW_CHTRIG_CH6_OFS                              ( 6)                  /* CH6 Offset */
#define DMA_SW_CHTRIG_CH6                                  (0x00000040)          /* Write 1, triggers DMA_CHANNEL6 */
/* DMA_SW_CHTRIG[DMA_SW_CHTRIG_CH7] Bits */
#define DMA_SW_CHTRIG_CH7_OFS                              ( 7)                  /* CH7 Offset */
#define DMA_SW_CHTRIG_CH7                                  (0x00000080)          /* Write 1, triggers DMA_CHANNEL7 */
/* DMA_SW_CHTRIG[DMA_SW_CHTRIG_CH8] Bits */
#define DMA_SW_CHTRIG_CH8_OFS                              ( 8)                  /* CH8 Offset */
#define DMA_SW_CHTRIG_CH8                                  (0x00000100)          /* Write 1, triggers DMA_CHANNEL8 */
/* DMA_SW_CHTRIG[DMA_SW_CHTRIG_CH9] Bits */
#define DMA_SW_CHTRIG_CH9_OFS                              ( 9)                  /* CH9 Offset */
#define DMA_SW_CHTRIG_CH9                                  (0x00000200)          /* Write 1, triggers DMA_CHANNEL9 */
/* DMA_SW_CHTRIG[DMA_SW_CHTRIG_CH10] Bits */
#define DMA_SW_CHTRIG_CH10_OFS                             (10)                  /* CH10 Offset */
#define DMA_SW_CHTRIG_CH10                                 (0x00000400)          /* Write 1, triggers DMA_CHANNEL10 */
/* DMA_SW_CHTRIG[DMA_SW_CHTRIG_CH11] Bits */
#define DMA_SW_CHTRIG_CH11_OFS                             (11)                  /* CH11 Offset */
#define DMA_SW_CHTRIG_CH11                                 (0x00000800)          /* Write 1, triggers DMA_CHANNEL11 */
/* DMA_SW_CHTRIG[DMA_SW_CHTRIG_CH12] Bits */
#define DMA_SW_CHTRIG_CH12_OFS                             (12)                  /* CH12 Offset */
#define DMA_SW_CHTRIG_CH12                                 (0x00001000)          /* Write 1, triggers DMA_CHANNEL12 */
/* DMA_SW_CHTRIG[DMA_SW_CHTRIG_CH13] Bits */
#define DMA_SW_CHTRIG_CH13_OFS                             (13)                  /* CH13 Offset */
#define DMA_SW_CHTRIG_CH13                                 (0x00002000)          /* Write 1, triggers DMA_CHANNEL13 */
/* DMA_SW_CHTRIG[DMA_SW_CHTRIG_CH14] Bits */
#define DMA_SW_CHTRIG_CH14_OFS                             (14)                  /* CH14 Offset */
#define DMA_SW_CHTRIG_CH14                                 (0x00004000)          /* Write 1, triggers DMA_CHANNEL14 */
/* DMA_SW_CHTRIG[DMA_SW_CHTRIG_CH15] Bits */
#define DMA_SW_CHTRIG_CH15_OFS                             (15)                  /* CH15 Offset */
#define DMA_SW_CHTRIG_CH15                                 (0x00008000)          /* Write 1, triggers DMA_CHANNEL15 */
/* DMA_SW_CHTRIG[DMA_SW_CHTRIG_CH16] Bits */
#define DMA_SW_CHTRIG_CH16_OFS                             (16)                  /* CH16 Offset */
#define DMA_SW_CHTRIG_CH16                                 (0x00010000)          /* Write 1, triggers DMA_CHANNEL16 */
/* DMA_SW_CHTRIG[DMA_SW_CHTRIG_CH17] Bits */
#define DMA_SW_CHTRIG_CH17_OFS                             (17)                  /* CH17 Offset */
#define DMA_SW_CHTRIG_CH17                                 (0x00020000)          /* Write 1, triggers DMA_CHANNEL17 */
/* DMA_SW_CHTRIG[DMA_SW_CHTRIG_CH18] Bits */
#define DMA_SW_CHTRIG_CH18_OFS                             (18)                  /* CH18 Offset */
#define DMA_SW_CHTRIG_CH18                                 (0x00040000)          /* Write 1, triggers DMA_CHANNEL18 */
/* DMA_SW_CHTRIG[DMA_SW_CHTRIG_CH19] Bits */
#define DMA_SW_CHTRIG_CH19_OFS                             (19)                  /* CH19 Offset */
#define DMA_SW_CHTRIG_CH19                                 (0x00080000)          /* Write 1, triggers DMA_CHANNEL19 */
/* DMA_SW_CHTRIG[DMA_SW_CHTRIG_CH20] Bits */
#define DMA_SW_CHTRIG_CH20_OFS                             (20)                  /* CH20 Offset */
#define DMA_SW_CHTRIG_CH20                                 (0x00100000)          /* Write 1, triggers DMA_CHANNEL20 */
/* DMA_SW_CHTRIG[DMA_SW_CHTRIG_CH21] Bits */
#define DMA_SW_CHTRIG_CH21_OFS                             (21)                  /* CH21 Offset */
#define DMA_SW_CHTRIG_CH21                                 (0x00200000)          /* Write 1, triggers DMA_CHANNEL21 */
/* DMA_SW_CHTRIG[DMA_SW_CHTRIG_CH22] Bits */
#define DMA_SW_CHTRIG_CH22_OFS                             (22)                  /* CH22 Offset */
#define DMA_SW_CHTRIG_CH22                                 (0x00400000)          /* Write 1, triggers DMA_CHANNEL22 */
/* DMA_SW_CHTRIG[DMA_SW_CHTRIG_CH23] Bits */
#define DMA_SW_CHTRIG_CH23_OFS                             (23)                  /* CH23 Offset */
#define DMA_SW_CHTRIG_CH23                                 (0x00800000)          /* Write 1, triggers DMA_CHANNEL23 */
/* DMA_SW_CHTRIG[DMA_SW_CHTRIG_CH24] Bits */
#define DMA_SW_CHTRIG_CH24_OFS                             (24)                  /* CH24 Offset */
#define DMA_SW_CHTRIG_CH24                                 (0x01000000)          /* Write 1, triggers DMA_CHANNEL24 */
/* DMA_SW_CHTRIG[DMA_SW_CHTRIG_CH25] Bits */
#define DMA_SW_CHTRIG_CH25_OFS                             (25)                  /* CH25 Offset */
#define DMA_SW_CHTRIG_CH25                                 (0x02000000)          /* Write 1, triggers DMA_CHANNEL25 */
/* DMA_SW_CHTRIG[DMA_SW_CHTRIG_CH26] Bits */
#define DMA_SW_CHTRIG_CH26_OFS                             (26)                  /* CH26 Offset */
#define DMA_SW_CHTRIG_CH26                                 (0x04000000)          /* Write 1, triggers DMA_CHANNEL26 */
/* DMA_SW_CHTRIG[DMA_SW_CHTRIG_CH27] Bits */
#define DMA_SW_CHTRIG_CH27_OFS                             (27)                  /* CH27 Offset */
#define DMA_SW_CHTRIG_CH27                                 (0x08000000)          /* Write 1, triggers DMA_CHANNEL27 */
/* DMA_SW_CHTRIG[DMA_SW_CHTRIG_CH28] Bits */
#define DMA_SW_CHTRIG_CH28_OFS                             (28)                  /* CH28 Offset */
#define DMA_SW_CHTRIG_CH28                                 (0x10000000)          /* Write 1, triggers DMA_CHANNEL28 */
/* DMA_SW_CHTRIG[DMA_SW_CHTRIG_CH29] Bits */
#define DMA_SW_CHTRIG_CH29_OFS                             (29)                  /* CH29 Offset */
#define DMA_SW_CHTRIG_CH29                                 (0x20000000)          /* Write 1, triggers DMA_CHANNEL29 */
/* DMA_SW_CHTRIG[DMA_SW_CHTRIG_CH30] Bits */
#define DMA_SW_CHTRIG_CH30_OFS                             (30)                  /* CH30 Offset */
#define DMA_SW_CHTRIG_CH30                                 (0x40000000)          /* Write 1, triggers DMA_CHANNEL30 */
/* DMA_SW_CHTRIG[DMA_SW_CHTRIG_CH31] Bits */
#define DMA_SW_CHTRIG_CH31_OFS                             (31)                  /* CH31 Offset */
#define DMA_SW_CHTRIG_CH31                                 (0x80000000)          /* Write 1, triggers DMA_CHANNEL31 */
/* DMA_CH_SRCCFG[DMA_CHN_SRCCFG_DMA_SRC] Bits */
#define DMA_CHN_SRCCFG_DMA_SRC_OFS                         ( 0)                  /* DMA_SRC Offset */
#define DMA_CHN_SRCCFG_DMA_SRC_M                           (0x000000ff)          /* Device level DMA source mapping to channel input */
/* DMA_INT1_SRCCFG[DMA_INT1_SRCCFG_INT_SRC] Bits */
#define DMA_INT1_SRCCFG_INT_SRC_OFS                        ( 0)                  /* INT_SRC Offset */
#define DMA_INT1_SRCCFG_INT_SRC_M                          (0x0000001f)          /* Controls which channel's completion event is mapped as a source of this Interrupt */
/* DMA_INT1_SRCCFG[DMA_INT1_SRCCFG_EN] Bits */
#define DMA_INT1_SRCCFG_EN_OFS                             ( 5)                  /* EN Offset */
#define DMA_INT1_SRCCFG_EN                                 (0x00000020)          /* Enables DMA_INT1 mapping */
/* DMA_INT2_SRCCFG[DMA_INT2_SRCCFG_INT_SRC] Bits */
#define DMA_INT2_SRCCFG_INT_SRC_OFS                        ( 0)                  /* INT_SRC Offset */
#define DMA_INT2_SRCCFG_INT_SRC_M                          (0x0000001f)          /* Controls which channel's completion event is mapped as a source of this Interrupt */
/* DMA_INT2_SRCCFG[DMA_INT2_SRCCFG_EN] Bits */
#define DMA_INT2_SRCCFG_EN_OFS                             ( 5)                  /* EN Offset */
#define DMA_INT2_SRCCFG_EN                                 (0x00000020)          /* Enables DMA_INT2 mapping */
/* DMA_INT3_SRCCFG[DMA_INT3_SRCCFG_INT_SRC] Bits */
#define DMA_INT3_SRCCFG_INT_SRC_OFS                        ( 0)                  /* INT_SRC Offset */
#define DMA_INT3_SRCCFG_INT_SRC_M                          (0x0000001f)          /* Controls which channel's completion event is mapped as a source of this Interrupt */
/* DMA_INT3_SRCCFG[DMA_INT3_SRCCFG_EN] Bits */
#define DMA_INT3_SRCCFG_EN_OFS                             ( 5)                  /* EN Offset */
#define DMA_INT3_SRCCFG_EN                                 (0x00000020)          /* Enables DMA_INT3 mapping */
/* DMA_INT0_SRCFLG[DMA_INT0_SRCFLG_CH0] Bits */
#define DMA_INT0_SRCFLG_CH0_OFS                            ( 0)                  /* CH0 Offset */
#define DMA_INT0_SRCFLG_CH0                                (0x00000001)          /* Channel 0 was the source of DMA_INT0 */
/* DMA_INT0_SRCFLG[DMA_INT0_SRCFLG_CH1] Bits */
#define DMA_INT0_SRCFLG_CH1_OFS                            ( 1)                  /* CH1 Offset */
#define DMA_INT0_SRCFLG_CH1                                (0x00000002)          /* Channel 1 was the source of DMA_INT0 */
/* DMA_INT0_SRCFLG[DMA_INT0_SRCFLG_CH2] Bits */
#define DMA_INT0_SRCFLG_CH2_OFS                            ( 2)                  /* CH2 Offset */
#define DMA_INT0_SRCFLG_CH2                                (0x00000004)          /* Channel 2 was the source of DMA_INT0 */
/* DMA_INT0_SRCFLG[DMA_INT0_SRCFLG_CH3] Bits */
#define DMA_INT0_SRCFLG_CH3_OFS                            ( 3)                  /* CH3 Offset */
#define DMA_INT0_SRCFLG_CH3                                (0x00000008)          /* Channel 3 was the source of DMA_INT0 */
/* DMA_INT0_SRCFLG[DMA_INT0_SRCFLG_CH4] Bits */
#define DMA_INT0_SRCFLG_CH4_OFS                            ( 4)                  /* CH4 Offset */
#define DMA_INT0_SRCFLG_CH4                                (0x00000010)          /* Channel 4 was the source of DMA_INT0 */
/* DMA_INT0_SRCFLG[DMA_INT0_SRCFLG_CH5] Bits */
#define DMA_INT0_SRCFLG_CH5_OFS                            ( 5)                  /* CH5 Offset */
#define DMA_INT0_SRCFLG_CH5                                (0x00000020)          /* Channel 5 was the source of DMA_INT0 */
/* DMA_INT0_SRCFLG[DMA_INT0_SRCFLG_CH6] Bits */
#define DMA_INT0_SRCFLG_CH6_OFS                            ( 6)                  /* CH6 Offset */
#define DMA_INT0_SRCFLG_CH6                                (0x00000040)          /* Channel 6 was the source of DMA_INT0 */
/* DMA_INT0_SRCFLG[DMA_INT0_SRCFLG_CH7] Bits */
#define DMA_INT0_SRCFLG_CH7_OFS                            ( 7)                  /* CH7 Offset */
#define DMA_INT0_SRCFLG_CH7                                (0x00000080)          /* Channel 7 was the source of DMA_INT0 */
/* DMA_INT0_SRCFLG[DMA_INT0_SRCFLG_CH8] Bits */
#define DMA_INT0_SRCFLG_CH8_OFS                            ( 8)                  /* CH8 Offset */
#define DMA_INT0_SRCFLG_CH8                                (0x00000100)          /* Channel 8 was the source of DMA_INT0 */
/* DMA_INT0_SRCFLG[DMA_INT0_SRCFLG_CH9] Bits */
#define DMA_INT0_SRCFLG_CH9_OFS                            ( 9)                  /* CH9 Offset */
#define DMA_INT0_SRCFLG_CH9                                (0x00000200)          /* Channel 9 was the source of DMA_INT0 */
/* DMA_INT0_SRCFLG[DMA_INT0_SRCFLG_CH10] Bits */
#define DMA_INT0_SRCFLG_CH10_OFS                           (10)                  /* CH10 Offset */
#define DMA_INT0_SRCFLG_CH10                               (0x00000400)          /* Channel 10 was the source of DMA_INT0 */
/* DMA_INT0_SRCFLG[DMA_INT0_SRCFLG_CH11] Bits */
#define DMA_INT0_SRCFLG_CH11_OFS                           (11)                  /* CH11 Offset */
#define DMA_INT0_SRCFLG_CH11                               (0x00000800)          /* Channel 11 was the source of DMA_INT0 */
/* DMA_INT0_SRCFLG[DMA_INT0_SRCFLG_CH12] Bits */
#define DMA_INT0_SRCFLG_CH12_OFS                           (12)                  /* CH12 Offset */
#define DMA_INT0_SRCFLG_CH12                               (0x00001000)          /* Channel 12 was the source of DMA_INT0 */
/* DMA_INT0_SRCFLG[DMA_INT0_SRCFLG_CH13] Bits */
#define DMA_INT0_SRCFLG_CH13_OFS                           (13)                  /* CH13 Offset */
#define DMA_INT0_SRCFLG_CH13                               (0x00002000)          /* Channel 13 was the source of DMA_INT0 */
/* DMA_INT0_SRCFLG[DMA_INT0_SRCFLG_CH14] Bits */
#define DMA_INT0_SRCFLG_CH14_OFS                           (14)                  /* CH14 Offset */
#define DMA_INT0_SRCFLG_CH14                               (0x00004000)          /* Channel 14 was the source of DMA_INT0 */
/* DMA_INT0_SRCFLG[DMA_INT0_SRCFLG_CH15] Bits */
#define DMA_INT0_SRCFLG_CH15_OFS                           (15)                  /* CH15 Offset */
#define DMA_INT0_SRCFLG_CH15                               (0x00008000)          /* Channel 15 was the source of DMA_INT0 */
/* DMA_INT0_SRCFLG[DMA_INT0_SRCFLG_CH16] Bits */
#define DMA_INT0_SRCFLG_CH16_OFS                           (16)                  /* CH16 Offset */
#define DMA_INT0_SRCFLG_CH16                               (0x00010000)          /* Channel 16 was the source of DMA_INT0 */
/* DMA_INT0_SRCFLG[DMA_INT0_SRCFLG_CH17] Bits */
#define DMA_INT0_SRCFLG_CH17_OFS                           (17)                  /* CH17 Offset */
#define DMA_INT0_SRCFLG_CH17                               (0x00020000)          /* Channel 17 was the source of DMA_INT0 */
/* DMA_INT0_SRCFLG[DMA_INT0_SRCFLG_CH18] Bits */
#define DMA_INT0_SRCFLG_CH18_OFS                           (18)                  /* CH18 Offset */
#define DMA_INT0_SRCFLG_CH18                               (0x00040000)          /* Channel 18 was the source of DMA_INT0 */
/* DMA_INT0_SRCFLG[DMA_INT0_SRCFLG_CH19] Bits */
#define DMA_INT0_SRCFLG_CH19_OFS                           (19)                  /* CH19 Offset */
#define DMA_INT0_SRCFLG_CH19                               (0x00080000)          /* Channel 19 was the source of DMA_INT0 */
/* DMA_INT0_SRCFLG[DMA_INT0_SRCFLG_CH20] Bits */
#define DMA_INT0_SRCFLG_CH20_OFS                           (20)                  /* CH20 Offset */
#define DMA_INT0_SRCFLG_CH20                               (0x00100000)          /* Channel 20 was the source of DMA_INT0 */
/* DMA_INT0_SRCFLG[DMA_INT0_SRCFLG_CH21] Bits */
#define DMA_INT0_SRCFLG_CH21_OFS                           (21)                  /* CH21 Offset */
#define DMA_INT0_SRCFLG_CH21                               (0x00200000)          /* Channel 21 was the source of DMA_INT0 */
/* DMA_INT0_SRCFLG[DMA_INT0_SRCFLG_CH22] Bits */
#define DMA_INT0_SRCFLG_CH22_OFS                           (22)                  /* CH22 Offset */
#define DMA_INT0_SRCFLG_CH22                               (0x00400000)          /* Channel 22 was the source of DMA_INT0 */
/* DMA_INT0_SRCFLG[DMA_INT0_SRCFLG_CH23] Bits */
#define DMA_INT0_SRCFLG_CH23_OFS                           (23)                  /* CH23 Offset */
#define DMA_INT0_SRCFLG_CH23                               (0x00800000)          /* Channel 23 was the source of DMA_INT0 */
/* DMA_INT0_SRCFLG[DMA_INT0_SRCFLG_CH24] Bits */
#define DMA_INT0_SRCFLG_CH24_OFS                           (24)                  /* CH24 Offset */
#define DMA_INT0_SRCFLG_CH24                               (0x01000000)          /* Channel 24 was the source of DMA_INT0 */
/* DMA_INT0_SRCFLG[DMA_INT0_SRCFLG_CH25] Bits */
#define DMA_INT0_SRCFLG_CH25_OFS                           (25)                  /* CH25 Offset */
#define DMA_INT0_SRCFLG_CH25                               (0x02000000)          /* Channel 25 was the source of DMA_INT0 */
/* DMA_INT0_SRCFLG[DMA_INT0_SRCFLG_CH26] Bits */
#define DMA_INT0_SRCFLG_CH26_OFS                           (26)                  /* CH26 Offset */
#define DMA_INT0_SRCFLG_CH26                               (0x04000000)          /* Channel 26 was the source of DMA_INT0 */
/* DMA_INT0_SRCFLG[DMA_INT0_SRCFLG_CH27] Bits */
#define DMA_INT0_SRCFLG_CH27_OFS                           (27)                  /* CH27 Offset */
#define DMA_INT0_SRCFLG_CH27                               (0x08000000)          /* Channel 27 was the source of DMA_INT0 */
/* DMA_INT0_SRCFLG[DMA_INT0_SRCFLG_CH28] Bits */
#define DMA_INT0_SRCFLG_CH28_OFS                           (28)                  /* CH28 Offset */
#define DMA_INT0_SRCFLG_CH28                               (0x10000000)          /* Channel 28 was the source of DMA_INT0 */
/* DMA_INT0_SRCFLG[DMA_INT0_SRCFLG_CH29] Bits */
#define DMA_INT0_SRCFLG_CH29_OFS                           (29)                  /* CH29 Offset */
#define DMA_INT0_SRCFLG_CH29                               (0x20000000)          /* Channel 29 was the source of DMA_INT0 */
/* DMA_INT0_SRCFLG[DMA_INT0_SRCFLG_CH30] Bits */
#define DMA_INT0_SRCFLG_CH30_OFS                           (30)                  /* CH30 Offset */
#define DMA_INT0_SRCFLG_CH30                               (0x40000000)          /* Channel 30 was the source of DMA_INT0 */
/* DMA_INT0_SRCFLG[DMA_INT0_SRCFLG_CH31] Bits */
#define DMA_INT0_SRCFLG_CH31_OFS                           (31)                  /* CH31 Offset */
#define DMA_INT0_SRCFLG_CH31                               (0x80000000)          /* Channel 31 was the source of DMA_INT0 */
/* DMA_INT0_CLRFLG[DMA_INT0_CLRFLG_CH0] Bits */
#define DMA_INT0_CLRFLG_CH0_OFS                            ( 0)                  /* CH0 Offset */
#define DMA_INT0_CLRFLG_CH0                                (0x00000001)          /* Clear corresponding DMA_INT0_SRCFLG_REG */
/* DMA_INT0_CLRFLG[DMA_INT0_CLRFLG_CH1] Bits */
#define DMA_INT0_CLRFLG_CH1_OFS                            ( 1)                  /* CH1 Offset */
#define DMA_INT0_CLRFLG_CH1                                (0x00000002)          /* Clear corresponding DMA_INT0_SRCFLG_REG */
/* DMA_INT0_CLRFLG[DMA_INT0_CLRFLG_CH2] Bits */
#define DMA_INT0_CLRFLG_CH2_OFS                            ( 2)                  /* CH2 Offset */
#define DMA_INT0_CLRFLG_CH2                                (0x00000004)          /* Clear corresponding DMA_INT0_SRCFLG_REG */
/* DMA_INT0_CLRFLG[DMA_INT0_CLRFLG_CH3] Bits */
#define DMA_INT0_CLRFLG_CH3_OFS                            ( 3)                  /* CH3 Offset */
#define DMA_INT0_CLRFLG_CH3                                (0x00000008)          /* Clear corresponding DMA_INT0_SRCFLG_REG */
/* DMA_INT0_CLRFLG[DMA_INT0_CLRFLG_CH4] Bits */
#define DMA_INT0_CLRFLG_CH4_OFS                            ( 4)                  /* CH4 Offset */
#define DMA_INT0_CLRFLG_CH4                                (0x00000010)          /* Clear corresponding DMA_INT0_SRCFLG_REG */
/* DMA_INT0_CLRFLG[DMA_INT0_CLRFLG_CH5] Bits */
#define DMA_INT0_CLRFLG_CH5_OFS                            ( 5)                  /* CH5 Offset */
#define DMA_INT0_CLRFLG_CH5                                (0x00000020)          /* Clear corresponding DMA_INT0_SRCFLG_REG */
/* DMA_INT0_CLRFLG[DMA_INT0_CLRFLG_CH6] Bits */
#define DMA_INT0_CLRFLG_CH6_OFS                            ( 6)                  /* CH6 Offset */
#define DMA_INT0_CLRFLG_CH6                                (0x00000040)          /* Clear corresponding DMA_INT0_SRCFLG_REG */
/* DMA_INT0_CLRFLG[DMA_INT0_CLRFLG_CH7] Bits */
#define DMA_INT0_CLRFLG_CH7_OFS                            ( 7)                  /* CH7 Offset */
#define DMA_INT0_CLRFLG_CH7                                (0x00000080)          /* Clear corresponding DMA_INT0_SRCFLG_REG */
/* DMA_INT0_CLRFLG[DMA_INT0_CLRFLG_CH8] Bits */
#define DMA_INT0_CLRFLG_CH8_OFS                            ( 8)                  /* CH8 Offset */
#define DMA_INT0_CLRFLG_CH8                                (0x00000100)          /* Clear corresponding DMA_INT0_SRCFLG_REG */
/* DMA_INT0_CLRFLG[DMA_INT0_CLRFLG_CH9] Bits */
#define DMA_INT0_CLRFLG_CH9_OFS                            ( 9)                  /* CH9 Offset */
#define DMA_INT0_CLRFLG_CH9                                (0x00000200)          /* Clear corresponding DMA_INT0_SRCFLG_REG */
/* DMA_INT0_CLRFLG[DMA_INT0_CLRFLG_CH10] Bits */
#define DMA_INT0_CLRFLG_CH10_OFS                           (10)                  /* CH10 Offset */
#define DMA_INT0_CLRFLG_CH10                               (0x00000400)          /* Clear corresponding DMA_INT0_SRCFLG_REG */
/* DMA_INT0_CLRFLG[DMA_INT0_CLRFLG_CH11] Bits */
#define DMA_INT0_CLRFLG_CH11_OFS                           (11)                  /* CH11 Offset */
#define DMA_INT0_CLRFLG_CH11                               (0x00000800)          /* Clear corresponding DMA_INT0_SRCFLG_REG */
/* DMA_INT0_CLRFLG[DMA_INT0_CLRFLG_CH12] Bits */
#define DMA_INT0_CLRFLG_CH12_OFS                           (12)                  /* CH12 Offset */
#define DMA_INT0_CLRFLG_CH12                               (0x00001000)          /* Clear corresponding DMA_INT0_SRCFLG_REG */
/* DMA_INT0_CLRFLG[DMA_INT0_CLRFLG_CH13] Bits */
#define DMA_INT0_CLRFLG_CH13_OFS                           (13)                  /* CH13 Offset */
#define DMA_INT0_CLRFLG_CH13                               (0x00002000)          /* Clear corresponding DMA_INT0_SRCFLG_REG */
/* DMA_INT0_CLRFLG[DMA_INT0_CLRFLG_CH14] Bits */
#define DMA_INT0_CLRFLG_CH14_OFS                           (14)                  /* CH14 Offset */
#define DMA_INT0_CLRFLG_CH14                               (0x00004000)          /* Clear corresponding DMA_INT0_SRCFLG_REG */
/* DMA_INT0_CLRFLG[DMA_INT0_CLRFLG_CH15] Bits */
#define DMA_INT0_CLRFLG_CH15_OFS                           (15)                  /* CH15 Offset */
#define DMA_INT0_CLRFLG_CH15                               (0x00008000)          /* Clear corresponding DMA_INT0_SRCFLG_REG */
/* DMA_INT0_CLRFLG[DMA_INT0_CLRFLG_CH16] Bits */
#define DMA_INT0_CLRFLG_CH16_OFS                           (16)                  /* CH16 Offset */
#define DMA_INT0_CLRFLG_CH16                               (0x00010000)          /* Clear corresponding DMA_INT0_SRCFLG_REG */
/* DMA_INT0_CLRFLG[DMA_INT0_CLRFLG_CH17] Bits */
#define DMA_INT0_CLRFLG_CH17_OFS                           (17)                  /* CH17 Offset */
#define DMA_INT0_CLRFLG_CH17                               (0x00020000)          /* Clear corresponding DMA_INT0_SRCFLG_REG */
/* DMA_INT0_CLRFLG[DMA_INT0_CLRFLG_CH18] Bits */
#define DMA_INT0_CLRFLG_CH18_OFS                           (18)                  /* CH18 Offset */
#define DMA_INT0_CLRFLG_CH18                               (0x00040000)          /* Clear corresponding DMA_INT0_SRCFLG_REG */
/* DMA_INT0_CLRFLG[DMA_INT0_CLRFLG_CH19] Bits */
#define DMA_INT0_CLRFLG_CH19_OFS                           (19)                  /* CH19 Offset */
#define DMA_INT0_CLRFLG_CH19                               (0x00080000)          /* Clear corresponding DMA_INT0_SRCFLG_REG */
/* DMA_INT0_CLRFLG[DMA_INT0_CLRFLG_CH20] Bits */
#define DMA_INT0_CLRFLG_CH20_OFS                           (20)                  /* CH20 Offset */
#define DMA_INT0_CLRFLG_CH20                               (0x00100000)          /* Clear corresponding DMA_INT0_SRCFLG_REG */
/* DMA_INT0_CLRFLG[DMA_INT0_CLRFLG_CH21] Bits */
#define DMA_INT0_CLRFLG_CH21_OFS                           (21)                  /* CH21 Offset */
#define DMA_INT0_CLRFLG_CH21                               (0x00200000)          /* Clear corresponding DMA_INT0_SRCFLG_REG */
/* DMA_INT0_CLRFLG[DMA_INT0_CLRFLG_CH22] Bits */
#define DMA_INT0_CLRFLG_CH22_OFS                           (22)                  /* CH22 Offset */
#define DMA_INT0_CLRFLG_CH22                               (0x00400000)          /* Clear corresponding DMA_INT0_SRCFLG_REG */
/* DMA_INT0_CLRFLG[DMA_INT0_CLRFLG_CH23] Bits */
#define DMA_INT0_CLRFLG_CH23_OFS                           (23)                  /* CH23 Offset */
#define DMA_INT0_CLRFLG_CH23                               (0x00800000)          /* Clear corresponding DMA_INT0_SRCFLG_REG */
/* DMA_INT0_CLRFLG[DMA_INT0_CLRFLG_CH24] Bits */
#define DMA_INT0_CLRFLG_CH24_OFS                           (24)                  /* CH24 Offset */
#define DMA_INT0_CLRFLG_CH24                               (0x01000000)          /* Clear corresponding DMA_INT0_SRCFLG_REG */
/* DMA_INT0_CLRFLG[DMA_INT0_CLRFLG_CH25] Bits */
#define DMA_INT0_CLRFLG_CH25_OFS                           (25)                  /* CH25 Offset */
#define DMA_INT0_CLRFLG_CH25                               (0x02000000)          /* Clear corresponding DMA_INT0_SRCFLG_REG */
/* DMA_INT0_CLRFLG[DMA_INT0_CLRFLG_CH26] Bits */
#define DMA_INT0_CLRFLG_CH26_OFS                           (26)                  /* CH26 Offset */
#define DMA_INT0_CLRFLG_CH26                               (0x04000000)          /* Clear corresponding DMA_INT0_SRCFLG_REG */
/* DMA_INT0_CLRFLG[DMA_INT0_CLRFLG_CH27] Bits */
#define DMA_INT0_CLRFLG_CH27_OFS                           (27)                  /* CH27 Offset */
#define DMA_INT0_CLRFLG_CH27                               (0x08000000)          /* Clear corresponding DMA_INT0_SRCFLG_REG */
/* DMA_INT0_CLRFLG[DMA_INT0_CLRFLG_CH28] Bits */
#define DMA_INT0_CLRFLG_CH28_OFS                           (28)                  /* CH28 Offset */
#define DMA_INT0_CLRFLG_CH28                               (0x10000000)          /* Clear corresponding DMA_INT0_SRCFLG_REG */
/* DMA_INT0_CLRFLG[DMA_INT0_CLRFLG_CH29] Bits */
#define DMA_INT0_CLRFLG_CH29_OFS                           (29)                  /* CH29 Offset */
#define DMA_INT0_CLRFLG_CH29                               (0x20000000)          /* Clear corresponding DMA_INT0_SRCFLG_REG */
/* DMA_INT0_CLRFLG[DMA_INT0_CLRFLG_CH30] Bits */
#define DMA_INT0_CLRFLG_CH30_OFS                           (30)                  /* CH30 Offset */
#define DMA_INT0_CLRFLG_CH30                               (0x40000000)          /* Clear corresponding DMA_INT0_SRCFLG_REG */
/* DMA_INT0_CLRFLG[DMA_INT0_CLRFLG_CH31] Bits */
#define DMA_INT0_CLRFLG_CH31_OFS                           (31)                  /* CH31 Offset */
#define DMA_INT0_CLRFLG_CH31                               (0x80000000)          /* Clear corresponding DMA_INT0_SRCFLG_REG */
/* DMA_STAT[DMA_STAT_MASTEN] Bits */
#define DMA_STAT_MASTEN_OFS                                ( 0)                  /* MASTEN Offset */
#define DMA_STAT_MASTEN                                    (0x00000001)          /*  */
/* DMA_STAT[DMA_STAT_] Bits */
#define DMA_STAT__OFS                                      ( 4)                  /* STATE Offset */
#define DMA_STAT__M                                        (0x000000f0)          /*  */
#define DMA_STAT_0                                         (0x00000010)          /*  */
#define DMA_STAT_1                                         (0x00000020)          /*  */
#define DMA_STAT_2                                         (0x00000040)          /*  */
#define DMA_STAT_3                                         (0x00000080)          /*  */
#define DMA_STAT__0                                        (0x00000000)          /* idle */
#define DMA_STAT__1                                        (0x00000010)          /* reading channel controller data */
#define DMA_STAT__2                                        (0x00000020)          /* reading source data end pointer */
#define DMA_STAT__3                                        (0x00000030)          /* reading destination data end pointer */
#define DMA_STAT__4                                        (0x00000040)          /* reading source data */
#define DMA_STAT__5                                        (0x00000050)          /* writing destination data */
#define DMA_STAT__6                                        (0x00000060)          /* waiting for DMA request to clear */
#define DMA_STAT__7                                        (0x00000070)          /* writing channel controller data */
#define DMA_STAT__8                                        (0x00000080)          /* stalled */
#define DMA_STAT__9                                        (0x00000090)          /* done */
#define DMA_STAT__10                                       (0x000000a0)          /* peripheral scatter-gather transition */
#define DMA_STAT__11                                       (0x000000b0)          /* Reserved */
#define DMA_STAT__12                                       (0x000000c0)          /* Reserved */
#define DMA_STAT__13                                       (0x000000d0)          /* Reserved */
#define DMA_STAT__14                                       (0x000000e0)          /* Reserved */
#define DMA_STAT__15                                       (0x000000f0)          /* Reserved */
/* DMA_STAT[DMA_STAT_] Bits */
//#define DMA_STAT__OFS                                      (16)                  /* DMACHANS Offset */
//#define DMA_STAT__M                                        (0x001f0000)          /*  */
//#define DMA_STAT_0                                         (0x00010000)          /*  */
//#define DMA_STAT_1                                         (0x00020000)          /*  */
//#define DMA_STAT_2                                         (0x00040000)          /*  */
//#define DMA_STAT_3                                         (0x00080000)          /*  */
#define DMA_STAT_4                                         (0x00100000)          /*  */
//#define DMA_STAT__0                                        (0x00000000)          /* Controller configured to use 1 DMA channel */
//#define DMA_STAT__1                                        (0x00010000)          /* Controller configured to use 2 DMA channels */
#define DMA_STAT__30                                       (0x001e0000)          /* Controller configured to use 31 DMA channels */
#define DMA_STAT__31                                       (0x001f0000)          /* Controller configured to use 32 DMA channels */
/* DMA_STAT[DMA_STAT_] Bits */
//#define DMA_STAT__OFS                                      (28)                  /* TESTSTAT Offset */
//#define DMA_STAT__M                                        (0xf0000000)          /*  */
//#define DMA_STAT_0                                         (0x10000000)          /*  */
//#define DMA_STAT_1                                         (0x20000000)          /*  */
//#define DMA_STAT_2                                         (0x40000000)          /*  */
//#define DMA_STAT_3                                         (0x80000000)          /*  */
//#define DMA_STAT__0                                        (0x00000000)          /* Controller does not include the integration test logic */
//#define DMA_STAT__1                                        (0x10000000)          /* Controller includes the integration test logic */
/* DMA_CFG[DMA_CFG_] Bits */
#define DMA_CFG__OFS                                       ( 0)                  /* MASTEN Offset */
#define DMA_CFG_                                           (0x00000001)          /*  */
/* DMA_CFG[DMA_CFG_] Bits */
//#define DMA_CFG__OFS                                       ( 5)                  /* CHPROTCTRL Offset */
#define DMA_CFG__M                                         (0x000000e0)          /*  */
/* DMA_CTLBASE[DMA_CTLBASE_] Bits */
#define DMA_CTLBASE__OFS                                   ( 5)                  /* ADDR Offset */
#define DMA_CTLBASE__M                                     (0xffffffe0)          /*  */
/* DMA_ERRCLR[DMA_ERRCLR_] Bits */
#define DMA_ERRCLR__OFS                                    ( 0)                  /* ERRCLR Offset */
#define DMA_ERRCLR_                                        (0x00000001)          /*  */

/* UDMA_STAT Control Bits */
#define UDMA_STAT_DMACHANS_M                               0x001F0000            /* Available uDMA Channels Minus 1 */
#define UDMA_STAT_STATE_M                                  0x000000F0            /* Control State Machine Status */
#define UDMA_STAT_STATE_IDLE                               0x00000000            /* Idle */
#define UDMA_STAT_STATE_RD_CTRL                            0x00000010            /* Reading channel controller data */
#define UDMA_STAT_STATE_RD_SRCENDP                         0x00000020            /* Reading source end pointer */
#define UDMA_STAT_STATE_RD_DSTENDP                         0x00000030            /* Reading destination end pointer */
#define UDMA_STAT_STATE_RD_SRCDAT                          0x00000040            /* Reading source data */
#define UDMA_STAT_STATE_WR_DSTDAT                          0x00000050            /* Writing destination data */
#define UDMA_STAT_STATE_WAIT                               0x00000060            /* Waiting for uDMA request to */
                                                                                 /* clear */
#define UDMA_STAT_STATE_WR_CTRL                            0x00000070            /* Writing channel controller data */
#define UDMA_STAT_STATE_STALL                              0x00000080            /* Stalled */
#define UDMA_STAT_STATE_DONE                               0x00000090            /* Done */
#define UDMA_STAT_STATE_UNDEF                              0x000000A0            /* Undefined */
#define UDMA_STAT_MASTEN                                   0x00000001            /* Master Enable Status */
#define UDMA_STAT_DMACHANS_S                               16

/* UDMA_CFG Control Bits */
#define UDMA_CFG_MASTEN                                    0x00000001            /* Controller Master Enable */

/* UDMA_CTLBASE Control Bits */
#define UDMA_CTLBASE_ADDR_M                                0xFFFFFC00            /* Channel Control Base Address */
#define UDMA_CTLBASE_ADDR_S                                10

/* UDMA_ALTBASE Control Bits */
#define UDMA_ALTBASE_ADDR_M                                0xFFFFFFFF            /* Alternate Channel Address Pointer */
#define UDMA_ALTBASE_ADDR_S                                0

/* UDMA_WAITSTAT Control Bits */
#define UDMA_WAITSTAT_WAITREQ_M                            0xFFFFFFFF            /* Channel [n] Wait Status */

/* UDMA_SWREQ Control Bits */
#define UDMA_SWREQ_M                                       0xFFFFFFFF            /* Channel [n] Software Request */

/* UDMA_USEBURSTSET Control Bits */
#define UDMA_USEBURSTSET_SET_M                             0xFFFFFFFF            /* Channel [n] Useburst Set */

/* UDMA_USEBURSTCLR Control Bits */
#define UDMA_USEBURSTCLR_CLR_M                             0xFFFFFFFF            /* Channel [n] Useburst Clear */

/* UDMA_REQMASKSET Control Bits */
#define UDMA_REQMASKSET_SET_M                              0xFFFFFFFF            /* Channel [n] Request Mask Set */

/* UDMA_REQMASKCLR Control Bits */
#define UDMA_REQMASKCLR_CLR_M                              0xFFFFFFFF            /* Channel [n] Request Mask Clear */

/* UDMA_ENASET Control Bits */
#define UDMA_ENASET_SET_M                                  0xFFFFFFFF            /* Channel [n] Enable Set */

/* UDMA_ENACLR Control Bits */
#define UDMA_ENACLR_CLR_M                                  0xFFFFFFFF            /* Clear Channel [n] Enable Clear */

/* UDMA_ALTSET Control Bits */
#define UDMA_ALTSET_SET_M                                  0xFFFFFFFF            /* Channel [n] Alternate Set */

/* UDMA_ALTCLR Control Bits */
#define UDMA_ALTCLR_CLR_M                                  0xFFFFFFFF            /* Channel [n] Alternate Clear */

/* UDMA_PRIOSET Control Bits */
#define UDMA_PRIOSET_SET_M                                 0xFFFFFFFF            /* Channel [n] Priority Set */

/* UDMA_PRIOCLR Control Bits */
#define UDMA_PRIOCLR_CLR_M                                 0xFFFFFFFF            /* Channel [n] Priority Clear */

/* UDMA_ERRCLR Control Bits */
#define UDMA_ERRCLR_ERRCLR                                 0x00000001            /* uDMA Bus Error Status */

/* UDMA_CHASGN Control Bits */
#define UDMA_CHASGN_M                                      0xFFFFFFFF            /* Channel [n] Assignment Select */
#define UDMA_CHASGN_PRIMARY                                0x00000000            /* Use the primary channel */
                                                                                 /* assignment */
#define UDMA_CHASGN_SECONDARY                              0x00000001            /* Use the secondary channel */
                                                                                 /* assignment */

/* Micro Direct Memory Access (uDMA) offsets */
#define UDMA_O_SRCENDP                                     0x00000000            /* DMA Channel Source Address End */
                                                                                 /* Pointer */
#define UDMA_O_DSTENDP                                     0x00000004            /* DMA Channel Destination Address */
                                                                                 /* End Pointer */
#define UDMA_O_CHCTL                                       0x00000008            /* DMA Channel Control Word */

/* UDMA_O_SRCENDP Control Bits */
#define UDMA_SRCENDP_ADDR_M                                0xFFFFFFFF            /* Source Address End Pointer */
#define UDMA_SRCENDP_ADDR_S                                0

/* UDMA_O_DSTENDP Control Bits */
#define UDMA_DSTENDP_ADDR_M                                0xFFFFFFFF            /* Destination Address End Pointer */
#define UDMA_DSTENDP_ADDR_S                                0

/* UDMA_O_CHCTL Control Bits */
#define UDMA_CHCTL_DSTINC_M                                0xC0000000            /* Destination Address Increment */
#define UDMA_CHCTL_DSTINC_8                                0x00000000            /* Byte */
#define UDMA_CHCTL_DSTINC_16                               0x40000000            /* Half-word */
#define UDMA_CHCTL_DSTINC_32                               0x80000000            /* Word */
#define UDMA_CHCTL_DSTINC_NONE                             0xC0000000            /* No increment */
#define UDMA_CHCTL_DSTSIZE_M                               0x30000000            /* Destination Data Size */
#define UDMA_CHCTL_DSTSIZE_8                               0x00000000            /* Byte */
#define UDMA_CHCTL_DSTSIZE_16                              0x10000000            /* Half-word */
#define UDMA_CHCTL_DSTSIZE_32                              0x20000000            /* Word */
#define UDMA_CHCTL_SRCINC_M                                0x0C000000            /* Source Address Increment */
#define UDMA_CHCTL_SRCINC_8                                0x00000000            /* Byte */
#define UDMA_CHCTL_SRCINC_16                               0x04000000            /* Half-word */
#define UDMA_CHCTL_SRCINC_32                               0x08000000            /* Word */
#define UDMA_CHCTL_SRCINC_NONE                             0x0C000000            /* No increment */
#define UDMA_CHCTL_SRCSIZE_M                               0x03000000            /* Source Data Size */
#define UDMA_CHCTL_SRCSIZE_8                               0x00000000            /* Byte */
#define UDMA_CHCTL_SRCSIZE_16                              0x01000000            /* Half-word */
#define UDMA_CHCTL_SRCSIZE_32                              0x02000000            /* Word */
#define UDMA_CHCTL_ARBSIZE_M                               0x0003C000            /* Arbitration Size */
#define UDMA_CHCTL_ARBSIZE_1                               0x00000000            /* 1 Transfer */
#define UDMA_CHCTL_ARBSIZE_2                               0x00004000            /* 2 Transfers */
#define UDMA_CHCTL_ARBSIZE_4                               0x00008000            /* 4 Transfers */
#define UDMA_CHCTL_ARBSIZE_8                               0x0000C000            /* 8 Transfers */
#define UDMA_CHCTL_ARBSIZE_16                              0x00010000            /* 16 Transfers */
#define UDMA_CHCTL_ARBSIZE_32                              0x00014000            /* 32 Transfers */
#define UDMA_CHCTL_ARBSIZE_64                              0x00018000            /* 64 Transfers */
#define UDMA_CHCTL_ARBSIZE_128                             0x0001C000            /* 128 Transfers */
#define UDMA_CHCTL_ARBSIZE_256                             0x00020000            /* 256 Transfers */
#define UDMA_CHCTL_ARBSIZE_512                             0x00024000            /* 512 Transfers */
#define UDMA_CHCTL_ARBSIZE_1024                            0x00028000            /* 1024 Transfers */
#define UDMA_CHCTL_XFERSIZE_M                              0x00003FF0            /* Transfer Size (minus 1) */
#define UDMA_CHCTL_NXTUSEBURST                             0x00000008            /* Next Useburst */
#define UDMA_CHCTL_XFERMODE_M                              0x00000007            /* uDMA Transfer Mode */
#define UDMA_CHCTL_XFERMODE_STOP                           0x00000000            /* Stop */
#define UDMA_CHCTL_XFERMODE_BASIC                          0x00000001            /* Basic */
#define UDMA_CHCTL_XFERMODE_AUTO                           0x00000002            /* Auto-Request */
#define UDMA_CHCTL_XFERMODE_PINGPONG                       0x00000003            /* Ping-Pong */
#define UDMA_CHCTL_XFERMODE_MEM_SG                         0x00000004            /* Memory Scatter-Gather */
#define UDMA_CHCTL_XFERMODE_MEM_SGA                        0x00000005            /* Alternate Memory Scatter-Gather */
#define UDMA_CHCTL_XFERMODE_PER_SG                         0x00000006            /* Peripheral Scatter-Gather */
#define UDMA_CHCTL_XFERMODE_PER_SGA                        0x00000007            /* Alternate Peripheral */
                                                                                 /* Scatter-Gather */
#define UDMA_CHCTL_XFERSIZE_S                              4


//*****************************************************************************
// DWT Bits
//*****************************************************************************
/* DWT_CTRL[DWT_CTRL_CYCCNTENA] Bits */
#define DWT_CTRL_CYCCNTENA_OFS                             ( 0)                  /* CYCCNTENA Offset */
#define DWT_CTRL_CYCCNTENA                                 (0x00000001)          /*  */
/* DWT_CTRL[DWT_CTRL_POSTPRESET] Bits */
#define DWT_CTRL_POSTPRESET_OFS                            ( 1)                  /* POSTPRESET Offset */
#define DWT_CTRL_POSTPRESET_M                              (0x0000001e)          /*  */
/* DWT_CTRL[DWT_CTRL_POSTCNT] Bits */
#define DWT_CTRL_POSTCNT_OFS                               ( 5)                  /* POSTCNT Offset */
#define DWT_CTRL_POSTCNT_M                                 (0x000001e0)          /*  */
/* DWT_CTRL[DWT_CTRL_CYCTAP] Bits */
#define DWT_CTRL_CYCTAP_OFS                                ( 9)                  /* CYCTAP Offset */
#define DWT_CTRL_CYCTAP                                    (0x00000200)          /*  */
/* DWT_CTRL[DWT_CTRL_SYNCTAP] Bits */
#define DWT_CTRL_SYNCTAP_OFS                               (10)                  /* SYNCTAP Offset */
#define DWT_CTRL_SYNCTAP_M                                 (0x00000c00)          /*  */
#define DWT_CTRL_SYNCTAP0                                  (0x00000400)          /*  */
#define DWT_CTRL_SYNCTAP1                                  (0x00000800)          /*  */
#define DWT_CTRL_SYNCTAP_0                                 (0x00000000)          /* Disabled. No synch counting. */
#define DWT_CTRL_SYNCTAP_1                                 (0x00000400)          /* Tap at CYCCNT bit 24. */
#define DWT_CTRL_SYNCTAP_2                                 (0x00000800)          /* Tap at CYCCNT bit 26. */
#define DWT_CTRL_SYNCTAP_3                                 (0x00000c00)          /* Tap at CYCCNT bit 28. */
/* DWT_CTRL[DWT_CTRL_PCSAMPLEENA] Bits */
#define DWT_CTRL_PCSAMPLEENA_OFS                           (12)                  /* PCSAMPLEENA Offset */
#define DWT_CTRL_PCSAMPLEENA                               (0x00001000)          /*  */
/* DWT_CTRL[DWT_CTRL_EXCTRCENA] Bits */
#define DWT_CTRL_EXCTRCENA_OFS                             (16)                  /* EXCTRCENA Offset */
#define DWT_CTRL_EXCTRCENA                                 (0x00010000)          /*  */
/* DWT_CTRL[DWT_CTRL_CPIEVTENA] Bits */
#define DWT_CTRL_CPIEVTENA_OFS                             (17)                  /* CPIEVTENA Offset */
#define DWT_CTRL_CPIEVTENA                                 (0x00020000)          /*  */
/* DWT_CTRL[DWT_CTRL_EXCEVTENA] Bits */
#define DWT_CTRL_EXCEVTENA_OFS                             (18)                  /* EXCEVTENA Offset */
#define DWT_CTRL_EXCEVTENA                                 (0x00040000)          /*  */
/* DWT_CTRL[DWT_CTRL_SLEEPEVTENA] Bits */
#define DWT_CTRL_SLEEPEVTENA_OFS                           (19)                  /* SLEEPEVTENA Offset */
#define DWT_CTRL_SLEEPEVTENA                               (0x00080000)          /*  */
/* DWT_CTRL[DWT_CTRL_LSUEVTENA] Bits */
#define DWT_CTRL_LSUEVTENA_OFS                             (20)                  /* LSUEVTENA Offset */
#define DWT_CTRL_LSUEVTENA                                 (0x00100000)          /*  */
/* DWT_CTRL[DWT_CTRL_FOLDEVTENA] Bits */
#define DWT_CTRL_FOLDEVTENA_OFS                            (21)                  /* FOLDEVTENA Offset */
#define DWT_CTRL_FOLDEVTENA                                (0x00200000)          /*  */
/* DWT_CTRL[DWT_CTRL_CYCEVTENA] Bits */
#define DWT_CTRL_CYCEVTENA_OFS                             (22)                  /* CYCEVTENA Offset */
#define DWT_CTRL_CYCEVTENA                                 (0x00400000)          /*  */
/* DWT_CTRL[DWT_CTRL_NOPRFCNT] Bits */
#define DWT_CTRL_NOPRFCNT_OFS                              (24)                  /* NOPRFCNT Offset */
#define DWT_CTRL_NOPRFCNT                                  (0x01000000)          /*  */
/* DWT_CTRL[DWT_CTRL_NOCYCCNT] Bits */
#define DWT_CTRL_NOCYCCNT_OFS                              (25)                  /* NOCYCCNT Offset */
#define DWT_CTRL_NOCYCCNT                                  (0x02000000)          /*  */
/* DWT_CPICNT[DWT_CPICNT_CPICNT] Bits */
#define DWT_CPICNT_CPICNT_OFS                              ( 0)                  /* CPICNT Offset */
#define DWT_CPICNT_CPICNT_M                                (0x000000ff)          /*  */
/* DWT_EXCCNT[DWT_EXCCNT_EXCCNT] Bits */
#define DWT_EXCCNT_EXCCNT_OFS                              ( 0)                  /* EXCCNT Offset */
#define DWT_EXCCNT_EXCCNT_M                                (0x000000ff)          /*  */
/* DWT_SLEEPCNT[DWT_SLEEPCNT_SLEEPCNT] Bits */
#define DWT_SLEEPCNT_SLEEPCNT_OFS                          ( 0)                  /* SLEEPCNT Offset */
#define DWT_SLEEPCNT_SLEEPCNT_M                            (0x000000ff)          /*  */
/* DWT_LSUCNT[DWT_LSUCNT_LSUCNT] Bits */
#define DWT_LSUCNT_LSUCNT_OFS                              ( 0)                  /* LSUCNT Offset */
#define DWT_LSUCNT_LSUCNT_M                                (0x000000ff)          /*  */
/* DWT_FOLDCNT[DWT_FOLDCNT_FOLDCNT] Bits */
#define DWT_FOLDCNT_FOLDCNT_OFS                            ( 0)                  /* FOLDCNT Offset */
#define DWT_FOLDCNT_FOLDCNT_M                              (0x000000ff)          /*  */
/* DWT_MASK0[DWT_MASK0_MASK] Bits */
#define DWT_MASK0_MASK_OFS                                 ( 0)                  /* MASK Offset */
#define DWT_MASK0_MASK_M                                   (0x0000000f)          /*  */
/* DWT_FUNCTION0[DWT_FUNCTION0_FUNCTION] Bits */
#define DWT_FUNCTION0_FUNCTION_OFS                         ( 0)                  /* FUNCTION Offset */
#define DWT_FUNCTION0_FUNCTION_M                           (0x0000000f)          /*  */
#define DWT_FUNCTION0_FUNCTION0                            (0x00000001)          /*  */
#define DWT_FUNCTION0_FUNCTION1                            (0x00000002)          /*  */
#define DWT_FUNCTION0_FUNCTION2                            (0x00000004)          /*  */
#define DWT_FUNCTION0_FUNCTION3                            (0x00000008)          /*  */
#define DWT_FUNCTION0_FUNCTION_0                           (0x00000000)          /* Disabled */
#define DWT_FUNCTION0_FUNCTION_1                           (0x00000001)          /* EMITRANGE = 0, sample and emit PC through ITM. EMITRANGE = 1, emit address offset through ITM */
#define DWT_FUNCTION0_FUNCTION_2                           (0x00000002)          /* EMITRANGE = 0, emit data through ITM on read and write. EMITRANGE = 1, emit data and address offset through ITM on read or write. */
#define DWT_FUNCTION0_FUNCTION_3                           (0x00000003)          /* EMITRANGE = 0, sample PC and data value through ITM on read or write. EMITRANGE = 1, emit address offset and data value through ITM on read or write. */
#define DWT_FUNCTION0_FUNCTION_4                           (0x00000004)          /* Watchpoint on PC match. */
#define DWT_FUNCTION0_FUNCTION_5                           (0x00000005)          /* Watchpoint on read. */
#define DWT_FUNCTION0_FUNCTION_6                           (0x00000006)          /* Watchpoint on write. */
#define DWT_FUNCTION0_FUNCTION_7                           (0x00000007)          /* Watchpoint on read or write. */
#define DWT_FUNCTION0_FUNCTION_8                           (0x00000008)          /* ETM trigger on PC match */
#define DWT_FUNCTION0_FUNCTION_9                           (0x00000009)          /* ETM trigger on read */
#define DWT_FUNCTION0_FUNCTION_10                          (0x0000000a)          /* ETM trigger on write */
#define DWT_FUNCTION0_FUNCTION_11                          (0x0000000b)          /* ETM trigger on read or write */
#define DWT_FUNCTION0_FUNCTION_12                          (0x0000000c)          /* EMITRANGE = 0, sample data for read transfers. EMITRANGE = 1, sample Daddr [15:0] for read transfers */
#define DWT_FUNCTION0_FUNCTION_13                          (0x0000000d)          /* EMITRANGE = 0, sample data for write transfers. EMITRANGE = 1, sample Daddr [15:0] for write transfers */
#define DWT_FUNCTION0_FUNCTION_14                          (0x0000000e)          /* EMITRANGE = 0, sample PC + data for read transfers. EMITRANGE = 1, sample Daddr [15:0] + data for read transfers */
#define DWT_FUNCTION0_FUNCTION_15                          (0x0000000f)          /* EMITRANGE = 0, sample PC + data for write transfers. EMITRANGE = 1, sample Daddr [15:0] + data for write transfers */
/* DWT_FUNCTION0[DWT_FUNCTION0_EMITRANGE] Bits */
#define DWT_FUNCTION0_EMITRANGE_OFS                        ( 5)                  /* EMITRANGE Offset */
#define DWT_FUNCTION0_EMITRANGE                            (0x00000020)          /*  */
/* DWT_FUNCTION0[DWT_FUNCTION0_DATAVMATCH] Bits */
#define DWT_FUNCTION0_DATAVMATCH_OFS                       ( 8)                  /* DATAVMATCH Offset */
#define DWT_FUNCTION0_DATAVMATCH                           (0x00000100)          /*  */
/* DWT_FUNCTION0[DWT_FUNCTION0_LNK1ENA] Bits */
#define DWT_FUNCTION0_LNK1ENA_OFS                          ( 9)                  /* LNK1ENA Offset */
#define DWT_FUNCTION0_LNK1ENA                              (0x00000200)          /*  */
/* DWT_FUNCTION0[DWT_FUNCTION0_DATAVSIZE] Bits */
#define DWT_FUNCTION0_DATAVSIZE_OFS                        (10)                  /* DATAVSIZE Offset */
#define DWT_FUNCTION0_DATAVSIZE_M                          (0x00000c00)          /*  */
#define DWT_FUNCTION0_DATAVSIZE0                           (0x00000400)          /*  */
#define DWT_FUNCTION0_DATAVSIZE1                           (0x00000800)          /*  */
#define DWT_FUNCTION0_DATAVSIZE_0                          (0x00000000)          /* byte */
#define DWT_FUNCTION0_DATAVSIZE_1                          (0x00000400)          /* halfword */
#define DWT_FUNCTION0_DATAVSIZE_2                          (0x00000800)          /* word */
#define DWT_FUNCTION0_DATAVSIZE_3                          (0x00000c00)          /* Unpredictable. */
/* DWT_FUNCTION0[DWT_FUNCTION0_DATAVADDR0] Bits */
#define DWT_FUNCTION0_DATAVADDR0_OFS                       (12)                  /* DATAVADDR0 Offset */
#define DWT_FUNCTION0_DATAVADDR0_M                         (0x0000f000)          /*  */
/* DWT_FUNCTION0[DWT_FUNCTION0_DATAVADDR1] Bits */
#define DWT_FUNCTION0_DATAVADDR1_OFS                       (16)                  /* DATAVADDR1 Offset */
#define DWT_FUNCTION0_DATAVADDR1_M                         (0x000f0000)          /*  */
/* DWT_FUNCTION0[DWT_FUNCTION0_MATCHED] Bits */
#define DWT_FUNCTION0_MATCHED_OFS                          (24)                  /* MATCHED Offset */
#define DWT_FUNCTION0_MATCHED                              (0x01000000)          /*  */
/* DWT_MASK1[DWT_MASK1_MASK] Bits */
#define DWT_MASK1_MASK_OFS                                 ( 0)                  /* MASK Offset */
#define DWT_MASK1_MASK_M                                   (0x0000000f)          /*  */
/* DWT_FUNCTION1[DWT_FUNCTION1_FUNCTION] Bits */
#define DWT_FUNCTION1_FUNCTION_OFS                         ( 0)                  /* FUNCTION Offset */
#define DWT_FUNCTION1_FUNCTION_M                           (0x0000000f)          /*  */
#define DWT_FUNCTION1_FUNCTION0                            (0x00000001)          /*  */
#define DWT_FUNCTION1_FUNCTION1                            (0x00000002)          /*  */
#define DWT_FUNCTION1_FUNCTION2                            (0x00000004)          /*  */
#define DWT_FUNCTION1_FUNCTION3                            (0x00000008)          /*  */
#define DWT_FUNCTION1_FUNCTION_0                           (0x00000000)          /* Disabled */
#define DWT_FUNCTION1_FUNCTION_1                           (0x00000001)          /* EMITRANGE = 0, sample and emit PC through ITM. EMITRANGE = 1, emit address offset through ITM */
#define DWT_FUNCTION1_FUNCTION_2                           (0x00000002)          /* EMITRANGE = 0, emit data through ITM on read and write. EMITRANGE = 1, emit data and address offset through ITM on read or write. */
#define DWT_FUNCTION1_FUNCTION_3                           (0x00000003)          /* EMITRANGE = 0, sample PC and data value through ITM on read or write. EMITRANGE = 1, emit address offset and data value through ITM on read or write. */
#define DWT_FUNCTION1_FUNCTION_4                           (0x00000004)          /* Watchpoint on PC match. */
#define DWT_FUNCTION1_FUNCTION_5                           (0x00000005)          /* Watchpoint on read. */
#define DWT_FUNCTION1_FUNCTION_6                           (0x00000006)          /* Watchpoint on write. */
#define DWT_FUNCTION1_FUNCTION_7                           (0x00000007)          /* Watchpoint on read or write. */
#define DWT_FUNCTION1_FUNCTION_8                           (0x00000008)          /* ETM trigger on PC match */
#define DWT_FUNCTION1_FUNCTION_9                           (0x00000009)          /* ETM trigger on read */
#define DWT_FUNCTION1_FUNCTION_10                          (0x0000000a)          /* ETM trigger on write */
#define DWT_FUNCTION1_FUNCTION_11                          (0x0000000b)          /* ETM trigger on read or write */
#define DWT_FUNCTION1_FUNCTION_12                          (0x0000000c)          /* EMITRANGE = 0, sample data for read transfers. EMITRANGE = 1, sample Daddr [15:0] for read transfers */
#define DWT_FUNCTION1_FUNCTION_13                          (0x0000000d)          /* EMITRANGE = 0, sample data for write transfers. EMITRANGE = 1, sample Daddr [15:0] for write transfers */
#define DWT_FUNCTION1_FUNCTION_14                          (0x0000000e)          /* EMITRANGE = 0, sample PC + data for read transfers. EMITRANGE = 1, sample Daddr [15:0] + data for read transfers */
#define DWT_FUNCTION1_FUNCTION_15                          (0x0000000f)          /* EMITRANGE = 0, sample PC + data for write transfers. EMITRANGE = 1, sample Daddr [15:0] + data for write transfers */
/* DWT_FUNCTION1[DWT_FUNCTION1_EMITRANGE] Bits */
#define DWT_FUNCTION1_EMITRANGE_OFS                        ( 5)                  /* EMITRANGE Offset */
#define DWT_FUNCTION1_EMITRANGE                            (0x00000020)          /*  */
/* DWT_FUNCTION1[DWT_FUNCTION1_CYCMATCH] Bits */
#define DWT_FUNCTION1_CYCMATCH_OFS                         ( 7)                  /* CYCMATCH Offset */
#define DWT_FUNCTION1_CYCMATCH                             (0x00000080)          /*  */
/* DWT_FUNCTION1[DWT_FUNCTION1_DATAVMATCH] Bits */
#define DWT_FUNCTION1_DATAVMATCH_OFS                       ( 8)                  /* DATAVMATCH Offset */
#define DWT_FUNCTION1_DATAVMATCH                           (0x00000100)          /*  */
/* DWT_FUNCTION1[DWT_FUNCTION1_LNK1ENA] Bits */
#define DWT_FUNCTION1_LNK1ENA_OFS                          ( 9)                  /* LNK1ENA Offset */
#define DWT_FUNCTION1_LNK1ENA                              (0x00000200)          /*  */
/* DWT_FUNCTION1[DWT_FUNCTION1_DATAVSIZE] Bits */
#define DWT_FUNCTION1_DATAVSIZE_OFS                        (10)                  /* DATAVSIZE Offset */
#define DWT_FUNCTION1_DATAVSIZE_M                          (0x00000c00)          /*  */
#define DWT_FUNCTION1_DATAVSIZE0                           (0x00000400)          /*  */
#define DWT_FUNCTION1_DATAVSIZE1                           (0x00000800)          /*  */
#define DWT_FUNCTION1_DATAVSIZE_0                          (0x00000000)          /* byte */
#define DWT_FUNCTION1_DATAVSIZE_1                          (0x00000400)          /* halfword */
#define DWT_FUNCTION1_DATAVSIZE_2                          (0x00000800)          /* word */
#define DWT_FUNCTION1_DATAVSIZE_3                          (0x00000c00)          /* Unpredictable. */
/* DWT_FUNCTION1[DWT_FUNCTION1_DATAVADDR0] Bits */
#define DWT_FUNCTION1_DATAVADDR0_OFS                       (12)                  /* DATAVADDR0 Offset */
#define DWT_FUNCTION1_DATAVADDR0_M                         (0x0000f000)          /*  */
/* DWT_FUNCTION1[DWT_FUNCTION1_DATAVADDR1] Bits */
#define DWT_FUNCTION1_DATAVADDR1_OFS                       (16)                  /* DATAVADDR1 Offset */
#define DWT_FUNCTION1_DATAVADDR1_M                         (0x000f0000)          /*  */
/* DWT_FUNCTION1[DWT_FUNCTION1_MATCHED] Bits */
#define DWT_FUNCTION1_MATCHED_OFS                          (24)                  /* MATCHED Offset */
#define DWT_FUNCTION1_MATCHED                              (0x01000000)          /*  */
/* DWT_MASK2[DWT_MASK2_MASK] Bits */
#define DWT_MASK2_MASK_OFS                                 ( 0)                  /* MASK Offset */
#define DWT_MASK2_MASK_M                                   (0x0000000f)          /*  */
/* DWT_FUNCTION2[DWT_FUNCTION2_FUNCTION] Bits */
#define DWT_FUNCTION2_FUNCTION_OFS                         ( 0)                  /* FUNCTION Offset */
#define DWT_FUNCTION2_FUNCTION_M                           (0x0000000f)          /*  */
#define DWT_FUNCTION2_FUNCTION0                            (0x00000001)          /*  */
#define DWT_FUNCTION2_FUNCTION1                            (0x00000002)          /*  */
#define DWT_FUNCTION2_FUNCTION2                            (0x00000004)          /*  */
#define DWT_FUNCTION2_FUNCTION3                            (0x00000008)          /*  */
#define DWT_FUNCTION2_FUNCTION_0                           (0x00000000)          /* Disabled */
#define DWT_FUNCTION2_FUNCTION_1                           (0x00000001)          /* EMITRANGE = 0, sample and emit PC through ITM. EMITRANGE = 1, emit address offset through ITM */
#define DWT_FUNCTION2_FUNCTION_2                           (0x00000002)          /* EMITRANGE = 0, emit data through ITM on read and write. EMITRANGE = 1, emit data and address offset through ITM on read or write. */
#define DWT_FUNCTION2_FUNCTION_3                           (0x00000003)          /* EMITRANGE = 0, sample PC and data value through ITM on read or write. EMITRANGE = 1, emit address offset and data value through ITM on read or write. */
#define DWT_FUNCTION2_FUNCTION_4                           (0x00000004)          /* Watchpoint on PC match. */
#define DWT_FUNCTION2_FUNCTION_5                           (0x00000005)          /* Watchpoint on read. */
#define DWT_FUNCTION2_FUNCTION_6                           (0x00000006)          /* Watchpoint on write. */
#define DWT_FUNCTION2_FUNCTION_7                           (0x00000007)          /* Watchpoint on read or write. */
#define DWT_FUNCTION2_FUNCTION_8                           (0x00000008)          /* ETM trigger on PC match */
#define DWT_FUNCTION2_FUNCTION_9                           (0x00000009)          /* ETM trigger on read */
#define DWT_FUNCTION2_FUNCTION_10                          (0x0000000a)          /* ETM trigger on write */
#define DWT_FUNCTION2_FUNCTION_11                          (0x0000000b)          /* ETM trigger on read or write */
#define DWT_FUNCTION2_FUNCTION_12                          (0x0000000c)          /* EMITRANGE = 0, sample data for read transfers. EMITRANGE = 1, sample Daddr [15:0] for read transfers */
#define DWT_FUNCTION2_FUNCTION_13                          (0x0000000d)          /* EMITRANGE = 0, sample data for write transfers. EMITRANGE = 1, sample Daddr [15:0] for write transfers */
#define DWT_FUNCTION2_FUNCTION_14                          (0x0000000e)          /* EMITRANGE = 0, sample PC + data for read transfers. EMITRANGE = 1, sample Daddr [15:0] + data for read transfers */
#define DWT_FUNCTION2_FUNCTION_15                          (0x0000000f)          /* EMITRANGE = 0, sample PC + data for write transfers. EMITRANGE = 1, sample Daddr [15:0] + data for write transfers */
/* DWT_FUNCTION2[DWT_FUNCTION2_EMITRANGE] Bits */
#define DWT_FUNCTION2_EMITRANGE_OFS                        ( 5)                  /* EMITRANGE Offset */
#define DWT_FUNCTION2_EMITRANGE                            (0x00000020)          /*  */
/* DWT_FUNCTION2[DWT_FUNCTION2_DATAVMATCH] Bits */
#define DWT_FUNCTION2_DATAVMATCH_OFS                       ( 8)                  /* DATAVMATCH Offset */
#define DWT_FUNCTION2_DATAVMATCH                           (0x00000100)          /*  */
/* DWT_FUNCTION2[DWT_FUNCTION2_LNK1ENA] Bits */
#define DWT_FUNCTION2_LNK1ENA_OFS                          ( 9)                  /* LNK1ENA Offset */
#define DWT_FUNCTION2_LNK1ENA                              (0x00000200)          /*  */
/* DWT_FUNCTION2[DWT_FUNCTION2_DATAVSIZE] Bits */
#define DWT_FUNCTION2_DATAVSIZE_OFS                        (10)                  /* DATAVSIZE Offset */
#define DWT_FUNCTION2_DATAVSIZE_M                          (0x00000c00)          /*  */
#define DWT_FUNCTION2_DATAVSIZE0                           (0x00000400)          /*  */
#define DWT_FUNCTION2_DATAVSIZE1                           (0x00000800)          /*  */
#define DWT_FUNCTION2_DATAVSIZE_0                          (0x00000000)          /* byte */
#define DWT_FUNCTION2_DATAVSIZE_1                          (0x00000400)          /* halfword */
#define DWT_FUNCTION2_DATAVSIZE_2                          (0x00000800)          /* word */
#define DWT_FUNCTION2_DATAVSIZE_3                          (0x00000c00)          /* Unpredictable. */
/* DWT_FUNCTION2[DWT_FUNCTION2_DATAVADDR0] Bits */
#define DWT_FUNCTION2_DATAVADDR0_OFS                       (12)                  /* DATAVADDR0 Offset */
#define DWT_FUNCTION2_DATAVADDR0_M                         (0x0000f000)          /*  */
/* DWT_FUNCTION2[DWT_FUNCTION2_DATAVADDR1] Bits */
#define DWT_FUNCTION2_DATAVADDR1_OFS                       (16)                  /* DATAVADDR1 Offset */
#define DWT_FUNCTION2_DATAVADDR1_M                         (0x000f0000)          /*  */
/* DWT_FUNCTION2[DWT_FUNCTION2_MATCHED] Bits */
#define DWT_FUNCTION2_MATCHED_OFS                          (24)                  /* MATCHED Offset */
#define DWT_FUNCTION2_MATCHED                              (0x01000000)          /*  */
/* DWT_MASK3[DWT_MASK3_MASK] Bits */
#define DWT_MASK3_MASK_OFS                                 ( 0)                  /* MASK Offset */
#define DWT_MASK3_MASK_M                                   (0x0000000f)          /*  */
/* DWT_FUNCTION3[DWT_FUNCTION3_FUNCTION] Bits */
#define DWT_FUNCTION3_FUNCTION_OFS                         ( 0)                  /* FUNCTION Offset */
#define DWT_FUNCTION3_FUNCTION_M                           (0x0000000f)          /*  */
#define DWT_FUNCTION3_FUNCTION0                            (0x00000001)          /*  */
#define DWT_FUNCTION3_FUNCTION1                            (0x00000002)          /*  */
#define DWT_FUNCTION3_FUNCTION2                            (0x00000004)          /*  */
#define DWT_FUNCTION3_FUNCTION3                            (0x00000008)          /*  */
#define DWT_FUNCTION3_FUNCTION_0                           (0x00000000)          /* Disabled */
#define DWT_FUNCTION3_FUNCTION_1                           (0x00000001)          /* EMITRANGE = 0, sample and emit PC through ITM. EMITRANGE = 1, emit address offset through ITM */
#define DWT_FUNCTION3_FUNCTION_2                           (0x00000002)          /* EMITRANGE = 0, emit data through ITM on read and write. EMITRANGE = 1, emit data and address offset through ITM on read or write. */
#define DWT_FUNCTION3_FUNCTION_3                           (0x00000003)          /* EMITRANGE = 0, sample PC and data value through ITM on read or write. EMITRANGE = 1, emit address offset and data value through ITM on read or write. */
#define DWT_FUNCTION3_FUNCTION_4                           (0x00000004)          /* Watchpoint on PC match. */
#define DWT_FUNCTION3_FUNCTION_5                           (0x00000005)          /* Watchpoint on read. */
#define DWT_FUNCTION3_FUNCTION_6                           (0x00000006)          /* Watchpoint on write. */
#define DWT_FUNCTION3_FUNCTION_7                           (0x00000007)          /* Watchpoint on read or write. */
#define DWT_FUNCTION3_FUNCTION_8                           (0x00000008)          /* ETM trigger on PC match */
#define DWT_FUNCTION3_FUNCTION_9                           (0x00000009)          /* ETM trigger on read */
#define DWT_FUNCTION3_FUNCTION_10                          (0x0000000a)          /* ETM trigger on write */
#define DWT_FUNCTION3_FUNCTION_11                          (0x0000000b)          /* ETM trigger on read or write */
#define DWT_FUNCTION3_FUNCTION_12                          (0x0000000c)          /* EMITRANGE = 0, sample data for read transfers. EMITRANGE = 1, sample Daddr [15:0] for read transfers */
#define DWT_FUNCTION3_FUNCTION_13                          (0x0000000d)          /* EMITRANGE = 0, sample data for write transfers. EMITRANGE = 1, sample Daddr [15:0] for write transfers */
#define DWT_FUNCTION3_FUNCTION_14                          (0x0000000e)          /* EMITRANGE = 0, sample PC + data for read transfers. EMITRANGE = 1, sample Daddr [15:0] + data for read transfers */
#define DWT_FUNCTION3_FUNCTION_15                          (0x0000000f)          /* EMITRANGE = 0, sample PC + data for write transfers. EMITRANGE = 1, sample Daddr [15:0] + data for write transfers */
/* DWT_FUNCTION3[DWT_FUNCTION3_EMITRANGE] Bits */
#define DWT_FUNCTION3_EMITRANGE_OFS                        ( 5)                  /* EMITRANGE Offset */
#define DWT_FUNCTION3_EMITRANGE                            (0x00000020)          /*  */
/* DWT_FUNCTION3[DWT_FUNCTION3_DATAVMATCH] Bits */
#define DWT_FUNCTION3_DATAVMATCH_OFS                       ( 8)                  /* DATAVMATCH Offset */
#define DWT_FUNCTION3_DATAVMATCH                           (0x00000100)          /*  */
/* DWT_FUNCTION3[DWT_FUNCTION3_LNK1ENA] Bits */
#define DWT_FUNCTION3_LNK1ENA_OFS                          ( 9)                  /* LNK1ENA Offset */
#define DWT_FUNCTION3_LNK1ENA                              (0x00000200)          /*  */
/* DWT_FUNCTION3[DWT_FUNCTION3_DATAVSIZE] Bits */
#define DWT_FUNCTION3_DATAVSIZE_OFS                        (10)                  /* DATAVSIZE Offset */
#define DWT_FUNCTION3_DATAVSIZE_M                          (0x00000c00)          /*  */
#define DWT_FUNCTION3_DATAVSIZE0                           (0x00000400)          /*  */
#define DWT_FUNCTION3_DATAVSIZE1                           (0x00000800)          /*  */
#define DWT_FUNCTION3_DATAVSIZE_0                          (0x00000000)          /* byte */
#define DWT_FUNCTION3_DATAVSIZE_1                          (0x00000400)          /* halfword */
#define DWT_FUNCTION3_DATAVSIZE_2                          (0x00000800)          /* word */
#define DWT_FUNCTION3_DATAVSIZE_3                          (0x00000c00)          /* Unpredictable. */
/* DWT_FUNCTION3[DWT_FUNCTION3_DATAVADDR0] Bits */
#define DWT_FUNCTION3_DATAVADDR0_OFS                       (12)                  /* DATAVADDR0 Offset */
#define DWT_FUNCTION3_DATAVADDR0_M                         (0x0000f000)          /*  */
/* DWT_FUNCTION3[DWT_FUNCTION3_DATAVADDR1] Bits */
#define DWT_FUNCTION3_DATAVADDR1_OFS                       (16)                  /* DATAVADDR1 Offset */
#define DWT_FUNCTION3_DATAVADDR1_M                         (0x000f0000)          /*  */
/* DWT_FUNCTION3[DWT_FUNCTION3_MATCHED] Bits */
#define DWT_FUNCTION3_MATCHED_OFS                          (24)                  /* MATCHED Offset */
#define DWT_FUNCTION3_MATCHED                              (0x01000000)          /*  */


//*****************************************************************************
// EUSCI_A0 Bits
//*****************************************************************************
/* UCA0CTLW0[UCSWRST] Bits */
#define UCSWRST_OFS                                        ( 0)                  /* UCSWRST Offset */
#define UCSWRST                                            (0x0001)              /* Software reset enable */
/* UCA0CTLW0[UCTXBRK] Bits */
#define UCTXBRK_OFS                                        ( 1)                  /* UCTXBRK Offset */
#define UCTXBRK                                            (0x0002)              /* Transmit break */
/* UCA0CTLW0[UCTXADDR] Bits */
#define UCTXADDR_OFS                                       ( 2)                  /* UCTXADDR Offset */
#define UCTXADDR                                           (0x0004)              /* Transmit address */
/* UCA0CTLW0[UCDORM] Bits */
#define UCDORM_OFS                                         ( 3)                  /* UCDORM Offset */
#define UCDORM                                             (0x0008)              /* Dormant */
/* UCA0CTLW0[UCBRKIE] Bits */
#define UCBRKIE_OFS                                        ( 4)                  /* UCBRKIE Offset */
#define UCBRKIE                                            (0x0010)              /* Receive break character interrupt enable */
/* UCA0CTLW0[UCRXEIE] Bits */
#define UCRXEIE_OFS                                        ( 5)                  /* UCRXEIE Offset */
#define UCRXEIE                                            (0x0020)              /* Receive erroneous-character interrupt enable */
/* UCA0CTLW0[UCSSEL] Bits */
#define UCSSEL_OFS                                         ( 6)                  /* UCSSEL Offset */
#define UCSSEL_M                                           (0x00c0)              /* eUSCI_A clock source select */
#define UCSSEL0                                            (0x0040)              /* eUSCI_A clock source select */
#define UCSSEL1                                            (0x0080)              /* eUSCI_A clock source select */
#define UCSSEL_0                                           (0x0000)              /* UCLK */
#define UCSSEL_1                                           (0x0040)              /* ACLK */
#define UCSSEL_2                                           (0x0080)              /* SMCLK */
#define UCSSEL__UCLK                                       (0x0000)              /* UCLK */
#define UCSSEL__ACLK                                       (0x0040)              /* ACLK */
#define UCSSEL__SMCLK                                      (0x0080)              /* SMCLK */
/* UCA0CTLW0[UCSYNC] Bits */
#define UCSYNC_OFS                                         ( 8)                  /* UCSYNC Offset */
#define UCSYNC                                             (0x0100)              /* Synchronous mode enable */
/* UCA0CTLW0[UCMODE] Bits */
#define UCMODE_OFS                                         ( 9)                  /* UCMODE Offset */
#define UCMODE_M                                           (0x0600)              /* eUSCI_A mode */
#define UCMODE0                                            (0x0200)              /* eUSCI_A mode */
#define UCMODE1                                            (0x0400)              /* eUSCI_A mode */
#define UCMODE_0                                           (0x0000)              /* UART mode */
#define UCMODE_1                                           (0x0200)              /* Idle-line multiprocessor mode */
#define UCMODE_2                                           (0x0400)              /* Address-bit multiprocessor mode */
#define UCMODE_3                                           (0x0600)              /* UART mode with automatic baud-rate detection */
/* UCA0CTLW0[UCSPB] Bits */
#define UCSPB_OFS                                          (11)                  /* UCSPB Offset */
#define UCSPB                                              (0x0800)              /* Stop bit select */
/* UCA0CTLW0[UC7BIT] Bits */
#define UC7BIT_OFS                                         (12)                  /* UC7BIT Offset */
#define UC7BIT                                             (0x1000)              /* Character length */
/* UCA0CTLW0[UCMSB] Bits */
#define UCMSB_OFS                                          (13)                  /* UCMSB Offset */
#define UCMSB                                              (0x2000)              /* MSB first select */
/* UCA0CTLW0[UCPAR] Bits */
#define UCPAR_OFS                                          (14)                  /* UCPAR Offset */
#define UCPAR                                              (0x4000)              /* Parity select */
/* UCA0CTLW0[UCPEN] Bits */
#define UCPEN_OFS                                          (15)                  /* UCPEN Offset */
#define UCPEN                                              (0x8000)              /* Parity enable */
/* UCA0CTLW0_SPI[UCSWRST] Bits */
//#define UCSWRST_OFS                                        ( 0)                  /* UCSWRST Offset */
//#define UCSWRST                                            (0x0001)              /* Software reset enable */
/* UCA0CTLW0_SPI[UCSTEM] Bits */
#define UCSTEM_OFS                                         ( 1)                  /* UCSTEM Offset */
#define UCSTEM                                             (0x0002)              /* STE mode select in master mode. */
/* UCA0CTLW0_SPI[UCSSEL] Bits */
//#define UCSSEL_OFS                                         ( 6)                  /* UCSSEL Offset */
//#define UCSSEL_M                                           (0x00c0)              /* eUSCI_A clock source select */
//#define UCSSEL0                                            (0x0040)              /* eUSCI_A clock source select */
//#define UCSSEL1                                            (0x0080)              /* eUSCI_A clock source select */
//#define UCSSEL_1                                           (0x0040)              /* ACLK */
//#define UCSSEL_2                                           (0x0080)              /* SMCLK */
//#define UCSSEL_0                                           (0x0000)              /* Reserved */
//#define UCSSEL__ACLK                                       (0x0040)              /* ACLK */
//#define UCSSEL__SMCLK                                      (0x0080)              /* SMCLK */
/* UCA0CTLW0_SPI[UCSYNC] Bits */
//#define UCSYNC_OFS                                         ( 8)                  /* UCSYNC Offset */
//#define UCSYNC                                             (0x0100)              /* Synchronous mode enable */
/* UCA0CTLW0_SPI[UCMODE] Bits */
//#define UCMODE_OFS                                         ( 9)                  /* UCMODE Offset */
//#define UCMODE_M                                           (0x0600)              /* eUSCI mode */
//#define UCMODE0                                            (0x0200)              /* eUSCI mode */
//#define UCMODE1                                            (0x0400)              /* eUSCI mode */
//#define UCMODE_0                                           (0x0000)              /* 3-pin SPI */
//#define UCMODE_1                                           (0x0200)              /* 4-pin SPI with UCxSTE active high: Slave enabled when UCxSTE = 1 */
//#define UCMODE_2                                           (0x0400)              /* 4-pin SPI with UCxSTE active low: Slave enabled when UCxSTE = 0 */
/* UCA0CTLW0_SPI[UCMST] Bits */
#define UCMST_OFS                                          (11)                  /* UCMST Offset */
#define UCMST                                              (0x0800)              /* Master mode select */
/* UCA0CTLW0_SPI[UC7BIT] Bits */
//#define UC7BIT_OFS                                         (12)                  /* UC7BIT Offset */
//#define UC7BIT                                             (0x1000)              /* Character length */
/* UCA0CTLW0_SPI[UCMSB] Bits */
//#define UCMSB_OFS                                          (13)                  /* UCMSB Offset */
//#define UCMSB                                              (0x2000)              /* MSB first select */
/* UCA0CTLW0_SPI[UCCKPL] Bits */
#define UCCKPL_OFS                                         (14)                  /* UCCKPL Offset */
#define UCCKPL                                             (0x4000)              /* Clock polarity select */
/* UCA0CTLW0_SPI[UCCKPH] Bits */
#define UCCKPH_OFS                                         (15)                  /* UCCKPH Offset */
#define UCCKPH                                             (0x8000)              /* Clock phase select */
/* UCA0CTLW1[UCGLIT] Bits */
#define UCGLIT_OFS                                         ( 0)                  /* UCGLIT Offset */
#define UCGLIT_M                                           (0x0003)              /* Deglitch time */
#define UCGLIT0                                            (0x0001)              /* Deglitch time */
#define UCGLIT1                                            (0x0002)              /* Deglitch time */
#define UCGLIT_0                                           (0x0000)              /* Approximately 2 ns (equivalent of 1 delay element) */
#define UCGLIT_1                                           (0x0001)              /* Approximately 50 ns */
#define UCGLIT_2                                           (0x0002)              /* Approximately 100 ns */
#define UCGLIT_3                                           (0x0003)              /* Approximately 200 ns */
/* UCA0MCTLW[UCOS16] Bits */
#define UCOS16_OFS                                         ( 0)                  /* UCOS16 Offset */
#define UCOS16                                             (0x0001)              /* Oversampling mode enabled */
/* UCA0MCTLW[UCBRF] Bits */
#define UCBRF_OFS                                          ( 4)                  /* UCBRF Offset */
#define UCBRF_M                                            (0x00f0)              /* First modulation stage select */
/* UCA0MCTLW[UCBRS] Bits */
#define UCBRS_OFS                                          ( 8)                  /* UCBRS Offset */
#define UCBRS_M                                            (0xff00)              /* Second modulation stage select */
/* UCA0STATW[UCBUSY] Bits */
#define UCBUSY_OFS                                         ( 0)                  /* UCBUSY Offset */
#define UCBUSY                                             (0x0001)              /* eUSCI_A busy */
/* UCA0STATW[UCADDR_UCIDLE] Bits */
#define UCADDR_UCIDLE_OFS                                  ( 1)                  /* UCADDR_UCIDLE Offset */
#define UCADDR_UCIDLE                                      (0x0002)              /* Address received / Idle line detected */
/* UCA0STATW[UCRXERR] Bits */
#define UCRXERR_OFS                                        ( 2)                  /* UCRXERR Offset */
#define UCRXERR                                            (0x0004)              /* Receive error flag */
/* UCA0STATW[UCBRK] Bits */
#define UCBRK_OFS                                          ( 3)                  /* UCBRK Offset */
#define UCBRK                                              (0x0008)              /* Break detect flag */
/* UCA0STATW[UCPE] Bits */
#define UCPE_OFS                                           ( 4)                  /* UCPE Offset */
#define UCPE                                               (0x0010)              /*  */
/* UCA0STATW[UCOE] Bits */
#define UCOE_OFS                                           ( 5)                  /* UCOE Offset */
#define UCOE                                               (0x0020)              /* Overrun error flag */
/* UCA0STATW[UCFE] Bits */
#define UCFE_OFS                                           ( 6)                  /* UCFE Offset */
#define UCFE                                               (0x0040)              /* Framing error flag */
/* UCA0STATW[UCLISTEN] Bits */
#define UCLISTEN_OFS                                       ( 7)                  /* UCLISTEN Offset */
#define UCLISTEN                                           (0x0080)              /* Listen enable */
/* UCA0STATW_SPI[UCBUSY] Bits */
//#define UCBUSY_OFS                                         ( 0)                  /* UCBUSY Offset */
//#define UCBUSY                                             (0x0001)              /* eUSCI_A busy */
/* UCA0STATW_SPI[UCOE] Bits */
//#define UCOE_OFS                                           ( 5)                  /* UCOE Offset */
//#define UCOE                                               (0x0020)              /* Overrun error flag */
/* UCA0STATW_SPI[UCFE] Bits */
//#define UCFE_OFS                                           ( 6)                  /* UCFE Offset */
//#define UCFE                                               (0x0040)              /* Framing error flag */
/* UCA0STATW_SPI[UCLISTEN] Bits */
//#define UCLISTEN_OFS                                       ( 7)                  /* UCLISTEN Offset */
//#define UCLISTEN                                           (0x0080)              /* Listen enable */
/* UCA0RXBUF[UCRXBUF] Bits */
#define UCRXBUF_OFS                                        ( 0)                  /* UCRXBUF Offset */
#define UCRXBUF_M                                          (0x00ff)              /* Receive data buffer */
/* UCA0RXBUF_SPI[UCRXBUF] Bits */
//#define UCRXBUF_OFS                                        ( 0)                  /* UCRXBUF Offset */
//#define UCRXBUF_M                                          (0x00ff)              /* Receive data buffer */
/* UCA0TXBUF[UCTXBUF] Bits */
#define UCTXBUF_OFS                                        ( 0)                  /* UCTXBUF Offset */
#define UCTXBUF_M                                          (0x00ff)              /* Transmit data buffer */
/* UCA0TXBUF_SPI[UCTXBUF] Bits */
//#define UCTXBUF_OFS                                        ( 0)                  /* UCTXBUF Offset */
//#define UCTXBUF_M                                          (0x00ff)              /* Transmit data buffer */
/* UCA0ABCTL[UCABDEN] Bits */
#define UCABDEN_OFS                                        ( 0)                  /* UCABDEN Offset */
#define UCABDEN                                            (0x0001)              /* Automatic baud-rate detect enable */
/* UCA0ABCTL[UCBTOE] Bits */
#define UCBTOE_OFS                                         ( 2)                  /* UCBTOE Offset */
#define UCBTOE                                             (0x0004)              /* Break time out error */
/* UCA0ABCTL[UCSTOE] Bits */
#define UCSTOE_OFS                                         ( 3)                  /* UCSTOE Offset */
#define UCSTOE                                             (0x0008)              /* Synch field time out error */
/* UCA0ABCTL[UCDELIM] Bits */
#define UCDELIM_OFS                                        ( 4)                  /* UCDELIM Offset */
#define UCDELIM_M                                          (0x0030)              /* Break/synch delimiter length */
#define UCDELIM0                                           (0x0010)              /* Break/synch delimiter length */
#define UCDELIM1                                           (0x0020)              /* Break/synch delimiter length */
#define UCDELIM_0                                          (0x0000)              /* 1 bit time */
#define UCDELIM_1                                          (0x0010)              /* 2 bit times */
#define UCDELIM_2                                          (0x0020)              /* 3 bit times */
#define UCDELIM_3                                          (0x0030)              /* 4 bit times */
/* UCA0IRCTL[UCIREN] Bits */
#define UCIREN_OFS                                         ( 0)                  /* UCIREN Offset */
#define UCIREN                                             (0x0001)              /* IrDA encoder/decoder enable */
/* UCA0IRCTL[UCIRTXCLK] Bits */
#define UCIRTXCLK_OFS                                      ( 1)                  /* UCIRTXCLK Offset */
#define UCIRTXCLK                                          (0x0002)              /* IrDA transmit pulse clock select */
/* UCA0IRCTL[UCIRTXPL] Bits */
#define UCIRTXPL_OFS                                       ( 2)                  /* UCIRTXPL Offset */
#define UCIRTXPL_M                                         (0x00fc)              /* Transmit pulse length */
/* UCA0IRCTL[UCIRRXFE] Bits */
#define UCIRRXFE_OFS                                       ( 8)                  /* UCIRRXFE Offset */
#define UCIRRXFE                                           (0x0100)              /* IrDA receive filter enabled */
/* UCA0IRCTL[UCIRRXPL] Bits */
#define UCIRRXPL_OFS                                       ( 9)                  /* UCIRRXPL Offset */
#define UCIRRXPL                                           (0x0200)              /* IrDA receive input UCAxRXD polarity */
/* UCA0IRCTL[UCIRRXFL] Bits */
#define UCIRRXFL_OFS                                       (10)                  /* UCIRRXFL Offset */
#define UCIRRXFL_M                                         (0x3c00)              /* Receive filter length */
/* UCA0IE[UCRXIE] Bits */
#define UCRXIE_OFS                                         ( 0)                  /* UCRXIE Offset */
#define UCRXIE                                             (0x0001)              /* Receive interrupt enable */
/* UCA0IE[UCTXIE] Bits */
#define UCTXIE_OFS                                         ( 1)                  /* UCTXIE Offset */
#define UCTXIE                                             (0x0002)              /* Transmit interrupt enable */
/* UCA0IE[UCSTTIE] Bits */
#define UCSTTIE_OFS                                        ( 2)                  /* UCSTTIE Offset */
#define UCSTTIE                                            (0x0004)              /* Start bit interrupt enable */
/* UCA0IE[UCTXCPTIE] Bits */
#define UCTXCPTIE_OFS                                      ( 3)                  /* UCTXCPTIE Offset */
#define UCTXCPTIE                                          (0x0008)              /* Transmit complete interrupt enable */
/* UCA0IE_SPI[UCRXIE] Bits */
//#define UCRXIE_OFS                                         ( 0)                  /* UCRXIE Offset */
//#define UCRXIE                                             (0x0001)              /* Receive interrupt enable */
/* UCA0IE_SPI[UCTXIE] Bits */
//#define UCTXIE_OFS                                         ( 1)                  /* UCTXIE Offset */
//#define UCTXIE                                             (0x0002)              /* Transmit interrupt enable */
/* UCA0IFG[UCRXIFG] Bits */
#define UCRXIFG_OFS                                        ( 0)                  /* UCRXIFG Offset */
#define UCRXIFG                                            (0x0001)              /* Receive interrupt flag */
/* UCA0IFG[UCTXIFG] Bits */
#define UCTXIFG_OFS                                        ( 1)                  /* UCTXIFG Offset */
#define UCTXIFG                                            (0x0002)              /* Transmit interrupt flag */
/* UCA0IFG[UCSTTIFG] Bits */
#define UCSTTIFG_OFS                                       ( 2)                  /* UCSTTIFG Offset */
#define UCSTTIFG                                           (0x0004)              /* Start bit interrupt flag */
/* UCA0IFG[UCTXCPTIFG] Bits */
#define UCTXCPTIFG_OFS                                     ( 3)                  /* UCTXCPTIFG Offset */
#define UCTXCPTIFG                                         (0x0008)              /* Transmit ready interrupt enable */
/* UCA0IFG_SPI[UCRXIFG] Bits */
//#define UCRXIFG_OFS                                        ( 0)                  /* UCRXIFG Offset */
//#define UCRXIFG                                            (0x0001)              /* Receive interrupt flag */
/* UCA0IFG_SPI[UCTXIFG] Bits */
//#define UCTXIFG_OFS                                        ( 1)                  /* UCTXIFG Offset */
//#define UCTXIFG                                            (0x0002)              /* Transmit interrupt flag */


//*****************************************************************************
// EUSCI_A1 Bits
//*****************************************************************************
/* UCA1CTLW0[UCSWRST] Bits */
//#define UCSWRST_OFS                                        ( 0)                  /* UCSWRST Offset */
//#define UCSWRST                                            (0x0001)              /* Software reset enable */
/* UCA1CTLW0[UCTXBRK] Bits */
//#define UCTXBRK_OFS                                        ( 1)                  /* UCTXBRK Offset */
//#define UCTXBRK                                            (0x0002)              /* Transmit break */
/* UCA1CTLW0[UCTXADDR] Bits */
//#define UCTXADDR_OFS                                       ( 2)                  /* UCTXADDR Offset */
//#define UCTXADDR                                           (0x0004)              /* Transmit address */
/* UCA1CTLW0[UCDORM] Bits */
//#define UCDORM_OFS                                         ( 3)                  /* UCDORM Offset */
//#define UCDORM                                             (0x0008)              /* Dormant */
/* UCA1CTLW0[UCBRKIE] Bits */
//#define UCBRKIE_OFS                                        ( 4)                  /* UCBRKIE Offset */
//#define UCBRKIE                                            (0x0010)              /* Receive break character interrupt enable */
/* UCA1CTLW0[UCRXEIE] Bits */
//#define UCRXEIE_OFS                                        ( 5)                  /* UCRXEIE Offset */
//#define UCRXEIE                                            (0x0020)              /* Receive erroneous-character interrupt enable */
/* UCA1CTLW0[UCSSEL] Bits */
//#define UCSSEL_OFS                                         ( 6)                  /* UCSSEL Offset */
//#define UCSSEL_M                                           (0x00c0)              /* eUSCI_A clock source select */
//#define UCSSEL0                                            (0x0040)              /* eUSCI_A clock source select */
//#define UCSSEL1                                            (0x0080)              /* eUSCI_A clock source select */
//#define UCSSEL_0                                           (0x0000)              /* UCLK */
//#define UCSSEL_1                                           (0x0040)              /* ACLK */
//#define UCSSEL_2                                           (0x0080)              /* SMCLK */
//#define UCSSEL__UCLK                                       (0x0000)              /* UCLK */
//#define UCSSEL__ACLK                                       (0x0040)              /* ACLK */
//#define UCSSEL__SMCLK                                      (0x0080)              /* SMCLK */
/* UCA1CTLW0[UCSYNC] Bits */
//#define UCSYNC_OFS                                         ( 8)                  /* UCSYNC Offset */
//#define UCSYNC                                             (0x0100)              /* Synchronous mode enable */
/* UCA1CTLW0[UCMODE] Bits */
//#define UCMODE_OFS                                         ( 9)                  /* UCMODE Offset */
//#define UCMODE_M                                           (0x0600)              /* eUSCI_A mode */
//#define UCMODE0                                            (0x0200)              /* eUSCI_A mode */
//#define UCMODE1                                            (0x0400)              /* eUSCI_A mode */
//#define UCMODE_0                                           (0x0000)              /* UART mode */
//#define UCMODE_1                                           (0x0200)              /* Idle-line multiprocessor mode */
//#define UCMODE_2                                           (0x0400)              /* Address-bit multiprocessor mode */
//#define UCMODE_3                                           (0x0600)              /* UART mode with automatic baud-rate detection */
/* UCA1CTLW0[UCSPB] Bits */
//#define UCSPB_OFS                                          (11)                  /* UCSPB Offset */
//#define UCSPB                                              (0x0800)              /* Stop bit select */
/* UCA1CTLW0[UC7BIT] Bits */
//#define UC7BIT_OFS                                         (12)                  /* UC7BIT Offset */
//#define UC7BIT                                             (0x1000)              /* Character length */
/* UCA1CTLW0[UCMSB] Bits */
//#define UCMSB_OFS                                          (13)                  /* UCMSB Offset */
//#define UCMSB                                              (0x2000)              /* MSB first select */
/* UCA1CTLW0[UCPAR] Bits */
//#define UCPAR_OFS                                          (14)                  /* UCPAR Offset */
//#define UCPAR                                              (0x4000)              /* Parity select */
/* UCA1CTLW0[UCPEN] Bits */
//#define UCPEN_OFS                                          (15)                  /* UCPEN Offset */
//#define UCPEN                                              (0x8000)              /* Parity enable */
/* UCA1CTLW0_SPI[UCSWRST] Bits */
//#define UCSWRST_OFS                                        ( 0)                  /* UCSWRST Offset */
//#define UCSWRST                                            (0x0001)              /* Software reset enable */
/* UCA1CTLW0_SPI[UCSTEM] Bits */
//#define UCSTEM_OFS                                         ( 1)                  /* UCSTEM Offset */
//#define UCSTEM                                             (0x0002)              /* STE mode select in master mode. */
/* UCA1CTLW0_SPI[UCSSEL] Bits */
//#define UCSSEL_OFS                                         ( 6)                  /* UCSSEL Offset */
//#define UCSSEL_M                                           (0x00c0)              /* eUSCI_A clock source select */
//#define UCSSEL0                                            (0x0040)              /* eUSCI_A clock source select */
//#define UCSSEL1                                            (0x0080)              /* eUSCI_A clock source select */
//#define UCSSEL_1                                           (0x0040)              /* ACLK */
//#define UCSSEL_2                                           (0x0080)              /* SMCLK */
//#define UCSSEL_0                                           (0x0000)              /* Reserved */
//#define UCSSEL__ACLK                                       (0x0040)              /* ACLK */
//#define UCSSEL__SMCLK                                      (0x0080)              /* SMCLK */
/* UCA1CTLW0_SPI[UCSYNC] Bits */
//#define UCSYNC_OFS                                         ( 8)                  /* UCSYNC Offset */
//#define UCSYNC                                             (0x0100)              /* Synchronous mode enable */
/* UCA1CTLW0_SPI[UCMODE] Bits */
//#define UCMODE_OFS                                         ( 9)                  /* UCMODE Offset */
//#define UCMODE_M                                           (0x0600)              /* eUSCI mode */
//#define UCMODE0                                            (0x0200)              /* eUSCI mode */
//#define UCMODE1                                            (0x0400)              /* eUSCI mode */
//#define UCMODE_0                                           (0x0000)              /* 3-pin SPI */
//#define UCMODE_1                                           (0x0200)              /* 4-pin SPI with UCxSTE active high: Slave enabled when UCxSTE = 1 */
//#define UCMODE_2                                           (0x0400)              /* 4-pin SPI with UCxSTE active low: Slave enabled when UCxSTE = 0 */
/* UCA1CTLW0_SPI[UCMST] Bits */
//#define UCMST_OFS                                          (11)                  /* UCMST Offset */
//#define UCMST                                              (0x0800)              /* Master mode select */
/* UCA1CTLW0_SPI[UC7BIT] Bits */
//#define UC7BIT_OFS                                         (12)                  /* UC7BIT Offset */
//#define UC7BIT                                             (0x1000)              /* Character length */
/* UCA1CTLW0_SPI[UCMSB] Bits */
//#define UCMSB_OFS                                          (13)                  /* UCMSB Offset */
//#define UCMSB                                              (0x2000)              /* MSB first select */
/* UCA1CTLW0_SPI[UCCKPL] Bits */
//#define UCCKPL_OFS                                         (14)                  /* UCCKPL Offset */
//#define UCCKPL                                             (0x4000)              /* Clock polarity select */
/* UCA1CTLW0_SPI[UCCKPH] Bits */
//#define UCCKPH_OFS                                         (15)                  /* UCCKPH Offset */
//#define UCCKPH                                             (0x8000)              /* Clock phase select */
/* UCA1CTLW1[UCGLIT] Bits */
//#define UCGLIT_OFS                                         ( 0)                  /* UCGLIT Offset */
//#define UCGLIT_M                                           (0x0003)              /* Deglitch time */
//#define UCGLIT0                                            (0x0001)              /* Deglitch time */
//#define UCGLIT1                                            (0x0002)              /* Deglitch time */
//#define UCGLIT_0                                           (0x0000)              /* Approximately 2 ns (equivalent of 1 delay element) */
//#define UCGLIT_1                                           (0x0001)              /* Approximately 50 ns */
//#define UCGLIT_2                                           (0x0002)              /* Approximately 100 ns */
//#define UCGLIT_3                                           (0x0003)              /* Approximately 200 ns */
/* UCA1MCTLW[UCOS16] Bits */
//#define UCOS16_OFS                                         ( 0)                  /* UCOS16 Offset */
//#define UCOS16                                             (0x0001)              /* Oversampling mode enabled */
/* UCA1MCTLW[UCBRF] Bits */
//#define UCBRF_OFS                                          ( 4)                  /* UCBRF Offset */
//#define UCBRF_M                                            (0x00f0)              /* First modulation stage select */
/* UCA1MCTLW[UCBRS] Bits */
//#define UCBRS_OFS                                          ( 8)                  /* UCBRS Offset */
//#define UCBRS_M                                            (0xff00)              /* Second modulation stage select */
/* UCA1STATW[UCBUSY] Bits */
//#define UCBUSY_OFS                                         ( 0)                  /* UCBUSY Offset */
//#define UCBUSY                                             (0x0001)              /* eUSCI_A busy */
/* UCA1STATW[UCADDR_UCIDLE] Bits */
//#define UCADDR_UCIDLE_OFS                                  ( 1)                  /* UCADDR_UCIDLE Offset */
//#define UCADDR_UCIDLE                                      (0x0002)              /* Address received / Idle line detected */
/* UCA1STATW[UCRXERR] Bits */
//#define UCRXERR_OFS                                        ( 2)                  /* UCRXERR Offset */
//#define UCRXERR                                            (0x0004)              /* Receive error flag */
/* UCA1STATW[UCBRK] Bits */
//#define UCBRK_OFS                                          ( 3)                  /* UCBRK Offset */
//#define UCBRK                                              (0x0008)              /* Break detect flag */
/* UCA1STATW[UCPE] Bits */
//#define UCPE_OFS                                           ( 4)                  /* UCPE Offset */
//#define UCPE                                               (0x0010)              /*  */
/* UCA1STATW[UCOE] Bits */
//#define UCOE_OFS                                           ( 5)                  /* UCOE Offset */
//#define UCOE                                               (0x0020)              /* Overrun error flag */
/* UCA1STATW[UCFE] Bits */
//#define UCFE_OFS                                           ( 6)                  /* UCFE Offset */
//#define UCFE                                               (0x0040)              /* Framing error flag */
/* UCA1STATW[UCLISTEN] Bits */
//#define UCLISTEN_OFS                                       ( 7)                  /* UCLISTEN Offset */
//#define UCLISTEN                                           (0x0080)              /* Listen enable */
/* UCA1STATW_SPI[UCBUSY] Bits */
//#define UCBUSY_OFS                                         ( 0)                  /* UCBUSY Offset */
//#define UCBUSY                                             (0x0001)              /* eUSCI_A busy */
/* UCA1STATW_SPI[UCOE] Bits */
//#define UCOE_OFS                                           ( 5)                  /* UCOE Offset */
//#define UCOE                                               (0x0020)              /* Overrun error flag */
/* UCA1STATW_SPI[UCFE] Bits */
//#define UCFE_OFS                                           ( 6)                  /* UCFE Offset */
//#define UCFE                                               (0x0040)              /* Framing error flag */
/* UCA1STATW_SPI[UCLISTEN] Bits */
//#define UCLISTEN_OFS                                       ( 7)                  /* UCLISTEN Offset */
//#define UCLISTEN                                           (0x0080)              /* Listen enable */
/* UCA1RXBUF[UCRXBUF] Bits */
//#define UCRXBUF_OFS                                        ( 0)                  /* UCRXBUF Offset */
//#define UCRXBUF_M                                          (0x00ff)              /* Receive data buffer */
/* UCA1RXBUF_SPI[UCRXBUF] Bits */
//#define UCRXBUF_OFS                                        ( 0)                  /* UCRXBUF Offset */
//#define UCRXBUF_M                                          (0x00ff)              /* Receive data buffer */
/* UCA1TXBUF[UCTXBUF] Bits */
//#define UCTXBUF_OFS                                        ( 0)                  /* UCTXBUF Offset */
//#define UCTXBUF_M                                          (0x00ff)              /* Transmit data buffer */
/* UCA1TXBUF_SPI[UCTXBUF] Bits */
//#define UCTXBUF_OFS                                        ( 0)                  /* UCTXBUF Offset */
//#define UCTXBUF_M                                          (0x00ff)              /* Transmit data buffer */
/* UCA1ABCTL[UCABDEN] Bits */
//#define UCABDEN_OFS                                        ( 0)                  /* UCABDEN Offset */
//#define UCABDEN                                            (0x0001)              /* Automatic baud-rate detect enable */
/* UCA1ABCTL[UCBTOE] Bits */
//#define UCBTOE_OFS                                         ( 2)                  /* UCBTOE Offset */
//#define UCBTOE                                             (0x0004)              /* Break time out error */
/* UCA1ABCTL[UCSTOE] Bits */
//#define UCSTOE_OFS                                         ( 3)                  /* UCSTOE Offset */
//#define UCSTOE                                             (0x0008)              /* Synch field time out error */
/* UCA1ABCTL[UCDELIM] Bits */
//#define UCDELIM_OFS                                        ( 4)                  /* UCDELIM Offset */
//#define UCDELIM_M                                          (0x0030)              /* Break/synch delimiter length */
//#define UCDELIM0                                           (0x0010)              /* Break/synch delimiter length */
//#define UCDELIM1                                           (0x0020)              /* Break/synch delimiter length */
//#define UCDELIM_0                                          (0x0000)              /* 1 bit time */
//#define UCDELIM_1                                          (0x0010)              /* 2 bit times */
//#define UCDELIM_2                                          (0x0020)              /* 3 bit times */
//#define UCDELIM_3                                          (0x0030)              /* 4 bit times */
/* UCA1IRCTL[UCIREN] Bits */
//#define UCIREN_OFS                                         ( 0)                  /* UCIREN Offset */
//#define UCIREN                                             (0x0001)              /* IrDA encoder/decoder enable */
/* UCA1IRCTL[UCIRTXCLK] Bits */
//#define UCIRTXCLK_OFS                                      ( 1)                  /* UCIRTXCLK Offset */
//#define UCIRTXCLK                                          (0x0002)              /* IrDA transmit pulse clock select */
/* UCA1IRCTL[UCIRTXPL] Bits */
//#define UCIRTXPL_OFS                                       ( 2)                  /* UCIRTXPL Offset */
//#define UCIRTXPL_M                                         (0x00fc)              /* Transmit pulse length */
/* UCA1IRCTL[UCIRRXFE] Bits */
//#define UCIRRXFE_OFS                                       ( 8)                  /* UCIRRXFE Offset */
//#define UCIRRXFE                                           (0x0100)              /* IrDA receive filter enabled */
/* UCA1IRCTL[UCIRRXPL] Bits */
//#define UCIRRXPL_OFS                                       ( 9)                  /* UCIRRXPL Offset */
//#define UCIRRXPL                                           (0x0200)              /* IrDA receive input UCAxRXD polarity */
/* UCA1IRCTL[UCIRRXFL] Bits */
//#define UCIRRXFL_OFS                                       (10)                  /* UCIRRXFL Offset */
//#define UCIRRXFL_M                                         (0x3c00)              /* Receive filter length */
/* UCA1IE[UCRXIE] Bits */
//#define UCRXIE_OFS                                         ( 0)                  /* UCRXIE Offset */
//#define UCRXIE                                             (0x0001)              /* Receive interrupt enable */
/* UCA1IE[UCTXIE] Bits */
//#define UCTXIE_OFS                                         ( 1)                  /* UCTXIE Offset */
//#define UCTXIE                                             (0x0002)              /* Transmit interrupt enable */
/* UCA1IE[UCSTTIE] Bits */
//#define UCSTTIE_OFS                                        ( 2)                  /* UCSTTIE Offset */
//#define UCSTTIE                                            (0x0004)              /* Start bit interrupt enable */
/* UCA1IE[UCTXCPTIE] Bits */
//#define UCTXCPTIE_OFS                                      ( 3)                  /* UCTXCPTIE Offset */
//#define UCTXCPTIE                                          (0x0008)              /* Transmit complete interrupt enable */
/* UCA1IE_SPI[UCRXIE] Bits */
//#define UCRXIE_OFS                                         ( 0)                  /* UCRXIE Offset */
//#define UCRXIE                                             (0x0001)              /* Receive interrupt enable */
/* UCA1IE_SPI[UCTXIE] Bits */
//#define UCTXIE_OFS                                         ( 1)                  /* UCTXIE Offset */
//#define UCTXIE                                             (0x0002)              /* Transmit interrupt enable */
/* UCA1IFG[UCRXIFG] Bits */
//#define UCRXIFG_OFS                                        ( 0)                  /* UCRXIFG Offset */
//#define UCRXIFG                                            (0x0001)              /* Receive interrupt flag */
/* UCA1IFG[UCTXIFG] Bits */
//#define UCTXIFG_OFS                                        ( 1)                  /* UCTXIFG Offset */
//#define UCTXIFG                                            (0x0002)              /* Transmit interrupt flag */
/* UCA1IFG[UCSTTIFG] Bits */
//#define UCSTTIFG_OFS                                       ( 2)                  /* UCSTTIFG Offset */
//#define UCSTTIFG                                           (0x0004)              /* Start bit interrupt flag */
/* UCA1IFG[UCTXCPTIFG] Bits */
//#define UCTXCPTIFG_OFS                                     ( 3)                  /* UCTXCPTIFG Offset */
//#define UCTXCPTIFG                                         (0x0008)              /* Transmit ready interrupt enable */
/* UCA1IFG_SPI[UCRXIFG] Bits */
//#define UCRXIFG_OFS                                        ( 0)                  /* UCRXIFG Offset */
//#define UCRXIFG                                            (0x0001)              /* Receive interrupt flag */
/* UCA1IFG_SPI[UCTXIFG] Bits */
//#define UCTXIFG_OFS                                        ( 1)                  /* UCTXIFG Offset */
//#define UCTXIFG                                            (0x0002)              /* Transmit interrupt flag */


//*****************************************************************************
// EUSCI_A2 Bits
//*****************************************************************************
/* UCA2CTLW0[UCSWRST] Bits */
//#define UCSWRST_OFS                                        ( 0)                  /* UCSWRST Offset */
//#define UCSWRST                                            (0x0001)              /* Software reset enable */
/* UCA2CTLW0[UCTXBRK] Bits */
//#define UCTXBRK_OFS                                        ( 1)                  /* UCTXBRK Offset */
//#define UCTXBRK                                            (0x0002)              /* Transmit break */
/* UCA2CTLW0[UCTXADDR] Bits */
//#define UCTXADDR_OFS                                       ( 2)                  /* UCTXADDR Offset */
//#define UCTXADDR                                           (0x0004)              /* Transmit address */
/* UCA2CTLW0[UCDORM] Bits */
//#define UCDORM_OFS                                         ( 3)                  /* UCDORM Offset */
//#define UCDORM                                             (0x0008)              /* Dormant */
/* UCA2CTLW0[UCBRKIE] Bits */
//#define UCBRKIE_OFS                                        ( 4)                  /* UCBRKIE Offset */
//#define UCBRKIE                                            (0x0010)              /* Receive break character interrupt enable */
/* UCA2CTLW0[UCRXEIE] Bits */
//#define UCRXEIE_OFS                                        ( 5)                  /* UCRXEIE Offset */
//#define UCRXEIE                                            (0x0020)              /* Receive erroneous-character interrupt enable */
/* UCA2CTLW0[UCSSEL] Bits */
//#define UCSSEL_OFS                                         ( 6)                  /* UCSSEL Offset */
//#define UCSSEL_M                                           (0x00c0)              /* eUSCI_A clock source select */
//#define UCSSEL0                                            (0x0040)              /* eUSCI_A clock source select */
//#define UCSSEL1                                            (0x0080)              /* eUSCI_A clock source select */
//#define UCSSEL_0                                           (0x0000)              /* UCLK */
//#define UCSSEL_1                                           (0x0040)              /* ACLK */
//#define UCSSEL_2                                           (0x0080)              /* SMCLK */
//#define UCSSEL__UCLK                                       (0x0000)              /* UCLK */
//#define UCSSEL__ACLK                                       (0x0040)              /* ACLK */
//#define UCSSEL__SMCLK                                      (0x0080)              /* SMCLK */
/* UCA2CTLW0[UCSYNC] Bits */
//#define UCSYNC_OFS                                         ( 8)                  /* UCSYNC Offset */
//#define UCSYNC                                             (0x0100)              /* Synchronous mode enable */
/* UCA2CTLW0[UCMODE] Bits */
//#define UCMODE_OFS                                         ( 9)                  /* UCMODE Offset */
//#define UCMODE_M                                           (0x0600)              /* eUSCI_A mode */
//#define UCMODE0                                            (0x0200)              /* eUSCI_A mode */
//#define UCMODE1                                            (0x0400)              /* eUSCI_A mode */
//#define UCMODE_0                                           (0x0000)              /* UART mode */
//#define UCMODE_1                                           (0x0200)              /* Idle-line multiprocessor mode */
//#define UCMODE_2                                           (0x0400)              /* Address-bit multiprocessor mode */
//#define UCMODE_3                                           (0x0600)              /* UART mode with automatic baud-rate detection */
/* UCA2CTLW0[UCSPB] Bits */
//#define UCSPB_OFS                                          (11)                  /* UCSPB Offset */
//#define UCSPB                                              (0x0800)              /* Stop bit select */
/* UCA2CTLW0[UC7BIT] Bits */
//#define UC7BIT_OFS                                         (12)                  /* UC7BIT Offset */
//#define UC7BIT                                             (0x1000)              /* Character length */
/* UCA2CTLW0[UCMSB] Bits */
//#define UCMSB_OFS                                          (13)                  /* UCMSB Offset */
//#define UCMSB                                              (0x2000)              /* MSB first select */
/* UCA2CTLW0[UCPAR] Bits */
//#define UCPAR_OFS                                          (14)                  /* UCPAR Offset */
//#define UCPAR                                              (0x4000)              /* Parity select */
/* UCA2CTLW0[UCPEN] Bits */
//#define UCPEN_OFS                                          (15)                  /* UCPEN Offset */
//#define UCPEN                                              (0x8000)              /* Parity enable */
/* UCA2CTLW0_SPI[UCSWRST] Bits */
//#define UCSWRST_OFS                                        ( 0)                  /* UCSWRST Offset */
//#define UCSWRST                                            (0x0001)              /* Software reset enable */
/* UCA2CTLW0_SPI[UCSTEM] Bits */
//#define UCSTEM_OFS                                         ( 1)                  /* UCSTEM Offset */
//#define UCSTEM                                             (0x0002)              /* STE mode select in master mode. */
/* UCA2CTLW0_SPI[UCSSEL] Bits */
//#define UCSSEL_OFS                                         ( 6)                  /* UCSSEL Offset */
//#define UCSSEL_M                                           (0x00c0)              /* eUSCI_A clock source select */
//#define UCSSEL0                                            (0x0040)              /* eUSCI_A clock source select */
//#define UCSSEL1                                            (0x0080)              /* eUSCI_A clock source select */
//#define UCSSEL_1                                           (0x0040)              /* ACLK */
//#define UCSSEL_2                                           (0x0080)              /* SMCLK */
//#define UCSSEL_0                                           (0x0000)              /* Reserved */
//#define UCSSEL__ACLK                                       (0x0040)              /* ACLK */
//#define UCSSEL__SMCLK                                      (0x0080)              /* SMCLK */
/* UCA2CTLW0_SPI[UCSYNC] Bits */
//#define UCSYNC_OFS                                         ( 8)                  /* UCSYNC Offset */
//#define UCSYNC                                             (0x0100)              /* Synchronous mode enable */
/* UCA2CTLW0_SPI[UCMODE] Bits */
//#define UCMODE_OFS                                         ( 9)                  /* UCMODE Offset */
//#define UCMODE_M                                           (0x0600)              /* eUSCI mode */
//#define UCMODE0                                            (0x0200)              /* eUSCI mode */
//#define UCMODE1                                            (0x0400)              /* eUSCI mode */
//#define UCMODE_0                                           (0x0000)              /* 3-pin SPI */
//#define UCMODE_1                                           (0x0200)              /* 4-pin SPI with UCxSTE active high: Slave enabled when UCxSTE = 1 */
//#define UCMODE_2                                           (0x0400)              /* 4-pin SPI with UCxSTE active low: Slave enabled when UCxSTE = 0 */
/* UCA2CTLW0_SPI[UCMST] Bits */
//#define UCMST_OFS                                          (11)                  /* UCMST Offset */
//#define UCMST                                              (0x0800)              /* Master mode select */
/* UCA2CTLW0_SPI[UC7BIT] Bits */
//#define UC7BIT_OFS                                         (12)                  /* UC7BIT Offset */
//#define UC7BIT                                             (0x1000)              /* Character length */
/* UCA2CTLW0_SPI[UCMSB] Bits */
//#define UCMSB_OFS                                          (13)                  /* UCMSB Offset */
//#define UCMSB                                              (0x2000)              /* MSB first select */
/* UCA2CTLW0_SPI[UCCKPL] Bits */
//#define UCCKPL_OFS                                         (14)                  /* UCCKPL Offset */
//#define UCCKPL                                             (0x4000)              /* Clock polarity select */
/* UCA2CTLW0_SPI[UCCKPH] Bits */
//#define UCCKPH_OFS                                         (15)                  /* UCCKPH Offset */
//#define UCCKPH                                             (0x8000)              /* Clock phase select */
/* UCA2CTLW1[UCGLIT] Bits */
//#define UCGLIT_OFS                                         ( 0)                  /* UCGLIT Offset */
//#define UCGLIT_M                                           (0x0003)              /* Deglitch time */
//#define UCGLIT0                                            (0x0001)              /* Deglitch time */
//#define UCGLIT1                                            (0x0002)              /* Deglitch time */
//#define UCGLIT_0                                           (0x0000)              /* Approximately 2 ns (equivalent of 1 delay element) */
//#define UCGLIT_1                                           (0x0001)              /* Approximately 50 ns */
//#define UCGLIT_2                                           (0x0002)              /* Approximately 100 ns */
//#define UCGLIT_3                                           (0x0003)              /* Approximately 200 ns */
/* UCA2MCTLW[UCOS16] Bits */
//#define UCOS16_OFS                                         ( 0)                  /* UCOS16 Offset */
//#define UCOS16                                             (0x0001)              /* Oversampling mode enabled */
/* UCA2MCTLW[UCBRF] Bits */
//#define UCBRF_OFS                                          ( 4)                  /* UCBRF Offset */
//#define UCBRF_M                                            (0x00f0)              /* First modulation stage select */
/* UCA2MCTLW[UCBRS] Bits */
//#define UCBRS_OFS                                          ( 8)                  /* UCBRS Offset */
//#define UCBRS_M                                            (0xff00)              /* Second modulation stage select */
/* UCA2STATW[UCBUSY] Bits */
//#define UCBUSY_OFS                                         ( 0)                  /* UCBUSY Offset */
//#define UCBUSY                                             (0x0001)              /* eUSCI_A busy */
/* UCA2STATW[UCADDR_UCIDLE] Bits */
//#define UCADDR_UCIDLE_OFS                                  ( 1)                  /* UCADDR_UCIDLE Offset */
//#define UCADDR_UCIDLE                                      (0x0002)              /* Address received / Idle line detected */
/* UCA2STATW[UCRXERR] Bits */
//#define UCRXERR_OFS                                        ( 2)                  /* UCRXERR Offset */
//#define UCRXERR                                            (0x0004)              /* Receive error flag */
/* UCA2STATW[UCBRK] Bits */
//#define UCBRK_OFS                                          ( 3)                  /* UCBRK Offset */
//#define UCBRK                                              (0x0008)              /* Break detect flag */
/* UCA2STATW[UCPE] Bits */
//#define UCPE_OFS                                           ( 4)                  /* UCPE Offset */
//#define UCPE                                               (0x0010)              /*  */
/* UCA2STATW[UCOE] Bits */
//#define UCOE_OFS                                           ( 5)                  /* UCOE Offset */
//#define UCOE                                               (0x0020)              /* Overrun error flag */
/* UCA2STATW[UCFE] Bits */
//#define UCFE_OFS                                           ( 6)                  /* UCFE Offset */
//#define UCFE                                               (0x0040)              /* Framing error flag */
/* UCA2STATW[UCLISTEN] Bits */
//#define UCLISTEN_OFS                                       ( 7)                  /* UCLISTEN Offset */
//#define UCLISTEN                                           (0x0080)              /* Listen enable */
/* UCA2STATW_SPI[UCBUSY] Bits */
//#define UCBUSY_OFS                                         ( 0)                  /* UCBUSY Offset */
//#define UCBUSY                                             (0x0001)              /* eUSCI_A busy */
/* UCA2STATW_SPI[UCOE] Bits */
//#define UCOE_OFS                                           ( 5)                  /* UCOE Offset */
//#define UCOE                                               (0x0020)              /* Overrun error flag */
/* UCA2STATW_SPI[UCFE] Bits */
//#define UCFE_OFS                                           ( 6)                  /* UCFE Offset */
//#define UCFE                                               (0x0040)              /* Framing error flag */
/* UCA2STATW_SPI[UCLISTEN] Bits */
//#define UCLISTEN_OFS                                       ( 7)                  /* UCLISTEN Offset */
//#define UCLISTEN                                           (0x0080)              /* Listen enable */
/* UCA2RXBUF[UCRXBUF] Bits */
//#define UCRXBUF_OFS                                        ( 0)                  /* UCRXBUF Offset */
//#define UCRXBUF_M                                          (0x00ff)              /* Receive data buffer */
/* UCA2RXBUF_SPI[UCRXBUF] Bits */
//#define UCRXBUF_OFS                                        ( 0)                  /* UCRXBUF Offset */
//#define UCRXBUF_M                                          (0x00ff)              /* Receive data buffer */
/* UCA2TXBUF[UCTXBUF] Bits */
//#define UCTXBUF_OFS                                        ( 0)                  /* UCTXBUF Offset */
//#define UCTXBUF_M                                          (0x00ff)              /* Transmit data buffer */
/* UCA2TXBUF_SPI[UCTXBUF] Bits */
//#define UCTXBUF_OFS                                        ( 0)                  /* UCTXBUF Offset */
//#define UCTXBUF_M                                          (0x00ff)              /* Transmit data buffer */
/* UCA2ABCTL[UCABDEN] Bits */
//#define UCABDEN_OFS                                        ( 0)                  /* UCABDEN Offset */
//#define UCABDEN                                            (0x0001)              /* Automatic baud-rate detect enable */
/* UCA2ABCTL[UCBTOE] Bits */
//#define UCBTOE_OFS                                         ( 2)                  /* UCBTOE Offset */
//#define UCBTOE                                             (0x0004)              /* Break time out error */
/* UCA2ABCTL[UCSTOE] Bits */
//#define UCSTOE_OFS                                         ( 3)                  /* UCSTOE Offset */
//#define UCSTOE                                             (0x0008)              /* Synch field time out error */
/* UCA2ABCTL[UCDELIM] Bits */
//#define UCDELIM_OFS                                        ( 4)                  /* UCDELIM Offset */
//#define UCDELIM_M                                          (0x0030)              /* Break/synch delimiter length */
//#define UCDELIM0                                           (0x0010)              /* Break/synch delimiter length */
//#define UCDELIM1                                           (0x0020)              /* Break/synch delimiter length */
//#define UCDELIM_0                                          (0x0000)              /* 1 bit time */
//#define UCDELIM_1                                          (0x0010)              /* 2 bit times */
//#define UCDELIM_2                                          (0x0020)              /* 3 bit times */
//#define UCDELIM_3                                          (0x0030)              /* 4 bit times */
/* UCA2IRCTL[UCIREN] Bits */
//#define UCIREN_OFS                                         ( 0)                  /* UCIREN Offset */
//#define UCIREN                                             (0x0001)              /* IrDA encoder/decoder enable */
/* UCA2IRCTL[UCIRTXCLK] Bits */
//#define UCIRTXCLK_OFS                                      ( 1)                  /* UCIRTXCLK Offset */
//#define UCIRTXCLK                                          (0x0002)              /* IrDA transmit pulse clock select */
/* UCA2IRCTL[UCIRTXPL] Bits */
//#define UCIRTXPL_OFS                                       ( 2)                  /* UCIRTXPL Offset */
//#define UCIRTXPL_M                                         (0x00fc)              /* Transmit pulse length */
/* UCA2IRCTL[UCIRRXFE] Bits */
//#define UCIRRXFE_OFS                                       ( 8)                  /* UCIRRXFE Offset */
//#define UCIRRXFE                                           (0x0100)              /* IrDA receive filter enabled */
/* UCA2IRCTL[UCIRRXPL] Bits */
//#define UCIRRXPL_OFS                                       ( 9)                  /* UCIRRXPL Offset */
//#define UCIRRXPL                                           (0x0200)              /* IrDA receive input UCAxRXD polarity */
/* UCA2IRCTL[UCIRRXFL] Bits */
//#define UCIRRXFL_OFS                                       (10)                  /* UCIRRXFL Offset */
//#define UCIRRXFL_M                                         (0x3c00)              /* Receive filter length */
/* UCA2IE[UCRXIE] Bits */
//#define UCRXIE_OFS                                         ( 0)                  /* UCRXIE Offset */
//#define UCRXIE                                             (0x0001)              /* Receive interrupt enable */
/* UCA2IE[UCTXIE] Bits */
//#define UCTXIE_OFS                                         ( 1)                  /* UCTXIE Offset */
//#define UCTXIE                                             (0x0002)              /* Transmit interrupt enable */
/* UCA2IE[UCSTTIE] Bits */
//#define UCSTTIE_OFS                                        ( 2)                  /* UCSTTIE Offset */
//#define UCSTTIE                                            (0x0004)              /* Start bit interrupt enable */
/* UCA2IE[UCTXCPTIE] Bits */
//#define UCTXCPTIE_OFS                                      ( 3)                  /* UCTXCPTIE Offset */
//#define UCTXCPTIE                                          (0x0008)              /* Transmit complete interrupt enable */
/* UCA2IE_SPI[UCRXIE] Bits */
//#define UCRXIE_OFS                                         ( 0)                  /* UCRXIE Offset */
//#define UCRXIE                                             (0x0001)              /* Receive interrupt enable */
/* UCA2IE_SPI[UCTXIE] Bits */
//#define UCTXIE_OFS                                         ( 1)                  /* UCTXIE Offset */
//#define UCTXIE                                             (0x0002)              /* Transmit interrupt enable */
/* UCA2IFG[UCRXIFG] Bits */
//#define UCRXIFG_OFS                                        ( 0)                  /* UCRXIFG Offset */
//#define UCRXIFG                                            (0x0001)              /* Receive interrupt flag */
/* UCA2IFG[UCTXIFG] Bits */
//#define UCTXIFG_OFS                                        ( 1)                  /* UCTXIFG Offset */
//#define UCTXIFG                                            (0x0002)              /* Transmit interrupt flag */
/* UCA2IFG[UCSTTIFG] Bits */
//#define UCSTTIFG_OFS                                       ( 2)                  /* UCSTTIFG Offset */
//#define UCSTTIFG                                           (0x0004)              /* Start bit interrupt flag */
/* UCA2IFG[UCTXCPTIFG] Bits */
//#define UCTXCPTIFG_OFS                                     ( 3)                  /* UCTXCPTIFG Offset */
//#define UCTXCPTIFG                                         (0x0008)              /* Transmit ready interrupt enable */
/* UCA2IFG_SPI[UCRXIFG] Bits */
//#define UCRXIFG_OFS                                        ( 0)                  /* UCRXIFG Offset */
//#define UCRXIFG                                            (0x0001)              /* Receive interrupt flag */
/* UCA2IFG_SPI[UCTXIFG] Bits */
//#define UCTXIFG_OFS                                        ( 1)                  /* UCTXIFG Offset */
//#define UCTXIFG                                            (0x0002)              /* Transmit interrupt flag */


//*****************************************************************************
// EUSCI_A3 Bits
//*****************************************************************************
/* UCA3CTLW0[UCSWRST] Bits */
//#define UCSWRST_OFS                                        ( 0)                  /* UCSWRST Offset */
//#define UCSWRST                                            (0x0001)              /* Software reset enable */
/* UCA3CTLW0[UCTXBRK] Bits */
//#define UCTXBRK_OFS                                        ( 1)                  /* UCTXBRK Offset */
//#define UCTXBRK                                            (0x0002)              /* Transmit break */
/* UCA3CTLW0[UCTXADDR] Bits */
//#define UCTXADDR_OFS                                       ( 2)                  /* UCTXADDR Offset */
//#define UCTXADDR                                           (0x0004)              /* Transmit address */
/* UCA3CTLW0[UCDORM] Bits */
//#define UCDORM_OFS                                         ( 3)                  /* UCDORM Offset */
//#define UCDORM                                             (0x0008)              /* Dormant */
/* UCA3CTLW0[UCBRKIE] Bits */
//#define UCBRKIE_OFS                                        ( 4)                  /* UCBRKIE Offset */
//#define UCBRKIE                                            (0x0010)              /* Receive break character interrupt enable */
/* UCA3CTLW0[UCRXEIE] Bits */
//#define UCRXEIE_OFS                                        ( 5)                  /* UCRXEIE Offset */
//#define UCRXEIE                                            (0x0020)              /* Receive erroneous-character interrupt enable */
/* UCA3CTLW0[UCSSEL] Bits */
//#define UCSSEL_OFS                                         ( 6)                  /* UCSSEL Offset */
//#define UCSSEL_M                                           (0x00c0)              /* eUSCI_A clock source select */
//#define UCSSEL0                                            (0x0040)              /* eUSCI_A clock source select */
//#define UCSSEL1                                            (0x0080)              /* eUSCI_A clock source select */
//#define UCSSEL_0                                           (0x0000)              /* UCLK */
//#define UCSSEL_1                                           (0x0040)              /* ACLK */
//#define UCSSEL_2                                           (0x0080)              /* SMCLK */
//#define UCSSEL__UCLK                                       (0x0000)              /* UCLK */
//#define UCSSEL__ACLK                                       (0x0040)              /* ACLK */
//#define UCSSEL__SMCLK                                      (0x0080)              /* SMCLK */
