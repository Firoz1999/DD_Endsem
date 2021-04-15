# DD_Endsem  ( Ced17i017 Firoz Mohammad )

## __Question 2a__  
### (Passing integer parameter when module is loaded with "insmod" command)

Modules can take command line arguments, but not with the argc/argv you might be used to.

To allow arguments to be passed to your module, declare the variables that will take the values of the command line arguments as global and then use the module_param() macro, (defined in linux/moduleparam.h) to set the mechanism up. At runtime, insmod will fill the variables with any command line arguments that are given, like ./insmod mymodule.ko myvariable=5. The variable declarations and macros should be placed at the beginning of the module for clarity.

Inserting Quest_2a module

![Screenshot from 2021-04-15 13-00-05](https://user-images.githubusercontent.com/35663501/114831035-89847700-9dea-11eb-9398-012fefe98830.png)

Here , we have passed integer parameter var=786

Checking log file 

![Screenshot from 2021-04-15 13-14-37](https://user-images.githubusercontent.com/35663501/114832874-9dc97380-9dec-11eb-8486-4c0fcf32f583.png)

As we can see , var=786 has been passed to module successfully.


## __Question 2b__ 
### (Printing name in log file)

![Screenshot from 2021-04-15 13-20-57](https://user-images.githubusercontent.com/35663501/114833819-9b1b4e00-9ded-11eb-87f4-d34124e9ae97.png)
