/*
 * SEReferenceGlue.h
 *
 * /System/Library/CoreServices/System Events.app
 * osaglue 0.2.0
 *
 */

#import <Foundation/Foundation.h>


#import "Appscript/Appscript.h"
#import "SECommandGlue.h"
#import "SEReferenceRendererGlue.h"

#define SEApp ((SEReference *)[SEReference referenceWithAppData: nil aemReference: AEMApp])
#define SECon ((SEReference *)[SEReference referenceWithAppData: nil aemReference: AEMCon])
#define SEIts ((SEReference *)[SEReference referenceWithAppData: nil aemReference: AEMIts])


@interface SEReference : ASReference

/* Commands */

- (SEAbort_transactionCommand *)abort_transaction;
- (SEAbort_transactionCommand *)abort_transaction:(id)directParameter;
- (SEActivateCommand *)activate;
- (SEActivateCommand *)activate:(id)directParameter;
- (SEAttach_action_toCommand *)attach_action_to;
- (SEAttach_action_toCommand *)attach_action_to:(id)directParameter;
- (SEAttached_scriptsCommand *)attached_scripts;
- (SEAttached_scriptsCommand *)attached_scripts:(id)directParameter;
- (SEBegin_transactionCommand *)begin_transaction;
- (SEBegin_transactionCommand *)begin_transaction:(id)directParameter;
- (SECancelCommand *)cancel;
- (SECancelCommand *)cancel:(id)directParameter;
- (SEClickCommand *)click;
- (SEClickCommand *)click:(id)directParameter;
- (SECloseCommand *)close;
- (SECloseCommand *)close:(id)directParameter;
- (SEConfirmCommand *)confirm;
- (SEConfirmCommand *)confirm:(id)directParameter;
- (SEConnectCommand *)connect;
- (SEConnectCommand *)connect:(id)directParameter;
- (SECountCommand *)count;
- (SECountCommand *)count:(id)directParameter;
- (SEDecrementCommand *)decrement;
- (SEDecrementCommand *)decrement:(id)directParameter;
- (SEDeleteCommand *)delete;
- (SEDeleteCommand *)delete:(id)directParameter;
- (SEDisconnectCommand *)disconnect;
- (SEDisconnectCommand *)disconnect:(id)directParameter;
- (SEDo_folder_actionCommand *)do_folder_action;
- (SEDo_folder_actionCommand *)do_folder_action:(id)directParameter;
- (SEDo_scriptCommand *)do_script;
- (SEDo_scriptCommand *)do_script:(id)directParameter;
- (SEDuplicateCommand *)duplicate;
- (SEDuplicateCommand *)duplicate:(id)directParameter;
- (SEEdit_action_ofCommand *)edit_action_of;
- (SEEdit_action_ofCommand *)edit_action_of:(id)directParameter;
- (SEEnd_transactionCommand *)end_transaction;
- (SEEnd_transactionCommand *)end_transaction:(id)directParameter;
- (SEExistsCommand *)exists;
- (SEExistsCommand *)exists:(id)directParameter;
- (SEGetCommand *)get;
- (SEGetCommand *)get:(id)directParameter;
- (SEIncrementCommand *)increment;
- (SEIncrementCommand *)increment:(id)directParameter;
- (SEKey_codeCommand *)key_code;
- (SEKey_codeCommand *)key_code:(id)directParameter;
- (SEKey_downCommand *)key_down;
- (SEKey_downCommand *)key_down:(id)directParameter;
- (SEKey_upCommand *)key_up;
- (SEKey_upCommand *)key_up:(id)directParameter;
- (SEKeystrokeCommand *)keystroke;
- (SEKeystrokeCommand *)keystroke:(id)directParameter;
- (SELaunchCommand *)launch;
- (SELaunchCommand *)launch:(id)directParameter;
- (SELog_outCommand *)log_out;
- (SELog_outCommand *)log_out:(id)directParameter;
- (SEMakeCommand *)make;
- (SEMakeCommand *)make:(id)directParameter;
- (SEMoveCommand *)move;
- (SEMoveCommand *)move:(id)directParameter;
- (SEOpenCommand *)open;
- (SEOpenCommand *)open:(id)directParameter;
- (SEOpenLocationCommand *)openLocation;
- (SEOpenLocationCommand *)openLocation:(id)directParameter;
- (SEPerformCommand *)perform;
- (SEPerformCommand *)perform:(id)directParameter;
- (SEPickCommand *)pick;
- (SEPickCommand *)pick:(id)directParameter;
- (SEPrintCommand *)print;
- (SEPrintCommand *)print:(id)directParameter;
- (SEPrint_Command *)print_;
- (SEPrint_Command *)print_:(id)directParameter;
- (SEQuitCommand *)quit;
- (SEQuitCommand *)quit:(id)directParameter;
- (SERemove_action_fromCommand *)remove_action_from;
- (SERemove_action_fromCommand *)remove_action_from:(id)directParameter;
- (SEReopenCommand *)reopen;
- (SEReopenCommand *)reopen:(id)directParameter;
- (SERestartCommand *)restart;
- (SERestartCommand *)restart:(id)directParameter;
- (SERunCommand *)run;
- (SERunCommand *)run:(id)directParameter;
- (SESaveCommand *)save;
- (SESaveCommand *)save:(id)directParameter;
- (SESelectCommand *)select;
- (SESelectCommand *)select:(id)directParameter;
- (SESetCommand *)set;
- (SESetCommand *)set:(id)directParameter;
- (SEShut_downCommand *)shut_down;
- (SEShut_downCommand *)shut_down:(id)directParameter;
- (SESleepCommand *)sleep;
- (SESleepCommand *)sleep:(id)directParameter;

