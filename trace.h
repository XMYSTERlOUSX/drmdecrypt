/* drmdecrypt -- DRM decrypting tool for Samsung TVs
 *
 * Copyright (C) 2014 - Bernhard Froehlich <decke@bluelife.at>
 * All rights reserved.
 *
 * This software may be modified and distributed under the terms
 * of the GPL v2 license.  See the LICENSE file for details.
 */

enum {
   TRC_DEBUG = 0,
   TRC_INFO,   
   TRC_WARN,
   TRC_ERROR
};

static int tracelevel = TRC_INFO;

#define trace(L, M, ...) \
   if(L >= tracelevel) { \
      fprintf(stdout, "%s " M "\n", L == TRC_DEBUG ? "DEBUG" : L == TRC_INFO ? "INFO" : L == TRC_WARN ? "WARN" : "ERROR", ##__VA_ARGS__); \
   }

