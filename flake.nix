{
  description = "Example kickstart Node.js backend project.";

  inputs.nixpkgs.url = "github:NixOS/nixpkgs/nixos-unstable";

  outputs = inputs @ {flake-parts, ...}:
    flake-parts.lib.mkFlake {inherit inputs;} {
      systems = ["x86_64-linux" "aarch64-linux" "aarch64-darwin" "x86_64-darwin"];

      perSystem = {
        config,
        self',
        inputs',
        pkgs,
        system,
        ...
      }: let
        inherit (pkgs) tree-sitter;
        inherit (tree-sitter) buildGrammar;
        name = "u-lang";
        version = "0.1.0";
      in {
        devShells = {
          default = pkgs.mkShell {
            buildInputs = with pkgs; [tree-sitter];
            inputsFrom = [self'.packages.default];
          };
        };

        packages = {
          default = buildGrammar {
            language = name;
            inherit version;
            src = ./.;
          };
        };
      };
    };
}
