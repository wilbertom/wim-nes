# wim-nes

## Building

Build SDL:

```bash
$ cd vendor/SDL
$ cmake -S . -B build && cmake --build build && cmake --install build --prefix build
```

```bash
$ make
```

## Running

```bash
export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:vendor/SDL/build/lib/
```

```bash
./build/wim-nes
```
