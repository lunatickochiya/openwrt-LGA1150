--- a/src/conff.h
+++ b/src/conff.h
@@ -32,7 +32,7 @@
 #include <stdio.h>
 #include <pthread.h>
 #include <sys/socket.h>
-#include <net/if.h>
+#include <linux/if.h>
 #include "ipvers.h"
 #include "list.h"
 
+++ b/src/dns.h
@@ -27,7 +27,7 @@
 #include <config.h>
 #include <arpa/inet.h>
 #include <sys/socket.h>
-#include <net/if.h>
+#include <linux/if.h>
 #include <sys/types.h>
 #include <inttypes.h>
 #include "rr_types.h"
--- a/src/netdev.c
+++ b/src/netdev.c
@@ -59,7 +59,7 @@
 #include "ipvers.h"
 #include <sys/stat.h>
 #include <sys/ioctl.h>
-#include <net/if.h>
+#include <linux/if.h>
 #include <netdb.h>
 #include <string.h>
 #include <unistd.h>
