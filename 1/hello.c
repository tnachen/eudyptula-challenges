#include <linux/module.h>/* Needed by all modules */
#include <linux/kernel.h>/* Needed for KERN_INFO */

int __init init_module(void)
{
  printk(KERN_DEBUG, "Hello world!\n");

  /*
   * A non 0 return means init_module failed; module can't be loaded.
   */
  return 0;
}

void __exit cleanup_module(void)
{
  printk(KERN_DEBUG, "Goodbye world!\n");
}

module_init(hello_init);
module_exit(hello_exit);
