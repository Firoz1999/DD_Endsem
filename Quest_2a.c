/////////////////////////////////////////////////  Firoz Mohammad (Ced17i017)  //////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <linux/module.h>
#include <linux/moduleparam.h>
#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/stat.h>
  
MODULE_LICENSE("GPL"); 
MODULE_AUTHOR("Firoz Mohammad"); 
MODULE_DESCRIPTION("A module that takes an integer parameter when it is loaded with insmod!!!"); 

static int var=0;

module_param(var,int,0);
MODULE_PARM_DESC(var, "An integer");

static int __init start(void) 
{ 
    printk(KERN_INFO "Loading module...\n"); 
    printk(KERN_ALERT "Passed argument var = %i\n", var); 
    return 0; 
}
  
static void __exit end(void) 
{ 
    printk(KERN_INFO "Goodbye Firoz!!\n"); 
} 
  
module_init(start); 
module_exit(end); 
