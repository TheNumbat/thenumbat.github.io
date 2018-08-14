
#define STRING2(...) #__VA_ARGS__##_
#define STRING(...) STRING2(__VA_ARGS__)
void make_meta_info() { PROF

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_enum;
		this_type_info.size = sizeof(int);
		this_type_info.name = "_LOGICAL_PROCESSOR_RELATIONSHIP"_;
		this_type_info.hash = (type_id)typeid(_LOGICAL_PROCESSOR_RELATIONSHIP).hash_code();
		this_type_info._enum.member_count = 6;
		this_type_info._enum.base_type = TYPEINFO(int) ? TYPEINFO(int)->hash : 0;
		this_type_info._enum.member_names[0] = "RelationProcessorCore"_;
		this_type_info._enum.member_values[0] = 0;
		this_type_info._enum.member_names[1] = "RelationNumaNode"_;
		this_type_info._enum.member_values[1] = 1;
		this_type_info._enum.member_names[2] = "RelationCache"_;
		this_type_info._enum.member_values[2] = 2;
		this_type_info._enum.member_names[3] = "RelationProcessorPackage"_;
		this_type_info._enum.member_values[3] = 3;
		this_type_info._enum.member_names[4] = "RelationGroup"_;
		this_type_info._enum.member_values[4] = 4;
		this_type_info._enum.member_names[5] = "RelationAll"_;
		this_type_info._enum.member_values[5] = 65535;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_enum;
		this_type_info.size = sizeof(int);
		this_type_info.name = "_LOGICAL_PROCESSOR_RELATIONSHIP"_;
		this_type_info.hash = (type_id)typeid(_LOGICAL_PROCESSOR_RELATIONSHIP).hash_code();
		this_type_info._enum.member_count = 6;
		this_type_info._enum.base_type = TYPEINFO(int) ? TYPEINFO(int)->hash : 0;
		this_type_info._enum.member_names[0] = "RelationProcessorCore"_;
		this_type_info._enum.member_values[0] = 0;
		this_type_info._enum.member_names[1] = "RelationNumaNode"_;
		this_type_info._enum.member_values[1] = 1;
		this_type_info._enum.member_names[2] = "RelationCache"_;
		this_type_info._enum.member_values[2] = 2;
		this_type_info._enum.member_names[3] = "RelationProcessorPackage"_;
		this_type_info._enum.member_values[3] = 3;
		this_type_info._enum.member_names[4] = "RelationGroup"_;
		this_type_info._enum.member_values[4] = 4;
		this_type_info._enum.member_names[5] = "RelationAll"_;
		this_type_info._enum.member_values[5] = 65535;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_enum;
		this_type_info.size = sizeof(int);
		this_type_info.name = "_PROCESSOR_CACHE_TYPE"_;
		this_type_info.hash = (type_id)typeid(_PROCESSOR_CACHE_TYPE).hash_code();
		this_type_info._enum.member_count = 4;
		this_type_info._enum.base_type = TYPEINFO(int) ? TYPEINFO(int)->hash : 0;
		this_type_info._enum.member_names[0] = "CacheUnified"_;
		this_type_info._enum.member_values[0] = 0;
		this_type_info._enum.member_names[1] = "CacheInstruction"_;
		this_type_info._enum.member_values[1] = 1;
		this_type_info._enum.member_names[2] = "CacheData"_;
		this_type_info._enum.member_values[2] = 2;
		this_type_info._enum.member_names[3] = "CacheTrace"_;
		this_type_info._enum.member_values[3] = 3;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_enum;
		this_type_info.size = sizeof(int);
		this_type_info.name = "_PROCESSOR_CACHE_TYPE"_;
		this_type_info.hash = (type_id)typeid(_PROCESSOR_CACHE_TYPE).hash_code();
		this_type_info._enum.member_count = 4;
		this_type_info._enum.base_type = TYPEINFO(int) ? TYPEINFO(int)->hash : 0;
		this_type_info._enum.member_names[0] = "CacheUnified"_;
		this_type_info._enum.member_values[0] = 0;
		this_type_info._enum.member_names[1] = "CacheInstruction"_;
		this_type_info._enum.member_values[1] = 1;
		this_type_info._enum.member_names[2] = "CacheData"_;
		this_type_info._enum.member_values[2] = 2;
		this_type_info._enum.member_names[3] = "CacheTrace"_;
		this_type_info._enum.member_values[3] = 3;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_enum;
		this_type_info.size = sizeof(int);
		this_type_info.name = "_GET_FILEEX_INFO_LEVELS"_;
		this_type_info.hash = (type_id)typeid(_GET_FILEEX_INFO_LEVELS).hash_code();
		this_type_info._enum.member_count = 2;
		this_type_info._enum.base_type = TYPEINFO(int) ? TYPEINFO(int)->hash : 0;
		this_type_info._enum.member_names[0] = "GetFileExInfoStandard"_;
		this_type_info._enum.member_values[0] = 0;
		this_type_info._enum.member_names[1] = "GetFileExMaxInfoLevel"_;
		this_type_info._enum.member_values[1] = 1;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_enum;
		this_type_info.size = sizeof(int);
		this_type_info.name = "_GET_FILEEX_INFO_LEVELS"_;
		this_type_info.hash = (type_id)typeid(_GET_FILEEX_INFO_LEVELS).hash_code();
		this_type_info._enum.member_count = 2;
		this_type_info._enum.base_type = TYPEINFO(int) ? TYPEINFO(int)->hash : 0;
		this_type_info._enum.member_names[0] = "GetFileExInfoStandard"_;
		this_type_info._enum.member_values[0] = 0;
		this_type_info._enum.member_names[1] = "GetFileExMaxInfoLevel"_;
		this_type_info._enum.member_values[1] = 1;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_enum;
		this_type_info.size = sizeof(u8);
		this_type_info.name = "platform_window_mode"_;
		this_type_info.hash = (type_id)typeid(platform_window_mode).hash_code();
		this_type_info._enum.member_count = 2;
		this_type_info._enum.base_type = TYPEINFO(u8) ? TYPEINFO(u8)->hash : 0;
		this_type_info._enum.member_names[0] = "windowed"_;
		this_type_info._enum.member_values[0] = 0;
		this_type_info._enum.member_names[1] = "fullscreen"_;
		this_type_info._enum.member_values[1] = 1;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_enum;
		this_type_info.size = sizeof(u8);
		this_type_info.name = "platform_file_open_op"_;
		this_type_info.hash = (type_id)typeid(platform_file_open_op).hash_code();
		this_type_info._enum.member_count = 2;
		this_type_info._enum.base_type = TYPEINFO(u8) ? TYPEINFO(u8)->hash : 0;
		this_type_info._enum.member_names[0] = "existing"_;
		this_type_info._enum.member_values[0] = 0;
		this_type_info._enum.member_names[1] = "cleared"_;
		this_type_info._enum.member_values[1] = 1;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_enum;
		this_type_info.size = sizeof(u8);
		this_type_info.name = "_platform_semaphore_state"_;
		this_type_info.hash = (type_id)typeid(_platform_semaphore_state).hash_code();
		this_type_info._enum.member_count = 3;
		this_type_info._enum.base_type = TYPEINFO(u8) ? TYPEINFO(u8)->hash : 0;
		this_type_info._enum.member_names[0] = "signaled"_;
		this_type_info._enum.member_values[0] = 0;
		this_type_info._enum.member_names[1] = "timed_out"_;
		this_type_info._enum.member_values[1] = 1;
		this_type_info._enum.member_names[2] = "failed"_;
		this_type_info._enum.member_values[2] = 2;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_enum;
		this_type_info.size = sizeof(u8);
		this_type_info.name = "_platform_thread_join_state"_;
		this_type_info.hash = (type_id)typeid(_platform_thread_join_state).hash_code();
		this_type_info._enum.member_count = 3;
		this_type_info._enum.base_type = TYPEINFO(u8) ? TYPEINFO(u8)->hash : 0;
		this_type_info._enum.member_names[0] = "joined"_;
		this_type_info._enum.member_values[0] = 0;
		this_type_info._enum.member_names[1] = "timed_out"_;
		this_type_info._enum.member_values[1] = 1;
		this_type_info._enum.member_names[2] = "failed"_;
		this_type_info._enum.member_values[2] = 2;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_enum;
		this_type_info.size = sizeof(u8);
		this_type_info.name = "platform_event_type"_;
		this_type_info.hash = (type_id)typeid(platform_event_type).hash_code();
		this_type_info._enum.member_count = 6;
		this_type_info._enum.base_type = TYPEINFO(u8) ? TYPEINFO(u8)->hash : 0;
		this_type_info._enum.member_names[0] = "none"_;
		this_type_info._enum.member_values[0] = 0;
		this_type_info._enum.member_names[1] = "window"_;
		this_type_info._enum.member_values[1] = 1;
		this_type_info._enum.member_names[2] = "key"_;
		this_type_info._enum.member_values[2] = 2;
		this_type_info._enum.member_names[3] = "mouse"_;
		this_type_info._enum.member_values[3] = 3;
		this_type_info._enum.member_names[4] = "rune"_;
		this_type_info._enum.member_values[4] = 4;
		this_type_info._enum.member_names[5] = "async"_;
		this_type_info._enum.member_values[5] = 5;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_enum;
		this_type_info.size = sizeof(u8);
		this_type_info.name = "platform_keycode"_;
		this_type_info.hash = (type_id)typeid(platform_keycode).hash_code();
		this_type_info._enum.member_count = 100;
		this_type_info._enum.base_type = TYPEINFO(u8) ? TYPEINFO(u8)->hash : 0;
		this_type_info._enum.member_names[0] = "none"_;
		this_type_info._enum.member_values[0] = 0;
		this_type_info._enum.member_names[1] = "_0"_;
		this_type_info._enum.member_values[1] = 1;
		this_type_info._enum.member_names[2] = "_1"_;
		this_type_info._enum.member_values[2] = 2;
		this_type_info._enum.member_names[3] = "_2"_;
		this_type_info._enum.member_values[3] = 3;
		this_type_info._enum.member_names[4] = "_3"_;
		this_type_info._enum.member_values[4] = 4;
		this_type_info._enum.member_names[5] = "_4"_;
		this_type_info._enum.member_values[5] = 5;
		this_type_info._enum.member_names[6] = "_5"_;
		this_type_info._enum.member_values[6] = 6;
		this_type_info._enum.member_names[7] = "_6"_;
		this_type_info._enum.member_values[7] = 7;
		this_type_info._enum.member_names[8] = "_7"_;
		this_type_info._enum.member_values[8] = 8;
		this_type_info._enum.member_names[9] = "_8"_;
		this_type_info._enum.member_values[9] = 9;
		this_type_info._enum.member_names[10] = "_9"_;
		this_type_info._enum.member_values[10] = 10;
		this_type_info._enum.member_names[11] = "a"_;
		this_type_info._enum.member_values[11] = 11;
		this_type_info._enum.member_names[12] = "b"_;
		this_type_info._enum.member_values[12] = 12;
		this_type_info._enum.member_names[13] = "c"_;
		this_type_info._enum.member_values[13] = 13;
		this_type_info._enum.member_names[14] = "d"_;
		this_type_info._enum.member_values[14] = 14;
		this_type_info._enum.member_names[15] = "e"_;
		this_type_info._enum.member_values[15] = 15;
		this_type_info._enum.member_names[16] = "f"_;
		this_type_info._enum.member_values[16] = 16;
		this_type_info._enum.member_names[17] = "g"_;
		this_type_info._enum.member_values[17] = 17;
		this_type_info._enum.member_names[18] = "h"_;
		this_type_info._enum.member_values[18] = 18;
		this_type_info._enum.member_names[19] = "i"_;
		this_type_info._enum.member_values[19] = 19;
		this_type_info._enum.member_names[20] = "j"_;
		this_type_info._enum.member_values[20] = 20;
		this_type_info._enum.member_names[21] = "k"_;
		this_type_info._enum.member_values[21] = 21;
		this_type_info._enum.member_names[22] = "l"_;
		this_type_info._enum.member_values[22] = 22;
		this_type_info._enum.member_names[23] = "m"_;
		this_type_info._enum.member_values[23] = 23;
		this_type_info._enum.member_names[24] = "n"_;
		this_type_info._enum.member_values[24] = 24;
		this_type_info._enum.member_names[25] = "o"_;
		this_type_info._enum.member_values[25] = 25;
		this_type_info._enum.member_names[26] = "p"_;
		this_type_info._enum.member_values[26] = 26;
		this_type_info._enum.member_names[27] = "q"_;
		this_type_info._enum.member_values[27] = 27;
		this_type_info._enum.member_names[28] = "r"_;
		this_type_info._enum.member_values[28] = 28;
		this_type_info._enum.member_names[29] = "s"_;
		this_type_info._enum.member_values[29] = 29;
		this_type_info._enum.member_names[30] = "t"_;
		this_type_info._enum.member_values[30] = 30;
		this_type_info._enum.member_names[31] = "u"_;
		this_type_info._enum.member_values[31] = 31;
		this_type_info._enum.member_names[32] = "v"_;
		this_type_info._enum.member_values[32] = 32;
		this_type_info._enum.member_names[33] = "w"_;
		this_type_info._enum.member_values[33] = 33;
		this_type_info._enum.member_names[34] = "x"_;
		this_type_info._enum.member_values[34] = 34;
		this_type_info._enum.member_names[35] = "y"_;
		this_type_info._enum.member_values[35] = 35;
		this_type_info._enum.member_names[36] = "z"_;
		this_type_info._enum.member_values[36] = 36;
		this_type_info._enum.member_names[37] = "tab"_;
		this_type_info._enum.member_values[37] = 37;
		this_type_info._enum.member_names[38] = "grave"_;
		this_type_info._enum.member_values[38] = 38;
		this_type_info._enum.member_names[39] = "comma"_;
		this_type_info._enum.member_values[39] = 39;
		this_type_info._enum.member_names[40] = "slash"_;
		this_type_info._enum.member_values[40] = 40;
		this_type_info._enum.member_names[41] = "space"_;
		this_type_info._enum.member_values[41] = 41;
		this_type_info._enum.member_names[42] = "equals"_;
		this_type_info._enum.member_values[42] = 42;
		this_type_info._enum.member_names[43] = "plus"_;
		this_type_info._enum.member_values[43] = 42;
		this_type_info._enum.member_names[44] = "enter"_;
		this_type_info._enum.member_values[44] = 43;
		this_type_info._enum.member_names[45] = "period"_;
		this_type_info._enum.member_values[45] = 44;
		this_type_info._enum.member_names[46] = "dash"_;
		this_type_info._enum.member_values[46] = 45;
		this_type_info._enum.member_names[47] = "minus"_;
		this_type_info._enum.member_values[47] = 45;
		this_type_info._enum.member_names[48] = "rbracket"_;
		this_type_info._enum.member_values[48] = 46;
		this_type_info._enum.member_names[49] = "lbracket"_;
		this_type_info._enum.member_values[49] = 47;
		this_type_info._enum.member_names[50] = "semicolon"_;
		this_type_info._enum.member_values[50] = 48;
		this_type_info._enum.member_names[51] = "backslash"_;
		this_type_info._enum.member_values[51] = 49;
		this_type_info._enum.member_names[52] = "np_0"_;
		this_type_info._enum.member_values[52] = 50;
		this_type_info._enum.member_names[53] = "np_1"_;
		this_type_info._enum.member_values[53] = 51;
		this_type_info._enum.member_names[54] = "np_2"_;
		this_type_info._enum.member_values[54] = 52;
		this_type_info._enum.member_names[55] = "np_3"_;
		this_type_info._enum.member_values[55] = 53;
		this_type_info._enum.member_names[56] = "np_4"_;
		this_type_info._enum.member_values[56] = 54;
		this_type_info._enum.member_names[57] = "np_5"_;
		this_type_info._enum.member_values[57] = 55;
		this_type_info._enum.member_names[58] = "np_6"_;
		this_type_info._enum.member_values[58] = 56;
		this_type_info._enum.member_names[59] = "np_7"_;
		this_type_info._enum.member_values[59] = 57;
		this_type_info._enum.member_names[60] = "np_8"_;
		this_type_info._enum.member_values[60] = 58;
		this_type_info._enum.member_names[61] = "np_9"_;
		this_type_info._enum.member_values[61] = 59;
		this_type_info._enum.member_names[62] = "np_add"_;
		this_type_info._enum.member_values[62] = 60;
		this_type_info._enum.member_names[63] = "np_period"_;
		this_type_info._enum.member_values[63] = 61;
		this_type_info._enum.member_names[64] = "np_divide"_;
		this_type_info._enum.member_values[64] = 62;
		this_type_info._enum.member_names[65] = "np_multiply"_;
		this_type_info._enum.member_values[65] = 63;
		this_type_info._enum.member_names[66] = "np_subtract"_;
		this_type_info._enum.member_values[66] = 64;
		this_type_info._enum.member_names[67] = "backspace"_;
		this_type_info._enum.member_values[67] = 65;
		this_type_info._enum.member_names[68] = "capslock"_;
		this_type_info._enum.member_values[68] = 66;
		this_type_info._enum.member_names[69] = "del"_;
		this_type_info._enum.member_values[69] = 67;
		this_type_info._enum.member_names[70] = "down"_;
		this_type_info._enum.member_values[70] = 68;
		this_type_info._enum.member_names[71] = "up"_;
		this_type_info._enum.member_values[71] = 69;
		this_type_info._enum.member_names[72] = "left"_;
		this_type_info._enum.member_values[72] = 70;
		this_type_info._enum.member_names[73] = "right"_;
		this_type_info._enum.member_values[73] = 71;
		this_type_info._enum.member_names[74] = "end"_;
		this_type_info._enum.member_values[74] = 72;
		this_type_info._enum.member_names[75] = "escape"_;
		this_type_info._enum.member_values[75] = 73;
		this_type_info._enum.member_names[76] = "f1"_;
		this_type_info._enum.member_values[76] = 74;
		this_type_info._enum.member_names[77] = "f2"_;
		this_type_info._enum.member_values[77] = 75;
		this_type_info._enum.member_names[78] = "f3"_;
		this_type_info._enum.member_values[78] = 76;
		this_type_info._enum.member_names[79] = "f4"_;
		this_type_info._enum.member_values[79] = 77;
		this_type_info._enum.member_names[80] = "f5"_;
		this_type_info._enum.member_values[80] = 78;
		this_type_info._enum.member_names[81] = "f6"_;
		this_type_info._enum.member_values[81] = 79;
		this_type_info._enum.member_names[82] = "f7"_;
		this_type_info._enum.member_values[82] = 80;
		this_type_info._enum.member_names[83] = "f8"_;
		this_type_info._enum.member_values[83] = 81;
		this_type_info._enum.member_names[84] = "f9"_;
		this_type_info._enum.member_values[84] = 82;
		this_type_info._enum.member_names[85] = "f10"_;
		this_type_info._enum.member_values[85] = 83;
		this_type_info._enum.member_names[86] = "f11"_;
		this_type_info._enum.member_values[86] = 84;
		this_type_info._enum.member_names[87] = "f12"_;
		this_type_info._enum.member_values[87] = 85;
		this_type_info._enum.member_names[88] = "home"_;
		this_type_info._enum.member_values[88] = 86;
		this_type_info._enum.member_names[89] = "insert"_;
		this_type_info._enum.member_values[89] = 87;
		this_type_info._enum.member_names[90] = "lalt"_;
		this_type_info._enum.member_values[90] = 88;
		this_type_info._enum.member_names[91] = "ralt"_;
		this_type_info._enum.member_values[91] = 89;
		this_type_info._enum.member_names[92] = "lctrl"_;
		this_type_info._enum.member_values[92] = 90;
		this_type_info._enum.member_names[93] = "rctrl"_;
		this_type_info._enum.member_values[93] = 91;
		this_type_info._enum.member_names[94] = "lshift"_;
		this_type_info._enum.member_values[94] = 92;
		this_type_info._enum.member_names[95] = "rshift"_;
		this_type_info._enum.member_values[95] = 93;
		this_type_info._enum.member_names[96] = "numlock"_;
		this_type_info._enum.member_values[96] = 94;
		this_type_info._enum.member_names[97] = "pgup"_;
		this_type_info._enum.member_values[97] = 95;
		this_type_info._enum.member_names[98] = "pgdown"_;
		this_type_info._enum.member_values[98] = 96;
		this_type_info._enum.member_names[99] = "scrolllock"_;
		this_type_info._enum.member_values[99] = 97;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_enum;
		this_type_info.size = sizeof(u16);
		this_type_info.name = "platform_keyflag"_;
		this_type_info.hash = (type_id)typeid(platform_keyflag).hash_code();
		this_type_info._enum.member_count = 14;
		this_type_info._enum.base_type = TYPEINFO(u16) ? TYPEINFO(u16)->hash : 0;
		this_type_info._enum.member_names[0] = "press"_;
		this_type_info._enum.member_values[0] = 1;
		this_type_info._enum.member_names[1] = "release"_;
		this_type_info._enum.member_values[1] = 2;
		this_type_info._enum.member_names[2] = "repeat"_;
		this_type_info._enum.member_values[2] = 4;
		this_type_info._enum.member_names[3] = "lshift"_;
		this_type_info._enum.member_values[3] = 8;
		this_type_info._enum.member_names[4] = "rshift"_;
		this_type_info._enum.member_values[4] = 16;
		this_type_info._enum.member_names[5] = "shift"_;
		this_type_info._enum.member_values[5] = 24;
		this_type_info._enum.member_names[6] = "lctrl"_;
		this_type_info._enum.member_values[6] = 32;
		this_type_info._enum.member_names[7] = "rctrl"_;
		this_type_info._enum.member_values[7] = 64;
		this_type_info._enum.member_names[8] = "ctrl"_;
		this_type_info._enum.member_values[8] = 96;
		this_type_info._enum.member_names[9] = "lalt"_;
		this_type_info._enum.member_values[9] = 128;
		this_type_info._enum.member_names[10] = "ralt"_;
		this_type_info._enum.member_values[10] = 256;
		this_type_info._enum.member_names[11] = "alt"_;
		this_type_info._enum.member_values[11] = 384;
		this_type_info._enum.member_names[12] = "numlock_on"_;
		this_type_info._enum.member_values[12] = 512;
		this_type_info._enum.member_names[13] = "capslock_on"_;
		this_type_info._enum.member_values[13] = 1024;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_enum;
		this_type_info.size = sizeof(u16);
		this_type_info.name = "platform_mouseflag"_;
		this_type_info.hash = (type_id)typeid(platform_mouseflag).hash_code();
		this_type_info._enum.member_count = 12;
		this_type_info._enum.base_type = TYPEINFO(u16) ? TYPEINFO(u16)->hash : 0;
		this_type_info._enum.member_names[0] = "press"_;
		this_type_info._enum.member_values[0] = 1;
		this_type_info._enum.member_names[1] = "release"_;
		this_type_info._enum.member_values[1] = 2;
		this_type_info._enum.member_names[2] = "wheel"_;
		this_type_info._enum.member_values[2] = 4;
		this_type_info._enum.member_names[3] = "dbl"_;
		this_type_info._enum.member_values[3] = 8;
		this_type_info._enum.member_names[4] = "button"_;
		this_type_info._enum.member_values[4] = 11;
		this_type_info._enum.member_names[5] = "lclick"_;
		this_type_info._enum.member_values[5] = 16;
		this_type_info._enum.member_names[6] = "rclick"_;
		this_type_info._enum.member_values[6] = 32;
		this_type_info._enum.member_names[7] = "mclick"_;
		this_type_info._enum.member_values[7] = 64;
		this_type_info._enum.member_names[8] = "x1click"_;
		this_type_info._enum.member_values[8] = 128;
		this_type_info._enum.member_names[9] = "x2click"_;
		this_type_info._enum.member_values[9] = 256;
		this_type_info._enum.member_names[10] = "click"_;
		this_type_info._enum.member_values[10] = 496;
		this_type_info._enum.member_names[11] = "move"_;
		this_type_info._enum.member_values[11] = 512;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_enum;
		this_type_info.size = sizeof(u8);
		this_type_info.name = "platform_cursor"_;
		this_type_info.hash = (type_id)typeid(platform_cursor).hash_code();
		this_type_info._enum.member_count = 7;
		this_type_info._enum.base_type = TYPEINFO(u8) ? TYPEINFO(u8)->hash : 0;
		this_type_info._enum.member_names[0] = "none"_;
		this_type_info._enum.member_values[0] = 0;
		this_type_info._enum.member_names[1] = "pointer"_;
		this_type_info._enum.member_values[1] = 1;
		this_type_info._enum.member_names[2] = "crosshair"_;
		this_type_info._enum.member_values[2] = 2;
		this_type_info._enum.member_names[3] = "hand"_;
		this_type_info._enum.member_values[3] = 3;
		this_type_info._enum.member_names[4] = "help"_;
		this_type_info._enum.member_values[4] = 4;
		this_type_info._enum.member_names[5] = "I"_;
		this_type_info._enum.member_values[5] = 5;
		this_type_info._enum.member_names[6] = "hourglass"_;
		this_type_info._enum.member_values[6] = 6;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_enum;
		this_type_info.size = sizeof(u8);
		this_type_info.name = "platform_windowop"_;
		this_type_info.hash = (type_id)typeid(platform_windowop).hash_code();
		this_type_info._enum.member_count = 12;
		this_type_info._enum.base_type = TYPEINFO(u8) ? TYPEINFO(u8)->hash : 0;
		this_type_info._enum.member_names[0] = "none"_;
		this_type_info._enum.member_values[0] = 0;
		this_type_info._enum.member_names[1] = "recreate"_;
		this_type_info._enum.member_values[1] = 1;
		this_type_info._enum.member_names[2] = "resized"_;
		this_type_info._enum.member_values[2] = 2;
		this_type_info._enum.member_names[3] = "moved"_;
		this_type_info._enum.member_values[3] = 3;
		this_type_info._enum.member_names[4] = "shown"_;
		this_type_info._enum.member_values[4] = 4;
		this_type_info._enum.member_names[5] = "hidden"_;
		this_type_info._enum.member_values[5] = 5;
		this_type_info._enum.member_names[6] = "minimized"_;
		this_type_info._enum.member_values[6] = 6;
		this_type_info._enum.member_names[7] = "maximized"_;
		this_type_info._enum.member_values[7] = 7;
		this_type_info._enum.member_names[8] = "restored"_;
		this_type_info._enum.member_values[8] = 8;
		this_type_info._enum.member_names[9] = "focused"_;
		this_type_info._enum.member_values[9] = 9;
		this_type_info._enum.member_names[10] = "unfocused"_;
		this_type_info._enum.member_values[10] = 10;
		this_type_info._enum.member_names[11] = "close"_;
		this_type_info._enum.member_values[11] = 11;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_enum;
		this_type_info.size = sizeof(u8);
		this_type_info.name = "platform_async_type"_;
		this_type_info.hash = (type_id)typeid(platform_async_type).hash_code();
		this_type_info._enum.member_count = 2;
		this_type_info._enum.base_type = TYPEINFO(u8) ? TYPEINFO(u8)->hash : 0;
		this_type_info._enum.member_names[0] = "none"_;
		this_type_info._enum.member_values[0] = 0;
		this_type_info._enum.member_names[1] = "user"_;
		this_type_info._enum.member_values[1] = 1;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_enum;
		this_type_info.size = sizeof(GLboolean);
		this_type_info.name = "gl_bool"_;
		this_type_info.hash = (type_id)typeid(gl_bool).hash_code();
		this_type_info._enum.member_count = 2;
		this_type_info._enum.base_type = TYPEINFO(GLboolean) ? TYPEINFO(GLboolean)->hash : 0;
		this_type_info._enum.member_names[0] = "_false"_;
		this_type_info._enum.member_values[0] = 0;
		this_type_info._enum.member_names[1] = "_true"_;
		this_type_info._enum.member_values[1] = 1;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_enum;
		this_type_info.size = sizeof(GLenum);
		this_type_info.name = "gl_info"_;
		this_type_info.hash = (type_id)typeid(gl_info).hash_code();
		this_type_info._enum.member_count = 5;
		this_type_info._enum.base_type = TYPEINFO(GLenum) ? TYPEINFO(GLenum)->hash : 0;
		this_type_info._enum.member_names[0] = "vendor"_;
		this_type_info._enum.member_values[0] = 7936;
		this_type_info._enum.member_names[1] = "renderer"_;
		this_type_info._enum.member_values[1] = 7937;
		this_type_info._enum.member_names[2] = "version"_;
		this_type_info._enum.member_values[2] = 7938;
		this_type_info._enum.member_names[3] = "extensions"_;
		this_type_info._enum.member_values[3] = 7939;
		this_type_info._enum.member_names[4] = "shading_language_version"_;
		this_type_info._enum.member_values[4] = 35724;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_enum;
		this_type_info.size = sizeof(GLenum);
		this_type_info.name = "gl_tex_target"_;
		this_type_info.hash = (type_id)typeid(gl_tex_target).hash_code();
		this_type_info._enum.member_count = 16;
		this_type_info._enum.base_type = TYPEINFO(GLenum) ? TYPEINFO(GLenum)->hash : 0;
		this_type_info._enum.member_names[0] = "_1D"_;
		this_type_info._enum.member_values[0] = 3552;
		this_type_info._enum.member_names[1] = "_2D"_;
		this_type_info._enum.member_values[1] = 3553;
		this_type_info._enum.member_names[2] = "_3D"_;
		this_type_info._enum.member_values[2] = 32879;
		this_type_info._enum.member_names[3] = "rectangle"_;
		this_type_info._enum.member_values[3] = 34037;
		this_type_info._enum.member_names[4] = "cube_map"_;
		this_type_info._enum.member_values[4] = 34067;
		this_type_info._enum.member_names[5] = "cube_map_positive_x"_;
		this_type_info._enum.member_values[5] = 34069;
		this_type_info._enum.member_names[6] = "cube_map_negative_x"_;
		this_type_info._enum.member_values[6] = 34070;
		this_type_info._enum.member_names[7] = "cube_map_positive_y"_;
		this_type_info._enum.member_values[7] = 34071;
		this_type_info._enum.member_names[8] = "cube_map_negative_y"_;
		this_type_info._enum.member_values[8] = 34072;
		this_type_info._enum.member_names[9] = "cube_map_positive_z"_;
		this_type_info._enum.member_values[9] = 34073;
		this_type_info._enum.member_names[10] = "cube_map_negative_z"_;
		this_type_info._enum.member_values[10] = 34074;
		this_type_info._enum.member_names[11] = "_1D_array"_;
		this_type_info._enum.member_values[11] = 35864;
		this_type_info._enum.member_names[12] = "_2D_array"_;
		this_type_info._enum.member_values[12] = 35866;
		this_type_info._enum.member_names[13] = "cube_map_array"_;
		this_type_info._enum.member_values[13] = 36873;
		this_type_info._enum.member_names[14] = "_2D_multisample"_;
		this_type_info._enum.member_values[14] = 37120;
		this_type_info._enum.member_names[15] = "_2D_multisample_array"_;
		this_type_info._enum.member_values[15] = 37122;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_enum;
		this_type_info.size = sizeof(GLenum);
		this_type_info.name = "gl_tex_param"_;
		this_type_info.hash = (type_id)typeid(gl_tex_param).hash_code();
		this_type_info._enum.member_count = 20;
		this_type_info._enum.base_type = TYPEINFO(GLenum) ? TYPEINFO(GLenum)->hash : 0;
		this_type_info._enum.member_names[0] = "border_color"_;
		this_type_info._enum.member_values[0] = 4100;
		this_type_info._enum.member_names[1] = "mag_filter"_;
		this_type_info._enum.member_values[1] = 10240;
		this_type_info._enum.member_names[2] = "min_filter"_;
		this_type_info._enum.member_values[2] = 10241;
		this_type_info._enum.member_names[3] = "wrap_s"_;
		this_type_info._enum.member_values[3] = 10242;
		this_type_info._enum.member_names[4] = "wrap_t"_;
		this_type_info._enum.member_values[4] = 10243;
		this_type_info._enum.member_names[5] = "wrap_r"_;
		this_type_info._enum.member_values[5] = 32882;
		this_type_info._enum.member_names[6] = "min_lod"_;
		this_type_info._enum.member_values[6] = 33082;
		this_type_info._enum.member_names[7] = "max_lod"_;
		this_type_info._enum.member_values[7] = 33083;
		this_type_info._enum.member_names[8] = "base_level"_;
		this_type_info._enum.member_values[8] = 33084;
		this_type_info._enum.member_names[9] = "max_level"_;
		this_type_info._enum.member_values[9] = 33085;
		this_type_info._enum.member_names[10] = "max_anisotropy"_;
		this_type_info._enum.member_values[10] = 34046;
		this_type_info._enum.member_names[11] = "lod_bias"_;
		this_type_info._enum.member_values[11] = 34049;
		this_type_info._enum.member_names[12] = "compare_mode"_;
		this_type_info._enum.member_values[12] = 34892;
		this_type_info._enum.member_names[13] = "compare_func"_;
		this_type_info._enum.member_values[13] = 34893;
		this_type_info._enum.member_names[14] = "swizzle_r"_;
		this_type_info._enum.member_values[14] = 36418;
		this_type_info._enum.member_names[15] = "swizzle_g"_;
		this_type_info._enum.member_values[15] = 36419;
		this_type_info._enum.member_names[16] = "swizzle_b"_;
		this_type_info._enum.member_values[16] = 36420;
		this_type_info._enum.member_names[17] = "swizzle_a"_;
		this_type_info._enum.member_values[17] = 36421;
		this_type_info._enum.member_names[18] = "swizzle_rgba"_;
		this_type_info._enum.member_values[18] = 36422;
		this_type_info._enum.member_names[19] = "depth_stencil_texture_mode"_;
		this_type_info._enum.member_values[19] = 37098;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_enum;
		this_type_info.size = sizeof(GLint);
		this_type_info.name = "gl_tex_format"_;
		this_type_info.hash = (type_id)typeid(gl_tex_format).hash_code();
		this_type_info._enum.member_count = 81;
		this_type_info._enum.base_type = TYPEINFO(GLint) ? TYPEINFO(GLint)->hash : 0;
		this_type_info._enum.member_names[0] = "depth_component"_;
		this_type_info._enum.member_values[0] = 6402;
		this_type_info._enum.member_names[1] = "red"_;
		this_type_info._enum.member_values[1] = 6403;
		this_type_info._enum.member_names[2] = "rgb"_;
		this_type_info._enum.member_values[2] = 6407;
		this_type_info._enum.member_names[3] = "rgba"_;
		this_type_info._enum.member_values[3] = 6408;
		this_type_info._enum.member_names[4] = "r3_g3_b2"_;
		this_type_info._enum.member_values[4] = 10768;
		this_type_info._enum.member_names[5] = "rgb4"_;
		this_type_info._enum.member_values[5] = 32847;
		this_type_info._enum.member_names[6] = "rgb5"_;
		this_type_info._enum.member_values[6] = 32848;
		this_type_info._enum.member_names[7] = "rgb8"_;
		this_type_info._enum.member_values[7] = 32849;
		this_type_info._enum.member_names[8] = "rgb10"_;
		this_type_info._enum.member_values[8] = 32850;
		this_type_info._enum.member_names[9] = "rgb12"_;
		this_type_info._enum.member_values[9] = 32851;
		this_type_info._enum.member_names[10] = "rgba2"_;
		this_type_info._enum.member_values[10] = 32853;
		this_type_info._enum.member_names[11] = "rgba4"_;
		this_type_info._enum.member_values[11] = 32854;
		this_type_info._enum.member_names[12] = "rgb5_a1"_;
		this_type_info._enum.member_values[12] = 32855;
		this_type_info._enum.member_names[13] = "rgba8"_;
		this_type_info._enum.member_values[13] = 32856;
		this_type_info._enum.member_names[14] = "rgb10_a2"_;
		this_type_info._enum.member_values[14] = 32857;
		this_type_info._enum.member_names[15] = "rgba12"_;
		this_type_info._enum.member_values[15] = 32858;
		this_type_info._enum.member_names[16] = "rgba16"_;
		this_type_info._enum.member_values[16] = 32859;
		this_type_info._enum.member_names[17] = "compressed_red"_;
		this_type_info._enum.member_values[17] = 33317;
		this_type_info._enum.member_names[18] = "compressed_rg"_;
		this_type_info._enum.member_values[18] = 33318;
		this_type_info._enum.member_names[19] = "rg"_;
		this_type_info._enum.member_values[19] = 33319;
		this_type_info._enum.member_names[20] = "r8"_;
		this_type_info._enum.member_values[20] = 33321;
		this_type_info._enum.member_names[21] = "r16"_;
		this_type_info._enum.member_values[21] = 33322;
		this_type_info._enum.member_names[22] = "rg8"_;
		this_type_info._enum.member_values[22] = 33323;
		this_type_info._enum.member_names[23] = "rg16"_;
		this_type_info._enum.member_values[23] = 33324;
		this_type_info._enum.member_names[24] = "r16f"_;
		this_type_info._enum.member_values[24] = 33325;
		this_type_info._enum.member_names[25] = "r32f"_;
		this_type_info._enum.member_values[25] = 33326;
		this_type_info._enum.member_names[26] = "rg16f"_;
		this_type_info._enum.member_values[26] = 33327;
		this_type_info._enum.member_names[27] = "rg32f"_;
		this_type_info._enum.member_values[27] = 33328;
		this_type_info._enum.member_names[28] = "r8i"_;
		this_type_info._enum.member_values[28] = 33329;
		this_type_info._enum.member_names[29] = "r8ui"_;
		this_type_info._enum.member_values[29] = 33330;
		this_type_info._enum.member_names[30] = "r16i"_;
		this_type_info._enum.member_values[30] = 33331;
		this_type_info._enum.member_names[31] = "r16ui"_;
		this_type_info._enum.member_values[31] = 33332;
		this_type_info._enum.member_names[32] = "r32i"_;
		this_type_info._enum.member_values[32] = 33333;
		this_type_info._enum.member_names[33] = "r32ui"_;
		this_type_info._enum.member_values[33] = 33334;
		this_type_info._enum.member_names[34] = "rg8i"_;
		this_type_info._enum.member_values[34] = 33335;
		this_type_info._enum.member_names[35] = "rg8ui"_;
		this_type_info._enum.member_values[35] = 33336;
		this_type_info._enum.member_names[36] = "rg16i"_;
		this_type_info._enum.member_values[36] = 33337;
		this_type_info._enum.member_names[37] = "rg16ui"_;
		this_type_info._enum.member_values[37] = 33338;
		this_type_info._enum.member_names[38] = "rg32i"_;
		this_type_info._enum.member_values[38] = 33339;
		this_type_info._enum.member_names[39] = "rg32ui"_;
		this_type_info._enum.member_values[39] = 33340;
		this_type_info._enum.member_names[40] = "compressed_rgb"_;
		this_type_info._enum.member_values[40] = 34029;
		this_type_info._enum.member_names[41] = "compressed_rgba"_;
		this_type_info._enum.member_values[41] = 34030;
		this_type_info._enum.member_names[42] = "depth_stencil"_;
		this_type_info._enum.member_values[42] = 34041;
		this_type_info._enum.member_names[43] = "rgba32f"_;
		this_type_info._enum.member_values[43] = 34836;
		this_type_info._enum.member_names[44] = "rgb32f"_;
		this_type_info._enum.member_values[44] = 34837;
		this_type_info._enum.member_names[45] = "rgba16f"_;
		this_type_info._enum.member_values[45] = 34842;
		this_type_info._enum.member_names[46] = "rgb16f"_;
		this_type_info._enum.member_values[46] = 34843;
		this_type_info._enum.member_names[47] = "r11f_g11f_b10f"_;
		this_type_info._enum.member_values[47] = 35898;
		this_type_info._enum.member_names[48] = "rgb9_e5"_;
		this_type_info._enum.member_values[48] = 35901;
		this_type_info._enum.member_names[49] = "srgb8"_;
		this_type_info._enum.member_values[49] = 35905;
		this_type_info._enum.member_names[50] = "srgb8_alpha8"_;
		this_type_info._enum.member_values[50] = 35907;
		this_type_info._enum.member_names[51] = "compressed_srgb"_;
		this_type_info._enum.member_values[51] = 35912;
		this_type_info._enum.member_names[52] = "compressed_srgb_alpha"_;
		this_type_info._enum.member_values[52] = 35913;
		this_type_info._enum.member_names[53] = "rgba32ui"_;
		this_type_info._enum.member_values[53] = 36208;
		this_type_info._enum.member_names[54] = "rgb32ui"_;
		this_type_info._enum.member_values[54] = 36209;
		this_type_info._enum.member_names[55] = "rgba16ui"_;
		this_type_info._enum.member_values[55] = 36214;
		this_type_info._enum.member_names[56] = "rgb16ui"_;
		this_type_info._enum.member_values[56] = 36215;
		this_type_info._enum.member_names[57] = "rgba8ui"_;
		this_type_info._enum.member_values[57] = 36220;
		this_type_info._enum.member_names[58] = "rgb8ui"_;
		this_type_info._enum.member_values[58] = 36221;
		this_type_info._enum.member_names[59] = "rgba32i"_;
		this_type_info._enum.member_values[59] = 36226;
		this_type_info._enum.member_names[60] = "rgb32i"_;
		this_type_info._enum.member_values[60] = 36227;
		this_type_info._enum.member_names[61] = "rgba16i"_;
		this_type_info._enum.member_values[61] = 36232;
		this_type_info._enum.member_names[62] = "rgb16i"_;
		this_type_info._enum.member_values[62] = 36233;
		this_type_info._enum.member_names[63] = "rgba8i"_;
		this_type_info._enum.member_values[63] = 36238;
		this_type_info._enum.member_names[64] = "rgb8i"_;
		this_type_info._enum.member_values[64] = 36239;
		this_type_info._enum.member_names[65] = "compressed_red_rgtc1"_;
		this_type_info._enum.member_values[65] = 36283;
		this_type_info._enum.member_names[66] = "compressed_signed_red_rgtc1"_;
		this_type_info._enum.member_values[66] = 36284;
		this_type_info._enum.member_names[67] = "compressed_rg_rgtc2"_;
		this_type_info._enum.member_values[67] = 36285;
		this_type_info._enum.member_names[68] = "compressed_signed_rg_rgtc2"_;
		this_type_info._enum.member_values[68] = 36286;
		this_type_info._enum.member_names[69] = "compressed_rgba_bptc_unorm"_;
		this_type_info._enum.member_values[69] = 36492;
		this_type_info._enum.member_names[70] = "compressed_srgb_alpha_bptc_unorm"_;
		this_type_info._enum.member_values[70] = 36493;
		this_type_info._enum.member_names[71] = "compressed_rgb_bptc_signed_float"_;
		this_type_info._enum.member_values[71] = 36494;
		this_type_info._enum.member_names[72] = "compressed_rgb_bptc_unsigned_float"_;
		this_type_info._enum.member_values[72] = 36495;
		this_type_info._enum.member_names[73] = "r8_snorm"_;
		this_type_info._enum.member_values[73] = 36756;
		this_type_info._enum.member_names[74] = "rg8_snorm"_;
		this_type_info._enum.member_values[74] = 36757;
		this_type_info._enum.member_names[75] = "rgb8_snorm"_;
		this_type_info._enum.member_values[75] = 36758;
		this_type_info._enum.member_names[76] = "rgba8_snorm"_;
		this_type_info._enum.member_values[76] = 36759;
		this_type_info._enum.member_names[77] = "r16_snorm"_;
		this_type_info._enum.member_values[77] = 36760;
		this_type_info._enum.member_names[78] = "rg16_snorm"_;
		this_type_info._enum.member_values[78] = 36761;
		this_type_info._enum.member_names[79] = "rgb16_snorm"_;
		this_type_info._enum.member_values[79] = 36762;
		this_type_info._enum.member_names[80] = "rgb10_a2ui"_;
		this_type_info._enum.member_values[80] = 36975;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_enum;
		this_type_info.size = sizeof(GLenum);
		this_type_info.name = "gl_pixel_data_format"_;
		this_type_info.hash = (type_id)typeid(gl_pixel_data_format).hash_code();
		this_type_info._enum.member_count = 15;
		this_type_info._enum.base_type = TYPEINFO(GLenum) ? TYPEINFO(GLenum)->hash : 0;
		this_type_info._enum.member_names[0] = "stencil_index"_;
		this_type_info._enum.member_values[0] = 6401;
		this_type_info._enum.member_names[1] = "depth_component"_;
		this_type_info._enum.member_values[1] = 6402;
		this_type_info._enum.member_names[2] = "red"_;
		this_type_info._enum.member_values[2] = 6403;
		this_type_info._enum.member_names[3] = "rgb"_;
		this_type_info._enum.member_values[3] = 6407;
		this_type_info._enum.member_names[4] = "rgba"_;
		this_type_info._enum.member_values[4] = 6408;
		this_type_info._enum.member_names[5] = "bgr"_;
		this_type_info._enum.member_values[5] = 32992;
		this_type_info._enum.member_names[6] = "bgra"_;
		this_type_info._enum.member_values[6] = 32993;
		this_type_info._enum.member_names[7] = "rg"_;
		this_type_info._enum.member_values[7] = 33319;
		this_type_info._enum.member_names[8] = "rg_integer"_;
		this_type_info._enum.member_values[8] = 33320;
		this_type_info._enum.member_names[9] = "depth_stencil"_;
		this_type_info._enum.member_values[9] = 34041;
		this_type_info._enum.member_names[10] = "red_integer"_;
		this_type_info._enum.member_values[10] = 36244;
		this_type_info._enum.member_names[11] = "rgb_integer"_;
		this_type_info._enum.member_values[11] = 36248;
		this_type_info._enum.member_names[12] = "rgba_integer"_;
		this_type_info._enum.member_values[12] = 36249;
		this_type_info._enum.member_names[13] = "bgr_integer"_;
		this_type_info._enum.member_values[13] = 36250;
		this_type_info._enum.member_names[14] = "bgra_integer"_;
		this_type_info._enum.member_values[14] = 36251;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_enum;
		this_type_info.size = sizeof(GLenum);
		this_type_info.name = "gl_pixel_data_type"_;
		this_type_info.hash = (type_id)typeid(gl_pixel_data_type).hash_code();
		this_type_info._enum.member_count = 19;
		this_type_info._enum.base_type = TYPEINFO(GLenum) ? TYPEINFO(GLenum)->hash : 0;
		this_type_info._enum.member_names[0] = "byte"_;
		this_type_info._enum.member_values[0] = 5120;
		this_type_info._enum.member_names[1] = "unsigned_byte"_;
		this_type_info._enum.member_values[1] = 5121;
		this_type_info._enum.member_names[2] = "_short"_;
		this_type_info._enum.member_values[2] = 5122;
		this_type_info._enum.member_names[3] = "unsigned_short"_;
		this_type_info._enum.member_values[3] = 5123;
		this_type_info._enum.member_names[4] = "_int"_;
		this_type_info._enum.member_values[4] = 5124;
		this_type_info._enum.member_names[5] = "unsigned_int"_;
		this_type_info._enum.member_values[5] = 5125;
		this_type_info._enum.member_names[6] = "_float"_;
		this_type_info._enum.member_values[6] = 5126;
		this_type_info._enum.member_names[7] = "unsigned_byte_3_3_2"_;
		this_type_info._enum.member_values[7] = 32818;
		this_type_info._enum.member_names[8] = "unsigned_short_4_4_4_4"_;
		this_type_info._enum.member_values[8] = 32819;
		this_type_info._enum.member_names[9] = "unsigned_short_5_5_5_1"_;
		this_type_info._enum.member_values[9] = 32820;
		this_type_info._enum.member_names[10] = "unsigned_int_8_8_8_8"_;
		this_type_info._enum.member_values[10] = 32821;
		this_type_info._enum.member_names[11] = "unsigned_int_10_10_10_2"_;
		this_type_info._enum.member_values[11] = 32822;
		this_type_info._enum.member_names[12] = "unsigned_byte_2_3_3_rev"_;
		this_type_info._enum.member_values[12] = 33634;
		this_type_info._enum.member_names[13] = "unsigned_short_5_6_5"_;
		this_type_info._enum.member_values[13] = 33635;
		this_type_info._enum.member_names[14] = "unsigned_short_5_6_5_rev"_;
		this_type_info._enum.member_values[14] = 33636;
		this_type_info._enum.member_names[15] = "unsigned_short_4_4_4_4_rev"_;
		this_type_info._enum.member_values[15] = 33637;
		this_type_info._enum.member_names[16] = "unsigned_short_1_5_5_5_rev"_;
		this_type_info._enum.member_values[16] = 33638;
		this_type_info._enum.member_names[17] = "unsigned_int_8_8_8_8_rev"_;
		this_type_info._enum.member_values[17] = 33639;
		this_type_info._enum.member_names[18] = "unsigned_int_2_10_10_10_rev"_;
		this_type_info._enum.member_values[18] = 33640;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_enum;
		this_type_info.size = sizeof(GLenum);
		this_type_info.name = "gl_blend_factor"_;
		this_type_info.hash = (type_id)typeid(gl_blend_factor).hash_code();
		this_type_info._enum.member_count = 19;
		this_type_info._enum.base_type = TYPEINFO(GLenum) ? TYPEINFO(GLenum)->hash : 0;
		this_type_info._enum.member_names[0] = "zero"_;
		this_type_info._enum.member_values[0] = 0;
		this_type_info._enum.member_names[1] = "one"_;
		this_type_info._enum.member_values[1] = 1;
		this_type_info._enum.member_names[2] = "src_color"_;
		this_type_info._enum.member_values[2] = 768;
		this_type_info._enum.member_names[3] = "one_minus_src_color"_;
		this_type_info._enum.member_values[3] = 769;
		this_type_info._enum.member_names[4] = "src_alpha"_;
		this_type_info._enum.member_values[4] = 770;
		this_type_info._enum.member_names[5] = "one_minus_src_alpha"_;
		this_type_info._enum.member_values[5] = 771;
		this_type_info._enum.member_names[6] = "dst_alpha"_;
		this_type_info._enum.member_values[6] = 772;
		this_type_info._enum.member_names[7] = "one_minus_dst_alpha"_;
		this_type_info._enum.member_values[7] = 773;
		this_type_info._enum.member_names[8] = "dst_color"_;
		this_type_info._enum.member_values[8] = 774;
		this_type_info._enum.member_names[9] = "one_minus_dst_color"_;
		this_type_info._enum.member_values[9] = 775;
		this_type_info._enum.member_names[10] = "src_alpha_saturate"_;
		this_type_info._enum.member_values[10] = 776;
		this_type_info._enum.member_names[11] = "constant_color"_;
		this_type_info._enum.member_values[11] = 32769;
		this_type_info._enum.member_names[12] = "one_minus_constant_color"_;
		this_type_info._enum.member_values[12] = 32770;
		this_type_info._enum.member_names[13] = "constant_alpha"_;
		this_type_info._enum.member_values[13] = 32771;
		this_type_info._enum.member_names[14] = "one_minus_constant_alpha"_;
		this_type_info._enum.member_values[14] = 32772;
		this_type_info._enum.member_names[15] = "src1_alpha"_;
		this_type_info._enum.member_values[15] = 34185;
		this_type_info._enum.member_names[16] = "src1_color"_;
		this_type_info._enum.member_values[16] = 35065;
		this_type_info._enum.member_names[17] = "one_minus_src1_color"_;
		this_type_info._enum.member_values[17] = 35066;
		this_type_info._enum.member_names[18] = "one_minus_src1_alpha"_;
		this_type_info._enum.member_values[18] = 35067;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_enum;
		this_type_info.size = sizeof(GLenum);
		this_type_info.name = "gl_capability"_;
		this_type_info.hash = (type_id)typeid(gl_capability).hash_code();
		this_type_info._enum.member_count = 27;
		this_type_info._enum.base_type = TYPEINFO(GLenum) ? TYPEINFO(GLenum)->hash : 0;
		this_type_info._enum.member_names[0] = "line_smooth"_;
		this_type_info._enum.member_values[0] = 2848;
		this_type_info._enum.member_names[1] = "polygon_smooth"_;
		this_type_info._enum.member_values[1] = 2881;
		this_type_info._enum.member_names[2] = "cull_face"_;
		this_type_info._enum.member_values[2] = 2884;
		this_type_info._enum.member_names[3] = "depth_test"_;
		this_type_info._enum.member_values[3] = 2929;
		this_type_info._enum.member_names[4] = "stencil_test"_;
		this_type_info._enum.member_values[4] = 2960;
		this_type_info._enum.member_names[5] = "dither"_;
		this_type_info._enum.member_values[5] = 3024;
		this_type_info._enum.member_names[6] = "blend"_;
		this_type_info._enum.member_values[6] = 3042;
		this_type_info._enum.member_names[7] = "color_logic_op"_;
		this_type_info._enum.member_values[7] = 3058;
		this_type_info._enum.member_names[8] = "scissor_test"_;
		this_type_info._enum.member_values[8] = 3089;
		this_type_info._enum.member_names[9] = "polygon_offset_point"_;
		this_type_info._enum.member_values[9] = 10753;
		this_type_info._enum.member_names[10] = "polygon_offset_line"_;
		this_type_info._enum.member_values[10] = 10754;
		this_type_info._enum.member_names[11] = "polygon_offset_fill"_;
		this_type_info._enum.member_values[11] = 32823;
		this_type_info._enum.member_names[12] = "multisample"_;
		this_type_info._enum.member_values[12] = 32925;
		this_type_info._enum.member_names[13] = "sample_alpha_to_coverage"_;
		this_type_info._enum.member_values[13] = 32926;
		this_type_info._enum.member_names[14] = "sample_alpha_to_one"_;
		this_type_info._enum.member_values[14] = 32927;
		this_type_info._enum.member_names[15] = "sample_coverage"_;
		this_type_info._enum.member_values[15] = 32928;
		this_type_info._enum.member_names[16] = "debug_output_synchronous"_;
		this_type_info._enum.member_values[16] = 33346;
		this_type_info._enum.member_names[17] = "program_point_size"_;
		this_type_info._enum.member_values[17] = 34370;
		this_type_info._enum.member_names[18] = "depth_clamp"_;
		this_type_info._enum.member_values[18] = 34383;
		this_type_info._enum.member_names[19] = "texture_cube_map_seamless"_;
		this_type_info._enum.member_values[19] = 34895;
		this_type_info._enum.member_names[20] = "sample_shading"_;
		this_type_info._enum.member_values[20] = 35894;
		this_type_info._enum.member_names[21] = "rasterizer_discard"_;
		this_type_info._enum.member_values[21] = 35977;
		this_type_info._enum.member_names[22] = "primitive_restart_fixed_index"_;
		this_type_info._enum.member_values[22] = 36201;
		this_type_info._enum.member_names[23] = "framebuffer_srgb"_;
		this_type_info._enum.member_values[23] = 36281;
		this_type_info._enum.member_names[24] = "sample_mask"_;
		this_type_info._enum.member_values[24] = 36433;
		this_type_info._enum.member_names[25] = "primitive_restart"_;
		this_type_info._enum.member_values[25] = 36765;
		this_type_info._enum.member_names[26] = "debug_output"_;
		this_type_info._enum.member_values[26] = 37600;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_enum;
		this_type_info.size = sizeof(GLbitfield);
		this_type_info.name = "gl_clear"_;
		this_type_info.hash = (type_id)typeid(gl_clear).hash_code();
		this_type_info._enum.member_count = 3;
		this_type_info._enum.base_type = TYPEINFO(GLbitfield) ? TYPEINFO(GLbitfield)->hash : 0;
		this_type_info._enum.member_names[0] = "depth_buffer_bit"_;
		this_type_info._enum.member_values[0] = 256;
		this_type_info._enum.member_names[1] = "stencil_buffer_bit"_;
		this_type_info._enum.member_values[1] = 1024;
		this_type_info._enum.member_names[2] = "color_buffer_bit"_;
		this_type_info._enum.member_values[2] = 16384;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_enum;
		this_type_info.size = sizeof(GLenum);
		this_type_info.name = "gl_draw_mode"_;
		this_type_info.hash = (type_id)typeid(gl_draw_mode).hash_code();
		this_type_info._enum.member_count = 12;
		this_type_info._enum.base_type = TYPEINFO(GLenum) ? TYPEINFO(GLenum)->hash : 0;
		this_type_info._enum.member_names[0] = "points"_;
		this_type_info._enum.member_values[0] = 0;
		this_type_info._enum.member_names[1] = "lines"_;
		this_type_info._enum.member_values[1] = 1;
		this_type_info._enum.member_names[2] = "line_loop"_;
		this_type_info._enum.member_values[2] = 2;
		this_type_info._enum.member_names[3] = "line_strip"_;
		this_type_info._enum.member_values[3] = 3;
		this_type_info._enum.member_names[4] = "triangles"_;
		this_type_info._enum.member_values[4] = 4;
		this_type_info._enum.member_names[5] = "triangle_strip"_;
		this_type_info._enum.member_values[5] = 5;
		this_type_info._enum.member_names[6] = "triangle_fan"_;
		this_type_info._enum.member_values[6] = 6;
		this_type_info._enum.member_names[7] = "lines_adjacency"_;
		this_type_info._enum.member_values[7] = 10;
		this_type_info._enum.member_names[8] = "line_strip_adjacency"_;
		this_type_info._enum.member_values[8] = 11;
		this_type_info._enum.member_names[9] = "triangles_adjacency"_;
		this_type_info._enum.member_values[9] = 12;
		this_type_info._enum.member_names[10] = "triangle_strip_adjacency"_;
		this_type_info._enum.member_values[10] = 13;
		this_type_info._enum.member_names[11] = "patches"_;
		this_type_info._enum.member_values[11] = 14;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_enum;
		this_type_info.size = sizeof(GLenum);
		this_type_info.name = "gl_index_type"_;
		this_type_info.hash = (type_id)typeid(gl_index_type).hash_code();
		this_type_info._enum.member_count = 3;
		this_type_info._enum.base_type = TYPEINFO(GLenum) ? TYPEINFO(GLenum)->hash : 0;
		this_type_info._enum.member_names[0] = "unsigned_byte"_;
		this_type_info._enum.member_values[0] = 5121;
		this_type_info._enum.member_names[1] = "unsigned_short"_;
		this_type_info._enum.member_values[1] = 5123;
		this_type_info._enum.member_names[2] = "unsigned_int"_;
		this_type_info._enum.member_values[2] = 5125;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_enum;
		this_type_info.size = sizeof(GLenum);
		this_type_info.name = "gl_debug_source"_;
		this_type_info.hash = (type_id)typeid(gl_debug_source).hash_code();
		this_type_info._enum.member_count = 7;
		this_type_info._enum.base_type = TYPEINFO(GLenum) ? TYPEINFO(GLenum)->hash : 0;
		this_type_info._enum.member_names[0] = "dont_care"_;
		this_type_info._enum.member_values[0] = 4352;
		this_type_info._enum.member_names[1] = "api"_;
		this_type_info._enum.member_values[1] = 33350;
		this_type_info._enum.member_names[2] = "window_system"_;
		this_type_info._enum.member_values[2] = 33351;
		this_type_info._enum.member_names[3] = "shader_compiler"_;
		this_type_info._enum.member_values[3] = 33352;
		this_type_info._enum.member_names[4] = "third_party"_;
		this_type_info._enum.member_values[4] = 33353;
		this_type_info._enum.member_names[5] = "application"_;
		this_type_info._enum.member_values[5] = 33354;
		this_type_info._enum.member_names[6] = "other"_;
		this_type_info._enum.member_values[6] = 33355;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_enum;
		this_type_info.size = sizeof(GLenum);
		this_type_info.name = "gl_debug_type"_;
		this_type_info.hash = (type_id)typeid(gl_debug_type).hash_code();
		this_type_info._enum.member_count = 10;
		this_type_info._enum.base_type = TYPEINFO(GLenum) ? TYPEINFO(GLenum)->hash : 0;
		this_type_info._enum.member_names[0] = "dont_care"_;
		this_type_info._enum.member_values[0] = 4352;
		this_type_info._enum.member_names[1] = "error"_;
		this_type_info._enum.member_values[1] = 33356;
		this_type_info._enum.member_names[2] = "deprecated_behavior"_;
		this_type_info._enum.member_values[2] = 33357;
		this_type_info._enum.member_names[3] = "undefined_behavior"_;
		this_type_info._enum.member_values[3] = 33358;
		this_type_info._enum.member_names[4] = "portability"_;
		this_type_info._enum.member_values[4] = 33359;
		this_type_info._enum.member_names[5] = "performance"_;
		this_type_info._enum.member_values[5] = 33360;
		this_type_info._enum.member_names[6] = "other"_;
		this_type_info._enum.member_values[6] = 33361;
		this_type_info._enum.member_names[7] = "marker"_;
		this_type_info._enum.member_values[7] = 33384;
		this_type_info._enum.member_names[8] = "push_group"_;
		this_type_info._enum.member_values[8] = 33385;
		this_type_info._enum.member_names[9] = "pop_group"_;
		this_type_info._enum.member_values[9] = 33386;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_enum;
		this_type_info.size = sizeof(GLenum);
		this_type_info.name = "gl_debug_severity"_;
		this_type_info.hash = (type_id)typeid(gl_debug_severity).hash_code();
		this_type_info._enum.member_count = 5;
		this_type_info._enum.base_type = TYPEINFO(GLenum) ? TYPEINFO(GLenum)->hash : 0;
		this_type_info._enum.member_names[0] = "dont_care"_;
		this_type_info._enum.member_values[0] = 4352;
		this_type_info._enum.member_names[1] = "notification"_;
		this_type_info._enum.member_values[1] = 33387;
		this_type_info._enum.member_names[2] = "high"_;
		this_type_info._enum.member_values[2] = 37190;
		this_type_info._enum.member_names[3] = "medium"_;
		this_type_info._enum.member_values[3] = 37191;
		this_type_info._enum.member_names[4] = "low"_;
		this_type_info._enum.member_values[4] = 37192;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_enum;
		this_type_info.size = sizeof(GLenum);
		this_type_info.name = "gl_shader_type"_;
		this_type_info.hash = (type_id)typeid(gl_shader_type).hash_code();
		this_type_info._enum.member_count = 6;
		this_type_info._enum.base_type = TYPEINFO(GLenum) ? TYPEINFO(GLenum)->hash : 0;
		this_type_info._enum.member_names[0] = "fragment"_;
		this_type_info._enum.member_values[0] = 35632;
		this_type_info._enum.member_names[1] = "vertex"_;
		this_type_info._enum.member_values[1] = 35633;
		this_type_info._enum.member_names[2] = "geometry"_;
		this_type_info._enum.member_values[2] = 36313;
		this_type_info._enum.member_names[3] = "tess_evaluation"_;
		this_type_info._enum.member_values[3] = 36487;
		this_type_info._enum.member_names[4] = "tess_control"_;
		this_type_info._enum.member_values[4] = 36488;
		this_type_info._enum.member_names[5] = "compute"_;
		this_type_info._enum.member_values[5] = 37305;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_enum;
		this_type_info.size = sizeof(GLenum);
		this_type_info.name = "gl_buf_target"_;
		this_type_info.hash = (type_id)typeid(gl_buf_target).hash_code();
		this_type_info._enum.member_count = 14;
		this_type_info._enum.base_type = TYPEINFO(GLenum) ? TYPEINFO(GLenum)->hash : 0;
		this_type_info._enum.member_names[0] = "array"_;
		this_type_info._enum.member_values[0] = 34962;
		this_type_info._enum.member_names[1] = "element_array"_;
		this_type_info._enum.member_values[1] = 34963;
		this_type_info._enum.member_names[2] = "pixel_pack"_;
		this_type_info._enum.member_values[2] = 35051;
		this_type_info._enum.member_names[3] = "pixel_unpack"_;
		this_type_info._enum.member_values[3] = 35052;
		this_type_info._enum.member_names[4] = "uniform"_;
		this_type_info._enum.member_values[4] = 35345;
		this_type_info._enum.member_names[5] = "texture"_;
		this_type_info._enum.member_values[5] = 35882;
		this_type_info._enum.member_names[6] = "transform_feedback"_;
		this_type_info._enum.member_values[6] = 35982;
		this_type_info._enum.member_names[7] = "copy_read"_;
		this_type_info._enum.member_values[7] = 36662;
		this_type_info._enum.member_names[8] = "copy_write"_;
		this_type_info._enum.member_values[8] = 36663;
		this_type_info._enum.member_names[9] = "draw_indirect"_;
		this_type_info._enum.member_values[9] = 36671;
		this_type_info._enum.member_names[10] = "shader_storage"_;
		this_type_info._enum.member_values[10] = 37074;
		this_type_info._enum.member_names[11] = "dispatch_indirect"_;
		this_type_info._enum.member_values[11] = 37102;
		this_type_info._enum.member_names[12] = "query"_;
		this_type_info._enum.member_values[12] = 37266;
		this_type_info._enum.member_names[13] = "atomic_counter"_;
		this_type_info._enum.member_values[13] = 37568;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_enum;
		this_type_info.size = sizeof(GLenum);
		this_type_info.name = "gl_buf_usage"_;
		this_type_info.hash = (type_id)typeid(gl_buf_usage).hash_code();
		this_type_info._enum.member_count = 9;
		this_type_info._enum.base_type = TYPEINFO(GLenum) ? TYPEINFO(GLenum)->hash : 0;
		this_type_info._enum.member_names[0] = "stream_draw"_;
		this_type_info._enum.member_values[0] = 35040;
		this_type_info._enum.member_names[1] = "stream_read"_;
		this_type_info._enum.member_values[1] = 35041;
		this_type_info._enum.member_names[2] = "stream_copy"_;
		this_type_info._enum.member_values[2] = 35042;
		this_type_info._enum.member_names[3] = "static_draw"_;
		this_type_info._enum.member_values[3] = 35044;
		this_type_info._enum.member_names[4] = "static_read"_;
		this_type_info._enum.member_values[4] = 35045;
		this_type_info._enum.member_names[5] = "static_copy"_;
		this_type_info._enum.member_values[5] = 35046;
		this_type_info._enum.member_names[6] = "dynamic_draw"_;
		this_type_info._enum.member_values[6] = 35048;
		this_type_info._enum.member_names[7] = "dynamic_read"_;
		this_type_info._enum.member_values[7] = 35049;
		this_type_info._enum.member_names[8] = "dynamic_copy"_;
		this_type_info._enum.member_values[8] = 35050;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_enum;
		this_type_info.size = sizeof(GLenum);
		this_type_info.name = "gl_vert_attrib_type"_;
		this_type_info.hash = (type_id)typeid(gl_vert_attrib_type).hash_code();
		this_type_info._enum.member_count = 13;
		this_type_info._enum.base_type = TYPEINFO(GLenum) ? TYPEINFO(GLenum)->hash : 0;
		this_type_info._enum.member_names[0] = "byte"_;
		this_type_info._enum.member_values[0] = 5120;
		this_type_info._enum.member_names[1] = "unsigned_byte"_;
		this_type_info._enum.member_values[1] = 5121;
		this_type_info._enum.member_names[2] = "_short"_;
		this_type_info._enum.member_values[2] = 5122;
		this_type_info._enum.member_names[3] = "unsigned_short"_;
		this_type_info._enum.member_values[3] = 5123;
		this_type_info._enum.member_names[4] = "_int"_;
		this_type_info._enum.member_values[4] = 5124;
		this_type_info._enum.member_names[5] = "unsigned_int"_;
		this_type_info._enum.member_values[5] = 5125;
		this_type_info._enum.member_names[6] = "_float"_;
		this_type_info._enum.member_values[6] = 5126;
		this_type_info._enum.member_names[7] = "_double"_;
		this_type_info._enum.member_values[7] = 5130;
		this_type_info._enum.member_names[8] = "half_float"_;
		this_type_info._enum.member_values[8] = 5131;
		this_type_info._enum.member_names[9] = "fixed"_;
		this_type_info._enum.member_values[9] = 5132;
		this_type_info._enum.member_names[10] = "unsigned_int_2_10_10_10_rev"_;
		this_type_info._enum.member_values[10] = 33640;
		this_type_info._enum.member_names[11] = "unsigned_int_10f_11f_11f_rev"_;
		this_type_info._enum.member_values[11] = 35899;
		this_type_info._enum.member_names[12] = "int_2_10_10_10_rev"_;
		this_type_info._enum.member_values[12] = 36255;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_enum;
		this_type_info.size = sizeof(GLint);
		this_type_info.name = "gl_tex_filter"_;
		this_type_info.hash = (type_id)typeid(gl_tex_filter).hash_code();
		this_type_info._enum.member_count = 6;
		this_type_info._enum.base_type = TYPEINFO(GLint) ? TYPEINFO(GLint)->hash : 0;
		this_type_info._enum.member_names[0] = "nearest"_;
		this_type_info._enum.member_values[0] = 9728;
		this_type_info._enum.member_names[1] = "linear"_;
		this_type_info._enum.member_values[1] = 9729;
		this_type_info._enum.member_names[2] = "nearest_mipmap_nearest"_;
		this_type_info._enum.member_values[2] = 9984;
		this_type_info._enum.member_names[3] = "linear_mipmap_nearest"_;
		this_type_info._enum.member_values[3] = 9985;
		this_type_info._enum.member_names[4] = "nearest_mipmap_linear"_;
		this_type_info._enum.member_values[4] = 9986;
		this_type_info._enum.member_names[5] = "linear_mipmap_linear"_;
		this_type_info._enum.member_values[5] = 9987;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_enum;
		this_type_info.size = sizeof(GLint);
		this_type_info.name = "gl_tex_swizzle"_;
		this_type_info.hash = (type_id)typeid(gl_tex_swizzle).hash_code();
		this_type_info._enum.member_count = 6;
		this_type_info._enum.base_type = TYPEINFO(GLint) ? TYPEINFO(GLint)->hash : 0;
		this_type_info._enum.member_names[0] = "zero"_;
		this_type_info._enum.member_values[0] = 0;
		this_type_info._enum.member_names[1] = "one"_;
		this_type_info._enum.member_values[1] = 1;
		this_type_info._enum.member_names[2] = "red"_;
		this_type_info._enum.member_values[2] = 6403;
		this_type_info._enum.member_names[3] = "green"_;
		this_type_info._enum.member_values[3] = 6404;
		this_type_info._enum.member_names[4] = "blue"_;
		this_type_info._enum.member_values[4] = 6405;
		this_type_info._enum.member_names[5] = "alpha"_;
		this_type_info._enum.member_values[5] = 6406;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_enum;
		this_type_info.size = sizeof(GLint);
		this_type_info.name = "gl_tex_wrap"_;
		this_type_info.hash = (type_id)typeid(gl_tex_wrap).hash_code();
		this_type_info._enum.member_count = 5;
		this_type_info._enum.base_type = TYPEINFO(GLint) ? TYPEINFO(GLint)->hash : 0;
		this_type_info._enum.member_names[0] = "repeat"_;
		this_type_info._enum.member_values[0] = 10497;
		this_type_info._enum.member_names[1] = "clamp_to_border"_;
		this_type_info._enum.member_values[1] = 33069;
		this_type_info._enum.member_names[2] = "clamp_to_edge"_;
		this_type_info._enum.member_values[2] = 33071;
		this_type_info._enum.member_names[3] = "mirrored_repeat"_;
		this_type_info._enum.member_values[3] = 33648;
		this_type_info._enum.member_names[4] = "mirror_clamp_to_edge"_;
		this_type_info._enum.member_values[4] = 34627;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_enum;
		this_type_info.size = sizeof(GLenum);
		this_type_info.name = "gl_shader_param"_;
		this_type_info.hash = (type_id)typeid(gl_shader_param).hash_code();
		this_type_info._enum.member_count = 5;
		this_type_info._enum.base_type = TYPEINFO(GLenum) ? TYPEINFO(GLenum)->hash : 0;
		this_type_info._enum.member_names[0] = "shader_type"_;
		this_type_info._enum.member_values[0] = 35663;
		this_type_info._enum.member_names[1] = "delete_status"_;
		this_type_info._enum.member_values[1] = 35712;
		this_type_info._enum.member_names[2] = "compile_status"_;
		this_type_info._enum.member_values[2] = 35713;
		this_type_info._enum.member_names[3] = "info_log_length"_;
		this_type_info._enum.member_values[3] = 35716;
		this_type_info._enum.member_names[4] = "shader_source_length"_;
		this_type_info._enum.member_values[4] = 35720;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_enum;
		this_type_info.size = sizeof(int);
		this_type_info.name = "wgl_context"_;
		this_type_info.hash = (type_id)typeid(wgl_context).hash_code();
		this_type_info._enum.member_count = 17;
		this_type_info._enum.base_type = TYPEINFO(int) ? TYPEINFO(int)->hash : 0;
		this_type_info._enum.member_names[0] = "core_profile_bit_arb"_;
		this_type_info._enum.member_values[0] = 1;
		this_type_info._enum.member_names[1] = "forward_compatible_bit_arb"_;
		this_type_info._enum.member_values[1] = 2;
		this_type_info._enum.member_names[2] = "draw_to_window_arb"_;
		this_type_info._enum.member_values[2] = 8193;
		this_type_info._enum.member_names[3] = "support_opengl_arb"_;
		this_type_info._enum.member_values[3] = 8208;
		this_type_info._enum.member_names[4] = "double_buffer_arb"_;
		this_type_info._enum.member_values[4] = 8209;
		this_type_info._enum.member_names[5] = "pixel_type_arb"_;
		this_type_info._enum.member_values[5] = 8211;
		this_type_info._enum.member_names[6] = "color_bits_arb"_;
		this_type_info._enum.member_values[6] = 8212;
		this_type_info._enum.member_names[7] = "alpha_bits_arb"_;
		this_type_info._enum.member_values[7] = 8219;
		this_type_info._enum.member_names[8] = "depth_bits_arb"_;
		this_type_info._enum.member_values[8] = 8226;
		this_type_info._enum.member_names[9] = "stencil_bits_arb"_;
		this_type_info._enum.member_values[9] = 8227;
		this_type_info._enum.member_names[10] = "type_rgba_arb"_;
		this_type_info._enum.member_values[10] = 8235;
		this_type_info._enum.member_names[11] = "sample_buffers_arb"_;
		this_type_info._enum.member_values[11] = 8257;
		this_type_info._enum.member_names[12] = "samples_arb"_;
		this_type_info._enum.member_values[12] = 8258;
		this_type_info._enum.member_names[13] = "major_version_arb"_;
		this_type_info._enum.member_values[13] = 8337;
		this_type_info._enum.member_names[14] = "minor_version_arb"_;
		this_type_info._enum.member_values[14] = 8338;
		this_type_info._enum.member_names[15] = "flags_arb"_;
		this_type_info._enum.member_values[15] = 8340;
		this_type_info._enum.member_names[16] = "profile_mask_arb"_;
		this_type_info._enum.member_values[16] = 37158;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_enum;
		this_type_info.size = sizeof(GLenum);
		this_type_info.name = "gl_get"_;
		this_type_info.hash = (type_id)typeid(gl_get).hash_code();
		this_type_info._enum.member_count = 239;
		this_type_info._enum.base_type = TYPEINFO(GLenum) ? TYPEINFO(GLenum)->hash : 0;
		this_type_info._enum.member_names[0] = "point_size"_;
		this_type_info._enum.member_values[0] = 2833;
		this_type_info._enum.member_names[1] = "point_size_range"_;
		this_type_info._enum.member_values[1] = 2834;
		this_type_info._enum.member_names[2] = "point_size_granularity"_;
		this_type_info._enum.member_values[2] = 2835;
		this_type_info._enum.member_names[3] = "line_smooth"_;
		this_type_info._enum.member_values[3] = 2848;
		this_type_info._enum.member_names[4] = "line_width"_;
		this_type_info._enum.member_values[4] = 2849;
		this_type_info._enum.member_names[5] = "smooth_line_width_range"_;
		this_type_info._enum.member_values[5] = 2850;
		this_type_info._enum.member_names[6] = "smooth_line_width_granularity"_;
		this_type_info._enum.member_values[6] = 2851;
		this_type_info._enum.member_names[7] = "polygon_smooth"_;
		this_type_info._enum.member_values[7] = 2881;
		this_type_info._enum.member_names[8] = "cull_face"_;
		this_type_info._enum.member_values[8] = 2884;
		this_type_info._enum.member_names[9] = "depth_range"_;
		this_type_info._enum.member_values[9] = 2928;
		this_type_info._enum.member_names[10] = "depth_writemask"_;
		this_type_info._enum.member_values[10] = 2930;
		this_type_info._enum.member_names[11] = "depth_clear_value"_;
		this_type_info._enum.member_values[11] = 2931;
		this_type_info._enum.member_names[12] = "depth_func"_;
		this_type_info._enum.member_values[12] = 2932;
		this_type_info._enum.member_names[13] = "stencil_test"_;
		this_type_info._enum.member_values[13] = 2960;
		this_type_info._enum.member_names[14] = "stencil_clear_value"_;
		this_type_info._enum.member_values[14] = 2961;
		this_type_info._enum.member_names[15] = "stencil_func"_;
		this_type_info._enum.member_values[15] = 2962;
		this_type_info._enum.member_names[16] = "stencil_value_mask"_;
		this_type_info._enum.member_values[16] = 2963;
		this_type_info._enum.member_names[17] = "stencil_fail"_;
		this_type_info._enum.member_values[17] = 2964;
		this_type_info._enum.member_names[18] = "stencil_pass_depth_fail"_;
		this_type_info._enum.member_values[18] = 2965;
		this_type_info._enum.member_names[19] = "stencil_pass_depth_pass"_;
		this_type_info._enum.member_values[19] = 2966;
		this_type_info._enum.member_names[20] = "stencil_ref"_;
		this_type_info._enum.member_values[20] = 2967;
		this_type_info._enum.member_names[21] = "stencil_writemask"_;
		this_type_info._enum.member_values[21] = 2968;
		this_type_info._enum.member_names[22] = "viewport"_;
		this_type_info._enum.member_values[22] = 2978;
		this_type_info._enum.member_names[23] = "dither"_;
		this_type_info._enum.member_values[23] = 3024;
		this_type_info._enum.member_names[24] = "blend"_;
		this_type_info._enum.member_values[24] = 3042;
		this_type_info._enum.member_names[25] = "logic_op_mode"_;
		this_type_info._enum.member_values[25] = 3056;
		this_type_info._enum.member_names[26] = "color_logic_op"_;
		this_type_info._enum.member_values[26] = 3058;
		this_type_info._enum.member_names[27] = "draw_buffer"_;
		this_type_info._enum.member_values[27] = 3073;
		this_type_info._enum.member_names[28] = "read_buffer"_;
		this_type_info._enum.member_values[28] = 3074;
		this_type_info._enum.member_names[29] = "scissor_box"_;
		this_type_info._enum.member_values[29] = 3088;
		this_type_info._enum.member_names[30] = "scissor_test"_;
		this_type_info._enum.member_values[30] = 3089;
		this_type_info._enum.member_names[31] = "color_clear_value"_;
		this_type_info._enum.member_values[31] = 3106;
		this_type_info._enum.member_names[32] = "color_writemask"_;
		this_type_info._enum.member_values[32] = 3107;
		this_type_info._enum.member_names[33] = "doublebuffer"_;
		this_type_info._enum.member_values[33] = 3122;
		this_type_info._enum.member_names[34] = "stereo"_;
		this_type_info._enum.member_values[34] = 3123;
		this_type_info._enum.member_names[35] = "line_smooth_hint"_;
		this_type_info._enum.member_values[35] = 3154;
		this_type_info._enum.member_names[36] = "polygon_smooth_hint"_;
		this_type_info._enum.member_values[36] = 3155;
		this_type_info._enum.member_names[37] = "unpack_swap_bytes"_;
		this_type_info._enum.member_values[37] = 3312;
		this_type_info._enum.member_names[38] = "unpack_lsb_first"_;
		this_type_info._enum.member_values[38] = 3313;
		this_type_info._enum.member_names[39] = "unpack_row_length"_;
		this_type_info._enum.member_values[39] = 3314;
		this_type_info._enum.member_names[40] = "unpack_skip_rows"_;
		this_type_info._enum.member_values[40] = 3315;
		this_type_info._enum.member_names[41] = "unpack_skip_pixels"_;
		this_type_info._enum.member_values[41] = 3316;
		this_type_info._enum.member_names[42] = "unpack_alignment"_;
		this_type_info._enum.member_values[42] = 3317;
		this_type_info._enum.member_names[43] = "pack_swap_bytes"_;
		this_type_info._enum.member_values[43] = 3328;
		this_type_info._enum.member_names[44] = "pack_lsb_first"_;
		this_type_info._enum.member_values[44] = 3329;
		this_type_info._enum.member_names[45] = "pack_row_length"_;
		this_type_info._enum.member_values[45] = 3330;
		this_type_info._enum.member_names[46] = "pack_skip_rows"_;
		this_type_info._enum.member_values[46] = 3331;
		this_type_info._enum.member_names[47] = "pack_skip_pixels"_;
		this_type_info._enum.member_values[47] = 3332;
		this_type_info._enum.member_names[48] = "pack_alignment"_;
		this_type_info._enum.member_values[48] = 3333;
		this_type_info._enum.member_names[49] = "max_clip_distances"_;
		this_type_info._enum.member_values[49] = 3378;
		this_type_info._enum.member_names[50] = "max_texture_size"_;
		this_type_info._enum.member_values[50] = 3379;
		this_type_info._enum.member_names[51] = "max_viewport_dims"_;
		this_type_info._enum.member_values[51] = 3386;
		this_type_info._enum.member_names[52] = "subpixel_bits"_;
		this_type_info._enum.member_values[52] = 3408;
		this_type_info._enum.member_names[53] = "polygon_offset_units"_;
		this_type_info._enum.member_values[53] = 10752;
		this_type_info._enum.member_names[54] = "polygon_offset_point"_;
		this_type_info._enum.member_values[54] = 10753;
		this_type_info._enum.member_names[55] = "polygon_offset_line"_;
		this_type_info._enum.member_values[55] = 10754;
		this_type_info._enum.member_names[56] = "blend_color"_;
		this_type_info._enum.member_values[56] = 32773;
		this_type_info._enum.member_names[57] = "blend_equation_rgb"_;
		this_type_info._enum.member_values[57] = 32777;
		this_type_info._enum.member_names[58] = "polygon_offset_fill"_;
		this_type_info._enum.member_values[58] = 32823;
		this_type_info._enum.member_names[59] = "polygon_offset_factor"_;
		this_type_info._enum.member_values[59] = 32824;
		this_type_info._enum.member_names[60] = "texture_binding_1d"_;
		this_type_info._enum.member_values[60] = 32872;
		this_type_info._enum.member_names[61] = "texture_binding_2d"_;
		this_type_info._enum.member_values[61] = 32873;
		this_type_info._enum.member_names[62] = "texture_binding_3d"_;
		this_type_info._enum.member_values[62] = 32874;
		this_type_info._enum.member_names[63] = "pack_skip_images"_;
		this_type_info._enum.member_values[63] = 32875;
		this_type_info._enum.member_names[64] = "pack_image_height"_;
		this_type_info._enum.member_values[64] = 32876;
		this_type_info._enum.member_names[65] = "unpack_skip_images"_;
		this_type_info._enum.member_values[65] = 32877;
		this_type_info._enum.member_names[66] = "unpack_image_height"_;
		this_type_info._enum.member_values[66] = 32878;
		this_type_info._enum.member_names[67] = "max_3d_texture_size"_;
		this_type_info._enum.member_values[67] = 32883;
		this_type_info._enum.member_names[68] = "sample_buffers"_;
		this_type_info._enum.member_values[68] = 32936;
		this_type_info._enum.member_names[69] = "samples"_;
		this_type_info._enum.member_values[69] = 32937;
		this_type_info._enum.member_names[70] = "sample_coverage_value"_;
		this_type_info._enum.member_values[70] = 32938;
		this_type_info._enum.member_names[71] = "sample_coverage_invert"_;
		this_type_info._enum.member_values[71] = 32939;
		this_type_info._enum.member_names[72] = "blend_dst_rgb"_;
		this_type_info._enum.member_values[72] = 32968;
		this_type_info._enum.member_names[73] = "blend_src_rgb"_;
		this_type_info._enum.member_values[73] = 32969;
		this_type_info._enum.member_names[74] = "blend_dst_alpha"_;
		this_type_info._enum.member_values[74] = 32970;
		this_type_info._enum.member_names[75] = "blend_src_alpha"_;
		this_type_info._enum.member_values[75] = 32971;
		this_type_info._enum.member_names[76] = "max_elements_vertices"_;
		this_type_info._enum.member_values[76] = 33000;
		this_type_info._enum.member_names[77] = "max_elements_indices"_;
		this_type_info._enum.member_values[77] = 33001;
		this_type_info._enum.member_names[78] = "point_fade_threshold_size"_;
		this_type_info._enum.member_values[78] = 33064;
		this_type_info._enum.member_names[79] = "major_version"_;
		this_type_info._enum.member_values[79] = 33307;
		this_type_info._enum.member_names[80] = "minor_version"_;
		this_type_info._enum.member_values[80] = 33308;
		this_type_info._enum.member_names[81] = "num_extensions"_;
		this_type_info._enum.member_values[81] = 33309;
		this_type_info._enum.member_names[82] = "context_flags"_;
		this_type_info._enum.member_values[82] = 33310;
		this_type_info._enum.member_names[83] = "program_pipeline_binding"_;
		this_type_info._enum.member_values[83] = 33370;
		this_type_info._enum.member_names[84] = "max_viewports"_;
		this_type_info._enum.member_values[84] = 33371;
		this_type_info._enum.member_names[85] = "viewport_subpixel_bits"_;
		this_type_info._enum.member_values[85] = 33372;
		this_type_info._enum.member_names[86] = "viewport_bounds_range"_;
		this_type_info._enum.member_values[86] = 33373;
		this_type_info._enum.member_names[87] = "layer_provoking_vertex"_;
		this_type_info._enum.member_values[87] = 33374;
		this_type_info._enum.member_names[88] = "viewport_index_provoking_vertex"_;
		this_type_info._enum.member_values[88] = 33375;
		this_type_info._enum.member_names[89] = "max_compute_uniform_components"_;
		this_type_info._enum.member_values[89] = 33379;
		this_type_info._enum.member_names[90] = "max_compute_atomic_counter_buffers"_;
		this_type_info._enum.member_values[90] = 33380;
		this_type_info._enum.member_names[91] = "max_compute_atomic_counters"_;
		this_type_info._enum.member_values[91] = 33381;
		this_type_info._enum.member_names[92] = "max_combined_compute_uniform_components"_;
		this_type_info._enum.member_values[92] = 33382;
		this_type_info._enum.member_names[93] = "max_debug_group_stack_depth"_;
		this_type_info._enum.member_values[93] = 33388;
		this_type_info._enum.member_names[94] = "debug_group_stack_depth"_;
		this_type_info._enum.member_values[94] = 33389;
		this_type_info._enum.member_names[95] = "max_uniform_locations"_;
		this_type_info._enum.member_values[95] = 33390;
		this_type_info._enum.member_names[96] = "vertex_binding_divisor"_;
		this_type_info._enum.member_values[96] = 33494;
		this_type_info._enum.member_names[97] = "vertex_binding_offset"_;
		this_type_info._enum.member_values[97] = 33495;
		this_type_info._enum.member_names[98] = "vertex_binding_stride"_;
		this_type_info._enum.member_values[98] = 33496;
		this_type_info._enum.member_names[99] = "max_vertex_attrib_relative_offset"_;
		this_type_info._enum.member_values[99] = 33497;
		this_type_info._enum.member_names[100] = "max_vertex_attrib_bindings"_;
		this_type_info._enum.member_values[100] = 33498;
		this_type_info._enum.member_names[101] = "max_label_length"_;
		this_type_info._enum.member_values[101] = 33512;
		this_type_info._enum.member_names[102] = "aliased_line_width_range"_;
		this_type_info._enum.member_values[102] = 33902;
		this_type_info._enum.member_names[103] = "active_texture"_;
		this_type_info._enum.member_values[103] = 34016;
		this_type_info._enum.member_names[104] = "max_renderbuffer_size"_;
		this_type_info._enum.member_values[104] = 34024;
		this_type_info._enum.member_names[105] = "texture_compression_hint"_;
		this_type_info._enum.member_values[105] = 34031;
		this_type_info._enum.member_names[106] = "texture_binding_rectangle"_;
		this_type_info._enum.member_values[106] = 34038;
		this_type_info._enum.member_names[107] = "max_rectangle_texture_size"_;
		this_type_info._enum.member_values[107] = 34040;
		this_type_info._enum.member_names[108] = "max_texture_lod_bias"_;
		this_type_info._enum.member_values[108] = 34045;
		this_type_info._enum.member_names[109] = "max_texture_max_anisotropy"_;
		this_type_info._enum.member_values[109] = 34047;
		this_type_info._enum.member_names[110] = "texture_binding_cube_map"_;
		this_type_info._enum.member_values[110] = 34068;
		this_type_info._enum.member_names[111] = "max_cube_map_texture_size"_;
		this_type_info._enum.member_values[111] = 34076;
		this_type_info._enum.member_names[112] = "vertex_array_binding"_;
		this_type_info._enum.member_values[112] = 34229;
		this_type_info._enum.member_names[113] = "program_point_size"_;
		this_type_info._enum.member_values[113] = 34370;
		this_type_info._enum.member_names[114] = "num_compressed_texture_formats"_;
		this_type_info._enum.member_values[114] = 34466;
		this_type_info._enum.member_names[115] = "compressed_texture_formats"_;
		this_type_info._enum.member_values[115] = 34467;
		this_type_info._enum.member_names[116] = "num_program_binary_formats"_;
		this_type_info._enum.member_values[116] = 34814;
		this_type_info._enum.member_names[117] = "program_binary_formats"_;
		this_type_info._enum.member_values[117] = 34815;
		this_type_info._enum.member_names[118] = "stencil_back_func"_;
		this_type_info._enum.member_values[118] = 34816;
		this_type_info._enum.member_names[119] = "stencil_back_fail"_;
		this_type_info._enum.member_values[119] = 34817;
		this_type_info._enum.member_names[120] = "stencil_back_pass_depth_fail"_;
		this_type_info._enum.member_values[120] = 34818;
		this_type_info._enum.member_names[121] = "stencil_back_pass_depth_pass"_;
		this_type_info._enum.member_values[121] = 34819;
		this_type_info._enum.member_names[122] = "max_draw_buffers"_;
		this_type_info._enum.member_values[122] = 34852;
		this_type_info._enum.member_names[123] = "draw_buffer0"_;
		this_type_info._enum.member_values[123] = 34853;
		this_type_info._enum.member_names[124] = "draw_buffer1"_;
		this_type_info._enum.member_values[124] = 34854;
		this_type_info._enum.member_names[125] = "draw_buffer2"_;
		this_type_info._enum.member_values[125] = 34855;
		this_type_info._enum.member_names[126] = "draw_buffer3"_;
		this_type_info._enum.member_values[126] = 34856;
		this_type_info._enum.member_names[127] = "draw_buffer4"_;
		this_type_info._enum.member_values[127] = 34857;
		this_type_info._enum.member_names[128] = "draw_buffer5"_;
		this_type_info._enum.member_values[128] = 34858;
		this_type_info._enum.member_names[129] = "draw_buffer6"_;
		this_type_info._enum.member_values[129] = 34859;
		this_type_info._enum.member_names[130] = "draw_buffer7"_;
		this_type_info._enum.member_values[130] = 34860;
		this_type_info._enum.member_names[131] = "draw_buffer8"_;
		this_type_info._enum.member_values[131] = 34861;
		this_type_info._enum.member_names[132] = "draw_buffer9"_;
		this_type_info._enum.member_values[132] = 34862;
		this_type_info._enum.member_names[133] = "draw_buffer10"_;
		this_type_info._enum.member_values[133] = 34863;
		this_type_info._enum.member_names[134] = "draw_buffer11"_;
		this_type_info._enum.member_values[134] = 34864;
		this_type_info._enum.member_names[135] = "draw_buffer12"_;
		this_type_info._enum.member_values[135] = 34865;
		this_type_info._enum.member_names[136] = "draw_buffer13"_;
		this_type_info._enum.member_values[136] = 34866;
		this_type_info._enum.member_names[137] = "draw_buffer14"_;
		this_type_info._enum.member_values[137] = 34867;
		this_type_info._enum.member_names[138] = "draw_buffer15"_;
		this_type_info._enum.member_values[138] = 34868;
		this_type_info._enum.member_names[139] = "blend_equation_alpha"_;
		this_type_info._enum.member_values[139] = 34877;
		this_type_info._enum.member_names[140] = "max_vertex_attribs"_;
		this_type_info._enum.member_values[140] = 34921;
		this_type_info._enum.member_names[141] = "max_texture_image_units"_;
		this_type_info._enum.member_values[141] = 34930;
		this_type_info._enum.member_names[142] = "array_buffer_binding"_;
		this_type_info._enum.member_values[142] = 34964;
		this_type_info._enum.member_names[143] = "element_array_buffer_binding"_;
		this_type_info._enum.member_values[143] = 34965;
		this_type_info._enum.member_names[144] = "pixel_pack_buffer_binding"_;
		this_type_info._enum.member_values[144] = 35053;
		this_type_info._enum.member_names[145] = "pixel_unpack_buffer_binding"_;
		this_type_info._enum.member_values[145] = 35055;
		this_type_info._enum.member_names[146] = "max_dual_source_draw_buffers"_;
		this_type_info._enum.member_values[146] = 35068;
		this_type_info._enum.member_names[147] = "max_array_texture_layers"_;
		this_type_info._enum.member_values[147] = 35071;
		this_type_info._enum.member_names[148] = "max_program_texel_offset"_;
		this_type_info._enum.member_values[148] = 35077;
		this_type_info._enum.member_names[149] = "sampler_binding"_;
		this_type_info._enum.member_values[149] = 35097;
		this_type_info._enum.member_names[150] = "uniform_buffer_binding"_;
		this_type_info._enum.member_values[150] = 35368;
		this_type_info._enum.member_names[151] = "uniform_buffer_start"_;
		this_type_info._enum.member_values[151] = 35369;
		this_type_info._enum.member_names[152] = "uniform_buffer_size"_;
		this_type_info._enum.member_values[152] = 35370;
		this_type_info._enum.member_names[153] = "max_vertex_uniform_blocks"_;
		this_type_info._enum.member_values[153] = 35371;
		this_type_info._enum.member_names[154] = "max_geometry_uniform_blocks"_;
		this_type_info._enum.member_values[154] = 35372;
		this_type_info._enum.member_names[155] = "max_fragment_uniform_blocks"_;
		this_type_info._enum.member_values[155] = 35373;
		this_type_info._enum.member_names[156] = "max_combined_uniform_blocks"_;
		this_type_info._enum.member_values[156] = 35374;
		this_type_info._enum.member_names[157] = "max_uniform_buffer_bindings"_;
		this_type_info._enum.member_values[157] = 35375;
		this_type_info._enum.member_names[158] = "max_uniform_block_size"_;
		this_type_info._enum.member_values[158] = 35376;
		this_type_info._enum.member_names[159] = "max_combined_vertex_uniform_components"_;
		this_type_info._enum.member_values[159] = 35377;
		this_type_info._enum.member_names[160] = "max_combined_geometry_uniform_components"_;
		this_type_info._enum.member_values[160] = 35378;
		this_type_info._enum.member_names[161] = "max_combined_fragment_uniform_components"_;
		this_type_info._enum.member_values[161] = 35379;
		this_type_info._enum.member_names[162] = "uniform_buffer_offset_alignment"_;
		this_type_info._enum.member_values[162] = 35380;
		this_type_info._enum.member_names[163] = "max_fragment_uniform_components"_;
		this_type_info._enum.member_values[163] = 35657;
		this_type_info._enum.member_names[164] = "max_vertex_uniform_components"_;
		this_type_info._enum.member_values[164] = 35658;
		this_type_info._enum.member_names[165] = "max_varying_components"_;
		this_type_info._enum.member_values[165] = 35659;
		this_type_info._enum.member_names[166] = "max_varying_floats"_;
		this_type_info._enum.member_values[166] = 35659;
		this_type_info._enum.member_names[167] = "max_vertex_texture_image_units"_;
		this_type_info._enum.member_values[167] = 35660;
		this_type_info._enum.member_names[168] = "max_combined_texture_image_units"_;
		this_type_info._enum.member_values[168] = 35661;
		this_type_info._enum.member_names[169] = "fragment_shader_derivative_hint"_;
		this_type_info._enum.member_values[169] = 35723;
		this_type_info._enum.member_names[170] = "current_program"_;
		this_type_info._enum.member_values[170] = 35725;
		this_type_info._enum.member_names[171] = "implementation_color_read_type"_;
		this_type_info._enum.member_values[171] = 35738;
		this_type_info._enum.member_names[172] = "implementation_color_read_format"_;
		this_type_info._enum.member_values[172] = 35739;
		this_type_info._enum.member_names[173] = "texture_binding_1d_array"_;
		this_type_info._enum.member_values[173] = 35868;
		this_type_info._enum.member_names[174] = "texture_binding_2d_array"_;
		this_type_info._enum.member_values[174] = 35869;
		this_type_info._enum.member_names[175] = "max_geometry_texture_image_units"_;
		this_type_info._enum.member_values[175] = 35881;
		this_type_info._enum.member_names[176] = "max_texture_buffer_size"_;
		this_type_info._enum.member_values[176] = 35883;
		this_type_info._enum.member_names[177] = "texture_binding_buffer"_;
		this_type_info._enum.member_values[177] = 35884;
		this_type_info._enum.member_names[178] = "transform_feedback_buffer_start"_;
		this_type_info._enum.member_values[178] = 35972;
		this_type_info._enum.member_names[179] = "transform_feedback_buffer_size"_;
		this_type_info._enum.member_values[179] = 35973;
		this_type_info._enum.member_names[180] = "transform_feedback_buffer_binding"_;
		this_type_info._enum.member_values[180] = 35983;
		this_type_info._enum.member_names[181] = "stencil_back_ref"_;
		this_type_info._enum.member_values[181] = 36003;
		this_type_info._enum.member_names[182] = "stencil_back_value_mask"_;
		this_type_info._enum.member_values[182] = 36004;
		this_type_info._enum.member_names[183] = "stencil_back_writemask"_;
		this_type_info._enum.member_values[183] = 36005;
		this_type_info._enum.member_names[184] = "draw_framebuffer_binding"_;
		this_type_info._enum.member_values[184] = 36006;
		this_type_info._enum.member_names[185] = "renderbuffer_binding"_;
		this_type_info._enum.member_values[185] = 36007;
		this_type_info._enum.member_names[186] = "read_framebuffer_binding"_;
		this_type_info._enum.member_values[186] = 36010;
		this_type_info._enum.member_names[187] = "max_element_index"_;
		this_type_info._enum.member_values[187] = 36203;
		this_type_info._enum.member_names[188] = "num_shader_binary_formats"_;
		this_type_info._enum.member_values[188] = 36345;
		this_type_info._enum.member_names[189] = "shader_compiler"_;
		this_type_info._enum.member_values[189] = 36346;
		this_type_info._enum.member_names[190] = "max_vertex_uniform_vectors"_;
		this_type_info._enum.member_values[190] = 36347;
		this_type_info._enum.member_names[191] = "max_varying_vectors"_;
		this_type_info._enum.member_values[191] = 36348;
		this_type_info._enum.member_names[192] = "max_fragment_uniform_vectors"_;
		this_type_info._enum.member_values[192] = 36349;
		this_type_info._enum.member_names[193] = "timestamp"_;
		this_type_info._enum.member_values[193] = 36392;
		this_type_info._enum.member_names[194] = "provoking_vertex"_;
		this_type_info._enum.member_values[194] = 36431;
		this_type_info._enum.member_names[195] = "sample_mask_value"_;
		this_type_info._enum.member_values[195] = 36434;
		this_type_info._enum.member_names[196] = "max_sample_mask_words"_;
		this_type_info._enum.member_values[196] = 36441;
		this_type_info._enum.member_names[197] = "primitive_restart_index"_;
		this_type_info._enum.member_values[197] = 36766;
		this_type_info._enum.member_names[198] = "texture_binding_cube_map_array"_;
		this_type_info._enum.member_values[198] = 36874;
		this_type_info._enum.member_names[199] = "min_map_buffer_alignment"_;
		this_type_info._enum.member_values[199] = 37052;
		this_type_info._enum.member_names[200] = "shader_storage_buffer_binding"_;
		this_type_info._enum.member_values[200] = 37075;
		this_type_info._enum.member_names[201] = "shader_storage_buffer_start"_;
		this_type_info._enum.member_values[201] = 37076;
		this_type_info._enum.member_names[202] = "shader_storage_buffer_size"_;
		this_type_info._enum.member_values[202] = 37077;
		this_type_info._enum.member_names[203] = "max_vertex_shader_storage_blocks"_;
		this_type_info._enum.member_values[203] = 37078;
		this_type_info._enum.member_names[204] = "max_geometry_shader_storage_blocks"_;
		this_type_info._enum.member_values[204] = 37079;
		this_type_info._enum.member_names[205] = "max_tess_control_shader_storage_blocks"_;
		this_type_info._enum.member_values[205] = 37080;
		this_type_info._enum.member_names[206] = "max_tess_evaluation_shader_storage_blocks"_;
		this_type_info._enum.member_values[206] = 37081;
		this_type_info._enum.member_names[207] = "max_fragment_shader_storage_blocks"_;
		this_type_info._enum.member_values[207] = 37082;
		this_type_info._enum.member_names[208] = "max_compute_shader_storage_blocks"_;
		this_type_info._enum.member_values[208] = 37083;
		this_type_info._enum.member_names[209] = "max_combined_shader_storage_blocks"_;
		this_type_info._enum.member_values[209] = 37084;
		this_type_info._enum.member_names[210] = "max_shader_storage_buffer_bindings"_;
		this_type_info._enum.member_values[210] = 37085;
		this_type_info._enum.member_names[211] = "shader_storage_buffer_offset_alignment"_;
		this_type_info._enum.member_values[211] = 37087;
		this_type_info._enum.member_names[212] = "max_compute_work_group_invocations"_;
		this_type_info._enum.member_values[212] = 37099;
		this_type_info._enum.member_names[213] = "dispatch_indirect_buffer_binding"_;
		this_type_info._enum.member_values[213] = 37103;
		this_type_info._enum.member_names[214] = "texture_binding_2d_multisample"_;
		this_type_info._enum.member_values[214] = 37124;
		this_type_info._enum.member_names[215] = "texture_binding_2d_multisample_array"_;
		this_type_info._enum.member_values[215] = 37125;
		this_type_info._enum.member_names[216] = "max_color_texture_samples"_;
		this_type_info._enum.member_values[216] = 37134;
		this_type_info._enum.member_names[217] = "max_depth_texture_samples"_;
		this_type_info._enum.member_values[217] = 37135;
		this_type_info._enum.member_names[218] = "max_integer_samples"_;
		this_type_info._enum.member_values[218] = 37136;
		this_type_info._enum.member_names[219] = "max_server_wait_timeout"_;
		this_type_info._enum.member_values[219] = 37137;
		this_type_info._enum.member_names[220] = "max_vertex_output_components"_;
		this_type_info._enum.member_values[220] = 37154;
		this_type_info._enum.member_names[221] = "max_geometry_input_components"_;
		this_type_info._enum.member_values[221] = 37155;
		this_type_info._enum.member_names[222] = "max_geometry_output_components"_;
		this_type_info._enum.member_values[222] = 37156;
		this_type_info._enum.member_names[223] = "max_fragment_input_components"_;
		this_type_info._enum.member_values[223] = 37157;
		this_type_info._enum.member_names[224] = "texture_buffer_offset_alignment"_;
		this_type_info._enum.member_values[224] = 37279;
		this_type_info._enum.member_names[225] = "max_compute_uniform_blocks"_;
		this_type_info._enum.member_values[225] = 37307;
		this_type_info._enum.member_names[226] = "max_compute_texture_image_units"_;
		this_type_info._enum.member_values[226] = 37308;
		this_type_info._enum.member_names[227] = "max_compute_work_group_count"_;
		this_type_info._enum.member_values[227] = 37310;
		this_type_info._enum.member_names[228] = "max_compute_work_group_size"_;
		this_type_info._enum.member_values[228] = 37311;
		this_type_info._enum.member_names[229] = "max_vertex_atomic_counters"_;
		this_type_info._enum.member_values[229] = 37586;
		this_type_info._enum.member_names[230] = "max_tess_control_atomic_counters"_;
		this_type_info._enum.member_values[230] = 37587;
		this_type_info._enum.member_names[231] = "max_tess_evaluation_atomic_counters"_;
		this_type_info._enum.member_values[231] = 37588;
		this_type_info._enum.member_names[232] = "max_geometry_atomic_counters"_;
		this_type_info._enum.member_values[232] = 37589;
		this_type_info._enum.member_names[233] = "max_fragment_atomic_counters"_;
		this_type_info._enum.member_values[233] = 37590;
		this_type_info._enum.member_names[234] = "max_combined_atomic_counters"_;
		this_type_info._enum.member_values[234] = 37591;
		this_type_info._enum.member_names[235] = "max_framebuffer_width"_;
		this_type_info._enum.member_values[235] = 37653;
		this_type_info._enum.member_names[236] = "max_framebuffer_height"_;
		this_type_info._enum.member_values[236] = 37654;
		this_type_info._enum.member_names[237] = "max_framebuffer_layers"_;
		this_type_info._enum.member_values[237] = 37655;
		this_type_info._enum.member_names[238] = "max_framebuffer_samples"_;
		this_type_info._enum.member_values[238] = 37656;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_enum;
		this_type_info.size = sizeof(GLenum);
		this_type_info.name = "gl_poly"_;
		this_type_info.hash = (type_id)typeid(gl_poly).hash_code();
		this_type_info._enum.member_count = 1;
		this_type_info._enum.base_type = TYPEINFO(GLenum) ? TYPEINFO(GLenum)->hash : 0;
		this_type_info._enum.member_names[0] = "front_and_back"_;
		this_type_info._enum.member_values[0] = 1032;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_enum;
		this_type_info.size = sizeof(GLenum);
		this_type_info.name = "gl_cull_mode"_;
		this_type_info.hash = (type_id)typeid(gl_cull_mode).hash_code();
		this_type_info._enum.member_count = 3;
		this_type_info._enum.base_type = TYPEINFO(GLenum) ? TYPEINFO(GLenum)->hash : 0;
		this_type_info._enum.member_names[0] = "front"_;
		this_type_info._enum.member_values[0] = 1028;
		this_type_info._enum.member_names[1] = "back"_;
		this_type_info._enum.member_values[1] = 1029;
		this_type_info._enum.member_names[2] = "front_and_back"_;
		this_type_info._enum.member_values[2] = 1032;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_enum;
		this_type_info.size = sizeof(GLenum);
		this_type_info.name = "gl_poly_mode"_;
		this_type_info.hash = (type_id)typeid(gl_poly_mode).hash_code();
		this_type_info._enum.member_count = 3;
		this_type_info._enum.base_type = TYPEINFO(GLenum) ? TYPEINFO(GLenum)->hash : 0;
		this_type_info._enum.member_names[0] = "point"_;
		this_type_info._enum.member_values[0] = 6912;
		this_type_info._enum.member_names[1] = "line"_;
		this_type_info._enum.member_values[1] = 6913;
		this_type_info._enum.member_names[2] = "fill"_;
		this_type_info._enum.member_values[2] = 6914;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_enum;
		this_type_info.size = sizeof(GLenum);
		this_type_info.name = "gl_blend_mode"_;
		this_type_info.hash = (type_id)typeid(gl_blend_mode).hash_code();
		this_type_info._enum.member_count = 5;
		this_type_info._enum.base_type = TYPEINFO(GLenum) ? TYPEINFO(GLenum)->hash : 0;
		this_type_info._enum.member_names[0] = "add"_;
		this_type_info._enum.member_values[0] = 32774;
		this_type_info._enum.member_names[1] = "min"_;
		this_type_info._enum.member_values[1] = 32775;
		this_type_info._enum.member_names[2] = "max"_;
		this_type_info._enum.member_values[2] = 32776;
		this_type_info._enum.member_names[3] = "subtract"_;
		this_type_info._enum.member_values[3] = 32778;
		this_type_info._enum.member_names[4] = "reverse_subtract"_;
		this_type_info._enum.member_values[4] = 32779;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_enum;
		this_type_info.size = sizeof(GLenum);
		this_type_info.name = "gl_depth_factor"_;
		this_type_info.hash = (type_id)typeid(gl_depth_factor).hash_code();
		this_type_info._enum.member_count = 8;
		this_type_info._enum.base_type = TYPEINFO(GLenum) ? TYPEINFO(GLenum)->hash : 0;
		this_type_info._enum.member_names[0] = "never"_;
		this_type_info._enum.member_values[0] = 512;
		this_type_info._enum.member_names[1] = "less"_;
		this_type_info._enum.member_values[1] = 513;
		this_type_info._enum.member_names[2] = "equal"_;
		this_type_info._enum.member_values[2] = 514;
		this_type_info._enum.member_names[3] = "lequal"_;
		this_type_info._enum.member_values[3] = 515;
		this_type_info._enum.member_names[4] = "greater"_;
		this_type_info._enum.member_values[4] = 516;
		this_type_info._enum.member_names[5] = "notequal"_;
		this_type_info._enum.member_values[5] = 517;
		this_type_info._enum.member_names[6] = "gequal"_;
		this_type_info._enum.member_values[6] = 518;
		this_type_info._enum.member_names[7] = "always"_;
		this_type_info._enum.member_values[7] = 519;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_enum;
		this_type_info.size = sizeof(GLenum);
		this_type_info.name = "gl_pix_store"_;
		this_type_info.hash = (type_id)typeid(gl_pix_store).hash_code();
		this_type_info._enum.member_count = 16;
		this_type_info._enum.base_type = TYPEINFO(GLenum) ? TYPEINFO(GLenum)->hash : 0;
		this_type_info._enum.member_names[0] = "unpack_swap_bytes"_;
		this_type_info._enum.member_values[0] = 3312;
		this_type_info._enum.member_names[1] = "unpack_lsb_first"_;
		this_type_info._enum.member_values[1] = 3313;
		this_type_info._enum.member_names[2] = "unpack_row_length"_;
		this_type_info._enum.member_values[2] = 3314;
		this_type_info._enum.member_names[3] = "unpack_skip_rows"_;
		this_type_info._enum.member_values[3] = 3315;
		this_type_info._enum.member_names[4] = "unpack_skip_pixels"_;
		this_type_info._enum.member_values[4] = 3316;
		this_type_info._enum.member_names[5] = "unpack_alignment"_;
		this_type_info._enum.member_values[5] = 3317;
		this_type_info._enum.member_names[6] = "pack_swap_bytes"_;
		this_type_info._enum.member_values[6] = 3328;
		this_type_info._enum.member_names[7] = "pack_lsb_first"_;
		this_type_info._enum.member_values[7] = 3329;
		this_type_info._enum.member_names[8] = "pack_row_length"_;
		this_type_info._enum.member_values[8] = 3330;
		this_type_info._enum.member_names[9] = "pack_skip_rows"_;
		this_type_info._enum.member_values[9] = 3331;
		this_type_info._enum.member_names[10] = "pack_skip_pixels"_;
		this_type_info._enum.member_values[10] = 3332;
		this_type_info._enum.member_names[11] = "pack_alignment"_;
		this_type_info._enum.member_values[11] = 3333;
		this_type_info._enum.member_names[12] = "pack_skip_images"_;
		this_type_info._enum.member_values[12] = 32875;
		this_type_info._enum.member_names[13] = "pack_image_height"_;
		this_type_info._enum.member_values[13] = 32876;
		this_type_info._enum.member_names[14] = "unpack_skip_images"_;
		this_type_info._enum.member_values[14] = 32877;
		this_type_info._enum.member_names[15] = "unpack_image_height"_;
		this_type_info._enum.member_values[15] = 32878;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_enum;
		this_type_info.size = sizeof(u8);
		this_type_info.name = "Type"_;
		this_type_info.hash = (type_id)typeid(Type).hash_code();
		this_type_info._enum.member_count = 11;
		this_type_info._enum.base_type = TYPEINFO(u8) ? TYPEINFO(u8)->hash : 0;
		this_type_info._enum.member_names[0] = "_unkown"_;
		this_type_info._enum.member_values[0] = 0;
		this_type_info._enum.member_names[1] = "_void"_;
		this_type_info._enum.member_values[1] = 1;
		this_type_info._enum.member_names[2] = "_int"_;
		this_type_info._enum.member_values[2] = 2;
		this_type_info._enum.member_names[3] = "_float"_;
		this_type_info._enum.member_values[3] = 3;
		this_type_info._enum.member_names[4] = "_bool"_;
		this_type_info._enum.member_values[4] = 4;
		this_type_info._enum.member_names[5] = "_ptr"_;
		this_type_info._enum.member_values[5] = 5;
		this_type_info._enum.member_names[6] = "_func"_;
		this_type_info._enum.member_values[6] = 6;
		this_type_info._enum.member_names[7] = "_array"_;
		this_type_info._enum.member_values[7] = 7;
		this_type_info._enum.member_names[8] = "_struct"_;
		this_type_info._enum.member_values[8] = 8;
		this_type_info._enum.member_names[9] = "_enum"_;
		this_type_info._enum.member_values[9] = 9;
		this_type_info._enum.member_names[10] = "_string"_;
		this_type_info._enum.member_values[10] = 10;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_enum;
		this_type_info.size = sizeof(u8);
		this_type_info.name = "log_level"_;
		this_type_info.hash = (type_id)typeid(log_level).hash_code();
		this_type_info._enum.member_count = 8;
		this_type_info._enum.base_type = TYPEINFO(u8) ? TYPEINFO(u8)->hash : 0;
		this_type_info._enum.member_names[0] = "alloc"_;
		this_type_info._enum.member_values[0] = 0;
		this_type_info._enum.member_names[1] = "ogl"_;
		this_type_info._enum.member_values[1] = 1;
		this_type_info._enum.member_names[2] = "debug"_;
		this_type_info._enum.member_values[2] = 2;
		this_type_info._enum.member_names[3] = "info"_;
		this_type_info._enum.member_values[3] = 3;
		this_type_info._enum.member_names[4] = "console"_;
		this_type_info._enum.member_values[4] = 4;
		this_type_info._enum.member_names[5] = "warn"_;
		this_type_info._enum.member_values[5] = 5;
		this_type_info._enum.member_names[6] = "error"_;
		this_type_info._enum.member_values[6] = 6;
		this_type_info._enum.member_names[7] = "fatal"_;
		this_type_info._enum.member_values[7] = 7;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_enum;
		this_type_info.size = sizeof(u8);
		this_type_info.name = "log_out_type"_;
		this_type_info.hash = (type_id)typeid(log_out_type).hash_code();
		this_type_info._enum.member_count = 3;
		this_type_info._enum.base_type = TYPEINFO(u8) ? TYPEINFO(u8)->hash : 0;
		this_type_info._enum.member_names[0] = "plaintext"_;
		this_type_info._enum.member_values[0] = 0;
		this_type_info._enum.member_names[1] = "html"_;
		this_type_info._enum.member_values[1] = 1;
		this_type_info._enum.member_names[2] = "custom"_;
		this_type_info._enum.member_values[2] = 2;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_enum;
		this_type_info.size = sizeof(u8);
		this_type_info.name = "asset_type"_;
		this_type_info.hash = (type_id)typeid(asset_type).hash_code();
		this_type_info._enum.member_count = 4;
		this_type_info._enum.base_type = TYPEINFO(u8) ? TYPEINFO(u8)->hash : 0;
		this_type_info._enum.member_names[0] = "none"_;
		this_type_info._enum.member_values[0] = 0;
		this_type_info._enum.member_names[1] = "bitmap"_;
		this_type_info._enum.member_values[1] = 1;
		this_type_info._enum.member_names[2] = "ttf_font"_;
		this_type_info._enum.member_values[2] = 2;
		this_type_info._enum.member_names[3] = "raster_font"_;
		this_type_info._enum.member_values[3] = 3;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_enum;
		this_type_info.size = sizeof(u8);
		this_type_info.name = "texture_wrap"_;
		this_type_info.hash = (type_id)typeid(texture_wrap).hash_code();
		this_type_info._enum.member_count = 4;
		this_type_info._enum.base_type = TYPEINFO(u8) ? TYPEINFO(u8)->hash : 0;
		this_type_info._enum.member_names[0] = "repeat"_;
		this_type_info._enum.member_values[0] = 0;
		this_type_info._enum.member_names[1] = "mirror"_;
		this_type_info._enum.member_values[1] = 1;
		this_type_info._enum.member_names[2] = "clamp"_;
		this_type_info._enum.member_values[2] = 2;
		this_type_info._enum.member_names[3] = "clamp_border"_;
		this_type_info._enum.member_values[3] = 3;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_enum;
		this_type_info.size = sizeof(u8);
		this_type_info.name = "texture_type"_;
		this_type_info.hash = (type_id)typeid(texture_type).hash_code();
		this_type_info._enum.member_count = 5;
		this_type_info._enum.base_type = TYPEINFO(u8) ? TYPEINFO(u8)->hash : 0;
		this_type_info._enum.member_names[0] = "none"_;
		this_type_info._enum.member_values[0] = 0;
		this_type_info._enum.member_names[1] = "bmp"_;
		this_type_info._enum.member_values[1] = 1;
		this_type_info._enum.member_names[2] = "rf"_;
		this_type_info._enum.member_values[2] = 2;
		this_type_info._enum.member_names[3] = "array"_;
		this_type_info._enum.member_values[3] = 3;
		this_type_info._enum.member_names[4] = "cube"_;
		this_type_info._enum.member_values[4] = 4;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_enum;
		this_type_info.size = sizeof(u8);
		this_type_info.name = "render_setting"_;
		this_type_info.hash = (type_id)typeid(render_setting).hash_code();
		this_type_info._enum.member_count = 10;
		this_type_info._enum.base_type = TYPEINFO(u8) ? TYPEINFO(u8)->hash : 0;
		this_type_info._enum.member_names[0] = "none"_;
		this_type_info._enum.member_values[0] = 0;
		this_type_info._enum.member_names[1] = "wireframe"_;
		this_type_info._enum.member_values[1] = 1;
		this_type_info._enum.member_names[2] = "depth_test"_;
		this_type_info._enum.member_values[2] = 2;
		this_type_info._enum.member_names[3] = "aa_lines"_;
		this_type_info._enum.member_values[3] = 3;
		this_type_info._enum.member_names[4] = "blend"_;
		this_type_info._enum.member_values[4] = 4;
		this_type_info._enum.member_names[5] = "scissor"_;
		this_type_info._enum.member_values[5] = 5;
		this_type_info._enum.member_names[6] = "cull"_;
		this_type_info._enum.member_values[6] = 6;
		this_type_info._enum.member_names[7] = "msaa"_;
		this_type_info._enum.member_values[7] = 7;
		this_type_info._enum.member_names[8] = "aa_shading"_;
		this_type_info._enum.member_values[8] = 8;
		this_type_info._enum.member_names[9] = "write_depth"_;
		this_type_info._enum.member_values[9] = 9;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_enum;
		this_type_info.size = sizeof(u8);
		this_type_info.name = "camera_mode"_;
		this_type_info.hash = (type_id)typeid(camera_mode).hash_code();
		this_type_info._enum.member_count = 2;
		this_type_info._enum.base_type = TYPEINFO(u8) ? TYPEINFO(u8)->hash : 0;
		this_type_info._enum.member_names[0] = "first"_;
		this_type_info._enum.member_values[0] = 0;
		this_type_info._enum.member_names[1] = "third"_;
		this_type_info._enum.member_values[1] = 1;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_enum;
		this_type_info.size = sizeof(u8);
		this_type_info.name = "dbg_msg_type"_;
		this_type_info.hash = (type_id)typeid(dbg_msg_type).hash_code();
		this_type_info._enum.member_count = 13;
		this_type_info._enum.base_type = TYPEINFO(u8) ? TYPEINFO(u8)->hash : 0;
		this_type_info._enum.member_names[0] = "none"_;
		this_type_info._enum.member_values[0] = 0;
		this_type_info._enum.member_names[1] = "begin_frame"_;
		this_type_info._enum.member_values[1] = 1;
		this_type_info._enum.member_names[2] = "end_frame"_;
		this_type_info._enum.member_values[2] = 2;
		this_type_info._enum.member_names[3] = "allocate"_;
		this_type_info._enum.member_values[3] = 3;
		this_type_info._enum.member_names[4] = "reallocate"_;
		this_type_info._enum.member_values[4] = 4;
		this_type_info._enum.member_names[5] = "free"_;
		this_type_info._enum.member_values[5] = 5;
		this_type_info._enum.member_names[6] = "enter_func"_;
		this_type_info._enum.member_values[6] = 6;
		this_type_info._enum.member_names[7] = "exit_func"_;
		this_type_info._enum.member_values[7] = 7;
		this_type_info._enum.member_names[8] = "mut_lock"_;
		this_type_info._enum.member_values[8] = 8;
		this_type_info._enum.member_names[9] = "mut_unlock"_;
		this_type_info._enum.member_values[9] = 9;
		this_type_info._enum.member_names[10] = "sem_wait"_;
		this_type_info._enum.member_values[10] = 10;
		this_type_info._enum.member_names[11] = "section_begin"_;
		this_type_info._enum.member_values[11] = 11;
		this_type_info._enum.member_names[12] = "section_end"_;
		this_type_info._enum.member_values[12] = 12;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_enum;
		this_type_info.size = sizeof(u8);
		this_type_info.name = "prof_sort_type"_;
		this_type_info.hash = (type_id)typeid(prof_sort_type).hash_code();
		this_type_info._enum.member_count = 5;
		this_type_info._enum.base_type = TYPEINFO(u8) ? TYPEINFO(u8)->hash : 0;
		this_type_info._enum.member_names[0] = "none"_;
		this_type_info._enum.member_values[0] = 0;
		this_type_info._enum.member_names[1] = "name"_;
		this_type_info._enum.member_values[1] = 1;
		this_type_info._enum.member_names[2] = "heir"_;
		this_type_info._enum.member_values[2] = 2;
		this_type_info._enum.member_names[3] = "self"_;
		this_type_info._enum.member_values[3] = 3;
		this_type_info._enum.member_names[4] = "calls"_;
		this_type_info._enum.member_values[4] = 4;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_enum;
		this_type_info.size = sizeof(u8);
		this_type_info.name = "dbg_value_class"_;
		this_type_info.hash = (type_id)typeid(dbg_value_class).hash_code();
		this_type_info._enum.member_count = 4;
		this_type_info._enum.base_type = TYPEINFO(u8) ? TYPEINFO(u8)->hash : 0;
		this_type_info._enum.member_names[0] = "section"_;
		this_type_info._enum.member_values[0] = 0;
		this_type_info._enum.member_names[1] = "edit"_;
		this_type_info._enum.member_values[1] = 1;
		this_type_info._enum.member_names[2] = "view"_;
		this_type_info._enum.member_values[2] = 2;
		this_type_info._enum.member_names[3] = "callback"_;
		this_type_info._enum.member_values[3] = 3;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_enum;
		this_type_info.size = sizeof(u16);
		this_type_info.name = "mesh_cmd"_;
		this_type_info.hash = (type_id)typeid(mesh_cmd).hash_code();
		this_type_info._enum.member_count = 9;
		this_type_info._enum.base_type = TYPEINFO(u16) ? TYPEINFO(u16)->hash : 0;
		this_type_info._enum.member_names[0] = "_2d_col"_;
		this_type_info._enum.member_values[0] = 16;
		this_type_info._enum.member_names[1] = "_2d_tex"_;
		this_type_info._enum.member_values[1] = 17;
		this_type_info._enum.member_names[2] = "_2d_tex_col"_;
		this_type_info._enum.member_values[2] = 18;
		this_type_info._enum.member_names[3] = "_3d_tex"_;
		this_type_info._enum.member_values[3] = 19;
		this_type_info._enum.member_names[4] = "_3d_tex_instanced"_;
		this_type_info._enum.member_values[4] = 20;
		this_type_info._enum.member_names[5] = "lines"_;
		this_type_info._enum.member_values[5] = 21;
		this_type_info._enum.member_names[6] = "cubemap"_;
		this_type_info._enum.member_values[6] = 22;
		this_type_info._enum.member_names[7] = "chunk"_;
		this_type_info._enum.member_values[7] = 23;
		this_type_info._enum.member_names[8] = "skydome"_;
		this_type_info._enum.member_values[8] = 24;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_enum;
		this_type_info.size = sizeof(u8);
		this_type_info.name = "work"_;
		this_type_info.hash = (type_id)typeid(work).hash_code();
		this_type_info._enum.member_count = 3;
		this_type_info._enum.base_type = TYPEINFO(u8) ? TYPEINFO(u8)->hash : 0;
		this_type_info._enum.member_names[0] = "none"_;
		this_type_info._enum.member_values[0] = 0;
		this_type_info._enum.member_names[1] = "in_flight"_;
		this_type_info._enum.member_values[1] = 1;
		this_type_info._enum.member_names[2] = "done"_;
		this_type_info._enum.member_values[2] = 2;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_array;
		this_type_info.size = sizeof(f32 [2]);
		this_type_info.name = STRING(f32 [2]);
		this_type_info.hash = (type_id)typeid(f32 [2]).hash_code();
		this_type_info._array.of = TYPEINFO(f32) ? TYPEINFO(f32)->hash : 0;
		this_type_info._array.length = 2;
		type_table.insert_if_unique(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(v2);
		this_type_info.name = "v2"_;
		this_type_info.hash = (type_id)typeid(v2).hash_code();
		this_type_info._struct.member_count = 3;
		this_type_info._struct.member_types[0] = TYPEINFO(f32) ? TYPEINFO(f32)->hash : 0;
		this_type_info._struct.member_names[0] = "x"_;
		this_type_info._struct.member_offsets[0] = offsetof(v2,x);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(f32) ? TYPEINFO(f32)->hash : 0;
		this_type_info._struct.member_names[1] = "y"_;
		this_type_info._struct.member_offsets[1] = offsetof(v2,y);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(f32 [2]) ? TYPEINFO(f32 [2])->hash : 0;
		this_type_info._struct.member_names[2] = "a"_;
		this_type_info._struct.member_offsets[2] = offsetof(v2,a);
		this_type_info._struct.member_circular[2] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_array;
		this_type_info.size = sizeof(u32 [2]);
		this_type_info.name = STRING(u32 [2]);
		this_type_info.hash = (type_id)typeid(u32 [2]).hash_code();
		this_type_info._array.of = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._array.length = 2;
		type_table.insert_if_unique(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(uv2);
		this_type_info.name = "uv2"_;
		this_type_info.hash = (type_id)typeid(uv2).hash_code();
		this_type_info._struct.member_count = 3;
		this_type_info._struct.member_types[0] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[0] = "x"_;
		this_type_info._struct.member_offsets[0] = offsetof(uv2,x);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[1] = "y"_;
		this_type_info._struct.member_offsets[1] = offsetof(uv2,y);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(u32 [2]) ? TYPEINFO(u32 [2])->hash : 0;
		this_type_info._struct.member_names[2] = "a"_;
		this_type_info._struct.member_offsets[2] = offsetof(uv2,a);
		this_type_info._struct.member_circular[2] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_array;
		this_type_info.size = sizeof(f32 [3]);
		this_type_info.name = STRING(f32 [3]);
		this_type_info.hash = (type_id)typeid(f32 [3]).hash_code();
		this_type_info._array.of = TYPEINFO(f32) ? TYPEINFO(f32)->hash : 0;
		this_type_info._array.length = 3;
		type_table.insert_if_unique(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(v3);
		this_type_info.name = "v3"_;
		this_type_info.hash = (type_id)typeid(v3).hash_code();
		this_type_info._struct.member_count = 4;
		this_type_info._struct.member_types[0] = TYPEINFO(f32) ? TYPEINFO(f32)->hash : 0;
		this_type_info._struct.member_names[0] = "x"_;
		this_type_info._struct.member_offsets[0] = offsetof(v3,x);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(f32) ? TYPEINFO(f32)->hash : 0;
		this_type_info._struct.member_names[1] = "y"_;
		this_type_info._struct.member_offsets[1] = offsetof(v3,y);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(f32) ? TYPEINFO(f32)->hash : 0;
		this_type_info._struct.member_names[2] = "z"_;
		this_type_info._struct.member_offsets[2] = offsetof(v3,z);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(f32 [3]) ? TYPEINFO(f32 [3])->hash : 0;
		this_type_info._struct.member_names[3] = "a"_;
		this_type_info._struct.member_offsets[3] = offsetof(v3,a);
		this_type_info._struct.member_circular[3] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_array;
		this_type_info.size = sizeof(u32 [3]);
		this_type_info.name = STRING(u32 [3]);
		this_type_info.hash = (type_id)typeid(u32 [3]).hash_code();
		this_type_info._array.of = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._array.length = 3;
		type_table.insert_if_unique(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(uv3);
		this_type_info.name = "uv3"_;
		this_type_info.hash = (type_id)typeid(uv3).hash_code();
		this_type_info._struct.member_count = 4;
		this_type_info._struct.member_types[0] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[0] = "x"_;
		this_type_info._struct.member_offsets[0] = offsetof(uv3,x);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[1] = "y"_;
		this_type_info._struct.member_offsets[1] = offsetof(uv3,y);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[2] = "z"_;
		this_type_info._struct.member_offsets[2] = offsetof(uv3,z);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(u32 [3]) ? TYPEINFO(u32 [3])->hash : 0;
		this_type_info._struct.member_names[3] = "a"_;
		this_type_info._struct.member_offsets[3] = offsetof(uv3,a);
		this_type_info._struct.member_circular[3] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_array;
		this_type_info.size = sizeof(i32 [3]);
		this_type_info.name = STRING(i32 [3]);
		this_type_info.hash = (type_id)typeid(i32 [3]).hash_code();
		this_type_info._array.of = TYPEINFO(i32) ? TYPEINFO(i32)->hash : 0;
		this_type_info._array.length = 3;
		type_table.insert_if_unique(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(iv3);
		this_type_info.name = "iv3"_;
		this_type_info.hash = (type_id)typeid(iv3).hash_code();
		this_type_info._struct.member_count = 4;
		this_type_info._struct.member_types[0] = TYPEINFO(i32) ? TYPEINFO(i32)->hash : 0;
		this_type_info._struct.member_names[0] = "x"_;
		this_type_info._struct.member_offsets[0] = offsetof(iv3,x);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(i32) ? TYPEINFO(i32)->hash : 0;
		this_type_info._struct.member_names[1] = "y"_;
		this_type_info._struct.member_offsets[1] = offsetof(iv3,y);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(i32) ? TYPEINFO(i32)->hash : 0;
		this_type_info._struct.member_names[2] = "z"_;
		this_type_info._struct.member_offsets[2] = offsetof(iv3,z);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(i32 [3]) ? TYPEINFO(i32 [3])->hash : 0;
		this_type_info._struct.member_names[3] = "a"_;
		this_type_info._struct.member_offsets[3] = offsetof(iv3,a);
		this_type_info._struct.member_circular[3] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_array;
		this_type_info.size = sizeof(f32 [4]);
		this_type_info.name = STRING(f32 [4]);
		this_type_info.hash = (type_id)typeid(f32 [4]).hash_code();
		this_type_info._array.of = TYPEINFO(f32) ? TYPEINFO(f32)->hash : 0;
		this_type_info._array.length = 4;
		type_table.insert_if_unique(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(v4);
		this_type_info.name = "v4"_;
		this_type_info.hash = (type_id)typeid(v4).hash_code();
		this_type_info._struct.member_count = 10;
		this_type_info._struct.member_types[0] = TYPEINFO(f32) ? TYPEINFO(f32)->hash : 0;
		this_type_info._struct.member_names[0] = "x"_;
		this_type_info._struct.member_offsets[0] = offsetof(v4,x);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(f32) ? TYPEINFO(f32)->hash : 0;
		this_type_info._struct.member_names[1] = "y"_;
		this_type_info._struct.member_offsets[1] = offsetof(v4,y);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(f32) ? TYPEINFO(f32)->hash : 0;
		this_type_info._struct.member_names[2] = "z"_;
		this_type_info._struct.member_offsets[2] = offsetof(v4,z);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(f32) ? TYPEINFO(f32)->hash : 0;
		this_type_info._struct.member_names[3] = "w"_;
		this_type_info._struct.member_offsets[3] = offsetof(v4,w);
		this_type_info._struct.member_circular[3] = 0;
		this_type_info._struct.member_types[4] = TYPEINFO(v2) ? TYPEINFO(v2)->hash : 0;
		this_type_info._struct.member_names[4] = "xy"_;
		this_type_info._struct.member_offsets[4] = offsetof(v4,xy);
		this_type_info._struct.member_circular[4] = 0;
		this_type_info._struct.member_types[5] = TYPEINFO(v2) ? TYPEINFO(v2)->hash : 0;
		this_type_info._struct.member_names[5] = "zw"_;
		this_type_info._struct.member_offsets[5] = offsetof(v4,zw);
		this_type_info._struct.member_circular[5] = 0;
		this_type_info._struct.member_types[6] = TYPEINFO(v3) ? TYPEINFO(v3)->hash : 0;
		this_type_info._struct.member_names[6] = "xyz"_;
		this_type_info._struct.member_offsets[6] = offsetof(v4,xyz);
		this_type_info._struct.member_circular[6] = 0;
		this_type_info._struct.member_types[7] = TYPEINFO(f32) ? TYPEINFO(f32)->hash : 0;
		this_type_info._struct.member_names[7] = "w"_;
		this_type_info._struct.member_offsets[7] = offsetof(v4,w);
		this_type_info._struct.member_circular[7] = 0;
		this_type_info._struct.member_types[8] = TYPEINFO(f32 [4]) ? TYPEINFO(f32 [4])->hash : 0;
		this_type_info._struct.member_names[8] = "a"_;
		this_type_info._struct.member_offsets[8] = offsetof(v4,a);
		this_type_info._struct.member_circular[8] = 0;
		this_type_info._struct.member_types[9] = TYPEINFO(__m128) ? TYPEINFO(__m128)->hash : 0;
		this_type_info._struct.member_names[9] = "packed"_;
		this_type_info._struct.member_offsets[9] = offsetof(v4,packed);
		this_type_info._struct.member_circular[9] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_array;
		this_type_info.size = sizeof(u8 [4]);
		this_type_info.name = STRING(u8 [4]);
		this_type_info.hash = (type_id)typeid(u8 [4]).hash_code();
		this_type_info._array.of = TYPEINFO(u8) ? TYPEINFO(u8)->hash : 0;
		this_type_info._array.length = 4;
		type_table.insert_if_unique(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(bv4);
		this_type_info.name = "bv4"_;
		this_type_info.hash = (type_id)typeid(bv4).hash_code();
		this_type_info._struct.member_count = 5;
		this_type_info._struct.member_types[0] = TYPEINFO(u8) ? TYPEINFO(u8)->hash : 0;
		this_type_info._struct.member_names[0] = "x"_;
		this_type_info._struct.member_offsets[0] = offsetof(bv4,x);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(u8) ? TYPEINFO(u8)->hash : 0;
		this_type_info._struct.member_names[1] = "y"_;
		this_type_info._struct.member_offsets[1] = offsetof(bv4,y);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(u8) ? TYPEINFO(u8)->hash : 0;
		this_type_info._struct.member_names[2] = "z"_;
		this_type_info._struct.member_offsets[2] = offsetof(bv4,z);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(u8) ? TYPEINFO(u8)->hash : 0;
		this_type_info._struct.member_names[3] = "w"_;
		this_type_info._struct.member_offsets[3] = offsetof(bv4,w);
		this_type_info._struct.member_circular[3] = 0;
		this_type_info._struct.member_types[4] = TYPEINFO(u8 [4]) ? TYPEINFO(u8 [4])->hash : 0;
		this_type_info._struct.member_names[4] = "a"_;
		this_type_info._struct.member_offsets[4] = offsetof(bv4,a);
		this_type_info._struct.member_circular[4] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_array;
		this_type_info.size = sizeof(u32 [4]);
		this_type_info.name = STRING(u32 [4]);
		this_type_info.hash = (type_id)typeid(u32 [4]).hash_code();
		this_type_info._array.of = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._array.length = 4;
		type_table.insert_if_unique(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(ur2);
		this_type_info.name = "ur2"_;
		this_type_info.hash = (type_id)typeid(ur2).hash_code();
		this_type_info._struct.member_count = 7;
		this_type_info._struct.member_types[0] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[0] = "x"_;
		this_type_info._struct.member_offsets[0] = offsetof(ur2,x);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[1] = "y"_;
		this_type_info._struct.member_offsets[1] = offsetof(ur2,y);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[2] = "w"_;
		this_type_info._struct.member_offsets[2] = offsetof(ur2,w);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[3] = "h"_;
		this_type_info._struct.member_offsets[3] = offsetof(ur2,h);
		this_type_info._struct.member_circular[3] = 0;
		this_type_info._struct.member_types[4] = TYPEINFO(uv2) ? TYPEINFO(uv2)->hash : 0;
		this_type_info._struct.member_names[4] = "xy"_;
		this_type_info._struct.member_offsets[4] = offsetof(ur2,xy);
		this_type_info._struct.member_circular[4] = 0;
		this_type_info._struct.member_types[5] = TYPEINFO(uv2) ? TYPEINFO(uv2)->hash : 0;
		this_type_info._struct.member_names[5] = "wh"_;
		this_type_info._struct.member_offsets[5] = offsetof(ur2,wh);
		this_type_info._struct.member_circular[5] = 0;
		this_type_info._struct.member_types[6] = TYPEINFO(u32 [4]) ? TYPEINFO(u32 [4])->hash : 0;
		this_type_info._struct.member_names[6] = "a"_;
		this_type_info._struct.member_offsets[6] = offsetof(ur2,a);
		this_type_info._struct.member_circular[6] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_array;
		this_type_info.size = sizeof(f32 [4]);
		this_type_info.name = STRING(f32 [4]);
		this_type_info.hash = (type_id)typeid(f32 [4]).hash_code();
		this_type_info._array.of = TYPEINFO(f32) ? TYPEINFO(f32)->hash : 0;
		this_type_info._array.length = 4;
		type_table.insert_if_unique(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(r2);
		this_type_info.name = "r2"_;
		this_type_info.hash = (type_id)typeid(r2).hash_code();
		this_type_info._struct.member_count = 9;
		this_type_info._struct.member_types[0] = TYPEINFO(f32) ? TYPEINFO(f32)->hash : 0;
		this_type_info._struct.member_names[0] = "x"_;
		this_type_info._struct.member_offsets[0] = offsetof(r2,x);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(f32) ? TYPEINFO(f32)->hash : 0;
		this_type_info._struct.member_names[1] = "y"_;
		this_type_info._struct.member_offsets[1] = offsetof(r2,y);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(f32) ? TYPEINFO(f32)->hash : 0;
		this_type_info._struct.member_names[2] = "w"_;
		this_type_info._struct.member_offsets[2] = offsetof(r2,w);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(f32) ? TYPEINFO(f32)->hash : 0;
		this_type_info._struct.member_names[3] = "h"_;
		this_type_info._struct.member_offsets[3] = offsetof(r2,h);
		this_type_info._struct.member_circular[3] = 0;
		this_type_info._struct.member_types[4] = TYPEINFO(v2) ? TYPEINFO(v2)->hash : 0;
		this_type_info._struct.member_names[4] = "xy"_;
		this_type_info._struct.member_offsets[4] = offsetof(r2,xy);
		this_type_info._struct.member_circular[4] = 0;
		this_type_info._struct.member_types[5] = TYPEINFO(v2) ? TYPEINFO(v2)->hash : 0;
		this_type_info._struct.member_names[5] = "wh"_;
		this_type_info._struct.member_offsets[5] = offsetof(r2,wh);
		this_type_info._struct.member_circular[5] = 0;
		this_type_info._struct.member_types[6] = TYPEINFO(v4) ? TYPEINFO(v4)->hash : 0;
		this_type_info._struct.member_names[6] = "vec"_;
		this_type_info._struct.member_offsets[6] = offsetof(r2,vec);
		this_type_info._struct.member_circular[6] = 0;
		this_type_info._struct.member_types[7] = TYPEINFO(f32 [4]) ? TYPEINFO(f32 [4])->hash : 0;
		this_type_info._struct.member_names[7] = "a"_;
		this_type_info._struct.member_offsets[7] = offsetof(r2,a);
		this_type_info._struct.member_circular[7] = 0;
		this_type_info._struct.member_types[8] = TYPEINFO(__m128) ? TYPEINFO(__m128)->hash : 0;
		this_type_info._struct.member_names[8] = "packed"_;
		this_type_info._struct.member_offsets[8] = offsetof(r2,packed);
		this_type_info._struct.member_circular[8] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_array;
		this_type_info.size = sizeof(f32 [16]);
		this_type_info.name = STRING(f32 [16]);
		this_type_info.hash = (type_id)typeid(f32 [16]).hash_code();
		this_type_info._array.of = TYPEINFO(f32) ? TYPEINFO(f32)->hash : 0;
		this_type_info._array.length = 16;
		type_table.insert_if_unique(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_array;
		this_type_info.size = sizeof(v4 [4]);
		this_type_info.name = STRING(v4 [4]);
		this_type_info.hash = (type_id)typeid(v4 [4]).hash_code();
		this_type_info._array.of = TYPEINFO(v4) ? TYPEINFO(v4)->hash : 0;
		this_type_info._array.length = 4;
		type_table.insert_if_unique(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_array;
		this_type_info.size = sizeof(__m128 [4]);
		this_type_info.name = STRING(__m128 [4]);
		this_type_info.hash = (type_id)typeid(__m128 [4]).hash_code();
		this_type_info._array.of = TYPEINFO(__m128) ? TYPEINFO(__m128)->hash : 0;
		this_type_info._array.length = 4;
		type_table.insert_if_unique(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(m4);
		this_type_info.name = "m4"_;
		this_type_info.hash = (type_id)typeid(m4).hash_code();
		this_type_info._struct.member_count = 3;
		this_type_info._struct.member_types[0] = TYPEINFO(f32 [16]) ? TYPEINFO(f32 [16])->hash : 0;
		this_type_info._struct.member_names[0] = "a"_;
		this_type_info._struct.member_offsets[0] = offsetof(m4,a);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(v4 [4]) ? TYPEINFO(v4 [4])->hash : 0;
		this_type_info._struct.member_names[1] = "columns"_;
		this_type_info._struct.member_offsets[1] = offsetof(m4,columns);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(__m128 [4]) ? TYPEINFO(__m128 [4])->hash : 0;
		this_type_info._struct.member_names[2] = "packed"_;
		this_type_info._struct.member_offsets[2] = offsetof(m4,packed);
		this_type_info._struct.member_circular[2] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(colorf);
		this_type_info.name = "colorf"_;
		this_type_info.hash = (type_id)typeid(colorf).hash_code();
		this_type_info._struct.member_count = 4;
		this_type_info._struct.member_types[0] = TYPEINFO(f32) ? TYPEINFO(f32)->hash : 0;
		this_type_info._struct.member_names[0] = "r"_;
		this_type_info._struct.member_offsets[0] = offsetof(colorf,r);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(f32) ? TYPEINFO(f32)->hash : 0;
		this_type_info._struct.member_names[1] = "g"_;
		this_type_info._struct.member_offsets[1] = offsetof(colorf,g);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(f32) ? TYPEINFO(f32)->hash : 0;
		this_type_info._struct.member_names[2] = "b"_;
		this_type_info._struct.member_offsets[2] = offsetof(colorf,b);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(f32) ? TYPEINFO(f32)->hash : 0;
		this_type_info._struct.member_names[3] = "a"_;
		this_type_info._struct.member_offsets[3] = offsetof(colorf,a);
		this_type_info._struct.member_circular[3] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(color3);
		this_type_info.name = "color3"_;
		this_type_info.hash = (type_id)typeid(color3).hash_code();
		this_type_info._struct.member_count = 3;
		this_type_info._struct.member_types[0] = TYPEINFO(u8) ? TYPEINFO(u8)->hash : 0;
		this_type_info._struct.member_names[0] = "r"_;
		this_type_info._struct.member_offsets[0] = offsetof(color3,r);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(u8) ? TYPEINFO(u8)->hash : 0;
		this_type_info._struct.member_names[1] = "g"_;
		this_type_info._struct.member_offsets[1] = offsetof(color3,g);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(u8) ? TYPEINFO(u8)->hash : 0;
		this_type_info._struct.member_names[2] = "b"_;
		this_type_info._struct.member_offsets[2] = offsetof(color3,b);
		this_type_info._struct.member_circular[2] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(color);
		this_type_info.name = "color"_;
		this_type_info.hash = (type_id)typeid(color).hash_code();
		this_type_info._struct.member_count = 4;
		this_type_info._struct.member_types[0] = TYPEINFO(u8) ? TYPEINFO(u8)->hash : 0;
		this_type_info._struct.member_names[0] = "r"_;
		this_type_info._struct.member_offsets[0] = offsetof(color,r);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(u8) ? TYPEINFO(u8)->hash : 0;
		this_type_info._struct.member_names[1] = "g"_;
		this_type_info._struct.member_offsets[1] = offsetof(color,g);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(u8) ? TYPEINFO(u8)->hash : 0;
		this_type_info._struct.member_names[2] = "b"_;
		this_type_info._struct.member_offsets[2] = offsetof(color,b);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(u8) ? TYPEINFO(u8)->hash : 0;
		this_type_info._struct.member_names[3] = "a"_;
		this_type_info._struct.member_offsets[3] = offsetof(color,a);
		this_type_info._struct.member_circular[3] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_array;
		this_type_info.size = sizeof(char [64]);
		this_type_info.name = STRING(char [64]);
		this_type_info.hash = (type_id)typeid(char [64]).hash_code();
		this_type_info._array.of = TYPEINFO(char) ? TYPEINFO(char)->hash : 0;
		this_type_info._array.length = 64;
		type_table.insert_if_unique(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_array;
		this_type_info.size = sizeof(char [128]);
		this_type_info.name = STRING(char [128]);
		this_type_info.hash = (type_id)typeid(char [128]).hash_code();
		this_type_info._array.of = TYPEINFO(char) ? TYPEINFO(char)->hash : 0;
		this_type_info._array.length = 128;
		type_table.insert_if_unique(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(code_context);
		this_type_info.name = "code_context"_;
		this_type_info.hash = (type_id)typeid(code_context).hash_code();
		this_type_info._struct.member_count = 3;
		this_type_info._struct.member_types[0] = TYPEINFO(char [64]) ? TYPEINFO(char [64])->hash : 0;
		this_type_info._struct.member_names[0] = "c_file"_;
		this_type_info._struct.member_offsets[0] = offsetof(code_context,c_file);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(char [128]) ? TYPEINFO(char [128])->hash : 0;
		this_type_info._struct.member_names[1] = "c_function"_;
		this_type_info._struct.member_offsets[1] = offsetof(code_context,c_function);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[2] = "line"_;
		this_type_info._struct.member_offsets[2] = offsetof(code_context,line);
		this_type_info._struct.member_circular[2] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(tagRECT);
		this_type_info.name = "tagRECT"_;
		this_type_info.hash = (type_id)typeid(tagRECT).hash_code();
		this_type_info._struct.member_count = 4;
		this_type_info._struct.member_types[0] = TYPEINFO(LONG) ? TYPEINFO(LONG)->hash : 0;
		this_type_info._struct.member_names[0] = "left"_;
		this_type_info._struct.member_offsets[0] = offsetof(tagRECT,left);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(LONG) ? TYPEINFO(LONG)->hash : 0;
		this_type_info._struct.member_names[1] = "top"_;
		this_type_info._struct.member_offsets[1] = offsetof(tagRECT,top);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(LONG) ? TYPEINFO(LONG)->hash : 0;
		this_type_info._struct.member_names[2] = "right"_;
		this_type_info._struct.member_offsets[2] = offsetof(tagRECT,right);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(LONG) ? TYPEINFO(LONG)->hash : 0;
		this_type_info._struct.member_names[3] = "bottom"_;
		this_type_info._struct.member_offsets[3] = offsetof(tagRECT,bottom);
		this_type_info._struct.member_circular[3] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(tagRECTL);
		this_type_info.name = "tagRECTL"_;
		this_type_info.hash = (type_id)typeid(tagRECTL).hash_code();
		this_type_info._struct.member_count = 4;
		this_type_info._struct.member_types[0] = TYPEINFO(LONG) ? TYPEINFO(LONG)->hash : 0;
		this_type_info._struct.member_names[0] = "left"_;
		this_type_info._struct.member_offsets[0] = offsetof(tagRECTL,left);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(LONG) ? TYPEINFO(LONG)->hash : 0;
		this_type_info._struct.member_names[1] = "top"_;
		this_type_info._struct.member_offsets[1] = offsetof(tagRECTL,top);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(LONG) ? TYPEINFO(LONG)->hash : 0;
		this_type_info._struct.member_names[2] = "right"_;
		this_type_info._struct.member_offsets[2] = offsetof(tagRECTL,right);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(LONG) ? TYPEINFO(LONG)->hash : 0;
		this_type_info._struct.member_names[3] = "bottom"_;
		this_type_info._struct.member_offsets[3] = offsetof(tagRECTL,bottom);
		this_type_info._struct.member_circular[3] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(tagPOINT);
		this_type_info.name = "tagPOINT"_;
		this_type_info.hash = (type_id)typeid(tagPOINT).hash_code();
		this_type_info._struct.member_count = 2;
		this_type_info._struct.member_types[0] = TYPEINFO(LONG) ? TYPEINFO(LONG)->hash : 0;
		this_type_info._struct.member_names[0] = "x"_;
		this_type_info._struct.member_offsets[0] = offsetof(tagPOINT,x);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(LONG) ? TYPEINFO(LONG)->hash : 0;
		this_type_info._struct.member_names[1] = "y"_;
		this_type_info._struct.member_offsets[1] = offsetof(tagPOINT,y);
		this_type_info._struct.member_circular[1] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(tagSIZE);
		this_type_info.name = "tagSIZE"_;
		this_type_info.hash = (type_id)typeid(tagSIZE).hash_code();
		this_type_info._struct.member_count = 2;
		this_type_info._struct.member_types[0] = TYPEINFO(LONG) ? TYPEINFO(LONG)->hash : 0;
		this_type_info._struct.member_names[0] = "cx"_;
		this_type_info._struct.member_offsets[0] = offsetof(tagSIZE,cx);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(LONG) ? TYPEINFO(LONG)->hash : 0;
		this_type_info._struct.member_names[1] = "cy"_;
		this_type_info._struct.member_offsets[1] = offsetof(tagSIZE,cy);
		this_type_info._struct.member_circular[1] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(tagPOINTS);
		this_type_info.name = "tagPOINTS"_;
		this_type_info.hash = (type_id)typeid(tagPOINTS).hash_code();
		this_type_info._struct.member_count = 2;
		this_type_info._struct.member_types[0] = TYPEINFO(SHORT) ? TYPEINFO(SHORT)->hash : 0;
		this_type_info._struct.member_names[0] = "x"_;
		this_type_info._struct.member_offsets[0] = offsetof(tagPOINTS,x);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(SHORT) ? TYPEINFO(SHORT)->hash : 0;
		this_type_info._struct.member_names[1] = "y"_;
		this_type_info._struct.member_offsets[1] = offsetof(tagPOINTS,y);
		this_type_info._struct.member_circular[1] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(_SECURITY_ATTRIBUTES);
		this_type_info.name = "_SECURITY_ATTRIBUTES"_;
		this_type_info.hash = (type_id)typeid(_SECURITY_ATTRIBUTES).hash_code();
		this_type_info._struct.member_count = 3;
		this_type_info._struct.member_types[0] = TYPEINFO(DWORD) ? TYPEINFO(DWORD)->hash : 0;
		this_type_info._struct.member_names[0] = "nLength"_;
		this_type_info._struct.member_offsets[0] = offsetof(_SECURITY_ATTRIBUTES,nLength);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(HANDLE) ? TYPEINFO(HANDLE)->hash : 0;
		this_type_info._struct.member_names[1] = "lpSecurityDescriptor"_;
		this_type_info._struct.member_offsets[1] = offsetof(_SECURITY_ATTRIBUTES,lpSecurityDescriptor);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(BOOL) ? TYPEINFO(BOOL)->hash : 0;
		this_type_info._struct.member_names[2] = "bInheritHandle"_;
		this_type_info._struct.member_offsets[2] = offsetof(_SECURITY_ATTRIBUTES,bInheritHandle);
		this_type_info._struct.member_circular[2] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(_CACHE_DESCRIPTOR);
		this_type_info.name = "_CACHE_DESCRIPTOR"_;
		this_type_info.hash = (type_id)typeid(_CACHE_DESCRIPTOR).hash_code();
		this_type_info._struct.member_count = 5;
		this_type_info._struct.member_types[0] = TYPEINFO(BYTE) ? TYPEINFO(BYTE)->hash : 0;
		this_type_info._struct.member_names[0] = "Level"_;
		this_type_info._struct.member_offsets[0] = offsetof(_CACHE_DESCRIPTOR,Level);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(BYTE) ? TYPEINFO(BYTE)->hash : 0;
		this_type_info._struct.member_names[1] = "Associativity"_;
		this_type_info._struct.member_offsets[1] = offsetof(_CACHE_DESCRIPTOR,Associativity);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(WORD) ? TYPEINFO(WORD)->hash : 0;
		this_type_info._struct.member_names[2] = "LineSize"_;
		this_type_info._struct.member_offsets[2] = offsetof(_CACHE_DESCRIPTOR,LineSize);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(DWORD) ? TYPEINFO(DWORD)->hash : 0;
		this_type_info._struct.member_names[3] = "Size"_;
		this_type_info._struct.member_offsets[3] = offsetof(_CACHE_DESCRIPTOR,Size);
		this_type_info._struct.member_circular[3] = 0;
		this_type_info._struct.member_types[4] = TYPEINFO(PROCESSOR_CACHE_TYPE) ? TYPEINFO(PROCESSOR_CACHE_TYPE)->hash : 0;
		this_type_info._struct.member_names[4] = "Type"_;
		this_type_info._struct.member_offsets[4] = offsetof(_CACHE_DESCRIPTOR,Type);
		this_type_info._struct.member_circular[4] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(_SYSTEM_LOGICAL_PROCESSOR_INFORMATION);
		this_type_info.name = "_SYSTEM_LOGICAL_PROCESSOR_INFORMATION"_;
		this_type_info.hash = (type_id)typeid(_SYSTEM_LOGICAL_PROCESSOR_INFORMATION).hash_code();
		this_type_info._struct.member_count = 6;
		this_type_info._struct.member_types[0] = TYPEINFO(ULONG_PTR) ? TYPEINFO(ULONG_PTR)->hash : 0;
		this_type_info._struct.member_names[0] = "ProcessorMask"_;
		this_type_info._struct.member_offsets[0] = offsetof(_SYSTEM_LOGICAL_PROCESSOR_INFORMATION,ProcessorMask);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(LOGICAL_PROCESSOR_RELATIONSHIP) ? TYPEINFO(LOGICAL_PROCESSOR_RELATIONSHIP)->hash : 0;
		this_type_info._struct.member_names[1] = "Relationship"_;
		this_type_info._struct.member_offsets[1] = offsetof(_SYSTEM_LOGICAL_PROCESSOR_INFORMATION,Relationship);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(BYTE) ? TYPEINFO(BYTE)->hash : 0;
		this_type_info._struct.member_names[2] = "Flags"_;
		this_type_info._struct.member_offsets[2] = offsetof(_SYSTEM_LOGICAL_PROCESSOR_INFORMATION,Flags);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(DWORD) ? TYPEINFO(DWORD)->hash : 0;
		this_type_info._struct.member_names[3] = "NodeNumber"_;
		this_type_info._struct.member_offsets[3] = offsetof(_SYSTEM_LOGICAL_PROCESSOR_INFORMATION,NodeNumber);
		this_type_info._struct.member_circular[3] = 0;
		this_type_info._struct.member_types[4] = TYPEINFO(CACHE_DESCRIPTOR) ? TYPEINFO(CACHE_DESCRIPTOR)->hash : 0;
		this_type_info._struct.member_names[4] = "Cache"_;
		this_type_info._struct.member_offsets[4] = offsetof(_SYSTEM_LOGICAL_PROCESSOR_INFORMATION,Cache);
		this_type_info._struct.member_circular[4] = 0;
		this_type_info._struct.member_types[5] = TYPEINFO(ULONGLONG [2]) ? TYPEINFO(ULONGLONG [2])->hash : 0;
		this_type_info._struct.member_names[5] = "Reserved"_;
		this_type_info._struct.member_offsets[5] = offsetof(_SYSTEM_LOGICAL_PROCESSOR_INFORMATION,Reserved);
		this_type_info._struct.member_circular[5] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(_MEMORY_BASIC_INFORMATION);
		this_type_info.name = "_MEMORY_BASIC_INFORMATION"_;
		this_type_info.hash = (type_id)typeid(_MEMORY_BASIC_INFORMATION).hash_code();
		this_type_info._struct.member_count = 7;
		this_type_info._struct.member_types[0] = TYPEINFO(void *) ? TYPEINFO(void *)->hash : 0;
		this_type_info._struct.member_names[0] = "BaseAddress"_;
		this_type_info._struct.member_offsets[0] = offsetof(_MEMORY_BASIC_INFORMATION,BaseAddress);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(void *) ? TYPEINFO(void *)->hash : 0;
		this_type_info._struct.member_names[1] = "AllocationBase"_;
		this_type_info._struct.member_offsets[1] = offsetof(_MEMORY_BASIC_INFORMATION,AllocationBase);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(DWORD) ? TYPEINFO(DWORD)->hash : 0;
		this_type_info._struct.member_names[2] = "AllocationProtect"_;
		this_type_info._struct.member_offsets[2] = offsetof(_MEMORY_BASIC_INFORMATION,AllocationProtect);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(size_t) ? TYPEINFO(size_t)->hash : 0;
		this_type_info._struct.member_names[3] = "RegionSize"_;
		this_type_info._struct.member_offsets[3] = offsetof(_MEMORY_BASIC_INFORMATION,RegionSize);
		this_type_info._struct.member_circular[3] = 0;
		this_type_info._struct.member_types[4] = TYPEINFO(DWORD) ? TYPEINFO(DWORD)->hash : 0;
		this_type_info._struct.member_names[4] = "State"_;
		this_type_info._struct.member_offsets[4] = offsetof(_MEMORY_BASIC_INFORMATION,State);
		this_type_info._struct.member_circular[4] = 0;
		this_type_info._struct.member_types[5] = TYPEINFO(DWORD) ? TYPEINFO(DWORD)->hash : 0;
		this_type_info._struct.member_names[5] = "Protect"_;
		this_type_info._struct.member_offsets[5] = offsetof(_MEMORY_BASIC_INFORMATION,Protect);
		this_type_info._struct.member_circular[5] = 0;
		this_type_info._struct.member_types[6] = TYPEINFO(DWORD) ? TYPEINFO(DWORD)->hash : 0;
		this_type_info._struct.member_names[6] = "Type"_;
		this_type_info._struct.member_offsets[6] = offsetof(_MEMORY_BASIC_INFORMATION,Type);
		this_type_info._struct.member_circular[6] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(_SYSTEM_INFO);
		this_type_info.name = "_SYSTEM_INFO"_;
		this_type_info.hash = (type_id)typeid(_SYSTEM_INFO).hash_code();
		this_type_info._struct.member_count = 12;
		this_type_info._struct.member_types[0] = TYPEINFO(DWORD) ? TYPEINFO(DWORD)->hash : 0;
		this_type_info._struct.member_names[0] = "dwOemId"_;
		this_type_info._struct.member_offsets[0] = offsetof(_SYSTEM_INFO,dwOemId);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(WORD) ? TYPEINFO(WORD)->hash : 0;
		this_type_info._struct.member_names[1] = "wProcessorArchitecture"_;
		this_type_info._struct.member_offsets[1] = offsetof(_SYSTEM_INFO,wProcessorArchitecture);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(WORD) ? TYPEINFO(WORD)->hash : 0;
		this_type_info._struct.member_names[2] = "wReserved"_;
		this_type_info._struct.member_offsets[2] = offsetof(_SYSTEM_INFO,wReserved);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(DWORD) ? TYPEINFO(DWORD)->hash : 0;
		this_type_info._struct.member_names[3] = "dwPageSize"_;
		this_type_info._struct.member_offsets[3] = offsetof(_SYSTEM_INFO,dwPageSize);
		this_type_info._struct.member_circular[3] = 0;
		this_type_info._struct.member_types[4] = TYPEINFO(void *) ? TYPEINFO(void *)->hash : 0;
		this_type_info._struct.member_names[4] = "lpMinimumApplicationAddress"_;
		this_type_info._struct.member_offsets[4] = offsetof(_SYSTEM_INFO,lpMinimumApplicationAddress);
		this_type_info._struct.member_circular[4] = 0;
		this_type_info._struct.member_types[5] = TYPEINFO(void *) ? TYPEINFO(void *)->hash : 0;
		this_type_info._struct.member_names[5] = "lpMaximumApplicationAddress"_;
		this_type_info._struct.member_offsets[5] = offsetof(_SYSTEM_INFO,lpMaximumApplicationAddress);
		this_type_info._struct.member_circular[5] = 0;
		this_type_info._struct.member_types[6] = TYPEINFO(DWORD_PTR) ? TYPEINFO(DWORD_PTR)->hash : 0;
		this_type_info._struct.member_names[6] = "dwActiveProcessorMask"_;
		this_type_info._struct.member_offsets[6] = offsetof(_SYSTEM_INFO,dwActiveProcessorMask);
		this_type_info._struct.member_circular[6] = 0;
		this_type_info._struct.member_types[7] = TYPEINFO(DWORD) ? TYPEINFO(DWORD)->hash : 0;
		this_type_info._struct.member_names[7] = "dwNumberOfProcessors"_;
		this_type_info._struct.member_offsets[7] = offsetof(_SYSTEM_INFO,dwNumberOfProcessors);
		this_type_info._struct.member_circular[7] = 0;
		this_type_info._struct.member_types[8] = TYPEINFO(DWORD) ? TYPEINFO(DWORD)->hash : 0;
		this_type_info._struct.member_names[8] = "dwProcessorType"_;
		this_type_info._struct.member_offsets[8] = offsetof(_SYSTEM_INFO,dwProcessorType);
		this_type_info._struct.member_circular[8] = 0;
		this_type_info._struct.member_types[9] = TYPEINFO(DWORD) ? TYPEINFO(DWORD)->hash : 0;
		this_type_info._struct.member_names[9] = "dwAllocationGranularity"_;
		this_type_info._struct.member_offsets[9] = offsetof(_SYSTEM_INFO,dwAllocationGranularity);
		this_type_info._struct.member_circular[9] = 0;
		this_type_info._struct.member_types[10] = TYPEINFO(WORD) ? TYPEINFO(WORD)->hash : 0;
		this_type_info._struct.member_names[10] = "wProcessorLevel"_;
		this_type_info._struct.member_offsets[10] = offsetof(_SYSTEM_INFO,wProcessorLevel);
		this_type_info._struct.member_circular[10] = 0;
		this_type_info._struct.member_types[11] = TYPEINFO(WORD) ? TYPEINFO(WORD)->hash : 0;
		this_type_info._struct.member_names[11] = "wProcessorRevision"_;
		this_type_info._struct.member_offsets[11] = offsetof(_SYSTEM_INFO,wProcessorRevision);
		this_type_info._struct.member_circular[11] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(_LARGE_INTEGER);
		this_type_info.name = "_LARGE_INTEGER"_;
		this_type_info.hash = (type_id)typeid(_LARGE_INTEGER).hash_code();
		this_type_info._struct.member_count = 3;
		this_type_info._struct.member_types[0] = TYPEINFO(DWORD) ? TYPEINFO(DWORD)->hash : 0;
		this_type_info._struct.member_names[0] = "LowPart"_;
		this_type_info._struct.member_offsets[0] = offsetof(_LARGE_INTEGER,LowPart);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(LONG) ? TYPEINFO(LONG)->hash : 0;
		this_type_info._struct.member_names[1] = "HighPart"_;
		this_type_info._struct.member_offsets[1] = offsetof(_LARGE_INTEGER,HighPart);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(LONGLONG) ? TYPEINFO(LONGLONG)->hash : 0;
		this_type_info._struct.member_names[2] = "QuadPart"_;
		this_type_info._struct.member_offsets[2] = offsetof(_LARGE_INTEGER,QuadPart);
		this_type_info._struct.member_circular[2] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(_ULARGE_INTEGER);
		this_type_info.name = "_ULARGE_INTEGER"_;
		this_type_info.hash = (type_id)typeid(_ULARGE_INTEGER).hash_code();
		this_type_info._struct.member_count = 3;
		this_type_info._struct.member_types[0] = TYPEINFO(DWORD) ? TYPEINFO(DWORD)->hash : 0;
		this_type_info._struct.member_names[0] = "LowPart"_;
		this_type_info._struct.member_offsets[0] = offsetof(_ULARGE_INTEGER,LowPart);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(DWORD) ? TYPEINFO(DWORD)->hash : 0;
		this_type_info._struct.member_names[1] = "HighPart"_;
		this_type_info._struct.member_offsets[1] = offsetof(_ULARGE_INTEGER,HighPart);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(ULONGLONG) ? TYPEINFO(ULONGLONG)->hash : 0;
		this_type_info._struct.member_names[2] = "QuadPart"_;
		this_type_info._struct.member_offsets[2] = offsetof(_ULARGE_INTEGER,QuadPart);
		this_type_info._struct.member_circular[2] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(_OVERLAPPED);
		this_type_info.name = "_OVERLAPPED"_;
		this_type_info.hash = (type_id)typeid(_OVERLAPPED).hash_code();
		this_type_info._struct.member_count = 6;
		this_type_info._struct.member_types[0] = TYPEINFO(ULONG_PTR) ? TYPEINFO(ULONG_PTR)->hash : 0;
		this_type_info._struct.member_names[0] = "Internal"_;
		this_type_info._struct.member_offsets[0] = offsetof(_OVERLAPPED,Internal);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(ULONG_PTR) ? TYPEINFO(ULONG_PTR)->hash : 0;
		this_type_info._struct.member_names[1] = "InternalHigh"_;
		this_type_info._struct.member_offsets[1] = offsetof(_OVERLAPPED,InternalHigh);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(DWORD) ? TYPEINFO(DWORD)->hash : 0;
		this_type_info._struct.member_names[2] = "Offset"_;
		this_type_info._struct.member_offsets[2] = offsetof(_OVERLAPPED,Offset);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(DWORD) ? TYPEINFO(DWORD)->hash : 0;
		this_type_info._struct.member_names[3] = "OffsetHigh"_;
		this_type_info._struct.member_offsets[3] = offsetof(_OVERLAPPED,OffsetHigh);
		this_type_info._struct.member_circular[3] = 0;
		this_type_info._struct.member_types[4] = TYPEINFO(void *) ? TYPEINFO(void *)->hash : 0;
		this_type_info._struct.member_names[4] = "Pointer"_;
		this_type_info._struct.member_offsets[4] = offsetof(_OVERLAPPED,Pointer);
		this_type_info._struct.member_circular[4] = 0;
		this_type_info._struct.member_types[5] = TYPEINFO(HANDLE) ? TYPEINFO(HANDLE)->hash : 0;
		this_type_info._struct.member_names[5] = "hEvent"_;
		this_type_info._struct.member_offsets[5] = offsetof(_OVERLAPPED,hEvent);
		this_type_info._struct.member_circular[5] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(_FILETIME);
		this_type_info.name = "_FILETIME"_;
		this_type_info.hash = (type_id)typeid(_FILETIME).hash_code();
		this_type_info._struct.member_count = 2;
		this_type_info._struct.member_types[0] = TYPEINFO(DWORD) ? TYPEINFO(DWORD)->hash : 0;
		this_type_info._struct.member_names[0] = "dwLowDateTime"_;
		this_type_info._struct.member_offsets[0] = offsetof(_FILETIME,dwLowDateTime);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(DWORD) ? TYPEINFO(DWORD)->hash : 0;
		this_type_info._struct.member_names[1] = "dwHighDateTime"_;
		this_type_info._struct.member_offsets[1] = offsetof(_FILETIME,dwHighDateTime);
		this_type_info._struct.member_circular[1] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(_WIN32_FILE_ATTRIBUTE_DATA);
		this_type_info.name = "_WIN32_FILE_ATTRIBUTE_DATA"_;
		this_type_info.hash = (type_id)typeid(_WIN32_FILE_ATTRIBUTE_DATA).hash_code();
		this_type_info._struct.member_count = 6;
		this_type_info._struct.member_types[0] = TYPEINFO(DWORD) ? TYPEINFO(DWORD)->hash : 0;
		this_type_info._struct.member_names[0] = "dwFileAttributes"_;
		this_type_info._struct.member_offsets[0] = offsetof(_WIN32_FILE_ATTRIBUTE_DATA,dwFileAttributes);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(FILETIME) ? TYPEINFO(FILETIME)->hash : 0;
		this_type_info._struct.member_names[1] = "ftCreationTime"_;
		this_type_info._struct.member_offsets[1] = offsetof(_WIN32_FILE_ATTRIBUTE_DATA,ftCreationTime);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(FILETIME) ? TYPEINFO(FILETIME)->hash : 0;
		this_type_info._struct.member_names[2] = "ftLastAccessTime"_;
		this_type_info._struct.member_offsets[2] = offsetof(_WIN32_FILE_ATTRIBUTE_DATA,ftLastAccessTime);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(FILETIME) ? TYPEINFO(FILETIME)->hash : 0;
		this_type_info._struct.member_names[3] = "ftLastWriteTime"_;
		this_type_info._struct.member_offsets[3] = offsetof(_WIN32_FILE_ATTRIBUTE_DATA,ftLastWriteTime);
		this_type_info._struct.member_circular[3] = 0;
		this_type_info._struct.member_types[4] = TYPEINFO(DWORD) ? TYPEINFO(DWORD)->hash : 0;
		this_type_info._struct.member_names[4] = "nFileSizeHigh"_;
		this_type_info._struct.member_offsets[4] = offsetof(_WIN32_FILE_ATTRIBUTE_DATA,nFileSizeHigh);
		this_type_info._struct.member_circular[4] = 0;
		this_type_info._struct.member_types[5] = TYPEINFO(DWORD) ? TYPEINFO(DWORD)->hash : 0;
		this_type_info._struct.member_names[5] = "nFileSizeLow"_;
		this_type_info._struct.member_offsets[5] = offsetof(_WIN32_FILE_ATTRIBUTE_DATA,nFileSizeLow);
		this_type_info._struct.member_circular[5] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(tagRAWINPUTHEADER);
		this_type_info.name = "tagRAWINPUTHEADER"_;
		this_type_info.hash = (type_id)typeid(tagRAWINPUTHEADER).hash_code();
		this_type_info._struct.member_count = 4;
		this_type_info._struct.member_types[0] = TYPEINFO(DWORD) ? TYPEINFO(DWORD)->hash : 0;
		this_type_info._struct.member_names[0] = "dwType"_;
		this_type_info._struct.member_offsets[0] = offsetof(tagRAWINPUTHEADER,dwType);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(DWORD) ? TYPEINFO(DWORD)->hash : 0;
		this_type_info._struct.member_names[1] = "dwSize"_;
		this_type_info._struct.member_offsets[1] = offsetof(tagRAWINPUTHEADER,dwSize);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(HANDLE) ? TYPEINFO(HANDLE)->hash : 0;
		this_type_info._struct.member_names[2] = "hDevice"_;
		this_type_info._struct.member_offsets[2] = offsetof(tagRAWINPUTHEADER,hDevice);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(WPARAM) ? TYPEINFO(WPARAM)->hash : 0;
		this_type_info._struct.member_names[3] = "wParam"_;
		this_type_info._struct.member_offsets[3] = offsetof(tagRAWINPUTHEADER,wParam);
		this_type_info._struct.member_circular[3] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(tagRAWINPUTDEVICE);
		this_type_info.name = "tagRAWINPUTDEVICE"_;
		this_type_info.hash = (type_id)typeid(tagRAWINPUTDEVICE).hash_code();
		this_type_info._struct.member_count = 4;
		this_type_info._struct.member_types[0] = TYPEINFO(USHORT) ? TYPEINFO(USHORT)->hash : 0;
		this_type_info._struct.member_names[0] = "usUsagePage"_;
		this_type_info._struct.member_offsets[0] = offsetof(tagRAWINPUTDEVICE,usUsagePage);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(USHORT) ? TYPEINFO(USHORT)->hash : 0;
		this_type_info._struct.member_names[1] = "usUsage"_;
		this_type_info._struct.member_offsets[1] = offsetof(tagRAWINPUTDEVICE,usUsage);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(DWORD) ? TYPEINFO(DWORD)->hash : 0;
		this_type_info._struct.member_names[2] = "dwFlags"_;
		this_type_info._struct.member_offsets[2] = offsetof(tagRAWINPUTDEVICE,dwFlags);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(HWND) ? TYPEINFO(HWND)->hash : 0;
		this_type_info._struct.member_names[3] = "hwndTarget"_;
		this_type_info._struct.member_offsets[3] = offsetof(tagRAWINPUTDEVICE,hwndTarget);
		this_type_info._struct.member_circular[3] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(tagRAWMOUSE);
		this_type_info.name = "tagRAWMOUSE"_;
		this_type_info.hash = (type_id)typeid(tagRAWMOUSE).hash_code();
		this_type_info._struct.member_count = 8;
		this_type_info._struct.member_types[0] = TYPEINFO(WORD) ? TYPEINFO(WORD)->hash : 0;
		this_type_info._struct.member_names[0] = "usFlags"_;
		this_type_info._struct.member_offsets[0] = offsetof(tagRAWMOUSE,usFlags);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(ULONG) ? TYPEINFO(ULONG)->hash : 0;
		this_type_info._struct.member_names[1] = "ulButtons"_;
		this_type_info._struct.member_offsets[1] = offsetof(tagRAWMOUSE,ulButtons);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(WORD) ? TYPEINFO(WORD)->hash : 0;
		this_type_info._struct.member_names[2] = "usButtonFlags"_;
		this_type_info._struct.member_offsets[2] = offsetof(tagRAWMOUSE,usButtonFlags);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(WORD) ? TYPEINFO(WORD)->hash : 0;
		this_type_info._struct.member_names[3] = "usButtonData"_;
		this_type_info._struct.member_offsets[3] = offsetof(tagRAWMOUSE,usButtonData);
		this_type_info._struct.member_circular[3] = 0;
		this_type_info._struct.member_types[4] = TYPEINFO(ULONG) ? TYPEINFO(ULONG)->hash : 0;
		this_type_info._struct.member_names[4] = "ulRawButtons"_;
		this_type_info._struct.member_offsets[4] = offsetof(tagRAWMOUSE,ulRawButtons);
		this_type_info._struct.member_circular[4] = 0;
		this_type_info._struct.member_types[5] = TYPEINFO(LONG) ? TYPEINFO(LONG)->hash : 0;
		this_type_info._struct.member_names[5] = "lLastX"_;
		this_type_info._struct.member_offsets[5] = offsetof(tagRAWMOUSE,lLastX);
		this_type_info._struct.member_circular[5] = 0;
		this_type_info._struct.member_types[6] = TYPEINFO(LONG) ? TYPEINFO(LONG)->hash : 0;
		this_type_info._struct.member_names[6] = "lLastY"_;
		this_type_info._struct.member_offsets[6] = offsetof(tagRAWMOUSE,lLastY);
		this_type_info._struct.member_circular[6] = 0;
		this_type_info._struct.member_types[7] = TYPEINFO(ULONG) ? TYPEINFO(ULONG)->hash : 0;
		this_type_info._struct.member_names[7] = "ulExtraInformation"_;
		this_type_info._struct.member_offsets[7] = offsetof(tagRAWMOUSE,ulExtraInformation);
		this_type_info._struct.member_circular[7] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(tagRAWKEYBOARD);
		this_type_info.name = "tagRAWKEYBOARD"_;
		this_type_info.hash = (type_id)typeid(tagRAWKEYBOARD).hash_code();
		this_type_info._struct.member_count = 6;
		this_type_info._struct.member_types[0] = TYPEINFO(WORD) ? TYPEINFO(WORD)->hash : 0;
		this_type_info._struct.member_names[0] = "MakeCode"_;
		this_type_info._struct.member_offsets[0] = offsetof(tagRAWKEYBOARD,MakeCode);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(WORD) ? TYPEINFO(WORD)->hash : 0;
		this_type_info._struct.member_names[1] = "Flags"_;
		this_type_info._struct.member_offsets[1] = offsetof(tagRAWKEYBOARD,Flags);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(WORD) ? TYPEINFO(WORD)->hash : 0;
		this_type_info._struct.member_names[2] = "Reserved"_;
		this_type_info._struct.member_offsets[2] = offsetof(tagRAWKEYBOARD,Reserved);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(WORD) ? TYPEINFO(WORD)->hash : 0;
		this_type_info._struct.member_names[3] = "VKey"_;
		this_type_info._struct.member_offsets[3] = offsetof(tagRAWKEYBOARD,VKey);
		this_type_info._struct.member_circular[3] = 0;
		this_type_info._struct.member_types[4] = TYPEINFO(UINT) ? TYPEINFO(UINT)->hash : 0;
		this_type_info._struct.member_names[4] = "Message"_;
		this_type_info._struct.member_offsets[4] = offsetof(tagRAWKEYBOARD,Message);
		this_type_info._struct.member_circular[4] = 0;
		this_type_info._struct.member_types[5] = TYPEINFO(ULONG) ? TYPEINFO(ULONG)->hash : 0;
		this_type_info._struct.member_names[5] = "ExtraInformation"_;
		this_type_info._struct.member_offsets[5] = offsetof(tagRAWKEYBOARD,ExtraInformation);
		this_type_info._struct.member_circular[5] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_array;
		this_type_info.size = sizeof(BYTE [1]);
		this_type_info.name = STRING(BYTE [1]);
		this_type_info.hash = (type_id)typeid(BYTE [1]).hash_code();
		this_type_info._array.of = TYPEINFO(BYTE) ? TYPEINFO(BYTE)->hash : 0;
		this_type_info._array.length = 1;
		type_table.insert_if_unique(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(tagRAWHID);
		this_type_info.name = "tagRAWHID"_;
		this_type_info.hash = (type_id)typeid(tagRAWHID).hash_code();
		this_type_info._struct.member_count = 3;
		this_type_info._struct.member_types[0] = TYPEINFO(DWORD) ? TYPEINFO(DWORD)->hash : 0;
		this_type_info._struct.member_names[0] = "dwSizeHid"_;
		this_type_info._struct.member_offsets[0] = offsetof(tagRAWHID,dwSizeHid);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(DWORD) ? TYPEINFO(DWORD)->hash : 0;
		this_type_info._struct.member_names[1] = "dwCount"_;
		this_type_info._struct.member_offsets[1] = offsetof(tagRAWHID,dwCount);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(BYTE [1]) ? TYPEINFO(BYTE [1])->hash : 0;
		this_type_info._struct.member_names[2] = "bRawData"_;
		this_type_info._struct.member_offsets[2] = offsetof(tagRAWHID,bRawData);
		this_type_info._struct.member_circular[2] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(tagRAWINPUT);
		this_type_info.name = "tagRAWINPUT"_;
		this_type_info.hash = (type_id)typeid(tagRAWINPUT).hash_code();
		this_type_info._struct.member_count = 4;
		this_type_info._struct.member_types[0] = TYPEINFO(RAWINPUTHEADER) ? TYPEINFO(RAWINPUTHEADER)->hash : 0;
		this_type_info._struct.member_names[0] = "header"_;
		this_type_info._struct.member_offsets[0] = offsetof(tagRAWINPUT,header);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(RAWMOUSE) ? TYPEINFO(RAWMOUSE)->hash : 0;
		this_type_info._struct.member_names[1] = "mouse"_;
		this_type_info._struct.member_offsets[1] = offsetof(tagRAWINPUT,mouse);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(RAWKEYBOARD) ? TYPEINFO(RAWKEYBOARD)->hash : 0;
		this_type_info._struct.member_names[2] = "keyboard"_;
		this_type_info._struct.member_offsets[2] = offsetof(tagRAWINPUT,keyboard);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(RAWHID) ? TYPEINFO(RAWHID)->hash : 0;
		this_type_info._struct.member_names[3] = "hid"_;
		this_type_info._struct.member_offsets[3] = offsetof(tagRAWINPUT,hid);
		this_type_info._struct.member_circular[3] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(_POINTL);
		this_type_info.name = "_POINTL"_;
		this_type_info.hash = (type_id)typeid(_POINTL).hash_code();
		this_type_info._struct.member_count = 2;
		this_type_info._struct.member_types[0] = TYPEINFO(LONG) ? TYPEINFO(LONG)->hash : 0;
		this_type_info._struct.member_names[0] = "x"_;
		this_type_info._struct.member_offsets[0] = offsetof(_POINTL,x);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(LONG) ? TYPEINFO(LONG)->hash : 0;
		this_type_info._struct.member_names[1] = "y"_;
		this_type_info._struct.member_offsets[1] = offsetof(_POINTL,y);
		this_type_info._struct.member_circular[1] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(tagPIXELFORMATDESCRIPTOR);
		this_type_info.name = "tagPIXELFORMATDESCRIPTOR"_;
		this_type_info.hash = (type_id)typeid(tagPIXELFORMATDESCRIPTOR).hash_code();
		this_type_info._struct.member_count = 26;
		this_type_info._struct.member_types[0] = TYPEINFO(WORD) ? TYPEINFO(WORD)->hash : 0;
		this_type_info._struct.member_names[0] = "nSize"_;
		this_type_info._struct.member_offsets[0] = offsetof(tagPIXELFORMATDESCRIPTOR,nSize);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(WORD) ? TYPEINFO(WORD)->hash : 0;
		this_type_info._struct.member_names[1] = "nVersion"_;
		this_type_info._struct.member_offsets[1] = offsetof(tagPIXELFORMATDESCRIPTOR,nVersion);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(DWORD) ? TYPEINFO(DWORD)->hash : 0;
		this_type_info._struct.member_names[2] = "dwFlags"_;
		this_type_info._struct.member_offsets[2] = offsetof(tagPIXELFORMATDESCRIPTOR,dwFlags);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(BYTE) ? TYPEINFO(BYTE)->hash : 0;
		this_type_info._struct.member_names[3] = "iPixelType"_;
		this_type_info._struct.member_offsets[3] = offsetof(tagPIXELFORMATDESCRIPTOR,iPixelType);
		this_type_info._struct.member_circular[3] = 0;
		this_type_info._struct.member_types[4] = TYPEINFO(BYTE) ? TYPEINFO(BYTE)->hash : 0;
		this_type_info._struct.member_names[4] = "cColorBits"_;
		this_type_info._struct.member_offsets[4] = offsetof(tagPIXELFORMATDESCRIPTOR,cColorBits);
		this_type_info._struct.member_circular[4] = 0;
		this_type_info._struct.member_types[5] = TYPEINFO(BYTE) ? TYPEINFO(BYTE)->hash : 0;
		this_type_info._struct.member_names[5] = "cRedBits"_;
		this_type_info._struct.member_offsets[5] = offsetof(tagPIXELFORMATDESCRIPTOR,cRedBits);
		this_type_info._struct.member_circular[5] = 0;
		this_type_info._struct.member_types[6] = TYPEINFO(BYTE) ? TYPEINFO(BYTE)->hash : 0;
		this_type_info._struct.member_names[6] = "cRedShift"_;
		this_type_info._struct.member_offsets[6] = offsetof(tagPIXELFORMATDESCRIPTOR,cRedShift);
		this_type_info._struct.member_circular[6] = 0;
		this_type_info._struct.member_types[7] = TYPEINFO(BYTE) ? TYPEINFO(BYTE)->hash : 0;
		this_type_info._struct.member_names[7] = "cGreenBits"_;
		this_type_info._struct.member_offsets[7] = offsetof(tagPIXELFORMATDESCRIPTOR,cGreenBits);
		this_type_info._struct.member_circular[7] = 0;
		this_type_info._struct.member_types[8] = TYPEINFO(BYTE) ? TYPEINFO(BYTE)->hash : 0;
		this_type_info._struct.member_names[8] = "cGreenShift"_;
		this_type_info._struct.member_offsets[8] = offsetof(tagPIXELFORMATDESCRIPTOR,cGreenShift);
		this_type_info._struct.member_circular[8] = 0;
		this_type_info._struct.member_types[9] = TYPEINFO(BYTE) ? TYPEINFO(BYTE)->hash : 0;
		this_type_info._struct.member_names[9] = "cBlueBits"_;
		this_type_info._struct.member_offsets[9] = offsetof(tagPIXELFORMATDESCRIPTOR,cBlueBits);
		this_type_info._struct.member_circular[9] = 0;
		this_type_info._struct.member_types[10] = TYPEINFO(BYTE) ? TYPEINFO(BYTE)->hash : 0;
		this_type_info._struct.member_names[10] = "cBlueShift"_;
		this_type_info._struct.member_offsets[10] = offsetof(tagPIXELFORMATDESCRIPTOR,cBlueShift);
		this_type_info._struct.member_circular[10] = 0;
		this_type_info._struct.member_types[11] = TYPEINFO(BYTE) ? TYPEINFO(BYTE)->hash : 0;
		this_type_info._struct.member_names[11] = "cAlphaBits"_;
		this_type_info._struct.member_offsets[11] = offsetof(tagPIXELFORMATDESCRIPTOR,cAlphaBits);
		this_type_info._struct.member_circular[11] = 0;
		this_type_info._struct.member_types[12] = TYPEINFO(BYTE) ? TYPEINFO(BYTE)->hash : 0;
		this_type_info._struct.member_names[12] = "cAlphaShift"_;
		this_type_info._struct.member_offsets[12] = offsetof(tagPIXELFORMATDESCRIPTOR,cAlphaShift);
		this_type_info._struct.member_circular[12] = 0;
		this_type_info._struct.member_types[13] = TYPEINFO(BYTE) ? TYPEINFO(BYTE)->hash : 0;
		this_type_info._struct.member_names[13] = "cAccumBits"_;
		this_type_info._struct.member_offsets[13] = offsetof(tagPIXELFORMATDESCRIPTOR,cAccumBits);
		this_type_info._struct.member_circular[13] = 0;
		this_type_info._struct.member_types[14] = TYPEINFO(BYTE) ? TYPEINFO(BYTE)->hash : 0;
		this_type_info._struct.member_names[14] = "cAccumRedBits"_;
		this_type_info._struct.member_offsets[14] = offsetof(tagPIXELFORMATDESCRIPTOR,cAccumRedBits);
		this_type_info._struct.member_circular[14] = 0;
		this_type_info._struct.member_types[15] = TYPEINFO(BYTE) ? TYPEINFO(BYTE)->hash : 0;
		this_type_info._struct.member_names[15] = "cAccumGreenBits"_;
		this_type_info._struct.member_offsets[15] = offsetof(tagPIXELFORMATDESCRIPTOR,cAccumGreenBits);
		this_type_info._struct.member_circular[15] = 0;
		this_type_info._struct.member_types[16] = TYPEINFO(BYTE) ? TYPEINFO(BYTE)->hash : 0;
		this_type_info._struct.member_names[16] = "cAccumBlueBits"_;
		this_type_info._struct.member_offsets[16] = offsetof(tagPIXELFORMATDESCRIPTOR,cAccumBlueBits);
		this_type_info._struct.member_circular[16] = 0;
		this_type_info._struct.member_types[17] = TYPEINFO(BYTE) ? TYPEINFO(BYTE)->hash : 0;
		this_type_info._struct.member_names[17] = "cAccumAlphaBits"_;
		this_type_info._struct.member_offsets[17] = offsetof(tagPIXELFORMATDESCRIPTOR,cAccumAlphaBits);
		this_type_info._struct.member_circular[17] = 0;
		this_type_info._struct.member_types[18] = TYPEINFO(BYTE) ? TYPEINFO(BYTE)->hash : 0;
		this_type_info._struct.member_names[18] = "cDepthBits"_;
		this_type_info._struct.member_offsets[18] = offsetof(tagPIXELFORMATDESCRIPTOR,cDepthBits);
		this_type_info._struct.member_circular[18] = 0;
		this_type_info._struct.member_types[19] = TYPEINFO(BYTE) ? TYPEINFO(BYTE)->hash : 0;
		this_type_info._struct.member_names[19] = "cStencilBits"_;
		this_type_info._struct.member_offsets[19] = offsetof(tagPIXELFORMATDESCRIPTOR,cStencilBits);
		this_type_info._struct.member_circular[19] = 0;
		this_type_info._struct.member_types[20] = TYPEINFO(BYTE) ? TYPEINFO(BYTE)->hash : 0;
		this_type_info._struct.member_names[20] = "cAuxBuffers"_;
		this_type_info._struct.member_offsets[20] = offsetof(tagPIXELFORMATDESCRIPTOR,cAuxBuffers);
		this_type_info._struct.member_circular[20] = 0;
		this_type_info._struct.member_types[21] = TYPEINFO(BYTE) ? TYPEINFO(BYTE)->hash : 0;
		this_type_info._struct.member_names[21] = "iLayerType"_;
		this_type_info._struct.member_offsets[21] = offsetof(tagPIXELFORMATDESCRIPTOR,iLayerType);
		this_type_info._struct.member_circular[21] = 0;
		this_type_info._struct.member_types[22] = TYPEINFO(BYTE) ? TYPEINFO(BYTE)->hash : 0;
		this_type_info._struct.member_names[22] = "bReserved"_;
		this_type_info._struct.member_offsets[22] = offsetof(tagPIXELFORMATDESCRIPTOR,bReserved);
		this_type_info._struct.member_circular[22] = 0;
		this_type_info._struct.member_types[23] = TYPEINFO(DWORD) ? TYPEINFO(DWORD)->hash : 0;
		this_type_info._struct.member_names[23] = "dwLayerMask"_;
		this_type_info._struct.member_offsets[23] = offsetof(tagPIXELFORMATDESCRIPTOR,dwLayerMask);
		this_type_info._struct.member_circular[23] = 0;
		this_type_info._struct.member_types[24] = TYPEINFO(DWORD) ? TYPEINFO(DWORD)->hash : 0;
		this_type_info._struct.member_names[24] = "dwVisibleMask"_;
		this_type_info._struct.member_offsets[24] = offsetof(tagPIXELFORMATDESCRIPTOR,dwVisibleMask);
		this_type_info._struct.member_circular[24] = 0;
		this_type_info._struct.member_types[25] = TYPEINFO(DWORD) ? TYPEINFO(DWORD)->hash : 0;
		this_type_info._struct.member_names[25] = "dwDamageMask"_;
		this_type_info._struct.member_offsets[25] = offsetof(tagPIXELFORMATDESCRIPTOR,dwDamageMask);
		this_type_info._struct.member_circular[25] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(tagMSG);
		this_type_info.name = "tagMSG"_;
		this_type_info.hash = (type_id)typeid(tagMSG).hash_code();
		this_type_info._struct.member_count = 6;
		this_type_info._struct.member_types[0] = TYPEINFO(HWND) ? TYPEINFO(HWND)->hash : 0;
		this_type_info._struct.member_names[0] = "hwnd"_;
		this_type_info._struct.member_offsets[0] = offsetof(tagMSG,hwnd);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(UINT) ? TYPEINFO(UINT)->hash : 0;
		this_type_info._struct.member_names[1] = "message"_;
		this_type_info._struct.member_offsets[1] = offsetof(tagMSG,message);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(WPARAM) ? TYPEINFO(WPARAM)->hash : 0;
		this_type_info._struct.member_names[2] = "wParam"_;
		this_type_info._struct.member_offsets[2] = offsetof(tagMSG,wParam);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(LPARAM) ? TYPEINFO(LPARAM)->hash : 0;
		this_type_info._struct.member_names[3] = "lParam"_;
		this_type_info._struct.member_offsets[3] = offsetof(tagMSG,lParam);
		this_type_info._struct.member_circular[3] = 0;
		this_type_info._struct.member_types[4] = TYPEINFO(DWORD) ? TYPEINFO(DWORD)->hash : 0;
		this_type_info._struct.member_names[4] = "time"_;
		this_type_info._struct.member_offsets[4] = offsetof(tagMSG,time);
		this_type_info._struct.member_circular[4] = 0;
		this_type_info._struct.member_types[5] = TYPEINFO(POINT) ? TYPEINFO(POINT)->hash : 0;
		this_type_info._struct.member_names[5] = "pt"_;
		this_type_info._struct.member_offsets[5] = offsetof(tagMSG,pt);
		this_type_info._struct.member_circular[5] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(tagWINDOWPLACEMENT);
		this_type_info.name = "tagWINDOWPLACEMENT"_;
		this_type_info.hash = (type_id)typeid(tagWINDOWPLACEMENT).hash_code();
		this_type_info._struct.member_count = 6;
		this_type_info._struct.member_types[0] = TYPEINFO(UINT) ? TYPEINFO(UINT)->hash : 0;
		this_type_info._struct.member_names[0] = "length"_;
		this_type_info._struct.member_offsets[0] = offsetof(tagWINDOWPLACEMENT,length);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(UINT) ? TYPEINFO(UINT)->hash : 0;
		this_type_info._struct.member_names[1] = "flags"_;
		this_type_info._struct.member_offsets[1] = offsetof(tagWINDOWPLACEMENT,flags);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(UINT) ? TYPEINFO(UINT)->hash : 0;
		this_type_info._struct.member_names[2] = "showCmd"_;
		this_type_info._struct.member_offsets[2] = offsetof(tagWINDOWPLACEMENT,showCmd);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(POINT) ? TYPEINFO(POINT)->hash : 0;
		this_type_info._struct.member_names[3] = "ptMinPosition"_;
		this_type_info._struct.member_offsets[3] = offsetof(tagWINDOWPLACEMENT,ptMinPosition);
		this_type_info._struct.member_circular[3] = 0;
		this_type_info._struct.member_types[4] = TYPEINFO(POINT) ? TYPEINFO(POINT)->hash : 0;
		this_type_info._struct.member_names[4] = "ptMaxPosition"_;
		this_type_info._struct.member_offsets[4] = offsetof(tagWINDOWPLACEMENT,ptMaxPosition);
		this_type_info._struct.member_circular[4] = 0;
		this_type_info._struct.member_types[5] = TYPEINFO(RECT) ? TYPEINFO(RECT)->hash : 0;
		this_type_info._struct.member_names[5] = "rcNormalPosition"_;
		this_type_info._struct.member_offsets[5] = offsetof(tagWINDOWPLACEMENT,rcNormalPosition);
		this_type_info._struct.member_circular[5] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(tagMONITORINFO);
		this_type_info.name = "tagMONITORINFO"_;
		this_type_info.hash = (type_id)typeid(tagMONITORINFO).hash_code();
		this_type_info._struct.member_count = 4;
		this_type_info._struct.member_types[0] = TYPEINFO(DWORD) ? TYPEINFO(DWORD)->hash : 0;
		this_type_info._struct.member_names[0] = "cbSize"_;
		this_type_info._struct.member_offsets[0] = offsetof(tagMONITORINFO,cbSize);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(RECT) ? TYPEINFO(RECT)->hash : 0;
		this_type_info._struct.member_names[1] = "rcMonitor"_;
		this_type_info._struct.member_offsets[1] = offsetof(tagMONITORINFO,rcMonitor);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(RECT) ? TYPEINFO(RECT)->hash : 0;
		this_type_info._struct.member_names[2] = "rcWork"_;
		this_type_info._struct.member_offsets[2] = offsetof(tagMONITORINFO,rcWork);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(DWORD) ? TYPEINFO(DWORD)->hash : 0;
		this_type_info._struct.member_names[3] = "dwFlags"_;
		this_type_info._struct.member_offsets[3] = offsetof(tagMONITORINFO,dwFlags);
		this_type_info._struct.member_circular[3] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(tagCURSORINFO);
		this_type_info.name = "tagCURSORINFO"_;
		this_type_info.hash = (type_id)typeid(tagCURSORINFO).hash_code();
		this_type_info._struct.member_count = 4;
		this_type_info._struct.member_types[0] = TYPEINFO(DWORD) ? TYPEINFO(DWORD)->hash : 0;
		this_type_info._struct.member_names[0] = "cbSize"_;
		this_type_info._struct.member_offsets[0] = offsetof(tagCURSORINFO,cbSize);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(DWORD) ? TYPEINFO(DWORD)->hash : 0;
		this_type_info._struct.member_names[1] = "flags"_;
		this_type_info._struct.member_offsets[1] = offsetof(tagCURSORINFO,flags);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(HCURSOR) ? TYPEINFO(HCURSOR)->hash : 0;
		this_type_info._struct.member_names[2] = "hCursor"_;
		this_type_info._struct.member_offsets[2] = offsetof(tagCURSORINFO,hCursor);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(POINT) ? TYPEINFO(POINT)->hash : 0;
		this_type_info._struct.member_names[3] = "ptScreenPos"_;
		this_type_info._struct.member_offsets[3] = offsetof(tagCURSORINFO,ptScreenPos);
		this_type_info._struct.member_circular[3] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(tagSTARTUPINFOA);
		this_type_info.name = "tagSTARTUPINFOA"_;
		this_type_info.hash = (type_id)typeid(tagSTARTUPINFOA).hash_code();
		this_type_info._struct.member_count = 18;
		this_type_info._struct.member_types[0] = TYPEINFO(DWORD) ? TYPEINFO(DWORD)->hash : 0;
		this_type_info._struct.member_names[0] = "cb"_;
		this_type_info._struct.member_offsets[0] = offsetof(tagSTARTUPINFOA,cb);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(LPSTR) ? TYPEINFO(LPSTR)->hash : 0;
		this_type_info._struct.member_names[1] = "lpReserved"_;
		this_type_info._struct.member_offsets[1] = offsetof(tagSTARTUPINFOA,lpReserved);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(LPSTR) ? TYPEINFO(LPSTR)->hash : 0;
		this_type_info._struct.member_names[2] = "lpDesktop"_;
		this_type_info._struct.member_offsets[2] = offsetof(tagSTARTUPINFOA,lpDesktop);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(LPSTR) ? TYPEINFO(LPSTR)->hash : 0;
		this_type_info._struct.member_names[3] = "lpTitle"_;
		this_type_info._struct.member_offsets[3] = offsetof(tagSTARTUPINFOA,lpTitle);
		this_type_info._struct.member_circular[3] = 0;
		this_type_info._struct.member_types[4] = TYPEINFO(DWORD) ? TYPEINFO(DWORD)->hash : 0;
		this_type_info._struct.member_names[4] = "dwX"_;
		this_type_info._struct.member_offsets[4] = offsetof(tagSTARTUPINFOA,dwX);
		this_type_info._struct.member_circular[4] = 0;
		this_type_info._struct.member_types[5] = TYPEINFO(DWORD) ? TYPEINFO(DWORD)->hash : 0;
		this_type_info._struct.member_names[5] = "dwY"_;
		this_type_info._struct.member_offsets[5] = offsetof(tagSTARTUPINFOA,dwY);
		this_type_info._struct.member_circular[5] = 0;
		this_type_info._struct.member_types[6] = TYPEINFO(DWORD) ? TYPEINFO(DWORD)->hash : 0;
		this_type_info._struct.member_names[6] = "dwXSize"_;
		this_type_info._struct.member_offsets[6] = offsetof(tagSTARTUPINFOA,dwXSize);
		this_type_info._struct.member_circular[6] = 0;
		this_type_info._struct.member_types[7] = TYPEINFO(DWORD) ? TYPEINFO(DWORD)->hash : 0;
		this_type_info._struct.member_names[7] = "dwYSize"_;
		this_type_info._struct.member_offsets[7] = offsetof(tagSTARTUPINFOA,dwYSize);
		this_type_info._struct.member_circular[7] = 0;
		this_type_info._struct.member_types[8] = TYPEINFO(DWORD) ? TYPEINFO(DWORD)->hash : 0;
		this_type_info._struct.member_names[8] = "dwXCountChars"_;
		this_type_info._struct.member_offsets[8] = offsetof(tagSTARTUPINFOA,dwXCountChars);
		this_type_info._struct.member_circular[8] = 0;
		this_type_info._struct.member_types[9] = TYPEINFO(DWORD) ? TYPEINFO(DWORD)->hash : 0;
		this_type_info._struct.member_names[9] = "dwYCountChars"_;
		this_type_info._struct.member_offsets[9] = offsetof(tagSTARTUPINFOA,dwYCountChars);
		this_type_info._struct.member_circular[9] = 0;
		this_type_info._struct.member_types[10] = TYPEINFO(DWORD) ? TYPEINFO(DWORD)->hash : 0;
		this_type_info._struct.member_names[10] = "dwFillAttribute"_;
		this_type_info._struct.member_offsets[10] = offsetof(tagSTARTUPINFOA,dwFillAttribute);
		this_type_info._struct.member_circular[10] = 0;
		this_type_info._struct.member_types[11] = TYPEINFO(DWORD) ? TYPEINFO(DWORD)->hash : 0;
		this_type_info._struct.member_names[11] = "dwFlags"_;
		this_type_info._struct.member_offsets[11] = offsetof(tagSTARTUPINFOA,dwFlags);
		this_type_info._struct.member_circular[11] = 0;
		this_type_info._struct.member_types[12] = TYPEINFO(WORD) ? TYPEINFO(WORD)->hash : 0;
		this_type_info._struct.member_names[12] = "wShowWindow"_;
		this_type_info._struct.member_offsets[12] = offsetof(tagSTARTUPINFOA,wShowWindow);
		this_type_info._struct.member_circular[12] = 0;
		this_type_info._struct.member_types[13] = TYPEINFO(WORD) ? TYPEINFO(WORD)->hash : 0;
		this_type_info._struct.member_names[13] = "cbReserved2"_;
		this_type_info._struct.member_offsets[13] = offsetof(tagSTARTUPINFOA,cbReserved2);
		this_type_info._struct.member_circular[13] = 0;
		this_type_info._struct.member_types[14] = TYPEINFO(LPBYTE) ? TYPEINFO(LPBYTE)->hash : 0;
		this_type_info._struct.member_names[14] = "lpReserved2"_;
		this_type_info._struct.member_offsets[14] = offsetof(tagSTARTUPINFOA,lpReserved2);
		this_type_info._struct.member_circular[14] = 0;
		this_type_info._struct.member_types[15] = TYPEINFO(HANDLE) ? TYPEINFO(HANDLE)->hash : 0;
		this_type_info._struct.member_names[15] = "hStdInput"_;
		this_type_info._struct.member_offsets[15] = offsetof(tagSTARTUPINFOA,hStdInput);
		this_type_info._struct.member_circular[15] = 0;
		this_type_info._struct.member_types[16] = TYPEINFO(HANDLE) ? TYPEINFO(HANDLE)->hash : 0;
		this_type_info._struct.member_names[16] = "hStdOutput"_;
		this_type_info._struct.member_offsets[16] = offsetof(tagSTARTUPINFOA,hStdOutput);
		this_type_info._struct.member_circular[16] = 0;
		this_type_info._struct.member_types[17] = TYPEINFO(HANDLE) ? TYPEINFO(HANDLE)->hash : 0;
		this_type_info._struct.member_names[17] = "hStdError"_;
		this_type_info._struct.member_offsets[17] = offsetof(tagSTARTUPINFOA,hStdError);
		this_type_info._struct.member_circular[17] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(tagPROCESS_INFORMATION);
		this_type_info.name = "tagPROCESS_INFORMATION"_;
		this_type_info.hash = (type_id)typeid(tagPROCESS_INFORMATION).hash_code();
		this_type_info._struct.member_count = 4;
		this_type_info._struct.member_types[0] = TYPEINFO(HANDLE) ? TYPEINFO(HANDLE)->hash : 0;
		this_type_info._struct.member_names[0] = "hProcess"_;
		this_type_info._struct.member_offsets[0] = offsetof(tagPROCESS_INFORMATION,hProcess);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(HANDLE) ? TYPEINFO(HANDLE)->hash : 0;
		this_type_info._struct.member_names[1] = "hThread"_;
		this_type_info._struct.member_offsets[1] = offsetof(tagPROCESS_INFORMATION,hThread);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(DWORD) ? TYPEINFO(DWORD)->hash : 0;
		this_type_info._struct.member_names[2] = "dwProcessId"_;
		this_type_info._struct.member_offsets[2] = offsetof(tagPROCESS_INFORMATION,dwProcessId);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(DWORD) ? TYPEINFO(DWORD)->hash : 0;
		this_type_info._struct.member_names[3] = "dwThreadId"_;
		this_type_info._struct.member_offsets[3] = offsetof(tagPROCESS_INFORMATION,dwThreadId);
		this_type_info._struct.member_circular[3] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(_LIST_ENTRY);
		this_type_info.name = "_LIST_ENTRY"_;
		this_type_info.hash = (type_id)typeid(_LIST_ENTRY).hash_code();
		this_type_info._struct.member_count = 2;
		this_type_info._struct.member_types[0] = TYPEINFO(struct _LIST_ENTRY *) ? TYPEINFO(struct _LIST_ENTRY *)->hash : 0;
		this_type_info._struct.member_names[0] = "Blink"_;
		this_type_info._struct.member_offsets[0] = offsetof(_LIST_ENTRY,Blink);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(struct _LIST_ENTRY *) ? TYPEINFO(struct _LIST_ENTRY *)->hash : 0;
		this_type_info._struct.member_names[1] = "Flink"_;
		this_type_info._struct.member_offsets[1] = offsetof(_LIST_ENTRY,Flink);
		this_type_info._struct.member_circular[1] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(_RTL_CRITICAL_SECTION_DEBUG);
		this_type_info.name = "_RTL_CRITICAL_SECTION_DEBUG"_;
		this_type_info.hash = (type_id)typeid(_RTL_CRITICAL_SECTION_DEBUG).hash_code();
		this_type_info._struct.member_count = 9;
		this_type_info._struct.member_types[0] = TYPEINFO(WORD) ? TYPEINFO(WORD)->hash : 0;
		this_type_info._struct.member_names[0] = "Type"_;
		this_type_info._struct.member_offsets[0] = offsetof(_RTL_CRITICAL_SECTION_DEBUG,Type);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(WORD) ? TYPEINFO(WORD)->hash : 0;
		this_type_info._struct.member_names[1] = "CreatorBackTraceIndex"_;
		this_type_info._struct.member_offsets[1] = offsetof(_RTL_CRITICAL_SECTION_DEBUG,CreatorBackTraceIndex);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(struct _RTL_CRITICAL_SECTION *) ? TYPEINFO(struct _RTL_CRITICAL_SECTION *)->hash : 0;
		this_type_info._struct.member_names[2] = "CriticalSection"_;
		this_type_info._struct.member_offsets[2] = offsetof(_RTL_CRITICAL_SECTION_DEBUG,CriticalSection);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(LIST_ENTRY) ? TYPEINFO(LIST_ENTRY)->hash : 0;
		this_type_info._struct.member_names[3] = "ProcessLocksList"_;
		this_type_info._struct.member_offsets[3] = offsetof(_RTL_CRITICAL_SECTION_DEBUG,ProcessLocksList);
		this_type_info._struct.member_circular[3] = 0;
		this_type_info._struct.member_types[4] = TYPEINFO(DWORD) ? TYPEINFO(DWORD)->hash : 0;
		this_type_info._struct.member_names[4] = "EntryCount"_;
		this_type_info._struct.member_offsets[4] = offsetof(_RTL_CRITICAL_SECTION_DEBUG,EntryCount);
		this_type_info._struct.member_circular[4] = 0;
		this_type_info._struct.member_types[5] = TYPEINFO(DWORD) ? TYPEINFO(DWORD)->hash : 0;
		this_type_info._struct.member_names[5] = "ContentionCount"_;
		this_type_info._struct.member_offsets[5] = offsetof(_RTL_CRITICAL_SECTION_DEBUG,ContentionCount);
		this_type_info._struct.member_circular[5] = 0;
		this_type_info._struct.member_types[6] = TYPEINFO(DWORD) ? TYPEINFO(DWORD)->hash : 0;
		this_type_info._struct.member_names[6] = "Flags"_;
		this_type_info._struct.member_offsets[6] = offsetof(_RTL_CRITICAL_SECTION_DEBUG,Flags);
		this_type_info._struct.member_circular[6] = 0;
		this_type_info._struct.member_types[7] = TYPEINFO(WORD) ? TYPEINFO(WORD)->hash : 0;
		this_type_info._struct.member_names[7] = "CreatorBackTraceIndexHigh"_;
		this_type_info._struct.member_offsets[7] = offsetof(_RTL_CRITICAL_SECTION_DEBUG,CreatorBackTraceIndexHigh);
		this_type_info._struct.member_circular[7] = 0;
		this_type_info._struct.member_types[8] = TYPEINFO(WORD) ? TYPEINFO(WORD)->hash : 0;
		this_type_info._struct.member_names[8] = "SpareWORD"_;
		this_type_info._struct.member_offsets[8] = offsetof(_RTL_CRITICAL_SECTION_DEBUG,SpareWORD);
		this_type_info._struct.member_circular[8] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(_RTL_CRITICAL_SECTION);
		this_type_info.name = "_RTL_CRITICAL_SECTION"_;
		this_type_info.hash = (type_id)typeid(_RTL_CRITICAL_SECTION).hash_code();
		this_type_info._struct.member_count = 6;
		this_type_info._struct.member_types[0] = TYPEINFO(PRTL_CRITICAL_SECTION_DEBUG) ? TYPEINFO(PRTL_CRITICAL_SECTION_DEBUG)->hash : 0;
		this_type_info._struct.member_names[0] = "DebugInfo"_;
		this_type_info._struct.member_offsets[0] = offsetof(_RTL_CRITICAL_SECTION,DebugInfo);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(LONG) ? TYPEINFO(LONG)->hash : 0;
		this_type_info._struct.member_names[1] = "LockCount"_;
		this_type_info._struct.member_offsets[1] = offsetof(_RTL_CRITICAL_SECTION,LockCount);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(LONG) ? TYPEINFO(LONG)->hash : 0;
		this_type_info._struct.member_names[2] = "RecursionCount"_;
		this_type_info._struct.member_offsets[2] = offsetof(_RTL_CRITICAL_SECTION,RecursionCount);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(HANDLE) ? TYPEINFO(HANDLE)->hash : 0;
		this_type_info._struct.member_names[3] = "OwningThread"_;
		this_type_info._struct.member_offsets[3] = offsetof(_RTL_CRITICAL_SECTION,OwningThread);
		this_type_info._struct.member_circular[3] = 0;
		this_type_info._struct.member_types[4] = TYPEINFO(HANDLE) ? TYPEINFO(HANDLE)->hash : 0;
		this_type_info._struct.member_names[4] = "LockSemaphore"_;
		this_type_info._struct.member_offsets[4] = offsetof(_RTL_CRITICAL_SECTION,LockSemaphore);
		this_type_info._struct.member_circular[4] = 0;
		this_type_info._struct.member_types[5] = TYPEINFO(ULONG_PTR) ? TYPEINFO(ULONG_PTR)->hash : 0;
		this_type_info._struct.member_names[5] = "SpinCount"_;
		this_type_info._struct.member_offsets[5] = offsetof(_RTL_CRITICAL_SECTION,SpinCount);
		this_type_info._struct.member_circular[5] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(_SYSTEMTIME);
		this_type_info.name = "_SYSTEMTIME"_;
		this_type_info.hash = (type_id)typeid(_SYSTEMTIME).hash_code();
		this_type_info._struct.member_count = 8;
		this_type_info._struct.member_types[0] = TYPEINFO(WORD) ? TYPEINFO(WORD)->hash : 0;
		this_type_info._struct.member_names[0] = "wYear"_;
		this_type_info._struct.member_offsets[0] = offsetof(_SYSTEMTIME,wYear);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(WORD) ? TYPEINFO(WORD)->hash : 0;
		this_type_info._struct.member_names[1] = "wMonth"_;
		this_type_info._struct.member_offsets[1] = offsetof(_SYSTEMTIME,wMonth);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(WORD) ? TYPEINFO(WORD)->hash : 0;
		this_type_info._struct.member_names[2] = "wDayOfWeek"_;
		this_type_info._struct.member_offsets[2] = offsetof(_SYSTEMTIME,wDayOfWeek);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(WORD) ? TYPEINFO(WORD)->hash : 0;
		this_type_info._struct.member_names[3] = "wDay"_;
		this_type_info._struct.member_offsets[3] = offsetof(_SYSTEMTIME,wDay);
		this_type_info._struct.member_circular[3] = 0;
		this_type_info._struct.member_types[4] = TYPEINFO(WORD) ? TYPEINFO(WORD)->hash : 0;
		this_type_info._struct.member_names[4] = "wHour"_;
		this_type_info._struct.member_offsets[4] = offsetof(_SYSTEMTIME,wHour);
		this_type_info._struct.member_circular[4] = 0;
		this_type_info._struct.member_types[5] = TYPEINFO(WORD) ? TYPEINFO(WORD)->hash : 0;
		this_type_info._struct.member_names[5] = "wMinute"_;
		this_type_info._struct.member_offsets[5] = offsetof(_SYSTEMTIME,wMinute);
		this_type_info._struct.member_circular[5] = 0;
		this_type_info._struct.member_types[6] = TYPEINFO(WORD) ? TYPEINFO(WORD)->hash : 0;
		this_type_info._struct.member_names[6] = "wSecond"_;
		this_type_info._struct.member_offsets[6] = offsetof(_SYSTEMTIME,wSecond);
		this_type_info._struct.member_circular[6] = 0;
		this_type_info._struct.member_types[7] = TYPEINFO(WORD) ? TYPEINFO(WORD)->hash : 0;
		this_type_info._struct.member_names[7] = "wMilliseconds"_;
		this_type_info._struct.member_offsets[7] = offsetof(_SYSTEMTIME,wMilliseconds);
		this_type_info._struct.member_circular[7] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(tagWNDCLASSEXA);
		this_type_info.name = "tagWNDCLASSEXA"_;
		this_type_info.hash = (type_id)typeid(tagWNDCLASSEXA).hash_code();
		this_type_info._struct.member_count = 12;
		this_type_info._struct.member_types[0] = TYPEINFO(UINT) ? TYPEINFO(UINT)->hash : 0;
		this_type_info._struct.member_names[0] = "cbSize"_;
		this_type_info._struct.member_offsets[0] = offsetof(tagWNDCLASSEXA,cbSize);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(UINT) ? TYPEINFO(UINT)->hash : 0;
		this_type_info._struct.member_names[1] = "style"_;
		this_type_info._struct.member_offsets[1] = offsetof(tagWNDCLASSEXA,style);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(WNDPROC) ? TYPEINFO(WNDPROC)->hash : 0;
		this_type_info._struct.member_names[2] = "lpfnWndProc"_;
		this_type_info._struct.member_offsets[2] = offsetof(tagWNDCLASSEXA,lpfnWndProc);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(int) ? TYPEINFO(int)->hash : 0;
		this_type_info._struct.member_names[3] = "cbClsExtra"_;
		this_type_info._struct.member_offsets[3] = offsetof(tagWNDCLASSEXA,cbClsExtra);
		this_type_info._struct.member_circular[3] = 0;
		this_type_info._struct.member_types[4] = TYPEINFO(int) ? TYPEINFO(int)->hash : 0;
		this_type_info._struct.member_names[4] = "cbWndExtra"_;
		this_type_info._struct.member_offsets[4] = offsetof(tagWNDCLASSEXA,cbWndExtra);
		this_type_info._struct.member_circular[4] = 0;
		this_type_info._struct.member_types[5] = TYPEINFO(HINSTANCE) ? TYPEINFO(HINSTANCE)->hash : 0;
		this_type_info._struct.member_names[5] = "hInstance"_;
		this_type_info._struct.member_offsets[5] = offsetof(tagWNDCLASSEXA,hInstance);
		this_type_info._struct.member_circular[5] = 0;
		this_type_info._struct.member_types[6] = TYPEINFO(HICON) ? TYPEINFO(HICON)->hash : 0;
		this_type_info._struct.member_names[6] = "hIcon"_;
		this_type_info._struct.member_offsets[6] = offsetof(tagWNDCLASSEXA,hIcon);
		this_type_info._struct.member_circular[6] = 0;
		this_type_info._struct.member_types[7] = TYPEINFO(HCURSOR) ? TYPEINFO(HCURSOR)->hash : 0;
		this_type_info._struct.member_names[7] = "hCursor"_;
		this_type_info._struct.member_offsets[7] = offsetof(tagWNDCLASSEXA,hCursor);
		this_type_info._struct.member_circular[7] = 0;
		this_type_info._struct.member_types[8] = TYPEINFO(HBRUSH) ? TYPEINFO(HBRUSH)->hash : 0;
		this_type_info._struct.member_names[8] = "hbrBackground"_;
		this_type_info._struct.member_offsets[8] = offsetof(tagWNDCLASSEXA,hbrBackground);
		this_type_info._struct.member_circular[8] = 0;
		this_type_info._struct.member_types[9] = TYPEINFO(LPCSTR) ? TYPEINFO(LPCSTR)->hash : 0;
		this_type_info._struct.member_names[9] = "lpszMenuName"_;
		this_type_info._struct.member_offsets[9] = offsetof(tagWNDCLASSEXA,lpszMenuName);
		this_type_info._struct.member_circular[9] = 0;
		this_type_info._struct.member_types[10] = TYPEINFO(LPCSTR) ? TYPEINFO(LPCSTR)->hash : 0;
		this_type_info._struct.member_names[10] = "lpszClassName"_;
		this_type_info._struct.member_offsets[10] = offsetof(tagWNDCLASSEXA,lpszClassName);
		this_type_info._struct.member_circular[10] = 0;
		this_type_info._struct.member_types[11] = TYPEINFO(HICON) ? TYPEINFO(HICON)->hash : 0;
		this_type_info._struct.member_names[11] = "hIconSm"_;
		this_type_info._struct.member_offsets[11] = offsetof(tagWNDCLASSEXA,hIconSm);
		this_type_info._struct.member_circular[11] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(tagCOMPOSITIONFORM);
		this_type_info.name = "tagCOMPOSITIONFORM"_;
		this_type_info.hash = (type_id)typeid(tagCOMPOSITIONFORM).hash_code();
		this_type_info._struct.member_count = 3;
		this_type_info._struct.member_types[0] = TYPEINFO(DWORD) ? TYPEINFO(DWORD)->hash : 0;
		this_type_info._struct.member_names[0] = "dwStyle"_;
		this_type_info._struct.member_offsets[0] = offsetof(tagCOMPOSITIONFORM,dwStyle);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(POINT) ? TYPEINFO(POINT)->hash : 0;
		this_type_info._struct.member_names[1] = "ptCurrentPos"_;
		this_type_info._struct.member_offsets[1] = offsetof(tagCOMPOSITIONFORM,ptCurrentPos);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(RECT) ? TYPEINFO(RECT)->hash : 0;
		this_type_info._struct.member_names[2] = "rcArea"_;
		this_type_info._struct.member_offsets[2] = offsetof(tagCOMPOSITIONFORM,rcArea);
		this_type_info._struct.member_circular[2] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(platform_window_internal);
		this_type_info.name = "platform_window_internal"_;
		this_type_info.hash = (type_id)typeid(platform_window_internal).hash_code();
		this_type_info._struct.member_count = 4;
		this_type_info._struct.member_types[0] = TYPEINFO(WNDCLASSEXA) ? TYPEINFO(WNDCLASSEXA)->hash : 0;
		this_type_info._struct.member_names[0] = "window_class"_;
		this_type_info._struct.member_offsets[0] = offsetof(platform_window_internal,window_class);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(HWND) ? TYPEINFO(HWND)->hash : 0;
		this_type_info._struct.member_names[1] = "handle"_;
		this_type_info._struct.member_offsets[1] = offsetof(platform_window_internal,handle);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(HDC) ? TYPEINFO(HDC)->hash : 0;
		this_type_info._struct.member_names[2] = "device_context"_;
		this_type_info._struct.member_offsets[2] = offsetof(platform_window_internal,device_context);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(HGLRC) ? TYPEINFO(HGLRC)->hash : 0;
		this_type_info._struct.member_names[3] = "gl_context"_;
		this_type_info._struct.member_offsets[3] = offsetof(platform_window_internal,gl_context);
		this_type_info._struct.member_circular[3] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(platform_dll);
		this_type_info.name = "platform_dll"_;
		this_type_info.hash = (type_id)typeid(platform_dll).hash_code();
		this_type_info._struct.member_count = 1;
		this_type_info._struct.member_types[0] = TYPEINFO(HMODULE) ? TYPEINFO(HMODULE)->hash : 0;
		this_type_info._struct.member_names[0] = "dll_handle"_;
		this_type_info._struct.member_offsets[0] = offsetof(platform_dll,dll_handle);
		this_type_info._struct.member_circular[0] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(platform_file_attributes);
		this_type_info.name = "platform_file_attributes"_;
		this_type_info.hash = (type_id)typeid(platform_file_attributes).hash_code();
		this_type_info._struct.member_count = 1;
		this_type_info._struct.member_types[0] = TYPEINFO(WIN32_FILE_ATTRIBUTE_DATA) ? TYPEINFO(WIN32_FILE_ATTRIBUTE_DATA)->hash : 0;
		this_type_info._struct.member_names[0] = "attrib"_;
		this_type_info._struct.member_offsets[0] = offsetof(platform_file_attributes,attrib);
		this_type_info._struct.member_circular[0] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(platform_thread);
		this_type_info.name = "platform_thread"_;
		this_type_info.hash = (type_id)typeid(platform_thread).hash_code();
		this_type_info._struct.member_count = 2;
		this_type_info._struct.member_types[0] = TYPEINFO(platform_thread_id) ? TYPEINFO(platform_thread_id)->hash : 0;
		this_type_info._struct.member_names[0] = "id"_;
		this_type_info._struct.member_offsets[0] = offsetof(platform_thread,id);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(HANDLE) ? TYPEINFO(HANDLE)->hash : 0;
		this_type_info._struct.member_names[1] = "handle"_;
		this_type_info._struct.member_offsets[1] = offsetof(platform_thread,handle);
		this_type_info._struct.member_circular[1] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(platform_semaphore);
		this_type_info.name = "platform_semaphore"_;
		this_type_info.hash = (type_id)typeid(platform_semaphore).hash_code();
		this_type_info._struct.member_count = 1;
		this_type_info._struct.member_types[0] = TYPEINFO(HANDLE) ? TYPEINFO(HANDLE)->hash : 0;
		this_type_info._struct.member_names[0] = "handle"_;
		this_type_info._struct.member_offsets[0] = offsetof(platform_semaphore,handle);
		this_type_info._struct.member_circular[0] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(platform_mutex);
		this_type_info.name = "platform_mutex"_;
		this_type_info.hash = (type_id)typeid(platform_mutex).hash_code();
		this_type_info._struct.member_count = 1;
		this_type_info._struct.member_types[0] = TYPEINFO(CRITICAL_SECTION) ? TYPEINFO(CRITICAL_SECTION)->hash : 0;
		this_type_info._struct.member_names[0] = "cs"_;
		this_type_info._struct.member_offsets[0] = offsetof(platform_mutex,cs);
		this_type_info._struct.member_circular[0] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(platform_file);
		this_type_info.name = "platform_file"_;
		this_type_info.hash = (type_id)typeid(platform_file).hash_code();
		this_type_info._struct.member_count = 2;
		this_type_info._struct.member_types[0] = TYPEINFO(string) ? TYPEINFO(string)->hash : 0;
		this_type_info._struct.member_names[0] = "path"_;
		this_type_info._struct.member_offsets[0] = offsetof(platform_file,path);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(HANDLE) ? TYPEINFO(HANDLE)->hash : 0;
		this_type_info._struct.member_names[1] = "handle"_;
		this_type_info._struct.member_offsets[1] = offsetof(platform_file,handle);
		this_type_info._struct.member_circular[1] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_array;
		this_type_info.size = sizeof(char [128]);
		this_type_info.name = STRING(char [128]);
		this_type_info.hash = (type_id)typeid(char [128]).hash_code();
		this_type_info._array.of = TYPEINFO(char) ? TYPEINFO(char)->hash : 0;
		this_type_info._array.length = 128;
		type_table.insert_if_unique(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(platform_window_settings);
		this_type_info.name = "platform_window_settings"_;
		this_type_info.hash = (type_id)typeid(platform_window_settings).hash_code();
		this_type_info._struct.member_count = 6;
		this_type_info._struct.member_types[0] = TYPEINFO(char [128]) ? TYPEINFO(char [128])->hash : 0;
		this_type_info._struct.member_names[0] = "c_title"_;
		this_type_info._struct.member_offsets[0] = offsetof(platform_window_settings,c_title);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(platform_window_mode) ? TYPEINFO(platform_window_mode)->hash : 0;
		this_type_info._struct.member_names[1] = "mode"_;
		this_type_info._struct.member_offsets[1] = offsetof(platform_window_settings,mode);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(i32) ? TYPEINFO(i32)->hash : 0;
		this_type_info._struct.member_names[2] = "w"_;
		this_type_info._struct.member_offsets[2] = offsetof(platform_window_settings,w);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(i32) ? TYPEINFO(i32)->hash : 0;
		this_type_info._struct.member_names[3] = "h"_;
		this_type_info._struct.member_offsets[3] = offsetof(platform_window_settings,h);
		this_type_info._struct.member_circular[3] = 0;
		this_type_info._struct.member_types[4] = TYPEINFO(i32) ? TYPEINFO(i32)->hash : 0;
		this_type_info._struct.member_names[4] = "samples"_;
		this_type_info._struct.member_offsets[4] = offsetof(platform_window_settings,samples);
		this_type_info._struct.member_circular[4] = 0;
		this_type_info._struct.member_types[5] = TYPEINFO(bool) ? TYPEINFO(bool)->hash : 0;
		this_type_info._struct.member_names[5] = "vsync"_;
		this_type_info._struct.member_offsets[5] = offsetof(platform_window_settings,vsync);
		this_type_info._struct.member_circular[5] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(platform_window);
		this_type_info.name = "platform_window"_;
		this_type_info.hash = (type_id)typeid(platform_window).hash_code();
		this_type_info._struct.member_count = 2;
		this_type_info._struct.member_types[0] = TYPEINFO(platform_window_settings) ? TYPEINFO(platform_window_settings)->hash : 0;
		this_type_info._struct.member_names[0] = "settings"_;
		this_type_info._struct.member_offsets[0] = offsetof(platform_window,settings);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(platform_window_internal) ? TYPEINFO(platform_window_internal)->hash : 0;
		this_type_info._struct.member_names[1] = "internal"_;
		this_type_info._struct.member_offsets[1] = offsetof(platform_window,internal);
		this_type_info._struct.member_circular[1] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(platform_error);
		this_type_info.name = "platform_error"_;
		this_type_info.hash = (type_id)typeid(platform_error).hash_code();
		this_type_info._struct.member_count = 3;
		this_type_info._struct.member_types[0] = TYPEINFO(bool) ? TYPEINFO(bool)->hash : 0;
		this_type_info._struct.member_names[0] = "good"_;
		this_type_info._struct.member_offsets[0] = offsetof(platform_error,good);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[1] = "error"_;
		this_type_info._struct.member_offsets[1] = offsetof(platform_error,error);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(string) ? TYPEINFO(string)->hash : 0;
		this_type_info._struct.member_names[2] = "error_message"_;
		this_type_info._struct.member_offsets[2] = offsetof(platform_error,error_message);
		this_type_info._struct.member_circular[2] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(platform_semaphore_state);
		this_type_info.name = "platform_semaphore_state"_;
		this_type_info.hash = (type_id)typeid(platform_semaphore_state).hash_code();
		this_type_info._struct.member_count = 2;
		this_type_info._struct.member_types[0] = TYPEINFO(_platform_semaphore_state) ? TYPEINFO(_platform_semaphore_state)->hash : 0;
		this_type_info._struct.member_names[0] = "state"_;
		this_type_info._struct.member_offsets[0] = offsetof(platform_semaphore_state,state);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(platform_error) ? TYPEINFO(platform_error)->hash : 0;
		this_type_info._struct.member_names[1] = "error"_;
		this_type_info._struct.member_offsets[1] = offsetof(platform_semaphore_state,error);
		this_type_info._struct.member_circular[1] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(platform_thread_join_state);
		this_type_info.name = "platform_thread_join_state"_;
		this_type_info.hash = (type_id)typeid(platform_thread_join_state).hash_code();
		this_type_info._struct.member_count = 2;
		this_type_info._struct.member_types[0] = TYPEINFO(_platform_thread_join_state) ? TYPEINFO(_platform_thread_join_state)->hash : 0;
		this_type_info._struct.member_names[0] = "state"_;
		this_type_info._struct.member_offsets[0] = offsetof(platform_thread_join_state,state);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(platform_error) ? TYPEINFO(platform_error)->hash : 0;
		this_type_info._struct.member_names[1] = "error"_;
		this_type_info._struct.member_offsets[1] = offsetof(platform_thread_join_state,error);
		this_type_info._struct.member_circular[1] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(_platform_event_window);
		this_type_info.name = "_platform_event_window"_;
		this_type_info.hash = (type_id)typeid(_platform_event_window).hash_code();
		this_type_info._struct.member_count = 3;
		this_type_info._struct.member_types[0] = TYPEINFO(platform_windowop) ? TYPEINFO(platform_windowop)->hash : 0;
		this_type_info._struct.member_names[0] = "op"_;
		this_type_info._struct.member_offsets[0] = offsetof(_platform_event_window,op);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(i16) ? TYPEINFO(i16)->hash : 0;
		this_type_info._struct.member_names[1] = "x"_;
		this_type_info._struct.member_offsets[1] = offsetof(_platform_event_window,x);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(i16) ? TYPEINFO(i16)->hash : 0;
		this_type_info._struct.member_names[2] = "y"_;
		this_type_info._struct.member_offsets[2] = offsetof(_platform_event_window,y);
		this_type_info._struct.member_circular[2] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(_platform_event_key);
		this_type_info.name = "_platform_event_key"_;
		this_type_info.hash = (type_id)typeid(_platform_event_key).hash_code();
		this_type_info._struct.member_count = 2;
		this_type_info._struct.member_types[0] = TYPEINFO(platform_keycode) ? TYPEINFO(platform_keycode)->hash : 0;
		this_type_info._struct.member_names[0] = "code"_;
		this_type_info._struct.member_offsets[0] = offsetof(_platform_event_key,code);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(u16) ? TYPEINFO(u16)->hash : 0;
		this_type_info._struct.member_names[1] = "flags"_;
		this_type_info._struct.member_offsets[1] = offsetof(_platform_event_key,flags);
		this_type_info._struct.member_circular[1] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(_platform_event_mouse);
		this_type_info.name = "_platform_event_mouse"_;
		this_type_info.hash = (type_id)typeid(_platform_event_mouse).hash_code();
		this_type_info._struct.member_count = 4;
		this_type_info._struct.member_types[0] = TYPEINFO(i16) ? TYPEINFO(i16)->hash : 0;
		this_type_info._struct.member_names[0] = "x"_;
		this_type_info._struct.member_offsets[0] = offsetof(_platform_event_mouse,x);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(i16) ? TYPEINFO(i16)->hash : 0;
		this_type_info._struct.member_names[1] = "y"_;
		this_type_info._struct.member_offsets[1] = offsetof(_platform_event_mouse,y);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(u16) ? TYPEINFO(u16)->hash : 0;
		this_type_info._struct.member_names[2] = "flags"_;
		this_type_info._struct.member_offsets[2] = offsetof(_platform_event_mouse,flags);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(i8) ? TYPEINFO(i8)->hash : 0;
		this_type_info._struct.member_names[3] = "w"_;
		this_type_info._struct.member_offsets[3] = offsetof(_platform_event_mouse,w);
		this_type_info._struct.member_circular[3] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_array;
		this_type_info.size = sizeof(char [5]);
		this_type_info.name = STRING(char [5]);
		this_type_info.hash = (type_id)typeid(char [5]).hash_code();
		this_type_info._array.of = TYPEINFO(char) ? TYPEINFO(char)->hash : 0;
		this_type_info._array.length = 5;
		type_table.insert_if_unique(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(_platform_event_rune);
		this_type_info.name = "_platform_event_rune"_;
		this_type_info.hash = (type_id)typeid(_platform_event_rune).hash_code();
		this_type_info._struct.member_count = 1;
		this_type_info._struct.member_types[0] = TYPEINFO(char [5]) ? TYPEINFO(char [5])->hash : 0;
		this_type_info._struct.member_names[0] = "rune_utf8"_;
		this_type_info._struct.member_offsets[0] = offsetof(_platform_event_rune,rune_utf8);
		this_type_info._struct.member_circular[0] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(_platform_event_async);
		this_type_info.name = "_platform_event_async"_;
		this_type_info.hash = (type_id)typeid(_platform_event_async).hash_code();
		this_type_info._struct.member_count = 1;
		this_type_info._struct.member_types[0] = TYPEINFO(platform_async_type) ? TYPEINFO(platform_async_type)->hash : 0;
		this_type_info._struct.member_names[0] = "type"_;
		this_type_info._struct.member_offsets[0] = offsetof(_platform_event_async,type);
		this_type_info._struct.member_circular[0] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(platform_event);
		this_type_info.name = "platform_event"_;
		this_type_info.hash = (type_id)typeid(platform_event).hash_code();
		this_type_info._struct.member_count = 6;
		this_type_info._struct.member_types[0] = TYPEINFO(platform_event_type) ? TYPEINFO(platform_event_type)->hash : 0;
		this_type_info._struct.member_names[0] = "type"_;
		this_type_info._struct.member_offsets[0] = offsetof(platform_event,type);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(_platform_event_window) ? TYPEINFO(_platform_event_window)->hash : 0;
		this_type_info._struct.member_names[1] = "window"_;
		this_type_info._struct.member_offsets[1] = offsetof(platform_event,window);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(_platform_event_key) ? TYPEINFO(_platform_event_key)->hash : 0;
		this_type_info._struct.member_names[2] = "key"_;
		this_type_info._struct.member_offsets[2] = offsetof(platform_event,key);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(_platform_event_mouse) ? TYPEINFO(_platform_event_mouse)->hash : 0;
		this_type_info._struct.member_names[3] = "mouse"_;
		this_type_info._struct.member_offsets[3] = offsetof(platform_event,mouse);
		this_type_info._struct.member_circular[3] = 0;
		this_type_info._struct.member_types[4] = TYPEINFO(_platform_event_rune) ? TYPEINFO(_platform_event_rune)->hash : 0;
		this_type_info._struct.member_names[4] = "rune"_;
		this_type_info._struct.member_offsets[4] = offsetof(platform_event,rune);
		this_type_info._struct.member_circular[4] = 0;
		this_type_info._struct.member_types[5] = TYPEINFO(_platform_event_async) ? TYPEINFO(_platform_event_async)->hash : 0;
		this_type_info._struct.member_names[5] = "async"_;
		this_type_info._struct.member_offsets[5] = offsetof(platform_event,async);
		this_type_info._struct.member_circular[5] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_func;
		this_type_info.size = sizeof(void(*)());
		this_type_info.hash = (type_id)typeid(bool (platform_window *)).hash_code();
		this_type_info.name = "window_focused"_;
		this_type_info._func.signature = STRING(bool (platform_window *));
		this_type_info._func.return_type = TYPEINFO(bool) ? TYPEINFO(bool)->hash : 0;
		this_type_info._func.param_count = 1;
		this_type_info._func.param_types[0] = TYPEINFO(platform_window *) ? TYPEINFO(platform_window *)->hash : 0;
		type_table.insert_if_unique(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_func;
		this_type_info.size = sizeof(void(*)());
		this_type_info.hash = (type_id)typeid(platform_error (platform_window *)).hash_code();
		this_type_info.name = "swap_buffers"_;
		this_type_info._func.signature = STRING(platform_error (platform_window *));
		this_type_info._func.return_type = TYPEINFO(platform_error) ? TYPEINFO(platform_error)->hash : 0;
		this_type_info._func.param_count = 1;
		this_type_info._func.param_types[0] = TYPEINFO(platform_window *) ? TYPEINFO(platform_window *)->hash : 0;
		type_table.insert_if_unique(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_func;
		this_type_info.size = sizeof(void(*)());
		this_type_info.hash = (type_id)typeid(platform_error (platform_window *)).hash_code();
		this_type_info.name = "create_window"_;
		this_type_info._func.signature = STRING(platform_error (platform_window *));
		this_type_info._func.return_type = TYPEINFO(platform_error) ? TYPEINFO(platform_error)->hash : 0;
		this_type_info._func.param_count = 1;
		this_type_info._func.param_types[0] = TYPEINFO(platform_window *) ? TYPEINFO(platform_window *)->hash : 0;
		type_table.insert_if_unique(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_func;
		this_type_info.size = sizeof(void(*)());
		this_type_info.hash = (type_id)typeid(platform_error (platform_window *)).hash_code();
		this_type_info.name = "destroy_window"_;
		this_type_info._func.signature = STRING(platform_error (platform_window *));
		this_type_info._func.return_type = TYPEINFO(platform_error) ? TYPEINFO(platform_error)->hash : 0;
		this_type_info._func.param_count = 1;
		this_type_info._func.param_types[0] = TYPEINFO(platform_window *) ? TYPEINFO(platform_window *)->hash : 0;
		type_table.insert_if_unique(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_func;
		this_type_info.size = sizeof(void(*)());
		this_type_info.hash = (type_id)typeid(platform_error (platform_window *)).hash_code();
		this_type_info.name = "recreate_window"_;
		this_type_info._func.signature = STRING(platform_error (platform_window *));
		this_type_info._func.return_type = TYPEINFO(platform_error) ? TYPEINFO(platform_error)->hash : 0;
		this_type_info._func.param_count = 1;
		this_type_info._func.param_types[0] = TYPEINFO(platform_window *) ? TYPEINFO(platform_window *)->hash : 0;
		type_table.insert_if_unique(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_func;
		this_type_info.size = sizeof(void(*)());
		this_type_info.hash = (type_id)typeid(bool (platform_window *)).hash_code();
		this_type_info.name = "apply_window_settings"_;
		this_type_info._func.signature = STRING(bool (platform_window *));
		this_type_info._func.return_type = TYPEINFO(bool) ? TYPEINFO(bool)->hash : 0;
		this_type_info._func.param_count = 1;
		this_type_info._func.param_types[0] = TYPEINFO(platform_window *) ? TYPEINFO(platform_window *)->hash : 0;
		type_table.insert_if_unique(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_func;
		this_type_info.size = sizeof(void(*)());
		this_type_info.hash = (type_id)typeid(platform_error (platform_window *, i32 *, i32 *)).hash_code();
		this_type_info.name = "get_window_size"_;
		this_type_info._func.signature = STRING(platform_error (platform_window *, i32 *, i32 *));
		this_type_info._func.return_type = TYPEINFO(platform_error) ? TYPEINFO(platform_error)->hash : 0;
		this_type_info._func.param_count = 3;
		this_type_info._func.param_types[0] = TYPEINFO(platform_window *) ? TYPEINFO(platform_window *)->hash : 0;
		this_type_info._func.param_types[1] = TYPEINFO(i32 *) ? TYPEINFO(i32 *)->hash : 0;
		this_type_info._func.param_types[2] = TYPEINFO(i32 *) ? TYPEINFO(i32 *)->hash : 0;
		type_table.insert_if_unique(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_func;
		this_type_info.size = sizeof(void(*)());
		this_type_info.hash = (type_id)typeid(platform_error (platform_window *, i32 *, i32 *)).hash_code();
		this_type_info.name = "get_window_drawable"_;
		this_type_info._func.signature = STRING(platform_error (platform_window *, i32 *, i32 *));
		this_type_info._func.return_type = TYPEINFO(platform_error) ? TYPEINFO(platform_error)->hash : 0;
		this_type_info._func.param_count = 3;
		this_type_info._func.param_types[0] = TYPEINFO(platform_window *) ? TYPEINFO(platform_window *)->hash : 0;
		this_type_info._func.param_types[1] = TYPEINFO(i32 *) ? TYPEINFO(i32 *)->hash : 0;
		this_type_info._func.param_types[2] = TYPEINFO(i32 *) ? TYPEINFO(i32 *)->hash : 0;
		type_table.insert_if_unique(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_func;
		this_type_info.size = sizeof(void(*)());
		this_type_info.hash = (type_id)typeid(string ()).hash_code();
		this_type_info.name = "get_clipboard"_;
		this_type_info._func.signature = STRING(string ());
		this_type_info._func.return_type = TYPEINFO(string) ? TYPEINFO(string)->hash : 0;
		this_type_info._func.param_count = 0;
		type_table.insert_if_unique(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_func;
		this_type_info.size = sizeof(void(*)());
		this_type_info.hash = (type_id)typeid(void (string)).hash_code();
		this_type_info.name = "set_clipboard"_;
		this_type_info._func.signature = STRING(void (string));
		this_type_info._func.return_type = TYPEINFO(void) ? TYPEINFO(void)->hash : 0;
		this_type_info._func.param_count = 1;
		this_type_info._func.param_types[0] = TYPEINFO(string) ? TYPEINFO(string)->hash : 0;
		type_table.insert_if_unique(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_func;
		this_type_info.size = sizeof(void(*)());
		this_type_info.hash = (type_id)typeid(bool ()).hash_code();
		this_type_info.name = "cursor_shown"_;
		this_type_info._func.signature = STRING(bool ());
		this_type_info._func.return_type = TYPEINFO(bool) ? TYPEINFO(bool)->hash : 0;
		this_type_info._func.param_count = 0;
		type_table.insert_if_unique(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_func;
		this_type_info.size = sizeof(void(*)());
		this_type_info.hash = (type_id)typeid(void (bool)).hash_code();
		this_type_info.name = "show_cursor"_;
		this_type_info._func.signature = STRING(void (bool));
		this_type_info._func.return_type = TYPEINFO(void) ? TYPEINFO(void)->hash : 0;
		this_type_info._func.param_count = 1;
		this_type_info._func.param_types[0] = TYPEINFO(bool) ? TYPEINFO(bool)->hash : 0;
		type_table.insert_if_unique(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_func;
		this_type_info.size = sizeof(void(*)());
		this_type_info.hash = (type_id)typeid(void (platform_window *)).hash_code();
		this_type_info.name = "capture_mouse"_;
		this_type_info._func.signature = STRING(void (platform_window *));
		this_type_info._func.return_type = TYPEINFO(void) ? TYPEINFO(void)->hash : 0;
		this_type_info._func.param_count = 1;
		this_type_info._func.param_types[0] = TYPEINFO(platform_window *) ? TYPEINFO(platform_window *)->hash : 0;
		type_table.insert_if_unique(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_func;
		this_type_info.size = sizeof(void(*)());
		this_type_info.hash = (type_id)typeid(void (platform_window *)).hash_code();
		this_type_info.name = "release_mouse"_;
		this_type_info._func.signature = STRING(void (platform_window *));
		this_type_info._func.return_type = TYPEINFO(void) ? TYPEINFO(void)->hash : 0;
		this_type_info._func.param_count = 1;
		this_type_info._func.param_types[0] = TYPEINFO(platform_window *) ? TYPEINFO(platform_window *)->hash : 0;
		type_table.insert_if_unique(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_func;
		this_type_info.size = sizeof(void(*)());
		this_type_info.hash = (type_id)typeid(platform_error (platform_window *, i32, i32)).hash_code();
		this_type_info.name = "set_cursor_pos"_;
		this_type_info._func.signature = STRING(platform_error (platform_window *, i32, i32));
		this_type_info._func.return_type = TYPEINFO(platform_error) ? TYPEINFO(platform_error)->hash : 0;
		this_type_info._func.param_count = 3;
		this_type_info._func.param_types[0] = TYPEINFO(platform_window *) ? TYPEINFO(platform_window *)->hash : 0;
		this_type_info._func.param_types[1] = TYPEINFO(i32) ? TYPEINFO(i32)->hash : 0;
		this_type_info._func.param_types[2] = TYPEINFO(i32) ? TYPEINFO(i32)->hash : 0;
		type_table.insert_if_unique(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_func;
		this_type_info.size = sizeof(void(*)());
		this_type_info.hash = (type_id)typeid(void (platform_window *, platform_cursor)).hash_code();
		this_type_info.name = "set_cursor"_;
		this_type_info._func.signature = STRING(void (platform_window *, platform_cursor));
		this_type_info._func.return_type = TYPEINFO(void) ? TYPEINFO(void)->hash : 0;
		this_type_info._func.param_count = 2;
		this_type_info._func.param_types[0] = TYPEINFO(platform_window *) ? TYPEINFO(platform_window *)->hash : 0;
		this_type_info._func.param_types[1] = TYPEINFO(platform_cursor) ? TYPEINFO(platform_cursor)->hash : 0;
		type_table.insert_if_unique(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_func;
		this_type_info.size = sizeof(void(*)());
		this_type_info.hash = (type_id)typeid(platform_error (platform_window *, i32 *, i32 *)).hash_code();
		this_type_info.name = "get_cursor_pos"_;
		this_type_info._func.signature = STRING(platform_error (platform_window *, i32 *, i32 *));
		this_type_info._func.return_type = TYPEINFO(platform_error) ? TYPEINFO(platform_error)->hash : 0;
		this_type_info._func.param_count = 3;
		this_type_info._func.param_types[0] = TYPEINFO(platform_window *) ? TYPEINFO(platform_window *)->hash : 0;
		this_type_info._func.param_types[1] = TYPEINFO(i32 *) ? TYPEINFO(i32 *)->hash : 0;
		this_type_info._func.param_types[2] = TYPEINFO(i32 *) ? TYPEINFO(i32 *)->hash : 0;
		type_table.insert_if_unique(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_func;
		this_type_info.size = sizeof(void(*)());
		this_type_info.hash = (type_id)typeid(bool (platform_mouseflag)).hash_code();
		this_type_info.name = "mousedown"_;
		this_type_info._func.signature = STRING(bool (platform_mouseflag));
		this_type_info._func.return_type = TYPEINFO(bool) ? TYPEINFO(bool)->hash : 0;
		this_type_info._func.param_count = 1;
		this_type_info._func.param_types[0] = TYPEINFO(platform_mouseflag) ? TYPEINFO(platform_mouseflag)->hash : 0;
		type_table.insert_if_unique(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_func;
		this_type_info.size = sizeof(void(*)());
		this_type_info.hash = (type_id)typeid(void ()).hash_code();
		this_type_info.name = "debug_break"_;
		this_type_info._func.signature = STRING(void ());
		this_type_info._func.return_type = TYPEINFO(void) ? TYPEINFO(void)->hash : 0;
		this_type_info._func.param_count = 0;
		type_table.insert_if_unique(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_func;
		this_type_info.size = sizeof(void(*)());
		this_type_info.hash = (type_id)typeid(bool ()).hash_code();
		this_type_info.name = "is_debugging"_;
		this_type_info._func.signature = STRING(bool ());
		this_type_info._func.return_type = TYPEINFO(bool) ? TYPEINFO(bool)->hash : 0;
		this_type_info._func.param_count = 0;
		type_table.insert_if_unique(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_func;
		this_type_info.size = sizeof(void(*)());
		this_type_info.hash = (type_id)typeid(u64 ()).hash_code();
		this_type_info.name = "get_perfcount"_;
		this_type_info._func.signature = STRING(u64 ());
		this_type_info._func.return_type = TYPEINFO(u64) ? TYPEINFO(u64)->hash : 0;
		this_type_info._func.param_count = 0;
		type_table.insert_if_unique(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_func;
		this_type_info.size = sizeof(void(*)());
		this_type_info.hash = (type_id)typeid(u64 ()).hash_code();
		this_type_info.name = "get_perfcount_freq"_;
		this_type_info._func.signature = STRING(u64 ());
		this_type_info._func.return_type = TYPEINFO(u64) ? TYPEINFO(u64)->hash : 0;
		this_type_info._func.param_count = 0;
		type_table.insert_if_unique(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_func;
		this_type_info.size = sizeof(void(*)());
		this_type_info.hash = (type_id)typeid(platform_error ()).hash_code();
		this_type_info.name = "wait_message"_;
		this_type_info._func.signature = STRING(platform_error ());
		this_type_info._func.return_type = TYPEINFO(platform_error) ? TYPEINFO(platform_error)->hash : 0;
		this_type_info._func.param_count = 0;
		type_table.insert_if_unique(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_func;
		this_type_info.size = sizeof(void(*)());
		this_type_info.hash = (type_id)typeid(void (platform_event)).hash_code();
		this_type_info.name = "queue_event"_;
		this_type_info._func.signature = STRING(void (platform_event));
		this_type_info._func.return_type = TYPEINFO(void) ? TYPEINFO(void)->hash : 0;
		this_type_info._func.param_count = 1;
		this_type_info._func.param_types[0] = TYPEINFO(platform_event) ? TYPEINFO(platform_event)->hash : 0;
		type_table.insert_if_unique(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_func;
		this_type_info.size = sizeof(void(*)());
		this_type_info.hash = (type_id)typeid(void (platform_window *)).hash_code();
		this_type_info.name = "pump_events"_;
		this_type_info._func.signature = STRING(void (platform_window *));
		this_type_info._func.return_type = TYPEINFO(void) ? TYPEINFO(void)->hash : 0;
		this_type_info._func.param_count = 1;
		this_type_info._func.param_types[0] = TYPEINFO(platform_window *) ? TYPEINFO(platform_window *)->hash : 0;
		type_table.insert_if_unique(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_func;
		this_type_info.size = sizeof(void(*)());
		this_type_info.hash = (type_id)typeid(void (void (*)(void *, platform_event), void *)).hash_code();
		this_type_info.name = "set_queue_callback"_;
		this_type_info._func.signature = STRING(void (void (*)(void *, platform_event), void *));
		this_type_info._func.return_type = TYPEINFO(void) ? TYPEINFO(void)->hash : 0;
		this_type_info._func.param_count = 2;
		this_type_info._func.param_types[0] = TYPEINFO(void (*)(void *, platform_event)) ? TYPEINFO(void (*)(void *, platform_event))->hash : 0;
		this_type_info._func.param_types[1] = TYPEINFO(void *) ? TYPEINFO(void *)->hash : 0;
		type_table.insert_if_unique(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_func;
		this_type_info.size = sizeof(void(*)());
		this_type_info.hash = (type_id)typeid(bool (platform_keycode)).hash_code();
		this_type_info.name = "keydown"_;
		this_type_info._func.signature = STRING(bool (platform_keycode));
		this_type_info._func.return_type = TYPEINFO(bool) ? TYPEINFO(bool)->hash : 0;
		this_type_info._func.param_count = 1;
		this_type_info._func.param_types[0] = TYPEINFO(platform_keycode) ? TYPEINFO(platform_keycode)->hash : 0;
		type_table.insert_if_unique(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_func;
		this_type_info.size = sizeof(void(*)());
		this_type_info.hash = (type_id)typeid(i32 (platform_keycode)).hash_code();
		this_type_info.name = "get_scancode"_;
		this_type_info._func.signature = STRING(i32 (platform_keycode));
		this_type_info._func.return_type = TYPEINFO(i32) ? TYPEINFO(i32)->hash : 0;
		this_type_info._func.param_count = 1;
		this_type_info._func.param_types[0] = TYPEINFO(platform_keycode) ? TYPEINFO(platform_keycode)->hash : 0;
		type_table.insert_if_unique(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_func;
		this_type_info.size = sizeof(void(*)());
		this_type_info.hash = (type_id)typeid(void *(string)).hash_code();
		this_type_info.name = "get_glproc"_;
		this_type_info._func.signature = STRING(void *(string));
		this_type_info._func.return_type = TYPEINFO(void *) ? TYPEINFO(void *)->hash : 0;
		this_type_info._func.param_count = 1;
		this_type_info._func.param_types[0] = TYPEINFO(string) ? TYPEINFO(string)->hash : 0;
		type_table.insert_if_unique(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_func;
		this_type_info.size = sizeof(void(*)());
		this_type_info.hash = (type_id)typeid(platform_error (platform_dll *)).hash_code();
		this_type_info.name = "free_library"_;
		this_type_info._func.signature = STRING(platform_error (platform_dll *));
		this_type_info._func.return_type = TYPEINFO(platform_error) ? TYPEINFO(platform_error)->hash : 0;
		this_type_info._func.param_count = 1;
		this_type_info._func.param_types[0] = TYPEINFO(platform_dll *) ? TYPEINFO(platform_dll *)->hash : 0;
		type_table.insert_if_unique(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_func;
		this_type_info.size = sizeof(void(*)());
		this_type_info.hash = (type_id)typeid(platform_error (platform_dll *, string)).hash_code();
		this_type_info.name = "load_library"_;
		this_type_info._func.signature = STRING(platform_error (platform_dll *, string));
		this_type_info._func.return_type = TYPEINFO(platform_error) ? TYPEINFO(platform_error)->hash : 0;
		this_type_info._func.param_count = 2;
		this_type_info._func.param_types[0] = TYPEINFO(platform_dll *) ? TYPEINFO(platform_dll *)->hash : 0;
		this_type_info._func.param_types[1] = TYPEINFO(string) ? TYPEINFO(string)->hash : 0;
		type_table.insert_if_unique(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_func;
		this_type_info.size = sizeof(void(*)());
		this_type_info.hash = (type_id)typeid(platform_error (void **, platform_dll *, string)).hash_code();
		this_type_info.name = "get_proc_address"_;
		this_type_info._func.signature = STRING(platform_error (void **, platform_dll *, string));
		this_type_info._func.return_type = TYPEINFO(platform_error) ? TYPEINFO(platform_error)->hash : 0;
		this_type_info._func.param_count = 3;
		this_type_info._func.param_types[0] = TYPEINFO(void **) ? TYPEINFO(void **)->hash : 0;
		this_type_info._func.param_types[1] = TYPEINFO(platform_dll *) ? TYPEINFO(platform_dll *)->hash : 0;
		this_type_info._func.param_types[2] = TYPEINFO(string) ? TYPEINFO(string)->hash : 0;
		type_table.insert_if_unique(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_func;
		this_type_info.size = sizeof(void(*)());
		this_type_info.hash = (type_id)typeid(void (void *)).hash_code();
		this_type_info.name = "heap_free"_;
		this_type_info._func.signature = STRING(void (void *));
		this_type_info._func.return_type = TYPEINFO(void) ? TYPEINFO(void)->hash : 0;
		this_type_info._func.param_count = 1;
		this_type_info._func.param_types[0] = TYPEINFO(void *) ? TYPEINFO(void *)->hash : 0;
		type_table.insert_if_unique(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_func;
		this_type_info.size = sizeof(void(*)());
		this_type_info.hash = (type_id)typeid(void *(u64)).hash_code();
		this_type_info.name = "heap_alloc"_;
		this_type_info._func.signature = STRING(void *(u64));
		this_type_info._func.return_type = TYPEINFO(void *) ? TYPEINFO(void *)->hash : 0;
		this_type_info._func.param_count = 1;
		this_type_info._func.param_types[0] = TYPEINFO(u64) ? TYPEINFO(u64)->hash : 0;
		type_table.insert_if_unique(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_func;
		this_type_info.size = sizeof(void(*)());
		this_type_info.hash = (type_id)typeid(void *(void *, u64)).hash_code();
		this_type_info.name = "heap_realloc"_;
		this_type_info._func.signature = STRING(void *(void *, u64));
		this_type_info._func.return_type = TYPEINFO(void *) ? TYPEINFO(void *)->hash : 0;
		this_type_info._func.param_count = 2;
		this_type_info._func.param_types[0] = TYPEINFO(void *) ? TYPEINFO(void *)->hash : 0;
		this_type_info._func.param_types[1] = TYPEINFO(u64) ? TYPEINFO(u64)->hash : 0;
		type_table.insert_if_unique(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_func;
		this_type_info.size = sizeof(void(*)());
		this_type_info.hash = (type_id)typeid(platform_thread_id ()).hash_code();
		this_type_info.name = "this_thread_id"_;
		this_type_info._func.signature = STRING(platform_thread_id ());
		this_type_info._func.return_type = TYPEINFO(platform_thread_id) ? TYPEINFO(platform_thread_id)->hash : 0;
		this_type_info._func.param_count = 0;
		type_table.insert_if_unique(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_func;
		this_type_info.size = sizeof(void(*)());
		this_type_info.hash = (type_id)typeid(void (i32)).hash_code();
		this_type_info.name = "thread_sleep"_;
		this_type_info._func.signature = STRING(void (i32));
		this_type_info._func.return_type = TYPEINFO(void) ? TYPEINFO(void)->hash : 0;
		this_type_info._func.param_count = 1;
		this_type_info._func.param_types[0] = TYPEINFO(i32) ? TYPEINFO(i32)->hash : 0;
		type_table.insert_if_unique(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_func;
		this_type_info.size = sizeof(void(*)());
		this_type_info.hash = (type_id)typeid(u64 (u64 *, u64)).hash_code();
		this_type_info.name = "atomic_exchange"_;
		this_type_info._func.signature = STRING(u64 (u64 *, u64));
		this_type_info._func.return_type = TYPEINFO(u64) ? TYPEINFO(u64)->hash : 0;
		this_type_info._func.param_count = 2;
		this_type_info._func.param_types[0] = TYPEINFO(u64 *) ? TYPEINFO(u64 *)->hash : 0;
		this_type_info._func.param_types[1] = TYPEINFO(u64) ? TYPEINFO(u64)->hash : 0;
		type_table.insert_if_unique(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_func;
		this_type_info.size = sizeof(void(*)());
		this_type_info.hash = (type_id)typeid(platform_error (platform_thread *)).hash_code();
		this_type_info.name = "destroy_thread"_;
		this_type_info._func.signature = STRING(platform_error (platform_thread *));
		this_type_info._func.return_type = TYPEINFO(platform_error) ? TYPEINFO(platform_error)->hash : 0;
		this_type_info._func.param_count = 1;
		this_type_info._func.param_types[0] = TYPEINFO(platform_thread *) ? TYPEINFO(platform_thread *)->hash : 0;
		type_table.insert_if_unique(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_func;
		this_type_info.size = sizeof(void(*)());
		this_type_info.hash = (type_id)typeid(platform_thread_join_state (platform_thread *, i32)).hash_code();
		this_type_info.name = "join_thread"_;
		this_type_info._func.signature = STRING(platform_thread_join_state (platform_thread *, i32));
		this_type_info._func.return_type = TYPEINFO(platform_thread_join_state) ? TYPEINFO(platform_thread_join_state)->hash : 0;
		this_type_info._func.param_count = 2;
		this_type_info._func.param_types[0] = TYPEINFO(platform_thread *) ? TYPEINFO(platform_thread *)->hash : 0;
		this_type_info._func.param_types[1] = TYPEINFO(i32) ? TYPEINFO(i32)->hash : 0;
		type_table.insert_if_unique(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_func;
		this_type_info.size = sizeof(void(*)());
		this_type_info.hash = (type_id)typeid(platform_error (platform_thread *, i32 (*)(void *), void *, bool)).hash_code();
		this_type_info.name = "create_thread"_;
		this_type_info._func.signature = STRING(platform_error (platform_thread *, i32 (*)(void *), void *, bool));
		this_type_info._func.return_type = TYPEINFO(platform_error) ? TYPEINFO(platform_error)->hash : 0;
		this_type_info._func.param_count = 4;
		this_type_info._func.param_types[0] = TYPEINFO(platform_thread *) ? TYPEINFO(platform_thread *)->hash : 0;
		this_type_info._func.param_types[1] = TYPEINFO(i32 (*)(void *)) ? TYPEINFO(i32 (*)(void *))->hash : 0;
		this_type_info._func.param_types[2] = TYPEINFO(void *) ? TYPEINFO(void *)->hash : 0;
		this_type_info._func.param_types[3] = TYPEINFO(bool) ? TYPEINFO(bool)->hash : 0;
		type_table.insert_if_unique(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_func;
		this_type_info.size = sizeof(void(*)());
		this_type_info.hash = (type_id)typeid(platform_error (platform_semaphore *)).hash_code();
		this_type_info.name = "destroy_semaphore"_;
		this_type_info._func.signature = STRING(platform_error (platform_semaphore *));
		this_type_info._func.return_type = TYPEINFO(platform_error) ? TYPEINFO(platform_error)->hash : 0;
		this_type_info._func.param_count = 1;
		this_type_info._func.param_types[0] = TYPEINFO(platform_semaphore *) ? TYPEINFO(platform_semaphore *)->hash : 0;
		type_table.insert_if_unique(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_func;
		this_type_info.size = sizeof(void(*)());
		this_type_info.hash = (type_id)typeid(platform_error (platform_semaphore *, i32)).hash_code();
		this_type_info.name = "signal_semaphore"_;
		this_type_info._func.signature = STRING(platform_error (platform_semaphore *, i32));
		this_type_info._func.return_type = TYPEINFO(platform_error) ? TYPEINFO(platform_error)->hash : 0;
		this_type_info._func.param_count = 2;
		this_type_info._func.param_types[0] = TYPEINFO(platform_semaphore *) ? TYPEINFO(platform_semaphore *)->hash : 0;
		this_type_info._func.param_types[1] = TYPEINFO(i32) ? TYPEINFO(i32)->hash : 0;
		type_table.insert_if_unique(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_func;
		this_type_info.size = sizeof(void(*)());
		this_type_info.hash = (type_id)typeid(platform_error (platform_semaphore *, i32, i32)).hash_code();
		this_type_info.name = "create_semaphore"_;
		this_type_info._func.signature = STRING(platform_error (platform_semaphore *, i32, i32));
		this_type_info._func.return_type = TYPEINFO(platform_error) ? TYPEINFO(platform_error)->hash : 0;
		this_type_info._func.param_count = 3;
		this_type_info._func.param_types[0] = TYPEINFO(platform_semaphore *) ? TYPEINFO(platform_semaphore *)->hash : 0;
		this_type_info._func.param_types[1] = TYPEINFO(i32) ? TYPEINFO(i32)->hash : 0;
		this_type_info._func.param_types[2] = TYPEINFO(i32) ? TYPEINFO(i32)->hash : 0;
		type_table.insert_if_unique(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_func;
		this_type_info.size = sizeof(void(*)());
		this_type_info.hash = (type_id)typeid(platform_semaphore_state (platform_semaphore *, i32)).hash_code();
		this_type_info.name = "wait_semaphore"_;
		this_type_info._func.signature = STRING(platform_semaphore_state (platform_semaphore *, i32));
		this_type_info._func.return_type = TYPEINFO(platform_semaphore_state) ? TYPEINFO(platform_semaphore_state)->hash : 0;
		this_type_info._func.param_count = 2;
		this_type_info._func.param_types[0] = TYPEINFO(platform_semaphore *) ? TYPEINFO(platform_semaphore *)->hash : 0;
		this_type_info._func.param_types[1] = TYPEINFO(i32) ? TYPEINFO(i32)->hash : 0;
		type_table.insert_if_unique(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_func;
		this_type_info.size = sizeof(void(*)());
		this_type_info.hash = (type_id)typeid(void (platform_mutex *)).hash_code();
		this_type_info.name = "aquire_mutex"_;
		this_type_info._func.signature = STRING(void (platform_mutex *));
		this_type_info._func.return_type = TYPEINFO(void) ? TYPEINFO(void)->hash : 0;
		this_type_info._func.param_count = 1;
		this_type_info._func.param_types[0] = TYPEINFO(platform_mutex *) ? TYPEINFO(platform_mutex *)->hash : 0;
		type_table.insert_if_unique(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_func;
		this_type_info.size = sizeof(void(*)());
		this_type_info.hash = (type_id)typeid(void (platform_mutex *)).hash_code();
		this_type_info.name = "release_mutex"_;
		this_type_info._func.signature = STRING(void (platform_mutex *));
		this_type_info._func.return_type = TYPEINFO(void) ? TYPEINFO(void)->hash : 0;
		this_type_info._func.param_count = 1;
		this_type_info._func.param_types[0] = TYPEINFO(platform_mutex *) ? TYPEINFO(platform_mutex *)->hash : 0;
		type_table.insert_if_unique(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_func;
		this_type_info.size = sizeof(void(*)());
		this_type_info.hash = (type_id)typeid(void (platform_mutex *)).hash_code();
		this_type_info.name = "destroy_mutex"_;
		this_type_info._func.signature = STRING(void (platform_mutex *));
		this_type_info._func.return_type = TYPEINFO(void) ? TYPEINFO(void)->hash : 0;
		this_type_info._func.param_count = 1;
		this_type_info._func.param_types[0] = TYPEINFO(platform_mutex *) ? TYPEINFO(platform_mutex *)->hash : 0;
		type_table.insert_if_unique(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_func;
		this_type_info.size = sizeof(void(*)());
		this_type_info.hash = (type_id)typeid(bool (platform_mutex *)).hash_code();
		this_type_info.name = "try_aquire_mutex"_;
		this_type_info._func.signature = STRING(bool (platform_mutex *));
		this_type_info._func.return_type = TYPEINFO(bool) ? TYPEINFO(bool)->hash : 0;
		this_type_info._func.param_count = 1;
		this_type_info._func.param_types[0] = TYPEINFO(platform_mutex *) ? TYPEINFO(platform_mutex *)->hash : 0;
		type_table.insert_if_unique(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_func;
		this_type_info.size = sizeof(void(*)());
		this_type_info.hash = (type_id)typeid(void (platform_mutex *, bool)).hash_code();
		this_type_info.name = "create_mutex"_;
		this_type_info._func.signature = STRING(void (platform_mutex *, bool));
		this_type_info._func.return_type = TYPEINFO(void) ? TYPEINFO(void)->hash : 0;
		this_type_info._func.param_count = 2;
		this_type_info._func.param_types[0] = TYPEINFO(platform_mutex *) ? TYPEINFO(platform_mutex *)->hash : 0;
		this_type_info._func.param_types[1] = TYPEINFO(bool) ? TYPEINFO(bool)->hash : 0;
		type_table.insert_if_unique(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_func;
		this_type_info.size = sizeof(void(*)());
		this_type_info.hash = (type_id)typeid(i32 ()).hash_code();
		this_type_info.name = "get_num_cpus"_;
		this_type_info._func.signature = STRING(i32 ());
		this_type_info._func.return_type = TYPEINFO(i32) ? TYPEINFO(i32)->hash : 0;
		this_type_info._func.param_count = 0;
		type_table.insert_if_unique(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_func;
		this_type_info.size = sizeof(void(*)());
		this_type_info.hash = (type_id)typeid(i32 ()).hash_code();
		this_type_info.name = "get_phys_cpus"_;
		this_type_info._func.signature = STRING(i32 ());
		this_type_info._func.return_type = TYPEINFO(i32) ? TYPEINFO(i32)->hash : 0;
		this_type_info._func.param_count = 0;
		type_table.insert_if_unique(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_func;
		this_type_info.size = sizeof(void(*)());
		this_type_info.hash = (type_id)typeid(platform_error (string *)).hash_code();
		this_type_info.name = "get_bin_path"_;
		this_type_info._func.signature = STRING(platform_error (string *));
		this_type_info._func.return_type = TYPEINFO(platform_error) ? TYPEINFO(platform_error)->hash : 0;
		this_type_info._func.param_count = 1;
		this_type_info._func.param_types[0] = TYPEINFO(string *) ? TYPEINFO(string *)->hash : 0;
		type_table.insert_if_unique(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_func;
		this_type_info.size = sizeof(void(*)());
		this_type_info.hash = (type_id)typeid(u32 (platform_file *)).hash_code();
		this_type_info.name = "file_size"_;
		this_type_info._func.signature = STRING(u32 (platform_file *));
		this_type_info._func.return_type = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._func.param_count = 1;
		this_type_info._func.param_types[0] = TYPEINFO(platform_file *) ? TYPEINFO(platform_file *)->hash : 0;
		type_table.insert_if_unique(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_func;
		this_type_info.size = sizeof(void(*)());
		this_type_info.hash = (type_id)typeid(platform_error (platform_file *)).hash_code();
		this_type_info.name = "close_file"_;
		this_type_info._func.signature = STRING(platform_error (platform_file *));
		this_type_info._func.return_type = TYPEINFO(platform_error) ? TYPEINFO(platform_error)->hash : 0;
		this_type_info._func.param_count = 1;
		this_type_info._func.param_types[0] = TYPEINFO(platform_file *) ? TYPEINFO(platform_file *)->hash : 0;
		type_table.insert_if_unique(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_func;
		this_type_info.size = sizeof(void(*)());
		this_type_info.hash = (type_id)typeid(platform_error (platform_file *, void *, u32)).hash_code();
		this_type_info.name = "read_file"_;
		this_type_info._func.signature = STRING(platform_error (platform_file *, void *, u32));
		this_type_info._func.return_type = TYPEINFO(platform_error) ? TYPEINFO(platform_error)->hash : 0;
		this_type_info._func.param_count = 3;
		this_type_info._func.param_types[0] = TYPEINFO(platform_file *) ? TYPEINFO(platform_file *)->hash : 0;
		this_type_info._func.param_types[1] = TYPEINFO(void *) ? TYPEINFO(void *)->hash : 0;
		this_type_info._func.param_types[2] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		type_table.insert_if_unique(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_func;
		this_type_info.size = sizeof(void(*)());
		this_type_info.hash = (type_id)typeid(platform_error (platform_file *, void *, u32)).hash_code();
		this_type_info.name = "write_file"_;
		this_type_info._func.signature = STRING(platform_error (platform_file *, void *, u32));
		this_type_info._func.return_type = TYPEINFO(platform_error) ? TYPEINFO(platform_error)->hash : 0;
		this_type_info._func.param_count = 3;
		this_type_info._func.param_types[0] = TYPEINFO(platform_file *) ? TYPEINFO(platform_file *)->hash : 0;
		this_type_info._func.param_types[1] = TYPEINFO(void *) ? TYPEINFO(void *)->hash : 0;
		this_type_info._func.param_types[2] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		type_table.insert_if_unique(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_func;
		this_type_info.size = sizeof(void(*)());
		this_type_info.hash = (type_id)typeid(platform_error (string, string, bool)).hash_code();
		this_type_info.name = "copy_file"_;
		this_type_info._func.signature = STRING(platform_error (string, string, bool));
		this_type_info._func.return_type = TYPEINFO(platform_error) ? TYPEINFO(platform_error)->hash : 0;
		this_type_info._func.param_count = 3;
		this_type_info._func.param_types[0] = TYPEINFO(string) ? TYPEINFO(string)->hash : 0;
		this_type_info._func.param_types[1] = TYPEINFO(string) ? TYPEINFO(string)->hash : 0;
		this_type_info._func.param_types[2] = TYPEINFO(bool) ? TYPEINFO(bool)->hash : 0;
		type_table.insert_if_unique(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_func;
		this_type_info.size = sizeof(void(*)());
		this_type_info.hash = (type_id)typeid(platform_error (platform_file_attributes *, string)).hash_code();
		this_type_info.name = "get_file_attributes"_;
		this_type_info._func.signature = STRING(platform_error (platform_file_attributes *, string));
		this_type_info._func.return_type = TYPEINFO(platform_error) ? TYPEINFO(platform_error)->hash : 0;
		this_type_info._func.param_count = 2;
		this_type_info._func.param_types[0] = TYPEINFO(platform_file_attributes *) ? TYPEINFO(platform_file_attributes *)->hash : 0;
		this_type_info._func.param_types[1] = TYPEINFO(string) ? TYPEINFO(string)->hash : 0;
		type_table.insert_if_unique(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_func;
		this_type_info.size = sizeof(void(*)());
		this_type_info.hash = (type_id)typeid(platform_error (platform_file *, string, platform_file_open_op)).hash_code();
		this_type_info.name = "create_file"_;
		this_type_info._func.signature = STRING(platform_error (platform_file *, string, platform_file_open_op));
		this_type_info._func.return_type = TYPEINFO(platform_error) ? TYPEINFO(platform_error)->hash : 0;
		this_type_info._func.param_count = 3;
		this_type_info._func.param_types[0] = TYPEINFO(platform_file *) ? TYPEINFO(platform_file *)->hash : 0;
		this_type_info._func.param_types[1] = TYPEINFO(string) ? TYPEINFO(string)->hash : 0;
		this_type_info._func.param_types[2] = TYPEINFO(platform_file_open_op) ? TYPEINFO(platform_file_open_op)->hash : 0;
		type_table.insert_if_unique(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_func;
		this_type_info.size = sizeof(void(*)());
		this_type_info.hash = (type_id)typeid(bool (platform_file_attributes *, platform_file_attributes *)).hash_code();
		this_type_info.name = "test_file_written"_;
		this_type_info._func.signature = STRING(bool (platform_file_attributes *, platform_file_attributes *));
		this_type_info._func.return_type = TYPEINFO(bool) ? TYPEINFO(bool)->hash : 0;
		this_type_info._func.param_count = 2;
		this_type_info._func.param_types[0] = TYPEINFO(platform_file_attributes *) ? TYPEINFO(platform_file_attributes *)->hash : 0;
		this_type_info._func.param_types[1] = TYPEINFO(platform_file_attributes *) ? TYPEINFO(platform_file_attributes *)->hash : 0;
		type_table.insert_if_unique(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_func;
		this_type_info.size = sizeof(void(*)());
		this_type_info.hash = (type_id)typeid(platform_error (string)).hash_code();
		this_type_info.name = "shell_exec"_;
		this_type_info._func.signature = STRING(platform_error (string));
		this_type_info._func.return_type = TYPEINFO(platform_error) ? TYPEINFO(platform_error)->hash : 0;
		this_type_info._func.param_count = 1;
		this_type_info._func.param_types[0] = TYPEINFO(string) ? TYPEINFO(string)->hash : 0;
		type_table.insert_if_unique(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_func;
		this_type_info.size = sizeof(void(*)());
		this_type_info.hash = (type_id)typeid(platform_error (string)).hash_code();
		this_type_info.name = "write_stdout_str"_;
		this_type_info._func.signature = STRING(platform_error (string));
		this_type_info._func.return_type = TYPEINFO(platform_error) ? TYPEINFO(platform_error)->hash : 0;
		this_type_info._func.param_count = 1;
		this_type_info._func.param_types[0] = TYPEINFO(string) ? TYPEINFO(string)->hash : 0;
		type_table.insert_if_unique(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_func;
		this_type_info.size = sizeof(void(*)());
		this_type_info.hash = (type_id)typeid(platform_error (void *, u32)).hash_code();
		this_type_info.name = "write_stdout"_;
		this_type_info._func.signature = STRING(platform_error (void *, u32));
		this_type_info._func.return_type = TYPEINFO(platform_error) ? TYPEINFO(platform_error)->hash : 0;
		this_type_info._func.param_count = 2;
		this_type_info._func.param_types[0] = TYPEINFO(void *) ? TYPEINFO(void *)->hash : 0;
		this_type_info._func.param_types[1] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		type_table.insert_if_unique(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_func;
		this_type_info.size = sizeof(void(*)());
		this_type_info.hash = (type_id)typeid(string ()).hash_code();
		this_type_info.name = "time_string"_;
		this_type_info._func.signature = STRING(string ());
		this_type_info._func.return_type = TYPEINFO(string) ? TYPEINFO(string)->hash : 0;
		this_type_info._func.param_count = 0;
		type_table.insert_if_unique(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(platform_api);
		this_type_info.name = "platform_api"_;
		this_type_info.hash = (type_id)typeid(platform_api).hash_code();
		this_type_info._struct.member_count = 66;
		this_type_info._struct.member_types[0] = TYPEINFO(platform_dll *) ? TYPEINFO(platform_dll *)->hash : 0;
		this_type_info._struct.member_names[0] = "your_dll"_;
		this_type_info._struct.member_offsets[0] = offsetof(platform_api,your_dll);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(bool (*)(platform_window *)) ? TYPEINFO(bool (*)(platform_window *))->hash : 0;
		this_type_info._struct.member_names[1] = "window_focused"_;
		this_type_info._struct.member_offsets[1] = offsetof(platform_api,window_focused);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(platform_error (*)(platform_window *)) ? TYPEINFO(platform_error (*)(platform_window *))->hash : 0;
		this_type_info._struct.member_names[2] = "swap_buffers"_;
		this_type_info._struct.member_offsets[2] = offsetof(platform_api,swap_buffers);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(platform_error (*)(platform_window *)) ? TYPEINFO(platform_error (*)(platform_window *))->hash : 0;
		this_type_info._struct.member_names[3] = "create_window"_;
		this_type_info._struct.member_offsets[3] = offsetof(platform_api,create_window);
		this_type_info._struct.member_circular[3] = 0;
		this_type_info._struct.member_types[4] = TYPEINFO(platform_error (*)(platform_window *)) ? TYPEINFO(platform_error (*)(platform_window *))->hash : 0;
		this_type_info._struct.member_names[4] = "destroy_window"_;
		this_type_info._struct.member_offsets[4] = offsetof(platform_api,destroy_window);
		this_type_info._struct.member_circular[4] = 0;
		this_type_info._struct.member_types[5] = TYPEINFO(platform_error (*)(platform_window *)) ? TYPEINFO(platform_error (*)(platform_window *))->hash : 0;
		this_type_info._struct.member_names[5] = "recreate_window"_;
		this_type_info._struct.member_offsets[5] = offsetof(platform_api,recreate_window);
		this_type_info._struct.member_circular[5] = 0;
		this_type_info._struct.member_types[6] = TYPEINFO(bool (*)(platform_window *)) ? TYPEINFO(bool (*)(platform_window *))->hash : 0;
		this_type_info._struct.member_names[6] = "apply_window_settings"_;
		this_type_info._struct.member_offsets[6] = offsetof(platform_api,apply_window_settings);
		this_type_info._struct.member_circular[6] = 0;
		this_type_info._struct.member_types[7] = TYPEINFO(platform_error (*)(platform_window *, i32 *, i32 *)) ? TYPEINFO(platform_error (*)(platform_window *, i32 *, i32 *))->hash : 0;
		this_type_info._struct.member_names[7] = "get_window_size"_;
		this_type_info._struct.member_offsets[7] = offsetof(platform_api,get_window_size);
		this_type_info._struct.member_circular[7] = 0;
		this_type_info._struct.member_types[8] = TYPEINFO(platform_error (*)(platform_window *, i32 *, i32 *)) ? TYPEINFO(platform_error (*)(platform_window *, i32 *, i32 *))->hash : 0;
		this_type_info._struct.member_names[8] = "get_window_drawable"_;
		this_type_info._struct.member_offsets[8] = offsetof(platform_api,get_window_drawable);
		this_type_info._struct.member_circular[8] = 0;
		this_type_info._struct.member_types[9] = TYPEINFO(string (*)()) ? TYPEINFO(string (*)())->hash : 0;
		this_type_info._struct.member_names[9] = "get_clipboard"_;
		this_type_info._struct.member_offsets[9] = offsetof(platform_api,get_clipboard);
		this_type_info._struct.member_circular[9] = 0;
		this_type_info._struct.member_types[10] = TYPEINFO(void (*)(string)) ? TYPEINFO(void (*)(string))->hash : 0;
		this_type_info._struct.member_names[10] = "set_clipboard"_;
		this_type_info._struct.member_offsets[10] = offsetof(platform_api,set_clipboard);
		this_type_info._struct.member_circular[10] = 0;
		this_type_info._struct.member_types[11] = TYPEINFO(bool (*)()) ? TYPEINFO(bool (*)())->hash : 0;
		this_type_info._struct.member_names[11] = "cursor_shown"_;
		this_type_info._struct.member_offsets[11] = offsetof(platform_api,cursor_shown);
		this_type_info._struct.member_circular[11] = 0;
		this_type_info._struct.member_types[12] = TYPEINFO(void (*)(bool)) ? TYPEINFO(void (*)(bool))->hash : 0;
		this_type_info._struct.member_names[12] = "show_cursor"_;
		this_type_info._struct.member_offsets[12] = offsetof(platform_api,show_cursor);
		this_type_info._struct.member_circular[12] = 0;
		this_type_info._struct.member_types[13] = TYPEINFO(void (*)(platform_window *)) ? TYPEINFO(void (*)(platform_window *))->hash : 0;
		this_type_info._struct.member_names[13] = "capture_mouse"_;
		this_type_info._struct.member_offsets[13] = offsetof(platform_api,capture_mouse);
		this_type_info._struct.member_circular[13] = 0;
		this_type_info._struct.member_types[14] = TYPEINFO(void (*)(platform_window *)) ? TYPEINFO(void (*)(platform_window *))->hash : 0;
		this_type_info._struct.member_names[14] = "release_mouse"_;
		this_type_info._struct.member_offsets[14] = offsetof(platform_api,release_mouse);
		this_type_info._struct.member_circular[14] = 0;
		this_type_info._struct.member_types[15] = TYPEINFO(platform_error (*)(platform_window *, i32, i32)) ? TYPEINFO(platform_error (*)(platform_window *, i32, i32))->hash : 0;
		this_type_info._struct.member_names[15] = "set_cursor_pos"_;
		this_type_info._struct.member_offsets[15] = offsetof(platform_api,set_cursor_pos);
		this_type_info._struct.member_circular[15] = 0;
		this_type_info._struct.member_types[16] = TYPEINFO(void (*)(platform_window *, platform_cursor)) ? TYPEINFO(void (*)(platform_window *, platform_cursor))->hash : 0;
		this_type_info._struct.member_names[16] = "set_cursor"_;
		this_type_info._struct.member_offsets[16] = offsetof(platform_api,set_cursor);
		this_type_info._struct.member_circular[16] = 0;
		this_type_info._struct.member_types[17] = TYPEINFO(platform_error (*)(platform_window *, i32 *, i32 *)) ? TYPEINFO(platform_error (*)(platform_window *, i32 *, i32 *))->hash : 0;
		this_type_info._struct.member_names[17] = "get_cursor_pos"_;
		this_type_info._struct.member_offsets[17] = offsetof(platform_api,get_cursor_pos);
		this_type_info._struct.member_circular[17] = 0;
		this_type_info._struct.member_types[18] = TYPEINFO(bool (*)(platform_mouseflag)) ? TYPEINFO(bool (*)(platform_mouseflag))->hash : 0;
		this_type_info._struct.member_names[18] = "mousedown"_;
		this_type_info._struct.member_offsets[18] = offsetof(platform_api,mousedown);
		this_type_info._struct.member_circular[18] = 0;
		this_type_info._struct.member_types[19] = TYPEINFO(void (*)()) ? TYPEINFO(void (*)())->hash : 0;
		this_type_info._struct.member_names[19] = "debug_break"_;
		this_type_info._struct.member_offsets[19] = offsetof(platform_api,debug_break);
		this_type_info._struct.member_circular[19] = 0;
		this_type_info._struct.member_types[20] = TYPEINFO(bool (*)()) ? TYPEINFO(bool (*)())->hash : 0;
		this_type_info._struct.member_names[20] = "is_debugging"_;
		this_type_info._struct.member_offsets[20] = offsetof(platform_api,is_debugging);
		this_type_info._struct.member_circular[20] = 0;
		this_type_info._struct.member_types[21] = TYPEINFO(u64 (*)()) ? TYPEINFO(u64 (*)())->hash : 0;
		this_type_info._struct.member_names[21] = "get_perfcount"_;
		this_type_info._struct.member_offsets[21] = offsetof(platform_api,get_perfcount);
		this_type_info._struct.member_circular[21] = 0;
		this_type_info._struct.member_types[22] = TYPEINFO(u64 (*)()) ? TYPEINFO(u64 (*)())->hash : 0;
		this_type_info._struct.member_names[22] = "get_perfcount_freq"_;
		this_type_info._struct.member_offsets[22] = offsetof(platform_api,get_perfcount_freq);
		this_type_info._struct.member_circular[22] = 0;
		this_type_info._struct.member_types[23] = TYPEINFO(platform_error (*)()) ? TYPEINFO(platform_error (*)())->hash : 0;
		this_type_info._struct.member_names[23] = "wait_message"_;
		this_type_info._struct.member_offsets[23] = offsetof(platform_api,wait_message);
		this_type_info._struct.member_circular[23] = 0;
		this_type_info._struct.member_types[24] = TYPEINFO(void (*)(platform_event)) ? TYPEINFO(void (*)(platform_event))->hash : 0;
		this_type_info._struct.member_names[24] = "queue_event"_;
		this_type_info._struct.member_offsets[24] = offsetof(platform_api,queue_event);
		this_type_info._struct.member_circular[24] = 0;
		this_type_info._struct.member_types[25] = TYPEINFO(void (*)(platform_window *)) ? TYPEINFO(void (*)(platform_window *))->hash : 0;
		this_type_info._struct.member_names[25] = "pump_events"_;
		this_type_info._struct.member_offsets[25] = offsetof(platform_api,pump_events);
		this_type_info._struct.member_circular[25] = 0;
		this_type_info._struct.member_types[26] = TYPEINFO(void (*)(void (*)(void *, platform_event), void *)) ? TYPEINFO(void (*)(void (*)(void *, platform_event), void *))->hash : 0;
		this_type_info._struct.member_names[26] = "set_queue_callback"_;
		this_type_info._struct.member_offsets[26] = offsetof(platform_api,set_queue_callback);
		this_type_info._struct.member_circular[26] = 0;
		this_type_info._struct.member_types[27] = TYPEINFO(bool (*)(platform_keycode)) ? TYPEINFO(bool (*)(platform_keycode))->hash : 0;
		this_type_info._struct.member_names[27] = "keydown"_;
		this_type_info._struct.member_offsets[27] = offsetof(platform_api,keydown);
		this_type_info._struct.member_circular[27] = 0;
		this_type_info._struct.member_types[28] = TYPEINFO(i32 (*)(platform_keycode)) ? TYPEINFO(i32 (*)(platform_keycode))->hash : 0;
		this_type_info._struct.member_names[28] = "get_scancode"_;
		this_type_info._struct.member_offsets[28] = offsetof(platform_api,get_scancode);
		this_type_info._struct.member_circular[28] = 0;
		this_type_info._struct.member_types[29] = TYPEINFO(void *(*)(string)) ? TYPEINFO(void *(*)(string))->hash : 0;
		this_type_info._struct.member_names[29] = "get_glproc"_;
		this_type_info._struct.member_offsets[29] = offsetof(platform_api,get_glproc);
		this_type_info._struct.member_circular[29] = 0;
		this_type_info._struct.member_types[30] = TYPEINFO(platform_error (*)(platform_dll *)) ? TYPEINFO(platform_error (*)(platform_dll *))->hash : 0;
		this_type_info._struct.member_names[30] = "free_library"_;
		this_type_info._struct.member_offsets[30] = offsetof(platform_api,free_library);
		this_type_info._struct.member_circular[30] = 0;
		this_type_info._struct.member_types[31] = TYPEINFO(platform_error (*)(platform_dll *, string)) ? TYPEINFO(platform_error (*)(platform_dll *, string))->hash : 0;
		this_type_info._struct.member_names[31] = "load_library"_;
		this_type_info._struct.member_offsets[31] = offsetof(platform_api,load_library);
		this_type_info._struct.member_circular[31] = 0;
		this_type_info._struct.member_types[32] = TYPEINFO(platform_error (*)(void **, platform_dll *, string)) ? TYPEINFO(platform_error (*)(void **, platform_dll *, string))->hash : 0;
		this_type_info._struct.member_names[32] = "get_proc_address"_;
		this_type_info._struct.member_offsets[32] = offsetof(platform_api,get_proc_address);
		this_type_info._struct.member_circular[32] = 0;
		this_type_info._struct.member_types[33] = TYPEINFO(void (*)(void *)) ? TYPEINFO(void (*)(void *))->hash : 0;
		this_type_info._struct.member_names[33] = "heap_free"_;
		this_type_info._struct.member_offsets[33] = offsetof(platform_api,heap_free);
		this_type_info._struct.member_circular[33] = 0;
		this_type_info._struct.member_types[34] = TYPEINFO(void *(*)(u64)) ? TYPEINFO(void *(*)(u64))->hash : 0;
		this_type_info._struct.member_names[34] = "heap_alloc"_;
		this_type_info._struct.member_offsets[34] = offsetof(platform_api,heap_alloc);
		this_type_info._struct.member_circular[34] = 0;
		this_type_info._struct.member_types[35] = TYPEINFO(void *(*)(void *, u64)) ? TYPEINFO(void *(*)(void *, u64))->hash : 0;
		this_type_info._struct.member_names[35] = "heap_realloc"_;
		this_type_info._struct.member_offsets[35] = offsetof(platform_api,heap_realloc);
		this_type_info._struct.member_circular[35] = 0;
		this_type_info._struct.member_types[36] = TYPEINFO(platform_thread_id (*)()) ? TYPEINFO(platform_thread_id (*)())->hash : 0;
		this_type_info._struct.member_names[36] = "this_thread_id"_;
		this_type_info._struct.member_offsets[36] = offsetof(platform_api,this_thread_id);
		this_type_info._struct.member_circular[36] = 0;
		this_type_info._struct.member_types[37] = TYPEINFO(void (*)(i32)) ? TYPEINFO(void (*)(i32))->hash : 0;
		this_type_info._struct.member_names[37] = "thread_sleep"_;
		this_type_info._struct.member_offsets[37] = offsetof(platform_api,thread_sleep);
		this_type_info._struct.member_circular[37] = 0;
		this_type_info._struct.member_types[38] = TYPEINFO(u64 (*)(u64 *, u64)) ? TYPEINFO(u64 (*)(u64 *, u64))->hash : 0;
		this_type_info._struct.member_names[38] = "atomic_exchange"_;
		this_type_info._struct.member_offsets[38] = offsetof(platform_api,atomic_exchange);
		this_type_info._struct.member_circular[38] = 0;
		this_type_info._struct.member_types[39] = TYPEINFO(platform_error (*)(platform_thread *)) ? TYPEINFO(platform_error (*)(platform_thread *))->hash : 0;
		this_type_info._struct.member_names[39] = "destroy_thread"_;
		this_type_info._struct.member_offsets[39] = offsetof(platform_api,destroy_thread);
		this_type_info._struct.member_circular[39] = 0;
		this_type_info._struct.member_types[40] = TYPEINFO(platform_thread_join_state (*)(platform_thread *, i32)) ? TYPEINFO(platform_thread_join_state (*)(platform_thread *, i32))->hash : 0;
		this_type_info._struct.member_names[40] = "join_thread"_;
		this_type_info._struct.member_offsets[40] = offsetof(platform_api,join_thread);
		this_type_info._struct.member_circular[40] = 0;
		this_type_info._struct.member_types[41] = TYPEINFO(platform_error (*)(platform_thread *, i32 (*)(void *), void *, bool)) ? TYPEINFO(platform_error (*)(platform_thread *, i32 (*)(void *), void *, bool))->hash : 0;
		this_type_info._struct.member_names[41] = "create_thread"_;
		this_type_info._struct.member_offsets[41] = offsetof(platform_api,create_thread);
		this_type_info._struct.member_circular[41] = 0;
		this_type_info._struct.member_types[42] = TYPEINFO(platform_error (*)(platform_semaphore *)) ? TYPEINFO(platform_error (*)(platform_semaphore *))->hash : 0;
		this_type_info._struct.member_names[42] = "destroy_semaphore"_;
		this_type_info._struct.member_offsets[42] = offsetof(platform_api,destroy_semaphore);
		this_type_info._struct.member_circular[42] = 0;
		this_type_info._struct.member_types[43] = TYPEINFO(platform_error (*)(platform_semaphore *, i32)) ? TYPEINFO(platform_error (*)(platform_semaphore *, i32))->hash : 0;
		this_type_info._struct.member_names[43] = "signal_semaphore"_;
		this_type_info._struct.member_offsets[43] = offsetof(platform_api,signal_semaphore);
		this_type_info._struct.member_circular[43] = 0;
		this_type_info._struct.member_types[44] = TYPEINFO(platform_error (*)(platform_semaphore *, i32, i32)) ? TYPEINFO(platform_error (*)(platform_semaphore *, i32, i32))->hash : 0;
		this_type_info._struct.member_names[44] = "create_semaphore"_;
		this_type_info._struct.member_offsets[44] = offsetof(platform_api,create_semaphore);
		this_type_info._struct.member_circular[44] = 0;
		this_type_info._struct.member_types[45] = TYPEINFO(platform_semaphore_state (*)(platform_semaphore *, i32)) ? TYPEINFO(platform_semaphore_state (*)(platform_semaphore *, i32))->hash : 0;
		this_type_info._struct.member_names[45] = "wait_semaphore"_;
		this_type_info._struct.member_offsets[45] = offsetof(platform_api,wait_semaphore);
		this_type_info._struct.member_circular[45] = 0;
		this_type_info._struct.member_types[46] = TYPEINFO(void (*)(platform_mutex *)) ? TYPEINFO(void (*)(platform_mutex *))->hash : 0;
		this_type_info._struct.member_names[46] = "aquire_mutex"_;
		this_type_info._struct.member_offsets[46] = offsetof(platform_api,aquire_mutex);
		this_type_info._struct.member_circular[46] = 0;
		this_type_info._struct.member_types[47] = TYPEINFO(void (*)(platform_mutex *)) ? TYPEINFO(void (*)(platform_mutex *))->hash : 0;
		this_type_info._struct.member_names[47] = "release_mutex"_;
		this_type_info._struct.member_offsets[47] = offsetof(platform_api,release_mutex);
		this_type_info._struct.member_circular[47] = 0;
		this_type_info._struct.member_types[48] = TYPEINFO(void (*)(platform_mutex *)) ? TYPEINFO(void (*)(platform_mutex *))->hash : 0;
		this_type_info._struct.member_names[48] = "destroy_mutex"_;
		this_type_info._struct.member_offsets[48] = offsetof(platform_api,destroy_mutex);
		this_type_info._struct.member_circular[48] = 0;
		this_type_info._struct.member_types[49] = TYPEINFO(bool (*)(platform_mutex *)) ? TYPEINFO(bool (*)(platform_mutex *))->hash : 0;
		this_type_info._struct.member_names[49] = "try_aquire_mutex"_;
		this_type_info._struct.member_offsets[49] = offsetof(platform_api,try_aquire_mutex);
		this_type_info._struct.member_circular[49] = 0;
		this_type_info._struct.member_types[50] = TYPEINFO(void (*)(platform_mutex *, bool)) ? TYPEINFO(void (*)(platform_mutex *, bool))->hash : 0;
		this_type_info._struct.member_names[50] = "create_mutex"_;
		this_type_info._struct.member_offsets[50] = offsetof(platform_api,create_mutex);
		this_type_info._struct.member_circular[50] = 0;
		this_type_info._struct.member_types[51] = TYPEINFO(i32 (*)()) ? TYPEINFO(i32 (*)())->hash : 0;
		this_type_info._struct.member_names[51] = "get_num_cpus"_;
		this_type_info._struct.member_offsets[51] = offsetof(platform_api,get_num_cpus);
		this_type_info._struct.member_circular[51] = 0;
		this_type_info._struct.member_types[52] = TYPEINFO(i32 (*)()) ? TYPEINFO(i32 (*)())->hash : 0;
		this_type_info._struct.member_names[52] = "get_phys_cpus"_;
		this_type_info._struct.member_offsets[52] = offsetof(platform_api,get_phys_cpus);
		this_type_info._struct.member_circular[52] = 0;
		this_type_info._struct.member_types[53] = TYPEINFO(platform_error (*)(string *)) ? TYPEINFO(platform_error (*)(string *))->hash : 0;
		this_type_info._struct.member_names[53] = "get_bin_path"_;
		this_type_info._struct.member_offsets[53] = offsetof(platform_api,get_bin_path);
		this_type_info._struct.member_circular[53] = 0;
		this_type_info._struct.member_types[54] = TYPEINFO(u32 (*)(platform_file *)) ? TYPEINFO(u32 (*)(platform_file *))->hash : 0;
		this_type_info._struct.member_names[54] = "file_size"_;
		this_type_info._struct.member_offsets[54] = offsetof(platform_api,file_size);
		this_type_info._struct.member_circular[54] = 0;
		this_type_info._struct.member_types[55] = TYPEINFO(platform_error (*)(platform_file *)) ? TYPEINFO(platform_error (*)(platform_file *))->hash : 0;
		this_type_info._struct.member_names[55] = "close_file"_;
		this_type_info._struct.member_offsets[55] = offsetof(platform_api,close_file);
		this_type_info._struct.member_circular[55] = 0;
		this_type_info._struct.member_types[56] = TYPEINFO(platform_error (*)(platform_file *, void *, u32)) ? TYPEINFO(platform_error (*)(platform_file *, void *, u32))->hash : 0;
		this_type_info._struct.member_names[56] = "read_file"_;
		this_type_info._struct.member_offsets[56] = offsetof(platform_api,read_file);
		this_type_info._struct.member_circular[56] = 0;
		this_type_info._struct.member_types[57] = TYPEINFO(platform_error (*)(platform_file *, void *, u32)) ? TYPEINFO(platform_error (*)(platform_file *, void *, u32))->hash : 0;
		this_type_info._struct.member_names[57] = "write_file"_;
		this_type_info._struct.member_offsets[57] = offsetof(platform_api,write_file);
		this_type_info._struct.member_circular[57] = 0;
		this_type_info._struct.member_types[58] = TYPEINFO(platform_error (*)(string, string, bool)) ? TYPEINFO(platform_error (*)(string, string, bool))->hash : 0;
		this_type_info._struct.member_names[58] = "copy_file"_;
		this_type_info._struct.member_offsets[58] = offsetof(platform_api,copy_file);
		this_type_info._struct.member_circular[58] = 0;
		this_type_info._struct.member_types[59] = TYPEINFO(platform_error (*)(platform_file_attributes *, string)) ? TYPEINFO(platform_error (*)(platform_file_attributes *, string))->hash : 0;
		this_type_info._struct.member_names[59] = "get_file_attributes"_;
		this_type_info._struct.member_offsets[59] = offsetof(platform_api,get_file_attributes);
		this_type_info._struct.member_circular[59] = 0;
		this_type_info._struct.member_types[60] = TYPEINFO(platform_error (*)(platform_file *, string, platform_file_open_op)) ? TYPEINFO(platform_error (*)(platform_file *, string, platform_file_open_op))->hash : 0;
		this_type_info._struct.member_names[60] = "create_file"_;
		this_type_info._struct.member_offsets[60] = offsetof(platform_api,create_file);
		this_type_info._struct.member_circular[60] = 0;
		this_type_info._struct.member_types[61] = TYPEINFO(bool (*)(platform_file_attributes *, platform_file_attributes *)) ? TYPEINFO(bool (*)(platform_file_attributes *, platform_file_attributes *))->hash : 0;
		this_type_info._struct.member_names[61] = "test_file_written"_;
		this_type_info._struct.member_offsets[61] = offsetof(platform_api,test_file_written);
		this_type_info._struct.member_circular[61] = 0;
		this_type_info._struct.member_types[62] = TYPEINFO(platform_error (*)(string)) ? TYPEINFO(platform_error (*)(string))->hash : 0;
		this_type_info._struct.member_names[62] = "shell_exec"_;
		this_type_info._struct.member_offsets[62] = offsetof(platform_api,shell_exec);
		this_type_info._struct.member_circular[62] = 0;
		this_type_info._struct.member_types[63] = TYPEINFO(platform_error (*)(string)) ? TYPEINFO(platform_error (*)(string))->hash : 0;
		this_type_info._struct.member_names[63] = "write_stdout_str"_;
		this_type_info._struct.member_offsets[63] = offsetof(platform_api,write_stdout_str);
		this_type_info._struct.member_circular[63] = 0;
		this_type_info._struct.member_types[64] = TYPEINFO(platform_error (*)(void *, u32)) ? TYPEINFO(platform_error (*)(void *, u32))->hash : 0;
		this_type_info._struct.member_names[64] = "write_stdout"_;
		this_type_info._struct.member_offsets[64] = offsetof(platform_api,write_stdout);
		this_type_info._struct.member_circular[64] = 0;
		this_type_info._struct.member_types[65] = TYPEINFO(string (*)()) ? TYPEINFO(string (*)())->hash : 0;
		this_type_info._struct.member_names[65] = "time_string"_;
		this_type_info._struct.member_offsets[65] = offsetof(platform_api,time_string);
		this_type_info._struct.member_circular[65] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(_FPTR);
		this_type_info.name = "_FPTR"_;
		this_type_info.hash = (type_id)typeid(_FPTR).hash_code();
		this_type_info._struct.member_count = 2;
		this_type_info._struct.member_types[0] = TYPEINFO(void *) ? TYPEINFO(void *)->hash : 0;
		this_type_info._struct.member_names[0] = "func"_;
		this_type_info._struct.member_offsets[0] = offsetof(_FPTR,func);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(string) ? TYPEINFO(string)->hash : 0;
		this_type_info._struct.member_names[1] = "name"_;
		this_type_info._struct.member_offsets[1] = offsetof(_FPTR,name);
		this_type_info._struct.member_circular[1] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_array;
		this_type_info.size = sizeof(_FPTR [128]);
		this_type_info.name = STRING(_FPTR [128]);
		this_type_info.hash = (type_id)typeid(_FPTR [128]).hash_code();
		this_type_info._array.of = TYPEINFO(_FPTR) ? TYPEINFO(_FPTR)->hash : 0;
		this_type_info._array.length = 128;
		type_table.insert_if_unique(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(func_ptr_state);
		this_type_info.name = "func_ptr_state"_;
		this_type_info.hash = (type_id)typeid(func_ptr_state).hash_code();
		this_type_info._struct.member_count = 4;
		this_type_info._struct.member_types[0] = TYPEINFO(_FPTR [128]) ? TYPEINFO(_FPTR [128])->hash : 0;
		this_type_info._struct.member_names[0] = "all_ptrs"_;
		this_type_info._struct.member_offsets[0] = offsetof(func_ptr_state,all_ptrs);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[1] = "num_ptrs"_;
		this_type_info._struct.member_offsets[1] = offsetof(func_ptr_state,num_ptrs);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(platform_dll *) ? TYPEINFO(platform_dll *)->hash : 0;
		this_type_info._struct.member_names[2] = "this_dll"_;
		this_type_info._struct.member_offsets[2] = offsetof(func_ptr_state,this_dll);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(platform_mutex) ? TYPEINFO(platform_mutex)->hash : 0;
		this_type_info._struct.member_names[3] = "mut"_;
		this_type_info._struct.member_offsets[3] = offsetof(func_ptr_state,mut);
		this_type_info._struct.member_circular[3] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

#pragma push_macro("T")
#define T void*
#pragma push_macro("args")
#define args u64
	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(func_ptr<T,args>);
		this_type_info.name = "func_ptr"_;
		this_type_info.hash = (type_id)typeid(func_ptr<T,args>).hash_code();
		this_type_info._struct.member_count = 1;
#define __func_ptr__ func_ptr<T,args>
		this_type_info._struct.member_types[0] = TYPEINFO(_FPTR *) ? TYPEINFO(_FPTR *)->hash : 0;
		this_type_info._struct.member_names[0] = "data"_;
		this_type_info._struct.member_offsets[0] = offsetof(__func_ptr__, data);
		this_type_info._struct.member_circular[0] = 0;
#undef __func_ptr__
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

#pragma pop_macro("T")
#pragma pop_macro("args")

#pragma push_macro("T")
#define T void*
#pragma push_macro("args")
#define args void*
	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(func_ptr<T,args>);
		this_type_info.name = "func_ptr"_;
		this_type_info.hash = (type_id)typeid(func_ptr<T,args>).hash_code();
		this_type_info._struct.member_count = 1;
#define __func_ptr__ func_ptr<T,args>
		this_type_info._struct.member_types[0] = TYPEINFO(_FPTR *) ? TYPEINFO(_FPTR *)->hash : 0;
		this_type_info._struct.member_names[0] = "data"_;
		this_type_info._struct.member_offsets[0] = offsetof(__func_ptr__, data);
		this_type_info._struct.member_circular[0] = 0;
#undef __func_ptr__
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

#pragma pop_macro("T")
#pragma pop_macro("args")

#pragma push_macro("T")
#define T void
#pragma push_macro("args")
#define args void*
	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(func_ptr<T,args>);
		this_type_info.name = "func_ptr"_;
		this_type_info.hash = (type_id)typeid(func_ptr<T,args>).hash_code();
		this_type_info._struct.member_count = 1;
#define __func_ptr__ func_ptr<T,args>
		this_type_info._struct.member_types[0] = TYPEINFO(_FPTR *) ? TYPEINFO(_FPTR *)->hash : 0;
		this_type_info._struct.member_names[0] = "data"_;
		this_type_info._struct.member_offsets[0] = offsetof(__func_ptr__, data);
		this_type_info._struct.member_circular[0] = 0;
#undef __func_ptr__
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

#pragma pop_macro("T")
#pragma pop_macro("args")

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_array;
		this_type_info.size = sizeof(char [16]);
		this_type_info.name = STRING(char [16]);
		this_type_info.hash = (type_id)typeid(char [16]).hash_code();
		this_type_info._array.of = TYPEINFO(char) ? TYPEINFO(char)->hash : 0;
		this_type_info._array.length = 16;
		type_table.insert_if_unique(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(allocator);
		this_type_info.name = "allocator"_;
		this_type_info.hash = (type_id)typeid(allocator).hash_code();
		this_type_info._struct.member_count = 6;
		this_type_info._struct.member_types[0] = TYPEINFO(func_ptr<void *, u64, u64, allocator *, code_context>) ? TYPEINFO(func_ptr<void *, u64, u64, allocator *, code_context>)->hash : 0;
		this_type_info._struct.member_names[0] = "allocate_"_;
		this_type_info._struct.member_offsets[0] = offsetof(allocator,allocate_);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(func_ptr<void *, void *, u64, u64, u64, allocator *, code_context>) ? TYPEINFO(func_ptr<void *, void *, u64, u64, u64, allocator *, code_context>)->hash : 0;
		this_type_info._struct.member_names[1] = "reallocate_"_;
		this_type_info._struct.member_offsets[1] = offsetof(allocator,reallocate_);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(func_ptr<void, void *, u64, allocator *, code_context>) ? TYPEINFO(func_ptr<void, void *, u64, allocator *, code_context>)->hash : 0;
		this_type_info._struct.member_names[2] = "free_"_;
		this_type_info._struct.member_offsets[2] = offsetof(allocator,free_);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(code_context) ? TYPEINFO(code_context)->hash : 0;
		this_type_info._struct.member_names[3] = "context"_;
		this_type_info._struct.member_offsets[3] = offsetof(allocator,context);
		this_type_info._struct.member_circular[3] = 0;
		this_type_info._struct.member_types[4] = TYPEINFO(bool) ? TYPEINFO(bool)->hash : 0;
		this_type_info._struct.member_names[4] = "track_sizes"_;
		this_type_info._struct.member_offsets[4] = offsetof(allocator,track_sizes);
		this_type_info._struct.member_circular[4] = 0;
		this_type_info._struct.member_types[5] = TYPEINFO(char [16]) ? TYPEINFO(char [16])->hash : 0;
		this_type_info._struct.member_names[5] = "c_name"_;
		this_type_info._struct.member_offsets[5] = offsetof(allocator,c_name);
		this_type_info._struct.member_circular[5] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(platform_allocator);
		this_type_info.name = "platform_allocator"_;
		this_type_info.hash = (type_id)typeid(platform_allocator).hash_code();
		this_type_info._struct.member_count = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(arena_allocator);
		this_type_info.name = "arena_allocator"_;
		this_type_info.hash = (type_id)typeid(arena_allocator).hash_code();
		this_type_info._struct.member_count = 4;
		this_type_info._struct.member_types[0] = TYPEINFO(allocator *) ? TYPEINFO(allocator *)->hash : 0;
		this_type_info._struct.member_names[0] = "backing"_;
		this_type_info._struct.member_offsets[0] = offsetof(arena_allocator,backing);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(void *) ? TYPEINFO(void *)->hash : 0;
		this_type_info._struct.member_names[1] = "memory"_;
		this_type_info._struct.member_offsets[1] = offsetof(arena_allocator,memory);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(u64) ? TYPEINFO(u64)->hash : 0;
		this_type_info._struct.member_names[2] = "used"_;
		this_type_info._struct.member_offsets[2] = offsetof(arena_allocator,used);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(u64) ? TYPEINFO(u64)->hash : 0;
		this_type_info._struct.member_names[3] = "size"_;
		this_type_info._struct.member_offsets[3] = offsetof(arena_allocator,size);
		this_type_info._struct.member_circular[3] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(pool_page);
		this_type_info.name = "pool_page"_;
		this_type_info.hash = (type_id)typeid(pool_page).hash_code();
		this_type_info._struct.member_count = 2;
		this_type_info._struct.member_types[0] = TYPEINFO(u64) ? TYPEINFO(u64)->hash : 0;
		this_type_info._struct.member_names[0] = "used"_;
		this_type_info._struct.member_offsets[0] = offsetof(pool_page,used);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(pool_page *) ? TYPEINFO(pool_page *)->hash : 0;
		this_type_info._struct.member_names[1] = "next"_;
		this_type_info._struct.member_offsets[1] = offsetof(pool_page,next);
		this_type_info._struct.member_circular[1] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(pool_allocator);
		this_type_info.name = "pool_allocator"_;
		this_type_info.hash = (type_id)typeid(pool_allocator).hash_code();
		this_type_info._struct.member_count = 4;
		this_type_info._struct.member_types[0] = TYPEINFO(allocator *) ? TYPEINFO(allocator *)->hash : 0;
		this_type_info._struct.member_names[0] = "backing"_;
		this_type_info._struct.member_offsets[0] = offsetof(pool_allocator,backing);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(u64) ? TYPEINFO(u64)->hash : 0;
		this_type_info._struct.member_names[1] = "page_size"_;
		this_type_info._struct.member_offsets[1] = offsetof(pool_allocator,page_size);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(pool_page *) ? TYPEINFO(pool_page *)->hash : 0;
		this_type_info._struct.member_names[2] = "head"_;
		this_type_info._struct.member_offsets[2] = offsetof(pool_allocator,head);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(pool_page *) ? TYPEINFO(pool_page *)->hash : 0;
		this_type_info._struct.member_names[3] = "current"_;
		this_type_info._struct.member_offsets[3] = offsetof(pool_allocator,current);
		this_type_info._struct.member_circular[3] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(Type_void_info);
		this_type_info.name = "Type_void_info"_;
		this_type_info.hash = (type_id)typeid(Type_void_info).hash_code();
		this_type_info._struct.member_count = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(Type_int_info);
		this_type_info.name = "Type_int_info"_;
		this_type_info.hash = (type_id)typeid(Type_int_info).hash_code();
		this_type_info._struct.member_count = 1;
		this_type_info._struct.member_types[0] = TYPEINFO(bool) ? TYPEINFO(bool)->hash : 0;
		this_type_info._struct.member_names[0] = "is_signed"_;
		this_type_info._struct.member_offsets[0] = offsetof(Type_int_info,is_signed);
		this_type_info._struct.member_circular[0] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(Type_float_info);
		this_type_info.name = "Type_float_info"_;
		this_type_info.hash = (type_id)typeid(Type_float_info).hash_code();
		this_type_info._struct.member_count = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(Type_bool_info);
		this_type_info.name = "Type_bool_info"_;
		this_type_info.hash = (type_id)typeid(Type_bool_info).hash_code();
		this_type_info._struct.member_count = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(Type_ptr_info);
		this_type_info.name = "Type_ptr_info"_;
		this_type_info.hash = (type_id)typeid(Type_ptr_info).hash_code();
		this_type_info._struct.member_count = 1;
		this_type_info._struct.member_types[0] = TYPEINFO(type_id) ? TYPEINFO(type_id)->hash : 0;
		this_type_info._struct.member_names[0] = "to"_;
		this_type_info._struct.member_offsets[0] = offsetof(Type_ptr_info,to);
		this_type_info._struct.member_circular[0] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_array;
		this_type_info.size = sizeof(type_id [16]);
		this_type_info.name = STRING(type_id [16]);
		this_type_info.hash = (type_id)typeid(type_id [16]).hash_code();
		this_type_info._array.of = TYPEINFO(type_id) ? TYPEINFO(type_id)->hash : 0;
		this_type_info._array.length = 16;
		type_table.insert_if_unique(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(Type_func_info);
		this_type_info.name = "Type_func_info"_;
		this_type_info.hash = (type_id)typeid(Type_func_info).hash_code();
		this_type_info._struct.member_count = 4;
		this_type_info._struct.member_types[0] = TYPEINFO(string) ? TYPEINFO(string)->hash : 0;
		this_type_info._struct.member_names[0] = "signature"_;
		this_type_info._struct.member_offsets[0] = offsetof(Type_func_info,signature);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(type_id) ? TYPEINFO(type_id)->hash : 0;
		this_type_info._struct.member_names[1] = "return_type"_;
		this_type_info._struct.member_offsets[1] = offsetof(Type_func_info,return_type);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(type_id [16]) ? TYPEINFO(type_id [16])->hash : 0;
		this_type_info._struct.member_names[2] = "param_types"_;
		this_type_info._struct.member_offsets[2] = offsetof(Type_func_info,param_types);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[3] = "param_count"_;
		this_type_info._struct.member_offsets[3] = offsetof(Type_func_info,param_count);
		this_type_info._struct.member_circular[3] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(Type_array_info);
		this_type_info.name = "Type_array_info"_;
		this_type_info.hash = (type_id)typeid(Type_array_info).hash_code();
		this_type_info._struct.member_count = 2;
		this_type_info._struct.member_types[0] = TYPEINFO(type_id) ? TYPEINFO(type_id)->hash : 0;
		this_type_info._struct.member_names[0] = "of"_;
		this_type_info._struct.member_offsets[0] = offsetof(Type_array_info,of);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(u64) ? TYPEINFO(u64)->hash : 0;
		this_type_info._struct.member_names[1] = "length"_;
		this_type_info._struct.member_offsets[1] = offsetof(Type_array_info,length);
		this_type_info._struct.member_circular[1] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_array;
		this_type_info.size = sizeof(type_id [96]);
		this_type_info.name = STRING(type_id [96]);
		this_type_info.hash = (type_id)typeid(type_id [96]).hash_code();
		this_type_info._array.of = TYPEINFO(type_id) ? TYPEINFO(type_id)->hash : 0;
		this_type_info._array.length = 96;
		type_table.insert_if_unique(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_array;
		this_type_info.size = sizeof(string [96]);
		this_type_info.name = STRING(string [96]);
		this_type_info.hash = (type_id)typeid(string [96]).hash_code();
		this_type_info._array.of = TYPEINFO(string) ? TYPEINFO(string)->hash : 0;
		this_type_info._array.length = 96;
		type_table.insert_if_unique(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_array;
		this_type_info.size = sizeof(u32 [96]);
		this_type_info.name = STRING(u32 [96]);
		this_type_info.hash = (type_id)typeid(u32 [96]).hash_code();
		this_type_info._array.of = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._array.length = 96;
		type_table.insert_if_unique(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_array;
		this_type_info.size = sizeof(u8 [96]);
		this_type_info.name = STRING(u8 [96]);
		this_type_info.hash = (type_id)typeid(u8 [96]).hash_code();
		this_type_info._array.of = TYPEINFO(u8) ? TYPEINFO(u8)->hash : 0;
		this_type_info._array.length = 96;
		type_table.insert_if_unique(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(Type_struct_info);
		this_type_info.name = "Type_struct_info"_;
		this_type_info.hash = (type_id)typeid(Type_struct_info).hash_code();
		this_type_info._struct.member_count = 5;
		this_type_info._struct.member_types[0] = TYPEINFO(type_id [96]) ? TYPEINFO(type_id [96])->hash : 0;
		this_type_info._struct.member_names[0] = "member_types"_;
		this_type_info._struct.member_offsets[0] = offsetof(Type_struct_info,member_types);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(string [96]) ? TYPEINFO(string [96])->hash : 0;
		this_type_info._struct.member_names[1] = "member_names"_;
		this_type_info._struct.member_offsets[1] = offsetof(Type_struct_info,member_names);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(u32 [96]) ? TYPEINFO(u32 [96])->hash : 0;
		this_type_info._struct.member_names[2] = "member_offsets"_;
		this_type_info._struct.member_offsets[2] = offsetof(Type_struct_info,member_offsets);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(u8 [96]) ? TYPEINFO(u8 [96])->hash : 0;
		this_type_info._struct.member_names[3] = "member_circular"_;
		this_type_info._struct.member_offsets[3] = offsetof(Type_struct_info,member_circular);
		this_type_info._struct.member_circular[3] = 0;
		this_type_info._struct.member_types[4] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[4] = "member_count"_;
		this_type_info._struct.member_offsets[4] = offsetof(Type_struct_info,member_count);
		this_type_info._struct.member_circular[4] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_array;
		this_type_info.size = sizeof(string [256]);
		this_type_info.name = STRING(string [256]);
		this_type_info.hash = (type_id)typeid(string [256]).hash_code();
		this_type_info._array.of = TYPEINFO(string) ? TYPEINFO(string)->hash : 0;
		this_type_info._array.length = 256;
		type_table.insert_if_unique(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_array;
		this_type_info.size = sizeof(i64 [256]);
		this_type_info.name = STRING(i64 [256]);
		this_type_info.hash = (type_id)typeid(i64 [256]).hash_code();
		this_type_info._array.of = TYPEINFO(i64) ? TYPEINFO(i64)->hash : 0;
		this_type_info._array.length = 256;
		type_table.insert_if_unique(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(Type_enum_info);
		this_type_info.name = "Type_enum_info"_;
		this_type_info.hash = (type_id)typeid(Type_enum_info).hash_code();
		this_type_info._struct.member_count = 4;
		this_type_info._struct.member_types[0] = TYPEINFO(type_id) ? TYPEINFO(type_id)->hash : 0;
		this_type_info._struct.member_names[0] = "base_type"_;
		this_type_info._struct.member_offsets[0] = offsetof(Type_enum_info,base_type);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(string [256]) ? TYPEINFO(string [256])->hash : 0;
		this_type_info._struct.member_names[1] = "member_names"_;
		this_type_info._struct.member_offsets[1] = offsetof(Type_enum_info,member_names);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(i64 [256]) ? TYPEINFO(i64 [256])->hash : 0;
		this_type_info._struct.member_names[2] = "member_values"_;
		this_type_info._struct.member_offsets[2] = offsetof(Type_enum_info,member_values);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[3] = "member_count"_;
		this_type_info._struct.member_offsets[3] = offsetof(Type_enum_info,member_count);
		this_type_info._struct.member_circular[3] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(Type_string_info);
		this_type_info.name = "Type_string_info"_;
		this_type_info.hash = (type_id)typeid(Type_string_info).hash_code();
		this_type_info._struct.member_count = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(_type_info);
		this_type_info.name = "_type_info"_;
		this_type_info.hash = (type_id)typeid(_type_info).hash_code();
		this_type_info._struct.member_count = 14;
		this_type_info._struct.member_types[0] = TYPEINFO(Type) ? TYPEINFO(Type)->hash : 0;
		this_type_info._struct.member_names[0] = "type_type"_;
		this_type_info._struct.member_offsets[0] = offsetof(_type_info,type_type);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(type_id) ? TYPEINFO(type_id)->hash : 0;
		this_type_info._struct.member_names[1] = "hash"_;
		this_type_info._struct.member_offsets[1] = offsetof(_type_info,hash);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[2] = "size"_;
		this_type_info._struct.member_offsets[2] = offsetof(_type_info,size);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(string) ? TYPEINFO(string)->hash : 0;
		this_type_info._struct.member_names[3] = "name"_;
		this_type_info._struct.member_offsets[3] = offsetof(_type_info,name);
		this_type_info._struct.member_circular[3] = 0;
		this_type_info._struct.member_types[4] = TYPEINFO(Type_void_info) ? TYPEINFO(Type_void_info)->hash : 0;
		this_type_info._struct.member_names[4] = "_void"_;
		this_type_info._struct.member_offsets[4] = offsetof(_type_info,_void);
		this_type_info._struct.member_circular[4] = 0;
		this_type_info._struct.member_types[5] = TYPEINFO(Type_int_info) ? TYPEINFO(Type_int_info)->hash : 0;
		this_type_info._struct.member_names[5] = "_int"_;
		this_type_info._struct.member_offsets[5] = offsetof(_type_info,_int);
		this_type_info._struct.member_circular[5] = 0;
		this_type_info._struct.member_types[6] = TYPEINFO(Type_float_info) ? TYPEINFO(Type_float_info)->hash : 0;
		this_type_info._struct.member_names[6] = "_float"_;
		this_type_info._struct.member_offsets[6] = offsetof(_type_info,_float);
		this_type_info._struct.member_circular[6] = 0;
		this_type_info._struct.member_types[7] = TYPEINFO(Type_bool_info) ? TYPEINFO(Type_bool_info)->hash : 0;
		this_type_info._struct.member_names[7] = "_bool"_;
		this_type_info._struct.member_offsets[7] = offsetof(_type_info,_bool);
		this_type_info._struct.member_circular[7] = 0;
		this_type_info._struct.member_types[8] = TYPEINFO(Type_ptr_info) ? TYPEINFO(Type_ptr_info)->hash : 0;
		this_type_info._struct.member_names[8] = "_ptr"_;
		this_type_info._struct.member_offsets[8] = offsetof(_type_info,_ptr);
		this_type_info._struct.member_circular[8] = 0;
		this_type_info._struct.member_types[9] = TYPEINFO(Type_func_info) ? TYPEINFO(Type_func_info)->hash : 0;
		this_type_info._struct.member_names[9] = "_func"_;
		this_type_info._struct.member_offsets[9] = offsetof(_type_info,_func);
		this_type_info._struct.member_circular[9] = 0;
		this_type_info._struct.member_types[10] = TYPEINFO(Type_array_info) ? TYPEINFO(Type_array_info)->hash : 0;
		this_type_info._struct.member_names[10] = "_array"_;
		this_type_info._struct.member_offsets[10] = offsetof(_type_info,_array);
		this_type_info._struct.member_circular[10] = 0;
		this_type_info._struct.member_types[11] = TYPEINFO(Type_struct_info) ? TYPEINFO(Type_struct_info)->hash : 0;
		this_type_info._struct.member_names[11] = "_struct"_;
		this_type_info._struct.member_offsets[11] = offsetof(_type_info,_struct);
		this_type_info._struct.member_circular[11] = 0;
		this_type_info._struct.member_types[12] = TYPEINFO(Type_enum_info) ? TYPEINFO(Type_enum_info)->hash : 0;
		this_type_info._struct.member_names[12] = "_enum"_;
		this_type_info._struct.member_offsets[12] = offsetof(_type_info,_enum);
		this_type_info._struct.member_circular[12] = 0;
		this_type_info._struct.member_types[13] = TYPEINFO(Type_string_info) ? TYPEINFO(Type_string_info)->hash : 0;
		this_type_info._struct.member_names[13] = "_string"_;
		this_type_info._struct.member_offsets[13] = offsetof(_type_info,_string);
		this_type_info._struct.member_circular[13] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(any);
		this_type_info.name = "any"_;
		this_type_info.hash = (type_id)typeid(any).hash_code();
		this_type_info._struct.member_count = 2;
		this_type_info._struct.member_types[0] = TYPEINFO(type_id) ? TYPEINFO(type_id)->hash : 0;
		this_type_info._struct.member_names[0] = "id"_;
		this_type_info._struct.member_offsets[0] = offsetof(any,id);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(void *) ? TYPEINFO(void *)->hash : 0;
		this_type_info._struct.member_names[1] = "value"_;
		this_type_info._struct.member_offsets[1] = offsetof(any,value);
		this_type_info._struct.member_circular[1] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

#pragma push_macro("T")
#define T code_context
	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(array<T>);
		this_type_info.name = "array"_;
		this_type_info.hash = (type_id)typeid(array<T>).hash_code();
		this_type_info._struct.member_count = 3;
#define __array__ array<T>
		this_type_info._struct.member_types[0] = TYPEINFO(T *) ? TYPEINFO(T *)->hash : 0;
		this_type_info._struct.member_names[0] = "memory"_;
		this_type_info._struct.member_offsets[0] = offsetof(__array__, memory);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[1] = "capacity"_;
		this_type_info._struct.member_offsets[1] = offsetof(__array__, capacity);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(allocator *) ? TYPEINFO(allocator *)->hash : 0;
		this_type_info._struct.member_names[2] = "alloc"_;
		this_type_info._struct.member_offsets[2] = offsetof(__array__, alloc);
		this_type_info._struct.member_circular[2] = 0;
#undef __array__
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

#pragma pop_macro("T")

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(log_message);
		this_type_info.name = "log_message"_;
		this_type_info.hash = (type_id)typeid(log_message).hash_code();
		this_type_info._struct.member_count = 6;
		this_type_info._struct.member_types[0] = TYPEINFO(string) ? TYPEINFO(string)->hash : 0;
		this_type_info._struct.member_names[0] = "msg"_;
		this_type_info._struct.member_offsets[0] = offsetof(log_message,msg);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(log_level) ? TYPEINFO(log_level)->hash : 0;
		this_type_info._struct.member_names[1] = "level"_;
		this_type_info._struct.member_offsets[1] = offsetof(log_message,level);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(array<code_context>) ? TYPEINFO(array<code_context>)->hash : 0;
		this_type_info._struct.member_names[2] = "call_stack"_;
		this_type_info._struct.member_offsets[2] = offsetof(log_message,call_stack);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(string) ? TYPEINFO(string)->hash : 0;
		this_type_info._struct.member_names[3] = "thread_name"_;
		this_type_info._struct.member_offsets[3] = offsetof(log_message,thread_name);
		this_type_info._struct.member_circular[3] = 0;
		this_type_info._struct.member_types[4] = TYPEINFO(code_context) ? TYPEINFO(code_context)->hash : 0;
		this_type_info._struct.member_names[4] = "publisher"_;
		this_type_info._struct.member_offsets[4] = offsetof(log_message,publisher);
		this_type_info._struct.member_circular[4] = 0;
		this_type_info._struct.member_types[5] = TYPEINFO(arena_allocator) ? TYPEINFO(arena_allocator)->hash : 0;
		this_type_info._struct.member_names[5] = "arena"_;
		this_type_info._struct.member_offsets[5] = offsetof(log_message,arena);
		this_type_info._struct.member_circular[5] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(log_out);
		this_type_info.name = "log_out"_;
		this_type_info.hash = (type_id)typeid(log_out).hash_code();
		this_type_info._struct.member_count = 6;
		this_type_info._struct.member_types[0] = TYPEINFO(log_level) ? TYPEINFO(log_level)->hash : 0;
		this_type_info._struct.member_names[0] = "level"_;
		this_type_info._struct.member_offsets[0] = offsetof(log_out,level);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(log_out_type) ? TYPEINFO(log_out_type)->hash : 0;
		this_type_info._struct.member_names[1] = "type"_;
		this_type_info._struct.member_offsets[1] = offsetof(log_out,type);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(bool) ? TYPEINFO(bool)->hash : 0;
		this_type_info._struct.member_names[2] = "flush_on_message"_;
		this_type_info._struct.member_offsets[2] = offsetof(log_out,flush_on_message);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(buffer<platform_file, 4096>) ? TYPEINFO(buffer<platform_file, 4096>)->hash : 0;
		this_type_info._struct.member_names[3] = "file"_;
		this_type_info._struct.member_offsets[3] = offsetof(log_out,file);
		this_type_info._struct.member_circular[3] = 0;
		this_type_info._struct.member_types[4] = TYPEINFO(func_ptr<void, log_message *, void *>) ? TYPEINFO(func_ptr<void, log_message *, void *>)->hash : 0;
		this_type_info._struct.member_names[4] = "write"_;
		this_type_info._struct.member_offsets[4] = offsetof(log_out,write);
		this_type_info._struct.member_circular[4] = 0;
		this_type_info._struct.member_types[5] = TYPEINFO(void *) ? TYPEINFO(void *)->hash : 0;
		this_type_info._struct.member_names[5] = "param"_;
		this_type_info._struct.member_offsets[5] = offsetof(log_out,param);
		this_type_info._struct.member_circular[5] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

#pragma push_macro("T")
#define T log_out
	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(vector<T>);
		this_type_info.name = "vector"_;
		this_type_info.hash = (type_id)typeid(vector<T>).hash_code();
		this_type_info._struct.member_count = 4;
#define __vector__ vector<T>
		this_type_info._struct.member_types[0] = TYPEINFO(T *) ? TYPEINFO(T *)->hash : 0;
		this_type_info._struct.member_names[0] = "memory"_;
		this_type_info._struct.member_offsets[0] = offsetof(__vector__, memory);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[1] = "size"_;
		this_type_info._struct.member_offsets[1] = offsetof(__vector__, size);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[2] = "capacity"_;
		this_type_info._struct.member_offsets[2] = offsetof(__vector__, capacity);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(allocator *) ? TYPEINFO(allocator *)->hash : 0;
		this_type_info._struct.member_names[3] = "alloc"_;
		this_type_info._struct.member_offsets[3] = offsetof(__vector__, alloc);
		this_type_info._struct.member_circular[3] = 0;
#undef __vector__
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

#pragma pop_macro("T")

#pragma push_macro("T")
#define T log_message
	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(locking_queue<T>);
		this_type_info.name = "locking_queue"_;
		this_type_info.hash = (type_id)typeid(locking_queue<T>).hash_code();
		this_type_info._struct.member_count = 2;
#define __locking_queue__ locking_queue<T>
		this_type_info._struct.member_types[0] = TYPEINFO(platform_mutex) ? TYPEINFO(platform_mutex)->hash : 0;
		this_type_info._struct.member_names[0] = "mut"_;
		this_type_info._struct.member_offsets[0] = offsetof(__locking_queue__, mut);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(platform_semaphore) ? TYPEINFO(platform_semaphore)->hash : 0;
		this_type_info._struct.member_names[1] = "sem"_;
		this_type_info._struct.member_offsets[1] = offsetof(__locking_queue__, sem);
		this_type_info._struct.member_circular[1] = 0;
#undef __locking_queue__
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

#pragma pop_macro("T")

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(log_thread_param);
		this_type_info.name = "log_thread_param"_;
		this_type_info.hash = (type_id)typeid(log_thread_param).hash_code();
		this_type_info._struct.member_count = 7;
		this_type_info._struct.member_types[0] = TYPEINFO(bool) ? TYPEINFO(bool)->hash : 0;
		this_type_info._struct.member_names[0] = "running"_;
		this_type_info._struct.member_offsets[0] = offsetof(log_thread_param,running);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(vector<log_out> *) ? TYPEINFO(vector<log_out> *)->hash : 0;
		this_type_info._struct.member_names[1] = "out"_;
		this_type_info._struct.member_offsets[1] = offsetof(log_thread_param,out);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(locking_queue<log_message> *) ? TYPEINFO(locking_queue<log_message> *)->hash : 0;
		this_type_info._struct.member_names[2] = "message_queue"_;
		this_type_info._struct.member_offsets[2] = offsetof(log_thread_param,message_queue);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(platform_semaphore *) ? TYPEINFO(platform_semaphore *)->hash : 0;
		this_type_info._struct.member_names[3] = "logging_semaphore"_;
		this_type_info._struct.member_offsets[3] = offsetof(log_thread_param,logging_semaphore);
		this_type_info._struct.member_circular[3] = 0;
		this_type_info._struct.member_types[4] = TYPEINFO(platform_mutex *) ? TYPEINFO(platform_mutex *)->hash : 0;
		this_type_info._struct.member_names[4] = "output_mut"_;
		this_type_info._struct.member_offsets[4] = offsetof(log_thread_param,output_mut);
		this_type_info._struct.member_circular[4] = 0;
		this_type_info._struct.member_types[5] = TYPEINFO(allocator *) ? TYPEINFO(allocator *)->hash : 0;
		this_type_info._struct.member_names[5] = "alloc"_;
		this_type_info._struct.member_offsets[5] = offsetof(log_thread_param,alloc);
		this_type_info._struct.member_circular[5] = 0;
		this_type_info._struct.member_types[6] = TYPEINFO(arena_allocator *) ? TYPEINFO(arena_allocator *)->hash : 0;
		this_type_info._struct.member_names[6] = "scratch"_;
		this_type_info._struct.member_offsets[6] = offsetof(log_thread_param,scratch);
		this_type_info._struct.member_circular[6] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(log_manager);
		this_type_info.name = "log_manager"_;
		this_type_info.hash = (type_id)typeid(log_manager).hash_code();
		this_type_info._struct.member_count = 8;
		this_type_info._struct.member_types[0] = TYPEINFO(vector<log_out>) ? TYPEINFO(vector<log_out>)->hash : 0;
		this_type_info._struct.member_names[0] = "out"_;
		this_type_info._struct.member_offsets[0] = offsetof(log_manager,out);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(locking_queue<log_message>) ? TYPEINFO(locking_queue<log_message>)->hash : 0;
		this_type_info._struct.member_names[1] = "message_queue"_;
		this_type_info._struct.member_offsets[1] = offsetof(log_manager,message_queue);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(platform_semaphore) ? TYPEINFO(platform_semaphore)->hash : 0;
		this_type_info._struct.member_names[2] = "logging_semaphore"_;
		this_type_info._struct.member_offsets[2] = offsetof(log_manager,logging_semaphore);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(platform_thread) ? TYPEINFO(platform_thread)->hash : 0;
		this_type_info._struct.member_names[3] = "logging_thread"_;
		this_type_info._struct.member_offsets[3] = offsetof(log_manager,logging_thread);
		this_type_info._struct.member_circular[3] = 0;
		this_type_info._struct.member_types[4] = TYPEINFO(platform_mutex) ? TYPEINFO(platform_mutex)->hash : 0;
		this_type_info._struct.member_names[4] = "output_mut"_;
		this_type_info._struct.member_offsets[4] = offsetof(log_manager,output_mut);
		this_type_info._struct.member_circular[4] = 0;
		this_type_info._struct.member_types[5] = TYPEINFO(log_thread_param) ? TYPEINFO(log_thread_param)->hash : 0;
		this_type_info._struct.member_names[5] = "thread_param"_;
		this_type_info._struct.member_offsets[5] = offsetof(log_manager,thread_param);
		this_type_info._struct.member_circular[5] = 0;
		this_type_info._struct.member_types[6] = TYPEINFO(allocator *) ? TYPEINFO(allocator *)->hash : 0;
		this_type_info._struct.member_names[6] = "alloc"_;
		this_type_info._struct.member_offsets[6] = offsetof(log_manager,alloc);
		this_type_info._struct.member_circular[6] = 0;
		this_type_info._struct.member_types[7] = TYPEINFO(arena_allocator) ? TYPEINFO(arena_allocator)->hash : 0;
		this_type_info._struct.member_names[7] = "scratch"_;
		this_type_info._struct.member_offsets[7] = offsetof(log_manager,scratch);
		this_type_info._struct.member_circular[7] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(super_job);
		this_type_info.name = "super_job"_;
		this_type_info.hash = (type_id)typeid(super_job).hash_code();
		this_type_info._struct.member_count = 4;
		this_type_info._struct.member_types[0] = TYPEINFO(float) ? TYPEINFO(float)->hash : 0;
		this_type_info._struct.member_names[0] = "priority"_;
		this_type_info._struct.member_offsets[0] = offsetof(super_job,priority);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(void *) ? TYPEINFO(void *)->hash : 0;
		this_type_info._struct.member_names[1] = "data"_;
		this_type_info._struct.member_offsets[1] = offsetof(super_job,data);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(u64) ? TYPEINFO(u64)->hash : 0;
		this_type_info._struct.member_names[2] = "my_size"_;
		this_type_info._struct.member_offsets[2] = offsetof(super_job,my_size);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(func_ptr<void, void *>) ? TYPEINFO(func_ptr<void, void *>)->hash : 0;
		this_type_info._struct.member_names[3] = "cancel"_;
		this_type_info._struct.member_offsets[3] = offsetof(super_job,cancel);
		this_type_info._struct.member_circular[3] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

#pragma push_macro("T")
#define T super_job*
	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(locking_heap<T>);
		this_type_info.name = "locking_heap"_;
		this_type_info.hash = (type_id)typeid(locking_heap<T>).hash_code();
		this_type_info._struct.member_count = 2;
#define __locking_heap__ locking_heap<T>
		this_type_info._struct.member_types[0] = TYPEINFO(platform_mutex) ? TYPEINFO(platform_mutex)->hash : 0;
		this_type_info._struct.member_names[0] = "mut"_;
		this_type_info._struct.member_offsets[0] = offsetof(__locking_heap__, mut);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(platform_semaphore) ? TYPEINFO(platform_semaphore)->hash : 0;
		this_type_info._struct.member_names[1] = "sem"_;
		this_type_info._struct.member_offsets[1] = offsetof(__locking_heap__, sem);
		this_type_info._struct.member_circular[1] = 0;
#undef __locking_heap__
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

#pragma pop_macro("T")

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(worker_param);
		this_type_info.name = "worker_param"_;
		this_type_info.hash = (type_id)typeid(worker_param).hash_code();
		this_type_info._struct.member_count = 4;
		this_type_info._struct.member_types[0] = TYPEINFO(locking_heap<super_job *, gt> *) ? TYPEINFO(locking_heap<super_job *, gt> *)->hash : 0;
		this_type_info._struct.member_names[0] = "job_queue"_;
		this_type_info._struct.member_offsets[0] = offsetof(worker_param,job_queue);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(platform_semaphore *) ? TYPEINFO(platform_semaphore *)->hash : 0;
		this_type_info._struct.member_names[1] = "jobs_semaphore"_;
		this_type_info._struct.member_offsets[1] = offsetof(worker_param,jobs_semaphore);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(allocator *) ? TYPEINFO(allocator *)->hash : 0;
		this_type_info._struct.member_names[2] = "alloc"_;
		this_type_info._struct.member_offsets[2] = offsetof(worker_param,alloc);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(bool) ? TYPEINFO(bool)->hash : 0;
		this_type_info._struct.member_names[3] = "online"_;
		this_type_info._struct.member_offsets[3] = offsetof(worker_param,online);
		this_type_info._struct.member_circular[3] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

#pragma push_macro("T")
#define T platform_thread
	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(array<T>);
		this_type_info.name = "array"_;
		this_type_info.hash = (type_id)typeid(array<T>).hash_code();
		this_type_info._struct.member_count = 3;
#define __array__ array<T>
		this_type_info._struct.member_types[0] = TYPEINFO(T *) ? TYPEINFO(T *)->hash : 0;
		this_type_info._struct.member_names[0] = "memory"_;
		this_type_info._struct.member_offsets[0] = offsetof(__array__, memory);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[1] = "capacity"_;
		this_type_info._struct.member_offsets[1] = offsetof(__array__, capacity);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(allocator *) ? TYPEINFO(allocator *)->hash : 0;
		this_type_info._struct.member_names[2] = "alloc"_;
		this_type_info._struct.member_offsets[2] = offsetof(__array__, alloc);
		this_type_info._struct.member_circular[2] = 0;
#undef __array__
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

#pragma pop_macro("T")

#pragma push_macro("T")
#define T worker_param
	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(array<T>);
		this_type_info.name = "array"_;
		this_type_info.hash = (type_id)typeid(array<T>).hash_code();
		this_type_info._struct.member_count = 3;
#define __array__ array<T>
		this_type_info._struct.member_types[0] = TYPEINFO(T *) ? TYPEINFO(T *)->hash : 0;
		this_type_info._struct.member_names[0] = "memory"_;
		this_type_info._struct.member_offsets[0] = offsetof(__array__, memory);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[1] = "capacity"_;
		this_type_info._struct.member_offsets[1] = offsetof(__array__, capacity);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(allocator *) ? TYPEINFO(allocator *)->hash : 0;
		this_type_info._struct.member_names[2] = "alloc"_;
		this_type_info._struct.member_offsets[2] = offsetof(__array__, alloc);
		this_type_info._struct.member_circular[2] = 0;
#undef __array__
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

#pragma pop_macro("T")

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(threadpool);
		this_type_info.name = "threadpool"_;
		this_type_info.hash = (type_id)typeid(threadpool).hash_code();
		this_type_info._struct.member_count = 7;
		this_type_info._struct.member_types[0] = TYPEINFO(i32) ? TYPEINFO(i32)->hash : 0;
		this_type_info._struct.member_names[0] = "num_threads"_;
		this_type_info._struct.member_offsets[0] = offsetof(threadpool,num_threads);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(bool) ? TYPEINFO(bool)->hash : 0;
		this_type_info._struct.member_names[1] = "online"_;
		this_type_info._struct.member_offsets[1] = offsetof(threadpool,online);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(locking_heap<super_job *, gt>) ? TYPEINFO(locking_heap<super_job *, gt>)->hash : 0;
		this_type_info._struct.member_names[2] = "jobs"_;
		this_type_info._struct.member_offsets[2] = offsetof(threadpool,jobs);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(array<platform_thread>) ? TYPEINFO(array<platform_thread>)->hash : 0;
		this_type_info._struct.member_names[3] = "threads"_;
		this_type_info._struct.member_offsets[3] = offsetof(threadpool,threads);
		this_type_info._struct.member_circular[3] = 0;
		this_type_info._struct.member_types[4] = TYPEINFO(array<worker_param>) ? TYPEINFO(array<worker_param>)->hash : 0;
		this_type_info._struct.member_names[4] = "worker_data"_;
		this_type_info._struct.member_offsets[4] = offsetof(threadpool,worker_data);
		this_type_info._struct.member_circular[4] = 0;
		this_type_info._struct.member_types[5] = TYPEINFO(platform_semaphore) ? TYPEINFO(platform_semaphore)->hash : 0;
		this_type_info._struct.member_names[5] = "jobs_semaphore"_;
		this_type_info._struct.member_offsets[5] = offsetof(threadpool,jobs_semaphore);
		this_type_info._struct.member_circular[5] = 0;
		this_type_info._struct.member_types[6] = TYPEINFO(allocator *) ? TYPEINFO(allocator *)->hash : 0;
		this_type_info._struct.member_names[6] = "alloc"_;
		this_type_info._struct.member_offsets[6] = offsetof(threadpool,alloc);
		this_type_info._struct.member_circular[6] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(file_glyph_data);
		this_type_info.name = "file_glyph_data"_;
		this_type_info.hash = (type_id)typeid(file_glyph_data).hash_code();
		this_type_info._struct.member_count = 10;
		this_type_info._struct.member_types[0] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[0] = "codepoint"_;
		this_type_info._struct.member_offsets[0] = offsetof(file_glyph_data,codepoint);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(u16) ? TYPEINFO(u16)->hash : 0;
		this_type_info._struct.member_names[1] = "x1"_;
		this_type_info._struct.member_offsets[1] = offsetof(file_glyph_data,x1);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(u16) ? TYPEINFO(u16)->hash : 0;
		this_type_info._struct.member_names[2] = "y1"_;
		this_type_info._struct.member_offsets[2] = offsetof(file_glyph_data,y1);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(u16) ? TYPEINFO(u16)->hash : 0;
		this_type_info._struct.member_names[3] = "x2"_;
		this_type_info._struct.member_offsets[3] = offsetof(file_glyph_data,x2);
		this_type_info._struct.member_circular[3] = 0;
		this_type_info._struct.member_types[4] = TYPEINFO(u16) ? TYPEINFO(u16)->hash : 0;
		this_type_info._struct.member_names[4] = "y2"_;
		this_type_info._struct.member_offsets[4] = offsetof(file_glyph_data,y2);
		this_type_info._struct.member_circular[4] = 0;
		this_type_info._struct.member_types[5] = TYPEINFO(f32) ? TYPEINFO(f32)->hash : 0;
		this_type_info._struct.member_names[5] = "xoff1"_;
		this_type_info._struct.member_offsets[5] = offsetof(file_glyph_data,xoff1);
		this_type_info._struct.member_circular[5] = 0;
		this_type_info._struct.member_types[6] = TYPEINFO(f32) ? TYPEINFO(f32)->hash : 0;
		this_type_info._struct.member_names[6] = "yoff1"_;
		this_type_info._struct.member_offsets[6] = offsetof(file_glyph_data,yoff1);
		this_type_info._struct.member_circular[6] = 0;
		this_type_info._struct.member_types[7] = TYPEINFO(f32) ? TYPEINFO(f32)->hash : 0;
		this_type_info._struct.member_names[7] = "advance"_;
		this_type_info._struct.member_offsets[7] = offsetof(file_glyph_data,advance);
		this_type_info._struct.member_circular[7] = 0;
		this_type_info._struct.member_types[8] = TYPEINFO(f32) ? TYPEINFO(f32)->hash : 0;
		this_type_info._struct.member_names[8] = "xoff2"_;
		this_type_info._struct.member_offsets[8] = offsetof(file_glyph_data,xoff2);
		this_type_info._struct.member_circular[8] = 0;
		this_type_info._struct.member_types[9] = TYPEINFO(f32) ? TYPEINFO(f32)->hash : 0;
		this_type_info._struct.member_names[9] = "yoff2"_;
		this_type_info._struct.member_offsets[9] = offsetof(file_glyph_data,yoff2);
		this_type_info._struct.member_circular[9] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(file_asset_raster_font);
		this_type_info.name = "file_asset_raster_font"_;
		this_type_info.hash = (type_id)typeid(file_asset_raster_font).hash_code();
		this_type_info._struct.member_count = 8;
		this_type_info._struct.member_types[0] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[0] = "num_glyphs"_;
		this_type_info._struct.member_offsets[0] = offsetof(file_asset_raster_font,num_glyphs);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(f32) ? TYPEINFO(f32)->hash : 0;
		this_type_info._struct.member_names[1] = "point"_;
		this_type_info._struct.member_offsets[1] = offsetof(file_asset_raster_font,point);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(f32) ? TYPEINFO(f32)->hash : 0;
		this_type_info._struct.member_names[2] = "ascent"_;
		this_type_info._struct.member_offsets[2] = offsetof(file_asset_raster_font,ascent);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(f32) ? TYPEINFO(f32)->hash : 0;
		this_type_info._struct.member_names[3] = "descent"_;
		this_type_info._struct.member_offsets[3] = offsetof(file_asset_raster_font,descent);
		this_type_info._struct.member_circular[3] = 0;
		this_type_info._struct.member_types[4] = TYPEINFO(f32) ? TYPEINFO(f32)->hash : 0;
		this_type_info._struct.member_names[4] = "linegap"_;
		this_type_info._struct.member_offsets[4] = offsetof(file_asset_raster_font,linegap);
		this_type_info._struct.member_circular[4] = 0;
		this_type_info._struct.member_types[5] = TYPEINFO(f32) ? TYPEINFO(f32)->hash : 0;
		this_type_info._struct.member_names[5] = "linedist"_;
		this_type_info._struct.member_offsets[5] = offsetof(file_asset_raster_font,linedist);
		this_type_info._struct.member_circular[5] = 0;
		this_type_info._struct.member_types[6] = TYPEINFO(i32) ? TYPEINFO(i32)->hash : 0;
		this_type_info._struct.member_names[6] = "width"_;
		this_type_info._struct.member_offsets[6] = offsetof(file_asset_raster_font,width);
		this_type_info._struct.member_circular[6] = 0;
		this_type_info._struct.member_types[7] = TYPEINFO(i32) ? TYPEINFO(i32)->hash : 0;
		this_type_info._struct.member_names[7] = "height"_;
		this_type_info._struct.member_offsets[7] = offsetof(file_asset_raster_font,height);
		this_type_info._struct.member_circular[7] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(file_asset_ttf_font);
		this_type_info.name = "file_asset_ttf_font"_;
		this_type_info.hash = (type_id)typeid(file_asset_ttf_font).hash_code();
		this_type_info._struct.member_count = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(file_asset_bitmap);
		this_type_info.name = "file_asset_bitmap"_;
		this_type_info.hash = (type_id)typeid(file_asset_bitmap).hash_code();
		this_type_info._struct.member_count = 2;
		this_type_info._struct.member_types[0] = TYPEINFO(i32) ? TYPEINFO(i32)->hash : 0;
		this_type_info._struct.member_names[0] = "width"_;
		this_type_info._struct.member_offsets[0] = offsetof(file_asset_bitmap,width);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(i32) ? TYPEINFO(i32)->hash : 0;
		this_type_info._struct.member_names[1] = "height"_;
		this_type_info._struct.member_offsets[1] = offsetof(file_asset_bitmap,height);
		this_type_info._struct.member_circular[1] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_array;
		this_type_info.size = sizeof(char [128]);
		this_type_info.name = STRING(char [128]);
		this_type_info.hash = (type_id)typeid(char [128]).hash_code();
		this_type_info._array.of = TYPEINFO(char) ? TYPEINFO(char)->hash : 0;
		this_type_info._array.length = 128;
		type_table.insert_if_unique(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(file_asset_header);
		this_type_info.name = "file_asset_header"_;
		this_type_info.hash = (type_id)typeid(file_asset_header).hash_code();
		this_type_info._struct.member_count = 3;
		this_type_info._struct.member_types[0] = TYPEINFO(asset_type) ? TYPEINFO(asset_type)->hash : 0;
		this_type_info._struct.member_names[0] = "type"_;
		this_type_info._struct.member_offsets[0] = offsetof(file_asset_header,type);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(char [128]) ? TYPEINFO(char [128])->hash : 0;
		this_type_info._struct.member_names[1] = "name"_;
		this_type_info._struct.member_offsets[1] = offsetof(file_asset_header,name);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(u64) ? TYPEINFO(u64)->hash : 0;
		this_type_info._struct.member_names[2] = "next"_;
		this_type_info._struct.member_offsets[2] = offsetof(file_asset_header,next);
		this_type_info._struct.member_circular[2] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(asset_file_header);
		this_type_info.name = "asset_file_header"_;
		this_type_info.hash = (type_id)typeid(asset_file_header).hash_code();
		this_type_info._struct.member_count = 1;
		this_type_info._struct.member_types[0] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[0] = "num_assets"_;
		this_type_info._struct.member_offsets[0] = offsetof(asset_file_header,num_assets);
		this_type_info._struct.member_circular[0] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(_asset_bitmap);
		this_type_info.name = "_asset_bitmap"_;
		this_type_info.hash = (type_id)typeid(_asset_bitmap).hash_code();
		this_type_info._struct.member_count = 2;
		this_type_info._struct.member_types[0] = TYPEINFO(i32) ? TYPEINFO(i32)->hash : 0;
		this_type_info._struct.member_names[0] = "width"_;
		this_type_info._struct.member_offsets[0] = offsetof(_asset_bitmap,width);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(i32) ? TYPEINFO(i32)->hash : 0;
		this_type_info._struct.member_names[1] = "height"_;
		this_type_info._struct.member_offsets[1] = offsetof(_asset_bitmap,height);
		this_type_info._struct.member_circular[1] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(_asset_ttf_font);
		this_type_info.name = "_asset_ttf_font"_;
		this_type_info.hash = (type_id)typeid(_asset_ttf_font).hash_code();
		this_type_info._struct.member_count = 1;
		this_type_info._struct.member_types[0] = TYPEINFO(u64) ? TYPEINFO(u64)->hash : 0;
		this_type_info._struct.member_names[0] = "file_size"_;
		this_type_info._struct.member_offsets[0] = offsetof(_asset_ttf_font,file_size);
		this_type_info._struct.member_circular[0] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

#pragma push_macro("T")
#define T file_glyph_data
	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(array<T>);
		this_type_info.name = "array"_;
		this_type_info.hash = (type_id)typeid(array<T>).hash_code();
		this_type_info._struct.member_count = 3;
#define __array__ array<T>
		this_type_info._struct.member_types[0] = TYPEINFO(T *) ? TYPEINFO(T *)->hash : 0;
		this_type_info._struct.member_names[0] = "memory"_;
		this_type_info._struct.member_offsets[0] = offsetof(__array__, memory);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[1] = "capacity"_;
		this_type_info._struct.member_offsets[1] = offsetof(__array__, capacity);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(allocator *) ? TYPEINFO(allocator *)->hash : 0;
		this_type_info._struct.member_names[2] = "alloc"_;
		this_type_info._struct.member_offsets[2] = offsetof(__array__, alloc);
		this_type_info._struct.member_circular[2] = 0;
#undef __array__
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

#pragma pop_macro("T")

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(_asset_raster_font);
		this_type_info.name = "_asset_raster_font"_;
		this_type_info.hash = (type_id)typeid(_asset_raster_font).hash_code();
		this_type_info._struct.member_count = 8;
		this_type_info._struct.member_types[0] = TYPEINFO(f32) ? TYPEINFO(f32)->hash : 0;
		this_type_info._struct.member_names[0] = "point"_;
		this_type_info._struct.member_offsets[0] = offsetof(_asset_raster_font,point);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(f32) ? TYPEINFO(f32)->hash : 0;
		this_type_info._struct.member_names[1] = "ascent"_;
		this_type_info._struct.member_offsets[1] = offsetof(_asset_raster_font,ascent);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(f32) ? TYPEINFO(f32)->hash : 0;
		this_type_info._struct.member_names[2] = "descent"_;
		this_type_info._struct.member_offsets[2] = offsetof(_asset_raster_font,descent);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(f32) ? TYPEINFO(f32)->hash : 0;
		this_type_info._struct.member_names[3] = "linegap"_;
		this_type_info._struct.member_offsets[3] = offsetof(_asset_raster_font,linegap);
		this_type_info._struct.member_circular[3] = 0;
		this_type_info._struct.member_types[4] = TYPEINFO(f32) ? TYPEINFO(f32)->hash : 0;
		this_type_info._struct.member_names[4] = "linedist"_;
		this_type_info._struct.member_offsets[4] = offsetof(_asset_raster_font,linedist);
		this_type_info._struct.member_circular[4] = 0;
		this_type_info._struct.member_types[5] = TYPEINFO(i32) ? TYPEINFO(i32)->hash : 0;
		this_type_info._struct.member_names[5] = "width"_;
		this_type_info._struct.member_offsets[5] = offsetof(_asset_raster_font,width);
		this_type_info._struct.member_circular[5] = 0;
		this_type_info._struct.member_types[6] = TYPEINFO(i32) ? TYPEINFO(i32)->hash : 0;
		this_type_info._struct.member_names[6] = "height"_;
		this_type_info._struct.member_offsets[6] = offsetof(_asset_raster_font,height);
		this_type_info._struct.member_circular[6] = 0;
		this_type_info._struct.member_types[7] = TYPEINFO(array<file_glyph_data>) ? TYPEINFO(array<file_glyph_data>)->hash : 0;
		this_type_info._struct.member_names[7] = "glyphs"_;
		this_type_info._struct.member_offsets[7] = offsetof(_asset_raster_font,glyphs);
		this_type_info._struct.member_circular[7] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(asset);
		this_type_info.name = "asset"_;
		this_type_info.hash = (type_id)typeid(asset).hash_code();
		this_type_info._struct.member_count = 6;
		this_type_info._struct.member_types[0] = TYPEINFO(string) ? TYPEINFO(string)->hash : 0;
		this_type_info._struct.member_names[0] = "name"_;
		this_type_info._struct.member_offsets[0] = offsetof(asset,name);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(asset_type) ? TYPEINFO(asset_type)->hash : 0;
		this_type_info._struct.member_names[1] = "type"_;
		this_type_info._struct.member_offsets[1] = offsetof(asset,type);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(u8 *) ? TYPEINFO(u8 *)->hash : 0;
		this_type_info._struct.member_names[2] = "mem"_;
		this_type_info._struct.member_offsets[2] = offsetof(asset,mem);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(_asset_bitmap) ? TYPEINFO(_asset_bitmap)->hash : 0;
		this_type_info._struct.member_names[3] = "bitmap"_;
		this_type_info._struct.member_offsets[3] = offsetof(asset,bitmap);
		this_type_info._struct.member_circular[3] = 0;
		this_type_info._struct.member_types[4] = TYPEINFO(_asset_raster_font) ? TYPEINFO(_asset_raster_font)->hash : 0;
		this_type_info._struct.member_names[4] = "raster_font"_;
		this_type_info._struct.member_offsets[4] = offsetof(asset,raster_font);
		this_type_info._struct.member_circular[4] = 0;
		this_type_info._struct.member_types[5] = TYPEINFO(_asset_ttf_font) ? TYPEINFO(_asset_ttf_font)->hash : 0;
		this_type_info._struct.member_names[5] = "ttf_font"_;
		this_type_info._struct.member_offsets[5] = offsetof(asset,ttf_font);
		this_type_info._struct.member_circular[5] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

#pragma push_macro("K")
#define K string
#pragma push_macro("V")
#define V asset
#pragma push_macro("K")
#define K string
#pragma push_macro("V")
#define V asset
	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(map_element<K,V>);
		this_type_info.name = "map_element"_;
		this_type_info.hash = (type_id)typeid(map_element<K,V>).hash_code();
		this_type_info._struct.member_count = 3;
#define __map_element__ map_element<K,V>
		this_type_info._struct.member_types[0] = TYPEINFO(K) ? TYPEINFO(K)->hash : 0;
		this_type_info._struct.member_names[0] = "key"_;
		this_type_info._struct.member_offsets[0] = offsetof(__map_element__, key);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(V) ? TYPEINFO(V)->hash : 0;
		this_type_info._struct.member_names[1] = "value"_;
		this_type_info._struct.member_offsets[1] = offsetof(__map_element__, value);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[2] = "occupied_and_bucket"_;
		this_type_info._struct.member_offsets[2] = offsetof(__map_element__, occupied_and_bucket);
		this_type_info._struct.member_circular[2] = 0;
#undef __map_element__
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

#pragma pop_macro("K")
#pragma pop_macro("V")

#pragma push_macro("T")
#define T map_element<K,V>
	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(vector<T>);
		this_type_info.name = "vector"_;
		this_type_info.hash = (type_id)typeid(vector<T>).hash_code();
		this_type_info._struct.member_count = 4;
#define __vector__ vector<T>
		this_type_info._struct.member_types[0] = TYPEINFO(T *) ? TYPEINFO(T *)->hash : 0;
		this_type_info._struct.member_names[0] = "memory"_;
		this_type_info._struct.member_offsets[0] = offsetof(__vector__, memory);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[1] = "size"_;
		this_type_info._struct.member_offsets[1] = offsetof(__vector__, size);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[2] = "capacity"_;
		this_type_info._struct.member_offsets[2] = offsetof(__vector__, capacity);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(allocator *) ? TYPEINFO(allocator *)->hash : 0;
		this_type_info._struct.member_names[3] = "alloc"_;
		this_type_info._struct.member_offsets[3] = offsetof(__vector__, alloc);
		this_type_info._struct.member_circular[3] = 0;
#undef __vector__
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

#pragma pop_macro("T")

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(map<K,V>);
		this_type_info.name = "map"_;
		this_type_info.hash = (type_id)typeid(map<K,V>).hash_code();
		this_type_info._struct.member_count = 4;
#define __map__ map<K,V>
		this_type_info._struct.member_types[0] = TYPEINFO(vector<map_element<K, V> >) ? TYPEINFO(vector<map_element<K, V> >)->hash : 0;
		this_type_info._struct.member_names[0] = "contents"_;
		this_type_info._struct.member_offsets[0] = offsetof(__map__, contents);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[1] = "size"_;
		this_type_info._struct.member_offsets[1] = offsetof(__map__, size);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[2] = "max_probe"_;
		this_type_info._struct.member_offsets[2] = offsetof(__map__, max_probe);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(allocator *) ? TYPEINFO(allocator *)->hash : 0;
		this_type_info._struct.member_names[3] = "alloc"_;
		this_type_info._struct.member_offsets[3] = offsetof(__map__, alloc);
		this_type_info._struct.member_circular[3] = 0;
#undef __map__
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

#pragma pop_macro("K")
#pragma pop_macro("V")

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(asset_store);
		this_type_info.name = "asset_store"_;
		this_type_info.hash = (type_id)typeid(asset_store).hash_code();
		this_type_info._struct.member_count = 6;
		this_type_info._struct.member_types[0] = TYPEINFO(map<string, asset>) ? TYPEINFO(map<string, asset>)->hash : 0;
		this_type_info._struct.member_names[0] = "assets"_;
		this_type_info._struct.member_offsets[0] = offsetof(asset_store,assets);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(void *) ? TYPEINFO(void *)->hash : 0;
		this_type_info._struct.member_names[1] = "store"_;
		this_type_info._struct.member_offsets[1] = offsetof(asset_store,store);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[2] = "store_sz"_;
		this_type_info._struct.member_offsets[2] = offsetof(asset_store,store_sz);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(string) ? TYPEINFO(string)->hash : 0;
		this_type_info._struct.member_names[3] = "path"_;
		this_type_info._struct.member_offsets[3] = offsetof(asset_store,path);
		this_type_info._struct.member_circular[3] = 0;
		this_type_info._struct.member_types[4] = TYPEINFO(platform_file_attributes) ? TYPEINFO(platform_file_attributes)->hash : 0;
		this_type_info._struct.member_names[4] = "last"_;
		this_type_info._struct.member_offsets[4] = offsetof(asset_store,last);
		this_type_info._struct.member_circular[4] = 0;
		this_type_info._struct.member_types[5] = TYPEINFO(allocator *) ? TYPEINFO(allocator *)->hash : 0;
		this_type_info._struct.member_names[5] = "alloc"_;
		this_type_info._struct.member_offsets[5] = offsetof(asset_store,alloc);
		this_type_info._struct.member_circular[5] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(shader_source);
		this_type_info.name = "shader_source"_;
		this_type_info.hash = (type_id)typeid(shader_source).hash_code();
		this_type_info._struct.member_count = 4;
		this_type_info._struct.member_types[0] = TYPEINFO(string) ? TYPEINFO(string)->hash : 0;
		this_type_info._struct.member_names[0] = "path"_;
		this_type_info._struct.member_offsets[0] = offsetof(shader_source,path);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(platform_file_attributes) ? TYPEINFO(platform_file_attributes)->hash : 0;
		this_type_info._struct.member_names[1] = "last_attrib"_;
		this_type_info._struct.member_offsets[1] = offsetof(shader_source,last_attrib);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(string) ? TYPEINFO(string)->hash : 0;
		this_type_info._struct.member_names[2] = "source"_;
		this_type_info._struct.member_offsets[2] = offsetof(shader_source,source);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(allocator *) ? TYPEINFO(allocator *)->hash : 0;
		this_type_info._struct.member_names[3] = "alloc"_;
		this_type_info._struct.member_offsets[3] = offsetof(shader_source,alloc);
		this_type_info._struct.member_circular[3] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

#pragma push_macro("T")
#define T void
#pragma push_macro("args")
#define args shader_program*
	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(func_ptr<T,args>);
		this_type_info.name = "func_ptr"_;
		this_type_info.hash = (type_id)typeid(func_ptr<T,args>).hash_code();
		this_type_info._struct.member_count = 1;
#define __func_ptr__ func_ptr<T,args>
		this_type_info._struct.member_types[0] = TYPEINFO(_FPTR *) ? TYPEINFO(_FPTR *)->hash : 0;
		this_type_info._struct.member_names[0] = "data"_;
		this_type_info._struct.member_offsets[0] = offsetof(__func_ptr__, data);
		this_type_info._struct.member_circular[0] = 0;
#undef __func_ptr__
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

#pragma pop_macro("T")
#pragma pop_macro("args")

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(shader_program);
		this_type_info.name = "shader_program"_;
		this_type_info.hash = (type_id)typeid(shader_program).hash_code();
		this_type_info._struct.member_count = 5;
		this_type_info._struct.member_types[0] = TYPEINFO(GLuint) ? TYPEINFO(GLuint)->hash : 0;
		this_type_info._struct.member_names[0] = "handle"_;
		this_type_info._struct.member_offsets[0] = offsetof(shader_program,handle);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(shader_source) ? TYPEINFO(shader_source)->hash : 0;
		this_type_info._struct.member_names[1] = "vertex"_;
		this_type_info._struct.member_offsets[1] = offsetof(shader_program,vertex);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(shader_source) ? TYPEINFO(shader_source)->hash : 0;
		this_type_info._struct.member_names[2] = "geometry"_;
		this_type_info._struct.member_offsets[2] = offsetof(shader_program,geometry);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(shader_source) ? TYPEINFO(shader_source)->hash : 0;
		this_type_info._struct.member_names[3] = "fragment"_;
		this_type_info._struct.member_offsets[3] = offsetof(shader_program,fragment);
		this_type_info._struct.member_circular[3] = 0;
		this_type_info._struct.member_types[4] = TYPEINFO(func_ptr<void, shader_program *, render_command *>) ? TYPEINFO(func_ptr<void, shader_program *, render_command *>)->hash : 0;
		this_type_info._struct.member_names[4] = "send_uniforms"_;
		this_type_info._struct.member_offsets[4] = offsetof(shader_program,send_uniforms);
		this_type_info._struct.member_circular[4] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(asset_pair);
		this_type_info.name = "asset_pair"_;
		this_type_info.hash = (type_id)typeid(asset_pair).hash_code();
		this_type_info._struct.member_count = 2;
		this_type_info._struct.member_types[0] = TYPEINFO(string) ? TYPEINFO(string)->hash : 0;
		this_type_info._struct.member_names[0] = "name"_;
		this_type_info._struct.member_offsets[0] = offsetof(asset_pair,name);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(asset_store *) ? TYPEINFO(asset_store *)->hash : 0;
		this_type_info._struct.member_names[1] = "store"_;
		this_type_info._struct.member_offsets[1] = offsetof(asset_pair,store);
		this_type_info._struct.member_circular[1] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(texture_cube_info);
		this_type_info.name = "texture_cube_info"_;
		this_type_info.hash = (type_id)typeid(texture_cube_info).hash_code();
		this_type_info._struct.member_count = 1;
		this_type_info._struct.member_types[0] = TYPEINFO(asset_pair) ? TYPEINFO(asset_pair)->hash : 0;
		this_type_info._struct.member_names[0] = "info"_;
		this_type_info._struct.member_offsets[0] = offsetof(texture_cube_info,info);
		this_type_info._struct.member_circular[0] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

#pragma push_macro("T")
#define T asset_pair
	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(array<T>);
		this_type_info.name = "array"_;
		this_type_info.hash = (type_id)typeid(array<T>).hash_code();
		this_type_info._struct.member_count = 3;
#define __array__ array<T>
		this_type_info._struct.member_types[0] = TYPEINFO(T *) ? TYPEINFO(T *)->hash : 0;
		this_type_info._struct.member_names[0] = "memory"_;
		this_type_info._struct.member_offsets[0] = offsetof(__array__, memory);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[1] = "capacity"_;
		this_type_info._struct.member_offsets[1] = offsetof(__array__, capacity);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(allocator *) ? TYPEINFO(allocator *)->hash : 0;
		this_type_info._struct.member_names[2] = "alloc"_;
		this_type_info._struct.member_offsets[2] = offsetof(__array__, alloc);
		this_type_info._struct.member_circular[2] = 0;
#undef __array__
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

#pragma pop_macro("T")

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(texture_array_info);
		this_type_info.name = "texture_array_info"_;
		this_type_info.hash = (type_id)typeid(texture_array_info).hash_code();
		this_type_info._struct.member_count = 4;
		this_type_info._struct.member_types[0] = TYPEINFO(iv3) ? TYPEINFO(iv3)->hash : 0;
		this_type_info._struct.member_names[0] = "dim"_;
		this_type_info._struct.member_offsets[0] = offsetof(texture_array_info,dim);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(i32) ? TYPEINFO(i32)->hash : 0;
		this_type_info._struct.member_names[1] = "current_layer"_;
		this_type_info._struct.member_offsets[1] = offsetof(texture_array_info,current_layer);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(i32) ? TYPEINFO(i32)->hash : 0;
		this_type_info._struct.member_names[2] = "layer_offset"_;
		this_type_info._struct.member_offsets[2] = offsetof(texture_array_info,layer_offset);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(array<asset_pair>) ? TYPEINFO(array<asset_pair>)->hash : 0;
		this_type_info._struct.member_names[3] = "assets"_;
		this_type_info._struct.member_offsets[3] = offsetof(texture_array_info,assets);
		this_type_info._struct.member_circular[3] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(texture_bmp_info);
		this_type_info.name = "texture_bmp_info"_;
		this_type_info.hash = (type_id)typeid(texture_bmp_info).hash_code();
		this_type_info._struct.member_count = 1;
		this_type_info._struct.member_types[0] = TYPEINFO(asset_pair) ? TYPEINFO(asset_pair)->hash : 0;
		this_type_info._struct.member_names[0] = "info"_;
		this_type_info._struct.member_offsets[0] = offsetof(texture_bmp_info,info);
		this_type_info._struct.member_circular[0] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(texture_rf_info);
		this_type_info.name = "texture_rf_info"_;
		this_type_info.hash = (type_id)typeid(texture_rf_info).hash_code();
		this_type_info._struct.member_count = 1;
		this_type_info._struct.member_types[0] = TYPEINFO(asset_pair) ? TYPEINFO(asset_pair)->hash : 0;
		this_type_info._struct.member_names[0] = "info"_;
		this_type_info._struct.member_offsets[0] = offsetof(texture_rf_info,info);
		this_type_info._struct.member_circular[0] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(texture);
		this_type_info.name = "texture"_;
		this_type_info.hash = (type_id)typeid(texture).hash_code();
		this_type_info._struct.member_count = 11;
		this_type_info._struct.member_types[0] = TYPEINFO(texture_type) ? TYPEINFO(texture_type)->hash : 0;
		this_type_info._struct.member_names[0] = "type"_;
		this_type_info._struct.member_offsets[0] = offsetof(texture,type);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(texture_id) ? TYPEINFO(texture_id)->hash : 0;
		this_type_info._struct.member_names[1] = "id"_;
		this_type_info._struct.member_offsets[1] = offsetof(texture,id);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(GLuint) ? TYPEINFO(GLuint)->hash : 0;
		this_type_info._struct.member_names[2] = "handle"_;
		this_type_info._struct.member_offsets[2] = offsetof(texture,handle);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(gl_tex_target) ? TYPEINFO(gl_tex_target)->hash : 0;
		this_type_info._struct.member_names[3] = "gl_type"_;
		this_type_info._struct.member_offsets[3] = offsetof(texture,gl_type);
		this_type_info._struct.member_circular[3] = 0;
		this_type_info._struct.member_types[4] = TYPEINFO(texture_wrap) ? TYPEINFO(texture_wrap)->hash : 0;
		this_type_info._struct.member_names[4] = "wrap"_;
		this_type_info._struct.member_offsets[4] = offsetof(texture,wrap);
		this_type_info._struct.member_circular[4] = 0;
		this_type_info._struct.member_types[5] = TYPEINFO(bool) ? TYPEINFO(bool)->hash : 0;
		this_type_info._struct.member_names[5] = "pixelated"_;
		this_type_info._struct.member_offsets[5] = offsetof(texture,pixelated);
		this_type_info._struct.member_circular[5] = 0;
		this_type_info._struct.member_types[6] = TYPEINFO(f32) ? TYPEINFO(f32)->hash : 0;
		this_type_info._struct.member_names[6] = "anisotropy"_;
		this_type_info._struct.member_offsets[6] = offsetof(texture,anisotropy);
		this_type_info._struct.member_circular[6] = 0;
		this_type_info._struct.member_types[7] = TYPEINFO(texture_rf_info) ? TYPEINFO(texture_rf_info)->hash : 0;
		this_type_info._struct.member_names[7] = "rf_info"_;
		this_type_info._struct.member_offsets[7] = offsetof(texture,rf_info);
		this_type_info._struct.member_circular[7] = 0;
		this_type_info._struct.member_types[8] = TYPEINFO(texture_bmp_info) ? TYPEINFO(texture_bmp_info)->hash : 0;
		this_type_info._struct.member_names[8] = "bmp_info"_;
		this_type_info._struct.member_offsets[8] = offsetof(texture,bmp_info);
		this_type_info._struct.member_circular[8] = 0;
		this_type_info._struct.member_types[9] = TYPEINFO(texture_cube_info) ? TYPEINFO(texture_cube_info)->hash : 0;
		this_type_info._struct.member_names[9] = "cube_info"_;
		this_type_info._struct.member_offsets[9] = offsetof(texture,cube_info);
		this_type_info._struct.member_circular[9] = 0;
		this_type_info._struct.member_types[10] = TYPEINFO(texture_array_info) ? TYPEINFO(texture_array_info)->hash : 0;
		this_type_info._struct.member_names[10] = "array_info"_;
		this_type_info._struct.member_offsets[10] = offsetof(texture,array_info);
		this_type_info._struct.member_circular[10] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

#pragma push_macro("T")
#define T string
	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(vector<T>);
		this_type_info.name = "vector"_;
		this_type_info.hash = (type_id)typeid(vector<T>).hash_code();
		this_type_info._struct.member_count = 4;
#define __vector__ vector<T>
		this_type_info._struct.member_types[0] = TYPEINFO(T *) ? TYPEINFO(T *)->hash : 0;
		this_type_info._struct.member_names[0] = "memory"_;
		this_type_info._struct.member_offsets[0] = offsetof(__vector__, memory);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[1] = "size"_;
		this_type_info._struct.member_offsets[1] = offsetof(__vector__, size);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[2] = "capacity"_;
		this_type_info._struct.member_offsets[2] = offsetof(__vector__, capacity);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(allocator *) ? TYPEINFO(allocator *)->hash : 0;
		this_type_info._struct.member_names[3] = "alloc"_;
		this_type_info._struct.member_offsets[3] = offsetof(__vector__, alloc);
		this_type_info._struct.member_circular[3] = 0;
#undef __vector__
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

#pragma pop_macro("T")

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(ogl_info);
		this_type_info.name = "ogl_info"_;
		this_type_info.hash = (type_id)typeid(ogl_info).hash_code();
		this_type_info._struct.member_count = 10;
		this_type_info._struct.member_types[0] = TYPEINFO(i32) ? TYPEINFO(i32)->hash : 0;
		this_type_info._struct.member_names[0] = "major"_;
		this_type_info._struct.member_offsets[0] = offsetof(ogl_info,major);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(i32) ? TYPEINFO(i32)->hash : 0;
		this_type_info._struct.member_names[1] = "minor"_;
		this_type_info._struct.member_offsets[1] = offsetof(ogl_info,minor);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(string) ? TYPEINFO(string)->hash : 0;
		this_type_info._struct.member_names[2] = "vendor"_;
		this_type_info._struct.member_offsets[2] = offsetof(ogl_info,vendor);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(string) ? TYPEINFO(string)->hash : 0;
		this_type_info._struct.member_names[3] = "renderer"_;
		this_type_info._struct.member_offsets[3] = offsetof(ogl_info,renderer);
		this_type_info._struct.member_circular[3] = 0;
		this_type_info._struct.member_types[4] = TYPEINFO(string) ? TYPEINFO(string)->hash : 0;
		this_type_info._struct.member_names[4] = "version"_;
		this_type_info._struct.member_offsets[4] = offsetof(ogl_info,version);
		this_type_info._struct.member_circular[4] = 0;
		this_type_info._struct.member_types[5] = TYPEINFO(string) ? TYPEINFO(string)->hash : 0;
		this_type_info._struct.member_names[5] = "shader_version"_;
		this_type_info._struct.member_offsets[5] = offsetof(ogl_info,shader_version);
		this_type_info._struct.member_circular[5] = 0;
		this_type_info._struct.member_types[6] = TYPEINFO(vector<string>) ? TYPEINFO(vector<string>)->hash : 0;
		this_type_info._struct.member_names[6] = "extensions"_;
		this_type_info._struct.member_offsets[6] = offsetof(ogl_info,extensions);
		this_type_info._struct.member_circular[6] = 0;
		this_type_info._struct.member_types[7] = TYPEINFO(i32) ? TYPEINFO(i32)->hash : 0;
		this_type_info._struct.member_names[7] = "max_texture_size"_;
		this_type_info._struct.member_offsets[7] = offsetof(ogl_info,max_texture_size);
		this_type_info._struct.member_circular[7] = 0;
		this_type_info._struct.member_types[8] = TYPEINFO(i32) ? TYPEINFO(i32)->hash : 0;
		this_type_info._struct.member_names[8] = "max_texture_layers"_;
		this_type_info._struct.member_offsets[8] = offsetof(ogl_info,max_texture_layers);
		this_type_info._struct.member_circular[8] = 0;
		this_type_info._struct.member_types[9] = TYPEINFO(f32) ? TYPEINFO(f32)->hash : 0;
		this_type_info._struct.member_names[9] = "max_anisotropy"_;
		this_type_info._struct.member_offsets[9] = offsetof(ogl_info,max_anisotropy);
		this_type_info._struct.member_circular[9] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

#pragma push_macro("T")
#define T void
#pragma push_macro("args")
#define args gpu_object*
	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(func_ptr<T,args>);
		this_type_info.name = "func_ptr"_;
		this_type_info.hash = (type_id)typeid(func_ptr<T,args>).hash_code();
		this_type_info._struct.member_count = 1;
#define __func_ptr__ func_ptr<T,args>
		this_type_info._struct.member_types[0] = TYPEINFO(_FPTR *) ? TYPEINFO(_FPTR *)->hash : 0;
		this_type_info._struct.member_names[0] = "data"_;
		this_type_info._struct.member_offsets[0] = offsetof(__func_ptr__, data);
		this_type_info._struct.member_circular[0] = 0;
#undef __func_ptr__
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

#pragma pop_macro("T")
#pragma pop_macro("args")

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_array;
		this_type_info.size = sizeof(GLuint [5]);
		this_type_info.name = STRING(GLuint [5]);
		this_type_info.hash = (type_id)typeid(GLuint [5]).hash_code();
		this_type_info._array.of = TYPEINFO(GLuint) ? TYPEINFO(GLuint)->hash : 0;
		this_type_info._array.length = 5;
		type_table.insert_if_unique(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(gpu_object);
		this_type_info.name = "gpu_object"_;
		this_type_info.hash = (type_id)typeid(gpu_object).hash_code();
		this_type_info._struct.member_count = 6;
		this_type_info._struct.member_types[0] = TYPEINFO(func_ptr<void, gpu_object *>) ? TYPEINFO(func_ptr<void, gpu_object *>)->hash : 0;
		this_type_info._struct.member_names[0] = "setup"_;
		this_type_info._struct.member_offsets[0] = offsetof(gpu_object,setup);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(func_ptr<void, gpu_object *, void *, bool>) ? TYPEINFO(func_ptr<void, gpu_object *, void *, bool>)->hash : 0;
		this_type_info._struct.member_names[1] = "update"_;
		this_type_info._struct.member_offsets[1] = offsetof(gpu_object,update);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(GLuint) ? TYPEINFO(GLuint)->hash : 0;
		this_type_info._struct.member_names[2] = "vao"_;
		this_type_info._struct.member_offsets[2] = offsetof(gpu_object,vao);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(GLuint [5]) ? TYPEINFO(GLuint [5])->hash : 0;
		this_type_info._struct.member_names[3] = "vbos"_;
		this_type_info._struct.member_offsets[3] = offsetof(gpu_object,vbos);
		this_type_info._struct.member_circular[3] = 0;
		this_type_info._struct.member_types[4] = TYPEINFO(void *) ? TYPEINFO(void *)->hash : 0;
		this_type_info._struct.member_names[4] = "data"_;
		this_type_info._struct.member_offsets[4] = offsetof(gpu_object,data);
		this_type_info._struct.member_circular[4] = 0;
		this_type_info._struct.member_types[5] = TYPEINFO(gpu_object_id) ? TYPEINFO(gpu_object_id)->hash : 0;
		this_type_info._struct.member_names[5] = "id"_;
		this_type_info._struct.member_offsets[5] = offsetof(gpu_object,id);
		this_type_info._struct.member_circular[5] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

#pragma push_macro("T")
#define T bool
#pragma push_macro("args")
#define args ogl_info*
	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(func_ptr<T,args>);
		this_type_info.name = "func_ptr"_;
		this_type_info.hash = (type_id)typeid(func_ptr<T,args>).hash_code();
		this_type_info._struct.member_count = 1;
#define __func_ptr__ func_ptr<T,args>
		this_type_info._struct.member_types[0] = TYPEINFO(_FPTR *) ? TYPEINFO(_FPTR *)->hash : 0;
		this_type_info._struct.member_names[0] = "data"_;
		this_type_info._struct.member_offsets[0] = offsetof(__func_ptr__, data);
		this_type_info._struct.member_circular[0] = 0;
#undef __func_ptr__
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

#pragma pop_macro("T")
#pragma pop_macro("args")

#pragma push_macro("T")
#define T void
#pragma push_macro("args")
#define args render_command*
	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(func_ptr<T,args>);
		this_type_info.name = "func_ptr"_;
		this_type_info.hash = (type_id)typeid(func_ptr<T,args>).hash_code();
		this_type_info._struct.member_count = 1;
#define __func_ptr__ func_ptr<T,args>
		this_type_info._struct.member_types[0] = TYPEINFO(_FPTR *) ? TYPEINFO(_FPTR *)->hash : 0;
		this_type_info._struct.member_names[0] = "data"_;
		this_type_info._struct.member_offsets[0] = offsetof(__func_ptr__, data);
		this_type_info._struct.member_circular[0] = 0;
#undef __func_ptr__
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

#pragma pop_macro("T")
#pragma pop_macro("args")

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(draw_context);
		this_type_info.name = "draw_context"_;
		this_type_info.hash = (type_id)typeid(draw_context).hash_code();
		this_type_info._struct.member_count = 3;
		this_type_info._struct.member_types[0] = TYPEINFO(func_ptr<bool, ogl_info *>) ? TYPEINFO(func_ptr<bool, ogl_info *>)->hash : 0;
		this_type_info._struct.member_names[0] = "compat"_;
		this_type_info._struct.member_offsets[0] = offsetof(draw_context,compat);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(func_ptr<void, render_command *, gpu_object *>) ? TYPEINFO(func_ptr<void, render_command *, gpu_object *>)->hash : 0;
		this_type_info._struct.member_names[1] = "run"_;
		this_type_info._struct.member_offsets[1] = offsetof(draw_context,run);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(shader_program) ? TYPEINFO(shader_program)->hash : 0;
		this_type_info._struct.member_names[2] = "shader"_;
		this_type_info._struct.member_offsets[2] = offsetof(draw_context,shader);
		this_type_info._struct.member_circular[2] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(cmd_settings);
		this_type_info.name = "cmd_settings"_;
		this_type_info.hash = (type_id)typeid(cmd_settings).hash_code();
		this_type_info._struct.member_count = 9;
		this_type_info._struct.member_types[0] = TYPEINFO(bool) ? TYPEINFO(bool)->hash : 0;
		this_type_info._struct.member_names[0] = "polygon_line"_;
		this_type_info._struct.member_offsets[0] = offsetof(cmd_settings,polygon_line);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(bool) ? TYPEINFO(bool)->hash : 0;
		this_type_info._struct.member_names[1] = "depth_test"_;
		this_type_info._struct.member_offsets[1] = offsetof(cmd_settings,depth_test);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(bool) ? TYPEINFO(bool)->hash : 0;
		this_type_info._struct.member_names[2] = "line_smooth"_;
		this_type_info._struct.member_offsets[2] = offsetof(cmd_settings,line_smooth);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(bool) ? TYPEINFO(bool)->hash : 0;
		this_type_info._struct.member_names[3] = "blend"_;
		this_type_info._struct.member_offsets[3] = offsetof(cmd_settings,blend);
		this_type_info._struct.member_circular[3] = 0;
		this_type_info._struct.member_types[4] = TYPEINFO(bool) ? TYPEINFO(bool)->hash : 0;
		this_type_info._struct.member_names[4] = "scissor"_;
		this_type_info._struct.member_offsets[4] = offsetof(cmd_settings,scissor);
		this_type_info._struct.member_circular[4] = 0;
		this_type_info._struct.member_types[5] = TYPEINFO(bool) ? TYPEINFO(bool)->hash : 0;
		this_type_info._struct.member_names[5] = "cull_backface"_;
		this_type_info._struct.member_offsets[5] = offsetof(cmd_settings,cull_backface);
		this_type_info._struct.member_circular[5] = 0;
		this_type_info._struct.member_types[6] = TYPEINFO(bool) ? TYPEINFO(bool)->hash : 0;
		this_type_info._struct.member_names[6] = "multisample"_;
		this_type_info._struct.member_offsets[6] = offsetof(cmd_settings,multisample);
		this_type_info._struct.member_circular[6] = 0;
		this_type_info._struct.member_types[7] = TYPEINFO(bool) ? TYPEINFO(bool)->hash : 0;
		this_type_info._struct.member_names[7] = "sample_shading"_;
		this_type_info._struct.member_offsets[7] = offsetof(cmd_settings,sample_shading);
		this_type_info._struct.member_circular[7] = 0;
		this_type_info._struct.member_types[8] = TYPEINFO(bool) ? TYPEINFO(bool)->hash : 0;
		this_type_info._struct.member_names[8] = "depth_mask"_;
		this_type_info._struct.member_offsets[8] = offsetof(cmd_settings,depth_mask);
		this_type_info._struct.member_circular[8] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(ogl_settings);
		this_type_info.name = "ogl_settings"_;
		this_type_info.hash = (type_id)typeid(ogl_settings).hash_code();
		this_type_info._struct.member_count = 1;
		this_type_info._struct.member_types[0] = TYPEINFO(f32) ? TYPEINFO(f32)->hash : 0;
		this_type_info._struct.member_names[0] = "anisotropy"_;
		this_type_info._struct.member_offsets[0] = offsetof(ogl_settings,anisotropy);
		this_type_info._struct.member_circular[0] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(render_command);
		this_type_info.name = "render_command"_;
		this_type_info.hash = (type_id)typeid(render_command).hash_code();
		this_type_info._struct.member_count = 3;
		this_type_info._struct.member_types[0] = TYPEINFO(u16) ? TYPEINFO(u16)->hash : 0;
		this_type_info._struct.member_names[0] = "cmd"_;
		this_type_info._struct.member_offsets[0] = offsetof(render_command,cmd);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(render_setting) ? TYPEINFO(render_setting)->hash : 0;
		this_type_info._struct.member_names[1] = "setting"_;
		this_type_info._struct.member_offsets[1] = offsetof(render_command,setting);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(bool) ? TYPEINFO(bool)->hash : 0;
		this_type_info._struct.member_names[2] = "enable"_;
		this_type_info._struct.member_offsets[2] = offsetof(render_command,enable);
		this_type_info._struct.member_circular[2] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

#pragma push_macro("T")
#define T render_command
	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(vector<T>);
		this_type_info.name = "vector"_;
		this_type_info.hash = (type_id)typeid(vector<T>).hash_code();
		this_type_info._struct.member_count = 4;
#define __vector__ vector<T>
		this_type_info._struct.member_types[0] = TYPEINFO(T *) ? TYPEINFO(T *)->hash : 0;
		this_type_info._struct.member_names[0] = "memory"_;
		this_type_info._struct.member_offsets[0] = offsetof(__vector__, memory);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[1] = "size"_;
		this_type_info._struct.member_offsets[1] = offsetof(__vector__, size);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[2] = "capacity"_;
		this_type_info._struct.member_offsets[2] = offsetof(__vector__, capacity);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(allocator *) ? TYPEINFO(allocator *)->hash : 0;
		this_type_info._struct.member_names[3] = "alloc"_;
		this_type_info._struct.member_offsets[3] = offsetof(__vector__, alloc);
		this_type_info._struct.member_circular[3] = 0;
#undef __vector__
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

#pragma pop_macro("T")

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(render_command_list);
		this_type_info.name = "render_command_list"_;
		this_type_info.hash = (type_id)typeid(render_command_list).hash_code();
		this_type_info._struct.member_count = 2;
		this_type_info._struct.member_types[0] = TYPEINFO(vector<render_command>) ? TYPEINFO(vector<render_command>)->hash : 0;
		this_type_info._struct.member_names[0] = "commands"_;
		this_type_info._struct.member_offsets[0] = offsetof(render_command_list,commands);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(allocator *) ? TYPEINFO(allocator *)->hash : 0;
		this_type_info._struct.member_names[1] = "alloc"_;
		this_type_info._struct.member_offsets[1] = offsetof(render_command_list,alloc);
		this_type_info._struct.member_circular[1] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(render_camera);
		this_type_info.name = "render_camera"_;
		this_type_info.hash = (type_id)typeid(render_camera).hash_code();
		this_type_info._struct.member_count = 10;
		this_type_info._struct.member_types[0] = TYPEINFO(v3) ? TYPEINFO(v3)->hash : 0;
		this_type_info._struct.member_names[0] = "pos"_;
		this_type_info._struct.member_offsets[0] = offsetof(render_camera,pos);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(v3) ? TYPEINFO(v3)->hash : 0;
		this_type_info._struct.member_names[1] = "front"_;
		this_type_info._struct.member_offsets[1] = offsetof(render_camera,front);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(v3) ? TYPEINFO(v3)->hash : 0;
		this_type_info._struct.member_names[2] = "up"_;
		this_type_info._struct.member_offsets[2] = offsetof(render_camera,up);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(v3) ? TYPEINFO(v3)->hash : 0;
		this_type_info._struct.member_names[3] = "right"_;
		this_type_info._struct.member_offsets[3] = offsetof(render_camera,right);
		this_type_info._struct.member_circular[3] = 0;
		this_type_info._struct.member_types[4] = TYPEINFO(float) ? TYPEINFO(float)->hash : 0;
		this_type_info._struct.member_names[4] = "pitch"_;
		this_type_info._struct.member_offsets[4] = offsetof(render_camera,pitch);
		this_type_info._struct.member_circular[4] = 0;
		this_type_info._struct.member_types[5] = TYPEINFO(float) ? TYPEINFO(float)->hash : 0;
		this_type_info._struct.member_names[5] = "yaw"_;
		this_type_info._struct.member_offsets[5] = offsetof(render_camera,yaw);
		this_type_info._struct.member_circular[5] = 0;
		this_type_info._struct.member_types[6] = TYPEINFO(float) ? TYPEINFO(float)->hash : 0;
		this_type_info._struct.member_names[6] = "fov"_;
		this_type_info._struct.member_offsets[6] = offsetof(render_camera,fov);
		this_type_info._struct.member_circular[6] = 0;
		this_type_info._struct.member_types[7] = TYPEINFO(v3) ? TYPEINFO(v3)->hash : 0;
		this_type_info._struct.member_names[7] = "offset3rd"_;
		this_type_info._struct.member_offsets[7] = offsetof(render_camera,offset3rd);
		this_type_info._struct.member_circular[7] = 0;
		this_type_info._struct.member_types[8] = TYPEINFO(f32) ? TYPEINFO(f32)->hash : 0;
		this_type_info._struct.member_names[8] = "reach"_;
		this_type_info._struct.member_offsets[8] = offsetof(render_camera,reach);
		this_type_info._struct.member_circular[8] = 0;
		this_type_info._struct.member_types[9] = TYPEINFO(camera_mode) ? TYPEINFO(camera_mode)->hash : 0;
		this_type_info._struct.member_names[9] = "mode"_;
		this_type_info._struct.member_offsets[9] = offsetof(render_camera,mode);
		this_type_info._struct.member_circular[9] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

#pragma push_macro("K")
#define K u16
#pragma push_macro("V")
#define V draw_context
#pragma push_macro("K")
#define K u16
#pragma push_macro("V")
#define V draw_context
	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(map_element<K,V>);
		this_type_info.name = "map_element"_;
		this_type_info.hash = (type_id)typeid(map_element<K,V>).hash_code();
		this_type_info._struct.member_count = 3;
#define __map_element__ map_element<K,V>
		this_type_info._struct.member_types[0] = TYPEINFO(K) ? TYPEINFO(K)->hash : 0;
		this_type_info._struct.member_names[0] = "key"_;
		this_type_info._struct.member_offsets[0] = offsetof(__map_element__, key);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(V) ? TYPEINFO(V)->hash : 0;
		this_type_info._struct.member_names[1] = "value"_;
		this_type_info._struct.member_offsets[1] = offsetof(__map_element__, value);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[2] = "occupied_and_bucket"_;
		this_type_info._struct.member_offsets[2] = offsetof(__map_element__, occupied_and_bucket);
		this_type_info._struct.member_circular[2] = 0;
#undef __map_element__
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

#pragma pop_macro("K")
#pragma pop_macro("V")

#pragma push_macro("T")
#define T map_element<K,V>
	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(vector<T>);
		this_type_info.name = "vector"_;
		this_type_info.hash = (type_id)typeid(vector<T>).hash_code();
		this_type_info._struct.member_count = 4;
#define __vector__ vector<T>
		this_type_info._struct.member_types[0] = TYPEINFO(T *) ? TYPEINFO(T *)->hash : 0;
		this_type_info._struct.member_names[0] = "memory"_;
		this_type_info._struct.member_offsets[0] = offsetof(__vector__, memory);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[1] = "size"_;
		this_type_info._struct.member_offsets[1] = offsetof(__vector__, size);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[2] = "capacity"_;
		this_type_info._struct.member_offsets[2] = offsetof(__vector__, capacity);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(allocator *) ? TYPEINFO(allocator *)->hash : 0;
		this_type_info._struct.member_names[3] = "alloc"_;
		this_type_info._struct.member_offsets[3] = offsetof(__vector__, alloc);
		this_type_info._struct.member_circular[3] = 0;
#undef __vector__
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

#pragma pop_macro("T")

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(map<K,V>);
		this_type_info.name = "map"_;
		this_type_info.hash = (type_id)typeid(map<K,V>).hash_code();
		this_type_info._struct.member_count = 4;
#define __map__ map<K,V>
		this_type_info._struct.member_types[0] = TYPEINFO(vector<map_element<K, V> >) ? TYPEINFO(vector<map_element<K, V> >)->hash : 0;
		this_type_info._struct.member_names[0] = "contents"_;
		this_type_info._struct.member_offsets[0] = offsetof(__map__, contents);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[1] = "size"_;
		this_type_info._struct.member_offsets[1] = offsetof(__map__, size);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[2] = "max_probe"_;
		this_type_info._struct.member_offsets[2] = offsetof(__map__, max_probe);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(allocator *) ? TYPEINFO(allocator *)->hash : 0;
		this_type_info._struct.member_names[3] = "alloc"_;
		this_type_info._struct.member_offsets[3] = offsetof(__map__, alloc);
		this_type_info._struct.member_circular[3] = 0;
#undef __map__
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

#pragma pop_macro("K")
#pragma pop_macro("V")

#pragma push_macro("K")
#define K texture_id
#pragma push_macro("V")
#define V texture
#pragma push_macro("K")
#define K texture_id
#pragma push_macro("V")
#define V texture
	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(map_element<K,V>);
		this_type_info.name = "map_element"_;
		this_type_info.hash = (type_id)typeid(map_element<K,V>).hash_code();
		this_type_info._struct.member_count = 3;
#define __map_element__ map_element<K,V>
		this_type_info._struct.member_types[0] = TYPEINFO(K) ? TYPEINFO(K)->hash : 0;
		this_type_info._struct.member_names[0] = "key"_;
		this_type_info._struct.member_offsets[0] = offsetof(__map_element__, key);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(V) ? TYPEINFO(V)->hash : 0;
		this_type_info._struct.member_names[1] = "value"_;
		this_type_info._struct.member_offsets[1] = offsetof(__map_element__, value);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[2] = "occupied_and_bucket"_;
		this_type_info._struct.member_offsets[2] = offsetof(__map_element__, occupied_and_bucket);
		this_type_info._struct.member_circular[2] = 0;
#undef __map_element__
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

#pragma pop_macro("K")
#pragma pop_macro("V")

#pragma push_macro("T")
#define T map_element<K,V>
	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(vector<T>);
		this_type_info.name = "vector"_;
		this_type_info.hash = (type_id)typeid(vector<T>).hash_code();
		this_type_info._struct.member_count = 4;
#define __vector__ vector<T>
		this_type_info._struct.member_types[0] = TYPEINFO(T *) ? TYPEINFO(T *)->hash : 0;
		this_type_info._struct.member_names[0] = "memory"_;
		this_type_info._struct.member_offsets[0] = offsetof(__vector__, memory);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[1] = "size"_;
		this_type_info._struct.member_offsets[1] = offsetof(__vector__, size);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[2] = "capacity"_;
		this_type_info._struct.member_offsets[2] = offsetof(__vector__, capacity);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(allocator *) ? TYPEINFO(allocator *)->hash : 0;
		this_type_info._struct.member_names[3] = "alloc"_;
		this_type_info._struct.member_offsets[3] = offsetof(__vector__, alloc);
		this_type_info._struct.member_circular[3] = 0;
#undef __vector__
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

#pragma pop_macro("T")

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(map<K,V>);
		this_type_info.name = "map"_;
		this_type_info.hash = (type_id)typeid(map<K,V>).hash_code();
		this_type_info._struct.member_count = 4;
#define __map__ map<K,V>
		this_type_info._struct.member_types[0] = TYPEINFO(vector<map_element<K, V> >) ? TYPEINFO(vector<map_element<K, V> >)->hash : 0;
		this_type_info._struct.member_names[0] = "contents"_;
		this_type_info._struct.member_offsets[0] = offsetof(__map__, contents);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[1] = "size"_;
		this_type_info._struct.member_offsets[1] = offsetof(__map__, size);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[2] = "max_probe"_;
		this_type_info._struct.member_offsets[2] = offsetof(__map__, max_probe);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(allocator *) ? TYPEINFO(allocator *)->hash : 0;
		this_type_info._struct.member_names[3] = "alloc"_;
		this_type_info._struct.member_offsets[3] = offsetof(__map__, alloc);
		this_type_info._struct.member_circular[3] = 0;
#undef __map__
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

#pragma pop_macro("K")
#pragma pop_macro("V")

#pragma push_macro("K")
#define K gpu_object_id
#pragma push_macro("V")
#define V gpu_object
#pragma push_macro("K")
#define K gpu_object_id
#pragma push_macro("V")
#define V gpu_object
	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(map_element<K,V>);
		this_type_info.name = "map_element"_;
		this_type_info.hash = (type_id)typeid(map_element<K,V>).hash_code();
		this_type_info._struct.member_count = 3;
#define __map_element__ map_element<K,V>
		this_type_info._struct.member_types[0] = TYPEINFO(K) ? TYPEINFO(K)->hash : 0;
		this_type_info._struct.member_names[0] = "key"_;
		this_type_info._struct.member_offsets[0] = offsetof(__map_element__, key);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(V) ? TYPEINFO(V)->hash : 0;
		this_type_info._struct.member_names[1] = "value"_;
		this_type_info._struct.member_offsets[1] = offsetof(__map_element__, value);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[2] = "occupied_and_bucket"_;
		this_type_info._struct.member_offsets[2] = offsetof(__map_element__, occupied_and_bucket);
		this_type_info._struct.member_circular[2] = 0;
#undef __map_element__
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

#pragma pop_macro("K")
#pragma pop_macro("V")

#pragma push_macro("T")
#define T map_element<K,V>
	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(vector<T>);
		this_type_info.name = "vector"_;
		this_type_info.hash = (type_id)typeid(vector<T>).hash_code();
		this_type_info._struct.member_count = 4;
#define __vector__ vector<T>
		this_type_info._struct.member_types[0] = TYPEINFO(T *) ? TYPEINFO(T *)->hash : 0;
		this_type_info._struct.member_names[0] = "memory"_;
		this_type_info._struct.member_offsets[0] = offsetof(__vector__, memory);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[1] = "size"_;
		this_type_info._struct.member_offsets[1] = offsetof(__vector__, size);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[2] = "capacity"_;
		this_type_info._struct.member_offsets[2] = offsetof(__vector__, capacity);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(allocator *) ? TYPEINFO(allocator *)->hash : 0;
		this_type_info._struct.member_names[3] = "alloc"_;
		this_type_info._struct.member_offsets[3] = offsetof(__vector__, alloc);
		this_type_info._struct.member_circular[3] = 0;
#undef __vector__
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

#pragma pop_macro("T")

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(map<K,V>);
		this_type_info.name = "map"_;
		this_type_info.hash = (type_id)typeid(map<K,V>).hash_code();
		this_type_info._struct.member_count = 4;
#define __map__ map<K,V>
		this_type_info._struct.member_types[0] = TYPEINFO(vector<map_element<K, V> >) ? TYPEINFO(vector<map_element<K, V> >)->hash : 0;
		this_type_info._struct.member_names[0] = "contents"_;
		this_type_info._struct.member_offsets[0] = offsetof(__map__, contents);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[1] = "size"_;
		this_type_info._struct.member_offsets[1] = offsetof(__map__, size);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[2] = "max_probe"_;
		this_type_info._struct.member_offsets[2] = offsetof(__map__, max_probe);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(allocator *) ? TYPEINFO(allocator *)->hash : 0;
		this_type_info._struct.member_names[3] = "alloc"_;
		this_type_info._struct.member_offsets[3] = offsetof(__map__, alloc);
		this_type_info._struct.member_circular[3] = 0;
#undef __map__
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

#pragma pop_macro("K")
#pragma pop_macro("V")

#pragma push_macro("T")
#define T cmd_settings
#pragma push_macro("T")
#define T cmd_settings
	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(vector<T>);
		this_type_info.name = "vector"_;
		this_type_info.hash = (type_id)typeid(vector<T>).hash_code();
		this_type_info._struct.member_count = 4;
#define __vector__ vector<T>
		this_type_info._struct.member_types[0] = TYPEINFO(T *) ? TYPEINFO(T *)->hash : 0;
		this_type_info._struct.member_names[0] = "memory"_;
		this_type_info._struct.member_offsets[0] = offsetof(__vector__, memory);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[1] = "size"_;
		this_type_info._struct.member_offsets[1] = offsetof(__vector__, size);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[2] = "capacity"_;
		this_type_info._struct.member_offsets[2] = offsetof(__vector__, capacity);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(allocator *) ? TYPEINFO(allocator *)->hash : 0;
		this_type_info._struct.member_names[3] = "alloc"_;
		this_type_info._struct.member_offsets[3] = offsetof(__vector__, alloc);
		this_type_info._struct.member_circular[3] = 0;
#undef __vector__
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

#pragma pop_macro("T")

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(stack<T>);
		this_type_info.name = "stack"_;
		this_type_info.hash = (type_id)typeid(stack<T>).hash_code();
		this_type_info._struct.member_count = 1;
#define __stack__ stack<T>
		this_type_info._struct.member_types[0] = TYPEINFO(vector<T>) ? TYPEINFO(vector<T>)->hash : 0;
		this_type_info._struct.member_names[0] = "contents"_;
		this_type_info._struct.member_offsets[0] = offsetof(__stack__, contents);
		this_type_info._struct.member_circular[0] = 0;
#undef __stack__
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

#pragma pop_macro("T")

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(ogl_manager);
		this_type_info.name = "ogl_manager"_;
		this_type_info.hash = (type_id)typeid(ogl_manager).hash_code();
		this_type_info._struct.member_count = 12;
		this_type_info._struct.member_types[0] = TYPEINFO(map<u16, draw_context>) ? TYPEINFO(map<u16, draw_context>)->hash : 0;
		this_type_info._struct.member_names[0] = "commands"_;
		this_type_info._struct.member_offsets[0] = offsetof(ogl_manager,commands);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(map<texture_id, texture>) ? TYPEINFO(map<texture_id, texture>)->hash : 0;
		this_type_info._struct.member_names[1] = "textures"_;
		this_type_info._struct.member_offsets[1] = offsetof(ogl_manager,textures);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(map<gpu_object_id, gpu_object>) ? TYPEINFO(map<gpu_object_id, gpu_object>)->hash : 0;
		this_type_info._struct.member_names[2] = "objects"_;
		this_type_info._struct.member_offsets[2] = offsetof(ogl_manager,objects);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(ogl_settings) ? TYPEINFO(ogl_settings)->hash : 0;
		this_type_info._struct.member_names[3] = "settings"_;
		this_type_info._struct.member_offsets[3] = offsetof(ogl_manager,settings);
		this_type_info._struct.member_circular[3] = 0;
		this_type_info._struct.member_types[4] = TYPEINFO(ogl_settings) ? TYPEINFO(ogl_settings)->hash : 0;
		this_type_info._struct.member_names[4] = "prev_settings"_;
		this_type_info._struct.member_offsets[4] = offsetof(ogl_manager,prev_settings);
		this_type_info._struct.member_circular[4] = 0;
		this_type_info._struct.member_types[5] = TYPEINFO(stack<cmd_settings>) ? TYPEINFO(stack<cmd_settings>)->hash : 0;
		this_type_info._struct.member_names[5] = "command_settings"_;
		this_type_info._struct.member_offsets[5] = offsetof(ogl_manager,command_settings);
		this_type_info._struct.member_circular[5] = 0;
		this_type_info._struct.member_types[6] = TYPEINFO(shader_program) ? TYPEINFO(shader_program)->hash : 0;
		this_type_info._struct.member_names[6] = "dbg_shader"_;
		this_type_info._struct.member_offsets[6] = offsetof(ogl_manager,dbg_shader);
		this_type_info._struct.member_circular[6] = 0;
		this_type_info._struct.member_types[7] = TYPEINFO(ogl_info) ? TYPEINFO(ogl_info)->hash : 0;
		this_type_info._struct.member_names[7] = "info"_;
		this_type_info._struct.member_offsets[7] = offsetof(ogl_manager,info);
		this_type_info._struct.member_circular[7] = 0;
		this_type_info._struct.member_types[8] = TYPEINFO(gpu_object_id) ? TYPEINFO(gpu_object_id)->hash : 0;
		this_type_info._struct.member_names[8] = "next_gpu_id"_;
		this_type_info._struct.member_offsets[8] = offsetof(ogl_manager,next_gpu_id);
		this_type_info._struct.member_circular[8] = 0;
		this_type_info._struct.member_types[9] = TYPEINFO(texture_id) ? TYPEINFO(texture_id)->hash : 0;
		this_type_info._struct.member_names[9] = "next_texture_id"_;
		this_type_info._struct.member_offsets[9] = offsetof(ogl_manager,next_texture_id);
		this_type_info._struct.member_circular[9] = 0;
		this_type_info._struct.member_types[10] = TYPEINFO(platform_window *) ? TYPEINFO(platform_window *)->hash : 0;
		this_type_info._struct.member_names[10] = "win"_;
		this_type_info._struct.member_offsets[10] = offsetof(ogl_manager,win);
		this_type_info._struct.member_circular[10] = 0;
		this_type_info._struct.member_types[11] = TYPEINFO(allocator *) ? TYPEINFO(allocator *)->hash : 0;
		this_type_info._struct.member_names[11] = "alloc"_;
		this_type_info._struct.member_offsets[11] = offsetof(ogl_manager,alloc);
		this_type_info._struct.member_circular[11] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

#pragma push_macro("T")
#define T bool
#pragma push_macro("args")
#define args void*
	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(func_ptr<T,args>);
		this_type_info.name = "func_ptr"_;
		this_type_info.hash = (type_id)typeid(func_ptr<T,args>).hash_code();
		this_type_info._struct.member_count = 1;
#define __func_ptr__ func_ptr<T,args>
		this_type_info._struct.member_types[0] = TYPEINFO(_FPTR *) ? TYPEINFO(_FPTR *)->hash : 0;
		this_type_info._struct.member_names[0] = "data"_;
		this_type_info._struct.member_offsets[0] = offsetof(__func_ptr__, data);
		this_type_info._struct.member_circular[0] = 0;
#undef __func_ptr__
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

#pragma pop_macro("T")
#pragma pop_macro("args")

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(evt_handler);
		this_type_info.name = "evt_handler"_;
		this_type_info.hash = (type_id)typeid(evt_handler).hash_code();
		this_type_info._struct.member_count = 2;
		this_type_info._struct.member_types[0] = TYPEINFO(func_ptr<bool, void *, platform_event>) ? TYPEINFO(func_ptr<bool, void *, platform_event>)->hash : 0;
		this_type_info._struct.member_names[0] = "handle"_;
		this_type_info._struct.member_offsets[0] = offsetof(evt_handler,handle);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(void *) ? TYPEINFO(void *)->hash : 0;
		this_type_info._struct.member_names[1] = "param"_;
		this_type_info._struct.member_offsets[1] = offsetof(evt_handler,param);
		this_type_info._struct.member_circular[1] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

#pragma push_macro("T")
#define T platform_event
	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(locking_queue<T>);
		this_type_info.name = "locking_queue"_;
		this_type_info.hash = (type_id)typeid(locking_queue<T>).hash_code();
		this_type_info._struct.member_count = 2;
#define __locking_queue__ locking_queue<T>
		this_type_info._struct.member_types[0] = TYPEINFO(platform_mutex) ? TYPEINFO(platform_mutex)->hash : 0;
		this_type_info._struct.member_names[0] = "mut"_;
		this_type_info._struct.member_offsets[0] = offsetof(__locking_queue__, mut);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(platform_semaphore) ? TYPEINFO(platform_semaphore)->hash : 0;
		this_type_info._struct.member_names[1] = "sem"_;
		this_type_info._struct.member_offsets[1] = offsetof(__locking_queue__, sem);
		this_type_info._struct.member_circular[1] = 0;
#undef __locking_queue__
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

#pragma pop_macro("T")

#pragma push_macro("K")
#define K evt_handler_id
#pragma push_macro("V")
#define V evt_handler
#pragma push_macro("K")
#define K evt_handler_id
#pragma push_macro("V")
#define V evt_handler
	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(map_element<K,V>);
		this_type_info.name = "map_element"_;
		this_type_info.hash = (type_id)typeid(map_element<K,V>).hash_code();
		this_type_info._struct.member_count = 3;
#define __map_element__ map_element<K,V>
		this_type_info._struct.member_types[0] = TYPEINFO(K) ? TYPEINFO(K)->hash : 0;
		this_type_info._struct.member_names[0] = "key"_;
		this_type_info._struct.member_offsets[0] = offsetof(__map_element__, key);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(V) ? TYPEINFO(V)->hash : 0;
		this_type_info._struct.member_names[1] = "value"_;
		this_type_info._struct.member_offsets[1] = offsetof(__map_element__, value);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[2] = "occupied_and_bucket"_;
		this_type_info._struct.member_offsets[2] = offsetof(__map_element__, occupied_and_bucket);
		this_type_info._struct.member_circular[2] = 0;
#undef __map_element__
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

#pragma pop_macro("K")
#pragma pop_macro("V")

#pragma push_macro("T")
#define T map_element<K,V>
	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(vector<T>);
		this_type_info.name = "vector"_;
		this_type_info.hash = (type_id)typeid(vector<T>).hash_code();
		this_type_info._struct.member_count = 4;
#define __vector__ vector<T>
		this_type_info._struct.member_types[0] = TYPEINFO(T *) ? TYPEINFO(T *)->hash : 0;
		this_type_info._struct.member_names[0] = "memory"_;
		this_type_info._struct.member_offsets[0] = offsetof(__vector__, memory);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[1] = "size"_;
		this_type_info._struct.member_offsets[1] = offsetof(__vector__, size);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[2] = "capacity"_;
		this_type_info._struct.member_offsets[2] = offsetof(__vector__, capacity);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(allocator *) ? TYPEINFO(allocator *)->hash : 0;
		this_type_info._struct.member_names[3] = "alloc"_;
		this_type_info._struct.member_offsets[3] = offsetof(__vector__, alloc);
		this_type_info._struct.member_circular[3] = 0;
#undef __vector__
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

#pragma pop_macro("T")

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(map<K,V>);
		this_type_info.name = "map"_;
		this_type_info.hash = (type_id)typeid(map<K,V>).hash_code();
		this_type_info._struct.member_count = 4;
#define __map__ map<K,V>
		this_type_info._struct.member_types[0] = TYPEINFO(vector<map_element<K, V> >) ? TYPEINFO(vector<map_element<K, V> >)->hash : 0;
		this_type_info._struct.member_names[0] = "contents"_;
		this_type_info._struct.member_offsets[0] = offsetof(__map__, contents);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[1] = "size"_;
		this_type_info._struct.member_offsets[1] = offsetof(__map__, size);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[2] = "max_probe"_;
		this_type_info._struct.member_offsets[2] = offsetof(__map__, max_probe);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(allocator *) ? TYPEINFO(allocator *)->hash : 0;
		this_type_info._struct.member_names[3] = "alloc"_;
		this_type_info._struct.member_offsets[3] = offsetof(__map__, alloc);
		this_type_info._struct.member_circular[3] = 0;
#undef __map__
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

#pragma pop_macro("K")
#pragma pop_macro("V")

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(evt_manager);
		this_type_info.name = "evt_manager"_;
		this_type_info.hash = (type_id)typeid(evt_manager).hash_code();
		this_type_info._struct.member_count = 3;
		this_type_info._struct.member_types[0] = TYPEINFO(locking_queue<platform_event>) ? TYPEINFO(locking_queue<platform_event>)->hash : 0;
		this_type_info._struct.member_names[0] = "event_queue"_;
		this_type_info._struct.member_offsets[0] = offsetof(evt_manager,event_queue);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(map<evt_handler_id, evt_handler>) ? TYPEINFO(map<evt_handler_id, evt_handler>)->hash : 0;
		this_type_info._struct.member_names[1] = "handlers"_;
		this_type_info._struct.member_offsets[1] = offsetof(evt_manager,handlers);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(evt_handler_id) ? TYPEINFO(evt_handler_id)->hash : 0;
		this_type_info._struct.member_names[2] = "next_id"_;
		this_type_info._struct.member_offsets[2] = offsetof(evt_manager,next_id);
		this_type_info._struct.member_circular[2] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(evt_id_transition);
		this_type_info.name = "evt_id_transition"_;
		this_type_info.hash = (type_id)typeid(evt_id_transition).hash_code();
		this_type_info._struct.member_count = 2;
		this_type_info._struct.member_types[0] = TYPEINFO(evt_state_id) ? TYPEINFO(evt_state_id)->hash : 0;
		this_type_info._struct.member_names[0] = "from"_;
		this_type_info._struct.member_offsets[0] = offsetof(evt_id_transition,from);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(evt_state_id) ? TYPEINFO(evt_state_id)->hash : 0;
		this_type_info._struct.member_names[1] = "to"_;
		this_type_info._struct.member_offsets[1] = offsetof(evt_id_transition,to);
		this_type_info._struct.member_circular[1] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(evt_transition_callback);
		this_type_info.name = "evt_transition_callback"_;
		this_type_info.hash = (type_id)typeid(evt_transition_callback).hash_code();
		this_type_info._struct.member_count = 2;
		this_type_info._struct.member_types[0] = TYPEINFO(func_ptr<void, void *>) ? TYPEINFO(func_ptr<void, void *>)->hash : 0;
		this_type_info._struct.member_names[0] = "func"_;
		this_type_info._struct.member_offsets[0] = offsetof(evt_transition_callback,func);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(void *) ? TYPEINFO(void *)->hash : 0;
		this_type_info._struct.member_names[1] = "param"_;
		this_type_info._struct.member_offsets[1] = offsetof(evt_transition_callback,param);
		this_type_info._struct.member_circular[1] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

#pragma push_macro("K")
#define K evt_state_id
#pragma push_macro("V")
#define V evt_handler
#pragma push_macro("K")
#define K evt_state_id
#pragma push_macro("V")
#define V evt_handler
	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(map_element<K,V>);
		this_type_info.name = "map_element"_;
		this_type_info.hash = (type_id)typeid(map_element<K,V>).hash_code();
		this_type_info._struct.member_count = 3;
#define __map_element__ map_element<K,V>
		this_type_info._struct.member_types[0] = TYPEINFO(K) ? TYPEINFO(K)->hash : 0;
		this_type_info._struct.member_names[0] = "key"_;
		this_type_info._struct.member_offsets[0] = offsetof(__map_element__, key);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(V) ? TYPEINFO(V)->hash : 0;
		this_type_info._struct.member_names[1] = "value"_;
		this_type_info._struct.member_offsets[1] = offsetof(__map_element__, value);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[2] = "occupied_and_bucket"_;
		this_type_info._struct.member_offsets[2] = offsetof(__map_element__, occupied_and_bucket);
		this_type_info._struct.member_circular[2] = 0;
#undef __map_element__
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

#pragma pop_macro("K")
#pragma pop_macro("V")

#pragma push_macro("T")
#define T map_element<K,V>
	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(vector<T>);
		this_type_info.name = "vector"_;
		this_type_info.hash = (type_id)typeid(vector<T>).hash_code();
		this_type_info._struct.member_count = 4;
#define __vector__ vector<T>
		this_type_info._struct.member_types[0] = TYPEINFO(T *) ? TYPEINFO(T *)->hash : 0;
		this_type_info._struct.member_names[0] = "memory"_;
		this_type_info._struct.member_offsets[0] = offsetof(__vector__, memory);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[1] = "size"_;
		this_type_info._struct.member_offsets[1] = offsetof(__vector__, size);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[2] = "capacity"_;
		this_type_info._struct.member_offsets[2] = offsetof(__vector__, capacity);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(allocator *) ? TYPEINFO(allocator *)->hash : 0;
		this_type_info._struct.member_names[3] = "alloc"_;
		this_type_info._struct.member_offsets[3] = offsetof(__vector__, alloc);
		this_type_info._struct.member_circular[3] = 0;
#undef __vector__
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

#pragma pop_macro("T")

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(map<K,V>);
		this_type_info.name = "map"_;
		this_type_info.hash = (type_id)typeid(map<K,V>).hash_code();
		this_type_info._struct.member_count = 4;
#define __map__ map<K,V>
		this_type_info._struct.member_types[0] = TYPEINFO(vector<map_element<K, V> >) ? TYPEINFO(vector<map_element<K, V> >)->hash : 0;
		this_type_info._struct.member_names[0] = "contents"_;
		this_type_info._struct.member_offsets[0] = offsetof(__map__, contents);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[1] = "size"_;
		this_type_info._struct.member_offsets[1] = offsetof(__map__, size);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[2] = "max_probe"_;
		this_type_info._struct.member_offsets[2] = offsetof(__map__, max_probe);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(allocator *) ? TYPEINFO(allocator *)->hash : 0;
		this_type_info._struct.member_names[3] = "alloc"_;
		this_type_info._struct.member_offsets[3] = offsetof(__map__, alloc);
		this_type_info._struct.member_circular[3] = 0;
#undef __map__
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

#pragma pop_macro("K")
#pragma pop_macro("V")

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(evt_state_machine);
		this_type_info.name = "evt_state_machine"_;
		this_type_info.hash = (type_id)typeid(evt_state_machine).hash_code();
		this_type_info._struct.member_count = 6;
		this_type_info._struct.member_types[0] = TYPEINFO(evt_state_id) ? TYPEINFO(evt_state_id)->hash : 0;
		this_type_info._struct.member_names[0] = "next_id"_;
		this_type_info._struct.member_offsets[0] = offsetof(evt_state_machine,next_id);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(map<evt_state_id, evt_handler>) ? TYPEINFO(map<evt_state_id, evt_handler>)->hash : 0;
		this_type_info._struct.member_names[1] = "states"_;
		this_type_info._struct.member_offsets[1] = offsetof(evt_state_machine,states);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(int) ? TYPEINFO(int)->hash : 0;
		this_type_info._struct.member_names[2] = "transitions"_;
		this_type_info._struct.member_offsets[2] = offsetof(evt_state_machine,transitions);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(evt_state_id) ? TYPEINFO(evt_state_id)->hash : 0;
		this_type_info._struct.member_names[3] = "active_state"_;
		this_type_info._struct.member_offsets[3] = offsetof(evt_state_machine,active_state);
		this_type_info._struct.member_circular[3] = 0;
		this_type_info._struct.member_types[4] = TYPEINFO(evt_handler_id) ? TYPEINFO(evt_handler_id)->hash : 0;
		this_type_info._struct.member_names[4] = "active_id"_;
		this_type_info._struct.member_offsets[4] = offsetof(evt_state_machine,active_id);
		this_type_info._struct.member_circular[4] = 0;
		this_type_info._struct.member_types[5] = TYPEINFO(evt_manager *) ? TYPEINFO(evt_manager *)->hash : 0;
		this_type_info._struct.member_names[5] = "mgr"_;
		this_type_info._struct.member_offsets[5] = offsetof(evt_state_machine,mgr);
		this_type_info._struct.member_circular[5] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(imgui_gl_info);
		this_type_info.name = "imgui_gl_info"_;
		this_type_info.hash = (type_id)typeid(imgui_gl_info).hash_code();
		this_type_info._struct.member_count = 12;
		this_type_info._struct.member_types[0] = TYPEINFO(GLuint) ? TYPEINFO(GLuint)->hash : 0;
		this_type_info._struct.member_names[0] = "font_texture"_;
		this_type_info._struct.member_offsets[0] = offsetof(imgui_gl_info,font_texture);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(GLuint) ? TYPEINFO(GLuint)->hash : 0;
		this_type_info._struct.member_names[1] = "program"_;
		this_type_info._struct.member_offsets[1] = offsetof(imgui_gl_info,program);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(GLuint) ? TYPEINFO(GLuint)->hash : 0;
		this_type_info._struct.member_names[2] = "vertex"_;
		this_type_info._struct.member_offsets[2] = offsetof(imgui_gl_info,vertex);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(GLuint) ? TYPEINFO(GLuint)->hash : 0;
		this_type_info._struct.member_names[3] = "fragment"_;
		this_type_info._struct.member_offsets[3] = offsetof(imgui_gl_info,fragment);
		this_type_info._struct.member_circular[3] = 0;
		this_type_info._struct.member_types[4] = TYPEINFO(GLuint) ? TYPEINFO(GLuint)->hash : 0;
		this_type_info._struct.member_names[4] = "tex_loc"_;
		this_type_info._struct.member_offsets[4] = offsetof(imgui_gl_info,tex_loc);
		this_type_info._struct.member_circular[4] = 0;
		this_type_info._struct.member_types[5] = TYPEINFO(GLuint) ? TYPEINFO(GLuint)->hash : 0;
		this_type_info._struct.member_names[5] = "mat_loc"_;
		this_type_info._struct.member_offsets[5] = offsetof(imgui_gl_info,mat_loc);
		this_type_info._struct.member_circular[5] = 0;
		this_type_info._struct.member_types[6] = TYPEINFO(GLuint) ? TYPEINFO(GLuint)->hash : 0;
		this_type_info._struct.member_names[6] = "pos_loc"_;
		this_type_info._struct.member_offsets[6] = offsetof(imgui_gl_info,pos_loc);
		this_type_info._struct.member_circular[6] = 0;
		this_type_info._struct.member_types[7] = TYPEINFO(GLuint) ? TYPEINFO(GLuint)->hash : 0;
		this_type_info._struct.member_names[7] = "uv_loc"_;
		this_type_info._struct.member_offsets[7] = offsetof(imgui_gl_info,uv_loc);
		this_type_info._struct.member_circular[7] = 0;
		this_type_info._struct.member_types[8] = TYPEINFO(GLuint) ? TYPEINFO(GLuint)->hash : 0;
		this_type_info._struct.member_names[8] = "color_loc"_;
		this_type_info._struct.member_offsets[8] = offsetof(imgui_gl_info,color_loc);
		this_type_info._struct.member_circular[8] = 0;
		this_type_info._struct.member_types[9] = TYPEINFO(GLuint) ? TYPEINFO(GLuint)->hash : 0;
		this_type_info._struct.member_names[9] = "vao"_;
		this_type_info._struct.member_offsets[9] = offsetof(imgui_gl_info,vao);
		this_type_info._struct.member_circular[9] = 0;
		this_type_info._struct.member_types[10] = TYPEINFO(GLuint) ? TYPEINFO(GLuint)->hash : 0;
		this_type_info._struct.member_names[10] = "vbo"_;
		this_type_info._struct.member_offsets[10] = offsetof(imgui_gl_info,vbo);
		this_type_info._struct.member_circular[10] = 0;
		this_type_info._struct.member_types[11] = TYPEINFO(GLuint) ? TYPEINFO(GLuint)->hash : 0;
		this_type_info._struct.member_names[11] = "ebo"_;
		this_type_info._struct.member_offsets[11] = offsetof(imgui_gl_info,ebo);
		this_type_info._struct.member_circular[11] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_array;
		this_type_info.size = sizeof(bool [3]);
		this_type_info.name = STRING(bool [3]);
		this_type_info.hash = (type_id)typeid(bool [3]).hash_code();
		this_type_info._array.of = TYPEINFO(bool) ? TYPEINFO(bool)->hash : 0;
		this_type_info._array.length = 3;
		type_table.insert_if_unique(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(imgui_manager);
		this_type_info.name = "imgui_manager"_;
		this_type_info.hash = (type_id)typeid(imgui_manager).hash_code();
		this_type_info._struct.member_count = 11;
		this_type_info._struct.member_types[0] = TYPEINFO(int *) ? TYPEINFO(int *)->hash : 0;
		this_type_info._struct.member_names[0] = "context"_;
		this_type_info._struct.member_offsets[0] = offsetof(imgui_manager,context);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(allocator *) ? TYPEINFO(allocator *)->hash : 0;
		this_type_info._struct.member_names[1] = "alloc"_;
		this_type_info._struct.member_offsets[1] = offsetof(imgui_manager,alloc);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(imgui_gl_info) ? TYPEINFO(imgui_gl_info)->hash : 0;
		this_type_info._struct.member_names[2] = "gl_info"_;
		this_type_info._struct.member_offsets[2] = offsetof(imgui_manager,gl_info);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(u64) ? TYPEINFO(u64)->hash : 0;
		this_type_info._struct.member_names[3] = "last_perf"_;
		this_type_info._struct.member_offsets[3] = offsetof(imgui_manager,last_perf);
		this_type_info._struct.member_circular[3] = 0;
		this_type_info._struct.member_types[4] = TYPEINFO(u64) ? TYPEINFO(u64)->hash : 0;
		this_type_info._struct.member_names[4] = "perf_freq"_;
		this_type_info._struct.member_offsets[4] = offsetof(imgui_manager,perf_freq);
		this_type_info._struct.member_circular[4] = 0;
		this_type_info._struct.member_types[5] = TYPEINFO(bool [3]) ? TYPEINFO(bool [3])->hash : 0;
		this_type_info._struct.member_names[5] = "mouse"_;
		this_type_info._struct.member_offsets[5] = offsetof(imgui_manager,mouse);
		this_type_info._struct.member_circular[5] = 0;
		this_type_info._struct.member_types[6] = TYPEINFO(platform_cursor) ? TYPEINFO(platform_cursor)->hash : 0;
		this_type_info._struct.member_names[6] = "cursor_values"_;
		this_type_info._struct.member_offsets[6] = offsetof(imgui_manager,cursor_values);
		this_type_info._struct.member_circular[6] = 0;
		this_type_info._struct.member_types[7] = TYPEINFO(platform_cursor) ? TYPEINFO(platform_cursor)->hash : 0;
		this_type_info._struct.member_names[7] = "current_cursor"_;
		this_type_info._struct.member_offsets[7] = offsetof(imgui_manager,current_cursor);
		this_type_info._struct.member_circular[7] = 0;
		this_type_info._struct.member_types[8] = TYPEINFO(string) ? TYPEINFO(string)->hash : 0;
		this_type_info._struct.member_names[8] = "font_asset_name"_;
		this_type_info._struct.member_offsets[8] = offsetof(imgui_manager,font_asset_name);
		this_type_info._struct.member_circular[8] = 0;
		this_type_info._struct.member_types[9] = TYPEINFO(asset_store *) ? TYPEINFO(asset_store *)->hash : 0;
		this_type_info._struct.member_names[9] = "last_store"_;
		this_type_info._struct.member_offsets[9] = offsetof(imgui_manager,last_store);
		this_type_info._struct.member_circular[9] = 0;
		this_type_info._struct.member_types[10] = TYPEINFO(f32) ? TYPEINFO(f32)->hash : 0;
		this_type_info._struct.member_names[10] = "font_size"_;
		this_type_info._struct.member_offsets[10] = offsetof(imgui_manager,font_size);
		this_type_info._struct.member_circular[10] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(dbg_msg_begin_frame);
		this_type_info.name = "dbg_msg_begin_frame"_;
		this_type_info.hash = (type_id)typeid(dbg_msg_begin_frame).hash_code();
		this_type_info._struct.member_count = 1;
		this_type_info._struct.member_types[0] = TYPEINFO(u64) ? TYPEINFO(u64)->hash : 0;
		this_type_info._struct.member_names[0] = "perf"_;
		this_type_info._struct.member_offsets[0] = offsetof(dbg_msg_begin_frame,perf);
		this_type_info._struct.member_circular[0] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(dbg_msg_end_frame);
		this_type_info.name = "dbg_msg_end_frame"_;
		this_type_info.hash = (type_id)typeid(dbg_msg_end_frame).hash_code();
		this_type_info._struct.member_count = 1;
		this_type_info._struct.member_types[0] = TYPEINFO(u64) ? TYPEINFO(u64)->hash : 0;
		this_type_info._struct.member_names[0] = "perf"_;
		this_type_info._struct.member_offsets[0] = offsetof(dbg_msg_end_frame,perf);
		this_type_info._struct.member_circular[0] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(dbg_msg_allocate);
		this_type_info.name = "dbg_msg_allocate"_;
		this_type_info.hash = (type_id)typeid(dbg_msg_allocate).hash_code();
		this_type_info._struct.member_count = 3;
		this_type_info._struct.member_types[0] = TYPEINFO(void *) ? TYPEINFO(void *)->hash : 0;
		this_type_info._struct.member_names[0] = "to"_;
		this_type_info._struct.member_offsets[0] = offsetof(dbg_msg_allocate,to);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(u64) ? TYPEINFO(u64)->hash : 0;
		this_type_info._struct.member_names[1] = "bytes"_;
		this_type_info._struct.member_offsets[1] = offsetof(dbg_msg_allocate,bytes);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(allocator) ? TYPEINFO(allocator)->hash : 0;
		this_type_info._struct.member_names[2] = "alloc"_;
		this_type_info._struct.member_offsets[2] = offsetof(dbg_msg_allocate,alloc);
		this_type_info._struct.member_circular[2] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(dbg_msg_reallocate);
		this_type_info.name = "dbg_msg_reallocate"_;
		this_type_info.hash = (type_id)typeid(dbg_msg_reallocate).hash_code();
		this_type_info._struct.member_count = 5;
		this_type_info._struct.member_types[0] = TYPEINFO(void *) ? TYPEINFO(void *)->hash : 0;
		this_type_info._struct.member_names[0] = "to"_;
		this_type_info._struct.member_offsets[0] = offsetof(dbg_msg_reallocate,to);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(void *) ? TYPEINFO(void *)->hash : 0;
		this_type_info._struct.member_names[1] = "from"_;
		this_type_info._struct.member_offsets[1] = offsetof(dbg_msg_reallocate,from);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(u64) ? TYPEINFO(u64)->hash : 0;
		this_type_info._struct.member_names[2] = "to_bytes"_;
		this_type_info._struct.member_offsets[2] = offsetof(dbg_msg_reallocate,to_bytes);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(u64) ? TYPEINFO(u64)->hash : 0;
		this_type_info._struct.member_names[3] = "from_bytes"_;
		this_type_info._struct.member_offsets[3] = offsetof(dbg_msg_reallocate,from_bytes);
		this_type_info._struct.member_circular[3] = 0;
		this_type_info._struct.member_types[4] = TYPEINFO(allocator) ? TYPEINFO(allocator)->hash : 0;
		this_type_info._struct.member_names[4] = "alloc"_;
		this_type_info._struct.member_offsets[4] = offsetof(dbg_msg_reallocate,alloc);
		this_type_info._struct.member_circular[4] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(dbg_msg_free);
		this_type_info.name = "dbg_msg_free"_;
		this_type_info.hash = (type_id)typeid(dbg_msg_free).hash_code();
		this_type_info._struct.member_count = 3;
		this_type_info._struct.member_types[0] = TYPEINFO(void *) ? TYPEINFO(void *)->hash : 0;
		this_type_info._struct.member_names[0] = "from"_;
		this_type_info._struct.member_offsets[0] = offsetof(dbg_msg_free,from);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(u64) ? TYPEINFO(u64)->hash : 0;
		this_type_info._struct.member_names[1] = "bytes"_;
		this_type_info._struct.member_offsets[1] = offsetof(dbg_msg_free,bytes);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(allocator) ? TYPEINFO(allocator)->hash : 0;
		this_type_info._struct.member_names[2] = "alloc"_;
		this_type_info._struct.member_offsets[2] = offsetof(dbg_msg_free,alloc);
		this_type_info._struct.member_circular[2] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(dbg_msg_enter_func);
		this_type_info.name = "dbg_msg_enter_func"_;
		this_type_info.hash = (type_id)typeid(dbg_msg_enter_func).hash_code();
		this_type_info._struct.member_count = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(dbg_msg_exit_func);
		this_type_info.name = "dbg_msg_exit_func"_;
		this_type_info.hash = (type_id)typeid(dbg_msg_exit_func).hash_code();
		this_type_info._struct.member_count = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(dbg_msg_mut_lock);
		this_type_info.name = "dbg_msg_mut_lock"_;
		this_type_info.hash = (type_id)typeid(dbg_msg_mut_lock).hash_code();
		this_type_info._struct.member_count = 1;
		this_type_info._struct.member_types[0] = TYPEINFO(platform_mutex *) ? TYPEINFO(platform_mutex *)->hash : 0;
		this_type_info._struct.member_names[0] = "mut"_;
		this_type_info._struct.member_offsets[0] = offsetof(dbg_msg_mut_lock,mut);
		this_type_info._struct.member_circular[0] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(dbg_msg_mut_unlock);
		this_type_info.name = "dbg_msg_mut_unlock"_;
		this_type_info.hash = (type_id)typeid(dbg_msg_mut_unlock).hash_code();
		this_type_info._struct.member_count = 1;
		this_type_info._struct.member_types[0] = TYPEINFO(platform_mutex *) ? TYPEINFO(platform_mutex *)->hash : 0;
		this_type_info._struct.member_names[0] = "mut"_;
		this_type_info._struct.member_offsets[0] = offsetof(dbg_msg_mut_unlock,mut);
		this_type_info._struct.member_circular[0] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(dbg_msg_sem_wait);
		this_type_info.name = "dbg_msg_sem_wait"_;
		this_type_info.hash = (type_id)typeid(dbg_msg_sem_wait).hash_code();
		this_type_info._struct.member_count = 1;
		this_type_info._struct.member_types[0] = TYPEINFO(platform_semaphore *) ? TYPEINFO(platform_semaphore *)->hash : 0;
		this_type_info._struct.member_names[0] = "sem"_;
		this_type_info._struct.member_offsets[0] = offsetof(dbg_msg_sem_wait,sem);
		this_type_info._struct.member_circular[0] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(dbg_msg);
		this_type_info.name = "dbg_msg"_;
		this_type_info.hash = (type_id)typeid(dbg_msg).hash_code();
		this_type_info._struct.member_count = 13;
		this_type_info._struct.member_types[0] = TYPEINFO(dbg_msg_type) ? TYPEINFO(dbg_msg_type)->hash : 0;
		this_type_info._struct.member_names[0] = "type"_;
		this_type_info._struct.member_offsets[0] = offsetof(dbg_msg,type);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(clock) ? TYPEINFO(clock)->hash : 0;
		this_type_info._struct.member_names[1] = "time"_;
		this_type_info._struct.member_offsets[1] = offsetof(dbg_msg,time);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(code_context) ? TYPEINFO(code_context)->hash : 0;
		this_type_info._struct.member_names[2] = "context"_;
		this_type_info._struct.member_offsets[2] = offsetof(dbg_msg,context);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(dbg_msg_begin_frame) ? TYPEINFO(dbg_msg_begin_frame)->hash : 0;
		this_type_info._struct.member_names[3] = "begin_frame"_;
		this_type_info._struct.member_offsets[3] = offsetof(dbg_msg,begin_frame);
		this_type_info._struct.member_circular[3] = 0;
		this_type_info._struct.member_types[4] = TYPEINFO(dbg_msg_end_frame) ? TYPEINFO(dbg_msg_end_frame)->hash : 0;
		this_type_info._struct.member_names[4] = "end_frame"_;
		this_type_info._struct.member_offsets[4] = offsetof(dbg_msg,end_frame);
		this_type_info._struct.member_circular[4] = 0;
		this_type_info._struct.member_types[5] = TYPEINFO(dbg_msg_allocate) ? TYPEINFO(dbg_msg_allocate)->hash : 0;
		this_type_info._struct.member_names[5] = "allocate"_;
		this_type_info._struct.member_offsets[5] = offsetof(dbg_msg,allocate);
		this_type_info._struct.member_circular[5] = 0;
		this_type_info._struct.member_types[6] = TYPEINFO(dbg_msg_reallocate) ? TYPEINFO(dbg_msg_reallocate)->hash : 0;
		this_type_info._struct.member_names[6] = "reallocate"_;
		this_type_info._struct.member_offsets[6] = offsetof(dbg_msg,reallocate);
		this_type_info._struct.member_circular[6] = 0;
		this_type_info._struct.member_types[7] = TYPEINFO(dbg_msg_free) ? TYPEINFO(dbg_msg_free)->hash : 0;
		this_type_info._struct.member_names[7] = "free"_;
		this_type_info._struct.member_offsets[7] = offsetof(dbg_msg,free);
		this_type_info._struct.member_circular[7] = 0;
		this_type_info._struct.member_types[8] = TYPEINFO(dbg_msg_enter_func) ? TYPEINFO(dbg_msg_enter_func)->hash : 0;
		this_type_info._struct.member_names[8] = "enter_func"_;
		this_type_info._struct.member_offsets[8] = offsetof(dbg_msg,enter_func);
		this_type_info._struct.member_circular[8] = 0;
		this_type_info._struct.member_types[9] = TYPEINFO(dbg_msg_exit_func) ? TYPEINFO(dbg_msg_exit_func)->hash : 0;
		this_type_info._struct.member_names[9] = "exit_func"_;
		this_type_info._struct.member_offsets[9] = offsetof(dbg_msg,exit_func);
		this_type_info._struct.member_circular[9] = 0;
		this_type_info._struct.member_types[10] = TYPEINFO(dbg_msg_mut_lock) ? TYPEINFO(dbg_msg_mut_lock)->hash : 0;
		this_type_info._struct.member_names[10] = "mut_lock"_;
		this_type_info._struct.member_offsets[10] = offsetof(dbg_msg,mut_lock);
		this_type_info._struct.member_circular[10] = 0;
		this_type_info._struct.member_types[11] = TYPEINFO(dbg_msg_mut_unlock) ? TYPEINFO(dbg_msg_mut_unlock)->hash : 0;
		this_type_info._struct.member_names[11] = "mut_unlock"_;
		this_type_info._struct.member_offsets[11] = offsetof(dbg_msg,mut_unlock);
		this_type_info._struct.member_circular[11] = 0;
		this_type_info._struct.member_types[12] = TYPEINFO(dbg_msg_sem_wait) ? TYPEINFO(dbg_msg_sem_wait)->hash : 0;
		this_type_info._struct.member_names[12] = "sem_wait"_;
		this_type_info._struct.member_offsets[12] = offsetof(dbg_msg,sem_wait);
		this_type_info._struct.member_circular[12] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

#pragma push_macro("T")
#define T profile_node*
	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(vector<T>);
		this_type_info.name = "vector"_;
		this_type_info.hash = (type_id)typeid(vector<T>).hash_code();
		this_type_info._struct.member_count = 4;
#define __vector__ vector<T>
		this_type_info._struct.member_types[0] = TYPEINFO(T *) ? TYPEINFO(T *)->hash : 0;
		this_type_info._struct.member_names[0] = "memory"_;
		this_type_info._struct.member_offsets[0] = offsetof(__vector__, memory);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[1] = "size"_;
		this_type_info._struct.member_offsets[1] = offsetof(__vector__, size);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[2] = "capacity"_;
		this_type_info._struct.member_offsets[2] = offsetof(__vector__, capacity);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(allocator *) ? TYPEINFO(allocator *)->hash : 0;
		this_type_info._struct.member_names[3] = "alloc"_;
		this_type_info._struct.member_offsets[3] = offsetof(__vector__, alloc);
		this_type_info._struct.member_circular[3] = 0;
#undef __vector__
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

#pragma pop_macro("T")

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(profile_node);
		this_type_info.name = "profile_node"_;
		this_type_info.hash = (type_id)typeid(profile_node).hash_code();
		this_type_info._struct.member_count = 7;
		this_type_info._struct.member_types[0] = TYPEINFO(code_context) ? TYPEINFO(code_context)->hash : 0;
		this_type_info._struct.member_names[0] = "context"_;
		this_type_info._struct.member_offsets[0] = offsetof(profile_node,context);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(clock) ? TYPEINFO(clock)->hash : 0;
		this_type_info._struct.member_names[1] = "self"_;
		this_type_info._struct.member_offsets[1] = offsetof(profile_node,self);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(clock) ? TYPEINFO(clock)->hash : 0;
		this_type_info._struct.member_names[2] = "heir"_;
		this_type_info._struct.member_offsets[2] = offsetof(profile_node,heir);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(clock) ? TYPEINFO(clock)->hash : 0;
		this_type_info._struct.member_names[3] = "begin"_;
		this_type_info._struct.member_offsets[3] = offsetof(profile_node,begin);
		this_type_info._struct.member_circular[3] = 0;
		this_type_info._struct.member_types[4] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[4] = "calls"_;
		this_type_info._struct.member_offsets[4] = offsetof(profile_node,calls);
		this_type_info._struct.member_circular[4] = 0;
		this_type_info._struct.member_types[5] = TYPEINFO(vector<profile_node *>) ? TYPEINFO(vector<profile_node *>)->hash : 0;
		this_type_info._struct.member_names[5] = "children"_;
		this_type_info._struct.member_offsets[5] = offsetof(profile_node,children);
		this_type_info._struct.member_circular[5] = 0;
		this_type_info._struct.member_types[6] = TYPEINFO(profile_node *) ? TYPEINFO(profile_node *)->hash : 0;
		this_type_info._struct.member_names[6] = "parent"_;
		this_type_info._struct.member_offsets[6] = offsetof(profile_node,parent);
		this_type_info._struct.member_circular[6] = 1;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

#pragma push_macro("T")
#define T dbg_msg
	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(vector<T>);
		this_type_info.name = "vector"_;
		this_type_info.hash = (type_id)typeid(vector<T>).hash_code();
		this_type_info._struct.member_count = 4;
#define __vector__ vector<T>
		this_type_info._struct.member_types[0] = TYPEINFO(T *) ? TYPEINFO(T *)->hash : 0;
		this_type_info._struct.member_names[0] = "memory"_;
		this_type_info._struct.member_offsets[0] = offsetof(__vector__, memory);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[1] = "size"_;
		this_type_info._struct.member_offsets[1] = offsetof(__vector__, size);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[2] = "capacity"_;
		this_type_info._struct.member_offsets[2] = offsetof(__vector__, capacity);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(allocator *) ? TYPEINFO(allocator *)->hash : 0;
		this_type_info._struct.member_names[3] = "alloc"_;
		this_type_info._struct.member_offsets[3] = offsetof(__vector__, alloc);
		this_type_info._struct.member_circular[3] = 0;
#undef __vector__
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

#pragma pop_macro("T")

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(alloc_frame_profile);
		this_type_info.name = "alloc_frame_profile"_;
		this_type_info.hash = (type_id)typeid(alloc_frame_profile).hash_code();
		this_type_info._struct.member_count = 1;
		this_type_info._struct.member_types[0] = TYPEINFO(vector<dbg_msg>) ? TYPEINFO(vector<dbg_msg>)->hash : 0;
		this_type_info._struct.member_names[0] = "allocs"_;
		this_type_info._struct.member_offsets[0] = offsetof(alloc_frame_profile,allocs);
		this_type_info._struct.member_circular[0] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

#pragma push_macro("K")
#define K allocator
#pragma push_macro("V")
#define V alloc_frame_profile
#pragma push_macro("K")
#define K allocator
#pragma push_macro("V")
#define V alloc_frame_profile
	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(map_element<K,V>);
		this_type_info.name = "map_element"_;
		this_type_info.hash = (type_id)typeid(map_element<K,V>).hash_code();
		this_type_info._struct.member_count = 3;
#define __map_element__ map_element<K,V>
		this_type_info._struct.member_types[0] = TYPEINFO(K) ? TYPEINFO(K)->hash : 0;
		this_type_info._struct.member_names[0] = "key"_;
		this_type_info._struct.member_offsets[0] = offsetof(__map_element__, key);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(V) ? TYPEINFO(V)->hash : 0;
		this_type_info._struct.member_names[1] = "value"_;
		this_type_info._struct.member_offsets[1] = offsetof(__map_element__, value);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[2] = "occupied_and_bucket"_;
		this_type_info._struct.member_offsets[2] = offsetof(__map_element__, occupied_and_bucket);
		this_type_info._struct.member_circular[2] = 0;
#undef __map_element__
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

#pragma pop_macro("K")
#pragma pop_macro("V")

#pragma push_macro("T")
#define T map_element<K,V>
	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(vector<T>);
		this_type_info.name = "vector"_;
		this_type_info.hash = (type_id)typeid(vector<T>).hash_code();
		this_type_info._struct.member_count = 4;
#define __vector__ vector<T>
		this_type_info._struct.member_types[0] = TYPEINFO(T *) ? TYPEINFO(T *)->hash : 0;
		this_type_info._struct.member_names[0] = "memory"_;
		this_type_info._struct.member_offsets[0] = offsetof(__vector__, memory);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[1] = "size"_;
		this_type_info._struct.member_offsets[1] = offsetof(__vector__, size);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[2] = "capacity"_;
		this_type_info._struct.member_offsets[2] = offsetof(__vector__, capacity);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(allocator *) ? TYPEINFO(allocator *)->hash : 0;
		this_type_info._struct.member_names[3] = "alloc"_;
		this_type_info._struct.member_offsets[3] = offsetof(__vector__, alloc);
		this_type_info._struct.member_circular[3] = 0;
#undef __vector__
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

#pragma pop_macro("T")

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(map<K,V>);
		this_type_info.name = "map"_;
		this_type_info.hash = (type_id)typeid(map<K,V>).hash_code();
		this_type_info._struct.member_count = 4;
#define __map__ map<K,V>
		this_type_info._struct.member_types[0] = TYPEINFO(vector<map_element<K, V> >) ? TYPEINFO(vector<map_element<K, V> >)->hash : 0;
		this_type_info._struct.member_names[0] = "contents"_;
		this_type_info._struct.member_offsets[0] = offsetof(__map__, contents);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[1] = "size"_;
		this_type_info._struct.member_offsets[1] = offsetof(__map__, size);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[2] = "max_probe"_;
		this_type_info._struct.member_offsets[2] = offsetof(__map__, max_probe);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(allocator *) ? TYPEINFO(allocator *)->hash : 0;
		this_type_info._struct.member_names[3] = "alloc"_;
		this_type_info._struct.member_offsets[3] = offsetof(__map__, alloc);
		this_type_info._struct.member_circular[3] = 0;
#undef __map__
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

#pragma pop_macro("K")
#pragma pop_macro("V")

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(frame_profile);
		this_type_info.name = "frame_profile"_;
		this_type_info.hash = (type_id)typeid(frame_profile).hash_code();
		this_type_info._struct.member_count = 9;
		this_type_info._struct.member_types[0] = TYPEINFO(clock) ? TYPEINFO(clock)->hash : 0;
		this_type_info._struct.member_names[0] = "clock_start"_;
		this_type_info._struct.member_offsets[0] = offsetof(frame_profile,clock_start);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(clock) ? TYPEINFO(clock)->hash : 0;
		this_type_info._struct.member_names[1] = "clock_end"_;
		this_type_info._struct.member_offsets[1] = offsetof(frame_profile,clock_end);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(u64) ? TYPEINFO(u64)->hash : 0;
		this_type_info._struct.member_names[2] = "perf_start"_;
		this_type_info._struct.member_offsets[2] = offsetof(frame_profile,perf_start);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(u64) ? TYPEINFO(u64)->hash : 0;
		this_type_info._struct.member_names[3] = "perf_end"_;
		this_type_info._struct.member_offsets[3] = offsetof(frame_profile,perf_end);
		this_type_info._struct.member_circular[3] = 0;
		this_type_info._struct.member_types[4] = TYPEINFO(vector<profile_node *>) ? TYPEINFO(vector<profile_node *>)->hash : 0;
		this_type_info._struct.member_names[4] = "heads"_;
		this_type_info._struct.member_offsets[4] = offsetof(frame_profile,heads);
		this_type_info._struct.member_circular[4] = 0;
		this_type_info._struct.member_types[5] = TYPEINFO(profile_node *) ? TYPEINFO(profile_node *)->hash : 0;
		this_type_info._struct.member_names[5] = "current"_;
		this_type_info._struct.member_offsets[5] = offsetof(frame_profile,current);
		this_type_info._struct.member_circular[5] = 0;
		this_type_info._struct.member_types[6] = TYPEINFO(map<allocator, alloc_frame_profile>) ? TYPEINFO(map<allocator, alloc_frame_profile>)->hash : 0;
		this_type_info._struct.member_names[6] = "allocations"_;
		this_type_info._struct.member_offsets[6] = offsetof(frame_profile,allocations);
		this_type_info._struct.member_circular[6] = 0;
		this_type_info._struct.member_types[7] = TYPEINFO(pool_allocator) ? TYPEINFO(pool_allocator)->hash : 0;
		this_type_info._struct.member_names[7] = "pool"_;
		this_type_info._struct.member_offsets[7] = offsetof(frame_profile,pool);
		this_type_info._struct.member_circular[7] = 0;
		this_type_info._struct.member_types[8] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[8] = "number"_;
		this_type_info._struct.member_offsets[8] = offsetof(frame_profile,number);
		this_type_info._struct.member_circular[8] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(addr_info);
		this_type_info.name = "addr_info"_;
		this_type_info.hash = (type_id)typeid(addr_info).hash_code();
		this_type_info._struct.member_count = 2;
		this_type_info._struct.member_types[0] = TYPEINFO(code_context) ? TYPEINFO(code_context)->hash : 0;
		this_type_info._struct.member_names[0] = "last_loc"_;
		this_type_info._struct.member_offsets[0] = offsetof(addr_info,last_loc);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(i64) ? TYPEINFO(i64)->hash : 0;
		this_type_info._struct.member_names[1] = "size"_;
		this_type_info._struct.member_offsets[1] = offsetof(addr_info,size);
		this_type_info._struct.member_circular[1] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

#pragma push_macro("K")
#define K void*
#pragma push_macro("V")
#define V addr_info
#pragma push_macro("K")
#define K void*
#pragma push_macro("V")
#define V addr_info
	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(map_element<K,V>);
		this_type_info.name = "map_element"_;
		this_type_info.hash = (type_id)typeid(map_element<K,V>).hash_code();
		this_type_info._struct.member_count = 3;
#define __map_element__ map_element<K,V>
		this_type_info._struct.member_types[0] = TYPEINFO(K) ? TYPEINFO(K)->hash : 0;
		this_type_info._struct.member_names[0] = "key"_;
		this_type_info._struct.member_offsets[0] = offsetof(__map_element__, key);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(V) ? TYPEINFO(V)->hash : 0;
		this_type_info._struct.member_names[1] = "value"_;
		this_type_info._struct.member_offsets[1] = offsetof(__map_element__, value);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[2] = "occupied_and_bucket"_;
		this_type_info._struct.member_offsets[2] = offsetof(__map_element__, occupied_and_bucket);
		this_type_info._struct.member_circular[2] = 0;
#undef __map_element__
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

#pragma pop_macro("K")
#pragma pop_macro("V")

#pragma push_macro("T")
#define T map_element<K,V>
	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(vector<T>);
		this_type_info.name = "vector"_;
		this_type_info.hash = (type_id)typeid(vector<T>).hash_code();
		this_type_info._struct.member_count = 4;
#define __vector__ vector<T>
		this_type_info._struct.member_types[0] = TYPEINFO(T *) ? TYPEINFO(T *)->hash : 0;
		this_type_info._struct.member_names[0] = "memory"_;
		this_type_info._struct.member_offsets[0] = offsetof(__vector__, memory);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[1] = "size"_;
		this_type_info._struct.member_offsets[1] = offsetof(__vector__, size);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[2] = "capacity"_;
		this_type_info._struct.member_offsets[2] = offsetof(__vector__, capacity);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(allocator *) ? TYPEINFO(allocator *)->hash : 0;
		this_type_info._struct.member_names[3] = "alloc"_;
		this_type_info._struct.member_offsets[3] = offsetof(__vector__, alloc);
		this_type_info._struct.member_circular[3] = 0;
#undef __vector__
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

#pragma pop_macro("T")

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(map<K,V>);
		this_type_info.name = "map"_;
		this_type_info.hash = (type_id)typeid(map<K,V>).hash_code();
		this_type_info._struct.member_count = 4;
#define __map__ map<K,V>
		this_type_info._struct.member_types[0] = TYPEINFO(vector<map_element<K, V> >) ? TYPEINFO(vector<map_element<K, V> >)->hash : 0;
		this_type_info._struct.member_names[0] = "contents"_;
		this_type_info._struct.member_offsets[0] = offsetof(__map__, contents);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[1] = "size"_;
		this_type_info._struct.member_offsets[1] = offsetof(__map__, size);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[2] = "max_probe"_;
		this_type_info._struct.member_offsets[2] = offsetof(__map__, max_probe);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(allocator *) ? TYPEINFO(allocator *)->hash : 0;
		this_type_info._struct.member_names[3] = "alloc"_;
		this_type_info._struct.member_offsets[3] = offsetof(__map__, alloc);
		this_type_info._struct.member_circular[3] = 0;
#undef __map__
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

#pragma pop_macro("K")
#pragma pop_macro("V")

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(alloc_profile);
		this_type_info.name = "alloc_profile"_;
		this_type_info.hash = (type_id)typeid(alloc_profile).hash_code();
		this_type_info._struct.member_count = 8;
		this_type_info._struct.member_types[0] = TYPEINFO(map<void *, addr_info>) ? TYPEINFO(map<void *, addr_info>)->hash : 0;
		this_type_info._struct.member_names[0] = "current_set"_;
		this_type_info._struct.member_offsets[0] = offsetof(alloc_profile,current_set);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(i64) ? TYPEINFO(i64)->hash : 0;
		this_type_info._struct.member_names[1] = "current_size"_;
		this_type_info._struct.member_offsets[1] = offsetof(alloc_profile,current_size);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(u64) ? TYPEINFO(u64)->hash : 0;
		this_type_info._struct.member_names[2] = "total_allocated"_;
		this_type_info._struct.member_offsets[2] = offsetof(alloc_profile,total_allocated);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(u64) ? TYPEINFO(u64)->hash : 0;
		this_type_info._struct.member_names[3] = "total_freed"_;
		this_type_info._struct.member_offsets[3] = offsetof(alloc_profile,total_freed);
		this_type_info._struct.member_circular[3] = 0;
		this_type_info._struct.member_types[4] = TYPEINFO(u64) ? TYPEINFO(u64)->hash : 0;
		this_type_info._struct.member_names[4] = "num_allocs"_;
		this_type_info._struct.member_offsets[4] = offsetof(alloc_profile,num_allocs);
		this_type_info._struct.member_circular[4] = 0;
		this_type_info._struct.member_types[5] = TYPEINFO(u64) ? TYPEINFO(u64)->hash : 0;
		this_type_info._struct.member_names[5] = "num_frees"_;
		this_type_info._struct.member_offsets[5] = offsetof(alloc_profile,num_frees);
		this_type_info._struct.member_circular[5] = 0;
		this_type_info._struct.member_types[6] = TYPEINFO(u64) ? TYPEINFO(u64)->hash : 0;
		this_type_info._struct.member_names[6] = "num_reallocs"_;
		this_type_info._struct.member_offsets[6] = offsetof(alloc_profile,num_reallocs);
		this_type_info._struct.member_circular[6] = 0;
		this_type_info._struct.member_types[7] = TYPEINFO(platform_mutex) ? TYPEINFO(platform_mutex)->hash : 0;
		this_type_info._struct.member_names[7] = "mut"_;
		this_type_info._struct.member_offsets[7] = offsetof(alloc_profile,mut);
		this_type_info._struct.member_circular[7] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

#pragma push_macro("T")
#define T frame_profile
	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(queue<T>);
		this_type_info.name = "queue"_;
		this_type_info.hash = (type_id)typeid(queue<T>).hash_code();
		this_type_info._struct.member_count = 5;
#define __queue__ queue<T>
		this_type_info._struct.member_types[0] = TYPEINFO(T *) ? TYPEINFO(T *)->hash : 0;
		this_type_info._struct.member_names[0] = "memory"_;
		this_type_info._struct.member_offsets[0] = offsetof(__queue__, memory);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[1] = "start"_;
		this_type_info._struct.member_offsets[1] = offsetof(__queue__, start);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[2] = "end"_;
		this_type_info._struct.member_offsets[2] = offsetof(__queue__, end);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[3] = "capacity"_;
		this_type_info._struct.member_offsets[3] = offsetof(__queue__, capacity);
		this_type_info._struct.member_circular[3] = 0;
		this_type_info._struct.member_types[4] = TYPEINFO(allocator *) ? TYPEINFO(allocator *)->hash : 0;
		this_type_info._struct.member_names[4] = "alloc"_;
		this_type_info._struct.member_offsets[4] = offsetof(__queue__, alloc);
		this_type_info._struct.member_circular[4] = 0;
#undef __queue__
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

#pragma pop_macro("T")

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(thread_profile);
		this_type_info.name = "thread_profile"_;
		this_type_info.hash = (type_id)typeid(thread_profile).hash_code();
		this_type_info._struct.member_count = 7;
		this_type_info._struct.member_types[0] = TYPEINFO(string) ? TYPEINFO(string)->hash : 0;
		this_type_info._struct.member_names[0] = "name"_;
		this_type_info._struct.member_offsets[0] = offsetof(thread_profile,name);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(queue<frame_profile>) ? TYPEINFO(queue<frame_profile>)->hash : 0;
		this_type_info._struct.member_names[1] = "frames"_;
		this_type_info._struct.member_offsets[1] = offsetof(thread_profile,frames);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(platform_mutex) ? TYPEINFO(platform_mutex)->hash : 0;
		this_type_info._struct.member_names[2] = "mut"_;
		this_type_info._struct.member_offsets[2] = offsetof(thread_profile,mut);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[3] = "frame_buf_size"_;
		this_type_info._struct.member_offsets[3] = offsetof(thread_profile,frame_buf_size);
		this_type_info._struct.member_circular[3] = 0;
		this_type_info._struct.member_types[4] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[4] = "num_frames"_;
		this_type_info._struct.member_offsets[4] = offsetof(thread_profile,num_frames);
		this_type_info._struct.member_circular[4] = 0;
		this_type_info._struct.member_types[5] = TYPEINFO(i32) ? TYPEINFO(i32)->hash : 0;
		this_type_info._struct.member_names[5] = "selected_frame"_;
		this_type_info._struct.member_offsets[5] = offsetof(thread_profile,selected_frame);
		this_type_info._struct.member_circular[5] = 0;
		this_type_info._struct.member_types[6] = TYPEINFO(bool) ? TYPEINFO(bool)->hash : 0;
		this_type_info._struct.member_names[6] = "in_frame"_;
		this_type_info._struct.member_offsets[6] = offsetof(thread_profile,in_frame);
		this_type_info._struct.member_circular[6] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

#pragma push_macro("K")
#define K string
#pragma push_macro("V")
#define V dbg_value
#pragma push_macro("K")
#define K string
#pragma push_macro("V")
#define V dbg_value
	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(map_element<K,V>);
		this_type_info.name = "map_element"_;
		this_type_info.hash = (type_id)typeid(map_element<K,V>).hash_code();
		this_type_info._struct.member_count = 3;
#define __map_element__ map_element<K,V>
		this_type_info._struct.member_types[0] = TYPEINFO(K) ? TYPEINFO(K)->hash : 0;
		this_type_info._struct.member_names[0] = "key"_;
		this_type_info._struct.member_offsets[0] = offsetof(__map_element__, key);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(V) ? TYPEINFO(V)->hash : 0;
		this_type_info._struct.member_names[1] = "value"_;
		this_type_info._struct.member_offsets[1] = offsetof(__map_element__, value);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[2] = "occupied_and_bucket"_;
		this_type_info._struct.member_offsets[2] = offsetof(__map_element__, occupied_and_bucket);
		this_type_info._struct.member_circular[2] = 0;
#undef __map_element__
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

#pragma pop_macro("K")
#pragma pop_macro("V")

#pragma push_macro("T")
#define T map_element<K,V>
	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(vector<T>);
		this_type_info.name = "vector"_;
		this_type_info.hash = (type_id)typeid(vector<T>).hash_code();
		this_type_info._struct.member_count = 4;
#define __vector__ vector<T>
		this_type_info._struct.member_types[0] = TYPEINFO(T *) ? TYPEINFO(T *)->hash : 0;
		this_type_info._struct.member_names[0] = "memory"_;
		this_type_info._struct.member_offsets[0] = offsetof(__vector__, memory);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[1] = "size"_;
		this_type_info._struct.member_offsets[1] = offsetof(__vector__, size);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[2] = "capacity"_;
		this_type_info._struct.member_offsets[2] = offsetof(__vector__, capacity);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(allocator *) ? TYPEINFO(allocator *)->hash : 0;
		this_type_info._struct.member_names[3] = "alloc"_;
		this_type_info._struct.member_offsets[3] = offsetof(__vector__, alloc);
		this_type_info._struct.member_circular[3] = 0;
#undef __vector__
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

#pragma pop_macro("T")

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(map<K,V>);
		this_type_info.name = "map"_;
		this_type_info.hash = (type_id)typeid(map<K,V>).hash_code();
		this_type_info._struct.member_count = 4;
#define __map__ map<K,V>
		this_type_info._struct.member_types[0] = TYPEINFO(vector<map_element<K, V> >) ? TYPEINFO(vector<map_element<K, V> >)->hash : 0;
		this_type_info._struct.member_names[0] = "contents"_;
		this_type_info._struct.member_offsets[0] = offsetof(__map__, contents);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[1] = "size"_;
		this_type_info._struct.member_offsets[1] = offsetof(__map__, size);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[2] = "max_probe"_;
		this_type_info._struct.member_offsets[2] = offsetof(__map__, max_probe);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(allocator *) ? TYPEINFO(allocator *)->hash : 0;
		this_type_info._struct.member_names[3] = "alloc"_;
		this_type_info._struct.member_offsets[3] = offsetof(__map__, alloc);
		this_type_info._struct.member_circular[3] = 0;
#undef __map__
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

#pragma pop_macro("K")
#pragma pop_macro("V")

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(dbg_value_sec);
		this_type_info.name = "dbg_value_sec"_;
		this_type_info.hash = (type_id)typeid(dbg_value_sec).hash_code();
		this_type_info._struct.member_count = 1;
		this_type_info._struct.member_types[0] = TYPEINFO(map<string, dbg_value>) ? TYPEINFO(map<string, dbg_value>)->hash : 0;
		this_type_info._struct.member_names[0] = "children"_;
		this_type_info._struct.member_offsets[0] = offsetof(dbg_value_sec,children);
		this_type_info._struct.member_circular[0] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(dbg_value_cal);
		this_type_info.name = "dbg_value_cal"_;
		this_type_info.hash = (type_id)typeid(dbg_value_cal).hash_code();
		this_type_info._struct.member_count = 2;
		this_type_info._struct.member_types[0] = TYPEINFO(func_ptr<void, void *>) ? TYPEINFO(func_ptr<void, void *>)->hash : 0;
		this_type_info._struct.member_names[0] = "callback"_;
		this_type_info._struct.member_offsets[0] = offsetof(dbg_value_cal,callback);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(void *) ? TYPEINFO(void *)->hash : 0;
		this_type_info._struct.member_names[1] = "callback_param"_;
		this_type_info._struct.member_offsets[1] = offsetof(dbg_value_cal,callback_param);
		this_type_info._struct.member_circular[1] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(dbg_value);
		this_type_info.name = "dbg_value"_;
		this_type_info.hash = (type_id)typeid(dbg_value).hash_code();
		this_type_info._struct.member_count = 5;
		this_type_info._struct.member_types[0] = TYPEINFO(dbg_value_class) ? TYPEINFO(dbg_value_class)->hash : 0;
		this_type_info._struct.member_names[0] = "type"_;
		this_type_info._struct.member_offsets[0] = offsetof(dbg_value,type);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(any) ? TYPEINFO(any)->hash : 0;
		this_type_info._struct.member_names[1] = "edit"_;
		this_type_info._struct.member_offsets[1] = offsetof(dbg_value,edit);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(any) ? TYPEINFO(any)->hash : 0;
		this_type_info._struct.member_names[2] = "view"_;
		this_type_info._struct.member_offsets[2] = offsetof(dbg_value,view);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(dbg_value_sec) ? TYPEINFO(dbg_value_sec)->hash : 0;
		this_type_info._struct.member_names[3] = "sec"_;
		this_type_info._struct.member_offsets[3] = offsetof(dbg_value,sec);
		this_type_info._struct.member_circular[3] = 0;
		this_type_info._struct.member_types[4] = TYPEINFO(dbg_value_cal) ? TYPEINFO(dbg_value_cal)->hash : 0;
		this_type_info._struct.member_names[4] = "cal"_;
		this_type_info._struct.member_offsets[4] = offsetof(dbg_value,cal);
		this_type_info._struct.member_circular[4] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

#pragma push_macro("K")
#define K platform_thread_id
#pragma push_macro("V")
#define V thread_profile*
#pragma push_macro("K")
#define K platform_thread_id
#pragma push_macro("V")
#define V thread_profile*
	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(map_element<K,V>);
		this_type_info.name = "map_element"_;
		this_type_info.hash = (type_id)typeid(map_element<K,V>).hash_code();
		this_type_info._struct.member_count = 3;
#define __map_element__ map_element<K,V>
		this_type_info._struct.member_types[0] = TYPEINFO(K) ? TYPEINFO(K)->hash : 0;
		this_type_info._struct.member_names[0] = "key"_;
		this_type_info._struct.member_offsets[0] = offsetof(__map_element__, key);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(V) ? TYPEINFO(V)->hash : 0;
		this_type_info._struct.member_names[1] = "value"_;
		this_type_info._struct.member_offsets[1] = offsetof(__map_element__, value);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[2] = "occupied_and_bucket"_;
		this_type_info._struct.member_offsets[2] = offsetof(__map_element__, occupied_and_bucket);
		this_type_info._struct.member_circular[2] = 0;
#undef __map_element__
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

#pragma pop_macro("K")
#pragma pop_macro("V")

#pragma push_macro("T")
#define T map_element<K,V>
	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(vector<T>);
		this_type_info.name = "vector"_;
		this_type_info.hash = (type_id)typeid(vector<T>).hash_code();
		this_type_info._struct.member_count = 4;
#define __vector__ vector<T>
		this_type_info._struct.member_types[0] = TYPEINFO(T *) ? TYPEINFO(T *)->hash : 0;
		this_type_info._struct.member_names[0] = "memory"_;
		this_type_info._struct.member_offsets[0] = offsetof(__vector__, memory);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[1] = "size"_;
		this_type_info._struct.member_offsets[1] = offsetof(__vector__, size);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[2] = "capacity"_;
		this_type_info._struct.member_offsets[2] = offsetof(__vector__, capacity);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(allocator *) ? TYPEINFO(allocator *)->hash : 0;
		this_type_info._struct.member_names[3] = "alloc"_;
		this_type_info._struct.member_offsets[3] = offsetof(__vector__, alloc);
		this_type_info._struct.member_circular[3] = 0;
#undef __vector__
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

#pragma pop_macro("T")

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(map<K,V>);
		this_type_info.name = "map"_;
		this_type_info.hash = (type_id)typeid(map<K,V>).hash_code();
		this_type_info._struct.member_count = 4;
#define __map__ map<K,V>
		this_type_info._struct.member_types[0] = TYPEINFO(vector<map_element<K, V> >) ? TYPEINFO(vector<map_element<K, V> >)->hash : 0;
		this_type_info._struct.member_names[0] = "contents"_;
		this_type_info._struct.member_offsets[0] = offsetof(__map__, contents);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[1] = "size"_;
		this_type_info._struct.member_offsets[1] = offsetof(__map__, size);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[2] = "max_probe"_;
		this_type_info._struct.member_offsets[2] = offsetof(__map__, max_probe);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(allocator *) ? TYPEINFO(allocator *)->hash : 0;
		this_type_info._struct.member_names[3] = "alloc"_;
		this_type_info._struct.member_offsets[3] = offsetof(__map__, alloc);
		this_type_info._struct.member_circular[3] = 0;
#undef __map__
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

#pragma pop_macro("K")
#pragma pop_macro("V")

#pragma push_macro("K")
#define K allocator
#pragma push_macro("V")
#define V alloc_profile*
#pragma push_macro("K")
#define K allocator
#pragma push_macro("V")
#define V alloc_profile*
	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(map_element<K,V>);
		this_type_info.name = "map_element"_;
		this_type_info.hash = (type_id)typeid(map_element<K,V>).hash_code();
		this_type_info._struct.member_count = 3;
#define __map_element__ map_element<K,V>
		this_type_info._struct.member_types[0] = TYPEINFO(K) ? TYPEINFO(K)->hash : 0;
		this_type_info._struct.member_names[0] = "key"_;
		this_type_info._struct.member_offsets[0] = offsetof(__map_element__, key);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(V) ? TYPEINFO(V)->hash : 0;
		this_type_info._struct.member_names[1] = "value"_;
		this_type_info._struct.member_offsets[1] = offsetof(__map_element__, value);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[2] = "occupied_and_bucket"_;
		this_type_info._struct.member_offsets[2] = offsetof(__map_element__, occupied_and_bucket);
		this_type_info._struct.member_circular[2] = 0;
#undef __map_element__
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

#pragma pop_macro("K")
#pragma pop_macro("V")

#pragma push_macro("T")
#define T map_element<K,V>
	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(vector<T>);
		this_type_info.name = "vector"_;
		this_type_info.hash = (type_id)typeid(vector<T>).hash_code();
		this_type_info._struct.member_count = 4;
#define __vector__ vector<T>
		this_type_info._struct.member_types[0] = TYPEINFO(T *) ? TYPEINFO(T *)->hash : 0;
		this_type_info._struct.member_names[0] = "memory"_;
		this_type_info._struct.member_offsets[0] = offsetof(__vector__, memory);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[1] = "size"_;
		this_type_info._struct.member_offsets[1] = offsetof(__vector__, size);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[2] = "capacity"_;
		this_type_info._struct.member_offsets[2] = offsetof(__vector__, capacity);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(allocator *) ? TYPEINFO(allocator *)->hash : 0;
		this_type_info._struct.member_names[3] = "alloc"_;
		this_type_info._struct.member_offsets[3] = offsetof(__vector__, alloc);
		this_type_info._struct.member_circular[3] = 0;
#undef __vector__
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

#pragma pop_macro("T")

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(map<K,V>);
		this_type_info.name = "map"_;
		this_type_info.hash = (type_id)typeid(map<K,V>).hash_code();
		this_type_info._struct.member_count = 4;
#define __map__ map<K,V>
		this_type_info._struct.member_types[0] = TYPEINFO(vector<map_element<K, V> >) ? TYPEINFO(vector<map_element<K, V> >)->hash : 0;
		this_type_info._struct.member_names[0] = "contents"_;
		this_type_info._struct.member_offsets[0] = offsetof(__map__, contents);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[1] = "size"_;
		this_type_info._struct.member_offsets[1] = offsetof(__map__, size);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[2] = "max_probe"_;
		this_type_info._struct.member_offsets[2] = offsetof(__map__, max_probe);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(allocator *) ? TYPEINFO(allocator *)->hash : 0;
		this_type_info._struct.member_names[3] = "alloc"_;
		this_type_info._struct.member_offsets[3] = offsetof(__map__, alloc);
		this_type_info._struct.member_circular[3] = 0;
#undef __map__
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

#pragma pop_macro("K")
#pragma pop_macro("V")

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(dbg_profiler);
		this_type_info.name = "dbg_profiler"_;
		this_type_info.hash = (type_id)typeid(dbg_profiler).hash_code();
		this_type_info._struct.member_count = 9;
		this_type_info._struct.member_types[0] = TYPEINFO(bool) ? TYPEINFO(bool)->hash : 0;
		this_type_info._struct.member_names[0] = "frame_pause"_;
		this_type_info._struct.member_offsets[0] = offsetof(dbg_profiler,frame_pause);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(prof_sort_type) ? TYPEINFO(prof_sort_type)->hash : 0;
		this_type_info._struct.member_names[1] = "prof_sort"_;
		this_type_info._struct.member_offsets[1] = offsetof(dbg_profiler,prof_sort);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(platform_thread_id) ? TYPEINFO(platform_thread_id)->hash : 0;
		this_type_info._struct.member_names[2] = "selected_thread"_;
		this_type_info._struct.member_offsets[2] = offsetof(dbg_profiler,selected_thread);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(f32) ? TYPEINFO(f32)->hash : 0;
		this_type_info._struct.member_names[3] = "last_frame_time"_;
		this_type_info._struct.member_offsets[3] = offsetof(dbg_profiler,last_frame_time);
		this_type_info._struct.member_circular[3] = 0;
		this_type_info._struct.member_types[4] = TYPEINFO(platform_mutex) ? TYPEINFO(platform_mutex)->hash : 0;
		this_type_info._struct.member_names[4] = "stats_map_mut"_;
		this_type_info._struct.member_offsets[4] = offsetof(dbg_profiler,stats_map_mut);
		this_type_info._struct.member_circular[4] = 0;
		this_type_info._struct.member_types[5] = TYPEINFO(map<platform_thread_id, thread_profile *>) ? TYPEINFO(map<platform_thread_id, thread_profile *>)->hash : 0;
		this_type_info._struct.member_names[5] = "thread_stats"_;
		this_type_info._struct.member_offsets[5] = offsetof(dbg_profiler,thread_stats);
		this_type_info._struct.member_circular[5] = 0;
		this_type_info._struct.member_types[6] = TYPEINFO(platform_mutex) ? TYPEINFO(platform_mutex)->hash : 0;
		this_type_info._struct.member_names[6] = "alloc_map_mut"_;
		this_type_info._struct.member_offsets[6] = offsetof(dbg_profiler,alloc_map_mut);
		this_type_info._struct.member_circular[6] = 0;
		this_type_info._struct.member_types[7] = TYPEINFO(map<allocator, alloc_profile *>) ? TYPEINFO(map<allocator, alloc_profile *>)->hash : 0;
		this_type_info._struct.member_names[7] = "alloc_stats"_;
		this_type_info._struct.member_offsets[7] = offsetof(dbg_profiler,alloc_stats);
		this_type_info._struct.member_circular[7] = 0;
		this_type_info._struct.member_types[8] = TYPEINFO(allocator *) ? TYPEINFO(allocator *)->hash : 0;
		this_type_info._struct.member_names[8] = "alloc"_;
		this_type_info._struct.member_offsets[8] = offsetof(dbg_profiler,alloc);
		this_type_info._struct.member_circular[8] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(dbg_value_store);
		this_type_info.name = "dbg_value_store"_;
		this_type_info.hash = (type_id)typeid(dbg_value_store).hash_code();
		this_type_info._struct.member_count = 2;
		this_type_info._struct.member_types[0] = TYPEINFO(dbg_value) ? TYPEINFO(dbg_value)->hash : 0;
		this_type_info._struct.member_names[0] = "value_store"_;
		this_type_info._struct.member_offsets[0] = offsetof(dbg_value_store,value_store);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(allocator *) ? TYPEINFO(allocator *)->hash : 0;
		this_type_info._struct.member_names[1] = "alloc"_;
		this_type_info._struct.member_offsets[1] = offsetof(dbg_value_store,alloc);
		this_type_info._struct.member_circular[1] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(console_msg);
		this_type_info.name = "console_msg"_;
		this_type_info.hash = (type_id)typeid(console_msg).hash_code();
		this_type_info._struct.member_count = 5;
		this_type_info._struct.member_types[0] = TYPEINFO(log_level) ? TYPEINFO(log_level)->hash : 0;
		this_type_info._struct.member_names[0] = "lvl"_;
		this_type_info._struct.member_offsets[0] = offsetof(console_msg,lvl);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(string) ? TYPEINFO(string)->hash : 0;
		this_type_info._struct.member_names[1] = "thread"_;
		this_type_info._struct.member_offsets[1] = offsetof(console_msg,thread);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(array<code_context>) ? TYPEINFO(array<code_context>)->hash : 0;
		this_type_info._struct.member_names[2] = "call_stack"_;
		this_type_info._struct.member_offsets[2] = offsetof(console_msg,call_stack);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(string) ? TYPEINFO(string)->hash : 0;
		this_type_info._struct.member_names[3] = "msg"_;
		this_type_info._struct.member_offsets[3] = offsetof(console_msg,msg);
		this_type_info._struct.member_circular[3] = 0;
		this_type_info._struct.member_types[4] = TYPEINFO(arena_allocator) ? TYPEINFO(arena_allocator)->hash : 0;
		this_type_info._struct.member_names[4] = "arena"_;
		this_type_info._struct.member_offsets[4] = offsetof(console_msg,arena);
		this_type_info._struct.member_circular[4] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

#pragma push_macro("T")
#define T void
#pragma push_macro("args")
#define args string
	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(func_ptr<T,args>);
		this_type_info.name = "func_ptr"_;
		this_type_info.hash = (type_id)typeid(func_ptr<T,args>).hash_code();
		this_type_info._struct.member_count = 1;
#define __func_ptr__ func_ptr<T,args>
		this_type_info._struct.member_types[0] = TYPEINFO(_FPTR *) ? TYPEINFO(_FPTR *)->hash : 0;
		this_type_info._struct.member_names[0] = "data"_;
		this_type_info._struct.member_offsets[0] = offsetof(__func_ptr__, data);
		this_type_info._struct.member_circular[0] = 0;
#undef __func_ptr__
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

#pragma pop_macro("T")
#pragma pop_macro("args")

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(console_cmd);
		this_type_info.name = "console_cmd"_;
		this_type_info.hash = (type_id)typeid(console_cmd).hash_code();
		this_type_info._struct.member_count = 2;
		this_type_info._struct.member_types[0] = TYPEINFO(func_ptr<void, string, void *>) ? TYPEINFO(func_ptr<void, string, void *>)->hash : 0;
		this_type_info._struct.member_names[0] = "func"_;
		this_type_info._struct.member_offsets[0] = offsetof(console_cmd,func);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(void *) ? TYPEINFO(void *)->hash : 0;
		this_type_info._struct.member_names[1] = "param"_;
		this_type_info._struct.member_offsets[1] = offsetof(console_cmd,param);
		this_type_info._struct.member_circular[1] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

#pragma push_macro("T")
#define T console_msg
	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(queue<T>);
		this_type_info.name = "queue"_;
		this_type_info.hash = (type_id)typeid(queue<T>).hash_code();
		this_type_info._struct.member_count = 5;
#define __queue__ queue<T>
		this_type_info._struct.member_types[0] = TYPEINFO(T *) ? TYPEINFO(T *)->hash : 0;
		this_type_info._struct.member_names[0] = "memory"_;
		this_type_info._struct.member_offsets[0] = offsetof(__queue__, memory);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[1] = "start"_;
		this_type_info._struct.member_offsets[1] = offsetof(__queue__, start);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[2] = "end"_;
		this_type_info._struct.member_offsets[2] = offsetof(__queue__, end);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[3] = "capacity"_;
		this_type_info._struct.member_offsets[3] = offsetof(__queue__, capacity);
		this_type_info._struct.member_circular[3] = 0;
		this_type_info._struct.member_types[4] = TYPEINFO(allocator *) ? TYPEINFO(allocator *)->hash : 0;
		this_type_info._struct.member_names[4] = "alloc"_;
		this_type_info._struct.member_offsets[4] = offsetof(__queue__, alloc);
		this_type_info._struct.member_circular[4] = 0;
#undef __queue__
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

#pragma pop_macro("T")

#pragma push_macro("K")
#define K string
#pragma push_macro("V")
#define V console_cmd
#pragma push_macro("K")
#define K string
#pragma push_macro("V")
#define V console_cmd
	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(map_element<K,V>);
		this_type_info.name = "map_element"_;
		this_type_info.hash = (type_id)typeid(map_element<K,V>).hash_code();
		this_type_info._struct.member_count = 3;
#define __map_element__ map_element<K,V>
		this_type_info._struct.member_types[0] = TYPEINFO(K) ? TYPEINFO(K)->hash : 0;
		this_type_info._struct.member_names[0] = "key"_;
		this_type_info._struct.member_offsets[0] = offsetof(__map_element__, key);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(V) ? TYPEINFO(V)->hash : 0;
		this_type_info._struct.member_names[1] = "value"_;
		this_type_info._struct.member_offsets[1] = offsetof(__map_element__, value);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[2] = "occupied_and_bucket"_;
		this_type_info._struct.member_offsets[2] = offsetof(__map_element__, occupied_and_bucket);
		this_type_info._struct.member_circular[2] = 0;
#undef __map_element__
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

#pragma pop_macro("K")
#pragma pop_macro("V")

#pragma push_macro("T")
#define T map_element<K,V>
	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(vector<T>);
		this_type_info.name = "vector"_;
		this_type_info.hash = (type_id)typeid(vector<T>).hash_code();
		this_type_info._struct.member_count = 4;
#define __vector__ vector<T>
		this_type_info._struct.member_types[0] = TYPEINFO(T *) ? TYPEINFO(T *)->hash : 0;
		this_type_info._struct.member_names[0] = "memory"_;
		this_type_info._struct.member_offsets[0] = offsetof(__vector__, memory);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[1] = "size"_;
		this_type_info._struct.member_offsets[1] = offsetof(__vector__, size);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[2] = "capacity"_;
		this_type_info._struct.member_offsets[2] = offsetof(__vector__, capacity);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(allocator *) ? TYPEINFO(allocator *)->hash : 0;
		this_type_info._struct.member_names[3] = "alloc"_;
		this_type_info._struct.member_offsets[3] = offsetof(__vector__, alloc);
		this_type_info._struct.member_circular[3] = 0;
#undef __vector__
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

#pragma pop_macro("T")

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(map<K,V>);
		this_type_info.name = "map"_;
		this_type_info.hash = (type_id)typeid(map<K,V>).hash_code();
		this_type_info._struct.member_count = 4;
#define __map__ map<K,V>
		this_type_info._struct.member_types[0] = TYPEINFO(vector<map_element<K, V> >) ? TYPEINFO(vector<map_element<K, V> >)->hash : 0;
		this_type_info._struct.member_names[0] = "contents"_;
		this_type_info._struct.member_offsets[0] = offsetof(__map__, contents);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[1] = "size"_;
		this_type_info._struct.member_offsets[1] = offsetof(__map__, size);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[2] = "max_probe"_;
		this_type_info._struct.member_offsets[2] = offsetof(__map__, max_probe);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(allocator *) ? TYPEINFO(allocator *)->hash : 0;
		this_type_info._struct.member_names[3] = "alloc"_;
		this_type_info._struct.member_offsets[3] = offsetof(__map__, alloc);
		this_type_info._struct.member_circular[3] = 0;
#undef __map__
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

#pragma pop_macro("K")
#pragma pop_macro("V")

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_array;
		this_type_info.size = sizeof(char [2048]);
		this_type_info.name = STRING(char [2048]);
		this_type_info.hash = (type_id)typeid(char [2048]).hash_code();
		this_type_info._array.of = TYPEINFO(char) ? TYPEINFO(char)->hash : 0;
		this_type_info._array.length = 2048;
		type_table.insert_if_unique(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(dbg_console);
		this_type_info.name = "dbg_console"_;
		this_type_info.hash = (type_id)typeid(dbg_console).hash_code();
		this_type_info._struct.member_count = 13;
		this_type_info._struct.member_types[0] = TYPEINFO(char [2048]) ? TYPEINFO(char [2048])->hash : 0;
		this_type_info._struct.member_names[0] = "input_buffer"_;
		this_type_info._struct.member_offsets[0] = offsetof(dbg_console,input_buffer);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(int) ? TYPEINFO(int)->hash : 0;
		this_type_info._struct.member_names[1] = "filter"_;
		this_type_info._struct.member_offsets[1] = offsetof(dbg_console,filter);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(log_level) ? TYPEINFO(log_level)->hash : 0;
		this_type_info._struct.member_names[2] = "base_level"_;
		this_type_info._struct.member_offsets[2] = offsetof(dbg_console,base_level);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(bool) ? TYPEINFO(bool)->hash : 0;
		this_type_info._struct.member_names[3] = "scroll_bottom"_;
		this_type_info._struct.member_offsets[3] = offsetof(dbg_console,scroll_bottom);
		this_type_info._struct.member_circular[3] = 0;
		this_type_info._struct.member_types[4] = TYPEINFO(bool) ? TYPEINFO(bool)->hash : 0;
		this_type_info._struct.member_names[4] = "copy_clipboard"_;
		this_type_info._struct.member_offsets[4] = offsetof(dbg_console,copy_clipboard);
		this_type_info._struct.member_circular[4] = 0;
		this_type_info._struct.member_types[5] = TYPEINFO(queue<console_msg>) ? TYPEINFO(queue<console_msg>)->hash : 0;
		this_type_info._struct.member_names[5] = "lines"_;
		this_type_info._struct.member_offsets[5] = offsetof(dbg_console,lines);
		this_type_info._struct.member_circular[5] = 0;
		this_type_info._struct.member_types[6] = TYPEINFO(platform_mutex) ? TYPEINFO(platform_mutex)->hash : 0;
		this_type_info._struct.member_names[6] = "lines_mut"_;
		this_type_info._struct.member_offsets[6] = offsetof(dbg_console,lines_mut);
		this_type_info._struct.member_circular[6] = 0;
		this_type_info._struct.member_types[7] = TYPEINFO(log_level) ? TYPEINFO(log_level)->hash : 0;
		this_type_info._struct.member_names[7] = "lvl"_;
		this_type_info._struct.member_offsets[7] = offsetof(dbg_console,lvl);
		this_type_info._struct.member_circular[7] = 0;
		this_type_info._struct.member_types[8] = TYPEINFO(i32) ? TYPEINFO(i32)->hash : 0;
		this_type_info._struct.member_names[8] = "history_idx"_;
		this_type_info._struct.member_offsets[8] = offsetof(dbg_console,history_idx);
		this_type_info._struct.member_circular[8] = 0;
		this_type_info._struct.member_types[9] = TYPEINFO(vector<string>) ? TYPEINFO(vector<string>)->hash : 0;
		this_type_info._struct.member_names[9] = "candidates"_;
		this_type_info._struct.member_offsets[9] = offsetof(dbg_console,candidates);
		this_type_info._struct.member_circular[9] = 0;
		this_type_info._struct.member_types[10] = TYPEINFO(vector<string>) ? TYPEINFO(vector<string>)->hash : 0;
		this_type_info._struct.member_names[10] = "history"_;
		this_type_info._struct.member_offsets[10] = offsetof(dbg_console,history);
		this_type_info._struct.member_circular[10] = 0;
		this_type_info._struct.member_types[11] = TYPEINFO(map<string, console_cmd>) ? TYPEINFO(map<string, console_cmd>)->hash : 0;
		this_type_info._struct.member_names[11] = "commands"_;
		this_type_info._struct.member_offsets[11] = offsetof(dbg_console,commands);
		this_type_info._struct.member_circular[11] = 0;
		this_type_info._struct.member_types[12] = TYPEINFO(allocator *) ? TYPEINFO(allocator *)->hash : 0;
		this_type_info._struct.member_names[12] = "alloc"_;
		this_type_info._struct.member_offsets[12] = offsetof(dbg_console,alloc);
		this_type_info._struct.member_circular[12] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(dbg_manager);
		this_type_info.name = "dbg_manager"_;
		this_type_info.hash = (type_id)typeid(dbg_manager).hash_code();
		this_type_info._struct.member_count = 7;
		this_type_info._struct.member_types[0] = TYPEINFO(bool) ? TYPEINFO(bool)->hash : 0;
		this_type_info._struct.member_names[0] = "show_ui"_;
		this_type_info._struct.member_offsets[0] = offsetof(dbg_manager,show_ui);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(bool) ? TYPEINFO(bool)->hash : 0;
		this_type_info._struct.member_names[1] = "show_profile"_;
		this_type_info._struct.member_offsets[1] = offsetof(dbg_manager,show_profile);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(bool) ? TYPEINFO(bool)->hash : 0;
		this_type_info._struct.member_names[2] = "show_vars"_;
		this_type_info._struct.member_offsets[2] = offsetof(dbg_manager,show_vars);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(bool) ? TYPEINFO(bool)->hash : 0;
		this_type_info._struct.member_names[3] = "show_console"_;
		this_type_info._struct.member_offsets[3] = offsetof(dbg_manager,show_console);
		this_type_info._struct.member_circular[3] = 0;
		this_type_info._struct.member_types[4] = TYPEINFO(dbg_console) ? TYPEINFO(dbg_console)->hash : 0;
		this_type_info._struct.member_names[4] = "console"_;
		this_type_info._struct.member_offsets[4] = offsetof(dbg_manager,console);
		this_type_info._struct.member_circular[4] = 0;
		this_type_info._struct.member_types[5] = TYPEINFO(dbg_profiler) ? TYPEINFO(dbg_profiler)->hash : 0;
		this_type_info._struct.member_names[5] = "profiler"_;
		this_type_info._struct.member_offsets[5] = offsetof(dbg_manager,profiler);
		this_type_info._struct.member_circular[5] = 0;
		this_type_info._struct.member_types[6] = TYPEINFO(dbg_value_store) ? TYPEINFO(dbg_value_store)->hash : 0;
		this_type_info._struct.member_names[6] = "store"_;
		this_type_info._struct.member_offsets[6] = offsetof(dbg_manager,store);
		this_type_info._struct.member_circular[6] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

#pragma push_macro("T")
#define T allocator*
#pragma push_macro("T")
#define T allocator*
	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(vector<T>);
		this_type_info.name = "vector"_;
		this_type_info.hash = (type_id)typeid(vector<T>).hash_code();
		this_type_info._struct.member_count = 4;
#define __vector__ vector<T>
		this_type_info._struct.member_types[0] = TYPEINFO(T *) ? TYPEINFO(T *)->hash : 0;
		this_type_info._struct.member_names[0] = "memory"_;
		this_type_info._struct.member_offsets[0] = offsetof(__vector__, memory);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[1] = "size"_;
		this_type_info._struct.member_offsets[1] = offsetof(__vector__, size);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[2] = "capacity"_;
		this_type_info._struct.member_offsets[2] = offsetof(__vector__, capacity);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(allocator *) ? TYPEINFO(allocator *)->hash : 0;
		this_type_info._struct.member_names[3] = "alloc"_;
		this_type_info._struct.member_offsets[3] = offsetof(__vector__, alloc);
		this_type_info._struct.member_circular[3] = 0;
#undef __vector__
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

#pragma pop_macro("T")

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(stack<T>);
		this_type_info.name = "stack"_;
		this_type_info.hash = (type_id)typeid(stack<T>).hash_code();
		this_type_info._struct.member_count = 1;
#define __stack__ stack<T>
		this_type_info._struct.member_types[0] = TYPEINFO(vector<T>) ? TYPEINFO(vector<T>)->hash : 0;
		this_type_info._struct.member_names[0] = "contents"_;
		this_type_info._struct.member_offsets[0] = offsetof(__stack__, contents);
		this_type_info._struct.member_circular[0] = 0;
#undef __stack__
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

#pragma pop_macro("T")

#pragma push_macro("T")
#define T dbg_msg
	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(queue<T>);
		this_type_info.name = "queue"_;
		this_type_info.hash = (type_id)typeid(queue<T>).hash_code();
		this_type_info._struct.member_count = 5;
#define __queue__ queue<T>
		this_type_info._struct.member_types[0] = TYPEINFO(T *) ? TYPEINFO(T *)->hash : 0;
		this_type_info._struct.member_names[0] = "memory"_;
		this_type_info._struct.member_offsets[0] = offsetof(__queue__, memory);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[1] = "start"_;
		this_type_info._struct.member_offsets[1] = offsetof(__queue__, start);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[2] = "end"_;
		this_type_info._struct.member_offsets[2] = offsetof(__queue__, end);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[3] = "capacity"_;
		this_type_info._struct.member_offsets[3] = offsetof(__queue__, capacity);
		this_type_info._struct.member_circular[3] = 0;
		this_type_info._struct.member_types[4] = TYPEINFO(allocator *) ? TYPEINFO(allocator *)->hash : 0;
		this_type_info._struct.member_names[4] = "alloc"_;
		this_type_info._struct.member_offsets[4] = offsetof(__queue__, alloc);
		this_type_info._struct.member_circular[4] = 0;
#undef __queue__
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

#pragma pop_macro("T")

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_array;
		this_type_info.size = sizeof(code_context [256]);
		this_type_info.name = STRING(code_context [256]);
		this_type_info.hash = (type_id)typeid(code_context [256]).hash_code();
		this_type_info._array.of = TYPEINFO(code_context) ? TYPEINFO(code_context)->hash : 0;
		this_type_info._array.length = 256;
		type_table.insert_if_unique(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(thread_data);
		this_type_info.name = "thread_data"_;
		this_type_info.hash = (type_id)typeid(thread_data).hash_code();
		this_type_info._struct.member_count = 9;
		this_type_info._struct.member_types[0] = TYPEINFO(stack<allocator *>) ? TYPEINFO(stack<allocator *>)->hash : 0;
		this_type_info._struct.member_names[0] = "alloc_stack"_;
		this_type_info._struct.member_offsets[0] = offsetof(thread_data,alloc_stack);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(string) ? TYPEINFO(string)->hash : 0;
		this_type_info._struct.member_names[1] = "name"_;
		this_type_info._struct.member_offsets[1] = offsetof(thread_data,name);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(code_context) ? TYPEINFO(code_context)->hash : 0;
		this_type_info._struct.member_names[2] = "start_context"_;
		this_type_info._struct.member_offsets[2] = offsetof(thread_data,start_context);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(code_context [256]) ? TYPEINFO(code_context [256])->hash : 0;
		this_type_info._struct.member_names[3] = "call_stack"_;
		this_type_info._struct.member_offsets[3] = offsetof(thread_data,call_stack);
		this_type_info._struct.member_circular[3] = 0;
		this_type_info._struct.member_types[4] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[4] = "call_stack_depth"_;
		this_type_info._struct.member_offsets[4] = offsetof(thread_data,call_stack_depth);
		this_type_info._struct.member_circular[4] = 0;
		this_type_info._struct.member_types[5] = TYPEINFO(bool) ? TYPEINFO(bool)->hash : 0;
		this_type_info._struct.member_names[5] = "profiling"_;
		this_type_info._struct.member_offsets[5] = offsetof(thread_data,profiling);
		this_type_info._struct.member_circular[5] = 0;
		this_type_info._struct.member_types[6] = TYPEINFO(bool) ? TYPEINFO(bool)->hash : 0;
		this_type_info._struct.member_names[6] = "timing_override"_;
		this_type_info._struct.member_offsets[6] = offsetof(thread_data,timing_override);
		this_type_info._struct.member_circular[6] = 0;
		this_type_info._struct.member_types[7] = TYPEINFO(queue<dbg_msg>) ? TYPEINFO(queue<dbg_msg>)->hash : 0;
		this_type_info._struct.member_names[7] = "dbg_queue"_;
		this_type_info._struct.member_offsets[7] = offsetof(thread_data,dbg_queue);
		this_type_info._struct.member_circular[7] = 0;
		this_type_info._struct.member_types[8] = TYPEINFO(arena_allocator) ? TYPEINFO(arena_allocator)->hash : 0;
		this_type_info._struct.member_names[8] = "scratch_arena"_;
		this_type_info._struct.member_offsets[8] = offsetof(thread_data,scratch_arena);
		this_type_info._struct.member_circular[8] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(engine);
		this_type_info.name = "engine"_;
		this_type_info.hash = (type_id)typeid(engine).hash_code();
		this_type_info._struct.member_count = 17;
		this_type_info._struct.member_types[0] = TYPEINFO(platform_allocator) ? TYPEINFO(platform_allocator)->hash : 0;
		this_type_info._struct.member_names[0] = "basic_a"_;
		this_type_info._struct.member_offsets[0] = offsetof(engine,basic_a);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(func_ptr_state) ? TYPEINFO(func_ptr_state)->hash : 0;
		this_type_info._struct.member_names[1] = "func_state"_;
		this_type_info._struct.member_offsets[1] = offsetof(engine,func_state);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(platform_allocator) ? TYPEINFO(platform_allocator)->hash : 0;
		this_type_info._struct.member_names[2] = "log_a"_;
		this_type_info._struct.member_offsets[2] = offsetof(engine,log_a);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(platform_allocator) ? TYPEINFO(platform_allocator)->hash : 0;
		this_type_info._struct.member_names[3] = "ogl_a"_;
		this_type_info._struct.member_offsets[3] = offsetof(engine,ogl_a);
		this_type_info._struct.member_circular[3] = 0;
		this_type_info._struct.member_types[4] = TYPEINFO(platform_allocator) ? TYPEINFO(platform_allocator)->hash : 0;
		this_type_info._struct.member_names[4] = "imgui_a"_;
		this_type_info._struct.member_offsets[4] = offsetof(engine,imgui_a);
		this_type_info._struct.member_circular[4] = 0;
		this_type_info._struct.member_types[5] = TYPEINFO(platform_allocator) ? TYPEINFO(platform_allocator)->hash : 0;
		this_type_info._struct.member_names[5] = "dbg_a"_;
		this_type_info._struct.member_offsets[5] = offsetof(engine,dbg_a);
		this_type_info._struct.member_circular[5] = 0;
		this_type_info._struct.member_types[6] = TYPEINFO(platform_allocator) ? TYPEINFO(platform_allocator)->hash : 0;
		this_type_info._struct.member_names[6] = "evt_a"_;
		this_type_info._struct.member_offsets[6] = offsetof(engine,evt_a);
		this_type_info._struct.member_circular[6] = 0;
		this_type_info._struct.member_types[7] = TYPEINFO(void *) ? TYPEINFO(void *)->hash : 0;
		this_type_info._struct.member_names[7] = "game_state"_;
		this_type_info._struct.member_offsets[7] = offsetof(engine,game_state);
		this_type_info._struct.member_circular[7] = 0;
		this_type_info._struct.member_types[8] = TYPEINFO(bool) ? TYPEINFO(bool)->hash : 0;
		this_type_info._struct.member_names[8] = "apply_window_settings"_;
		this_type_info._struct.member_offsets[8] = offsetof(engine,apply_window_settings);
		this_type_info._struct.member_circular[8] = 0;
		this_type_info._struct.member_types[9] = TYPEINFO(log_manager) ? TYPEINFO(log_manager)->hash : 0;
		this_type_info._struct.member_names[9] = "log"_;
		this_type_info._struct.member_offsets[9] = offsetof(engine,log);
		this_type_info._struct.member_circular[9] = 0;
		this_type_info._struct.member_types[10] = TYPEINFO(ogl_manager) ? TYPEINFO(ogl_manager)->hash : 0;
		this_type_info._struct.member_names[10] = "ogl"_;
		this_type_info._struct.member_offsets[10] = offsetof(engine,ogl);
		this_type_info._struct.member_circular[10] = 0;
		this_type_info._struct.member_types[11] = TYPEINFO(imgui_manager) ? TYPEINFO(imgui_manager)->hash : 0;
		this_type_info._struct.member_names[11] = "imgui"_;
		this_type_info._struct.member_offsets[11] = offsetof(engine,imgui);
		this_type_info._struct.member_circular[11] = 0;
		this_type_info._struct.member_types[12] = TYPEINFO(dbg_manager) ? TYPEINFO(dbg_manager)->hash : 0;
		this_type_info._struct.member_names[12] = "dbg"_;
		this_type_info._struct.member_offsets[12] = offsetof(engine,dbg);
		this_type_info._struct.member_circular[12] = 0;
		this_type_info._struct.member_types[13] = TYPEINFO(evt_manager) ? TYPEINFO(evt_manager)->hash : 0;
		this_type_info._struct.member_names[13] = "evt"_;
		this_type_info._struct.member_offsets[13] = offsetof(engine,evt);
		this_type_info._struct.member_circular[13] = 0;
		this_type_info._struct.member_types[14] = TYPEINFO(bool) ? TYPEINFO(bool)->hash : 0;
		this_type_info._struct.member_names[14] = "running"_;
		this_type_info._struct.member_offsets[14] = offsetof(engine,running);
		this_type_info._struct.member_circular[14] = 0;
		this_type_info._struct.member_types[15] = TYPEINFO(platform_window) ? TYPEINFO(platform_window)->hash : 0;
		this_type_info._struct.member_names[15] = "window"_;
		this_type_info._struct.member_offsets[15] = offsetof(engine,window);
		this_type_info._struct.member_circular[15] = 0;
		this_type_info._struct.member_types[16] = TYPEINFO(platform_api *) ? TYPEINFO(platform_api *)->hash : 0;
		this_type_info._struct.member_names[16] = "platform"_;
		this_type_info._struct.member_offsets[16] = offsetof(engine,platform);
		this_type_info._struct.member_circular[16] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(chunk_vert);
		this_type_info.name = "chunk_vert"_;
		this_type_info.hash = (type_id)typeid(chunk_vert).hash_code();
		this_type_info._struct.member_count = 5;
		this_type_info._struct.member_types[0] = TYPEINFO(u8) ? TYPEINFO(u8)->hash : 0;
		this_type_info._struct.member_names[0] = "v"_;
		this_type_info._struct.member_offsets[0] = offsetof(chunk_vert,v);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(u8) ? TYPEINFO(u8)->hash : 0;
		this_type_info._struct.member_names[1] = "u"_;
		this_type_info._struct.member_offsets[1] = offsetof(chunk_vert,u);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(u8) ? TYPEINFO(u8)->hash : 0;
		this_type_info._struct.member_names[2] = "z"_;
		this_type_info._struct.member_offsets[2] = offsetof(chunk_vert,z);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(u8) ? TYPEINFO(u8)->hash : 0;
		this_type_info._struct.member_names[3] = "x"_;
		this_type_info._struct.member_offsets[3] = offsetof(chunk_vert,x);
		this_type_info._struct.member_circular[3] = 0;
		this_type_info._struct.member_types[4] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[4] = "aoty"_;
		this_type_info._struct.member_offsets[4] = offsetof(chunk_vert,aoty);
		this_type_info._struct.member_circular[4] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

#pragma push_macro("T")
#define T chunk_vert
	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(vector<T>);
		this_type_info.name = "vector"_;
		this_type_info.hash = (type_id)typeid(vector<T>).hash_code();
		this_type_info._struct.member_count = 4;
#define __vector__ vector<T>
		this_type_info._struct.member_types[0] = TYPEINFO(T *) ? TYPEINFO(T *)->hash : 0;
		this_type_info._struct.member_names[0] = "memory"_;
		this_type_info._struct.member_offsets[0] = offsetof(__vector__, memory);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[1] = "size"_;
		this_type_info._struct.member_offsets[1] = offsetof(__vector__, size);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[2] = "capacity"_;
		this_type_info._struct.member_offsets[2] = offsetof(__vector__, capacity);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(allocator *) ? TYPEINFO(allocator *)->hash : 0;
		this_type_info._struct.member_names[3] = "alloc"_;
		this_type_info._struct.member_offsets[3] = offsetof(__vector__, alloc);
		this_type_info._struct.member_circular[3] = 0;
#undef __vector__
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

#pragma pop_macro("T")

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(mesh_chunk);
		this_type_info.name = "mesh_chunk"_;
		this_type_info.hash = (type_id)typeid(mesh_chunk).hash_code();
		this_type_info._struct.member_count = 3;
		this_type_info._struct.member_types[0] = TYPEINFO(vector<chunk_vert>) ? TYPEINFO(vector<chunk_vert>)->hash : 0;
		this_type_info._struct.member_names[0] = "vertices"_;
		this_type_info._struct.member_offsets[0] = offsetof(mesh_chunk,vertices);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(gpu_object_id) ? TYPEINFO(gpu_object_id)->hash : 0;
		this_type_info._struct.member_names[1] = "gpu"_;
		this_type_info._struct.member_offsets[1] = offsetof(mesh_chunk,gpu);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(bool) ? TYPEINFO(bool)->hash : 0;
		this_type_info._struct.member_names[2] = "dirty"_;
		this_type_info._struct.member_offsets[2] = offsetof(mesh_chunk,dirty);
		this_type_info._struct.member_circular[2] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_array;
		this_type_info.size = sizeof(v3 [36]);
		this_type_info.name = STRING(v3 [36]);
		this_type_info.hash = (type_id)typeid(v3 [36]).hash_code();
		this_type_info._array.of = TYPEINFO(v3) ? TYPEINFO(v3)->hash : 0;
		this_type_info._array.length = 36;
		type_table.insert_if_unique(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(mesh_cubemap);
		this_type_info.name = "mesh_cubemap"_;
		this_type_info.hash = (type_id)typeid(mesh_cubemap).hash_code();
		this_type_info._struct.member_count = 3;
		this_type_info._struct.member_types[0] = TYPEINFO(v3 [36]) ? TYPEINFO(v3 [36])->hash : 0;
		this_type_info._struct.member_names[0] = "vertices"_;
		this_type_info._struct.member_offsets[0] = offsetof(mesh_cubemap,vertices);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(gpu_object_id) ? TYPEINFO(gpu_object_id)->hash : 0;
		this_type_info._struct.member_names[1] = "gpu"_;
		this_type_info._struct.member_offsets[1] = offsetof(mesh_cubemap,gpu);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(bool) ? TYPEINFO(bool)->hash : 0;
		this_type_info._struct.member_names[2] = "dirty"_;
		this_type_info._struct.member_offsets[2] = offsetof(mesh_cubemap,dirty);
		this_type_info._struct.member_circular[2] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

#pragma push_macro("T")
#define T v3
	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(vector<T>);
		this_type_info.name = "vector"_;
		this_type_info.hash = (type_id)typeid(vector<T>).hash_code();
		this_type_info._struct.member_count = 4;
#define __vector__ vector<T>
		this_type_info._struct.member_types[0] = TYPEINFO(T *) ? TYPEINFO(T *)->hash : 0;
		this_type_info._struct.member_names[0] = "memory"_;
		this_type_info._struct.member_offsets[0] = offsetof(__vector__, memory);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[1] = "size"_;
		this_type_info._struct.member_offsets[1] = offsetof(__vector__, size);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[2] = "capacity"_;
		this_type_info._struct.member_offsets[2] = offsetof(__vector__, capacity);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(allocator *) ? TYPEINFO(allocator *)->hash : 0;
		this_type_info._struct.member_names[3] = "alloc"_;
		this_type_info._struct.member_offsets[3] = offsetof(__vector__, alloc);
		this_type_info._struct.member_circular[3] = 0;
#undef __vector__
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

#pragma pop_macro("T")

#pragma push_macro("T")
#define T colorf
	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(vector<T>);
		this_type_info.name = "vector"_;
		this_type_info.hash = (type_id)typeid(vector<T>).hash_code();
		this_type_info._struct.member_count = 4;
#define __vector__ vector<T>
		this_type_info._struct.member_types[0] = TYPEINFO(T *) ? TYPEINFO(T *)->hash : 0;
		this_type_info._struct.member_names[0] = "memory"_;
		this_type_info._struct.member_offsets[0] = offsetof(__vector__, memory);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[1] = "size"_;
		this_type_info._struct.member_offsets[1] = offsetof(__vector__, size);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[2] = "capacity"_;
		this_type_info._struct.member_offsets[2] = offsetof(__vector__, capacity);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(allocator *) ? TYPEINFO(allocator *)->hash : 0;
		this_type_info._struct.member_names[3] = "alloc"_;
		this_type_info._struct.member_offsets[3] = offsetof(__vector__, alloc);
		this_type_info._struct.member_circular[3] = 0;
#undef __vector__
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

#pragma pop_macro("T")

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(mesh_lines);
		this_type_info.name = "mesh_lines"_;
		this_type_info.hash = (type_id)typeid(mesh_lines).hash_code();
		this_type_info._struct.member_count = 4;
		this_type_info._struct.member_types[0] = TYPEINFO(vector<v3>) ? TYPEINFO(vector<v3>)->hash : 0;
		this_type_info._struct.member_names[0] = "vertices"_;
		this_type_info._struct.member_offsets[0] = offsetof(mesh_lines,vertices);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(vector<colorf>) ? TYPEINFO(vector<colorf>)->hash : 0;
		this_type_info._struct.member_names[1] = "colors"_;
		this_type_info._struct.member_offsets[1] = offsetof(mesh_lines,colors);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(gpu_object_id) ? TYPEINFO(gpu_object_id)->hash : 0;
		this_type_info._struct.member_names[2] = "gpu"_;
		this_type_info._struct.member_offsets[2] = offsetof(mesh_lines,gpu);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(bool) ? TYPEINFO(bool)->hash : 0;
		this_type_info._struct.member_names[3] = "dirty"_;
		this_type_info._struct.member_offsets[3] = offsetof(mesh_lines,dirty);
		this_type_info._struct.member_circular[3] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

#pragma push_macro("T")
#define T v2
	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(vector<T>);
		this_type_info.name = "vector"_;
		this_type_info.hash = (type_id)typeid(vector<T>).hash_code();
		this_type_info._struct.member_count = 4;
#define __vector__ vector<T>
		this_type_info._struct.member_types[0] = TYPEINFO(T *) ? TYPEINFO(T *)->hash : 0;
		this_type_info._struct.member_names[0] = "memory"_;
		this_type_info._struct.member_offsets[0] = offsetof(__vector__, memory);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[1] = "size"_;
		this_type_info._struct.member_offsets[1] = offsetof(__vector__, size);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[2] = "capacity"_;
		this_type_info._struct.member_offsets[2] = offsetof(__vector__, capacity);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(allocator *) ? TYPEINFO(allocator *)->hash : 0;
		this_type_info._struct.member_names[3] = "alloc"_;
		this_type_info._struct.member_offsets[3] = offsetof(__vector__, alloc);
		this_type_info._struct.member_circular[3] = 0;
#undef __vector__
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

#pragma pop_macro("T")

#pragma push_macro("T")
#define T uv3
	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(vector<T>);
		this_type_info.name = "vector"_;
		this_type_info.hash = (type_id)typeid(vector<T>).hash_code();
		this_type_info._struct.member_count = 4;
#define __vector__ vector<T>
		this_type_info._struct.member_types[0] = TYPEINFO(T *) ? TYPEINFO(T *)->hash : 0;
		this_type_info._struct.member_names[0] = "memory"_;
		this_type_info._struct.member_offsets[0] = offsetof(__vector__, memory);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[1] = "size"_;
		this_type_info._struct.member_offsets[1] = offsetof(__vector__, size);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[2] = "capacity"_;
		this_type_info._struct.member_offsets[2] = offsetof(__vector__, capacity);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(allocator *) ? TYPEINFO(allocator *)->hash : 0;
		this_type_info._struct.member_names[3] = "alloc"_;
		this_type_info._struct.member_offsets[3] = offsetof(__vector__, alloc);
		this_type_info._struct.member_circular[3] = 0;
#undef __vector__
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

#pragma pop_macro("T")

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(mesh_2d_col);
		this_type_info.name = "mesh_2d_col"_;
		this_type_info.hash = (type_id)typeid(mesh_2d_col).hash_code();
		this_type_info._struct.member_count = 5;
		this_type_info._struct.member_types[0] = TYPEINFO(vector<v2>) ? TYPEINFO(vector<v2>)->hash : 0;
		this_type_info._struct.member_names[0] = "vertices"_;
		this_type_info._struct.member_offsets[0] = offsetof(mesh_2d_col,vertices);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(vector<colorf>) ? TYPEINFO(vector<colorf>)->hash : 0;
		this_type_info._struct.member_names[1] = "colors"_;
		this_type_info._struct.member_offsets[1] = offsetof(mesh_2d_col,colors);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(vector<uv3>) ? TYPEINFO(vector<uv3>)->hash : 0;
		this_type_info._struct.member_names[2] = "elements"_;
		this_type_info._struct.member_offsets[2] = offsetof(mesh_2d_col,elements);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(gpu_object_id) ? TYPEINFO(gpu_object_id)->hash : 0;
		this_type_info._struct.member_names[3] = "gpu"_;
		this_type_info._struct.member_offsets[3] = offsetof(mesh_2d_col,gpu);
		this_type_info._struct.member_circular[3] = 0;
		this_type_info._struct.member_types[4] = TYPEINFO(bool) ? TYPEINFO(bool)->hash : 0;
		this_type_info._struct.member_names[4] = "dirty"_;
		this_type_info._struct.member_offsets[4] = offsetof(mesh_2d_col,dirty);
		this_type_info._struct.member_circular[4] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(mesh_2d_tex);
		this_type_info.name = "mesh_2d_tex"_;
		this_type_info.hash = (type_id)typeid(mesh_2d_tex).hash_code();
		this_type_info._struct.member_count = 5;
		this_type_info._struct.member_types[0] = TYPEINFO(vector<v2>) ? TYPEINFO(vector<v2>)->hash : 0;
		this_type_info._struct.member_names[0] = "vertices"_;
		this_type_info._struct.member_offsets[0] = offsetof(mesh_2d_tex,vertices);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(vector<v2>) ? TYPEINFO(vector<v2>)->hash : 0;
		this_type_info._struct.member_names[1] = "texCoords"_;
		this_type_info._struct.member_offsets[1] = offsetof(mesh_2d_tex,texCoords);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(vector<uv3>) ? TYPEINFO(vector<uv3>)->hash : 0;
		this_type_info._struct.member_names[2] = "elements"_;
		this_type_info._struct.member_offsets[2] = offsetof(mesh_2d_tex,elements);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(gpu_object_id) ? TYPEINFO(gpu_object_id)->hash : 0;
		this_type_info._struct.member_names[3] = "gpu"_;
		this_type_info._struct.member_offsets[3] = offsetof(mesh_2d_tex,gpu);
		this_type_info._struct.member_circular[3] = 0;
		this_type_info._struct.member_types[4] = TYPEINFO(bool) ? TYPEINFO(bool)->hash : 0;
		this_type_info._struct.member_names[4] = "dirty"_;
		this_type_info._struct.member_offsets[4] = offsetof(mesh_2d_tex,dirty);
		this_type_info._struct.member_circular[4] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(mesh_2d_tex_col);
		this_type_info.name = "mesh_2d_tex_col"_;
		this_type_info.hash = (type_id)typeid(mesh_2d_tex_col).hash_code();
		this_type_info._struct.member_count = 6;
		this_type_info._struct.member_types[0] = TYPEINFO(vector<v2>) ? TYPEINFO(vector<v2>)->hash : 0;
		this_type_info._struct.member_names[0] = "vertices"_;
		this_type_info._struct.member_offsets[0] = offsetof(mesh_2d_tex_col,vertices);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(vector<v2>) ? TYPEINFO(vector<v2>)->hash : 0;
		this_type_info._struct.member_names[1] = "texCoords"_;
		this_type_info._struct.member_offsets[1] = offsetof(mesh_2d_tex_col,texCoords);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(vector<colorf>) ? TYPEINFO(vector<colorf>)->hash : 0;
		this_type_info._struct.member_names[2] = "colors"_;
		this_type_info._struct.member_offsets[2] = offsetof(mesh_2d_tex_col,colors);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(vector<uv3>) ? TYPEINFO(vector<uv3>)->hash : 0;
		this_type_info._struct.member_names[3] = "elements"_;
		this_type_info._struct.member_offsets[3] = offsetof(mesh_2d_tex_col,elements);
		this_type_info._struct.member_circular[3] = 0;
		this_type_info._struct.member_types[4] = TYPEINFO(gpu_object_id) ? TYPEINFO(gpu_object_id)->hash : 0;
		this_type_info._struct.member_names[4] = "gpu"_;
		this_type_info._struct.member_offsets[4] = offsetof(mesh_2d_tex_col,gpu);
		this_type_info._struct.member_circular[4] = 0;
		this_type_info._struct.member_types[5] = TYPEINFO(bool) ? TYPEINFO(bool)->hash : 0;
		this_type_info._struct.member_names[5] = "dirty"_;
		this_type_info._struct.member_offsets[5] = offsetof(mesh_2d_tex_col,dirty);
		this_type_info._struct.member_circular[5] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(mesh_3d_tex);
		this_type_info.name = "mesh_3d_tex"_;
		this_type_info.hash = (type_id)typeid(mesh_3d_tex).hash_code();
		this_type_info._struct.member_count = 5;
		this_type_info._struct.member_types[0] = TYPEINFO(vector<v3>) ? TYPEINFO(vector<v3>)->hash : 0;
		this_type_info._struct.member_names[0] = "vertices"_;
		this_type_info._struct.member_offsets[0] = offsetof(mesh_3d_tex,vertices);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(vector<v2>) ? TYPEINFO(vector<v2>)->hash : 0;
		this_type_info._struct.member_names[1] = "texCoords"_;
		this_type_info._struct.member_offsets[1] = offsetof(mesh_3d_tex,texCoords);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(vector<uv3>) ? TYPEINFO(vector<uv3>)->hash : 0;
		this_type_info._struct.member_names[2] = "elements"_;
		this_type_info._struct.member_offsets[2] = offsetof(mesh_3d_tex,elements);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(gpu_object_id) ? TYPEINFO(gpu_object_id)->hash : 0;
		this_type_info._struct.member_names[3] = "gpu"_;
		this_type_info._struct.member_offsets[3] = offsetof(mesh_3d_tex,gpu);
		this_type_info._struct.member_circular[3] = 0;
		this_type_info._struct.member_types[4] = TYPEINFO(bool) ? TYPEINFO(bool)->hash : 0;
		this_type_info._struct.member_names[4] = "dirty"_;
		this_type_info._struct.member_offsets[4] = offsetof(mesh_3d_tex,dirty);
		this_type_info._struct.member_circular[4] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(mesh_3d_tex_instance_data);
		this_type_info.name = "mesh_3d_tex_instance_data"_;
		this_type_info.hash = (type_id)typeid(mesh_3d_tex_instance_data).hash_code();
		this_type_info._struct.member_count = 5;
		this_type_info._struct.member_types[0] = TYPEINFO(mesh_3d_tex *) ? TYPEINFO(mesh_3d_tex *)->hash : 0;
		this_type_info._struct.member_names[0] = "parent"_;
		this_type_info._struct.member_offsets[0] = offsetof(mesh_3d_tex_instance_data,parent);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(vector<v3>) ? TYPEINFO(vector<v3>)->hash : 0;
		this_type_info._struct.member_names[1] = "data"_;
		this_type_info._struct.member_offsets[1] = offsetof(mesh_3d_tex_instance_data,data);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[2] = "instances"_;
		this_type_info._struct.member_offsets[2] = offsetof(mesh_3d_tex_instance_data,instances);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(gpu_object_id) ? TYPEINFO(gpu_object_id)->hash : 0;
		this_type_info._struct.member_names[3] = "gpu"_;
		this_type_info._struct.member_offsets[3] = offsetof(mesh_3d_tex_instance_data,gpu);
		this_type_info._struct.member_circular[3] = 0;
		this_type_info._struct.member_types[4] = TYPEINFO(bool) ? TYPEINFO(bool)->hash : 0;
		this_type_info._struct.member_names[4] = "dirty"_;
		this_type_info._struct.member_offsets[4] = offsetof(mesh_3d_tex_instance_data,dirty);
		this_type_info._struct.member_circular[4] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

#pragma push_macro("T")
#define T void
#pragma push_macro("args")
#define args chunk*
	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(func_ptr<T,args>);
		this_type_info.name = "func_ptr"_;
		this_type_info.hash = (type_id)typeid(func_ptr<T,args>).hash_code();
		this_type_info._struct.member_count = 1;
#define __func_ptr__ func_ptr<T,args>
		this_type_info._struct.member_types[0] = TYPEINFO(_FPTR *) ? TYPEINFO(_FPTR *)->hash : 0;
		this_type_info._struct.member_names[0] = "data"_;
		this_type_info._struct.member_offsets[0] = offsetof(__func_ptr__, data);
		this_type_info._struct.member_circular[0] = 0;
#undef __func_ptr__
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

#pragma pop_macro("T")
#pragma pop_macro("args")

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_array;
		this_type_info.size = sizeof(bool [6]);
		this_type_info.name = STRING(bool [6]);
		this_type_info.hash = (type_id)typeid(bool [6]).hash_code();
		this_type_info._array.of = TYPEINFO(bool) ? TYPEINFO(bool)->hash : 0;
		this_type_info._array.length = 6;
		type_table.insert_if_unique(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_array;
		this_type_info.size = sizeof(i32 [6]);
		this_type_info.name = STRING(i32 [6]);
		this_type_info.hash = (type_id)typeid(i32 [6]).hash_code();
		this_type_info._array.of = TYPEINFO(i32) ? TYPEINFO(i32)->hash : 0;
		this_type_info._array.length = 6;
		type_table.insert_if_unique(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_array;
		this_type_info.size = sizeof(block_type [6]);
		this_type_info.name = STRING(block_type [6]);
		this_type_info.hash = (type_id)typeid(block_type [6]).hash_code();
		this_type_info._array.of = TYPEINFO(block_type) ? TYPEINFO(block_type)->hash : 0;
		this_type_info._array.length = 6;
		type_table.insert_if_unique(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(block_meta);
		this_type_info.name = "block_meta"_;
		this_type_info.hash = (type_id)typeid(block_meta).hash_code();
		this_type_info._struct.member_count = 8;
		this_type_info._struct.member_types[0] = TYPEINFO(block_type) ? TYPEINFO(block_type)->hash : 0;
		this_type_info._struct.member_names[0] = "type"_;
		this_type_info._struct.member_offsets[0] = offsetof(block_meta,type);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(bool [6]) ? TYPEINFO(bool [6])->hash : 0;
		this_type_info._struct.member_names[1] = "opaque"_;
		this_type_info._struct.member_offsets[1] = offsetof(block_meta,opaque);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(i32 [6]) ? TYPEINFO(i32 [6])->hash : 0;
		this_type_info._struct.member_names[2] = "textures"_;
		this_type_info._struct.member_offsets[2] = offsetof(block_meta,textures);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(block_type [6]) ? TYPEINFO(block_type [6])->hash : 0;
		this_type_info._struct.member_names[3] = "merge"_;
		this_type_info._struct.member_offsets[3] = offsetof(block_meta,merge);
		this_type_info._struct.member_circular[3] = 0;
		this_type_info._struct.member_types[4] = TYPEINFO(bool) ? TYPEINFO(bool)->hash : 0;
		this_type_info._struct.member_names[4] = "renders"_;
		this_type_info._struct.member_offsets[4] = offsetof(block_meta,renders);
		this_type_info._struct.member_circular[4] = 0;
		this_type_info._struct.member_types[5] = TYPEINFO(bool) ? TYPEINFO(bool)->hash : 0;
		this_type_info._struct.member_names[5] = "does_ao"_;
		this_type_info._struct.member_offsets[5] = offsetof(block_meta,does_ao);
		this_type_info._struct.member_circular[5] = 0;
		this_type_info._struct.member_types[6] = TYPEINFO(bool) ? TYPEINFO(bool)->hash : 0;
		this_type_info._struct.member_names[6] = "custom_model"_;
		this_type_info._struct.member_offsets[6] = offsetof(block_meta,custom_model);
		this_type_info._struct.member_circular[6] = 0;
		this_type_info._struct.member_types[7] = TYPEINFO(func_ptr<void, chunk *, mesh_chunk *, block_meta, iv3, i32, i32, i32>) ? TYPEINFO(func_ptr<void, chunk *, mesh_chunk *, block_meta, iv3, i32, i32, i32>)->hash : 0;
		this_type_info._struct.member_names[7] = "model"_;
		this_type_info._struct.member_offsets[7] = offsetof(block_meta,model);
		this_type_info._struct.member_circular[7] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(chunk_pos);
		this_type_info.name = "chunk_pos"_;
		this_type_info.hash = (type_id)typeid(chunk_pos).hash_code();
		this_type_info._struct.member_count = 3;
		this_type_info._struct.member_types[0] = TYPEINFO(i32) ? TYPEINFO(i32)->hash : 0;
		this_type_info._struct.member_names[0] = "x"_;
		this_type_info._struct.member_offsets[0] = offsetof(chunk_pos,x);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(i32) ? TYPEINFO(i32)->hash : 0;
		this_type_info._struct.member_names[1] = "y"_;
		this_type_info._struct.member_offsets[1] = offsetof(chunk_pos,y);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(i32) ? TYPEINFO(i32)->hash : 0;
		this_type_info._struct.member_names[2] = "z"_;
		this_type_info._struct.member_offsets[2] = offsetof(chunk_pos,z);
		this_type_info._struct.member_circular[2] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(mesh_face);
		this_type_info.name = "mesh_face"_;
		this_type_info.hash = (type_id)typeid(mesh_face).hash_code();
		this_type_info._struct.member_count = 2;
		this_type_info._struct.member_types[0] = TYPEINFO(block_meta) ? TYPEINFO(block_meta)->hash : 0;
		this_type_info._struct.member_names[0] = "info"_;
		this_type_info._struct.member_offsets[0] = offsetof(mesh_face,info);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(bv4) ? TYPEINFO(bv4)->hash : 0;
		this_type_info._struct.member_names[1] = "ao"_;
		this_type_info._struct.member_offsets[1] = offsetof(mesh_face,ao);
		this_type_info._struct.member_circular[1] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

#pragma push_macro("E")
#define E work
	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(atomic_enum<E>);
		this_type_info.name = "atomic_enum"_;
		this_type_info.hash = (type_id)typeid(atomic_enum<E>).hash_code();
		this_type_info._struct.member_count = 1;
#define __atomic_enum__ atomic_enum<E>
		this_type_info._struct.member_types[0] = TYPEINFO(u64) ? TYPEINFO(u64)->hash : 0;
		this_type_info._struct.member_names[0] = "value"_;
		this_type_info._struct.member_offsets[0] = offsetof(__atomic_enum__, value);
		this_type_info._struct.member_circular[0] = 0;
#undef __atomic_enum__
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

#pragma pop_macro("E")

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_array;
		this_type_info.size = sizeof(block_type [511]);
		this_type_info.name = STRING(block_type [511]);
		this_type_info.hash = (type_id)typeid(block_type [511]).hash_code();
		this_type_info._array.of = TYPEINFO(block_type) ? TYPEINFO(block_type)->hash : 0;
		this_type_info._array.length = 511;
		type_table.insert_if_unique(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_array;
		this_type_info.size = sizeof(block_type [31][511]);
		this_type_info.name = STRING(block_type [31][511]);
		this_type_info.hash = (type_id)typeid(block_type [31][511]).hash_code();
		this_type_info._array.of = TYPEINFO(block_type [511]) ? TYPEINFO(block_type [511])->hash : 0;
		this_type_info._array.length = 31;
		type_table.insert_if_unique(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_array;
		this_type_info.size = sizeof(block_type [31][31][511]);
		this_type_info.name = STRING(block_type [31][31][511]);
		this_type_info.hash = (type_id)typeid(block_type [31][31][511]).hash_code();
		this_type_info._array.of = TYPEINFO(block_type [31][511]) ? TYPEINFO(block_type [31][511])->hash : 0;
		this_type_info._array.length = 31;
		type_table.insert_if_unique(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(chunk);
		this_type_info.name = "chunk"_;
		this_type_info.hash = (type_id)typeid(chunk).hash_code();
		this_type_info._struct.member_count = 8;
		this_type_info._struct.member_types[0] = TYPEINFO(chunk_pos) ? TYPEINFO(chunk_pos)->hash : 0;
		this_type_info._struct.member_names[0] = "pos"_;
		this_type_info._struct.member_offsets[0] = offsetof(chunk,pos);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(block_type [31][31][511]) ? TYPEINFO(block_type [31][31][511])->hash : 0;
		this_type_info._struct.member_names[1] = "blocks"_;
		this_type_info._struct.member_offsets[1] = offsetof(chunk,blocks);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(platform_mutex) ? TYPEINFO(platform_mutex)->hash : 0;
		this_type_info._struct.member_names[2] = "swap_mut"_;
		this_type_info._struct.member_offsets[2] = offsetof(chunk,swap_mut);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(atomic_enum<work>) ? TYPEINFO(atomic_enum<work>)->hash : 0;
		this_type_info._struct.member_names[3] = "job_state"_;
		this_type_info._struct.member_offsets[3] = offsetof(chunk,job_state);
		this_type_info._struct.member_circular[3] = 0;
		this_type_info._struct.member_types[4] = TYPEINFO(mesh_chunk) ? TYPEINFO(mesh_chunk)->hash : 0;
		this_type_info._struct.member_names[4] = "mesh"_;
		this_type_info._struct.member_offsets[4] = offsetof(chunk,mesh);
		this_type_info._struct.member_circular[4] = 0;
		this_type_info._struct.member_types[5] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[5] = "mesh_faces"_;
		this_type_info._struct.member_offsets[5] = offsetof(chunk,mesh_faces);
		this_type_info._struct.member_circular[5] = 0;
		this_type_info._struct.member_types[6] = TYPEINFO(allocator *) ? TYPEINFO(allocator *)->hash : 0;
		this_type_info._struct.member_names[6] = "alloc"_;
		this_type_info._struct.member_offsets[6] = offsetof(chunk,alloc);
		this_type_info._struct.member_circular[6] = 0;
		this_type_info._struct.member_types[7] = TYPEINFO(world *) ? TYPEINFO(world *)->hash : 0;
		this_type_info._struct.member_names[7] = "w"_;
		this_type_info._struct.member_offsets[7] = offsetof(chunk,w);
		this_type_info._struct.member_circular[7] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(player);
		this_type_info.name = "player"_;
		this_type_info.hash = (type_id)typeid(player).hash_code();
		this_type_info._struct.member_count = 6;
		this_type_info._struct.member_types[0] = TYPEINFO(render_camera) ? TYPEINFO(render_camera)->hash : 0;
		this_type_info._struct.member_names[0] = "camera"_;
		this_type_info._struct.member_offsets[0] = offsetof(player,camera);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(f32) ? TYPEINFO(f32)->hash : 0;
		this_type_info._struct.member_names[1] = "speed"_;
		this_type_info._struct.member_offsets[1] = offsetof(player,speed);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(v3) ? TYPEINFO(v3)->hash : 0;
		this_type_info._struct.member_names[2] = "velocity"_;
		this_type_info._struct.member_offsets[2] = offsetof(player,velocity);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(u64) ? TYPEINFO(u64)->hash : 0;
		this_type_info._struct.member_names[3] = "last"_;
		this_type_info._struct.member_offsets[3] = offsetof(player,last);
		this_type_info._struct.member_circular[3] = 0;
		this_type_info._struct.member_types[4] = TYPEINFO(bool) ? TYPEINFO(bool)->hash : 0;
		this_type_info._struct.member_names[4] = "enable"_;
		this_type_info._struct.member_offsets[4] = offsetof(player,enable);
		this_type_info._struct.member_circular[4] = 0;
		this_type_info._struct.member_types[5] = TYPEINFO(bool) ? TYPEINFO(bool)->hash : 0;
		this_type_info._struct.member_names[5] = "noclip"_;
		this_type_info._struct.member_offsets[5] = offsetof(player,noclip);
		this_type_info._struct.member_circular[5] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(world_settings);
		this_type_info.name = "world_settings"_;
		this_type_info.hash = (type_id)typeid(world_settings).hash_code();
		this_type_info._struct.member_count = 7;
		this_type_info._struct.member_types[0] = TYPEINFO(f32) ? TYPEINFO(f32)->hash : 0;
		this_type_info._struct.member_names[0] = "gravity"_;
		this_type_info._struct.member_offsets[0] = offsetof(world_settings,gravity);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(i32) ? TYPEINFO(i32)->hash : 0;
		this_type_info._struct.member_names[1] = "view_distance"_;
		this_type_info._struct.member_offsets[1] = offsetof(world_settings,view_distance);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(bool) ? TYPEINFO(bool)->hash : 0;
		this_type_info._struct.member_names[2] = "respect_cam"_;
		this_type_info._struct.member_offsets[2] = offsetof(world_settings,respect_cam);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(bool) ? TYPEINFO(bool)->hash : 0;
		this_type_info._struct.member_names[3] = "wireframe"_;
		this_type_info._struct.member_offsets[3] = offsetof(world_settings,wireframe);
		this_type_info._struct.member_circular[3] = 0;
		this_type_info._struct.member_types[4] = TYPEINFO(bool) ? TYPEINFO(bool)->hash : 0;
		this_type_info._struct.member_names[4] = "cull_backface"_;
		this_type_info._struct.member_offsets[4] = offsetof(world_settings,cull_backface);
		this_type_info._struct.member_circular[4] = 0;
		this_type_info._struct.member_types[5] = TYPEINFO(bool) ? TYPEINFO(bool)->hash : 0;
		this_type_info._struct.member_names[5] = "sample_shading"_;
		this_type_info._struct.member_offsets[5] = offsetof(world_settings,sample_shading);
		this_type_info._struct.member_circular[5] = 0;
		this_type_info._struct.member_types[6] = TYPEINFO(v4) ? TYPEINFO(v4)->hash : 0;
		this_type_info._struct.member_names[6] = "ao_curve"_;
		this_type_info._struct.member_offsets[6] = offsetof(world_settings,ao_curve);
		this_type_info._struct.member_circular[6] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(world_time);
		this_type_info.name = "world_time"_;
		this_type_info.hash = (type_id)typeid(world_time).hash_code();
		this_type_info._struct.member_count = 9;
		this_type_info._struct.member_types[0] = TYPEINFO(bool) ? TYPEINFO(bool)->hash : 0;
		this_type_info._struct.member_names[0] = "enable"_;
		this_type_info._struct.member_offsets[0] = offsetof(world_time,enable);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(f64) ? TYPEINFO(f64)->hash : 0;
		this_type_info._struct.member_names[1] = "time_scale"_;
		this_type_info._struct.member_offsets[1] = offsetof(world_time,time_scale);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(u64) ? TYPEINFO(u64)->hash : 0;
		this_type_info._struct.member_names[2] = "last_update"_;
		this_type_info._struct.member_offsets[2] = offsetof(world_time,last_update);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(u64) ? TYPEINFO(u64)->hash : 0;
		this_type_info._struct.member_names[3] = "absolute"_;
		this_type_info._struct.member_offsets[3] = offsetof(world_time,absolute);
		this_type_info._struct.member_circular[3] = 0;
		this_type_info._struct.member_types[4] = TYPEINFO(f64) ? TYPEINFO(f64)->hash : 0;
		this_type_info._struct.member_names[4] = "absolute_ms"_;
		this_type_info._struct.member_offsets[4] = offsetof(world_time,absolute_ms);
		this_type_info._struct.member_circular[4] = 0;
		this_type_info._struct.member_types[5] = TYPEINFO(f64) ? TYPEINFO(f64)->hash : 0;
		this_type_info._struct.member_names[5] = "minute_ms"_;
		this_type_info._struct.member_offsets[5] = offsetof(world_time,minute_ms);
		this_type_info._struct.member_circular[5] = 0;
		this_type_info._struct.member_types[6] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[6] = "minute"_;
		this_type_info._struct.member_offsets[6] = offsetof(world_time,minute);
		this_type_info._struct.member_circular[6] = 0;
		this_type_info._struct.member_types[7] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[7] = "hour"_;
		this_type_info._struct.member_offsets[7] = offsetof(world_time,hour);
		this_type_info._struct.member_circular[7] = 0;
		this_type_info._struct.member_types[8] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[8] = "day"_;
		this_type_info._struct.member_offsets[8] = offsetof(world_time,day);
		this_type_info._struct.member_circular[8] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

#pragma push_macro("T")
#define T block_meta
	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(vector<T>);
		this_type_info.name = "vector"_;
		this_type_info.hash = (type_id)typeid(vector<T>).hash_code();
		this_type_info._struct.member_count = 4;
#define __vector__ vector<T>
		this_type_info._struct.member_types[0] = TYPEINFO(T *) ? TYPEINFO(T *)->hash : 0;
		this_type_info._struct.member_names[0] = "memory"_;
		this_type_info._struct.member_offsets[0] = offsetof(__vector__, memory);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[1] = "size"_;
		this_type_info._struct.member_offsets[1] = offsetof(__vector__, size);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[2] = "capacity"_;
		this_type_info._struct.member_offsets[2] = offsetof(__vector__, capacity);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(allocator *) ? TYPEINFO(allocator *)->hash : 0;
		this_type_info._struct.member_names[3] = "alloc"_;
		this_type_info._struct.member_offsets[3] = offsetof(__vector__, alloc);
		this_type_info._struct.member_circular[3] = 0;
#undef __vector__
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

#pragma pop_macro("T")

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(world);
		this_type_info.name = "world"_;
		this_type_info.hash = (type_id)typeid(world).hash_code();
		this_type_info._struct.member_count = 12;
		this_type_info._struct.member_types[0] = TYPEINFO(int) ? TYPEINFO(int)->hash : 0;
		this_type_info._struct.member_names[0] = "chunks"_;
		this_type_info._struct.member_offsets[0] = offsetof(world,chunks);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(vector<block_meta>) ? TYPEINFO(vector<block_meta>)->hash : 0;
		this_type_info._struct.member_names[1] = "block_info"_;
		this_type_info._struct.member_offsets[1] = offsetof(world,block_info);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(world_settings) ? TYPEINFO(world_settings)->hash : 0;
		this_type_info._struct.member_names[2] = "settings"_;
		this_type_info._struct.member_offsets[2] = offsetof(world,settings);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(player) ? TYPEINFO(player)->hash : 0;
		this_type_info._struct.member_names[3] = "p"_;
		this_type_info._struct.member_offsets[3] = offsetof(world,p);
		this_type_info._struct.member_circular[3] = 0;
		this_type_info._struct.member_types[4] = TYPEINFO(threadpool) ? TYPEINFO(threadpool)->hash : 0;
		this_type_info._struct.member_names[4] = "thread_pool"_;
		this_type_info._struct.member_offsets[4] = offsetof(world,thread_pool);
		this_type_info._struct.member_circular[4] = 0;
		this_type_info._struct.member_types[5] = TYPEINFO(allocator *) ? TYPEINFO(allocator *)->hash : 0;
		this_type_info._struct.member_names[5] = "alloc"_;
		this_type_info._struct.member_offsets[5] = offsetof(world,alloc);
		this_type_info._struct.member_circular[5] = 0;
		this_type_info._struct.member_types[6] = TYPEINFO(texture_id) ? TYPEINFO(texture_id)->hash : 0;
		this_type_info._struct.member_names[6] = "block_textures"_;
		this_type_info._struct.member_offsets[6] = offsetof(world,block_textures);
		this_type_info._struct.member_circular[6] = 0;
		this_type_info._struct.member_types[7] = TYPEINFO(texture_id) ? TYPEINFO(texture_id)->hash : 0;
		this_type_info._struct.member_names[7] = "sky_texture"_;
		this_type_info._struct.member_offsets[7] = offsetof(world,sky_texture);
		this_type_info._struct.member_circular[7] = 0;
		this_type_info._struct.member_types[8] = TYPEINFO(texture_id) ? TYPEINFO(texture_id)->hash : 0;
		this_type_info._struct.member_names[8] = "night_sky_texture"_;
		this_type_info._struct.member_offsets[8] = offsetof(world,night_sky_texture);
		this_type_info._struct.member_circular[8] = 0;
		this_type_info._struct.member_types[9] = TYPEINFO(mesh_3d_tex) ? TYPEINFO(mesh_3d_tex)->hash : 0;
		this_type_info._struct.member_names[9] = "sky"_;
		this_type_info._struct.member_offsets[9] = offsetof(world,sky);
		this_type_info._struct.member_circular[9] = 0;
		this_type_info._struct.member_types[10] = TYPEINFO(world_time) ? TYPEINFO(world_time)->hash : 0;
		this_type_info._struct.member_names[10] = "time"_;
		this_type_info._struct.member_offsets[10] = offsetof(world,time);
		this_type_info._struct.member_circular[10] = 0;
		this_type_info._struct.member_types[11] = TYPEINFO(block_type) ? TYPEINFO(block_type)->hash : 0;
		this_type_info._struct.member_names[11] = "next_block_type"_;
		this_type_info._struct.member_offsets[11] = offsetof(world,next_block_type);
		this_type_info._struct.member_circular[11] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(exile);
		this_type_info.name = "exile"_;
		this_type_info.hash = (type_id)typeid(exile).hash_code();
		this_type_info._struct.member_count = 7;
		this_type_info._struct.member_types[0] = TYPEINFO(evt_state_machine) ? TYPEINFO(evt_state_machine)->hash : 0;
		this_type_info._struct.member_names[0] = "controls"_;
		this_type_info._struct.member_offsets[0] = offsetof(exile,controls);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(evt_state_id) ? TYPEINFO(evt_state_id)->hash : 0;
		this_type_info._struct.member_names[1] = "camera_evt"_;
		this_type_info._struct.member_offsets[1] = offsetof(exile,camera_evt);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(evt_state_id) ? TYPEINFO(evt_state_id)->hash : 0;
		this_type_info._struct.member_names[2] = "ui_evt"_;
		this_type_info._struct.member_offsets[2] = offsetof(exile,ui_evt);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(evt_handler_id) ? TYPEINFO(evt_handler_id)->hash : 0;
		this_type_info._struct.member_names[3] = "default_evt"_;
		this_type_info._struct.member_offsets[3] = offsetof(exile,default_evt);
		this_type_info._struct.member_circular[3] = 0;
		this_type_info._struct.member_types[4] = TYPEINFO(world) ? TYPEINFO(world)->hash : 0;
		this_type_info._struct.member_names[4] = "w"_;
		this_type_info._struct.member_offsets[4] = offsetof(exile,w);
		this_type_info._struct.member_circular[4] = 0;
		this_type_info._struct.member_types[5] = TYPEINFO(platform_allocator) ? TYPEINFO(platform_allocator)->hash : 0;
		this_type_info._struct.member_names[5] = "alloc"_;
		this_type_info._struct.member_offsets[5] = offsetof(exile,alloc);
		this_type_info._struct.member_circular[5] = 0;
		this_type_info._struct.member_types[6] = TYPEINFO(asset_store) ? TYPEINFO(asset_store)->hash : 0;
		this_type_info._struct.member_names[6] = "store"_;
		this_type_info._struct.member_offsets[6] = offsetof(exile,store);
		this_type_info._struct.member_circular[6] = 0;
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

#pragma push_macro("K")
#define K type_id
#pragma push_macro("V")
#define V _type_info
#pragma push_macro("K")
#define K type_id
#pragma push_macro("V")
#define V _type_info
	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(map_element<K,V>);
		this_type_info.name = "map_element"_;
		this_type_info.hash = (type_id)typeid(map_element<K,V>).hash_code();
		this_type_info._struct.member_count = 3;
#define __map_element__ map_element<K,V>
		this_type_info._struct.member_types[0] = TYPEINFO(K) ? TYPEINFO(K)->hash : 0;
		this_type_info._struct.member_names[0] = "key"_;
		this_type_info._struct.member_offsets[0] = offsetof(__map_element__, key);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(V) ? TYPEINFO(V)->hash : 0;
		this_type_info._struct.member_names[1] = "value"_;
		this_type_info._struct.member_offsets[1] = offsetof(__map_element__, value);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[2] = "occupied_and_bucket"_;
		this_type_info._struct.member_offsets[2] = offsetof(__map_element__, occupied_and_bucket);
		this_type_info._struct.member_circular[2] = 0;
#undef __map_element__
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

#pragma pop_macro("K")
#pragma pop_macro("V")

#pragma push_macro("T")
#define T map_element<K,V>
	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(vector<T>);
		this_type_info.name = "vector"_;
		this_type_info.hash = (type_id)typeid(vector<T>).hash_code();
		this_type_info._struct.member_count = 4;
#define __vector__ vector<T>
		this_type_info._struct.member_types[0] = TYPEINFO(T *) ? TYPEINFO(T *)->hash : 0;
		this_type_info._struct.member_names[0] = "memory"_;
		this_type_info._struct.member_offsets[0] = offsetof(__vector__, memory);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[1] = "size"_;
		this_type_info._struct.member_offsets[1] = offsetof(__vector__, size);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[2] = "capacity"_;
		this_type_info._struct.member_offsets[2] = offsetof(__vector__, capacity);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(allocator *) ? TYPEINFO(allocator *)->hash : 0;
		this_type_info._struct.member_names[3] = "alloc"_;
		this_type_info._struct.member_offsets[3] = offsetof(__vector__, alloc);
		this_type_info._struct.member_circular[3] = 0;
#undef __vector__
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

#pragma pop_macro("T")

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(map<K,V>);
		this_type_info.name = "map"_;
		this_type_info.hash = (type_id)typeid(map<K,V>).hash_code();
		this_type_info._struct.member_count = 4;
#define __map__ map<K,V>
		this_type_info._struct.member_types[0] = TYPEINFO(vector<map_element<K, V> >) ? TYPEINFO(vector<map_element<K, V> >)->hash : 0;
		this_type_info._struct.member_names[0] = "contents"_;
		this_type_info._struct.member_offsets[0] = offsetof(__map__, contents);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[1] = "size"_;
		this_type_info._struct.member_offsets[1] = offsetof(__map__, size);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[2] = "max_probe"_;
		this_type_info._struct.member_offsets[2] = offsetof(__map__, max_probe);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(allocator *) ? TYPEINFO(allocator *)->hash : 0;
		this_type_info._struct.member_names[3] = "alloc"_;
		this_type_info._struct.member_offsets[3] = offsetof(__map__, alloc);
		this_type_info._struct.member_circular[3] = 0;
#undef __map__
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

#pragma pop_macro("K")
#pragma pop_macro("V")

#pragma push_macro("T")
#define T profile_node*
	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(vector<T>);
		this_type_info.name = "vector"_;
		this_type_info.hash = (type_id)typeid(vector<T>).hash_code();
		this_type_info._struct.member_count = 4;
#define __vector__ vector<T>
		this_type_info._struct.member_types[0] = TYPEINFO(T *) ? TYPEINFO(T *)->hash : 0;
		this_type_info._struct.member_names[0] = "memory"_;
		this_type_info._struct.member_offsets[0] = offsetof(__vector__, memory);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[1] = "size"_;
		this_type_info._struct.member_offsets[1] = offsetof(__vector__, size);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[2] = "capacity"_;
		this_type_info._struct.member_offsets[2] = offsetof(__vector__, capacity);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(allocator *) ? TYPEINFO(allocator *)->hash : 0;
		this_type_info._struct.member_names[3] = "alloc"_;
		this_type_info._struct.member_offsets[3] = offsetof(__vector__, alloc);
		this_type_info._struct.member_circular[3] = 0;
#undef __vector__
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

#pragma pop_macro("T")

#pragma push_macro("K")
#define K string
#pragma push_macro("V")
#define V dbg_value
#pragma push_macro("K")
#define K string
#pragma push_macro("V")
#define V dbg_value
	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(map_element<K,V>);
		this_type_info.name = "map_element"_;
		this_type_info.hash = (type_id)typeid(map_element<K,V>).hash_code();
		this_type_info._struct.member_count = 3;
#define __map_element__ map_element<K,V>
		this_type_info._struct.member_types[0] = TYPEINFO(K) ? TYPEINFO(K)->hash : 0;
		this_type_info._struct.member_names[0] = "key"_;
		this_type_info._struct.member_offsets[0] = offsetof(__map_element__, key);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(V) ? TYPEINFO(V)->hash : 0;
		this_type_info._struct.member_names[1] = "value"_;
		this_type_info._struct.member_offsets[1] = offsetof(__map_element__, value);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[2] = "occupied_and_bucket"_;
		this_type_info._struct.member_offsets[2] = offsetof(__map_element__, occupied_and_bucket);
		this_type_info._struct.member_circular[2] = 0;
#undef __map_element__
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

#pragma pop_macro("K")
#pragma pop_macro("V")

#pragma push_macro("T")
#define T map_element<K,V>
	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(vector<T>);
		this_type_info.name = "vector"_;
		this_type_info.hash = (type_id)typeid(vector<T>).hash_code();
		this_type_info._struct.member_count = 4;
#define __vector__ vector<T>
		this_type_info._struct.member_types[0] = TYPEINFO(T *) ? TYPEINFO(T *)->hash : 0;
		this_type_info._struct.member_names[0] = "memory"_;
		this_type_info._struct.member_offsets[0] = offsetof(__vector__, memory);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[1] = "size"_;
		this_type_info._struct.member_offsets[1] = offsetof(__vector__, size);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[2] = "capacity"_;
		this_type_info._struct.member_offsets[2] = offsetof(__vector__, capacity);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(allocator *) ? TYPEINFO(allocator *)->hash : 0;
		this_type_info._struct.member_names[3] = "alloc"_;
		this_type_info._struct.member_offsets[3] = offsetof(__vector__, alloc);
		this_type_info._struct.member_circular[3] = 0;
#undef __vector__
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

#pragma pop_macro("T")

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(map<K,V>);
		this_type_info.name = "map"_;
		this_type_info.hash = (type_id)typeid(map<K,V>).hash_code();
		this_type_info._struct.member_count = 4;
#define __map__ map<K,V>
		this_type_info._struct.member_types[0] = TYPEINFO(vector<map_element<K, V> >) ? TYPEINFO(vector<map_element<K, V> >)->hash : 0;
		this_type_info._struct.member_names[0] = "contents"_;
		this_type_info._struct.member_offsets[0] = offsetof(__map__, contents);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[1] = "size"_;
		this_type_info._struct.member_offsets[1] = offsetof(__map__, size);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[2] = "max_probe"_;
		this_type_info._struct.member_offsets[2] = offsetof(__map__, max_probe);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(allocator *) ? TYPEINFO(allocator *)->hash : 0;
		this_type_info._struct.member_names[3] = "alloc"_;
		this_type_info._struct.member_offsets[3] = offsetof(__map__, alloc);
		this_type_info._struct.member_circular[3] = 0;
#undef __map__
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

#pragma pop_macro("K")
#pragma pop_macro("V")

#pragma push_macro("T")
#define T profile_node*
	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(vector<T>);
		this_type_info.name = "vector"_;
		this_type_info.hash = (type_id)typeid(vector<T>).hash_code();
		this_type_info._struct.member_count = 4;
#define __vector__ vector<T>
		this_type_info._struct.member_types[0] = TYPEINFO(T *) ? TYPEINFO(T *)->hash : 0;
		this_type_info._struct.member_names[0] = "memory"_;
		this_type_info._struct.member_offsets[0] = offsetof(__vector__, memory);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[1] = "size"_;
		this_type_info._struct.member_offsets[1] = offsetof(__vector__, size);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[2] = "capacity"_;
		this_type_info._struct.member_offsets[2] = offsetof(__vector__, capacity);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(allocator *) ? TYPEINFO(allocator *)->hash : 0;
		this_type_info._struct.member_names[3] = "alloc"_;
		this_type_info._struct.member_offsets[3] = offsetof(__vector__, alloc);
		this_type_info._struct.member_circular[3] = 0;
#undef __vector__
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

#pragma pop_macro("T")

#pragma push_macro("K")
#define K string
#pragma push_macro("V")
#define V dbg_value
#pragma push_macro("K")
#define K string
#pragma push_macro("V")
#define V dbg_value
	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(map_element<K,V>);
		this_type_info.name = "map_element"_;
		this_type_info.hash = (type_id)typeid(map_element<K,V>).hash_code();
		this_type_info._struct.member_count = 3;
#define __map_element__ map_element<K,V>
		this_type_info._struct.member_types[0] = TYPEINFO(K) ? TYPEINFO(K)->hash : 0;
		this_type_info._struct.member_names[0] = "key"_;
		this_type_info._struct.member_offsets[0] = offsetof(__map_element__, key);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(V) ? TYPEINFO(V)->hash : 0;
		this_type_info._struct.member_names[1] = "value"_;
		this_type_info._struct.member_offsets[1] = offsetof(__map_element__, value);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[2] = "occupied_and_bucket"_;
		this_type_info._struct.member_offsets[2] = offsetof(__map_element__, occupied_and_bucket);
		this_type_info._struct.member_circular[2] = 0;
#undef __map_element__
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

#pragma pop_macro("K")
#pragma pop_macro("V")

#pragma push_macro("T")
#define T map_element<K,V>
	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(vector<T>);
		this_type_info.name = "vector"_;
		this_type_info.hash = (type_id)typeid(vector<T>).hash_code();
		this_type_info._struct.member_count = 4;
#define __vector__ vector<T>
		this_type_info._struct.member_types[0] = TYPEINFO(T *) ? TYPEINFO(T *)->hash : 0;
		this_type_info._struct.member_names[0] = "memory"_;
		this_type_info._struct.member_offsets[0] = offsetof(__vector__, memory);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[1] = "size"_;
		this_type_info._struct.member_offsets[1] = offsetof(__vector__, size);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[2] = "capacity"_;
		this_type_info._struct.member_offsets[2] = offsetof(__vector__, capacity);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(allocator *) ? TYPEINFO(allocator *)->hash : 0;
		this_type_info._struct.member_names[3] = "alloc"_;
		this_type_info._struct.member_offsets[3] = offsetof(__vector__, alloc);
		this_type_info._struct.member_circular[3] = 0;
#undef __vector__
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

#pragma pop_macro("T")

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(map<K,V>);
		this_type_info.name = "map"_;
		this_type_info.hash = (type_id)typeid(map<K,V>).hash_code();
		this_type_info._struct.member_count = 4;
#define __map__ map<K,V>
		this_type_info._struct.member_types[0] = TYPEINFO(vector<map_element<K, V> >) ? TYPEINFO(vector<map_element<K, V> >)->hash : 0;
		this_type_info._struct.member_names[0] = "contents"_;
		this_type_info._struct.member_offsets[0] = offsetof(__map__, contents);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[1] = "size"_;
		this_type_info._struct.member_offsets[1] = offsetof(__map__, size);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[2] = "max_probe"_;
		this_type_info._struct.member_offsets[2] = offsetof(__map__, max_probe);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(allocator *) ? TYPEINFO(allocator *)->hash : 0;
		this_type_info._struct.member_names[3] = "alloc"_;
		this_type_info._struct.member_offsets[3] = offsetof(__map__, alloc);
		this_type_info._struct.member_circular[3] = 0;
#undef __map__
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

#pragma pop_macro("K")
#pragma pop_macro("V")

#pragma push_macro("T")
#define T addr_info
	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(vector<T>);
		this_type_info.name = "vector"_;
		this_type_info.hash = (type_id)typeid(vector<T>).hash_code();
		this_type_info._struct.member_count = 4;
#define __vector__ vector<T>
		this_type_info._struct.member_types[0] = TYPEINFO(T *) ? TYPEINFO(T *)->hash : 0;
		this_type_info._struct.member_names[0] = "memory"_;
		this_type_info._struct.member_offsets[0] = offsetof(__vector__, memory);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[1] = "size"_;
		this_type_info._struct.member_offsets[1] = offsetof(__vector__, size);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[2] = "capacity"_;
		this_type_info._struct.member_offsets[2] = offsetof(__vector__, capacity);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(allocator *) ? TYPEINFO(allocator *)->hash : 0;
		this_type_info._struct.member_names[3] = "alloc"_;
		this_type_info._struct.member_offsets[3] = offsetof(__vector__, alloc);
		this_type_info._struct.member_circular[3] = 0;
#undef __vector__
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

#pragma pop_macro("T")

#pragma push_macro("K")
#define K string
#pragma push_macro("V")
#define V platform_thread_id
#pragma push_macro("K")
#define K string
#pragma push_macro("V")
#define V platform_thread_id
	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(map_element<K,V>);
		this_type_info.name = "map_element"_;
		this_type_info.hash = (type_id)typeid(map_element<K,V>).hash_code();
		this_type_info._struct.member_count = 3;
#define __map_element__ map_element<K,V>
		this_type_info._struct.member_types[0] = TYPEINFO(K) ? TYPEINFO(K)->hash : 0;
		this_type_info._struct.member_names[0] = "key"_;
		this_type_info._struct.member_offsets[0] = offsetof(__map_element__, key);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(V) ? TYPEINFO(V)->hash : 0;
		this_type_info._struct.member_names[1] = "value"_;
		this_type_info._struct.member_offsets[1] = offsetof(__map_element__, value);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[2] = "occupied_and_bucket"_;
		this_type_info._struct.member_offsets[2] = offsetof(__map_element__, occupied_and_bucket);
		this_type_info._struct.member_circular[2] = 0;
#undef __map_element__
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

#pragma pop_macro("K")
#pragma pop_macro("V")

#pragma push_macro("T")
#define T map_element<K,V>
	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(vector<T>);
		this_type_info.name = "vector"_;
		this_type_info.hash = (type_id)typeid(vector<T>).hash_code();
		this_type_info._struct.member_count = 4;
#define __vector__ vector<T>
		this_type_info._struct.member_types[0] = TYPEINFO(T *) ? TYPEINFO(T *)->hash : 0;
		this_type_info._struct.member_names[0] = "memory"_;
		this_type_info._struct.member_offsets[0] = offsetof(__vector__, memory);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[1] = "size"_;
		this_type_info._struct.member_offsets[1] = offsetof(__vector__, size);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[2] = "capacity"_;
		this_type_info._struct.member_offsets[2] = offsetof(__vector__, capacity);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(allocator *) ? TYPEINFO(allocator *)->hash : 0;
		this_type_info._struct.member_names[3] = "alloc"_;
		this_type_info._struct.member_offsets[3] = offsetof(__vector__, alloc);
		this_type_info._struct.member_circular[3] = 0;
#undef __vector__
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

#pragma pop_macro("T")

	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(map<K,V>);
		this_type_info.name = "map"_;
		this_type_info.hash = (type_id)typeid(map<K,V>).hash_code();
		this_type_info._struct.member_count = 4;
#define __map__ map<K,V>
		this_type_info._struct.member_types[0] = TYPEINFO(vector<map_element<K, V> >) ? TYPEINFO(vector<map_element<K, V> >)->hash : 0;
		this_type_info._struct.member_names[0] = "contents"_;
		this_type_info._struct.member_offsets[0] = offsetof(__map__, contents);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[1] = "size"_;
		this_type_info._struct.member_offsets[1] = offsetof(__map__, size);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[2] = "max_probe"_;
		this_type_info._struct.member_offsets[2] = offsetof(__map__, max_probe);
		this_type_info._struct.member_circular[2] = 0;
		this_type_info._struct.member_types[3] = TYPEINFO(allocator *) ? TYPEINFO(allocator *)->hash : 0;
		this_type_info._struct.member_names[3] = "alloc"_;
		this_type_info._struct.member_offsets[3] = offsetof(__map__, alloc);
		this_type_info._struct.member_circular[3] = 0;
#undef __map__
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

#pragma pop_macro("K")
#pragma pop_macro("V")

#pragma push_macro("T")
#define T string
	[]() -> void {
		_type_info this_type_info;
		this_type_info.type_type = Type::_struct;
		this_type_info.size = sizeof(array<T>);
		this_type_info.name = "array"_;
		this_type_info.hash = (type_id)typeid(array<T>).hash_code();
		this_type_info._struct.member_count = 3;
#define __array__ array<T>
		this_type_info._struct.member_types[0] = TYPEINFO(T *) ? TYPEINFO(T *)->hash : 0;
		this_type_info._struct.member_names[0] = "memory"_;
		this_type_info._struct.member_offsets[0] = offsetof(__array__, memory);
		this_type_info._struct.member_circular[0] = 0;
		this_type_info._struct.member_types[1] = TYPEINFO(u32) ? TYPEINFO(u32)->hash : 0;
		this_type_info._struct.member_names[1] = "capacity"_;
		this_type_info._struct.member_offsets[1] = offsetof(__array__, capacity);
		this_type_info._struct.member_circular[1] = 0;
		this_type_info._struct.member_types[2] = TYPEINFO(allocator *) ? TYPEINFO(allocator *)->hash : 0;
		this_type_info._struct.member_names[2] = "alloc"_;
		this_type_info._struct.member_offsets[2] = offsetof(__array__, alloc);
		this_type_info._struct.member_circular[2] = 0;
#undef __array__
		type_table.insert(this_type_info.hash, this_type_info, false);
	}();

#pragma pop_macro("T")

}
