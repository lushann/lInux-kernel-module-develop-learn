#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("lushan");
MODULE_DESCRIPTION("A simple linux driver.");
MODULE_VERSION("1");

static char *name = "world";
module_param(name, charp, S_IRUGO);
MODULE_PARM_DESC(name, "The name will display in /var/log/kern.log");

static int __init mh_init(void) {
  printk(KERN_INFO "MH:Hello %s from the MH driver.\n", name);
  return 0;
}

static void __exit mh_exit(void) {
  printk(KERN_INFO "MH:Goodbye %s from the MH driver.\n", name);
}

module_init(mh_init);
module_exit(mh_exit);
