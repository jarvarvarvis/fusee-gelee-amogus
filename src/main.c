#include "lib/printk.h"
#include "display/video_fb.h"

#include "hwinit/btn.h"
#include "hwinit/di.h"
#include "hwinit/hwinit.h"
#include "hwinit/timer.h"
#include "hwinit/util.h"

#include "amogus.h"

int main(void) 
{
    u32* lfb_base;

    config_hw();
    display_enable_backlight(0);
    display_init();

    // Set up the display, and register it as a printk provider.
    lfb_base = display_init_framebuffer();
    video_init(lfb_base);

    // Turn on the backlight after initializing the lfb
    // to avoid flickering.
    display_enable_backlight(1);

    // Print the amogus
    amogus_print();

    printk("\nPress the POWER button to turn off the console.\n");
    while (btn_read() != BTN_POWER) { sleep(10000); }

    // Tell the PMIC to turn everything off
    shutdown_using_pmic();

    return 0;
}

