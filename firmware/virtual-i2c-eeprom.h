#ifndef VIRTUAL_I2C_EEPROM_H
#define	VIRTUAL_I2C_EEPROM_H

#ifdef	__cplusplus
extern "C" {
#endif

void veeprom_init(void);
void veeprom_interrupt(void);
void veeprom_service(void);

#ifdef	__cplusplus
}
#endif

#endif	/* VIRTUAL_I2C_EEPROM_H */