/* Elements */

- (SEReference *)CD_and_DVD_preferences_object;
- (SEReference *)Classic_domain_objects;
- (SEReference *)QuickTime_data;
- (SEReference *)QuickTime_files;
- (SEReference *)UI_elements;
- (SEReference *)XML_attributes;
- (SEReference *)XML_data;
- (SEReference *)XML_elements;
- (SEReference *)XML_files;
- (SEReference *)actions;
- (SEReference *)aliases;
- (SEReference *)annotation;
- (SEReference *)appearance_preferences_object;
- (SEReference *)application_processes;
- (SEReference *)applications;
- (SEReference *)attachment;
- (SEReference *)attribute_runs;
- (SEReference *)attributes;
- (SEReference *)audio_data;
- (SEReference *)audio_files;
- (SEReference *)browsers;
- (SEReference *)busy_indicators;
- (SEReference *)buttons;
- (SEReference *)characters;
- (SEReference *)checkboxes;
- (SEReference *)color_wells;
- (SEReference *)colors;
- (SEReference *)columns;
- (SEReference *)combo_boxes;
- (SEReference *)configurations;
- (SEReference *)desk_accessory_processes;
- (SEReference *)desktops;
- (SEReference *)disk_items;
- (SEReference *)disks;
- (SEReference *)dock_preferences_object;
- (SEReference *)documents;
- (SEReference *)domains;
- (SEReference *)drawers;
- (SEReference *)expose_preferences_object;
- (SEReference *)file_packages;
- (SEReference *)files;
- (SEReference *)folder_actions;
- (SEReference *)folders;
- (SEReference *)groups;
- (SEReference *)grow_areas;
- (SEReference *)images;
- (SEReference *)incrementors;
- (SEReference *)insertion_preference;
- (SEReference *)interfaces;
- (SEReference *)items;
- (SEReference *)lists;
- (SEReference *)local_domain_objects;
- (SEReference *)locations;
- (SEReference *)login_items;
- (SEReference *)menu_bar_items;
- (SEReference *)menu_bars;
- (SEReference *)menu_buttons;
- (SEReference *)menu_items;
- (SEReference *)menus;
- (SEReference *)movie_data;
- (SEReference *)movie_files;
- (SEReference *)network_domain_objects;
- (SEReference *)network_preferences_object;
- (SEReference *)outlines;
- (SEReference *)paragraphs;
- (SEReference *)pop_up_buttons;
- (SEReference *)print_settings;
- (SEReference *)processes;
- (SEReference *)progress_indicators;
- (SEReference *)property_list_files;
- (SEReference *)property_list_items;
- (SEReference *)radio_buttons;
- (SEReference *)radio_groups;
- (SEReference *)relevance_indicators;
- (SEReference *)rows;
- (SEReference *)screen_corner;
- (SEReference *)scripts;
- (SEReference *)scroll_areas;
- (SEReference *)scroll_bars;
- (SEReference *)security_preferences_object;
- (SEReference *)services;
- (SEReference *)sheets;
- (SEReference *)shortcut;
- (SEReference *)sliders;
- (SEReference *)spaces_preferences_object;
- (SEReference *)spaces_shortcut;
- (SEReference *)splitter_groups;
- (SEReference *)splitters;
- (SEReference *)static_texts;
- (SEReference *)system_domain_objects;
- (SEReference *)tab_groups;
- (SEReference *)tables;
- (SEReference *)text;
- (SEReference *)text_areas;
- (SEReference *)text_fields;
- (SEReference *)tool_bars;
- (SEReference *)tracks;
- (SEReference *)user_domain_objects;
- (SEReference *)users;
- (SEReference *)value_indicators;
- (SEReference *)windows;
- (SEReference *)words;

