
/*
 * s2mpu08-private.h - Voltage regulator driver for the s2mpu08
 *
 *  Copyright (C) 2016 Samsung Electrnoics
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#ifndef __LINUX_MFD_S2MPU08_PRIV_H
#define __LINUX_MFD_S2MPU08_PRIV_H

#include <linux/i2c.h>
#define S2MPU08_REG_INVALID             (0xff)
#define S2MPU08_IRQSRC_PMIC		(1 << 0)
#define S2MPU08_IRQSRC_CODEC		(1 << 1)

/* PMIC Top-Level Registers */
#define	S2MPU08_PMIC_REG_PMICID		0x00
#define	S2MPU08_PMIC_REG_INTSRC		0x01
#define	S2MPU08_PMIC_REG_INTSRC_MASK	0x02

/* Slave addr = 0xCC */
/* PMIC Registers */
#define S2MPU08_PMIC_REG_INT1		0x00
#define S2MPU08_PMIC_REG_INT2		0x01
#define S2MPU08_PMIC_REG_INT3		0x02
#define S2MPU08_PMIC_REG_INT1M		0x03
#define S2MPU08_PMIC_REG_INT2M		0x04
#define S2MPU08_PMIC_REG_INT3M		0x05
#define S2MPU08_PMIC_REG_STATUS1	0x06
#define S2MPU08_PMIC_REG_STATUS2	0x07
#define S2MPU08_PMIC_REG_PWRONSRC	0x08
#define S2MPU08_PMIC_REG_OFFSRC		0x09

#define S2MPU08_PMIC_REG_BUCHG		0x0A
#define S2MPU08_PMIC_REG_RTCBUF		0x0B
#define S2MPU08_PMIC_REG_CTRL1		0x0C
#define S2MPU08_PMIC_REG_CTRL2		0x0D
#define S2MPU08_PMIC_REG_CTRL3		0x0E
#define S2MPU08_PMIC_REG_ETCOTP		0x0F
#define S2MPU08_PMIC_REG_UVLONO		0x10
#define S2MPU08_PMIC_REG_UVLOTRIM	0x11
#define S2MPU08_PMIC_REG_CFGPM		0x12
#define S2MPU08_PMIC_REG_TIMECTRL	0x13

#define S2MPU08_PMIC_REG_B1CTRL1	0x14
#define S2MPU08_PMIC_REG_B1CTRL2	0x15
#define S2MPU08_PMIC_REG_B2CTRL1	0x16
#define S2MPU08_PMIC_REG_B2CTRL2	0x17
#define S2MPU08_PMIC_REG_B3CTRL1	0x18
#define S2MPU08_PMIC_REG_B3CTRL2	0x19
#define S2MPU08_PMIC_REG_B4CTRL1	0x1A
#define S2MPU08_PMIC_REG_B4CTRL2	0x1B
#define S2MPU08_PMIC_REG_B5CTRL1	0x1C
#define S2MPU08_PMIC_REG_B5CTRL2	0x1D
#define S2MPU08_PMIC_REG_B6CTRL1	0x1E
#define S2MPU08_PMIC_REG_B6CTRL2	0x1F
#define S2MPU08_PMIC_REG_B7CTRL1	0x20
#define S2MPU08_PMIC_REG_B7CTRL2	0x21
#define S2MPU08_PMIC_REG_B7CTRL3	0x22
#define S2MPU08_PMIC_REG_B8CTRL1	0x23
#define S2MPU08_PMIC_REG_B8CTRL2	0x24
#define S2MPU08_PMIC_REG_B8CTRL3	0x25
#define S2MPU08_PMIC_REG_B9CTRL1	0x26
#define S2MPU08_PMIC_REG_B9CTRL2	0x27

