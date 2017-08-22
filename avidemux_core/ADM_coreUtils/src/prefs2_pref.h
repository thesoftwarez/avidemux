// automatically generated by pref_gen.py, do not edit!
#if 0
typedef struct
{
   const char *name;
   TYPE  type;
   const char *defaultValue;
   const char *min;
   const char *max;
   char *Value;
}optionDesc;
#endif 
static optionDesc myOptions[]={
{ VERSION_APIVERSION,"version.apiVersion"                             ,ADM_param_uint32_t	,"1",	0,	999},
{ FEATURES_SWAP_IF_A_GREATER_THAN_B,"features.swap_if_A_greater_than_B",ADM_param_bool    	,"1",	0,	1},
{ FEATURES_SAVEPREFSONEXIT,"features.saveprefsonexit"                 ,ADM_param_bool    	,"1",	0,	1},
{ FEATURES_IGNORESAVEDMARKERS,"features.ignoresavedmarkers"           ,ADM_param_bool    	,"0",	0,	1},
{ FEATURES_REUSE_2PASS_LOG,"features.reuse_2pass_log"                 ,ADM_param_bool    	,"0",	0,	1},
{ FEATURES_AUDIOBAR_USES_MASTER,"features.audiobar_uses_master"       ,ADM_param_bool    	,"0",	0,	1},
{ FEATURES_THREADING_LAVC,"features.threading_lavc"                   ,ADM_param_uint32_t	,"0",	0,	32},
{ FEATURES_CPU_CAPS,"features.cpu_caps"                               ,ADM_param_uint32_t	,"4294967295",	0,	4294967295},
{ FEATURES_MPEG_NO_LIMIT,"features.mpeg_no_limit"                     ,ADM_param_bool    	,"0",	0,	1},
{ FEATURES_ALTERNATE_MP3_TAG,"features.alternate_mp3_tag"             ,ADM_param_bool    	,"1",	0,	1},
{ FEATURES_DXVA2,"features.dxva2"                                     ,ADM_param_bool    	,"0",	0,	1},
{ FEATURES_VDPAU,"features.vdpau"                                     ,ADM_param_bool    	,"0",	0,	1},
{ FEATURES_XVBA,"features.xvba"                                       ,ADM_param_bool    	,"0",	0,	1},
{ FEATURES_LIBVA,"features.libva"                                     ,ADM_param_bool    	,"0",	0,	1},
{ FEATURES_ENABLE_OPENGL,"features.enable_opengl"                     ,ADM_param_bool    	,"0",	0,	1},
{ FEATURES_CAP_REFRESH_ENABLED,"features.cap_refresh_enabled"         ,ADM_param_bool    	,"0",	0,	1},
{ FEATURES_CAP_REFRESH_VALUE,"features.cap_refresh_value"             ,ADM_param_uint32_t	,"100",	10,	1000},
{ FEATURES_SDLDRIVER,"features.sdlDriver"                             ,ADM_param_stdstring  	,"",	0,	0},
{ FEATURES_USE_LAST_READ_DIR_AS_TARGET,"features.use_last_read_dir_as_target",ADM_param_bool    	,"0",	0,	1},
{ KEYBOARD_SHORTCUTS_USE_ALTERNATE_KBD_SHORTCUTS,"keyboard_shortcuts.use_alternate_kbd_shortcuts",ADM_param_bool    	,"0",	0,	1},
{ KEYBOARD_SHORTCUTS_SWAP_UP_DOWN_KEYS,"keyboard_shortcuts.swap_up_down_keys",ADM_param_bool    	,"0",	0,	1},
{ KEYBOARD_SHORTCUTS_ALT_MARK_A,"keyboard_shortcuts.alt_mark_a"       ,ADM_param_stdstring  	,"I",	0,	0},
{ KEYBOARD_SHORTCUTS_ALT_MARK_B,"keyboard_shortcuts.alt_mark_b"       ,ADM_param_stdstring  	,"O",	0,	0},
{ KEYBOARD_SHORTCUTS_ALT_RESET_MARKERS,"keyboard_shortcuts.alt_reset_markers",ADM_param_stdstring  	,"R",	0,	0},
{ KEYBOARD_SHORTCUTS_ALT_GOTO_MARK_A,"keyboard_shortcuts.alt_goto_mark_a",ADM_param_stdstring  	,"A",	0,	0},
{ KEYBOARD_SHORTCUTS_ALT_GOTO_MARK_B,"keyboard_shortcuts.alt_goto_mark_b",ADM_param_stdstring  	,"B",	0,	0},
{ KEYBOARD_SHORTCUTS_ALT_BEGIN,"keyboard_shortcuts.alt_begin"         ,ADM_param_stdstring  	,"S",	0,	0},
{ KEYBOARD_SHORTCUTS_ALT_END,"keyboard_shortcuts.alt_end"             ,ADM_param_stdstring  	,"E",	0,	0},
{ UPDATE_ENABLED,"update.enabled"                                     ,ADM_param_bool    	,"1",	0,	1},
{ UPDATE_LASTCHECK,"update.lastCheck"                                 ,ADM_param_uint32_t	,"0",	0,	5000},
{ LASTFILES_LASTDIR_READ,"lastfiles.lastdir_read"                     ,ADM_param_stdstring  	,"",	0,	0},
{ LASTFILES_LASTDIR_WRITE,"lastfiles.lastdir_write"                   ,ADM_param_stdstring  	,"",	0,	0},
{ LASTFILES_FILE1,"lastfiles.file1"                                   ,ADM_param_stdstring  	,"",	0,	0},
{ LASTFILES_FILE2,"lastfiles.file2"                                   ,ADM_param_stdstring  	,"",	0,	0},
{ LASTFILES_FILE3,"lastfiles.file3"                                   ,ADM_param_stdstring  	,"",	0,	0},
{ LASTFILES_FILE4,"lastfiles.file4"                                   ,ADM_param_stdstring  	,"",	0,	0},
{ LASTPROJECTS_LASTDIR_READ,"lastprojects.lastdir_read"               ,ADM_param_stdstring  	,"",	0,	0},
{ LASTPROJECTS_LASTDIR_WRITE,"lastprojects.lastdir_write"             ,ADM_param_stdstring  	,"",	0,	0},
{ LASTPROJECTS_FILE1,"lastprojects.file1"                             ,ADM_param_stdstring  	,"",	0,	0},
{ LASTPROJECTS_FILE2,"lastprojects.file2"                             ,ADM_param_stdstring  	,"",	0,	0},
{ LASTPROJECTS_FILE3,"lastprojects.file3"                             ,ADM_param_stdstring  	,"",	0,	0},
{ LASTPROJECTS_FILE4,"lastprojects.file4"                             ,ADM_param_stdstring  	,"",	0,	0},
{ MESSAGE_LEVEL,"message_level"                                       ,ADM_param_uint32_t	,"2",	0,	2},
{ AUDIO_DEVICE_AUDIODEVICE,"audio_device.audiodevice"                 ,ADM_param_stdstring  	,"ALSA",	0,	0},
{ AUDIO_DEVICE_ALSA_DEVICE,"audio_device.alsa_device"                 ,ADM_param_stdstring  	,"dmix",	0,	0},
{ VIDEODEVICE,"videodevice"                                           ,ADM_param_uint32_t	,"0",	0,	10},
{ PRIORITY_ENCODING,"priority.encoding"                               ,ADM_param_uint32_t	,"3",	0,	4},
{ PRIORITY_INDEXING,"priority.indexing"                               ,ADM_param_uint32_t	,"3",	0,	4},
{ PRIORITY_PLAYBACK,"priority.playback"                               ,ADM_param_uint32_t	,"0",	0,	4},
{ DEFAULT_POSTPROC_TYPE,"Default.postproc_type"                       ,ADM_param_uint32_t	,"3",	0,	7},
{ DEFAULT_POSTPROC_VALUE,"Default.postproc_value"                     ,ADM_param_uint32_t	,"3",	0,	5},
{ DEFAULT_DOWNMIXING,"Default.downmixing"                             ,ADM_param_uint32_t	,"2",	0,	2},
{ DEFAULT_LANGUAGE,"Default.language"                                 ,ADM_param_stdstring  	,"",	0,	0},
{ DEFAULT_WARN_FOR_FONTS,"Default.warn_for_fonts"                     ,ADM_param_bool    	,"1",	0,	1},
{ AVISYNTH_AVISYNTH_ALWAYS_ASK,"avisynth.avisynth_always_ask"         ,ADM_param_bool    	,"0",	0,	1},
{ AVISYNTH_AVISYNTH_DEFAULTPORT,"avisynth.avisynth_defaultport"       ,ADM_param_uint32_t	,"9999",	1024,	65535},
{ AVISYNTH_AVISYNTH_LOCALPORT,"avisynth.avisynth_localport"           ,ADM_param_uint32_t	,"0",	1024,	65535},
{ RESET_ENCODER_ON_VIDEO_LOAD,"reset_encoder_on_video_load"           ,ADM_param_bool    	,"0",	0,	1},
};

