/////////////////////////////////////////////////  Firoz Mohammad (Ced17i017)  //////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <linux/module.h>
#include <linux/moduleparam.h>
#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/stat.h>
  
MODULE_LICENSE("GPL"); 
MODULE_AUTHOR("Firoz Mohammad"); 
MODULE_DESCRIPTION("A module for printing my name!!!"); 

static int __init start(void) 
{ 
    printk(KERN_INFO "Loading module...\n"); 
    printk(KERN_INFO "Firoz Mohammad\n"); 
    return 0; 
}
  
static void __exit end(void) 
{ 
    printk(KERN_INFO "Goodbye Firoz!!\n"); 
} 
  
module_init(start); 
module_exit(end); 