#define S2MPU08_PMIC_REG_BUCKRAMP	0x28
#define S2MPU08_PMIC_REG_LDO8_DVS	0x29
#define S2MPU08_PMIC_REG_LDO9_DVS	0x2A
#define S2MPU08_PMIC_REG_LDO10_DVS	0x2B
#define S2MPU08_PMIC_REG_L1CTRL		0x2C
#define S2MPU08_PMIC_REG_L2CTRL1	0x2D
#define S2MPU08_PMIC_REG_L2CTRL2	0x2E
#define S2MPU08_PMIC_REG_L3CTRL		0x2F
#define S2MPU08_PMIC_REG_L4CTRL		0x30
#define S2MPU08_PMIC_REG_L5CTRL		0x31
#define S2MPU08_PMIC_REG_L6CTRL		0x32
#define S2MPU08_PMIC_REG_L7CTRL		0x33
#define S2MPU08_PMIC_REG_L8CTRL		0x34
#define S2MPU08_PMIC_REG_L9CTRL		0x35
#define S2MPU08_PMIC_REG_L10CTRL	0x36
#define S2MPU08_PMIC_REG_L11CTRL	0x37
#define S2MPU08_PMIC_REG_L12CTRL	0x38
#define S2MPU08_PMIC_REG_L13CTRL	0x39
#define S2MPU08_PMIC_REG_L14CTRL	0x3A
#define S2MPU08_PMIC_REG_L15CTRL	0x3B
#define S2MPU08_PMIC_REG_L16CTRL	0x3C
#define S2MPU08_PMIC_REG_L17CTRL	0x3D
#define S2MPU08_PMIC_REG_L18CTRL	0x3E
#define S2MPU08_PMIC_REG_L19CTRL	0x3F
#define S2MPU08_PMIC_REG_L20CTRL	0x40
#define S2MPU08_PMIC_REG_L21CTRL	0x41
#define S2MPU08_PMIC_REG_L22CTRL	0x42
#define S2MPU08_PMIC_REG_L23CTRL	0x43
#define S2MPU08_PMIC_REG_L24CTRL	0x44
#define S2MPU08_PMIC_REG_L25CTRL	0x45
#define S2MPU08_PMIC_REG_L26CTRL	0x46
#define S2MPU08_PMIC_REG_L27CTRL	0x47
#define S2MPU08_PMIC_REG_L28CTRL	0x48
#define S2MPU08_PMIC_REG_L29CTRL	0x49
#define S2MPU08_PMIC_REG_L30CTRL	0x4A
#define S2MPU08_PMIC_REG_L31CTRL	0x4B
#define S2MPU08_PMIC_REG_L32CTRL	0x4C
#define S2MPU08_PMIC_REG_L33CTRL	0x4D
#define S2MPU08_PMIC_REG_L34CTRL	0x4E
#define S2MPU08_PMIC_REG_L35CTRL	0x4F
#define S2MPU08_PMIC_REG_L36CTRL	0x50
#define S2MPU08_PMIC_REG_L37CTRL	0x51
#define S2MPU08_PMIC_REG_LDO_DSCH1	0x52
#define S2MPU08_PMIC_REG_LDO_DSCH2	0x53
#define S2MPU08_PMIC_REG_LDO_DSCH3	0x54
#define S2MPU08_PMIC_REG_LDO_DSCH4	0x55
#define S2MPU08_PMIC_REG_LDO_DSCH5	0x56
#define S2MPU08_PMIC_REG_LDO_DSCH6	0x57
#define S2MPU08_PMIC_REG_LDO_DSCH7	0x58
#define S2MPU08_PMIC_REG_LDO_DSCH8	0x59
#define S2MPU08_PMIC_REG_LDO_CTRL1	0x5A
#define S2MPU08_PMIC_REG_LDO_CTRL2	0x5B
#define S2MPU08_PMIC_REG_LDO_CTRL3	0x5C
#define S2MPU08_PMIC_REG_TCXO_CTRL	0x5D
#define S2MPU08_PMIC_REG_SEQ_CTRL	0x5E

#define S2MPU08_PMIC_REG_SEL_CTRL1	0x8A
#define S2MPU08_PMIC_REG_SEL_CTRL2	0x8B

/* S2MPU08 regulator ids */

