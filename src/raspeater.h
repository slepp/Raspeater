/* The general interfacing method to the repeater structure. */

#ifndef RASPEATER_H
#define RASPEATER_H

/* These check the status of the transmitter PTT */
#define PTT_ON 1
#define PTT_OFF 0
extern int pttCheck();
extern int pttSet(int);

#endif /* RASPEATER_H */
