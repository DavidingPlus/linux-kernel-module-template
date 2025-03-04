option ("linux-headers", {showmenu = true, description = "Set linux-headers path."})


target ("linux-kernel-module")
    add_rules ("platform.linux.module")
    add_files ("src/*.c")
    set_values ("linux.driver.linux-headers", "$(linux-headers)")

    add_cflags ("-O1")


includes ("snippet")