enum S2MPU08_regulators {
	S2MPU08_LDO1,
	S2MPU08_LDO2,
	S2MPU08_LDO3,
	S2MPU08_LDO4,
	S2MPU08_LDO5,
	S2MPU08_LDO6,
	S2MPU08_LDO7,
	S2MPU08_LDO8,
	S2MPU08_LDO9,
	S2MPU08_LDO10,
	S2MPU08_LDO11,
	S2MPU08_LDO12,
	S2MPU08_LDO13,
	S2MPU08_LDO14,
/*	S2MPU08_LDO15,
	S2MPU08_LDO16,
	S2MPU08_LDO17,
	S2MPU08_LDO18,
	S2MPU08_LDO19,
	S2MPU08_LDO20,
	S2MPU08_LDO21,
	S2MPU08_LDO22,
	S2MPU08_LDO23,
	S2MPU08_LDO24,
	S2MPU08_LDO25,
	S2MPU08_LDO26,
	S2MPU08_LDO27,
	S2MPU08_LDO28,
	S2MPU08_LDO29,
	S2MPU08_LDO30,
	S2MPU08_LDO31,
	S2MPU08_LDO32,
*/	S2MPU08_LDO33,
	S2MPU08_LDO34,
	S2MPU08_LDO35,
	S2MPU08_LDO36,
	S2MPU08_LDO37,
	S2MPU08_BUCK1,
	S2MPU08_BUCK2,
	S2MPU08_BUCK3,
	S2MPU08_BUCK4,
	S2MPU08_BUCK5,
	S2MPU08_BUCK6,
	S2MPU08_BUCK7,
	S2MPU08_BUCK8,
//	S2MPU08_BUCK9,
	S2MPU08_REG_MAX,
};

#define S2MPU08_BUCK_MIN1	300000
#define S2MPU08_BUCK_MIN2	600000
#define S2MPU08_LDO_MIN1	700000
#define S2MPU08_LDO_MIN2	500000
#define S2MPU08_LDO_MIN3	1800000
#define S2MPU08_LDO_MIN4	300000
#define S2MPU08_BUCK_STEP1	6250
#define S2MPU08_BUCK_STEP2	12500
#define S2MPU08_LDO_STEP1	12500
#define S2MPU08_LDO_STEP2	25000
#define S2MPU08_LDO_VSEL_MASK	0x3F
#define S2MPU08_BUCK_VSEL_MASK	0xFF
#define S2MPU08_ENABLE_MASK	(0x03 << S2MPU08_ENABLE_SHIFT)
#define S2MPU08_SW_ENABLE_MASK	0x03
#define S2MPU08_RAMP_DELAY	12000

#define S2MPU08_ENABLE_TIME_LDO		128
#define S2MPU08_ENABLE_TIME_BUCK1	110
#define S2MPU08_ENABLE_TIME_BUCK2	110
#define S2MPU08_ENABLE_TIME_BUCK3	110
#define S2MPU08_ENABLE_TIME_BUCK4	150
#define S2MPU08_ENABLE_TIME_BUCK5	150
#define S2MPU08_ENABLE_TIME_BUCK6	150
#define S2MPU08_ENABLE_TIME_BUCK7	150
#define S2MPU08_ENABLE_TIME_BUCK8	150

#define S2MPU08_ENABLE_SHIFT	0x06
#define S2MPU08_LDO_N_VOLTAGES	(S2MPU08_LDO_VSEL_MASK + 1)
#define S2MPU08_BUCK_N_VOLTAGES (S2MPU08_BUCK_VSEL_MASK + 1)

#define S2MPU08_PMIC_EN_SHIFT	6
#define S2MPU08_REGULATOR_MAX (S2MPU08_REG_MAX)
#define SEC_PMIC_REV(iodev)    (iodev)->pmic_rev

/*
 * sec_opmode_data - regulator operation mode data
 * @id: regulator id
 * @mode: regulator operation mode
 */

enum s2mpu08_irq_source {
	PMIC_INT1 = 0,
	PMIC_INT2,
	PMIC_INT3,

