{
lib,
stdenv
}:

stdenv.mkDerivation rec {
  name = "cppProg";

  src = ./.;

  installPhase = ''
    mkdir -p $out/bin
    cp ${name} $out/bin/${name}
  '';
}
