{ pkgs }: {
    deps = [
        pkgs.gdb-multitarget
        pkgs.haskellPackages.hello
        pkgs.cowsay
    ];
}