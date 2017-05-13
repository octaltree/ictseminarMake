autoscan
mv configure.scan configure.acして編集
AM_INIT_AUTOMAKE([foreign])でGNU標準でないものにして, 必要ファイルを減らす.
Makefile.amを書く
aclocalで必要なマクロを用意
autoconf configure.acからconfigure
autoheader configure.acからconfig.h.in
AC_CONFIG_FILES([Makefile])がconfigure.acから抜けていたので足す
automake --add-missingでMakefile.amとconfigrure.acからMakefile.in
