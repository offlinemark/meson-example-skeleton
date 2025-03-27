An example project skeleton using the Meson build system.

Features:

- Build targets with explicit dependencies (i.e. exe and lib targets)
- ASAN (can be disabled via setup `-Db_sanitize=none`)
- Compiler warnings (-Wall, etc)
- `-Werror` (disabled via setup `-Dwerror=false`)
- Debug/Release modes (via e.g. `--buildtype=release`)
- Third party dependency example (Catch2, using wrap file)
- Unit test via Catch2
- Public and private header files in a lib (see MyLib)

Default: Debug + ASAN

```
meson setup build
meson compile -C build
```

Release build, no ASAN

```
meson setup build --buildtype=release -Db_sanitize=none
meson compile -C build
meson test -C build
```

Reset build:

```
cd build
meson setup --reconfigure --wipe  # wipe especially seems important
```

Run tests

```
meson test -C build
meson test -C build -v  # verbose
```
