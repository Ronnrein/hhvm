<?php
var_dump(locale_get_display_name(str_repeat("a", 300), null));
var_dump(locale_get_display_name(str_repeat("a", 512), null));
var_dump(locale_get_display_name(str_repeat("a", 600), null));