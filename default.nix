{
lib,
stdenv,
gnumake,
gcc
}:

stdenv.mkDerivation rec {
  name = "cppProg";

  src = ./.;

  nativeBuildInputs = [
    gnumake
    gcc
  ];

  installPhase = ''
    mkdir -p $out/bin
    cp ${name} $out/bin/${name}
  '';
}
