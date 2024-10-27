# cpp-learn

Let's see if i can learn some c++

## Useful debian commands

Locate where a package is installed
dpkg -L <package-name>

## Environment setup (c++ devocontainer)

sudo apt-get update
sudo apt-get install build-essential gdb

apt install libfmt-dev

## Mixed Useful Links

<https://github.com/fmtlib/fmt/issues/2157>
<https://github.com/fmtlib/fmt/issues/2157#issuecomment-1117930229>

<https://fmt.dev/11.0/get-started/#building-from-source>

## Istall GCC

<https://gcc.gnu.org/install/configure.html>
<https://askubuntu.com/questions/1513160/how-to-install-gcc-14-on-ubuntu-22-04-and-24-04>
<https://www.dedicatedcore.com/blog/install-gcc-compiler-ubuntu/>

## Procedure copied from above links

```shell
sudo apt install build-essential
sudo apt install libmpfr-dev libgmp3-dev libmpc-dev -y
wget <http://ftp.gnu.org/gnu/gcc/gcc-14.1.0/gcc-14.1.0.tar.gz>
tar -xf gcc-14.1.0.tar.gz
cd gcc-14.1.0
./configure -v --build=x86_64-linux-gnu --host=x86_64-linux-gnu --target=x86_64-linux-gnu \
    --prefix=/usr/local/gcc-14.1.0 --enable-checking=release \
    --enable-languages=c,c++ --disable-multilib --program-suffix=-14.1.0

make
sudo make install

# And if you would like to make it the default...

sudo update-alternatives --install /usr/bin/g++ g++ /usr/local/gcc-14.1.0/bin/g++14.1.0 14
sudo update-alternatives --install /usr/bin/gcc gcc /usr/local/gcc-14.1.0/bin/gcc14.1.0 14
```

## Actual procedure used

```shell
sudo apt install build-essential
sudo apt install libmpfr-dev libgmp3-dev libmpc-dev -y

wget <http://ftp.gnu.org/gnu/gcc/gcc-14.1.0/gcc-14.1.0.tar.gz>
tar -xf gcc-14.1.0.tar.gz
cd gcc-14.1.0

./configure -v 

make

sudo make install

--

sudo apt-get install software-properties-common # -> add-apt-repository

sudo apt-get upgrade libstdc++6
sudo add-apt-repository ppa:ubuntu-toolchain-r/test
sudo apt-get install --only-upgrade libstdc++6



# And if you would like to make it the default...

sudo update-alternatives --config gcc

# (was not necessary)
sudo update-alternatives --install /usr/bin/g++ g++ /usr/local/gcc-14.1.0/bin/g++14.1.0 14
sudo update-alternatives --install /usr/bin/gcc gcc /usr/local/gcc-14.1.0/bin/gcc14.1.0 14
```
