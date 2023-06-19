# fusee-gelee-amogus-payload

Really dumb payload that printk's an amogus to the screen.

Reference: https://github.com/rajkosto/romdump

## Dependencies

You somehow need to set up [devkitPro](https://devkitpro.org/wiki/Getting_Started) on your device.

While I developed this prototype, I used pacman on Arch Linux.

Instructions on how to set it up on Arch and even other operating systems can be found [here](https://devkitpro.org/wiki/devkitPro_pacman).


After having set up devkitPro, you will also need to install devkitARM, the toolchain for ARM-based console homebrew development.

With pacman, you can install this toolchain using the following command (likely with root permissions):
```
pacman -S dkp-linux/devkitARM
```

## Building

Assuming you have set up devkitPro and devkitARM on Linux like I have, you can source the devkit-env.sh script.

It will set the environment variables `DEVKITPRO` (to the home of your devkitPro installation) and `DEVKITARM` 
(to the home of your devkitARM installation):

```
source /etc/profile.d/devkit-env.sh
make
```

The `build.sh` script will do the same.