	S2MPU08_IRQ_GROUP_NR,
};

#define S2MPU08_NUM_IRQ_PMIC_REGS	3

enum s2mpu08_irq {
	/* PMIC */
	S2MPU08_PMIC_IRQ_PWRONF_INT1,
	S2MPU08_PMIC_IRQ_PWRONR_INT1,
	S2MPU08_PMIC_IRQ_JIGONBF_INT1,
	S2MPU08_PMIC_IRQ_JIGONBR_INT1,
	S2MPU08_PMIC_IRQ_ACOKF_INT1,
	S2MPU08_PMIC_IRQ_ACOKR_INT1,
	S2MPU08_PMIC_IRQ_PWRON1S_INT1,
	S2MPU08_PMIC_IRQ_MREVENT_INT1,

	S2MPU08_PMIC_IRQ_RTC60S_INT2,
	S2MPU08_PMIC_IRQ_RTCA1_INT2,
	S2MPU08_PMIC_IRQ_RTCA0_INT2,
	S2MPU08_PMIC_IRQ_SMPL_INT2,
	S2MPU08_PMIC_IRQ_RTC1S_INT2,
	S2MPU08_PMIC_IRQ_WTSR_INT2,
	S2MPU08_PMIC_IRQ_SCLDO2_INT2,

	S2MPU08_PMIC_IRQ_120C_INT3,
	S2MPU08_PMIC_IRQ_140C_INT3,
	S2MPU08_PMIC_IRQ_TSD_INT3,
	S2MPU08_PMIC_IRQ_SCLDO18_INT3,
	S2MPU08_PMIC_IRQ_SCLDO19_INT3,
	S2MPU08_PMIC_IRQ_SCLDO35_INT3,
	S2MPU08_PMIC_IRQ_MRBF_INT3,
	S2MPU08_PMIC_IRQ_MRBR_INT3,

	S2MPU08_IRQ_NR,
};


enum sec_device_type {
	S2MPU08X,
};

struct s2mpu08_dev {
	struct device *dev;
	struct i2c_client *i2c;
	struct i2c_client *pmic;
	struct i2c_client *rtc;
	struct i2c_client *codec;
	struct i2c_client *codeca;
	struct i2c_client *close;
	struct mutex i2c_lock;
	struct apm_ops *ops;

	int type;
	int device_type;
	int irq;
	int irq_base;
	int irq_gpio;
	bool wakeup;
	struct mutex irqlock;
	int irq_masks_cur[S2MPU08_IRQ_GROUP_NR];
	int irq_masks_cache[S2MPU08_IRQ_GROUP_NR];

	/* pmic REV register */
	u8 pmic_rev;	/* pmic Rev */

	struct s2mpu08_platform_data *pdata;
};

enum s2mpu08_types {
	TYPE_S2MPU08,
};

extern int s2mpu08_irq_init(struct s2mpu08_dev *s2mpu08);
extern void s2mpu08_irq_exit(struct s2mpu08_dev *s2mpu08);

extern int s2mpu08_read_codec_reg(struct i2c_client *i2c, u8 reg, u8 *dest);
/* S2MPU08 shared i2c API function */
extern int s2mpu08_read_reg(struct i2c_client *i2c, u8 reg, u8 *dest);
extern int s2mpu08_bulk_read(struct i2c_client *i2c, u8 reg, int count,
				u8 *buf);
extern int s2mpu08_write_reg(struct i2c_client *i2c, u8 reg, u8 value);
extern int s2mpu08_bulk_write(struct i2c_client *i2c, u8 reg, int count,
				u8 *buf);
extern int s2mpu08_write_word(struct i2c_client *i2c, u8 reg, u16 value);
extern int s2mpu08_read_word(struct i2c_client *i2c, u8 reg);

extern int s2mpu08_update_reg(struct i2c_client *i2c, u8 reg, u8 val, u8 mask);

extern void set_codec_notifier_flag(void);

extern unsigned int lpcharge;
#endif /* __LINUX_MFD_S2MPU08_PRIV_H */