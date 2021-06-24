# Huawei Bootload Cracker

Yet another bruteforce huawei phone bootloader code cracker.

After trying other Python scripts and C programs to no avail, I finally gave up and wrote my own.

## Dependencies

- A C++ compiler with good C++20 support.
- `fastboot` installed and in your `PATH`.

## Building / Running

1. Boot your device to the bootloader and connect it to your computer.

2. Run these commands from the root of the repo:

```bash
mkdir build
cd build
cmake ..
cmake --build .
./src/huawei-boot-crack
```

3. Wair a *really* long time.

4. ???

5. Profit.
