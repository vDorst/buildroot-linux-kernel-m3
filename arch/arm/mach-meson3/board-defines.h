/* Board Define File */


/* Standard defines */
#define NO 0
#define YES 1

#define EXTERNAL 1
#define INTERNAL 0

/* 
########################################################
# MyGica A11
########################################################
*/
#ifdef CONFIG_MACH_MESON3_STV_MBX_MC_A11
/* MyGica Board Define */
// #define CONFIG_SND_HAS_ANALOG
// #define CONFIG_SND_HAS_SPDIF
#define CONFIG_ETH_CLK 		EXTERNAL
#define CONFIG_FLASH_LAYOUT	NAND_4G

/* GPIO Defines */
// LEDS
#define GPIO_LED_STATUS GPIO_AO(10)
#define GPIO_LED_POWER  GPIO_AO(11)
// ETHERNET
#define GPIO_ETH_RESET  GPIO_D(7)
// BUTTONS
#define GPIO_KEY_POWER  GPIO_AO(3)
// POWERSUPPLIES
#define GPIO_PWR_USB_B  GPIO_C(5)
#define GPIO_PWR_VCCIO  GPIO_AO(2)
#define GPIO_PWR_VCCK   GPIO_AO(6)
#define GPIO_PWR_HDMI   GPIO_D(6)
#endif

/* 
########################################################
# G-BOX SLAV 
########################################################
*/

#ifdef CONFIG_MACH_MESON3_REFF16_GBOX_SLAV
/* Board Define: G-Box Slav */
#define CONFIG_SND_HAS_ANALOG
#define CONFIG_SND_HAS_SPDIF
#define CONFIG_ETH_CLK 		INTERNAL
#define CONFIG_FLASH_LAYOUT	NAND_4G

/* GPIO Defines */
// LEDS
    /* Don't have any to control. */
// ETHERNET
#define GPIO_ETH_RESET	GPIO_D(7)
// POWER
#define GPIO_PWR_VCC5V	GPIO_D(9)
// SOUND
#define GPIO_SND_MUTE	GPIO_X(29)

#endif
