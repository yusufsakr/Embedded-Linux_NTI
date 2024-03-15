# Embedded Linux NTI - Task 6
NTI Embedded Linux Diploma Task 1 -> Create a Toolchain for AVR Controller using Crosstool-NG.

## Overview
In This Task we will download and configure the Crosstool_NG to create a customized Tool-Chain compatible with the target.


## Download Crosstool-NG

### Dowanload and Installthe Crosstool-NG Package from GitHub.
```
cd ~
git clone https://github.com/crosstool-ng/crosstool-ng.git
cd crosstool-ng/git 
git checkout 25f6dae8
./bootstrap
./configure --prefix=${PATH}
make make install
export PATH="{PWD}/bin:${PATH}
```

### Configure the tool-chain for AVR
1) rst, we must configure the crosstool-NG to build the toolchain for the AVR Controllers.
You can find a sample toolchain for AVR ...
```
ct-ng list-samples
```
2) Since, You found the AVR toolchain sample, We can select it.
```
ct-ng avr
```
3) Open the configuration menu to customize the toolchain
```
# Open the confiduraion menu of the tool
ct-ng menuconfig
```

### Build the Toolchain
```
ct-ng build
```

### Add the toolchain to the Global Environment Path
```
cd ~/x-tools/avr/bin
sudo echo PATH=$PATH:$PWD > ~/.bashrc
```


Best Wishes :)
