{ pkgs }: {
    deps = [
        pkgs.haskellPackages.hello
        pkgs.cowsay
    ];
}