/* Properties */

- (SEReference *)CD_and_DVD_preferences;
- (SEReference *)Classic;
- (SEReference *)Classic_domain;
- (SEReference *)Folder_Action_scripts_folder;
- (SEReference *)MAC_address;
- (SEReference *)POSIX_path;
- (SEReference *)UI_elements_enabled;
- (SEReference *)URL;
- (SEReference *)accepts_high_level_events;
- (SEReference *)accepts_remote_events;
- (SEReference *)account_name;
- (SEReference *)active;
- (SEReference *)activity;
- (SEReference *)all_windows_shortcut;
- (SEReference *)animate;
- (SEReference *)appearance;
- (SEReference *)appearance_preferences;
- (SEReference *)apple_menu_folder;
- (SEReference *)application_bindings;
- (SEReference *)application_file;
- (SEReference *)application_support_folder;
- (SEReference *)application_windows_shortcut;
- (SEReference *)applications_folder;
- (SEReference *)architecture;
- (SEReference *)arrow_key_modifiers;
- (SEReference *)audio_channel_count;
- (SEReference *)audio_characteristic;
- (SEReference *)audio_sample_rate;
- (SEReference *)audio_sample_size;
- (SEReference *)auto_play;
- (SEReference *)auto_present;
- (SEReference *)auto_quit_when_done;
- (SEReference *)autohide;
- (SEReference *)automatic;
- (SEReference *)automatic_login;
- (SEReference *)background_only;
- (SEReference *)blank_CD;
- (SEReference *)blank_DVD;
- (SEReference *)bottom_left_screen_corner;
- (SEReference *)bottom_right_screen_corner;
- (SEReference *)bounds;
- (SEReference *)bundle_identifier;
- (SEReference *)busy_status;
- (SEReference *)capacity;
- (SEReference *)change_interval;
- (SEReference *)class_;
- (SEReference *)closeable;
- (SEReference *)collating;
- (SEReference *)color;
- (SEReference *)connected;
- (SEReference *)container;
- (SEReference *)contents;
- (SEReference *)control_panels_folder;
- (SEReference *)control_strip_modules_folder;
- (SEReference *)copies;
- (SEReference *)creation_date;
- (SEReference *)creation_time;
- (SEReference *)creator_type;
- (SEReference *)current_configuration;
- (SEReference *)current_desktop;
- (SEReference *)current_location;
- (SEReference *)current_user;
- (SEReference *)custom_application;
- (SEReference *)custom_script;
- (SEReference *)dashboard_shortcut;
- (SEReference *)data_format;
- (SEReference *)data_rate;
- (SEReference *)data_size;
- (SEReference *)default_application;
- (SEReference *)description;
- (SEReference *)desk_accessory_file;
- (SEReference *)desktop_folder;
- (SEReference *)desktop_pictures_folder;
- (SEReference *)dimensions;
- (SEReference *)display_name;
- (SEReference *)displayed_name;
- (SEReference *)dock_preferences;
- (SEReference *)dock_size;
- (SEReference *)document;
- (SEReference *)documents_folder;
- (SEReference *)double_click_minimizes;
- (SEReference *)downloads_folder;
- (SEReference *)duplex;
- (SEReference *)duration;
- (SEReference *)ejectable;
- (SEReference *)enabled;
- (SEReference *)ending_page;
- (SEReference *)entire_contents;
- (SEReference *)error_handling;
- (SEReference *)expose_preferences;
- (SEReference *)extensions_folder;
- (SEReference *)favorites_folder;
- (SEReference *)fax_number;
- (SEReference *)file;
- (SEReference *)file_name;
- (SEReference *)file_type;
- (SEReference *)floating;
- (SEReference *)focused;
- (SEReference *)folder_actions_enabled;
- (SEReference *)font;
- (SEReference *)font_smoothing_limit;
- (SEReference *)font_smoothing_style;
- (SEReference *)fonts_folder;
- (SEReference *)format;
- (SEReference *)free_space;
- (SEReference *)frontmost;
- (SEReference *)full_name;
- (SEReference *)full_text;
- (SEReference *)function_key;
- (SEReference *)function_key_modifiers;
- (SEReference *)has_scripting_terminology;
- (SEReference *)help_;
- (SEReference *)hidden;
- (SEReference *)high_quality;
- (SEReference *)highlight_color;
- (SEReference *)home_directory;
- (SEReference *)home_folder;
- (SEReference *)href;
- (SEReference *)id;
- (SEReference *)id_;
- (SEReference *)ignore_privileges;
- (SEReference *)index;
- (SEReference *)insertion_action;
- (SEReference *)interface;
- (SEReference *)key_modifiers;
- (SEReference *)kind;
- (SEReference *)launcher_items_folder;
- (SEReference *)library_folder;
- (SEReference *)local_domain;
- (SEReference *)local_volume;
- (SEReference *)location;
- (SEReference *)log_out_when_inactive;
- (SEReference *)log_out_when_inactive_interval;
- (SEReference *)looping;
- (SEReference *)magnification;
- (SEReference *)magnification_size;
- (SEReference *)maximum_value;
- (SEReference *)miniaturizable;
- (SEReference *)miniaturized;
- (SEReference *)minimize_effect;
- (SEReference *)minimum_value;
- (SEReference *)modal;
- (SEReference *)modification_date;
- (SEReference *)modification_time;
- (SEReference *)modified;
- (SEReference *)modifiers;
- (SEReference *)mouse_button;
- (SEReference *)mouse_button_modifiers;
- (SEReference *)movies_folder;
- (SEReference *)mtu;
- (SEReference *)music_CD;
- (SEReference *)music_folder;
- (SEReference *)name;
- (SEReference *)name_extension;
- (SEReference *)natural_dimensions;
- (SEReference *)network_domain;
- (SEReference *)network_preferences;
- (SEReference *)numbers_key_modifiers;
- (SEReference *)orientation;
- (SEReference *)package_folder;
- (SEReference *)pages_across;
- (SEReference *)pages_down;
- (SEReference *)partition_space_used;
- (SEReference *)path;
- (SEReference *)physical_size;
- (SEReference *)picture;
- (SEReference *)picture_CD;
- (SEReference *)picture_path;
- (SEReference *)picture_rotation;
- (SEReference *)pictures_folder;
- (SEReference *)position;
- (SEReference *)preferences_folder;
- (SEReference *)preferred_rate;
- (SEReference *)preferred_volume;
- (SEReference *)presentation_mode;
- (SEReference *)presentation_size;
- (SEReference *)preview_duration;
- (SEReference *)preview_time;
- (SEReference *)product_version;
- (SEReference *)properties;
- (SEReference *)public_folder;
- (SEReference *)quit_delay;
- (SEReference *)random_order;
- (SEReference *)recent_applications_limit;
- (SEReference *)recent_documents_limit;
- (SEReference *)recent_servers_limit;
- (SEReference *)requested_print_time;
- (SEReference *)require_password_to_unlock;
- (SEReference *)require_password_to_wake;
- (SEReference *)resizable;
- (SEReference *)role;
- (SEReference *)script_menu_enabled;
- (SEReference *)scripting_additions_folder;
- (SEReference *)scripts_folder;
- (SEReference *)scroll_arrow_placement;
- (SEReference *)scroll_bar_action;
- (SEReference *)secure_virtual_memory;
- (SEReference *)security_preferences;
- (SEReference *)selected;
- (SEReference *)server;
- (SEReference *)settable;
- (SEReference *)shared_documents_folder;
- (SEReference *)short_name;
- (SEReference *)short_version;
- (SEReference *)show_desktop_shortcut;
- (SEReference *)show_spaces_shortcut;
- (SEReference *)shutdown_folder;
- (SEReference *)sites_folder;
- (SEReference *)size;
- (SEReference *)smooth_scrolling;
- (SEReference *)spaces_columns;
- (SEReference *)spaces_enabled;
- (SEReference *)spaces_preferences;
- (SEReference *)spaces_rows;
- (SEReference *)speakable_items_folder;
- (SEReference *)speed;
- (SEReference *)start_time;
- (SEReference *)starting_page;
- (SEReference *)startup;
- (SEReference *)startup_disk;
- (SEReference *)startup_items_folder;
- (SEReference *)stationery;
- (SEReference *)stored_stream;
- (SEReference *)subrole;
- (SEReference *)system_domain;
- (SEReference *)system_folder;
- (SEReference *)target_printer;
- (SEReference *)temporary_items_folder;
- (SEReference *)time_scale;
- (SEReference *)title;
- (SEReference *)titled;
- (SEReference *)top_left_screen_corner;
- (SEReference *)top_right_screen_corner;
- (SEReference *)total_partition_size;
- (SEReference *)trash;
- (SEReference *)type;
- (SEReference *)type_class;
- (SEReference *)type_identifier;
- (SEReference *)unix_id;
- (SEReference *)user_domain;
- (SEReference *)utilities_folder;
- (SEReference *)value;
- (SEReference *)version;
- (SEReference *)video_DVD;
- (SEReference *)video_depth;
- (SEReference *)visible;
- (SEReference *)visual_characteristic;
- (SEReference *)volume;
- (SEReference *)workflows_folder;
- (SEReference *)zone;
- (SEReference *)zoomable;
- (SEReference *)zoomed;
- (SEReference *)first;
- (SEReference *)middle;
- (SEReference *)last;
- (SEReference *)any;
- (SEReference *)at:(long)index;
- (SEReference *)byIndex:(id)index;
- (SEReference *)byName:(NSString *)name;
- (SEReference *)byID:(id)id_;
- (SEReference *)previous:(ASConstant *)class_;
- (SEReference *)next:(ASConstant *)class_;
- (SEReference *)at:(long)fromIndex to:(long)toIndex;
- (SEReference *)byRange:(id)fromObject to:(id)toObject;
- (SEReference *)byTest:(SEReference *)testReference;
- (SEReference *)beginning;
- (SEReference *)end;
- (SEReference *)before;
- (SEReference *)after;
- (SEReference *)greaterThan:(id)object;
- (SEReference *)greaterOrEquals:(id)object;
- (SEReference *)equals:(id)object;
- (SEReference *)notEquals:(id)object;
- (SEReference *)lessThan:(id)object;
- (SEReference *)lessOrEquals:(id)object;
- (SEReference *)beginsWith:(id)object;
- (SEReference *)endsWith:(id)object;
- (SEReference *)contains:(id)object;
- (SEReference *)isIn:(id)object;
- (SEReference *)AND:(id)remainingOperands;
- (SEReference *)OR:(id)remainingOperands;
- (SEReference *)NOT;
@end


