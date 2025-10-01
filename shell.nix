{
  mkShell,
  clang-tools,
}:
mkShell {
  nativeBuildInputs = [
    clang-tools
  ];
}
