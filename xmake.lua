set_project ("linux-kernel-module")
set_version ("1.1.1")


option ("linux-headers", {showmenu = true, description = "Set linux-headers path."})
option ("with-gtest", {showmenu = true, description = "Whether to enable unit test by GTest.", default = false})


set_configdir ("$(buildir)/config")
add_configfiles ("src/config.h.in")

add_includedirs ("$(buildir)/config/")
add_includedirs ("src/")


target ("linux-kernel-module")
    add_rules ("platform.linux.module")
    add_files ("src/*.c")
    set_values ("linux.driver.linux-headers", "$(linux-headers)")
    set_languages ("gnu99")
    add_cflags ("-O1")

    set_targetdir ("$(buildir)/$(plat)/$(arch)/$(mode)/bin/")


includes ("snippet")

if has_config ("with-gtest") then
    includes ("test")

end
