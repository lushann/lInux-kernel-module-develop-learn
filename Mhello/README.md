## 1. Hello 

### modinfo

```bash
➜  Mhello git:(master) modinfo mhello.ko 
filename:       /home/lushan/Develop/lushanM/Mhello/mhello.ko
version:        1
description:    A simple linux driver.
author:         lushan
license:        GPL
srcversion:     6FE870B41D11CBE69492459
depends:        
retpoline:      Y
name:           mhello
vermagic:       5.3.0-40-generic SMP mod_unload 
parm:           name:The name will display in /var/log/kern.log (charp)
```

## Install module

**without name** 

```bash
sudo insmod mhello.ko 
```

```bash
sudo tail -f /var/log/kern.log
```

```bash
Feb 24 20:15:19 ubuntu18 kernel: [24789.905947] MH:Hello world from the MH driver.
```

**with name** 

```bash
sudo insmod mhello.ko name=lushan
```


```bash
sudo tail -f /var/log/kern.log
```

```bash
Feb 24 20:28:01 ubuntu18 kernel: [25551.438077] MH:Hello lushan from the MH driver.
```


## Remove module

```bash
sudo rmmod mhello.ko
```

### log

```bash
sudo tail -f /var/log/kern.log
```

**without name** 
```bash
Feb 24 20:23:53 ubuntu18 kernel: [25303.509617] MH:Goodbye world from the MH driver.
```

**with name** 
```bash
Feb 24 20:30:00 ubuntu18 kernel: [25671.130788] MH:Goodbye lushan from the MH driver.
```


